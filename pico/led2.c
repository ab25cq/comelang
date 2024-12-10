/// previous struct definition ///
struct __sFILEX;

/// struct definition ///
typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

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

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef unsigned long  int rsize_t;

typedef int wchar_t;

typedef long  double max_align_t;

typedef unsigned int uint;

typedef unsigned long  long absolute_time_t;

enum pico_error_codes { PICO_OK=(0),
PICO_ERROR_NONE=(0),
PICO_ERROR_GENERIC=(-1),
PICO_ERROR_TIMEOUT=(-2),
PICO_ERROR_NO_DATA=(-3),
PICO_ERROR_NOT_PERMITTED=(-4),
PICO_ERROR_INVALID_ARG=(-5),
PICO_ERROR_IO=(-6),
PICO_ERROR_BADAUTH=(-7),
PICO_ERROR_CONNECT_FAILED=(-8),
PICO_ERROR_INSUFFICIENT_RESOURCES=(-9),
PICO_ERROR_INVALID_ADDRESS=(-10),
PICO_ERROR_BAD_ALIGNMENT=(-11),
PICO_ERROR_INVALID_STATE=(-12),
PICO_ERROR_BUFFER_TOO_SMALL=(-13),
PICO_ERROR_PRECONDITION_NOT_MET=(-14),
PICO_ERROR_MODIFIED_DATA=(-15),
PICO_ERROR_INVALID_DATA=(-16),
PICO_ERROR_NOT_FOUND=(-17),
PICO_ERROR_UNSUPPORTED_MODIFICATION=(-18),
PICO_ERROR_LOCK_REQUIRED=(-19),
PICO_ERROR_VERSION_MISMATCH=(-20),
PICO_ERROR_RESOURCE_IN_USE=(-21)
};

typedef struct stdio_driver stdio_driver_t;

typedef void (*hardware_alarm_callback_t)(unsigned int);

extern const unsigned long  long at_the_end_of_time;
extern const unsigned long  long nil_time;
typedef int alarm_id_t;

typedef long long (*alarm_callback_t)(int,void*);

typedef struct alarm_pool alarm_pool_t;

typedef void alarm_pool_timer_t;

typedef struct repeating_timer repeating_timer_t;

typedef _Bool (*repeating_timer_callback_t)(struct repeating_timer*);

struct repeating_timer
{
    long long delay_us;
    struct alarm_pool* pool;
    int alarm_id;
    _Bool (*callback)(struct repeating_timer*);
    void* user_data;
};

enum gpio_function { GPIO_FUNC_XIP=(0),
GPIO_FUNC_SPI=(1),
GPIO_FUNC_UART=(2),
GPIO_FUNC_I2C=(3),
GPIO_FUNC_PWM=(4),
GPIO_FUNC_SIO=(5),
GPIO_FUNC_PIO0=(6),
GPIO_FUNC_PIO1=(7),
GPIO_FUNC_GPCK=(8),
GPIO_FUNC_USB=(9),
GPIO_FUNC_NULL=(15)
};

enum gpio_slew_rate { GPIO_SLEW_RATE_SLOW=(0),
GPIO_SLEW_RATE_FAST=(1)
};

enum gpio_drive_strength { GPIO_DRIVE_STRENGTH_2MA=(0),
GPIO_DRIVE_STRENGTH_4MA=(1),
GPIO_DRIVE_STRENGTH_8MA=(2),
GPIO_DRIVE_STRENGTH_12MA=(3)
};

typedef struct uart_inst uart_inst_t;

extern struct uart_inst* uart0;
extern struct uart_inst* uart1;
enum anonymous_typeY2 { UART_PARITY_NONE
,UART_PARITY_EVEN
,UART_PARITY_ODD
};

typedef enum anonymous_typeY2 uart_parity_t;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int __darwin_wctype_t;

typedef int errno_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long register_t;

typedef unsigned long  long user_addr_t;

typedef unsigned long  long user_size_t;

typedef long long user_ssize_t;

typedef long long user_long_t;

typedef unsigned long  long user_ulong_t;

typedef long long user_time_t;

typedef long long user_off_t;

typedef unsigned long  long syscall_arg_t;

typedef long ssize_t;

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

extern const int sys_nerr;
extern const char* sys_errlist[];
enum anonymous_typeY3 { P_ALL
,P_PID
,P_PGID
};

typedef enum anonymous_typeY3 idtype_t;

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

struct anonymous_typeX4
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX5
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
struct anonymous_typeX4 w_T;
struct anonymous_typeX5 w_S;
};

typedef int ct_rune_t;

typedef int rune_t;

struct anonymous_typeX6
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX6 div_t;

struct anonymous_typeX7
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX7 ldiv_t;

struct anonymous_typeX8
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX8 lldiv_t;

extern int __mb_cur_max;
typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef int dev_t;

typedef unsigned short int mode_t;

extern char* suboptarg;
typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef void* any;

typedef char* string;

extern void* gComeFunResultObject;

struct buffer
{
    char* buf;
    int len;
    int size;
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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

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

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

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

struct integer
{
    long value;
};

struct floating
{
    double value;
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

// source head

// header function
void __assert_rtn(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2, int anonymous_var_nameX3, const char* anonymous_var_nameX4);
void panic_unsupported();
void panic(const char* fmt, ...);
unsigned char rp2040_chip_version();
void stdio_uart_init();
int getchar_timeout_us(unsigned int timeout_us);
unsigned int time_us_32();
unsigned long  long time_us_64();
void busy_wait_us_32(unsigned int delay_us);
void busy_wait_us(unsigned long  long delay_us);
void busy_wait_ms(unsigned int delay_m);
void busy_wait_until(unsigned long  long t);
_Bool time_reached(unsigned long  long t);
void hardware_alarm_claim(unsigned int alarm_num);
void hardware_alarm_unclaim(unsigned int alarm_num);
int hardware_alarm_claim_unused(_Bool required);
void hardware_alarm_set_callback(unsigned int alarm_num, void (*callback)(unsigned int));
_Bool hardware_alarm_set_target(unsigned int alarm_num, unsigned long  long t);
void hardware_alarm_cancel(unsigned int alarm_num);
void hardware_alarm_force_irq(unsigned int alarm_num);
void sleep_until(unsigned long  long target);
void sleep_us(unsigned long  long us);
void sleep_ms(unsigned int ms);
_Bool best_effort_wfe_or_timeout(unsigned long  long timeout_timestamp);
void alarm_pool_init_default();
void runtime_init_default_alarm_pool();
struct alarm_pool* alarm_pool_get_default();
struct alarm_pool* alarm_pool_create_on_timer(void* timer, unsigned int timer_alarm_num, unsigned int max_timers);
void* alarm_pool_timer_for_timer_num(unsigned int timer_num);
void* alarm_pool_get_default_timer();
struct alarm_pool* alarm_pool_create_on_timer_with_unused_hardware_alarm(void* timer, unsigned int max_timers);
unsigned int alarm_pool_timer_alarm_num(struct alarm_pool* pool);
unsigned int alarm_pool_core_num(struct alarm_pool* pool);
void alarm_pool_destroy(struct alarm_pool* pool);
int alarm_pool_add_alarm_at(struct alarm_pool* pool, unsigned long  long time, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past);
int alarm_pool_add_alarm_at_force_in_context(struct alarm_pool* pool, unsigned long  long time, long long (*callback)(int,void*), void* user_data);
long long alarm_pool_remaining_alarm_time_us(struct alarm_pool* pool, int alarm_id);
int alarm_pool_remaining_alarm_time_ms(struct alarm_pool* pool, int alarm_id);
_Bool alarm_pool_cancel_alarm(struct alarm_pool* pool, int alarm_id);
long long remaining_alarm_time_us(int alarm_id);
int remaining_alarm_time_ms(int alarm_id);
_Bool alarm_pool_add_repeating_timer_us(struct alarm_pool* pool, long long delay_us, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out);
_Bool cancel_repeating_timer(struct repeating_timer* timer);
void gpio_set_function(unsigned int gpio, enum gpio_function fn);
enum gpio_function gpio_get_function(unsigned int gpio);
void gpio_pull_up(unsigned int gpio);
void gpio_pull_down(unsigned int gpio);
void gpio_disable_pulls(unsigned int gpio);
void gpio_set_pulls(unsigned int gpio, _Bool up, _Bool down);
void gpio_set_irqover(unsigned int gpio, unsigned int value);
void gpio_set_outover(unsigned int gpio, unsigned int value);
void gpio_set_inover(unsigned int gpio, unsigned int value);
void gpio_set_oeover(unsigned int gpio, unsigned int value);
void gpio_set_input_enabled(unsigned int gpio, _Bool enable);
void gpio_set_input_hysteresis_enabled(unsigned int gpio, _Bool enabled);
_Bool gpio_is_input_hysteresis_enabled(unsigned int gpio);
void gpio_set_slew_rate(unsigned int gpio, enum gpio_slew_rate slew);
enum gpio_slew_rate gpio_get_slew_rate(unsigned int gpio);
void gpio_set_drive_strength(unsigned int gpio, enum gpio_drive_strength drive);
enum gpio_drive_strength gpio_get_drive_strength(unsigned int gpio);
void gpio_init(unsigned int gpio);
void gpio_init_mask(unsigned int gpio_mask);
_Bool gpio_get(unsigned int gpio);
unsigned int gpio_get_all();
void gpio_set_mask(unsigned int mask);
void gpio_clr_mask(unsigned int mask);
void gpio_xor_mask(unsigned int mask);
void gpio_put_masked(unsigned int mask, unsigned int value);
void gpio_put_all(unsigned int value);
void gpio_put(unsigned int gpio, int value);
void gpio_set_dir_out_masked(unsigned int mask);
void gpio_set_dir_in_masked(unsigned int mask);
void gpio_set_dir_masked(unsigned int mask, unsigned int value);
void gpio_set_dir_all_bits(unsigned int value);
void gpio_set_dir(unsigned int gpio, _Bool out);
void gpio_debug_pins_init();
unsigned int uart_init(struct uart_inst* uart, unsigned int baudrate);
void uart_deinit(struct uart_inst* uart);
unsigned int uart_set_baudrate(struct uart_inst* uart, unsigned int baudrate);
void uart_set_hw_flow(struct uart_inst* uart, _Bool cts, _Bool rts);
void uart_set_format(struct uart_inst* uart, unsigned int data_bits, unsigned int stop_bits, enum anonymous_typeY2 parity);
void uart_set_irqs_enabled(struct uart_inst* uart, _Bool rx_has_data, _Bool tx_needs_data);
_Bool uart_is_writable(struct uart_inst* uart);
_Bool uart_is_readable(struct uart_inst* uart);
void uart_write_blocking(struct uart_inst* uart, const unsigned char* src, unsigned long  int len);
void uart_read_blocking(struct uart_inst* uart, unsigned char* dst, unsigned long  int len);
void uart_putc(struct uart_inst* uart, char c);
void uart_putc_raw(struct uart_inst* uart, char c);
void uart_puts(struct uart_inst* uart, const char* s);
char uart_getc(struct uart_inst* uart);
void uart_set_break(struct uart_inst* uart, _Bool en);
void uart_default_tx_wait_blocking();
void setup_default_uart();
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
void swab(const void* anonymous_var_nameX7, void* anonymous_var_nameX8, long anonymous_var_nameX9);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX10, const void* anonymous_var_nameX11, unsigned long  int anonymous_var_nameX12);
void bcopy(const void* anonymous_var_nameX13, void* anonymous_var_nameX14, unsigned long  int anonymous_var_nameX15);
void bzero(void* anonymous_var_nameX16, unsigned long  int anonymous_var_nameX17);
char* index(const char* anonymous_var_nameX18, int anonymous_var_nameX19);
char* rindex(const char* anonymous_var_nameX20, int anonymous_var_nameX21);
int ffs(int anonymous_var_nameX22);
int strcasecmp(const char* anonymous_var_nameX23, const char* anonymous_var_nameX24);
int strncasecmp(const char* anonymous_var_nameX25, const char* anonymous_var_nameX26, unsigned long  int anonymous_var_nameX27);
int ffsl(long anonymous_var_nameX28);
int ffsll(long  long anonymous_var_nameX29);
int fls(int anonymous_var_nameX30);
int flsl(long anonymous_var_nameX31);
int flsll(long  long anonymous_var_nameX32);
int renameat(int anonymous_var_nameX33, const char* anonymous_var_nameX34, int anonymous_var_nameX35, const char* anonymous_var_nameX36);
int renamex_np(const char* anonymous_var_nameX37, const char* anonymous_var_nameX38, unsigned int anonymous_var_nameX39);
int renameatx_np(int anonymous_var_nameX40, const char* anonymous_var_nameX41, int anonymous_var_nameX42, const char* anonymous_var_nameX43, unsigned int anonymous_var_nameX44);
int printf(const char* anonymous_var_nameX45, ...);
void clearerr(struct __sFILE* anonymous_var_nameX66);
int fclose(struct __sFILE* anonymous_var_nameX67);
int feof(struct __sFILE* anonymous_var_nameX68);
int ferror(struct __sFILE* anonymous_var_nameX69);
int fflush(struct __sFILE* anonymous_var_nameX70);
int fgetc(struct __sFILE* anonymous_var_nameX71);
int fgetpos(struct __sFILE* anonymous_var_nameX72, long  long* anonymous_var_nameX73);
char* fgets(char* anonymous_var_nameX74, int anonymous_var_nameX75, struct __sFILE* anonymous_var_nameX76);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX77, const char* anonymous_var_nameX78, ...);
int fputc(int anonymous_var_nameX79, struct __sFILE* anonymous_var_nameX80);
int fputs(const char* anonymous_var_nameX81, struct __sFILE* anonymous_var_nameX82);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX83, const char* anonymous_var_nameX84, struct __sFILE* anonymous_var_nameX85);
int fscanf(struct __sFILE* anonymous_var_nameX86, const char* anonymous_var_nameX87, ...);
int fseek(struct __sFILE* anonymous_var_nameX88, long anonymous_var_nameX89, int anonymous_var_nameX90);
int fsetpos(struct __sFILE* anonymous_var_nameX91, const long  long* anonymous_var_nameX92);
long ftell(struct __sFILE* anonymous_var_nameX93);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX94);
int getchar();
char* gets(char* anonymous_var_nameX95);
void perror(const char* anonymous_var_nameX96);
int putc(int anonymous_var_nameX97, struct __sFILE* anonymous_var_nameX98);
int putchar(int anonymous_var_nameX99);
int puts(const char* anonymous_var_nameX100);
int remove(const char* anonymous_var_nameX101);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX102);
int scanf(const char* anonymous_var_nameX103, ...);
void setbuf(struct __sFILE* anonymous_var_nameX104, char* anonymous_var_nameX105);
int setvbuf(struct __sFILE* anonymous_var_nameX106, char* anonymous_var_nameX107, int anonymous_var_nameX108, unsigned long  int anonymous_var_nameX109);
int sprintf(char* anonymous_var_nameX110, const char* anonymous_var_nameX111, ...);
int sscanf(const char* anonymous_var_nameX112, const char* anonymous_var_nameX113, ...);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX114);
int ungetc(int anonymous_var_nameX115, struct __sFILE* anonymous_var_nameX116);
int vfprintf(struct __sFILE* anonymous_var_nameX117, const char* anonymous_var_nameX118, va_list anonymous_var_nameX119);
int vprintf(const char* anonymous_var_nameX120, va_list anonymous_var_nameX121);
int vsprintf(char* anonymous_var_nameX122, const char* anonymous_var_nameX123, va_list anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
struct __sFILE* fdopen(int anonymous_var_nameX126, const char* anonymous_var_nameX127);
int fileno(struct __sFILE* anonymous_var_nameX128);
int pclose(struct __sFILE* anonymous_var_nameX129);
struct __sFILE* popen(const char* anonymous_var_nameX130, const char* anonymous_var_nameX131);
int __srget(struct __sFILE* anonymous_var_nameX132);
int __svfscanf(struct __sFILE* anonymous_var_nameX133, const char* anonymous_var_nameX134, va_list anonymous_var_nameX135);
int __swbuf(int anonymous_var_nameX136, struct __sFILE* anonymous_var_nameX137);
void flockfile(struct __sFILE* anonymous_var_nameX138);
int ftrylockfile(struct __sFILE* anonymous_var_nameX139);
void funlockfile(struct __sFILE* anonymous_var_nameX140);
int getc_unlocked(struct __sFILE* anonymous_var_nameX141);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX142, struct __sFILE* anonymous_var_nameX143);
int putchar_unlocked(int anonymous_var_nameX144);
int getw(struct __sFILE* anonymous_var_nameX145);
int putw(int anonymous_var_nameX146, struct __sFILE* anonymous_var_nameX147);
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long  long __offset, int __whence);
long  long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX148);
int vscanf(const char* __format, va_list anonymous_var_nameX149);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX150);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX151);
int dprintf(int anonymous_var_nameX152, const char* anonymous_var_nameX153, ...);
int vdprintf(int anonymous_var_nameX154, const char* anonymous_var_nameX155, va_list anonymous_var_nameX156);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX157, const char* anonymous_var_nameX158, ...);
char* ctermid_r(char* anonymous_var_nameX159);
char* fgetln(struct __sFILE* anonymous_var_nameX160, unsigned long  int* anonymous_var_nameX161);
const char* fmtcheck(const char* anonymous_var_nameX162, const char* anonymous_var_nameX163);
int fpurge(struct __sFILE* anonymous_var_nameX164);
void setbuffer(struct __sFILE* anonymous_var_nameX165, char* anonymous_var_nameX166, int anonymous_var_nameX167);
int setlinebuf(struct __sFILE* anonymous_var_nameX168);
int vasprintf(char** anonymous_var_nameX169, const char* anonymous_var_nameX170, va_list anonymous_var_nameX171);
struct __sFILE* funopen(const void* anonymous_var_nameX172, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long  long (*anonymous_lambda_var_nameZ3)(void*,long  long,int), int (*anonymous_lambda_var_nameZ4)(void*));
int __sprintf_chk(char* anonymous_var_nameX183, int anonymous_var_nameX184, unsigned long  int anonymous_var_nameX185, const char* anonymous_var_nameX186, ...);
int __snprintf_chk(char* anonymous_var_nameX187, unsigned long  int anonymous_var_nameX188, int anonymous_var_nameX189, unsigned long  int anonymous_var_nameX190, const char* anonymous_var_nameX191, ...);
int __vsprintf_chk(char* anonymous_var_nameX192, int anonymous_var_nameX193, unsigned long  int anonymous_var_nameX194, const char* anonymous_var_nameX195, va_list anonymous_var_nameX196);
int __vsnprintf_chk(char* anonymous_var_nameX197, unsigned long  int anonymous_var_nameX198, int anonymous_var_nameX199, unsigned long  int anonymous_var_nameX200, const char* anonymous_var_nameX201, va_list anonymous_var_nameX202);
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX223, unsigned int anonymous_var_nameX224);
int getiopolicy_np(int anonymous_var_nameX225, int anonymous_var_nameX226);
int getrlimit(int anonymous_var_nameX227, struct rlimit* anonymous_var_nameX228);
int getrusage(int anonymous_var_nameX229, struct rusage* anonymous_var_nameX230);
int setpriority(int anonymous_var_nameX231, unsigned int anonymous_var_nameX232, int anonymous_var_nameX233);
int setiopolicy_np(int anonymous_var_nameX234, int anonymous_var_nameX235, int anonymous_var_nameX236);
int setrlimit(int anonymous_var_nameX237, const struct rlimit* anonymous_var_nameX238);
int wait(int* anonymous_var_nameX239);
int waitpid(int anonymous_var_nameX240, int* anonymous_var_nameX241, int anonymous_var_nameX242);
int waitid(enum anonymous_typeY3 anonymous_var_nameX243, unsigned int anonymous_var_nameX244, struct __siginfo* anonymous_var_nameX245, int anonymous_var_nameX246);
int wait3(int* anonymous_var_nameX247, int anonymous_var_nameX248, struct rusage* anonymous_var_nameX249);
int wait4(int anonymous_var_nameX250, int* anonymous_var_nameX251, int anonymous_var_nameX252, struct rusage* anonymous_var_nameX253);
void* alloca(unsigned long  int anonymous_var_nameX254);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX255);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX256);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX257);
int atoi(const char* anonymous_var_nameX258);
long atol(const char* anonymous_var_nameX259);
long long atoll(const char* anonymous_var_nameX260);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX6 div(int anonymous_var_nameX263, int anonymous_var_nameX264);
void exit(int anonymous_var_nameX265);
char* getenv(const char* anonymous_var_nameX266);
long labs(long anonymous_var_nameX267);
struct anonymous_typeX7 ldiv(long anonymous_var_nameX268, long anonymous_var_nameX269);
long long llabs(long  long anonymous_var_nameX270);
struct anonymous_typeX8 lldiv(long  long anonymous_var_nameX271, long  long anonymous_var_nameX272);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX273, const char* anonymous_var_nameX274, unsigned long  int anonymous_var_nameX275);
int mbtowc(int* anonymous_var_nameX276, const char* anonymous_var_nameX277, unsigned long  int anonymous_var_nameX278);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX281);
int rand();
void srand(unsigned int anonymous_var_nameX282);
double strtod(const char* anonymous_var_nameX283, char** anonymous_var_nameX284);
float strtof(const char* anonymous_var_nameX285, char** anonymous_var_nameX286);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX287, char** anonymous_var_nameX288);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX289);
unsigned long  int wcstombs(char* anonymous_var_nameX290, const int* anonymous_var_nameX291, unsigned long  int anonymous_var_nameX292);
int wctomb(char* anonymous_var_nameX293, int anonymous_var_nameX294);
void _Exit(int anonymous_var_nameX295);
long a64l(const char* anonymous_var_nameX296);
double drand48();
char* ecvt(double anonymous_var_nameX297, int anonymous_var_nameX298, int* anonymous_var_nameX299, int* anonymous_var_nameX300);
double erand48(unsigned short int anonymous_var_nameX301[3]);
char* fcvt(double anonymous_var_nameX302, int anonymous_var_nameX303, int* anonymous_var_nameX304, int* anonymous_var_nameX305);
char* gcvt(double anonymous_var_nameX306, int anonymous_var_nameX307, char* anonymous_var_nameX308);
int getsubopt(char** anonymous_var_nameX309, char** anonymous_var_nameX310, char** anonymous_var_nameX311);
int grantpt(int anonymous_var_nameX312);
char* initstate(unsigned int anonymous_var_nameX313, char* anonymous_var_nameX314, unsigned long  int anonymous_var_nameX315);
long jrand48(unsigned short int anonymous_var_nameX316[3]);
char* l64a(long anonymous_var_nameX317);
void lcong48(unsigned short int anonymous_var_nameX318[7]);
long lrand48();
char* mktemp(char* anonymous_var_nameX319);
int mkstemp(char* anonymous_var_nameX320);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX321[3]);
int posix_openpt(int anonymous_var_nameX322);
char* ptsname(int anonymous_var_nameX323);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX324);
long random();
int rand_r(unsigned int* anonymous_var_nameX325);
char* realpath(const char* anonymous_var_nameX326, char* anonymous_var_nameX327);
unsigned short int* seed48(unsigned short int anonymous_var_nameX328[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX329);
char* setstate(const char* anonymous_var_nameX330);
void srand48(long anonymous_var_nameX331);
void srandom(unsigned int anonymous_var_nameX332);
int unlockpt(int anonymous_var_nameX333);
int unsetenv(const char* anonymous_var_nameX334);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX335, int anonymous_var_nameX336);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
char* cgetcap(char* anonymous_var_nameX339, const char* anonymous_var_nameX340, int anonymous_var_nameX341);
int cgetclose();
int cgetent(char** anonymous_var_nameX342, char** anonymous_var_nameX343, const char* anonymous_var_nameX344);
int cgetfirst(char** anonymous_var_nameX345, char** anonymous_var_nameX346);
int cgetmatch(const char* anonymous_var_nameX347, const char* anonymous_var_nameX348);
int cgetnext(char** anonymous_var_nameX349, char** anonymous_var_nameX350);
int cgetnum(char* anonymous_var_nameX351, const char* anonymous_var_nameX352, long* anonymous_var_nameX353);
int cgetset(const char* anonymous_var_nameX354);
int cgetstr(char* anonymous_var_nameX355, const char* anonymous_var_nameX356, char** anonymous_var_nameX357);
int cgetustr(char* anonymous_var_nameX358, const char* anonymous_var_nameX359, char** anonymous_var_nameX360);
int daemon(int anonymous_var_nameX361, int anonymous_var_nameX362);
char* devname(int anonymous_var_nameX363, unsigned short int anonymous_var_nameX364);
char* devname_r(int anonymous_var_nameX365, unsigned short int anonymous_var_nameX366, char* buf, int len);
char* getbsize(int* anonymous_var_nameX367, long* anonymous_var_nameX368);
int getloadavg(double anonymous_var_nameX369[], int anonymous_var_nameX370);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX371);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX384, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX390, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX394);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long  long __minval, long  long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
static void buffer_finalize(struct buffer* self);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct buffer* buffer_clone(struct buffer* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static char* buffer_to_string(struct buffer* self);
void stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool _Bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool _Bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool _Bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool _Bool_catch(_Bool self, void* parent, void (*block)(void*));
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
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
struct buffer* buffer_initialize(struct buffer* self);
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
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_equals(char* self, char* right);
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
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool _Bool_clone(_Bool self);
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
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
int _Bool_compare(_Bool left, _Bool right);
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
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
struct integer* integer_initialize(struct integer* self, long value);
static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);
struct integer* _Bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_compare(struct integer* left, struct integer* right);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
char* integer_to_string(struct integer* self);
struct floating* floating_initialize(struct floating* self, double value);
static void floating_finalize(struct floating* self);
double floating_to_double(struct floating* self);
int floating_compare(struct floating* left, struct floating* right);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
_Bool floating_equals(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
int floating_operator_add(struct floating* left, struct floating* right);
int floating_operator_sub(struct floating* left, struct floating* right);
int floating_operator_mult(struct floating* left, struct floating* right);
int floating_operator_div(struct floating* left, struct floating* right);
int floating_operator_gteq(struct floating* left, struct floating* right);
int floating_operator_lteq(struct floating* left, struct floating* right);
int floating_operator_lt(struct floating* left, struct floating* right);
int floating_operator_gt(struct floating* left, struct floating* right);
char* floating_to_string(struct floating* self);
_Bool die(char* msg);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
char* string_xsprintf(char* self, char* msg, ...);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
int fun();
int main();
static int list$1int_begin(struct list$1int* self);
static _Bool list$1int_end(struct list$1int* self);
static int list$1int_next(struct list$1int* self);
// uniq global variable
void* gComeFunResultObject=((void*)0);

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=0;

_Bool gComeDebugLib=0;

_Bool gComeGCLib=0;

int gNumAlloc=0;

int gNumFree=0;

struct sMemHeader* gAllocMem;

struct sHeapPage gHeapPages;

// inline function
static inline unsigned long  long to_us_since_boot(unsigned long  long t){
    return t;
}
static inline void update_us_since_boot(unsigned long  long* t, unsigned long  long us_since_boot){
    *t=us_since_boot;
}
static inline unsigned long  long from_us_since_boot(unsigned long  long us_since_boot){
unsigned long  long t_0;
memset(&t_0, 0, sizeof(unsigned long  long));
    update_us_since_boot(&t_0,us_since_boot);
    return t_0;
}
static inline void __compiler_memory_barrier(){
    __asm volatile("" : : : "memory");
}
static inline void tight_loop_contents(){
}
static inline void busy_wait_at_least_cycles(unsigned int minimum_cycles){
    __asm volatile("1: subs %0, #3\n" "bcs 1b\n" : "+l" (minimum_cycles) : : "cc", "memory");
}
static inline _Bool running_on_fpga(){
    return 0;
}
static inline void __breakpoint(){
    __asm volatile("bkpt #0" : : : "memory");
}
static inline unsigned int get_core_num(){
    return (*(unsigned int*)(3489660928+0));
}
static inline unsigned int __get_current_exception(){
unsigned int exception_1;
memset(&exception_1, 0, sizeof(unsigned int));
    __asm volatile("mrs %0, ipsr" : "=l" (exception_1));
    return exception_1;
}
static inline unsigned char rp2040_rom_version(){
    return *(unsigned char*)19;
}
static inline int __mul_instruction(int a, int b){
    __asm ("muls %0, %1" : "+l" (a) : "l" (b) : "cc");
    return a;
}
static inline void stdio_usb_init(){
}
static inline void stdio_init_all(){
    stdio_uart_init();
}
static inline void stdio_filter_driver(struct stdio_driver* driver){
}
static inline void stdio_set_translate_crlf(struct stdio_driver* driver, _Bool enabled){
}
static inline _Bool stdio_usb_connected(){
    return 1;
}
static inline void check_hardware_alarm_num_param(unsigned int alarm_num){
    ({    if(    ((0||0)&&!0)) {
        (((__builtin_expect(!(!(alarm_num>=4)),0))?(__assert_rtn("check_hardware_alarm_num_param","timer.h",26,"!(alarm_num >= 4u)")):((void)0)));
    }
    });}
static inline unsigned long  long get_absolute_time(){
unsigned long  long t_2;
memset(&t_2, 0, sizeof(unsigned long  long));
    update_us_since_boot(&t_2,time_us_64());
    return t_2;
}
static inline unsigned int us_to_ms(unsigned long  long us){
    if(    us>>32) {
        return (unsigned int)(us/1000);
    }
    else {
        return ((unsigned int)us)/1000;
    }
}
static inline unsigned int to_ms_since_boot(unsigned long  long t){
unsigned long  long us_3;
    us_3=to_us_since_boot(t);
    return us_to_ms(us_3);
}
static inline unsigned long  long delayed_by_us(const unsigned long  long t, unsigned long  long us){
unsigned long  long t2_4;
unsigned long  long base_5;
unsigned long  long delayed_6;
memset(&t2_4, 0, sizeof(unsigned long  long));
    base_5=to_us_since_boot(t);
    delayed_6=base_5+us;
    if(    (long long)delayed_6<0) {
        delayed_6=9223372036854775807;
    }
    update_us_since_boot(&t2_4,delayed_6);
    return t2_4;
}
static inline unsigned long  long delayed_by_ms(const unsigned long  long t, unsigned int ms){
unsigned long  long t2_7;
unsigned long  long base_8;
unsigned long  long delayed_9;
memset(&t2_7, 0, sizeof(unsigned long  long));
    base_8=to_us_since_boot(t);
    delayed_9=base_8+ms*1000;
    if(    (long long)delayed_9<0) {
        delayed_9=9223372036854775807;
    }
    update_us_since_boot(&t2_7,delayed_9);
    return t2_7;
}
static inline unsigned long  long make_timeout_time_us(unsigned long  long us){
    return delayed_by_us(get_absolute_time(),us);
}
static inline unsigned long  long make_timeout_time_ms(unsigned int ms){
    return delayed_by_ms(get_absolute_time(),ms);
}
static inline long long absolute_time_diff_us(unsigned long  long from, unsigned long  long to){
    return (long long)(to_us_since_boot(to)-to_us_since_boot(from));
}
static inline unsigned long  long absolute_time_min(unsigned long  long a, unsigned long  long b){
    return ((to_us_since_boot(a)<to_us_since_boot(b))?(a):(b));
}
static inline _Bool is_at_the_end_of_time(unsigned long  long t){
    return to_us_since_boot(t)==to_us_since_boot(at_the_end_of_time);
}
static inline _Bool is_nil_time(unsigned long  long t){
    return !to_us_since_boot(t);
}
static inline struct alarm_pool* alarm_pool_create(unsigned int timer_alarm_num, unsigned int max_timers){
    return alarm_pool_create_on_timer(alarm_pool_get_default_timer(),timer_alarm_num,max_timers);
}
static inline struct alarm_pool* alarm_pool_create_with_unused_hardware_alarm(unsigned int max_timers){
    return alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_get_default_timer(),max_timers);
}
static inline unsigned int alarm_pool_hardware_alarm_num(struct alarm_pool* pool){
    return alarm_pool_timer_alarm_num(pool);
}
static inline int alarm_pool_add_alarm_in_us(struct alarm_pool* pool, unsigned long  long us, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(pool,delayed_by_us(get_absolute_time(),us),callback,user_data,fire_if_past);
}
static inline int alarm_pool_add_alarm_in_ms(struct alarm_pool* pool, unsigned int ms, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(pool,delayed_by_ms(get_absolute_time(),ms),callback,user_data,fire_if_past);
}
static inline int add_alarm_at(unsigned long  long time, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(alarm_pool_get_default(),time,callback,user_data,fire_if_past);
}
static inline int add_alarm_in_us(unsigned long  long us, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_in_us(alarm_pool_get_default(),us,callback,user_data,fire_if_past);
}
static inline int add_alarm_in_ms(unsigned int ms, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_in_ms(alarm_pool_get_default(),ms,callback,user_data,fire_if_past);
}
static inline _Bool cancel_alarm(int alarm_id){
    return alarm_pool_cancel_alarm(alarm_pool_get_default(),alarm_id);
}
static inline _Bool alarm_pool_add_repeating_timer_ms(struct alarm_pool* pool, int delay_ms, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(pool,delay_ms*(long long)1000,callback,user_data,out);
}
static inline _Bool add_repeating_timer_us(long long delay_us, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(),delay_us,callback,user_data,out);
}
static inline _Bool add_repeating_timer_ms(int delay_ms, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(),delay_ms*(long long)1000,callback,user_data,out);
}
static inline int __sputc(int _c, struct __sFILE* _p){
    if(    --_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
        return (*_p->_p++=_c);
    }
    else {
        return (__swbuf(_c,_p));
    }
}
static inline unsigned short int _OSSwapInt16(unsigned short int _data){
    return (unsigned short int)(_data<<8|_data>>8);
}
static inline unsigned int _OSSwapInt32(unsigned int _data){
    _data=__builtin_bswap32(_data);
    return _data;
}
static inline unsigned long  long _OSSwapInt64(unsigned long  long _data){
    return __builtin_bswap64(_data);
}

// body function













































struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_10;
struct buffer* __result1__;
    result_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2318, "buffer"))));
    buffer_append(result_10,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_10;
    /*i*/come_call_finalizer3(result_10,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}

static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_11;
int i_12;
struct buffer* __result2__;
    result_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2325, "buffer"))));
    for(    i_12=0;    i_12<len;    i_12++    ){
        buffer_append(result_11,self[i_12],strlen(self[i_12]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_11;
    /*i*/come_call_finalizer3(result_11,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_13;
struct buffer* __result3__;
    result_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2334, "buffer"))));
    buffer_append(result_13,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_13;
    /*i*/come_call_finalizer3(result_13,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_14;
struct buffer* __result4__;
    result_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2341, "buffer"))));
    buffer_append(result_14,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_14;
    /*i*/come_call_finalizer3(result_14,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_15;
struct buffer* __result5__;
    result_15=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2348, "buffer"))));
    buffer_append(result_15,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_15;
    /*i*/come_call_finalizer3(result_15,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_16;
struct buffer* __result6__;
    result_16=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2355, "buffer"))));
    buffer_append(result_16,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_16;
    /*i*/come_call_finalizer3(result_16,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_17;
struct buffer* __result7__;
    result_17=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2362, "buffer"))));
    buffer_append(result_17,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_17;
    /*i*/come_call_finalizer3(result_17,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}

struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value18=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 2662, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value18,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
    __dec_obj2=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj3;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj3=self->memory;
            come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result9__;
void* __right_value15 = (void*)0;
struct buffer* result_18;
void* __right_value16 = (void*)0;
char* __dec_obj4;
struct buffer* __result10__;
    if(    self==(void*)0) {
        __result9__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result9__;
    }
    result_18=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "buffer_clone", 3, "buffer"));
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        __dec_obj4=result_18->buf;
        result_18->buf=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "buffer_clone", 4, "char*"));
        /*G*/ __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_18->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_18->size=self->size;
    }
    __result10__ = gComeFunResultObject = __result_obj__ = result_18;
    /*i*/come_call_finalizer3(result_18,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result10__;
}

struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct smart_pointer$1char* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value21=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 2667, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value21,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}

struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct smart_pointer$1short* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value24=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang-pico.h", 2672, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value24,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1short* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct smart_pointer$1int* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value27=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang-pico.h", 2677, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value27,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1int* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct smart_pointer$1long* __result18__;
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value30=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang-pico.h", 2682, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value30,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result17__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result17__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result17__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* buf_19;
void* __right_value33 = (void*)0;
int i_20;
void* __right_value34 = (void*)0;
void* __right_value41 = (void*)0;
    buf_19=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2743, "buffer"))));
    buffer_append_str(buf_19,((char*)(__right_value33=xsprintf("%s %d\n",sname,sline))));
    /* U11 */__right_value33 = come_decrement_ref_count2(__right_value33, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    i_20=gNumComeStackFrame-2;    i_20>=0;    i_20--    ){
        buffer_append_str(buf_19,((char*)(__right_value34=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_20],gComeStackFrameSLine[i_20],gComeStackFrameID[i_20]))));
        /* U11 */__right_value34 = come_decrement_ref_count2(__right_value34, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value41=buffer_to_string(buf_19))));
    /* U11 */__right_value41 = come_decrement_ref_count2(__right_value41, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_19,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_21;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
char* __result19__;
    result_21=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "buffer_to_string", 2, "buffer"))));
    buffer_append_str(result_21,"buffer {");
    buffer_append_str(result_21,"buf:");
    buffer_append_str(result_21,((char*)(__right_value37=charp_to_string(self->buf))));
    /* U11 */__right_value37 = come_decrement_ref_count2(__right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_21,",");
    buffer_append_str(result_21,"len:");
    buffer_append_str(result_21,((char*)(__right_value38=int_to_string(self->len))));
    /* U11 */__right_value38 = come_decrement_ref_count2(__right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_21,",");
    buffer_append_str(result_21,"size:");
    buffer_append_str(result_21,((char*)(__right_value39=int_to_string(self->size))));
    /* U11 */__right_value39 = come_decrement_ref_count2(__right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_21,"}");
    __result19__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value40=buffer_to_string(result_21)));
    /*i*/come_call_finalizer3(result_21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value40 = come_decrement_ref_count2(__right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}

void stackframe(){
int i_22;
    for(    i_22=gNumComeStackFrame-1;    i_22>=0;    i_22--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_22],gComeStackFrameSLine[i_22],gComeStackFrameID[i_22]);
    }
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result20__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result20__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result20__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result21__;
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result21__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result21__;
}

_Bool _Bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool _Bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool _Bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool _Bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_23;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    __builtin___memset_chk(gComeStackFrameSName,0,sizeof(char*)*128,__builtin_object_size(gComeStackFrameSName,0));
    __builtin___memset_chk(gComeStackFrameSLine,0,sizeof(int)*128,__builtin_object_size(gComeStackFrameSLine,0));
    __builtin___memset_chk(gComeStackFrameID,0,sizeof(int)*128,__builtin_object_size(gComeStackFrameID,0));
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_23=0;    i_23<gHeapPages.mSizePages;    i_23++    ){
        gHeapPages.mPages[i_23]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    __builtin___memset_chk(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2,__builtin_object_size(gHeapPages.mFreeMem,0));
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_24;
int n_25;
_Bool flag_26;
int i_27;
struct sMemHeaderTiny* it_28;
int n_29;
int i_30;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_24=gAllocMem;
        n_25=0;
        while(it_24) {
            n_25++;
            flag_26=0;
            printf("#%d ",n_25);
            if(            it_24->class_name) {
                printf("%p (%s): ",(char*)it_24+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_24->class_name);
            }
            for(            i_27=0;            i_27<16;            i_27++            ){
                if(                it_24->sname[i_27]) {
                    printf("%s %d #%d, ",it_24->sname[i_27],it_24->sline[i_27],it_24->id[i_27]);
                    flag_26=1;
                }
            }
            if(            flag_26) {
                puts("");
            }
            it_24=it_24->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_25,gNumAlloc,gNumFree);
    }
    else {
        it_28=(struct sMemHeaderTiny*)gAllocMem;
        n_29=0;
        while(it_28) {
            n_29++;
            it_28=it_28->next;
        }
        if(        n_29>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_29,gNumAlloc,gNumFree);
        }
    }
    for(    i_30=0;    i_30<gHeapPages.mSizePages;    i_30++    ){
        free(gHeapPages.mPages[i_30]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_31;
unsigned long  int free_area_32;
int new_size_pages_33;
void** new_pages_34;
int i_35;
void* __result22__;
    result_31=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_31=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            __builtin___memset_chk(result_31,0,size,__builtin_object_size(result_31,0));
        }
        if(        result_31==((void*)0)) {
            free_area_32=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_32) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_33=gHeapPages.mSizePages*2;
                    new_pages_34=calloc(1,sizeof(char*)*new_size_pages_33);
                    i_35=0;
                    for(                    ;                    i_35<gHeapPages.mSizePages;                    i_35++                    ){
                        new_pages_34[i_35]=gHeapPages.mPages[i_35];
                    }
                    for(                    ;                    i_35<new_size_pages_33;                    i_35++                    ){
                        new_pages_34[i_35]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_34;
                    gHeapPages.mSizePages=new_size_pages_33;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_31=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_31=calloc(1,size);
    }
    __result22__ = gComeFunResultObject = __result_obj__ = result_31;
    gComeFunResultObject = (void*)0;
    return __result22__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_36;
struct sMemHeader* it_37;
void* __result23__;
void* result_38;
struct sMemHeaderTiny* it_39;
void* __result24__;
    if(    gComeDebugLib) {
        result_36=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_37=result_36;
        it_37->allocated=177783;
        it_37->size=size+sizeof(struct sMemHeader);
        it_37->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            __builtin___memcpy_chk(it_37->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame,__builtin_object_size(it_37->sname,0));
            __builtin___memcpy_chk(it_37->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame,__builtin_object_size(it_37->sline,0));
            __builtin___memcpy_chk(it_37->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame,__builtin_object_size(it_37->id,0));
        }
        else {
            __builtin___memcpy_chk(it_37->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16,__builtin_object_size(it_37->sname,0));
            __builtin___memcpy_chk(it_37->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16,__builtin_object_size(it_37->sline,0));
            __builtin___memcpy_chk(it_37->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16,__builtin_object_size(it_37->id,0));
        }
        come_pop_stackframe();
        it_37->next=gAllocMem;
        it_37->prev=((void*)0);
        if(        class_name) {
            it_37->class_name=strdup(class_name);
        }
        else {
            it_37->class_name=((void*)0);
        }
        if(        gAllocMem) {
            gAllocMem->prev=it_37;
        }
        gAllocMem=it_37;
        gNumAlloc++;
        __result23__ = gComeFunResultObject = __result_obj__ = (char*)result_36+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result23__;
    }
    else {
        result_38=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_39=result_38;
        it_39->allocated=177783;
        it_39->size=size+sizeof(struct sMemHeaderTiny);
        it_39->free_next=((void*)0);
        it_39->next=(struct sMemHeaderTiny*)gAllocMem;
        it_39->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_39;
        }
        gAllocMem=(struct sMemHeader*)it_39;
        gNumAlloc++;
        __result24__ = gComeFunResultObject = __result_obj__ = (char*)result_38+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result24__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_40;
struct sMemHeader* prev_it_41;
struct sMemHeader* next_it_42;
unsigned long  int size_43;
struct sMemHeaderTiny* it_44;
struct sMemHeaderTiny* prev_it_45;
struct sMemHeaderTiny* next_it_46;
unsigned long  int size_47;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_40=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_40->allocated!=177783) {
                return;
            }
            it_40->allocated=0;
            prev_it_41=it_40->prev;
            next_it_42=it_40->next;
            if(            it_40->class_name) {
                free(it_40->class_name);
            }
            if(            gAllocMem==it_40) {
                gAllocMem=next_it_42;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_41) {
                    prev_it_41->next=next_it_42;
                }
                if(                next_it_42) {
                    next_it_42->prev=prev_it_41;
                }
            }
            size_43=it_40->size;
            if(            size_43<2048*2) {
                if(                gHeapPages.mFreeMem[size_43]==((void*)0)) {
                    it_40->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_43]=(struct sMemHeaderTiny*)it_40;
                }
                else {
                    it_40->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_43];
                    gHeapPages.mFreeMem[size_43]=(struct sMemHeaderTiny*)it_40;
                }
            }
            else {
                free(it_40);
            }
            gNumFree++;
        }
        else {
            it_44=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_44->allocated!=177783) {
                return;
            }
            it_44->allocated=0;
            prev_it_45=it_44->prev;
            next_it_46=it_44->next;
            if(            gAllocMem==it_44) {
                gAllocMem=(struct sMemHeader*)next_it_46;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_45) {
                    prev_it_45->next=next_it_46;
                }
                if(                next_it_46) {
                    next_it_46->prev=prev_it_45;
                }
            }
            size_47=it_44->size;
            if(            size_47<2048*2) {
                if(                gHeapPages.mFreeMem[size_47]==((void*)0)) {
                    it_44->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_47]=it_44;
                }
                else {
                    it_44->free_next=gHeapPages.mFreeMem[size_47];
                    gHeapPages.mFreeMem[size_47]=it_44;
                }
            }
            else {
                free(it_44);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_48;
char* __result25__;
    it_48=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
    if(    it_48->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_48);
        exit(2);
    }
    __result25__ = gComeFunResultObject = __result_obj__ = it_48->class_name;
    gComeFunResultObject = (void*)0;
    return __result25__;
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_49;
unsigned long  int* ref_count_50;
unsigned long  int* size2_51;
void* __result26__;
    mem_49=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_50=(unsigned long  int*)mem_49;
    *ref_count_50=0;
    size2_51=(unsigned long  int*)(mem_49+sizeof(unsigned long  int));
    *size2_51=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result26__ = gComeFunResultObject = __result_obj__ = mem_49+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result26__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_52;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_52=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_52);
}

void come_free(void* mem){
unsigned long  int* ref_count_53;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_53=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_53);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result27__;
char* mem_54;
unsigned long  int* size_p_55;
unsigned long  int size_56;
void* result_57;
void* __result28__;
    if(    !block) {
        __result27__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result27__;
    }
    mem_54=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_55=(unsigned long  int*)(mem_54+sizeof(unsigned long  int));
    size_56=*size_p_55-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_57=come_calloc(1,size_56,sname,sline,class_name);
    __builtin___memcpy_chk(result_57,block,size_56,__builtin_object_size(result_57,0));
    __result28__ = gComeFunResultObject = __result_obj__ = result_57;
    gComeFunResultObject = (void*)0;
    return __result28__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result29__;
unsigned long  int* ref_count_58;
void* __result30__;
    if(    mem==((void*)0)) {
        __result29__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result29__;
    }
    ref_count_58=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_58)++;
    __result30__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result31__;
unsigned long  int* ref_count_59;
void* __result32__;
    if(    mem==((void*)0)) {
        __result31__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result31__;
    }
    ref_count_59=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_59);
    __result32__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result32__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result33__;
unsigned long  int* ref_count_60;
unsigned long  int count_61;
void (*finalizer_62)(void*);
void* __result34__;
void* __result35__;
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result33__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result33__;
    }
    ref_count_60=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_60)--;
    }
    count_61=*ref_count_60;
    if(    !no_free&&(count_61<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_62=protocol_fun;
            finalizer_62(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result34__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result34__;
    }
    __result35__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result35__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result36__;
void* __result37__;
unsigned long  int* ref_count_63;
unsigned long  int count_64;
void (*finalizer_65)(void*);
void* __result38__;
void* __result39__;
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result36__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result36__;
        }
    }
    if(    mem==((void*)0)) {
        __result37__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result37__;
    }
    ref_count_63=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_63)--;
    }
    count_64=*ref_count_63;
    if(    !no_free&&(count_64<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_65=protocol_fun;
            finalizer_65(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result38__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result38__;
    }
    __result39__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_66)(void*);
void (*finalizer_67)(void*);
unsigned long  int* ref_count_68;
unsigned long  int count_69;
void (*finalizer_70)(void*);
void (*finalizer_71)(void*);
memset(&finalizer_66, 0, sizeof(void (*)(void*)));
memset(&finalizer_67, 0, sizeof(void (*)(void*)));
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_66=protocol_fun;
                finalizer_66(protocol_obj);
            }
            finalizer_67=fun;
            finalizer_67(mem);
        }
    }
    else {
        ref_count_68=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_68)--;
        }
        count_69=*ref_count_68;
        if(        !no_free&&(count_69<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_70=protocol_fun;
                    finalizer_70(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_71=fun;
                    finalizer_71(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_72)(void*);
void (*finalizer_73)(void*);
unsigned long  int* ref_count_74;
unsigned long  int count_75;
void (*finalizer_76)(void*);
void (*finalizer_77)(void*);
memset(&finalizer_72, 0, sizeof(void (*)(void*)));
memset(&finalizer_73, 0, sizeof(void (*)(void*)));
memset(&finalizer_76, 0, sizeof(void (*)(void*)));
memset(&finalizer_77, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_72=protocol_fun;
                finalizer_72(protocol_obj);
            }
            finalizer_73=fun;
            finalizer_73(mem);
        }
    }
    else {
        ref_count_74=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_74)--;
        }
        count_75=*ref_count_74;
        if(        !no_free&&(count_75<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_76=protocol_fun;
                    finalizer_76(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_77=fun;
                    finalizer_77(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_78)(void*);
unsigned long  int* ref_count_79;
unsigned long  int count_80;
void (*finalizer_81)(void*);
memset(&finalizer_78, 0, sizeof(void (*)(void*)));
memset(&finalizer_81, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            finalizer_78=fun;
            finalizer_78(mem);
        }
    }
    else {
        ref_count_79=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_79)--;
        }
        count_80=*ref_count_79;
        if(        !no_free&&(count_80<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    finalizer_81=fun;
                    finalizer_81(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result40__;
int len_82;
void* __right_value42 = (void*)0;
char* result_83;
char* __result41__;
    if(    str==((void*)0)) {
        __result40__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result40__;
    }
    len_82=strlen(str)+1;
    result_83=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_82)), "/usr/local/include/comelang-pico.h", 3558, "char"));
    __builtin___strncpy_chk(result_83,str,len_82,__builtin_object_size(result_83,((2>1)?(1):(0))));
    __result41__ = gComeFunResultObject = __result_obj__ = result_83;
    /* U13 */result_83 = come_decrement_ref_count2(result_83, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result41__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_84;
int i_85;
    found_84=0;
    for(    i_85=0;    i_85<len;    i_85++    ){
        if(        array[i_85]==element) {
            found_84=1;
            break;
        }
    }
    return found_84;
}

char* _Bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
char* __result42__;
void* __right_value44 = (void*)0;
char* __result43__;
    if(    self) {
        __result42__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value43=__builtin_string("true")));
        /* U11 */__right_value43 = come_decrement_ref_count2(__right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result42__;
    }
    else {
        __result43__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value44=__builtin_string("false")));
        /* U11 */__right_value44 = come_decrement_ref_count2(__right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result43__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
char* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value45=xsprintf("%c",self)));
    /* U11 */__right_value45 = come_decrement_ref_count2(__right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
char* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value46=xsprintf("%d",self)));
    /* U11 */__right_value46 = come_decrement_ref_count2(__right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result45__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value47 = (void*)0;
char* __result46__;
    __result46__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value47=xsprintf("%d",self)));
    /* U11 */__right_value47 = come_decrement_ref_count2(__right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
char* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value48=xsprintf("%ld",self)));
    /* U11 */__right_value48 = come_decrement_ref_count2(__right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
char* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value49=xsprintf("%ld",self)));
    /* U11 */__right_value49 = come_decrement_ref_count2(__right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value50 = (void*)0;
char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value50=xsprintf("%f",self)));
    /* U11 */__right_value50 = come_decrement_ref_count2(__right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value51=xsprintf("%lf",self)));
    /* U11 */__right_value51 = come_decrement_ref_count2(__right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
char* __result51__;
void* __right_value53 = (void*)0;
char* __result52__;
    if(    self==((void*)0)) {
        __result51__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value52=__builtin_string("")));
        /* U11 */__right_value52 = come_decrement_ref_count2(__right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result51__;
    }
    __result52__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value53=__builtin_string(self)));
    /* U11 */__right_value53 = come_decrement_ref_count2(__right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
char* __result53__;
void* __right_value55 = (void*)0;
char* __result54__;
    if(    self==((void*)0)) {
        __result53__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value54=__builtin_string("")));
        /* U11 */__right_value54 = come_decrement_ref_count2(__right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result53__;
    }
    __result54__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value55=__builtin_string(self)));
    /* U11 */__right_value55 = come_decrement_ref_count2(__right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value56 = (void*)0;
char* __dec_obj11;
struct buffer* __result55__;
    self->size=128;
    __dec_obj11=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3647, "char"));
    /*G*/ __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
struct buffer* __result58__;
void* __right_value59 = (void*)0;
char* old_buf_87;
int old_len_88;
int new_size_89;
void* __right_value60 = (void*)0;
char* __dec_obj13;
struct buffer* __result59__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result58__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result58__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_87=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3707, "char"));
        __builtin___memcpy_chk(old_buf_87,self->buf,self->size,__builtin_object_size(old_buf_87,0));
        old_len_88=self->len;
        new_size_89=(self->size+size+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_89)), "/usr/local/include/comelang-pico.h", 3711, "char"));
        /*G*/ __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_87,old_len_88,__builtin_object_size(self->buf,0));
        self->buf[old_len_88]=0;
        self->size=new_size_89;
        /* U13 */old_buf_87 = come_decrement_ref_count2(old_buf_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem,size,__builtin_object_size(self->buf+self->len,0));
    self->len+=size;
    self->buf[self->len]=0;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result59__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result60__;
void* __right_value61 = (void*)0;
char* old_buf_90;
int old_len_91;
int new_size_92;
void* __right_value62 = (void*)0;
char* __dec_obj14;
struct buffer* __result61__;
    if(    self==((void*)0)) {
        __result60__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result60__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_90=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang-pico.h", 3730, "char*"));
        old_len_91=self->len;
        new_size_92=(self->size+10+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_92)), "/usr/local/include/comelang-pico.h", 3734, "char"));
        /*G*/ __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_90,old_len_91,__builtin_object_size(self->buf,0));
        self->buf[old_len_91]=0;
        self->size=new_size_92;
        /* U13 */old_buf_90 = come_decrement_ref_count2(old_buf_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result61__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result62__;
int size_93;
void* __right_value63 = (void*)0;
char* old_buf_94;
int old_len_95;
int new_size_96;
void* __right_value64 = (void*)0;
char* __dec_obj15;
struct buffer* __result63__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result62__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result62__;
    }
    size_93=strlen(mem);
    if(    self->len+size_93+1+1>=self->size) {
        old_buf_94=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3756, "char"));
        __builtin___memcpy_chk(old_buf_94,self->buf,self->size,__builtin_object_size(old_buf_94,0));
        old_len_95=self->len;
        new_size_96=(self->size+size_93+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "/usr/local/include/comelang-pico.h", 3760, "char"));
        /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_94,old_len_95,__builtin_object_size(self->buf,0));
        self->buf[old_len_95]=0;
        self->size=new_size_96;
        /* U13 */old_buf_94 = come_decrement_ref_count2(old_buf_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem,size_93,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_93;
    self->buf[self->len]=0;
    __result63__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result63__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result64__;
va_list args_97;
char* result_98;
int len_99;
struct buffer* __result65__;
void* __right_value65 = (void*)0;
char* mem_100;
int size_101;
void* __right_value66 = (void*)0;
char* old_buf_102;
int old_len_103;
int new_size_104;
void* __right_value67 = (void*)0;
char* __dec_obj16;
struct buffer* __result66__;
memset(&args_97, 0, sizeof(va_list));
result_98 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result64__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result64__;
    }
    __builtin_va_start(args_97,msg);
    len_99=vasprintf(&result_98,msg,args_97);
    __builtin_va_end(args_97);
    if(    len_99<0) {
        __result65__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    mem_100=(char*)come_increment_ref_count(__builtin_string(result_98));
    size_101=strlen(mem_100);
    if(    self->len+size_101+1+1>=self->size) {
        old_buf_102=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3793, "char"));
        __builtin___memcpy_chk(old_buf_102,self->buf,self->size,__builtin_object_size(old_buf_102,0));
        old_len_103=self->len;
        new_size_104=(self->size+size_101+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_104)), "/usr/local/include/comelang-pico.h", 3797, "char"));
        /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_102,old_len_103,__builtin_object_size(self->buf,0));
        self->buf[old_len_103]=0;
        self->size=new_size_104;
        /* U13 */old_buf_102 = come_decrement_ref_count2(old_buf_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem_100,size_101,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_101;
    self->buf[self->len]=0;
    free(result_98);
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */mem_100 = come_decrement_ref_count2(mem_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result67__;
int size_105;
void* __right_value68 = (void*)0;
char* old_buf_106;
int old_len_107;
int new_size_108;
void* __right_value69 = (void*)0;
char* __dec_obj17;
struct buffer* __result68__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result67__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    size_105=strlen(mem)+1;
    if(    self->len+size_105+1+1+1>=self->size) {
        old_buf_106=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3819, "char"));
        __builtin___memcpy_chk(old_buf_106,self->buf,self->size,__builtin_object_size(old_buf_106,0));
        old_len_107=self->len;
        new_size_108=(self->size+size_105+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_108)), "/usr/local/include/comelang-pico.h", 3823, "char"));
        /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_106,old_len_107,__builtin_object_size(self->buf,0));
        self->buf[old_len_107]=0;
        self->size=new_size_108;
        /* U13 */old_buf_106 = come_decrement_ref_count2(old_buf_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem,size_105,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_105;
    self->buf[self->len]=0;
    self->len++;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result68__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result69__;
int* mem_109;
int size_110;
void* __right_value70 = (void*)0;
char* old_buf_111;
int old_len_112;
int new_size_113;
void* __right_value71 = (void*)0;
char* __dec_obj18;
struct buffer* __result70__;
    if(    self==((void*)0)) {
        __result69__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    mem_109=&value;
    size_110=sizeof(int);
    if(    self->len+size_110+1+1>=self->size) {
        old_buf_111=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3846, "char"));
        __builtin___memcpy_chk(old_buf_111,self->buf,self->size,__builtin_object_size(old_buf_111,0));
        old_len_112=self->len;
        new_size_113=(self->size+size_110+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_113)), "/usr/local/include/comelang-pico.h", 3850, "char"));
        /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_111,old_len_112,__builtin_object_size(self->buf,0));
        self->buf[old_len_112]=0;
        self->size=new_size_113;
        /* U13 */old_buf_111 = come_decrement_ref_count2(old_buf_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem_109,size_110,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_110;
    self->buf[self->len]=0;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result70__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_114;
int size_115;
void* __right_value72 = (void*)0;
char* old_buf_116;
int old_len_117;
int new_size_118;
void* __right_value73 = (void*)0;
char* __dec_obj19;
struct buffer* __result71__;
    mem_114=&value;
    size_115=sizeof(long);
    if(    self->len+size_115+1+1>=self->size) {
        old_buf_116=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3869, "char"));
        __builtin___memcpy_chk(old_buf_116,self->buf,self->size,__builtin_object_size(old_buf_116,0));
        old_len_117=self->len;
        new_size_118=(self->size+size_115+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_118)), "/usr/local/include/comelang-pico.h", 3873, "char"));
        /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_116,old_len_117,__builtin_object_size(self->buf,0));
        self->buf[old_len_117]=0;
        self->size=new_size_118;
        /* U13 */old_buf_116 = come_decrement_ref_count2(old_buf_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem_114,size_115,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_115;
    self->buf[self->len]=0;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result71__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result72__;
short* mem_119;
int size_120;
void* __right_value74 = (void*)0;
char* old_buf_121;
int old_len_122;
int new_size_123;
void* __right_value75 = (void*)0;
char* __dec_obj20;
struct buffer* __result73__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    mem_119=&value;
    size_120=sizeof(short);
    if(    self->len+size_120+1+1>=self->size) {
        old_buf_121=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3896, "char"));
        __builtin___memcpy_chk(old_buf_121,self->buf,self->size,__builtin_object_size(old_buf_121,0));
        old_len_122=self->len;
        new_size_123=(self->size+size_120+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_123)), "/usr/local/include/comelang-pico.h", 3900, "char"));
        /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_121,old_len_122,__builtin_object_size(self->buf,0));
        self->buf[old_len_122]=0;
        self->size=new_size_123;
        /* U13 */old_buf_121 = come_decrement_ref_count2(old_buf_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem_119,size_120,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_120;
    self->buf[self->len]=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result73__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result74__;
int len_124;
int new_size_125;
void* __right_value76 = (void*)0;
char* __dec_obj21;
int i_126;
struct buffer* __result75__;
    if(    self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    len_124=self->len;
    len_124=(len_124+3)&~3;
    if(    len_124>=self->size) {
        new_size_125=(self->size+1+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_125)), "/usr/local/include/comelang-pico.h", 3924, "char"));
        /*G*/ __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_125;
    }
    for(    i_126=self->len;    i_126<len_124;    i_126++    ){
        self->buf[i_126]=0;
    }
    self->len=len_124;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result75__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* result_127;
struct buffer* __result76__;
struct buffer* __result77__;
    result_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 3954, "buffer"))));
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = result_127;
        /*i*/come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    buffer_append_str(result_127,self);
    __result77__ = gComeFunResultObject = __result_obj__ = result_127;
    /*i*/come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* result_128;
struct buffer* __result78__;
struct buffer* __result79__;
    result_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 3967, "buffer"))));
    if(    self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = result_128;
        /*i*/come_call_finalizer3(result_128,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    buffer_append_str(result_128,self);
    __result79__ = gComeFunResultObject = __result_obj__ = result_128;
    /*i*/come_call_finalizer3(result_128,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    self==((void*)0)) {
        return 1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    self==((void*)0)) {
        return 1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
char* __result82__;
int len_129;
void* __right_value84 = (void*)0;
char* result_130;
char* __result83__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value83=__builtin_string("")));
        /* U11 */__right_value83 = come_decrement_ref_count2(__right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    len_129=strlen(self)+strlen(right);
    result_130=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_129+1)), "/usr/local/include/comelang-pico.h", 4194, "char"));
    __builtin___strncpy_chk(result_130,self,len_129+1,__builtin_object_size(result_130,((2>1)?(1):(0))));
    __builtin___strncat_chk(result_130,right,len_129+1,__builtin_object_size(result_130,((2>1)?(1):(0))));
    __result83__ = gComeFunResultObject = __result_obj__ = result_130;
    /* U13 */result_130 = come_decrement_ref_count2(result_130, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
char* __result84__;
int len_131;
void* __right_value86 = (void*)0;
char* result_132;
char* __result85__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result84__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value85=__builtin_string("")));
        /* U11 */__right_value85 = come_decrement_ref_count2(__right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    len_131=strlen(self)+strlen(right);
    result_132=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_131+1)), "/usr/local/include/comelang-pico.h", 4209, "char"));
    __builtin___strncpy_chk(result_132,self,len_131+1,__builtin_object_size(result_132,((2>1)?(1):(0))));
    __builtin___strncat_chk(result_132,right,len_131+1,__builtin_object_size(result_132,((2>1)?(1):(0))));
    __result85__ = gComeFunResultObject = __result_obj__ = result_132;
    /* U13 */result_132 = come_decrement_ref_count2(result_132, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
char* __result86__;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct buffer* buf_133;
int i_134;
void* __right_value90 = (void*)0;
char* __result87__;
    if(    self==((void*)0)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value87=__builtin_string("")));
        /* U11 */__right_value87 = come_decrement_ref_count2(__right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    buf_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4222, "buffer"))));
    for(    i_134=0;    i_134<right;    i_134++    ){
        buffer_append_str(buf_133,self);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value90=buffer_to_string(buf_133)));
    /*i*/come_call_finalizer3(buf_133,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value90 = come_decrement_ref_count2(__right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
char* __result88__;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_135;
int i_136;
void* __right_value94 = (void*)0;
char* __result89__;
    if(    self==((void*)0)) {
        __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value91=__builtin_string("")));
        /* U11 */__right_value91 = come_decrement_ref_count2(__right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    buf_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4236, "buffer"))));
    for(    i_136=0;    i_136<right;    i_136++    ){
        buffer_append_str(buf_135,self);
    }
    __result89__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value94=buffer_to_string(buf_135)));
    /*i*/come_call_finalizer3(buf_135,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value94 = come_decrement_ref_count2(__right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int string_get_hash_key(char* value){
int result_137;
char* p_138;
    if(    value==((void*)0)) {
        return 0;
    }
    result_137=0;
    p_138=value;
    while(*p_138) {
        result_137+=(*p_138);
        p_138++;
    }
    return result_137;
}

unsigned int charp_get_hash_key(char* value){
int result_139;
char* p_140;
    if(    value==((void*)0)) {
        return 0;
    }
    result_139=0;
    p_140=value;
    while(*p_140) {
        result_139+=(*p_140);
        p_140++;
    }
    return result_139;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result90__;
void* __right_value95 = (void*)0;
char* __result91__;
    if(    self==((void*)0)) {
        __result90__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    __result91__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value95=__builtin_string(self)));
    /* U11 */__right_value95 = come_decrement_ref_count2(__right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result92__;
void* __right_value96 = (void*)0;
char* __result93__;
    if(    self==((void*)0)) {
        __result92__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result92__;
    }
    __result93__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value96=__builtin_string(self)));
    /* U11 */__right_value96 = come_decrement_ref_count2(__right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

_Bool xiswalpha(int c){
_Bool result_141;
    result_141=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_141;
}

_Bool xiswblank(int c){
    return c==32||c==9;
}

_Bool xiswdigit(int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_142;
    result_142=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_142;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_143;
    result_143=(c>=32&&c<=126);
    return result_143;
}

_Bool xiswascii(int c){
_Bool result_144;
    result_144=(c>=32&&c<=126);
    return result_144;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* string_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
char* __result94__;
int len_145;
void* __right_value98 = (void*)0;
char* result_146;
int i_147;
char* __result95__;
    if(    str==((void*)0)) {
        __result94__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value97=__builtin_string("")));
        /* U11 */__right_value97 = come_decrement_ref_count2(__right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    len_145=strlen(str);
    result_146=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_145+1)), "/usr/local/include/comelang-pico.h", 4453, "char"));
    for(    i_147=0;    i_147<len_145;    i_147++    ){
        result_146[i_147]=str[len_145-i_147-1];
    }
    result_146[len_145]=0;
    __result95__ = gComeFunResultObject = __result_obj__ = result_146;
    /* U13 */result_146 = come_decrement_ref_count2(result_146, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
char* __result96__;
int len_148;
void* __right_value100 = (void*)0;
char* result_149;
int i_150;
char* __result97__;
    if(    str==((void*)0)) {
        __result96__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value99=__builtin_string("")));
        /* U11 */__right_value99 = come_decrement_ref_count2(__right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    len_148=strlen(str);
    result_149=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_148+1)), "/usr/local/include/comelang-pico.h", 4470, "char"));
    for(    i_150=0;    i_150<len_148;    i_150++    ){
        result_149[i_150]=str[len_148-i_150-1];
    }
    result_149[len_148]=0;
    __result97__ = gComeFunResultObject = __result_obj__ = result_149;
    /* U13 */result_149 = come_decrement_ref_count2(result_149, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
char* __result98__;
int len_151;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result99__;
void* __right_value104 = (void*)0;
char* __result100__;
void* __right_value105 = (void*)0;
char* __result101__;
void* __right_value106 = (void*)0;
char* result_152;
char* __result102__;
    if(    str==((void*)0)) {
        __result98__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value101=__builtin_string("")));
        /* U11 */__right_value101 = come_decrement_ref_count2(__right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    len_151=strlen(str);
    if(    head<0) {
        head+=len_151;
    }
    if(    tail<0) {
        tail+=len_151+1;
    }
    if(    head>tail) {
        __result99__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value103=string_reverse(((char*)(__right_value102=charp_substring(str,tail,head))))));
        /* U11 */__right_value102 = come_decrement_ref_count2(__right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value103 = come_decrement_ref_count2(__right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_151) {
        tail=len_151;
    }
    if(    head==tail) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value104=__builtin_string("")));
        /* U11 */__right_value104 = come_decrement_ref_count2(__right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    if(    tail-head+1<1) {
        __result101__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value105=__builtin_string("")));
        /* U11 */__right_value105 = come_decrement_ref_count2(__right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    result_152=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4515, "char"));
    __builtin___memcpy_chk(result_152,str+head,tail-head,__builtin_object_size(result_152,0));
    result_152[tail-head]=0;
    __result102__ = gComeFunResultObject = __result_obj__ = result_152;
    /* U13 */result_152 = come_decrement_ref_count2(result_152, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
char* __result103__;
int len_153;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result104__;
void* __right_value110 = (void*)0;
char* __result105__;
void* __right_value111 = (void*)0;
char* __result106__;
void* __right_value112 = (void*)0;
char* result_154;
char* __result107__;
    if(    str==((void*)0)) {
        __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value107=__builtin_string("")));
        /* U11 */__right_value107 = come_decrement_ref_count2(__right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    len_153=strlen(str);
    if(    head<0) {
        head+=len_153;
    }
    if(    tail<0) {
        tail+=len_153+1;
    }
    if(    head>tail) {
        __result104__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value109=string_reverse(((char*)(__right_value108=charp_substring(str,tail,head))))));
        /* U11 */__right_value108 = come_decrement_ref_count2(__right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value109 = come_decrement_ref_count2(__right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_153) {
        tail=len_153;
    }
    if(    head==tail) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value110=__builtin_string("")));
        /* U11 */__right_value110 = come_decrement_ref_count2(__right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    if(    tail-head+1<1) {
        __result106__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value111=__builtin_string("")));
        /* U11 */__right_value111 = come_decrement_ref_count2(__right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    result_154=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4558, "char"));
    __builtin___memcpy_chk(result_154,str+head,tail-head,__builtin_object_size(result_154,0));
    result_154[tail-head]=0;
    __result107__ = gComeFunResultObject = __result_obj__ = result_154;
    /* U13 */result_154 = come_decrement_ref_count2(result_154, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result108__;
int len_155;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
char* __result109__;
void* __right_value116 = (void*)0;
char* __result110__;
void* __right_value117 = (void*)0;
char* __result111__;
void* __right_value118 = (void*)0;
char* result_156;
char* __result112__;
    if(    str==((void*)0)) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=__builtin_string("")));
        /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    len_155=strlen(str);
    if(    head<0) {
        head+=len_155;
    }
    if(    tail<0) {
        tail+=len_155+1;
    }
    if(    head>tail) {
        __result109__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=string_reverse(((char*)(__right_value114=charp_substring(str,tail,head))))));
        /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_155) {
        tail=len_155;
    }
    if(    head==tail) {
        __result110__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value116=__builtin_string("")));
        /* U11 */__right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    if(    tail-head+1<1) {
        __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=__builtin_string("")));
        /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    result_156=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4601, "char"));
    __builtin___memcpy_chk(result_156,str+head,tail-head,__builtin_object_size(result_156,0));
    result_156[tail-head]=0;
    __result112__ = gComeFunResultObject = __result_obj__ = result_156;
    /* U13 */result_156 = come_decrement_ref_count2(result_156, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result113__;
int len_157;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
char* __result114__;
void* __right_value122 = (void*)0;
char* __result115__;
void* __right_value123 = (void*)0;
char* __result116__;
void* __right_value124 = (void*)0;
char* result_158;
char* __result117__;
    if(    str==((void*)0)) {
        __result113__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("")));
        /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    len_157=strlen(str);
    if(    head<0) {
        head+=len_157;
    }
    if(    tail<0) {
        tail+=len_157+1;
    }
    if(    head>tail) {
        __result114__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value121=string_reverse(((char*)(__right_value120=charp_substring(str,tail,head))))));
        /* U11 */__right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value121 = come_decrement_ref_count2(__right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_157) {
        tail=len_157;
    }
    if(    head==tail) {
        __result115__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=__builtin_string("")));
        /* U11 */__right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    if(    tail-head+1<1) {
        __result116__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value123=__builtin_string("")));
        /* U11 */__right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    result_158=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4644, "char"));
    __builtin___memcpy_chk(result_158,str+head,tail-head,__builtin_object_size(result_158,0));
    result_158[tail-head]=0;
    __result117__ = gComeFunResultObject = __result_obj__ = result_158;
    /* U13 */result_158 = come_decrement_ref_count2(result_158, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result118__;
va_list args_159;
char* result_160;
int len_161;
void* __right_value126 = (void*)0;
char* __result119__;
void* __right_value127 = (void*)0;
char* result2_162;
char* __result120__;
memset(&args_159, 0, sizeof(va_list));
result_160 = (void*)0;
    if(    msg==((void*)0)) {
        __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=__builtin_string("")));
        /* U11 */__right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    __builtin_va_start(args_159,msg);
    len_161=vasprintf(&result_160,msg,args_159);
    __builtin_va_end(args_159);
    if(    len_161<0) {
        __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value126=__builtin_string("")));
        /* U11 */__right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    result2_162=(char*)come_increment_ref_count(__builtin_string(result_160));
    free(result_160);
    __result120__ = gComeFunResultObject = __result_obj__ = result2_162;
    /* U13 */result2_162 = come_decrement_ref_count2(result2_162, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
char* __result121__;
int len_163;
void* __right_value129 = (void*)0;
char* __result122__;
void* __right_value130 = (void*)0;
char* __result123__;
void* __right_value131 = (void*)0;
char* sub_str_164;
void* __right_value132 = (void*)0;
char* __result124__;
    if(    str==((void*)0)) {
        __result121__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value128=__builtin_string("")));
        /* U11 */__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    len_163=strlen(str);
    if(    strcmp(str,"")==0) {
        __result122__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value129=__builtin_string(str)));
        /* U11 */__right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    if(    head<0) {
        head+=len_163;
    }
    if(    tail<0) {
        tail+=len_163+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result123__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value130=__builtin_string(str)));
        /* U11 */__right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    if(    tail>=len_163) {
        tail=len_163;
    }
    sub_str_164=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    __builtin___memcpy_chk(str+head,sub_str_164,string_length(sub_str_164)+1,__builtin_object_size(str+head,0));
    __result124__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=__builtin_string(str)));
    /* U13 */sub_str_164 = come_decrement_ref_count2(sub_str_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
char* __result125__;
int len_165;
void* __right_value134 = (void*)0;
char* __result126__;
void* __right_value135 = (void*)0;
char* __result127__;
void* __right_value136 = (void*)0;
char* sub_str_166;
void* __right_value137 = (void*)0;
char* __result128__;
    if(    str==((void*)0)) {
        __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value133=__builtin_string("")));
        /* U11 */__right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    len_165=strlen(str);
    if(    strcmp(str,"")==0) {
        __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=__builtin_string(str)));
        /* U11 */__right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    if(    head<0) {
        head+=len_165;
    }
    if(    tail<0) {
        tail+=len_165+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value135=__builtin_string(str)));
        /* U11 */__right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    if(    tail>=len_165) {
        tail=len_165;
    }
    sub_str_166=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    __builtin___memcpy_chk(str+head,sub_str_166,string_length(sub_str_166)+1,__builtin_object_size(str+head,0));
    __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value137=__builtin_string(str)));
    /* U13 */sub_str_166 = come_decrement_ref_count2(sub_str_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1charph* __result130__;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1charph* result_169;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* str_170;
int i_171;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct list$1charph* __result132__;
    if(    self==((void*)0)) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value139=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4755, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    result_169=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4758, "list$1charph"))));
    str_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4760, "buffer"))));
    for(    i_171=0;    i_171<charp_length(self);    i_171++    ){
        if(        self[i_171]==c) {
            list$1charph_push_back(result_169,(char*)come_increment_ref_count(__builtin_string(str_170->buf)));
            buffer_reset(str_170);
        }
        else {
            buffer_append_char(str_170,self[i_171]);
        }
    }
    if(    buffer_length(str_170)!=0) {
        list$1charph_push_back(result_169,(char*)come_increment_ref_count(__builtin_string(str_170->buf)));
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_169;
    /*i*/come_call_finalizer3(result_169,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result129__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_167;
struct list_item$1charph* prev_it_168;
    it_167=self->head;
    while(it_167!=((void*)0)) {
        prev_it_168=it_167;
        it_167=it_167->next;
        /*i*/come_call_finalizer3(prev_it_168,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj22;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj22=self->item;
            /*G*/ __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_172;
char* __dec_obj23;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_173;
char* __dec_obj24;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_174;
char* __dec_obj25;
struct list$1charph* __result131__;
    if(    self->len==0) {
        litem_172=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1charph"))));
        litem_172->prev=((void*)0);
        litem_172->next=((void*)0);
        __dec_obj23=litem_172->item;
        litem_172->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_172;
        self->head=litem_172;
    }
    else if(    self->len==1) {
        litem_173=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1charph"))));
        litem_173->prev=self->head;
        litem_173->next=((void*)0);
        __dec_obj24=litem_173->item;
        litem_173->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_173;
        self->head->next=litem_173;
    }
    else {
        litem_174=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1charph"))));
        litem_174->prev=self->tail;
        litem_174->next=((void*)0);
        __dec_obj25=litem_174->item;
        litem_174->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_174;
        self->tail=litem_174;
    }
    self->len++;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* __result133__;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct list$1charph* result_175;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* str_176;
int i_177;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct list$1charph* __result134__;
    if(    self==((void*)0)) {
        __result133__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4781, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value150,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    result_175=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4784, "list$1charph"))));
    str_176=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4786, "buffer"))));
    for(    i_177=0;    i_177<charp_length(self);    i_177++    ){
        if(        self[i_177]==c) {
            list$1charph_push_back(result_175,(char*)come_increment_ref_count(__builtin_string(str_176->buf)));
            buffer_reset(str_176);
        }
        else {
            buffer_append_char(str_176,self[i_177]);
        }
    }
    if(    buffer_length(str_176)!=0) {
        list$1charph_push_back(result_175,(char*)come_increment_ref_count(__builtin_string(str_176->buf)));
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_175;
    /*i*/come_call_finalizer3(result_175,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_176,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value157 = (void*)0;
char* __result135__;
char* p_178;
void* __right_value158 = (void*)0;
char* __result136__;
void* __right_value159 = (void*)0;
char* __result137__;
void* __right_value160 = (void*)0;
char* __result138__;
    if(    path==((void*)0)) {
        __result135__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value157=__builtin_string("")));
        /* U11 */__right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    p_178=path+strlen(path);
    while(p_178>=path) {
        if(        *p_178==47) {
            break;
        }
        else {
            p_178--;
        }
    }
    if(    p_178<path) {
        __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=__builtin_string(path)));
        /* U11 */__right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    else {
        __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value159=__builtin_string(p_178+1)));
        /* U11 */__right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value160=__builtin_string("")));
    /* U11 */__right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
char* __result139__;
void* __right_value162 = (void*)0;
char* path2_179;
char* p_180;
void* __right_value163 = (void*)0;
char* __result140__;
void* __right_value164 = (void*)0;
char* __result141__;
void* __right_value165 = (void*)0;
char* __result142__;
    if(    path==((void*)0)) {
        __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=__builtin_string("")));
        /* U11 */__right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    path2_179=(char*)come_increment_ref_count(xbasename(path));
    p_180=path2_179+strlen(path2_179);
    while(p_180>=path2_179) {
        if(        *p_180==46) {
            break;
        }
        else {
            p_180--;
        }
    }
    if(    p_180<path2_179) {
        __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=__builtin_string(path2_179)));
        /* U13 */path2_179 = come_decrement_ref_count2(path2_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    else {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value164=string_substring(path2_179,0,p_180-path2_179)));
        /* U13 */path2_179 = come_decrement_ref_count2(path2_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
    /* U13 */path2_179 = come_decrement_ref_count2(path2_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
char* __result143__;
char* p_181;
void* __right_value167 = (void*)0;
char* __result144__;
void* __right_value168 = (void*)0;
char* __result145__;
void* __right_value169 = (void*)0;
char* __result146__;
    if(    path==((void*)0)) {
        __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string("")));
        /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    p_181=path+strlen(path);
    while(p_181>=path) {
        if(        *p_181==46) {
            break;
        }
        else {
            p_181--;
        }
    }
    if(    p_181<path) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string(path)));
        /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    else {
        __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string(p_181+1)));
        /* U11 */__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=__builtin_string("")));
    /* U11 */__right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value170 = (void*)0;
char* __result147__;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct buffer* buf_182;
int size_184;
void* __right_value173 = (void*)0;
char* __result148__;
    if(    f==((void*)0)) {
        __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value170=__builtin_string("")));
        /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    buf_182=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5053, "buffer"))));
    while(1) {
        char buf2_183[1024];
        memset(&buf2_183, 0, sizeof(char)        *(1024)        );
        size_184=fread(buf2_183,1,1024,f);
        buffer_append(buf_182,buf2_183,size_184);
        if(        size_184<1024) {
            break;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=buffer_to_string(buf_182)));
    /*i*/come_call_finalizer3(buf_182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

int FILE_write(struct __sFILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f){
int result_185;
    if(    f==((void*)0)) {
        return -1;
    }
    result_185=fclose(f);
    if(    result_185<0) {
        return result_185;
    }
    return result_185;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct __sFILE* __result149__;
va_list args_187;
int result_188;
struct __sFILE* __result150__;
struct __sFILE* __result151__;
memset(&args_187, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    char msg2_186[1024*2*2*2];
    memset(&msg2_186, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_187,msg);
    __builtin___vsnprintf_chk(msg2_186,1024*2*2*2,0,__builtin_object_size(msg2_186,((2>1)?(1):(0))),msg,args_187);
    __builtin_va_end(args_187);
    result_188=fprintf(f,"%s",msg2_186);
    if(    result_188<0) {
        __result150__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    __result151__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result151__;
}

int string_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_189;
int result_190;
int result2_191;
f_189 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_189=fopen(file_name,"a");
    }
    else {
        f_189=fopen(file_name,"w");
    }
    if(    f_189==((void*)0)) {
        return -1;
    }
    result_190=fwrite(self,strlen(self),1,f_189);
    if(    result_190<0) {
        return result_190;
    }
    result2_191=fclose(f_189);
    if(    result2_191<0) {
        return result2_191;
    }
    return result_190;
}

int charp_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_192;
int result_193;
int result2_194;
f_192 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_192=fopen(file_name,"a");
    }
    else {
        f_192=fopen(file_name,"w");
    }
    if(    f_192==((void*)0)) {
        return -1;
    }
    result_193=fwrite(self,strlen(self),1,f_192);
    if(    result_193<0) {
        return result_193;
    }
    result2_194=fclose(f_192);
    if(    result2_194<0) {
        return result2_194;
    }
    return result_193;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value174 = (void*)0;
char* __result152__;
struct __sFILE* f_195;
void* __right_value175 = (void*)0;
char* __result153__;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct buffer* buf_196;
int size_198;
void* __right_value178 = (void*)0;
char* result_199;
int result2_200;
void* __right_value179 = (void*)0;
char* __result154__;
char* __result155__;
    if(    file_name==((void*)0)) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value174=__builtin_string("")));
        /* U11 */__right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    f_195=fopen(file_name,"r");
    if(    f_195==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value175=__builtin_string("")));
        /* U11 */__right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    buf_196=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5193, "buffer"))));
    while(1) {
        char buf2_197[1024];
        memset(&buf2_197, 0, sizeof(char)        *(1024)        );
        size_198=fread(buf2_197,1,1024,f_195);
        buffer_append(buf_196,buf2_197,size_198);
        if(        size_198<1024) {
            break;
        }
    }
    result_199=(char*)come_increment_ref_count(buffer_to_string(buf_196));
    result2_200=fclose(f_195);
    if(    result2_200<0) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_196,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_199 = come_decrement_ref_count2(result_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    __result155__ = gComeFunResultObject = __result_obj__ = result_199;
    /*i*/come_call_finalizer3(buf_196,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_199 = come_decrement_ref_count2(result_199, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
char* __result156__;
struct __sFILE* f_201;
void* __right_value181 = (void*)0;
char* __result157__;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct buffer* buf_202;
int size_204;
void* __right_value184 = (void*)0;
char* result_205;
int result2_206;
void* __right_value185 = (void*)0;
char* __result158__;
char* __result159__;
    if(    file_name==((void*)0)) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=__builtin_string("")));
        /* U11 */__right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    f_201=fopen(file_name,"r");
    if(    f_201==((void*)0)) {
        __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value181=__builtin_string("")));
        /* U11 */__right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    buf_202=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5230, "buffer"))));
    while(1) {
        char buf2_203[1024];
        memset(&buf2_203, 0, sizeof(char)        *(1024)        );
        size_204=fread(buf2_203,1,1024,f_201);
        buffer_append(buf_202,buf2_203,size_204);
        if(        size_204<1024) {
            break;
        }
    }
    result_205=(char*)come_increment_ref_count(buffer_to_string(buf_202));
    result2_206=fclose(f_201);
    if(    result2_206<0) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_205 = come_decrement_ref_count2(result_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    __result159__ = gComeFunResultObject = __result_obj__ = result_205;
    /*i*/come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_205 = come_decrement_ref_count2(result_205, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct list$1charph* result_207;
struct list$1charph* __result160__;
void* __right_value188 = (void*)0;
struct list$1charph* __result161__;
    result_207=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 5257, "list$1charph"))));
    if(    f==((void*)0)) {
        __result160__ = gComeFunResultObject = __result_obj__ = result_207;
        /*i*/come_call_finalizer3(result_207,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    while(1) {
        char buf_208[1024];
        memset(&buf_208, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_208,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_207,(char*)come_increment_ref_count(__builtin_string(buf_208)));
    }
    __result161__ = gComeFunResultObject = __result_obj__ = result_207;
    /*i*/come_call_finalizer3(result_207,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
struct __sFILE* f_209;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_209=fopen(path,mode);
    if(    f_209) {
        block(parent,f_209);
        fclose(f_209);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value189 = (void*)0;
char* __result162__;
void* __right_value190 = (void*)0;
char* __result163__;
    if(    self==((void*)0)) {
        __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value189=__builtin_string("")));
        /* U11 */__right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    puts(self);
    __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value190=__builtin_string(self)));
    /* U11 */__right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value191 = (void*)0;
char* __result164__;
void* __right_value192 = (void*)0;
char* __result165__;
    if(    self==((void*)0)) {
        __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value191=__builtin_string("")));
        /* U11 */__right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    printf("%s",self);
    __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value192=__builtin_string(self)));
    /* U11 */__right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value193 = (void*)0;
char* __result166__;
char* msg2_210;
va_list args_211;
void* __right_value194 = (void*)0;
char* __result167__;
msg2_210 = (void*)0;
memset(&args_211, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string("")));
        /* U11 */__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    __builtin_va_start(args_211,self);
    vasprintf(&msg2_210,self,args_211);
    __builtin_va_end(args_211);
    printf("%s",msg2_210);
    free(msg2_210);
    __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string(self)));
    /* U11 */__right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value195 = (void*)0;
char* __result168__;
char* msg2_212;
va_list args_213;
void* __right_value196 = (void*)0;
char* __result169__;
msg2_212 = (void*)0;
memset(&args_213, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value195=__builtin_string("")));
        /* U11 */__right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    __builtin_va_start(args_213,self);
    vasprintf(&msg2_212,self,args_213);
    __builtin_va_end(args_213);
    printf("%s",msg2_212);
    free(msg2_212);
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value196=__builtin_string(self)));
    /* U11 */__right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result170__;
void* __right_value198 = (void*)0;
char* __result171__;
    if(    self==((void*)0)) {
        __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=__builtin_string("")));
        /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    puts(self);
    __result171__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=__builtin_string(self)));
    /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_214;
    for(    i_214=0;    i_214<self;    i_214++    ){
        block(parent,i_214);
    }
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__=(void*)0;
struct integer* __result172__;
    self->value=value;
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static void integer_finalize(struct integer* self){
}

int integer_to_int(struct integer* self){
    return self->value;
}

struct integer* _Bool_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct integer* __result173__;
    __result173__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value200=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5424, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value200,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct integer* char_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct integer* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value202=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5429, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value202,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

struct integer* short_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct integer* __result175__;
    __result175__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value204=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5434, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value204,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

struct integer* int_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct integer* __result176__;
    __result176__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value206=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5439, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value206,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct integer* __result177__;
    __result177__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value208=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5444, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value208,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

int integer_compare(struct integer* left, struct integer* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

_Bool integer_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
    return !integer_operator_equals(self,right);
}

int integer_operator_add(struct integer* left, struct integer* right){
    return left->value+right->value;
}

int integer_operator_sub(struct integer* left, struct integer* right){
    return left->value-right->value;
}

int integer_operator_mult(struct integer* left, struct integer* right){
    return left->value*right->value;
}

int integer_operator_div(struct integer* left, struct integer* right){
    return left->value/right->value;
}

int integer_operator_mod(struct integer* left, struct integer* right){
    return left->value%right->value;
}

int integer_operator_lshift(struct integer* left, struct integer* right){
    return left->value<<right->value;
}

int integer_operator_rshift(struct integer* left, struct integer* right){
    return left->value>>right->value;
}

int integer_operator_gteq(struct integer* left, struct integer* right){
    return left->value>=right->value;
}

int integer_operator_lteq(struct integer* left, struct integer* right){
    return left->value<=right->value;
}

int integer_operator_lt(struct integer* left, struct integer* right){
    return left->value<right->value;
}

int integer_operator_gt(struct integer* left, struct integer* right){
    return left->value>right->value;
}

int integer_operator_and(struct integer* left, struct integer* right){
    return left->value&right->value;
}

int integer_operator_xor(struct integer* left, struct integer* right){
    return left->value^right->value;
}

int integer_operator_or(struct integer* left, struct integer* right){
    return left->value|right->value;
}

char* integer_to_string(struct integer* self){
void* __result_obj__=(void*)0;
void* __right_value209 = (void*)0;
char* __result178__;
    __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value209=long_to_string(self->value)));
    /* U11 */__right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

struct floating* floating_initialize(struct floating* self, double value){
void* __result_obj__=(void*)0;
struct floating* __result179__;
    self->value=value;
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,floating_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static void floating_finalize(struct floating* self){
}

double floating_to_double(struct floating* self){
    return self->value;
}

int floating_compare(struct floating* left, struct floating* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

struct floating* float_to_floating(float self){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct floating* __result180__;
    __result180__ = gComeFunResultObject = __result_obj__ = ((struct floating*)(__right_value211=floating_initialize((struct floating*)come_increment_ref_count((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "/usr/local/include/comelang-pico.h", 5584, "floating")),self)));
    /*g*/come_call_finalizer3(__right_value211,floating_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

struct floating* double_to_floating(double self){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct floating* __result181__;
    __result181__ = gComeFunResultObject = __result_obj__ = ((struct floating*)(__right_value213=floating_initialize((struct floating*)come_increment_ref_count((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "/usr/local/include/comelang-pico.h", 5589, "floating")),self)));
    /*g*/come_call_finalizer3(__right_value213,floating_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

_Bool floating_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_not_equals(struct floating* self, struct floating* right){
    return !floating_operator_equals(self,right);
}

int floating_operator_add(struct floating* left, struct floating* right){
    return left->value+right->value;
}

int floating_operator_sub(struct floating* left, struct floating* right){
    return left->value-right->value;
}

int floating_operator_mult(struct floating* left, struct floating* right){
    return left->value*right->value;
}

int floating_operator_div(struct floating* left, struct floating* right){
    return left->value/right->value;
}

int floating_operator_gteq(struct floating* left, struct floating* right){
    return left->value>=right->value;
}

int floating_operator_lteq(struct floating* left, struct floating* right){
    return left->value<=right->value;
}

int floating_operator_lt(struct floating* left, struct floating* right){
    return left->value<right->value;
}

int floating_operator_gt(struct floating* left, struct floating* right){
    return left->value>right->value;
}

char* floating_to_string(struct floating* self){
void* __result_obj__=(void*)0;
void* __right_value214 = (void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value214=double_to_string(self->value)));
    /* U11 */__right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

_Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return 0;
}

struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct buffer* buf_215;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct smart_pointer$1char* __result183__;
    buf_215=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5716, "buffer"))));
    buffer_append(buf_215,(char*)self,sizeof(char)*len);
    __result183__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value218=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 5718, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_215))));
    /*i*/come_call_finalizer3(buf_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value218,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct buffer* buf_216;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct smart_pointer$1charp* __result185__;
    buf_216=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5723, "buffer"))));
    buffer_append(buf_216,(char*)self,sizeof(char*)*len);
    __result185__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value222=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang-pico.h", 5725, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_216))));
    /*i*/come_call_finalizer3(buf_216,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value222,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1charp* __result184__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result184__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct buffer* buf_217;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct smart_pointer$1short* __result186__;
    buf_217=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5730, "buffer"))));
    buffer_append(buf_217,(char*)self,sizeof(short)*len);
    __result186__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value226=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang-pico.h", 5732, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_217))));
    /*i*/come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value226,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct buffer* buf_218;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct smart_pointer$1int* __result187__;
    buf_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5737, "buffer"))));
    buffer_append(buf_218,(char*)self,sizeof(int)*len);
    __result187__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value230=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang-pico.h", 5739, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_218))));
    /*i*/come_call_finalizer3(buf_218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value230,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_219;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct smart_pointer$1long* __result188__;
    buf_219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5744, "buffer"))));
    buffer_append(buf_219,(char*)self,sizeof(long)*len);
    __result188__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value234=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang-pico.h", 5746, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_219))));
    /*i*/come_call_finalizer3(buf_219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value234,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct buffer* buf_220;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct smart_pointer$1float* __result190__;
    buf_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5751, "buffer"))));
    buffer_append(buf_220,(char*)self,sizeof(float)*len);
    __result190__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value238=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang-pico.h", 5753, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_220))));
    /*i*/come_call_finalizer3(buf_220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value238,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj28;
struct smart_pointer$1float* __result189__;
    __dec_obj28=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj28,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj29;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj29=self->memory;
            come_call_finalizer3(__dec_obj29,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct buffer* buf_221;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct smart_pointer$1double* __result192__;
    buf_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5758, "buffer"))));
    buffer_append(buf_221,(char*)self,sizeof(double)*len);
    __result192__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value242=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang-pico.h", 5760, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_221))));
    /*i*/come_call_finalizer3(buf_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value242,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj30;
struct smart_pointer$1double* __result191__;
    __dec_obj30=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj30,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result191__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj31;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj31=self->memory;
            come_call_finalizer3(__dec_obj31,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
void* __right_value247 = (void*)0;
struct list$1char* __result195__;
    __result195__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value247=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang-pico.h", 5765, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value247,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_222;
struct list$1char* __result194__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        list$1char_push_back(self,values[i_222]);
    }
    __result194__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
struct list_item$1char* litem_223;
void* __right_value245 = (void*)0;
struct list_item$1char* litem_224;
void* __right_value246 = (void*)0;
struct list_item$1char* litem_225;
struct list$1char* __result193__;
    if(    self->len==0) {
        litem_223=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value244=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1char"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value245=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1char"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value246=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1char"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_226;
struct list_item$1char* prev_it_227;
    it_226=self->head;
    while(it_226!=((void*)0)) {
        prev_it_227=it_226;
        it_226=it_226->next;
        /*i*/come_call_finalizer3(prev_it_227,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1charp* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value252=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang-pico.h", 5770, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value252,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_228;
struct list$1charp* __result197__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_228=0;    i_228<num_value;    i_228++    ){
        list$1charp_push_back(self,values[i_228]);
    }
    __result197__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct list_item$1charp* litem_229;
void* __right_value250 = (void*)0;
struct list_item$1charp* litem_230;
void* __right_value251 = (void*)0;
struct list_item$1charp* litem_231;
struct list$1charp* __result196__;
    if(    self->len==0) {
        litem_229=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value249=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1charp"))));
        litem_229->prev=((void*)0);
        litem_229->next=((void*)0);
        litem_229->item=item;
        self->tail=litem_229;
        self->head=litem_229;
    }
    else if(    self->len==1) {
        litem_230=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value250=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1charp"))));
        litem_230->prev=self->head;
        litem_230->next=((void*)0);
        litem_230->item=item;
        self->tail=litem_230;
        self->head->next=litem_230;
    }
    else {
        litem_231=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value251=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1charp"))));
        litem_231->prev=self->tail;
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail->next=litem_231;
        self->tail=litem_231;
    }
    self->len++;
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_232;
struct list_item$1charp* prev_it_233;
    it_232=self->head;
    while(it_232!=((void*)0)) {
        prev_it_233=it_232;
        it_232=it_232->next;
        /*i*/come_call_finalizer3(prev_it_233,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1short* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value257=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang-pico.h", 5775, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value257,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_234;
struct list$1short* __result200__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_234=0;    i_234<num_value;    i_234++    ){
        list$1short_push_back(self,values[i_234]);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
struct list_item$1short* litem_235;
void* __right_value255 = (void*)0;
struct list_item$1short* litem_236;
void* __right_value256 = (void*)0;
struct list_item$1short* litem_237;
struct list$1short* __result199__;
    if(    self->len==0) {
        litem_235=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value254=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1short"))));
        litem_235->prev=((void*)0);
        litem_235->next=((void*)0);
        litem_235->item=item;
        self->tail=litem_235;
        self->head=litem_235;
    }
    else if(    self->len==1) {
        litem_236=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value255=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1short"))));
        litem_236->prev=self->head;
        litem_236->next=((void*)0);
        litem_236->item=item;
        self->tail=litem_236;
        self->head->next=litem_236;
    }
    else {
        litem_237=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value256=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1short"))));
        litem_237->prev=self->tail;
        litem_237->next=((void*)0);
        litem_237->item=item;
        self->tail->next=litem_237;
        self->tail=litem_237;
    }
    self->len++;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_238;
struct list_item$1short* prev_it_239;
    it_238=self->head;
    while(it_238!=((void*)0)) {
        prev_it_239=it_238;
        it_238=it_238->next;
        /*i*/come_call_finalizer3(prev_it_239,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1int* __result204__;
    __result204__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value262=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang-pico.h", 5780, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value262,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_240;
struct list$1int* __result203__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_240=0;    i_240<num_value;    i_240++    ){
        list$1int_push_back(self,values[i_240]);
    }
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1int* litem_241;
void* __right_value260 = (void*)0;
struct list_item$1int* litem_242;
void* __right_value261 = (void*)0;
struct list_item$1int* litem_243;
struct list$1int* __result202__;
    if(    self->len==0) {
        litem_241=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value259=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1int"))));
        litem_241->prev=((void*)0);
        litem_241->next=((void*)0);
        litem_241->item=item;
        self->tail=litem_241;
        self->head=litem_241;
    }
    else if(    self->len==1) {
        litem_242=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value260=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1int"))));
        litem_242->prev=self->head;
        litem_242->next=((void*)0);
        litem_242->item=item;
        self->tail=litem_242;
        self->head->next=litem_242;
    }
    else {
        litem_243=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value261=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1int"))));
        litem_243->prev=self->tail;
        litem_243->next=((void*)0);
        litem_243->item=item;
        self->tail->next=litem_243;
        self->tail=litem_243;
    }
    self->len++;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_244;
struct list_item$1int* prev_it_245;
    it_244=self->head;
    while(it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        /*i*/come_call_finalizer3(prev_it_245,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1long* __result207__;
    __result207__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value267=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang-pico.h", 5785, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value267,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_246;
struct list$1long* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_246=0;    i_246<num_value;    i_246++    ){
        list$1long_push_back(self,values[i_246]);
    }
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1long* litem_247;
void* __right_value265 = (void*)0;
struct list_item$1long* litem_248;
void* __right_value266 = (void*)0;
struct list_item$1long* litem_249;
struct list$1long* __result205__;
    if(    self->len==0) {
        litem_247=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value264=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1long"))));
        litem_247->prev=((void*)0);
        litem_247->next=((void*)0);
        litem_247->item=item;
        self->tail=litem_247;
        self->head=litem_247;
    }
    else if(    self->len==1) {
        litem_248=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value265=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1long"))));
        litem_248->prev=self->head;
        litem_248->next=((void*)0);
        litem_248->item=item;
        self->tail=litem_248;
        self->head->next=litem_248;
    }
    else {
        litem_249=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value266=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1long"))));
        litem_249->prev=self->tail;
        litem_249->next=((void*)0);
        litem_249->item=item;
        self->tail->next=litem_249;
        self->tail=litem_249;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_250;
struct list_item$1long* prev_it_251;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        /*i*/come_call_finalizer3(prev_it_251,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1float* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value272=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang-pico.h", 5790, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value272,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_252;
struct list$1float* __result209__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_252=0;    i_252<num_value;    i_252++    ){
        list$1float_push_back(self,values[i_252]);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1float* litem_253;
void* __right_value270 = (void*)0;
struct list_item$1float* litem_254;
void* __right_value271 = (void*)0;
struct list_item$1float* litem_255;
struct list$1float* __result208__;
    if(    self->len==0) {
        litem_253=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value269=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1float"))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        litem_253->item=item;
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1) {
        litem_254=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value270=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1float"))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        litem_254->item=item;
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value271=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1float"))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        litem_255->item=item;
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_256;
struct list_item$1float* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        /*i*/come_call_finalizer3(prev_it_257,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1double* __result213__;
    __result213__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value277=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang-pico.h", 5795, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value277,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_258;
struct list$1double* __result212__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_258=0;    i_258<num_value;    i_258++    ){
        list$1double_push_back(self,values[i_258]);
    }
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1double* litem_259;
void* __right_value275 = (void*)0;
struct list_item$1double* litem_260;
void* __right_value276 = (void*)0;
struct list_item$1double* litem_261;
struct list$1double* __result211__;
    if(    self->len==0) {
        litem_259=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value274=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 172, "list_item$1double"))));
        litem_259->prev=((void*)0);
        litem_259->next=((void*)0);
        litem_259->item=item;
        self->tail=litem_259;
        self->head=litem_259;
    }
    else if(    self->len==1) {
        litem_260=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value275=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 182, "list_item$1double"))));
        litem_260->prev=self->head;
        litem_260->next=((void*)0);
        litem_260->item=item;
        self->tail=litem_260;
        self->head->next=litem_260;
    }
    else {
        litem_261=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value276=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1double"))));
        litem_261->prev=self->tail;
        litem_261->next=((void*)0);
        litem_261->item=item;
        self->tail->next=litem_261;
        self->tail=litem_261;
    }
    self->len++;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_262;
struct list_item$1double* prev_it_263;
    it_262=self->head;
    while(it_262!=((void*)0)) {
        prev_it_263=it_262;
        it_262=it_262->next;
        /*i*/come_call_finalizer3(prev_it_263,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
void* __right_value280 = (void*)0;
struct vector$1char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value280=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang-pico.h", 5800, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value280,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct vector$1char* __result214__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value279=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 966, "char")));
    __builtin___memcpy_chk(self->items,values,sizeof(char)*self->len,__builtin_object_size(self->items,0));
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_264;
    if(    0) {
        for(        i_264=0;        i_264<self->len;        i_264++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
void* __right_value283 = (void*)0;
struct vector$1charp* __result217__;
    __result217__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value283=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang-pico.h", 5805, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value283,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct vector$1charp* __result216__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value282=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 966, "char*")));
    __builtin___memcpy_chk(self->items,values,sizeof(char*)*self->len,__builtin_object_size(self->items,0));
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_265;
    if(    0) {
        for(        i_265=0;        i_265<self->len;        i_265++        ){
            /* U13 */self->items[i_265] = come_decrement_ref_count2(self->items[i_265], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
void* __right_value286 = (void*)0;
struct vector$1short* __result219__;
    __result219__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value286=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang-pico.h", 5810, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value286,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct vector$1short* __result218__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value285=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 966, "short")));
    __builtin___memcpy_chk(self->items,values,sizeof(short)*self->len,__builtin_object_size(self->items,0));
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_266;
    if(    0) {
        for(        i_266=0;        i_266<self->len;        i_266++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
void* __right_value289 = (void*)0;
struct vector$1int* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value289=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang-pico.h", 5815, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value289,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct vector$1int* __result220__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value288=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 966, "int")));
    __builtin___memcpy_chk(self->items,values,sizeof(int)*self->len,__builtin_object_size(self->items,0));
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_267;
    if(    0) {
        for(        i_267=0;        i_267<self->len;        i_267++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
void* __right_value292 = (void*)0;
struct vector$1long* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value292=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang-pico.h", 5820, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value292,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct vector$1long* __result222__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value291=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 966, "long")));
    __builtin___memcpy_chk(self->items,values,sizeof(long)*self->len,__builtin_object_size(self->items,0));
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_268;
    if(    0) {
        for(        i_268=0;        i_268<self->len;        i_268++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
void* __right_value295 = (void*)0;
struct vector$1float* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value295=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang-pico.h", 5825, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value295,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct vector$1float* __result224__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value294=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 966, "float")));
    __builtin___memcpy_chk(self->items,values,sizeof(float)*self->len,__builtin_object_size(self->items,0));
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_269;
    if(    0) {
        for(        i_269=0;        i_269<self->len;        i_269++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
void* __right_value298 = (void*)0;
struct vector$1double* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value298=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang-pico.h", 5830, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value298,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct vector$1double* __result226__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value297=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 966, "double")));
    __builtin___memcpy_chk(self->items,values,sizeof(double)*self->len,__builtin_object_size(self->items,0));
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_270;
    if(    0) {
        for(        i_270=0;        i_270<self->len;        i_270++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_271;
int i_272;
    result_271=0;
    for(    i_272=0;    i_272<len;    i_272++    ){
        if(        strncmp(self[i_272],str,strlen(self[i_272]))==0) {
            result_271=1;
            break;
        }
    }
    return result_271;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
char* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value299=xsprintf(msg,self)));
    /* U11 */__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value300=xsprintf(msg,self)));
    /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
char* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value301=xsprintf(msg,self)));
    /* U11 */__right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

int fun(){
    return 3;
}

int main(){
int __list_values1___274[10];
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1int* li_275;
struct list$1int* o2_saved_276;
int it_279;
int i_282;
int __result231__;
    come_heap_init(0, 0, 0);
    const unsigned int LED_PIN_273=25;
    gpio_init(LED_PIN_273);
    gpio_set_dir(LED_PIN_273,1);
    li_275=(struct list$1int*)come_increment_ref_count((__list_values1___274[0]=1,
__list_values1___274[1]=2,
__list_values1___274[2]=3,
__list_values1___274[3]=4,
__list_values1___274[4]=5,
__list_values1___274[5]=6,
__list_values1___274[6]=7,
__list_values1___274[7]=8,
__list_values1___274[8]=9,
__list_values1___274[9]=10,
list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "led.c", 15, "struct list$1int")),10,__list_values1___274)));
    for(    o2_saved_276=(struct list$1int*)come_increment_ref_count((li_275)),it_279=list$1int_begin((o2_saved_276));    !list$1int_end((o2_saved_276));    it_279=list$1int_next((o2_saved_276))    ){
        for(        i_282=0;        i_282<5;        i_282++        ){
            gpio_put(LED_PIN_273,1);
            sleep_ms(50*it_279);
            gpio_put(LED_PIN_273,0);
            sleep_ms(50*it_279);
        }
    }
    /*i*/come_call_finalizer3(o2_saved_276,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    while(1) {
        gpio_put(LED_PIN_273,0);
    }
    __result231__ = 0;
    /*i*/come_call_finalizer3(li_275,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result231__;
}

static int list$1int_begin(struct list$1int* self){
int result_277;
int result_278;
memset(&result_277, 0, sizeof(int));
memset(&result_278, 0, sizeof(int));
    if(    self==((void*)0)) {
        __builtin___memset_chk(&result_277,0,sizeof(int),__builtin_object_size(&result_277,0));
        return result_277;
    }
    self->it=self->head;
    if(    self->it) {
        return self->it->item;
    }
    __builtin___memset_chk(&result_278,0,sizeof(int),__builtin_object_size(&result_278,0));
    return result_278;
}

static _Bool list$1int_end(struct list$1int* self){
    return self==((void*)0)||self->it==((void*)0);
}

static int list$1int_next(struct list$1int* self){
int result_280;
int result_281;
memset(&result_280, 0, sizeof(int));
memset(&result_281, 0, sizeof(int));
    if(    self==((void*)0)||self->it==((void*)0)) {
        __builtin___memset_chk(&result_280,0,sizeof(int),__builtin_object_size(&result_280,0));
        return result_280;
    }
    self->it=self->it->next;
    if(    self->it) {
        return self->it->item;
    }
    __builtin___memset_chk(&result_281,0,sizeof(int),__builtin_object_size(&result_281,0));
    return result_281;
}

