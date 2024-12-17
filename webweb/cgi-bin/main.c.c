/// previous struct definition ///
struct __sFILEX;

struct real_pcre8_or_16;

struct real_pcre32;

struct real_pcre_jit_stack;

struct real_pcre16_jit_stack;

struct real_pcre32_jit_stack;

struct fssearchblock;

struct searchstate;

struct cmsghdr;

struct sockaddr;

struct stack_st_OPENSSL_STRING;

struct stack_st_OPENSSL_CSTRING;

struct stack_st_OPENSSL_BLOCK;

struct stack_st_BIGNUM;

struct stack_st_BIGNUM_const;

struct stack_st_void;

struct stack_st_SSL_COMP;

struct stack_st_BIO;

struct stack_st_X509_ALGOR;

struct stack_st_ASN1_STRING_TABLE;

struct stack_st_ASN1_TYPE;

struct stack_st_ASN1_OBJECT;

struct stack_st_ASN1_INTEGER;

struct stack_st_ASN1_UTF8STRING;

struct stack_st_ASN1_GENERALSTRING;

struct rsa_st;

struct dsa_st;

struct dh_st;

struct ec_key_st;

struct stack_st_X509_NAME;

struct stack_st_X509;

struct stack_st_X509_REVOKED;

struct stack_st_X509_CRL;

struct stack_st_X509_NAME_ENTRY;

struct stack_st_X509_EXTENSION;

struct stack_st_X509_ATTRIBUTE;

struct stack_st_X509_INFO;

struct lhash_st_OPENSSL_STRING;

struct lhash_st_OPENSSL_CSTRING;

struct stack_st_X509_LOOKUP;

struct stack_st_X509_OBJECT;

struct stack_st_X509_VERIFY_PARAM;

struct stack_st_X509_TRUST;

struct stack_st_PKCS7_SIGNER_INFO;

struct stack_st_PKCS7_RECIP_INFO;

struct stack_st_PKCS7;

struct stack_st_CONF_VALUE;

struct lhash_st_CONF_VALUE;

struct conf_st;

struct conf_method_st;

struct stack_st_CONF_MODULE;

struct stack_st_CONF_IMODULE;

struct stack_st_SCT;

struct stack_st_CTLOG;

struct stack_st_SRTP_PROTECTION_PROFILE;

struct stack_st_SSL_CIPHER;

struct lhash_st_ERR_STRING_DATA;

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

typedef void* any;

typedef char* string;

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

extern void* gComeFunResultObject;

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

typedef struct real_pcre8_or_16 pcre;

typedef struct real_pcre8_or_16 pcre16;

typedef struct real_pcre32 pcre32;

typedef struct real_pcre_jit_stack pcre_jit_stack;

typedef struct real_pcre16_jit_stack pcre16_jit_stack;

typedef struct real_pcre32_jit_stack pcre32_jit_stack;

struct pcre_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};

typedef struct pcre_extra pcre_extra;

struct pcre16_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};

typedef struct pcre16_extra pcre16_extra;

struct pcre32_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};

typedef struct pcre32_extra pcre32_extra;

struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};

typedef struct pcre_callout_block pcre_callout_block;

struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};

typedef struct pcre16_callout_block pcre16_callout_block;

struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};

typedef struct pcre32_callout_block pcre32_callout_block;

extern void* (*pcre_malloc)(unsigned long  int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long  int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long  int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long  int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long  int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long  int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);

typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);

typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);

typedef union anonymous_typeZ1 mbstate_t;

typedef unsigned long  int clock_t;

typedef long time_t;

struct timespec
{
    long tv_sec;
    long tv_nsec;
};

struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char* tm_zone;
};

extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
enum anonymous_typeY8 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY8 clockid_t;

typedef int wint_t;

typedef unsigned int wctype_t;

struct anonymous_typeX9
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX9 _RuneEntry;

struct anonymous_typeX10
{
    int __nranges;
    struct anonymous_typeX9* __ranges;
};

typedef struct anonymous_typeX10 _RuneRange;

struct anonymous_typeX11
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX11 _RuneCharClass;

struct anonymous_typeX12
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX10 __runetype_ext;
    struct anonymous_typeX10 __maplower_ext;
    struct anonymous_typeX10 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX11* __charclasses;
};

typedef struct anonymous_typeX12 _RuneLocale;

extern struct anonymous_typeX12 _DefaultRuneLocale;
extern struct anonymous_typeX12* _CurrentRuneLocale;
typedef int* wstring;

struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};

struct tuple2$2come_regexphcharph
{
    struct come_regex* v1;
    char* v2;
};

struct accessx_descriptor
{
    unsigned int ad_name_offset;
    int ad_flags;
    int ad_pad[2];
};

typedef unsigned int gid_t;

typedef unsigned int useconds_t;

extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct fd_set
{
    int fds_bits[((((((1024)%((sizeof(int)*8)))==0))?(((1024)/((sizeof(int)*8)))):((((1024)/((sizeof(int)*8)))+1))))];
};

typedef struct fd_set fd_set;

typedef int suseconds_t;

typedef unsigned char uuid_t[16];

extern char* suboptarg;
extern int optreset;
typedef unsigned int in_addr_t;

typedef unsigned short int in_port_t;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef unsigned long  long u_quad_t;

typedef long long quad_t;

typedef long long* qaddr_t;

typedef char* caddr_t;

typedef int daddr_t;

typedef unsigned int fixpt_t;

typedef long  long blkcnt_t;

typedef int blksize_t;

typedef unsigned long  long ino_t;

typedef unsigned long  long ino64_t;

typedef int key_t;

typedef unsigned short int nlink_t;

typedef int segsz_t;

typedef int swblk_t;

typedef int fd_mask;

typedef struct _opaque_pthread_cond_t pthread_cond_t;

typedef struct _opaque_pthread_condattr_t pthread_condattr_t;

typedef struct _opaque_pthread_mutex_t pthread_mutex_t;

typedef struct _opaque_pthread_mutexattr_t pthread_mutexattr_t;

typedef struct _opaque_pthread_once_t pthread_once_t;

typedef struct _opaque_pthread_rwlock_t pthread_rwlock_t;

typedef struct _opaque_pthread_rwlockattr_t pthread_rwlockattr_t;

typedef struct _opaque_pthread_t* pthread_t;

typedef unsigned long  int pthread_key_t;

typedef unsigned int fsblkcnt_t;

typedef unsigned int fsfilcnt_t;

typedef unsigned char sa_family_t;

typedef unsigned int socklen_t;

struct iovec
{
    void* iov_base;
    unsigned long  int iov_len;
};

typedef unsigned int sae_associd_t;

typedef unsigned int sae_connid_t;

struct sa_endpoints
{
    unsigned int sae_srcif;
    const struct sockaddr* sae_srcaddr;
    unsigned int sae_srcaddrlen;
    const struct sockaddr* sae_dstaddr;
    unsigned int sae_dstaddrlen;
};

typedef struct sa_endpoints sa_endpoints_t;

struct linger
{
    int l_onoff;
    int l_linger;
};

struct so_np_extensions
{
    unsigned int npx_flags;
    unsigned int npx_mask;
};

struct sockaddr
{
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data[14];
};

struct __sockaddr_header
{
    unsigned char sa_len;
    unsigned char sa_family;
};

struct sockproto
{
    unsigned short int sp_family;
    unsigned short int sp_protocol;
};

struct sockaddr_storage
{
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[((sizeof(long  long))-sizeof(unsigned char)-sizeof(unsigned char))];
    long  long __ss_align;
    char __ss_pad2[(128-sizeof(unsigned char)-sizeof(unsigned char)-((sizeof(long  long))-sizeof(unsigned char)-sizeof(unsigned char))-(sizeof(long  long)))];
};

struct msghdr
{
    void* msg_name;
    unsigned int msg_namelen;
    struct iovec* msg_iov;
    int msg_iovlen;
    void* msg_control;
    unsigned int msg_controllen;
    int msg_flags;
};

struct cmsghdr
{
    unsigned int cmsg_len;
    int cmsg_level;
    int cmsg_type;
};

struct sf_hdtr
{
    struct iovec* headers;
    int hdr_cnt;
    struct iovec* trailers;
    int trl_cnt;
};

struct in_addr
{
    unsigned int s_addr;
};

struct sockaddr_in
{
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short int sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct ip_opts
{
    struct in_addr ip_dst;
    char ip_opts[40];
};

struct ip_mreq
{
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
};

struct ip_mreqn
{
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
};

struct ip_mreq_source
{
    struct in_addr imr_multiaddr;
    struct in_addr imr_sourceaddr;
    struct in_addr imr_interface;
};

struct group_req
{
    unsigned int gr_interface;
    struct sockaddr_storage gr_group;
};

struct group_source_req
{
    unsigned int gsr_interface;
    struct sockaddr_storage gsr_group;
    struct sockaddr_storage gsr_source;
};

struct __msfilterreq
{
    unsigned int msfr_ifindex;
    unsigned int msfr_fmode;
    unsigned int msfr_nsrcs;
    unsigned int __msfr_align;
    struct sockaddr_storage msfr_group;
    struct sockaddr_storage* msfr_srcs;
};

struct in_pktinfo
{
    unsigned int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
};

union anonymous_typeZ13
{
unsigned char __u6_addr8[16];
unsigned short int __u6_addr16[8];
unsigned int __u6_addr32[4];
};

union anonymous_typeZ14
{
unsigned char __u6_addr8[16];
unsigned short int __u6_addr16[8];
unsigned int __u6_addr32[4];
};

struct in6_addr
{
    union anonymous_typeZ14 __u6_addr;
};

typedef struct in6_addr in6_addr_t;

struct sockaddr_in6
{
    unsigned char sin6_len;
    unsigned char sin6_family;
    unsigned short int sin6_port;
    unsigned int sin6_flowinfo;
    struct in6_addr sin6_addr;
    unsigned int sin6_scope_id;
};

extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
extern const struct in6_addr in6addr_nodelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;
extern const struct in6_addr in6addr_linklocal_allv2routers;
struct ipv6_mreq
{
    struct in6_addr ipv6mr_multiaddr;
    unsigned int ipv6mr_interface;
};

struct in6_pktinfo
{
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
};

struct ip6_mtuinfo
{
    struct sockaddr_in6 ip6m_addr;
    unsigned int ip6m_mtu;
};

enum { OSUnknownByteOrder
,OSLittleEndian
,OSBigEndian
};

struct anonymous_typeX15
{
    long  int quot;
    long  int rem;
};

typedef struct anonymous_typeX15 imaxdiv_t;

typedef long  int ossl_intmax_t;

typedef unsigned long  int ossl_uintmax_t;

struct timeval64
{
    long  long tv_sec;
    long  long tv_usec;
};

struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};

struct clockinfo
{
    int hz;
    int tick;
    int tickadj;
    int stathz;
    int profhz;
};

typedef struct stack_st OPENSSL_STACK;

typedef int (*OPENSSL_sk_compfunc)(const void*,const void*);

typedef void (*OPENSSL_sk_freefunc)(void*);

typedef void* (*OPENSSL_sk_copyfunc)(const void*);

typedef char* OPENSSL_STRING;

typedef const char* OPENSSL_CSTRING;

typedef int (*sk_OPENSSL_STRING_compfunc)(const char**,const char**);

typedef void (*sk_OPENSSL_STRING_freefunc)(char*);

typedef char* (*sk_OPENSSL_STRING_copyfunc)(const char*);

typedef int (*sk_OPENSSL_CSTRING_compfunc)(const char**,const char**);

typedef void (*sk_OPENSSL_CSTRING_freefunc)(char*);

typedef char* (*sk_OPENSSL_CSTRING_copyfunc)(const char*);

typedef void* OPENSSL_BLOCK;

typedef int (*sk_OPENSSL_BLOCK_compfunc)(const void**,const void**);

typedef void (*sk_OPENSSL_BLOCK_freefunc)(void*);

typedef void* (*sk_OPENSSL_BLOCK_copyfunc)(const void*);

typedef struct ossl_provider_st OSSL_PROVIDER;

typedef struct asn1_string_st ASN1_INTEGER;

typedef struct asn1_string_st ASN1_ENUMERATED;

typedef struct asn1_string_st ASN1_BIT_STRING;

typedef struct asn1_string_st ASN1_OCTET_STRING;

typedef struct asn1_string_st ASN1_PRINTABLESTRING;

typedef struct asn1_string_st ASN1_T61STRING;

typedef struct asn1_string_st ASN1_IA5STRING;

typedef struct asn1_string_st ASN1_GENERALSTRING;

typedef struct asn1_string_st ASN1_UNIVERSALSTRING;

typedef struct asn1_string_st ASN1_BMPSTRING;

typedef struct asn1_string_st ASN1_UTCTIME;

typedef struct asn1_string_st ASN1_TIME;

typedef struct asn1_string_st ASN1_GENERALIZEDTIME;

typedef struct asn1_string_st ASN1_VISIBLESTRING;

typedef struct asn1_string_st ASN1_UTF8STRING;

typedef struct asn1_string_st ASN1_STRING;

typedef int ASN1_BOOLEAN;

typedef int ASN1_NULL;

typedef struct asn1_type_st ASN1_TYPE;

typedef struct asn1_object_st ASN1_OBJECT;

typedef struct asn1_string_table_st ASN1_STRING_TABLE;

typedef struct ASN1_ITEM_st ASN1_ITEM;

typedef struct asn1_pctx_st ASN1_PCTX;

typedef struct asn1_sctx_st ASN1_SCTX;

typedef struct bio_st BIO;

typedef struct bignum_st BIGNUM;

typedef struct bignum_ctx BN_CTX;

typedef struct bn_blinding_st BN_BLINDING;

typedef struct bn_mont_ctx_st BN_MONT_CTX;

typedef struct bn_recp_ctx_st BN_RECP_CTX;

typedef struct bn_gencb_st BN_GENCB;

typedef struct buf_mem_st BUF_MEM;

typedef struct err_state_st ERR_STATE;

typedef struct evp_cipher_st EVP_CIPHER;

typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;

typedef struct evp_md_st EVP_MD;

typedef struct evp_md_ctx_st EVP_MD_CTX;

typedef struct evp_mac_st EVP_MAC;

typedef struct evp_mac_ctx_st EVP_MAC_CTX;

typedef struct evp_pkey_st EVP_PKEY;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct evp_keymgmt_st EVP_KEYMGMT;

typedef struct evp_kdf_st EVP_KDF;

typedef struct evp_kdf_ctx_st EVP_KDF_CTX;

typedef struct evp_rand_st EVP_RAND;

typedef struct evp_rand_ctx_st EVP_RAND_CTX;

typedef struct evp_keyexch_st EVP_KEYEXCH;

typedef struct evp_signature_st EVP_SIGNATURE;

typedef struct evp_asym_cipher_st EVP_ASYM_CIPHER;

typedef struct evp_kem_st EVP_KEM;

typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;

typedef struct hmac_ctx_st HMAC_CTX;

typedef struct dh_st DH;

typedef struct dh_method DH_METHOD;

typedef struct dsa_st DSA;

typedef struct dsa_method DSA_METHOD;

typedef struct rsa_st RSA;

typedef struct rsa_meth_st RSA_METHOD;

typedef struct rsa_pss_params_st RSA_PSS_PARAMS;

typedef struct ec_key_st EC_KEY;

typedef struct ec_key_method_st EC_KEY_METHOD;

typedef struct rand_meth_st RAND_METHOD;

typedef struct rand_drbg_st RAND_DRBG;

typedef struct ssl_dane_st SSL_DANE;

typedef struct x509_st X509;

typedef struct X509_algor_st X509_ALGOR;

typedef struct X509_crl_st X509_CRL;

typedef struct x509_crl_method_st X509_CRL_METHOD;

typedef struct x509_revoked_st X509_REVOKED;

typedef struct X509_name_st X509_NAME;

typedef struct X509_pubkey_st X509_PUBKEY;

typedef struct x509_store_st X509_STORE;

typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct x509_object_st X509_OBJECT;

typedef struct x509_lookup_st X509_LOOKUP;

typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

typedef struct x509_sig_info_st X509_SIG_INFO;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

typedef struct v3_ext_ctx X509V3_CTX;

typedef struct conf_st CONF;

typedef struct ossl_init_settings_st OPENSSL_INIT_SETTINGS;

typedef struct ui_st UI;

typedef struct ui_method_st UI_METHOD;

typedef struct engine_st ENGINE;

typedef struct ssl_st SSL;

typedef struct ssl_ctx_st SSL_CTX;

typedef struct comp_ctx_st COMP_CTX;

typedef struct comp_method_st COMP_METHOD;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;

typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;

typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;

typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;

typedef struct DIST_POINT_st DIST_POINT;

typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;

typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct ossl_http_req_ctx_st OSSL_HTTP_REQ_CTX;

typedef struct ocsp_response_st OCSP_RESPONSE;

typedef struct ocsp_responder_id_st OCSP_RESPID;

typedef struct sct_st SCT;

typedef struct sct_ctx_st SCT_CTX;

typedef struct ctlog_st CTLOG;

typedef struct ctlog_store_st CTLOG_STORE;

typedef struct ct_policy_eval_ctx_st CT_POLICY_EVAL_CTX;

typedef struct ossl_store_info_st OSSL_STORE_INFO;

typedef struct ossl_store_search_st OSSL_STORE_SEARCH;

typedef struct ossl_lib_ctx_st OSSL_LIB_CTX;

typedef struct ossl_dispatch_st OSSL_DISPATCH;

typedef struct ossl_item_st OSSL_ITEM;

typedef struct ossl_algorithm_st OSSL_ALGORITHM;

typedef struct ossl_param_st OSSL_PARAM;

typedef struct ossl_param_bld_st OSSL_PARAM_BLD;

typedef int (*pem_password_cb)(char*,int,int,void*);

typedef struct ossl_encoder_st OSSL_ENCODER;

typedef struct ossl_encoder_ctx_st OSSL_ENCODER_CTX;

typedef struct ossl_decoder_st OSSL_DECODER;

typedef struct ossl_decoder_ctx_st OSSL_DECODER_CTX;

typedef struct ossl_self_test_st OSSL_SELF_TEST;

typedef long  int ptrdiff_t;

typedef long  double max_align_t;

typedef struct ossl_core_handle_st OSSL_CORE_HANDLE;

typedef struct openssl_core_ctx_st OPENSSL_CORE_CTX;

typedef struct ossl_core_bio_st OSSL_CORE_BIO;

struct ossl_dispatch_st
{
    int function_id;
    void (*function)();
};

struct ossl_item_st
{
    unsigned int id;
    void* ptr;
};

struct ossl_algorithm_st
{
    const char* algorithm_names;
    const char* property_definition;
    const struct ossl_dispatch_st* implementation;
    const char* algorithm_description;
};

struct ossl_param_st
{
    const char* key;
    unsigned int data_type;
    void* data;
    unsigned long  int data_size;
    unsigned long  int return_size;
};

typedef void (*OSSL_thread_stop_handler_fn)(void*);

typedef int (*OSSL_provider_init_fn)(const struct ossl_core_handle_st*,const struct ossl_dispatch_st*,const struct ossl_dispatch_st**,void**);

extern int (*OSSL_provider_init)(const struct ossl_core_handle_st*,const struct ossl_dispatch_st*,const struct ossl_dispatch_st**,void**);
typedef int (*OSSL_CALLBACK)(const struct ossl_param_st*,void*);

typedef int (*OSSL_INOUT_CALLBACK)(const struct ossl_param_st*,struct ossl_param_st*,void*);

typedef int (*OSSL_PASSPHRASE_CALLBACK)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*);

struct anonymous_typeX16
{
    int dummy;
};

typedef struct anonymous_typeX16 CRYPTO_dynlock;

typedef void CRYPTO_RWLOCK;

struct crypto_ex_data_st
{
    struct ossl_lib_ctx_st* ctx;
    struct stack_st_void* sk;
};

typedef int (*sk_void_compfunc)(const void**,const void**);

typedef void (*sk_void_freefunc)(void*);

typedef void* (*sk_void_copyfunc)(const void*);

typedef void (*CRYPTO_EX_new)(void*,void*,struct crypto_ex_data_st*,int,long,void*);

typedef void (*CRYPTO_EX_free)(void*,void*,struct crypto_ex_data_st*,int,long,void*);

typedef int (*CRYPTO_EX_dup)(struct crypto_ex_data_st*,const struct crypto_ex_data_st*,void**,int,long,void*);

struct crypto_threadid_st
{
    int dummy;
};

typedef struct crypto_threadid_st CRYPTO_THREADID;

typedef void* (*CRYPTO_malloc_fn)(unsigned long  int,const char*,int);

typedef void* (*CRYPTO_realloc_fn)(void*,unsigned long  int,const char*,int);

typedef void (*CRYPTO_free_fn)(void*,const char*,int);

struct sched_param
{
    int sched_priority;
    char __opaque[4];
};

enum { QOS_CLASS_USER_INTERACTIVE=(33),
QOS_CLASS_USER_INITIATED=(25),
QOS_CLASS_DEFAULT=(21),
QOS_CLASS_UTILITY=(17),
QOS_CLASS_BACKGROUND=(9),
QOS_CLASS_UNSPECIFIED=(0)
};

typedef unsigned int qos_class_t;

typedef struct pthread_override_s* pthread_override_t;

typedef struct _opaque_pthread_once_t CRYPTO_ONCE;

typedef unsigned long  int CRYPTO_THREAD_LOCAL;

typedef struct _opaque_pthread_t* CRYPTO_THREAD_ID;

typedef struct ssl_comp_st SSL_COMP;

typedef int (*sk_SSL_COMP_compfunc)(const struct ssl_comp_st**,const struct ssl_comp_st**);

typedef void (*sk_SSL_COMP_freefunc)(struct ssl_comp_st*);

typedef struct ssl_comp_st* (*sk_SSL_COMP_copyfunc)(const struct ssl_comp_st*);

typedef union bio_addr_st BIO_ADDR;

typedef struct bio_addrinfo_st BIO_ADDRINFO;

typedef long (*BIO_callback_fn)(struct bio_st*,int,const char*,int,long,long);

typedef long (*BIO_callback_fn_ex)(struct bio_st*,int,const char*,unsigned long  int,int,long,int,unsigned long  int*);

typedef struct bio_method_st BIO_METHOD;

typedef int (*BIO_info_cb)(struct bio_st*,int,int);

typedef int (*bio_info_cb)(struct bio_st*,int,int);

typedef int (*sk_BIO_compfunc)(const struct bio_st**,const struct bio_st**);

typedef void (*sk_BIO_freefunc)(struct bio_st*);

typedef struct bio_st* (*sk_BIO_copyfunc)(const struct bio_st*);

typedef int (*asn1_ps_func)(struct bio_st*,unsigned char**,int*,void*);

typedef void (*BIO_dgram_sctp_notification_handler_fn)(struct bio_st*,void*,void*);

struct bio_msg_st
{
    void* data;
    unsigned long  int data_len;
    union bio_addr_st* peer;
    union bio_addr_st* local;
    unsigned long  long flags;
};

typedef struct bio_msg_st BIO_MSG;

struct bio_mmsg_cb_args_st
{
    struct bio_msg_st* msg;
    unsigned long  int stride;
    unsigned long  int num_msg;
    unsigned long  long flags;
    unsigned long  int* msgs_processed;
};

typedef struct bio_mmsg_cb_args_st BIO_MMSG_CB_ARGS;

union anonymous_typeZ17
{
int fd;
void* custom;
unsigned long  int custom_ui;
struct ssl_st* ssl;
};

union anonymous_typeZ18
{
int fd;
void* custom;
unsigned long  int custom_ui;
struct ssl_st* ssl;
};

struct bio_poll_descriptor_st
{
    unsigned int type;
    union anonymous_typeZ18 value;
};

typedef struct bio_poll_descriptor_st BIO_POLL_DESCRIPTOR;

enum BIO_hostserv_priorities { BIO_PARSE_PRIO_HOST
,BIO_PARSE_PRIO_SERV
};

enum BIO_lookup_type { BIO_LOOKUP_CLIENT
,BIO_LOOKUP_SERVER
};

union BIO_sock_info_u
{
union bio_addr_st* addr;
};

enum BIO_sock_info_type { BIO_SOCK_INFO_ADDRESS
};

struct buf_mem_st
{
    unsigned long  int length;
    char* data;
    unsigned long  int max;
    unsigned long  int flags;
};

typedef int (*OSSL_INDICATOR_CALLBACK)(const char*,const char*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_core_gettable_params_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_get_params_fn)(const struct ossl_core_handle_st*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_core_thread_start_fn)(const struct ossl_core_handle_st*,void (*)(void*),void*);

typedef struct openssl_core_ctx_st* (*OSSL_FUNC_core_get_libctx_fn)(const struct ossl_core_handle_st*);

typedef void (*OSSL_FUNC_core_new_error_fn)(const struct ossl_core_handle_st*);

typedef void (*OSSL_FUNC_core_set_error_debug_fn)(const struct ossl_core_handle_st*,const char*,int,const char*);

typedef void (*OSSL_FUNC_core_vset_error_fn)(const struct ossl_core_handle_st*,unsigned int,const char*,va_list);

typedef int (*OSSL_FUNC_core_set_error_mark_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_clear_last_error_mark_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_pop_error_to_mark_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_obj_add_sigid_fn)(const struct ossl_core_handle_st*,const char*,const char*,const char*);

typedef int (*OSSL_FUNC_core_obj_create_fn)(const struct ossl_core_handle_st*,const char*,const char*,const char*);

typedef void* (*OSSL_FUNC_CRYPTO_malloc_fn)(unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_zalloc_fn)(unsigned long  int,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_clear_free_fn)(void*,unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_realloc_fn)(void*,unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_clear_realloc_fn)(void*,unsigned long  int,unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_malloc_fn)(unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_zalloc_fn)(unsigned long  int,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_clear_free_fn)(void*,unsigned long  int,const char*,int);

typedef int (*OSSL_FUNC_CRYPTO_secure_allocated_fn)(const void*);

typedef void (*OSSL_FUNC_OPENSSL_cleanse_fn)(void*,unsigned long  int);

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_file_fn)(const char*,const char*);

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_membuf_fn)(const void*,int);

typedef int (*OSSL_FUNC_BIO_read_ex_fn)(struct ossl_core_bio_st*,void*,unsigned long  int,unsigned long  int*);

typedef int (*OSSL_FUNC_BIO_write_ex_fn)(struct ossl_core_bio_st*,const void*,unsigned long  int,unsigned long  int*);

typedef int (*OSSL_FUNC_BIO_gets_fn)(struct ossl_core_bio_st*,char*,int);

typedef int (*OSSL_FUNC_BIO_puts_fn)(struct ossl_core_bio_st*,const char*);

typedef int (*OSSL_FUNC_BIO_up_ref_fn)(struct ossl_core_bio_st*);

typedef int (*OSSL_FUNC_BIO_free_fn)(struct ossl_core_bio_st*);

typedef int (*OSSL_FUNC_BIO_vprintf_fn)(struct ossl_core_bio_st*,const char*,va_list);

typedef int (*OSSL_FUNC_BIO_vsnprintf_fn)(char*,unsigned long  int,const char*,va_list);

typedef int (*OSSL_FUNC_BIO_ctrl_fn)(struct ossl_core_bio_st*,int,long,void*);

typedef void (*OSSL_FUNC_indicator_cb_fn)(struct openssl_core_ctx_st*,int (*)(const char*,const char*,const struct ossl_param_st*));

typedef void (*OSSL_FUNC_self_test_cb_fn)(struct openssl_core_ctx_st*,int (*)(const struct ossl_param_st*,void*),void**);

typedef unsigned long  int (*OSSL_FUNC_get_entropy_fn)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_get_user_entropy_fn)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_entropy_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_user_entropy_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_get_nonce_fn)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_get_user_nonce_fn)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_nonce_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_user_nonce_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_provider_register_child_cb_fn)(const struct ossl_core_handle_st*,int (*)(const struct ossl_core_handle_st*,void*),int (*)(const struct ossl_core_handle_st*,void*),int (*)(const char*,void*),void*);

typedef void (*OSSL_FUNC_provider_deregister_child_cb_fn)(const struct ossl_core_handle_st*);

typedef const char* (*OSSL_FUNC_provider_name_fn)(const struct ossl_core_handle_st*);

typedef void* (*OSSL_FUNC_provider_get0_provider_ctx_fn)(const struct ossl_core_handle_st*);

typedef const struct ossl_dispatch_st* (*OSSL_FUNC_provider_get0_dispatch_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_provider_up_ref_fn)(const struct ossl_core_handle_st*,int);

typedef int (*OSSL_FUNC_provider_free_fn)(const struct ossl_core_handle_st*,int);

typedef void (*OSSL_FUNC_provider_teardown_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_provider_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_provider_get_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_algorithm_st* (*OSSL_FUNC_provider_query_operation_fn)(void*,int,int*);

typedef void (*OSSL_FUNC_provider_unquery_operation_fn)(void*,int,const struct ossl_algorithm_st*);

typedef const struct ossl_item_st* (*OSSL_FUNC_provider_get_reason_strings_fn)(void*);

typedef int (*OSSL_FUNC_provider_get_capabilities_fn)(void*,const char*,int (*)(const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_provider_self_test_fn)(void*);

typedef void* (*OSSL_FUNC_digest_newctx_fn)(void*);

typedef int (*OSSL_FUNC_digest_init_fn)(void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_digest_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_digest_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_digest_squeeze_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_digest_digest_fn)(void*,const unsigned char*,unsigned long  int,unsigned char*,unsigned long  int*,unsigned long  int);

typedef void (*OSSL_FUNC_digest_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_digest_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_digest_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_digest_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_digest_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_settable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_cipher_newctx_fn)(void*);

typedef int (*OSSL_FUNC_cipher_encrypt_init_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_decrypt_init_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_update_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_cipher_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_cipher_cipher_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_cipher_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_settable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_mac_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_mac_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_mac_freectx_fn)(void*);

typedef int (*OSSL_FUNC_mac_init_fn)(void*,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_mac_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_mac_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_mac_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_mac_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_mac_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef void* (*OSSL_FUNC_kdf_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_kdf_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_freectx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_reset_fn)(void*);

typedef int (*OSSL_FUNC_kdf_derive_fn)(void*,unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_kdf_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_kdf_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_kdf_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef void* (*OSSL_FUNC_rand_newctx_fn)(void*,void*,const struct ossl_dispatch_st*);

typedef void (*OSSL_FUNC_rand_freectx_fn)(void*);

typedef int (*OSSL_FUNC_rand_instantiate_fn)(void*,unsigned int,int,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_rand_uninstantiate_fn)(void*);

typedef int (*OSSL_FUNC_rand_generate_fn)(void*,unsigned char*,unsigned long  int,unsigned int,int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_rand_reseed_fn)(void*,int,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_rand_nonce_fn)(void*,unsigned char*,unsigned int,unsigned long  int,unsigned long  int);

typedef int (*OSSL_FUNC_rand_enable_locking_fn)(void*);

typedef int (*OSSL_FUNC_rand_lock_fn)(void*);

typedef void (*OSSL_FUNC_rand_unlock_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_rand_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_rand_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_rand_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef void (*OSSL_FUNC_rand_set_callbacks_fn)(void*,int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_rand_verify_zeroization_fn)(void*);

typedef unsigned long  int (*OSSL_FUNC_rand_get_seed_fn)(void*,unsigned char**,int,unsigned long  int,unsigned long  int,int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_rand_clear_seed_fn)(void*,unsigned char*,unsigned long  int);

typedef void* (*OSSL_FUNC_keymgmt_new_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_init_fn)(void*,int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_keymgmt_gen_set_template_fn)(void*,void*);

typedef int (*OSSL_FUNC_keymgmt_gen_set_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_settable_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_keymgmt_gen_get_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_gettable_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_fn)(void*,int (*)(const struct ossl_param_st*,void*),void*);

typedef void (*OSSL_FUNC_keymgmt_gen_cleanup_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_load_fn)(const void*,unsigned long  int);

typedef void (*OSSL_FUNC_keymgmt_free_fn)(void*);

typedef int (*OSSL_FUNC_keymgmt_get_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_keymgmt_set_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_settable_params_fn)(void*);

typedef const char* (*OSSL_FUNC_keymgmt_query_operation_name_fn)(int);

typedef int (*OSSL_FUNC_keymgmt_has_fn)(const void*,int);

typedef int (*OSSL_FUNC_keymgmt_validate_fn)(const void*,int,int);

typedef int (*OSSL_FUNC_keymgmt_match_fn)(const void*,const void*,int);

typedef int (*OSSL_FUNC_keymgmt_import_fn)(void*,int,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_fn)(int);

typedef int (*OSSL_FUNC_keymgmt_export_fn)(void*,int,int (*)(const struct ossl_param_st*,void*),void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_fn)(int);

typedef void* (*OSSL_FUNC_keymgmt_dup_fn)(const void*,int);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_ex_fn)(void*,int);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_ex_fn)(void*,int);

typedef void* (*OSSL_FUNC_keyexch_newctx_fn)(void*);

typedef int (*OSSL_FUNC_keyexch_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_keyexch_derive_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_keyexch_set_peer_fn)(void*,void*);

typedef void (*OSSL_FUNC_keyexch_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_keyexch_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_keyexch_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_keyexch_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_signature_newctx_fn)(void*,const char*);

typedef int (*OSSL_FUNC_signature_sign_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_sign_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_sign_message_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_sign_message_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_sign_message_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_verify_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_verify_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_verify_message_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_verify_message_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_verify_message_final_fn)(void*);

typedef int (*OSSL_FUNC_signature_verify_recover_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_verify_recover_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_sign_init_fn)(void*,const char*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_digest_sign_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_sign_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_sign_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_verify_init_fn)(void*,const char*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_digest_verify_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_verify_final_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_verify_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_signature_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_signature_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_signature_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_signature_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_signature_get_ctx_md_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_md_params_fn)(void*);

typedef int (*OSSL_FUNC_signature_set_ctx_md_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_md_params_fn)(void*);

typedef const char** (*OSSL_FUNC_signature_query_key_types_fn)();

typedef void* (*OSSL_FUNC_asym_cipher_newctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_encrypt_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_asym_cipher_encrypt_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_asym_cipher_decrypt_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_asym_cipher_decrypt_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_asym_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_asym_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_asym_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_settable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_kem_newctx_fn)(void*);

typedef int (*OSSL_FUNC_kem_encapsulate_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_auth_encapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_encapsulate_fn)(void*,unsigned char*,unsigned long  int*,unsigned char*,unsigned long  int*);

typedef int (*OSSL_FUNC_kem_decapsulate_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_auth_decapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_decapsulate_fn)(void*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_kem_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_kem_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_kem_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kem_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_kem_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kem_settable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_encoder_newctx_fn)(void*);

typedef void (*OSSL_FUNC_encoder_freectx_fn)(void*);

typedef int (*OSSL_FUNC_encoder_get_params_fn)(struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_encoder_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_encoder_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_encoder_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_encoder_does_selection_fn)(void*,int);

typedef int (*OSSL_FUNC_encoder_encode_fn)(void*,struct ossl_core_bio_st*,const void*,const struct ossl_param_st*,int,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef void* (*OSSL_FUNC_encoder_import_object_fn)(void*,int,const struct ossl_param_st*);

typedef void (*OSSL_FUNC_encoder_free_object_fn)(void*);

typedef void* (*OSSL_FUNC_decoder_newctx_fn)(void*);

typedef void (*OSSL_FUNC_decoder_freectx_fn)(void*);

typedef int (*OSSL_FUNC_decoder_get_params_fn)(struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_does_selection_fn)(void*,int);

typedef int (*OSSL_FUNC_decoder_decode_fn)(void*,struct ossl_core_bio_st*,int,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_decoder_export_object_fn)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*);

typedef void* (*OSSL_FUNC_store_open_fn)(void*,const char*);

typedef void* (*OSSL_FUNC_store_attach_fn)(void*,struct ossl_core_bio_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_store_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_store_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_store_load_fn)(void*,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_store_eof_fn)(void*);

typedef int (*OSSL_FUNC_store_close_fn)(void*);

typedef int (*OSSL_FUNC_store_export_object_fn)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_store_delete_fn)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef void* (*OSSL_FUNC_store_open_ex_fn)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef int (*sk_X509_ALGOR_compfunc)(const struct X509_algor_st**,const struct X509_algor_st**);

typedef void (*sk_X509_ALGOR_freefunc)(struct X509_algor_st*);

typedef struct X509_algor_st* (*sk_X509_ALGOR_copyfunc)(const struct X509_algor_st*);

struct asn1_string_st
{
    int length;
    int type;
    unsigned char* data;
    long flags;
};

struct ASN1_ENCODING_st
{
    unsigned char* enc;
    long len;
    int modified;
};

typedef struct ASN1_ENCODING_st ASN1_ENCODING;

struct asn1_string_table_st
{
    int nid;
    long minsize;
    long maxsize;
    unsigned long  int mask;
    unsigned long  int flags;
};

typedef int (*sk_ASN1_STRING_TABLE_compfunc)(const struct asn1_string_table_st**,const struct asn1_string_table_st**);

typedef void (*sk_ASN1_STRING_TABLE_freefunc)(struct asn1_string_table_st*);

typedef struct asn1_string_table_st* (*sk_ASN1_STRING_TABLE_copyfunc)(const struct asn1_string_table_st*);

typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;

typedef struct ASN1_TLC_st ASN1_TLC;

typedef struct ASN1_VALUE_st ASN1_VALUE;

typedef void* (*d2i_of_void)(void**,const unsigned char**,long);

typedef int (*i2d_of_void)(const void*,unsigned char**);

typedef const struct ASN1_ITEM_st* (*ASN1_ITEM_EXP)();

union anonymous_typeZ19
{
char* ptr;
int boolean;
struct asn1_string_st* asn1_string;
struct asn1_object_st* object;
struct asn1_string_st* integer;
struct asn1_string_st* enumerated;
struct asn1_string_st* bit_string;
struct asn1_string_st* octet_string;
struct asn1_string_st* printablestring;
struct asn1_string_st* t61string;
struct asn1_string_st* ia5string;
struct asn1_string_st* generalstring;
struct asn1_string_st* bmpstring;
struct asn1_string_st* universalstring;
struct asn1_string_st* utctime;
struct asn1_string_st* generalizedtime;
struct asn1_string_st* visiblestring;
struct asn1_string_st* utf8string;
struct asn1_string_st* set;
struct asn1_string_st* sequence;
struct ASN1_VALUE_st* asn1_value;
};

union anonymous_typeZ20
{
char* ptr;
int boolean;
struct asn1_string_st* asn1_string;
struct asn1_object_st* object;
struct asn1_string_st* integer;
struct asn1_string_st* enumerated;
struct asn1_string_st* bit_string;
struct asn1_string_st* octet_string;
struct asn1_string_st* printablestring;
struct asn1_string_st* t61string;
struct asn1_string_st* ia5string;
struct asn1_string_st* generalstring;
struct asn1_string_st* bmpstring;
struct asn1_string_st* universalstring;
struct asn1_string_st* utctime;
struct asn1_string_st* generalizedtime;
struct asn1_string_st* visiblestring;
struct asn1_string_st* utf8string;
struct asn1_string_st* set;
struct asn1_string_st* sequence;
struct ASN1_VALUE_st* asn1_value;
};

struct asn1_type_st
{
    int type;
    union anonymous_typeZ20 value;
};

typedef int (*sk_ASN1_TYPE_compfunc)(const struct asn1_type_st**,const struct asn1_type_st**);

typedef void (*sk_ASN1_TYPE_freefunc)(struct asn1_type_st*);

typedef struct asn1_type_st* (*sk_ASN1_TYPE_copyfunc)(const struct asn1_type_st*);

typedef struct stack_st_ASN1_TYPE ASN1_SEQUENCE_ANY;

struct BIT_STRING_BITNAME_st
{
    int bitnum;
    const char* lname;
    const char* sname;
};

typedef struct BIT_STRING_BITNAME_st BIT_STRING_BITNAME;

typedef int (*sk_ASN1_OBJECT_compfunc)(const struct asn1_object_st**,const struct asn1_object_st**);

typedef void (*sk_ASN1_OBJECT_freefunc)(struct asn1_object_st*);

typedef struct asn1_object_st* (*sk_ASN1_OBJECT_copyfunc)(const struct asn1_object_st*);

typedef int (*sk_ASN1_INTEGER_compfunc)(const struct asn1_string_st**,const struct asn1_string_st**);

typedef void (*sk_ASN1_INTEGER_freefunc)(struct asn1_string_st*);

typedef struct asn1_string_st* (*sk_ASN1_INTEGER_copyfunc)(const struct asn1_string_st*);

typedef int (*sk_ASN1_UTF8STRING_compfunc)(const struct asn1_string_st**,const struct asn1_string_st**);

typedef void (*sk_ASN1_UTF8STRING_freefunc)(struct asn1_string_st*);

typedef struct asn1_string_st* (*sk_ASN1_UTF8STRING_copyfunc)(const struct asn1_string_st*);

typedef int (*sk_ASN1_GENERALSTRING_compfunc)(const struct asn1_string_st**,const struct asn1_string_st**);

typedef void (*sk_ASN1_GENERALSTRING_freefunc)(struct asn1_string_st*);

typedef struct asn1_string_st* (*sk_ASN1_GENERALSTRING_copyfunc)(const struct asn1_string_st*);

struct obj_name_st
{
    int type;
    int alias;
    const char* name;
    const char* data;
};

typedef struct obj_name_st OBJ_NAME;

struct anonymous_typeX21
{
    unsigned char* out;
    const unsigned char* inp;
    unsigned long  int len;
    unsigned int interleave;
};

typedef struct anonymous_typeX21 EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;

struct evp_cipher_info_st
{
    const struct evp_cipher_st* cipher;
    unsigned char iv[16];
};

typedef struct evp_cipher_info_st EVP_CIPHER_INFO;

typedef int (*EVP_PBE_KEYGEN)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int);

typedef int (*EVP_PBE_KEYGEN_EX)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int,struct ossl_lib_ctx_st*,const char*);

typedef int (*EVP_PKEY_gen_cb)(struct evp_pkey_ctx_st*);

enum anonymous_typeY22 { POINT_CONVERSION_COMPRESSED=(2),
POINT_CONVERSION_UNCOMPRESSED=(4),
POINT_CONVERSION_HYBRID=(6)
};

typedef enum anonymous_typeY22 point_conversion_form_t;

typedef struct ec_method_st EC_METHOD;

typedef struct ec_group_st EC_GROUP;

typedef struct ec_point_st EC_POINT;

typedef struct ecpk_parameters_st ECPKPARAMETERS;

typedef struct ec_parameters_st ECPARAMETERS;

struct anonymous_typeX23
{
    int nid;
    const char* comment;
};

typedef struct anonymous_typeX23 EC_builtin_curve;

typedef struct ECDSA_SIG_st ECDSA_SIG;

struct rsa_pss_params_st
{
    struct X509_algor_st* hashAlgorithm;
    struct X509_algor_st* maskGenAlgorithm;
    struct asn1_string_st* saltLength;
    struct asn1_string_st* trailerField;
    struct X509_algor_st* maskHash;
};

struct rsa_oaep_params_st
{
    struct X509_algor_st* hashFunc;
    struct X509_algor_st* maskGenFunc;
    struct X509_algor_st* pSourceFunc;
    struct X509_algor_st* maskHash;
};

typedef struct rsa_oaep_params_st RSA_OAEP_PARAMS;

typedef struct DSA_SIG_st DSA_SIG;

struct SHAstate_st
{
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
};

typedef struct SHAstate_st SHA_CTX;

struct SHA256state_st
{
    unsigned int h[8];
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
    unsigned int md_len;
};

typedef struct SHA256state_st SHA256_CTX;

union anonymous_typeZ24
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

union anonymous_typeZ25
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

struct SHA512state_st
{
    unsigned long  long h[8];
    unsigned long  long Nl;
    unsigned long  long Nh;
    union anonymous_typeZ25 u;
    unsigned int num;
    unsigned int md_len;
};

typedef struct SHA512state_st SHA512_CTX;

typedef int (*sk_X509_NAME_compfunc)(const struct X509_name_st**,const struct X509_name_st**);

typedef void (*sk_X509_NAME_freefunc)(struct X509_name_st*);

typedef struct X509_name_st* (*sk_X509_NAME_copyfunc)(const struct X509_name_st*);

typedef int (*sk_X509_compfunc)(const struct x509_st**,const struct x509_st**);

typedef void (*sk_X509_freefunc)(struct x509_st*);

typedef struct x509_st* (*sk_X509_copyfunc)(const struct x509_st*);

typedef int (*sk_X509_REVOKED_compfunc)(const struct x509_revoked_st**,const struct x509_revoked_st**);

typedef void (*sk_X509_REVOKED_freefunc)(struct x509_revoked_st*);

typedef struct x509_revoked_st* (*sk_X509_REVOKED_copyfunc)(const struct x509_revoked_st*);

typedef int (*sk_X509_CRL_compfunc)(const struct X509_crl_st**,const struct X509_crl_st**);

typedef void (*sk_X509_CRL_freefunc)(struct X509_crl_st*);

typedef struct X509_crl_st* (*sk_X509_CRL_copyfunc)(const struct X509_crl_st*);

struct X509_algor_st
{
    struct asn1_object_st* algorithm;
    struct asn1_type_st* parameter;
};

typedef struct stack_st_X509_ALGOR X509_ALGORS;

struct X509_val_st
{
    struct asn1_string_st* notBefore;
    struct asn1_string_st* notAfter;
};

typedef struct X509_val_st X509_VAL;

typedef struct X509_sig_st X509_SIG;

typedef struct X509_name_entry_st X509_NAME_ENTRY;

typedef int (*sk_X509_NAME_ENTRY_compfunc)(const struct X509_name_entry_st**,const struct X509_name_entry_st**);

typedef void (*sk_X509_NAME_ENTRY_freefunc)(struct X509_name_entry_st*);

typedef struct X509_name_entry_st* (*sk_X509_NAME_ENTRY_copyfunc)(const struct X509_name_entry_st*);

typedef struct X509_extension_st X509_EXTENSION;

typedef int (*sk_X509_EXTENSION_compfunc)(const struct X509_extension_st**,const struct X509_extension_st**);

typedef void (*sk_X509_EXTENSION_freefunc)(struct X509_extension_st*);

typedef struct X509_extension_st* (*sk_X509_EXTENSION_copyfunc)(const struct X509_extension_st*);

typedef struct stack_st_X509_EXTENSION X509_EXTENSIONS;

typedef struct x509_attributes_st X509_ATTRIBUTE;

typedef int (*sk_X509_ATTRIBUTE_compfunc)(const struct x509_attributes_st**,const struct x509_attributes_st**);

typedef void (*sk_X509_ATTRIBUTE_freefunc)(struct x509_attributes_st*);

typedef struct x509_attributes_st* (*sk_X509_ATTRIBUTE_copyfunc)(const struct x509_attributes_st*);

typedef struct X509_req_info_st X509_REQ_INFO;

typedef struct X509_req_st X509_REQ;

typedef struct x509_cert_aux_st X509_CERT_AUX;

typedef struct x509_cinf_st X509_CINF;

typedef struct X509_crl_info_st X509_CRL_INFO;

struct private_key_st
{
    int version;
    struct X509_algor_st* enc_algor;
    struct asn1_string_st* enc_pkey;
    struct evp_pkey_st* dec_pkey;
    int key_length;
    char* key_data;
    int key_free;
    struct evp_cipher_info_st cipher;
};

typedef struct private_key_st X509_PKEY;

struct X509_info_st
{
    struct x509_st* x509;
    struct X509_crl_st* crl;
    struct private_key_st* x_pkey;
    struct evp_cipher_info_st enc_cipher;
    int enc_len;
    char* enc_data;
};

typedef struct X509_info_st X509_INFO;

typedef int (*sk_X509_INFO_compfunc)(const struct X509_info_st**,const struct X509_info_st**);

typedef void (*sk_X509_INFO_freefunc)(struct X509_info_st*);

typedef struct X509_info_st* (*sk_X509_INFO_copyfunc)(const struct X509_info_st*);

struct Netscape_spkac_st
{
    struct X509_pubkey_st* pubkey;
    struct asn1_string_st* challenge;
};

typedef struct Netscape_spkac_st NETSCAPE_SPKAC;

struct Netscape_spki_st
{
    struct Netscape_spkac_st* spkac;
    struct X509_algor_st sig_algor;
    struct asn1_string_st* signature;
};

typedef struct Netscape_spki_st NETSCAPE_SPKI;

struct Netscape_certificate_sequence
{
    struct asn1_object_st* type;
    struct stack_st_X509* certs;
};

typedef struct Netscape_certificate_sequence NETSCAPE_CERT_SEQUENCE;

struct PBEPARAM_st
{
    struct asn1_string_st* salt;
    struct asn1_string_st* iter;
};

typedef struct PBEPARAM_st PBEPARAM;

struct PBE2PARAM_st
{
    struct X509_algor_st* keyfunc;
    struct X509_algor_st* encryption;
};

typedef struct PBE2PARAM_st PBE2PARAM;

struct PBKDF2PARAM_st
{
    struct asn1_type_st* salt;
    struct asn1_string_st* iter;
    struct asn1_string_st* keylength;
    struct X509_algor_st* prf;
};

typedef struct PBKDF2PARAM_st PBKDF2PARAM;

struct anonymous_typeX26
{
    struct X509_algor_st* keyDerivationFunc;
    struct X509_algor_st* messageAuthScheme;
};

typedef struct anonymous_typeX26 PBMAC1PARAM;

struct SCRYPT_PARAMS_st
{
    struct asn1_string_st* salt;
    struct asn1_string_st* costParameter;
    struct asn1_string_st* blockSize;
    struct asn1_string_st* parallelizationParameter;
    struct asn1_string_st* keyLength;
};

typedef struct SCRYPT_PARAMS_st SCRYPT_PARAMS;

typedef struct lhash_node_st OPENSSL_LH_NODE;

typedef int (*OPENSSL_LH_COMPFUNC)(const void*,const void*);

typedef int (*OPENSSL_LH_COMPFUNCTHUNK)(const void*,const void*,int (*)(const void*,const void*));

typedef unsigned long  int (*OPENSSL_LH_HASHFUNC)(const void*);

typedef unsigned long  int (*OPENSSL_LH_HASHFUNCTHUNK)(const void*,unsigned long  int (*)(const void*));

typedef void (*OPENSSL_LH_DOALL_FUNC)(void*);

typedef void (*OPENSSL_LH_DOALL_FUNC_THUNK)(void*,void (*)(void*));

typedef void (*OPENSSL_LH_DOALL_FUNCARG)(void*,void*);

typedef void (*OPENSSL_LH_DOALL_FUNCARG_THUNK)(void*,void*,void (*)(void*,void*));

typedef struct lhash_st OPENSSL_LHASH;

union lh_OPENSSL_STRING_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_OPENSSL_STRING
{
    union lh_OPENSSL_STRING_dummy dummy;
};

typedef int (*lh_OPENSSL_STRING_compfunc)(const char**,const char**);

typedef unsigned long  int (*lh_OPENSSL_STRING_hashfunc)(const char**);

typedef void (*lh_OPENSSL_STRING_doallfunc)(char**);

union lh_OPENSSL_CSTRING_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_OPENSSL_CSTRING
{
    union lh_OPENSSL_CSTRING_dummy dummy;
};

typedef int (*lh_OPENSSL_CSTRING_compfunc)(const char**,const char**);

typedef unsigned long  int (*lh_OPENSSL_CSTRING_hashfunc)(const char**);

typedef void (*lh_OPENSSL_CSTRING_doallfunc)(const char**);

enum anonymous_typeY27 { X509_LU_NONE=(0),
X509_LU_X509
,X509_LU_CRL
};

typedef enum anonymous_typeY27 X509_LOOKUP_TYPE;

typedef int (*sk_X509_LOOKUP_compfunc)(const struct x509_lookup_st**,const struct x509_lookup_st**);

typedef void (*sk_X509_LOOKUP_freefunc)(struct x509_lookup_st*);

typedef struct x509_lookup_st* (*sk_X509_LOOKUP_copyfunc)(const struct x509_lookup_st*);

typedef int (*sk_X509_OBJECT_compfunc)(const struct x509_object_st**,const struct x509_object_st**);

typedef void (*sk_X509_OBJECT_freefunc)(struct x509_object_st*);

typedef struct x509_object_st* (*sk_X509_OBJECT_copyfunc)(const struct x509_object_st*);

typedef int (*sk_X509_VERIFY_PARAM_compfunc)(const struct X509_VERIFY_PARAM_st**,const struct X509_VERIFY_PARAM_st**);

typedef void (*sk_X509_VERIFY_PARAM_freefunc)(struct X509_VERIFY_PARAM_st*);

typedef struct X509_VERIFY_PARAM_st* (*sk_X509_VERIFY_PARAM_copyfunc)(const struct X509_VERIFY_PARAM_st*);

struct x509_trust_st
{
    int trust;
    int flags;
    int (*check_trust)(struct x509_trust_st*,struct x509_st*,int);
    char* name;
    int arg1;
    void* arg2;
};

typedef struct x509_trust_st X509_TRUST;

typedef int (*sk_X509_TRUST_compfunc)(const struct x509_trust_st**,const struct x509_trust_st**);

typedef void (*sk_X509_TRUST_freefunc)(struct x509_trust_st*);

typedef struct x509_trust_st* (*sk_X509_TRUST_copyfunc)(const struct x509_trust_st*);

typedef int (*X509_STORE_CTX_verify_cb)(int,struct x509_store_ctx_st*);

typedef int (*X509_STORE_CTX_verify_fn)(struct x509_store_ctx_st*);

typedef int (*X509_STORE_CTX_get_issuer_fn)(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*);

typedef int (*X509_STORE_CTX_check_issued_fn)(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*);

typedef int (*X509_STORE_CTX_check_revocation_fn)(struct x509_store_ctx_st*);

typedef int (*X509_STORE_CTX_get_crl_fn)(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*);

typedef int (*X509_STORE_CTX_check_crl_fn)(struct x509_store_ctx_st*,struct X509_crl_st*);

typedef int (*X509_STORE_CTX_cert_crl_fn)(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*);

typedef int (*X509_STORE_CTX_check_policy_fn)(struct x509_store_ctx_st*);

typedef struct stack_st_X509* (*X509_STORE_CTX_lookup_certs_fn)(struct x509_store_ctx_st*,const struct X509_name_st*);

typedef struct stack_st_X509_CRL* (*X509_STORE_CTX_lookup_crls_fn)(const struct x509_store_ctx_st*,const struct X509_name_st*);

typedef int (*X509_STORE_CTX_cleanup_fn)(struct x509_store_ctx_st*);

typedef int (*X509_LOOKUP_ctrl_fn)(struct x509_lookup_st*,int,const char*,long,char**);

typedef int (*X509_LOOKUP_ctrl_ex_fn)(struct x509_lookup_st*,int,const char*,long,char**,struct ossl_lib_ctx_st*,const char*);

typedef int (*X509_LOOKUP_get_by_subject_fn)(struct x509_lookup_st*,enum anonymous_typeY27,const struct X509_name_st*,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_subject_ex_fn)(struct x509_lookup_st*,enum anonymous_typeY27,const struct X509_name_st*,struct x509_object_st*,struct ossl_lib_ctx_st*,const char*);

typedef int (*X509_LOOKUP_get_by_issuer_serial_fn)(struct x509_lookup_st*,enum anonymous_typeY27,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_fingerprint_fn)(struct x509_lookup_st*,enum anonymous_typeY27,const unsigned char*,int,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_alias_fn)(struct x509_lookup_st*,enum anonymous_typeY27,const char*,int,struct x509_object_st*);

struct PKCS7_CTX_st
{
    struct ossl_lib_ctx_st* libctx;
    char* propq;
};

typedef struct PKCS7_CTX_st PKCS7_CTX;

struct pkcs7_issuer_and_serial_st
{
    struct X509_name_st* issuer;
    struct asn1_string_st* serial;
};

typedef struct pkcs7_issuer_and_serial_st PKCS7_ISSUER_AND_SERIAL;

struct pkcs7_signer_info_st
{
    struct asn1_string_st* version;
    struct pkcs7_issuer_and_serial_st* issuer_and_serial;
    struct X509_algor_st* digest_alg;
    struct stack_st_X509_ATTRIBUTE* auth_attr;
    struct X509_algor_st* digest_enc_alg;
    struct asn1_string_st* enc_digest;
    struct stack_st_X509_ATTRIBUTE* unauth_attr;
    struct evp_pkey_st* pkey;
    const struct PKCS7_CTX_st* ctx;
};

typedef struct pkcs7_signer_info_st PKCS7_SIGNER_INFO;

typedef int (*sk_PKCS7_SIGNER_INFO_compfunc)(const struct pkcs7_signer_info_st**,const struct pkcs7_signer_info_st**);

typedef void (*sk_PKCS7_SIGNER_INFO_freefunc)(struct pkcs7_signer_info_st*);

typedef struct pkcs7_signer_info_st* (*sk_PKCS7_SIGNER_INFO_copyfunc)(const struct pkcs7_signer_info_st*);

struct pkcs7_recip_info_st
{
    struct asn1_string_st* version;
    struct pkcs7_issuer_and_serial_st* issuer_and_serial;
    struct X509_algor_st* key_enc_algor;
    struct asn1_string_st* enc_key;
    struct x509_st* cert;
    const struct PKCS7_CTX_st* ctx;
};

typedef struct pkcs7_recip_info_st PKCS7_RECIP_INFO;

typedef int (*sk_PKCS7_RECIP_INFO_compfunc)(const struct pkcs7_recip_info_st**,const struct pkcs7_recip_info_st**);

typedef void (*sk_PKCS7_RECIP_INFO_freefunc)(struct pkcs7_recip_info_st*);

typedef struct pkcs7_recip_info_st* (*sk_PKCS7_RECIP_INFO_copyfunc)(const struct pkcs7_recip_info_st*);

struct pkcs7_signed_st
{
    struct asn1_string_st* version;
    struct stack_st_X509_ALGOR* md_algs;
    struct stack_st_X509* cert;
    struct stack_st_X509_CRL* crl;
    struct stack_st_PKCS7_SIGNER_INFO* signer_info;
    struct pkcs7_st* contents;
};

typedef struct pkcs7_signed_st PKCS7_SIGNED;

struct pkcs7_enc_content_st
{
    struct asn1_object_st* content_type;
    struct X509_algor_st* algorithm;
    struct asn1_string_st* enc_data;
    const struct evp_cipher_st* cipher;
    const struct PKCS7_CTX_st* ctx;
};

typedef struct pkcs7_enc_content_st PKCS7_ENC_CONTENT;

struct pkcs7_enveloped_st
{
    struct asn1_string_st* version;
    struct stack_st_PKCS7_RECIP_INFO* recipientinfo;
    struct pkcs7_enc_content_st* enc_data;
};

typedef struct pkcs7_enveloped_st PKCS7_ENVELOPE;

struct pkcs7_signedandenveloped_st
{
    struct asn1_string_st* version;
    struct stack_st_X509_ALGOR* md_algs;
    struct stack_st_X509* cert;
    struct stack_st_X509_CRL* crl;
    struct stack_st_PKCS7_SIGNER_INFO* signer_info;
    struct pkcs7_enc_content_st* enc_data;
    struct stack_st_PKCS7_RECIP_INFO* recipientinfo;
};

typedef struct pkcs7_signedandenveloped_st PKCS7_SIGN_ENVELOPE;

struct pkcs7_digest_st
{
    struct asn1_string_st* version;
    struct X509_algor_st* md;
    struct pkcs7_st* contents;
    struct asn1_string_st* digest;
};

typedef struct pkcs7_digest_st PKCS7_DIGEST;

struct pkcs7_encrypted_st
{
    struct asn1_string_st* version;
    struct pkcs7_enc_content_st* enc_data;
};

typedef struct pkcs7_encrypted_st PKCS7_ENCRYPT;

union anonymous_typeZ28
{
char* ptr;
struct asn1_string_st* data;
struct pkcs7_signed_st* sign;
struct pkcs7_enveloped_st* enveloped;
struct pkcs7_signedandenveloped_st* signed_and_enveloped;
struct pkcs7_digest_st* digest;
struct pkcs7_encrypted_st* encrypted;
struct asn1_type_st* other;
};

union anonymous_typeZ29
{
char* ptr;
struct asn1_string_st* data;
struct pkcs7_signed_st* sign;
struct pkcs7_enveloped_st* enveloped;
struct pkcs7_signedandenveloped_st* signed_and_enveloped;
struct pkcs7_digest_st* digest;
struct pkcs7_encrypted_st* encrypted;
struct asn1_type_st* other;
};

struct pkcs7_st
{
    unsigned char* asn1;
    long length;
    int state;
    int detached;
    struct asn1_object_st* type;
    union anonymous_typeZ29 d;
    struct PKCS7_CTX_st ctx;
};

typedef struct pkcs7_st PKCS7;

typedef int (*sk_PKCS7_compfunc)(const struct pkcs7_st**,const struct pkcs7_st**);

typedef void (*sk_PKCS7_freefunc)(struct pkcs7_st*);

typedef struct pkcs7_st* (*sk_PKCS7_copyfunc)(const struct pkcs7_st*);

struct anonymous_typeX30
{
    char* section;
    char* name;
    char* value;
};

typedef struct anonymous_typeX30 CONF_VALUE;

typedef int (*sk_CONF_VALUE_compfunc)(const struct anonymous_typeX30**,const struct anonymous_typeX30**);

typedef void (*sk_CONF_VALUE_freefunc)(struct anonymous_typeX30*);

typedef struct anonymous_typeX30* (*sk_CONF_VALUE_copyfunc)(const struct anonymous_typeX30*);

union lh_CONF_VALUE_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_CONF_VALUE
{
    union lh_CONF_VALUE_dummy dummy;
};

typedef int (*lh_CONF_VALUE_compfunc)(const struct anonymous_typeX30*,const struct anonymous_typeX30*);

typedef unsigned long  int (*lh_CONF_VALUE_hashfunc)(const struct anonymous_typeX30*);

typedef void (*lh_CONF_VALUE_doallfunc)(struct anonymous_typeX30*);

typedef struct conf_method_st CONF_METHOD;

struct conf_method_st
{
    const char* name;
    struct conf_st* (*create)(struct conf_method_st*);
    int (*init)(struct conf_st*);
    int (*destroy)(struct conf_st*);
    int (*destroy_data)(struct conf_st*);
    int (*load_bio)(struct conf_st*,struct bio_st*,long*);
    int (*dump)(const struct conf_st*,struct bio_st*);
    int (*is_number)(const struct conf_st*,char);
    int (*to_int)(const struct conf_st*,char);
    int (*load)(struct conf_st*,const char*,long*);
};

struct conf_st
{
    struct conf_method_st* meth;
    void* meth_data;
    struct lhash_st_CONF_VALUE* data;
    int flag_dollarid;
    int flag_abspath;
    char* includedir;
    struct ossl_lib_ctx_st* libctx;
};

typedef struct conf_imodule_st CONF_IMODULE;

typedef struct conf_module_st CONF_MODULE;

typedef int (*conf_init_func)(struct conf_imodule_st*,const struct conf_st*);

typedef void (*conf_finish_func)(struct conf_imodule_st*);

typedef struct bio_st* (*OSSL_HTTP_bio_cb_t)(struct bio_st*,void*,int,int);

typedef struct async_job_st ASYNC_JOB;

typedef struct async_wait_ctx_st ASYNC_WAIT_CTX;

typedef int (*ASYNC_callback_fn)(void*);

typedef void* (*ASYNC_stack_alloc_fn)(unsigned long  int*);

typedef void (*ASYNC_stack_free_fn)(void*);

typedef int (*sk_SCT_compfunc)(const struct sct_st**,const struct sct_st**);

typedef void (*sk_SCT_freefunc)(struct sct_st*);

typedef struct sct_st* (*sk_SCT_copyfunc)(const struct sct_st*);

typedef int (*sk_CTLOG_compfunc)(const struct ctlog_st**,const struct ctlog_st**);

typedef void (*sk_CTLOG_freefunc)(struct ctlog_st*);

typedef struct ctlog_st* (*sk_CTLOG_copyfunc)(const struct ctlog_st*);

enum anonymous_typeY31 { CT_LOG_ENTRY_TYPE_NOT_SET=(-1),
CT_LOG_ENTRY_TYPE_X509=(0),
CT_LOG_ENTRY_TYPE_PRECERT=(1)
};

typedef enum anonymous_typeY31 ct_log_entry_type_t;

enum anonymous_typeY32 { SCT_VERSION_NOT_SET=(-1),
SCT_VERSION_V1=(0)
};

typedef enum anonymous_typeY32 sct_version_t;

enum anonymous_typeY33 { SCT_SOURCE_UNKNOWN
,SCT_SOURCE_TLS_EXTENSION
,SCT_SOURCE_X509V3_EXTENSION
,SCT_SOURCE_OCSP_STAPLED_RESPONSE
};

typedef enum anonymous_typeY33 sct_source_t;

enum anonymous_typeY34 { SCT_VALIDATION_STATUS_NOT_SET
,SCT_VALIDATION_STATUS_UNKNOWN_LOG
,SCT_VALIDATION_STATUS_VALID
,SCT_VALIDATION_STATUS_INVALID
,SCT_VALIDATION_STATUS_UNVERIFIED
,SCT_VALIDATION_STATUS_UNKNOWN_VERSION
};

typedef enum anonymous_typeY34 sct_validation_status_t;

typedef struct ssl_st* ssl_crock_st;

typedef struct tls_session_ticket_ext_st TLS_SESSION_TICKET_EXT;

typedef struct ssl_method_st SSL_METHOD;

typedef struct ssl_cipher_st SSL_CIPHER;

typedef struct ssl_session_st SSL_SESSION;

typedef struct tls_sigalgs_st TLS_SIGALGS;

typedef struct ssl_conf_ctx_st SSL_CONF_CTX;

struct srtp_protection_profile_st
{
    const char* name;
    unsigned long  int id;
};

typedef struct srtp_protection_profile_st SRTP_PROTECTION_PROFILE;

typedef int (*sk_SRTP_PROTECTION_PROFILE_compfunc)(const struct srtp_protection_profile_st**,const struct srtp_protection_profile_st**);

typedef void (*sk_SRTP_PROTECTION_PROFILE_freefunc)(struct srtp_protection_profile_st*);

typedef struct srtp_protection_profile_st* (*sk_SRTP_PROTECTION_PROFILE_copyfunc)(const struct srtp_protection_profile_st*);

typedef int (*tls_session_ticket_ext_cb_fn)(struct ssl_st*,const unsigned char*,int,void*);

typedef int (*tls_session_secret_cb_fn)(struct ssl_st*,void*,int*,struct stack_st_SSL_CIPHER*,const struct ssl_cipher_st**,void*);

typedef int (*custom_ext_add_cb)(struct ssl_st*,unsigned int,const unsigned char**,unsigned long  int*,int*,void*);

typedef void (*custom_ext_free_cb)(struct ssl_st*,unsigned int,const unsigned char*,void*);

typedef int (*custom_ext_parse_cb)(struct ssl_st*,unsigned int,const unsigned char*,unsigned long  int,int*,void*);

typedef int (*SSL_custom_ext_add_cb_ex)(struct ssl_st*,unsigned int,unsigned int,const unsigned char**,unsigned long  int*,struct x509_st*,unsigned long  int,int*,void*);

typedef void (*SSL_custom_ext_free_cb_ex)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,void*);

typedef int (*SSL_custom_ext_parse_cb_ex)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,unsigned long  int,struct x509_st*,unsigned long  int,int*,void*);

typedef int (*SSL_verify_cb)(int,struct x509_store_ctx_st*);

typedef int (*SSL_async_callback_fn)(struct ssl_st*,void*);

typedef int (*GEN_SESSION_CB)(struct ssl_st*,unsigned char*,unsigned int*);

typedef int (*SSL_CTX_npn_advertised_cb_func)(struct ssl_st*,const unsigned char**,unsigned int*,void*);

typedef int (*SSL_CTX_npn_select_cb_func)(struct ssl_st*,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef int (*SSL_CTX_alpn_select_cb_func)(struct ssl_st*,const unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef unsigned int (*SSL_psk_client_cb_func)(struct ssl_st*,const char*,char*,unsigned int,unsigned char*,unsigned int);

typedef unsigned int (*SSL_psk_server_cb_func)(struct ssl_st*,const char*,unsigned char*,unsigned int);

typedef int (*SSL_psk_find_session_cb_func)(struct ssl_st*,const unsigned char*,unsigned long  int,struct ssl_session_st**);

typedef int (*SSL_psk_use_session_cb_func)(struct ssl_st*,const struct evp_md_st*,const unsigned char**,unsigned long  int*,struct ssl_session_st**);

typedef void (*SSL_CTX_keylog_cb_func)(const struct ssl_st*,const char*);

struct tls_session_ticket_ext_st
{
    unsigned short int length;
    void* data;
};

typedef int (*sk_SSL_CIPHER_compfunc)(const struct ssl_cipher_st**,const struct ssl_cipher_st**);

typedef void (*sk_SSL_CIPHER_freefunc)(struct ssl_cipher_st*);

typedef struct ssl_cipher_st* (*sk_SSL_CIPHER_copyfunc)(const struct ssl_cipher_st*);

enum anonymous_typeY35 { TLS_ST_BEFORE
,TLS_ST_OK
,DTLS_ST_CR_HELLO_VERIFY_REQUEST
,TLS_ST_CR_SRVR_HELLO
,TLS_ST_CR_CERT
,TLS_ST_CR_COMP_CERT
,TLS_ST_CR_CERT_STATUS
,TLS_ST_CR_KEY_EXCH
,TLS_ST_CR_CERT_REQ
,TLS_ST_CR_SRVR_DONE
,TLS_ST_CR_SESSION_TICKET
,TLS_ST_CR_CHANGE
,TLS_ST_CR_FINISHED
,TLS_ST_CW_CLNT_HELLO
,TLS_ST_CW_CERT
,TLS_ST_CW_COMP_CERT
,TLS_ST_CW_KEY_EXCH
,TLS_ST_CW_CERT_VRFY
,TLS_ST_CW_CHANGE
,TLS_ST_CW_NEXT_PROTO
,TLS_ST_CW_FINISHED
,TLS_ST_SW_HELLO_REQ
,TLS_ST_SR_CLNT_HELLO
,DTLS_ST_SW_HELLO_VERIFY_REQUEST
,TLS_ST_SW_SRVR_HELLO
,TLS_ST_SW_CERT
,TLS_ST_SW_COMP_CERT
,TLS_ST_SW_KEY_EXCH
,TLS_ST_SW_CERT_REQ
,TLS_ST_SW_SRVR_DONE
,TLS_ST_SR_CERT
,TLS_ST_SR_COMP_CERT
,TLS_ST_SR_KEY_EXCH
,TLS_ST_SR_CERT_VRFY
,TLS_ST_SR_NEXT_PROTO
,TLS_ST_SR_CHANGE
,TLS_ST_SR_FINISHED
,TLS_ST_SW_SESSION_TICKET
,TLS_ST_SW_CERT_STATUS
,TLS_ST_SW_CHANGE
,TLS_ST_SW_FINISHED
,TLS_ST_SW_ENCRYPTED_EXTENSIONS
,TLS_ST_CR_ENCRYPTED_EXTENSIONS
,TLS_ST_CR_CERT_VRFY
,TLS_ST_SW_CERT_VRFY
,TLS_ST_CR_HELLO_REQ
,TLS_ST_SW_KEY_UPDATE
,TLS_ST_CW_KEY_UPDATE
,TLS_ST_SR_KEY_UPDATE
,TLS_ST_CR_KEY_UPDATE
,TLS_ST_EARLY_DATA
,TLS_ST_PENDING_EARLY_DATA_END
,TLS_ST_CW_END_OF_EARLY_DATA
,TLS_ST_SR_END_OF_EARLY_DATA
};

typedef enum anonymous_typeY35 OSSL_HANDSHAKE_STATE;

typedef int (*SSL_client_hello_cb_fn)(struct ssl_st*,int*,void*);

struct ssl_shutdown_ex_args_st
{
    unsigned long  long quic_error_code;
    const char* quic_reason;
};

typedef struct ssl_shutdown_ex_args_st SSL_SHUTDOWN_EX_ARGS;

struct ssl_stream_reset_args_st
{
    unsigned long  long quic_error_code;
};

typedef struct ssl_stream_reset_args_st SSL_STREAM_RESET_ARGS;

struct ssl_conn_close_info_st
{
    unsigned long  long error_code;
    unsigned long  long frame_type;
    const char* reason;
    unsigned long  int reason_len;
    unsigned int flags;
};

typedef struct ssl_conn_close_info_st SSL_CONN_CLOSE_INFO;

struct ssl_poll_item_st
{
    struct bio_poll_descriptor_st desc;
    unsigned long  long events;
    unsigned long  long revents;
};

typedef struct ssl_poll_item_st SSL_POLL_ITEM;

typedef int (*ssl_ct_validation_cb)(const struct ct_policy_eval_ctx_st*,const struct stack_st_SCT*,void*);

enum { SSL_CT_VALIDATION_PERMISSIVE=(0),
SSL_CT_VALIDATION_STRICT
};

typedef int SSL_TICKET_STATUS;

typedef int SSL_TICKET_RETURN;

typedef int (*SSL_CTX_generate_session_ticket_fn)(struct ssl_st*,void*);

typedef int (*SSL_CTX_decrypt_session_ticket_fn)(struct ssl_st*,struct ssl_session_st*,const unsigned char*,unsigned long  int,int,void*);

typedef unsigned int (*DTLS_timer_cb)(struct ssl_st*,unsigned int);

typedef int (*SSL_allow_early_data_cb_fn)(struct ssl_st*,void*);

struct err_state_st
{
    int err_flags[16];
    int err_marks[16];
    unsigned long  int err_buffer[16];
    char* err_data[16];
    unsigned long  int err_data_size[16];
    int err_data_flags[16];
    char* err_file[16];
    int err_line[16];
    char* err_func[16];
    int top;
    int bottom;
};

struct ERR_string_data_st
{
    unsigned long  int error;
    const char* string;
};

typedef struct ERR_string_data_st ERR_STRING_DATA;

union lh_ERR_STRING_DATA_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_ERR_STRING_DATA
{
    union lh_ERR_STRING_DATA_dummy dummy;
};

typedef int (*lh_ERR_STRING_DATA_compfunc)(const struct ERR_string_data_st*,const struct ERR_string_data_st*);

typedef unsigned long  int (*lh_ERR_STRING_DATA_hashfunc)(const struct ERR_string_data_st*);

typedef void (*lh_ERR_STRING_DATA_doallfunc)(struct ERR_string_data_st*);

typedef int socket_fd;

struct list_item$1list$1charphph
{
    struct list$1charph* item;
    struct list_item$1list$1charphph* prev;
    struct list_item$1list$1charphph* next;
};

struct list$1list$1charphph
{
    struct list_item$1list$1charphph* head;
    struct list_item$1list$1charphph* tail;
    int len;
    struct list_item$1list$1charphph* it;
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
int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);
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
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
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
int system(const char* anonymous_var_nameX239);
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]);
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48();
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
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
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
struct buffer* string_to_buffer(char* self);
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
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
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
char* charp_printable(char* str);
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
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX742, int anonymous_var_nameX743, const char** anonymous_var_nameX744, int* anonymous_var_nameX745, const unsigned char* anonymous_var_nameX746);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX747, int anonymous_var_nameX748, const char** anonymous_var_nameX749, int* anonymous_var_nameX750, const unsigned char* anonymous_var_nameX751);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX752, int anonymous_var_nameX753, const char** anonymous_var_nameX754, int* anonymous_var_nameX755, const unsigned char* anonymous_var_nameX756);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX757, int anonymous_var_nameX758, int* anonymous_var_nameX759, const char** anonymous_var_nameX760, int* anonymous_var_nameX761, const unsigned char* anonymous_var_nameX762);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX763, int anonymous_var_nameX764, int* anonymous_var_nameX765, const char** anonymous_var_nameX766, int* anonymous_var_nameX767, const unsigned char* anonymous_var_nameX768);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX769, int anonymous_var_nameX770, int* anonymous_var_nameX771, const char** anonymous_var_nameX772, int* anonymous_var_nameX773, const unsigned char* anonymous_var_nameX774);
int pcre_config(int anonymous_var_nameX775, void* anonymous_var_nameX776);
int pcre16_config(int anonymous_var_nameX777, void* anonymous_var_nameX778);
int pcre32_config(int anonymous_var_nameX779, void* anonymous_var_nameX780);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX781, const char* anonymous_var_nameX782, int* anonymous_var_nameX783, int anonymous_var_nameX784, const char* anonymous_var_nameX785, char* anonymous_var_nameX786, int anonymous_var_nameX787);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX788, const unsigned short int* anonymous_var_nameX789, int* anonymous_var_nameX790, int anonymous_var_nameX791, const unsigned short int* anonymous_var_nameX792, unsigned short int* anonymous_var_nameX793, int anonymous_var_nameX794);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX795, const unsigned int* anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798, const unsigned int* anonymous_var_nameX799, unsigned int* anonymous_var_nameX800, int anonymous_var_nameX801);
int pcre_copy_substring(const char* anonymous_var_nameX802, int* anonymous_var_nameX803, int anonymous_var_nameX804, int anonymous_var_nameX805, char* anonymous_var_nameX806, int anonymous_var_nameX807);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX808, int* anonymous_var_nameX809, int anonymous_var_nameX810, int anonymous_var_nameX811, unsigned short int* anonymous_var_nameX812, int anonymous_var_nameX813);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX814, int* anonymous_var_nameX815, int anonymous_var_nameX816, int anonymous_var_nameX817, unsigned int* anonymous_var_nameX818, int anonymous_var_nameX819);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX820, const struct pcre_extra* anonymous_var_nameX821, const char* anonymous_var_nameX822, int anonymous_var_nameX823, int anonymous_var_nameX824, int anonymous_var_nameX825, int* anonymous_var_nameX826, int anonymous_var_nameX827, int* anonymous_var_nameX828, int anonymous_var_nameX829);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX830, const struct pcre16_extra* anonymous_var_nameX831, const unsigned short int* anonymous_var_nameX832, int anonymous_var_nameX833, int anonymous_var_nameX834, int anonymous_var_nameX835, int* anonymous_var_nameX836, int anonymous_var_nameX837, int* anonymous_var_nameX838, int anonymous_var_nameX839);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX840, const struct pcre32_extra* anonymous_var_nameX841, const unsigned int* anonymous_var_nameX842, int anonymous_var_nameX843, int anonymous_var_nameX844, int anonymous_var_nameX845, int* anonymous_var_nameX846, int anonymous_var_nameX847, int* anonymous_var_nameX848, int anonymous_var_nameX849);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX850, const struct pcre_extra* anonymous_var_nameX851, const char* anonymous_var_nameX852, int anonymous_var_nameX853, int anonymous_var_nameX854, int anonymous_var_nameX855, int* anonymous_var_nameX856, int anonymous_var_nameX857);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX858, const struct pcre16_extra* anonymous_var_nameX859, const unsigned short int* anonymous_var_nameX860, int anonymous_var_nameX861, int anonymous_var_nameX862, int anonymous_var_nameX863, int* anonymous_var_nameX864, int anonymous_var_nameX865);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX866, const struct pcre32_extra* anonymous_var_nameX867, const unsigned int* anonymous_var_nameX868, int anonymous_var_nameX869, int anonymous_var_nameX870, int anonymous_var_nameX871, int* anonymous_var_nameX872, int anonymous_var_nameX873);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX874, const struct pcre_extra* anonymous_var_nameX875, const char* anonymous_var_nameX876, int anonymous_var_nameX877, int anonymous_var_nameX878, int anonymous_var_nameX879, int* anonymous_var_nameX880, int anonymous_var_nameX881, struct real_pcre_jit_stack* anonymous_var_nameX882);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX883, const struct pcre16_extra* anonymous_var_nameX884, const unsigned short int* anonymous_var_nameX885, int anonymous_var_nameX886, int anonymous_var_nameX887, int anonymous_var_nameX888, int* anonymous_var_nameX889, int anonymous_var_nameX890, struct real_pcre16_jit_stack* anonymous_var_nameX891);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX892, const struct pcre32_extra* anonymous_var_nameX893, const unsigned int* anonymous_var_nameX894, int anonymous_var_nameX895, int anonymous_var_nameX896, int anonymous_var_nameX897, int* anonymous_var_nameX898, int anonymous_var_nameX899, struct real_pcre32_jit_stack* anonymous_var_nameX900);
void pcre_free_substring(const char* anonymous_var_nameX901);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX902);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX903);
void pcre_free_substring_list(const char** anonymous_var_nameX904);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX905);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX906);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX907, const struct pcre_extra* anonymous_var_nameX908, int anonymous_var_nameX909, void* anonymous_var_nameX910);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX911, const struct pcre16_extra* anonymous_var_nameX912, int anonymous_var_nameX913, void* anonymous_var_nameX914);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX915, const struct pcre32_extra* anonymous_var_nameX916, int anonymous_var_nameX917, void* anonymous_var_nameX918);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX919, const char* anonymous_var_nameX920, int* anonymous_var_nameX921, int anonymous_var_nameX922, const char* anonymous_var_nameX923, const char** anonymous_var_nameX924);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX925, const unsigned short int* anonymous_var_nameX926, int* anonymous_var_nameX927, int anonymous_var_nameX928, const unsigned short int* anonymous_var_nameX929, const unsigned short int** anonymous_var_nameX930);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX931, const unsigned int* anonymous_var_nameX932, int* anonymous_var_nameX933, int anonymous_var_nameX934, const unsigned int* anonymous_var_nameX935, const unsigned int** anonymous_var_nameX936);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX937, const char* anonymous_var_nameX938);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX939, const unsigned short int* anonymous_var_nameX940);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX941, const unsigned int* anonymous_var_nameX942);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX943, const char* anonymous_var_nameX944, char** anonymous_var_nameX945, char** anonymous_var_nameX946);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX947, const unsigned short int* anonymous_var_nameX948, unsigned short int** anonymous_var_nameX949, unsigned short int** anonymous_var_nameX950);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX951, const unsigned int* anonymous_var_nameX952, unsigned int** anonymous_var_nameX953, unsigned int** anonymous_var_nameX954);
int pcre_get_substring(const char* anonymous_var_nameX955, int* anonymous_var_nameX956, int anonymous_var_nameX957, int anonymous_var_nameX958, const char** anonymous_var_nameX959);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX960, int* anonymous_var_nameX961, int anonymous_var_nameX962, int anonymous_var_nameX963, const unsigned short int** anonymous_var_nameX964);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX965, int* anonymous_var_nameX966, int anonymous_var_nameX967, int anonymous_var_nameX968, const unsigned int** anonymous_var_nameX969);
int pcre_get_substring_list(const char* anonymous_var_nameX970, int* anonymous_var_nameX971, int anonymous_var_nameX972, const char*** anonymous_var_nameX973);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX974, int* anonymous_var_nameX975, int anonymous_var_nameX976, const unsigned short int*** anonymous_var_nameX977);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX978, int* anonymous_var_nameX979, int anonymous_var_nameX980, const unsigned int*** anonymous_var_nameX981);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX982, int anonymous_var_nameX983);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX984, int anonymous_var_nameX985);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX986, int anonymous_var_nameX987);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX988, int anonymous_var_nameX989, const char** anonymous_var_nameX990);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX991, int anonymous_var_nameX992, const char** anonymous_var_nameX993);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX994, int anonymous_var_nameX995, const char** anonymous_var_nameX996);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX997);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX998);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX999);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1000, struct pcre_extra* anonymous_var_nameX1001, const unsigned char* anonymous_var_nameX1002);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1003, struct pcre16_extra* anonymous_var_nameX1004, const unsigned char* anonymous_var_nameX1005);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX1006, struct pcre32_extra* anonymous_var_nameX1007, const unsigned char* anonymous_var_nameX1008);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX1009, const unsigned short int* anonymous_var_nameX1010, int anonymous_var_nameX1011, int* anonymous_var_nameX1012, int anonymous_var_nameX1013);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX1014, const unsigned int* anonymous_var_nameX1015, int anonymous_var_nameX1016, int* anonymous_var_nameX1017, int anonymous_var_nameX1018);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX1019, int anonymous_var_nameX1020);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX1021, int anonymous_var_nameX1022);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX1023, int anonymous_var_nameX1024);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX1025);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX1026);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX1027);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX1028, struct real_pcre_jit_stack* (*anonymous_var_nameX1029)(void*), void* anonymous_var_nameX1030);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX1031, struct real_pcre16_jit_stack* (*anonymous_var_nameX1032)(void*), void* anonymous_var_nameX1033);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX1034, struct real_pcre32_jit_stack* (*anonymous_var_nameX1035)(void*), void* anonymous_var_nameX1036);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
char* asctime(const struct tm* anonymous_var_nameX1037);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX1038);
double difftime(long anonymous_var_nameX1039, long anonymous_var_nameX1040);
struct tm* getdate(const char* anonymous_var_nameX1041);
struct tm* gmtime(const long* anonymous_var_nameX1042);
struct tm* localtime(const long* anonymous_var_nameX1043);
long mktime(struct tm* anonymous_var_nameX1044);
unsigned long  int strftime(char* anonymous_var_nameX1045, unsigned long  int anonymous_var_nameX1046, const char* anonymous_var_nameX1047, const struct tm* anonymous_var_nameX1048);
char* strptime(const char* anonymous_var_nameX1049, const char* anonymous_var_nameX1050, struct tm* anonymous_var_nameX1051);
long time(long* anonymous_var_nameX1052);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX1053, char* anonymous_var_nameX1054);
char* ctime_r(const long* anonymous_var_nameX1055, char* anonymous_var_nameX1056);
struct tm* gmtime_r(const long* anonymous_var_nameX1057, struct tm* anonymous_var_nameX1058);
struct tm* localtime_r(const long* anonymous_var_nameX1059, struct tm* anonymous_var_nameX1060);
long posix2time(long anonymous_var_nameX1061);
void tzsetwall();
long time2posix(long anonymous_var_nameX1062);
long timelocal(struct tm* anonymous_var_nameX1063);
long timegm(struct tm* anonymous_var_nameX1064);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);
int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int isalnum(int anonymous_var_nameX1079);
int isalpha(int anonymous_var_nameX1080);
int isblank(int anonymous_var_nameX1081);
int iscntrl(int anonymous_var_nameX1082);
int isdigit(int anonymous_var_nameX1083);
int isgraph(int anonymous_var_nameX1084);
int islower(int anonymous_var_nameX1085);
int isprint(int anonymous_var_nameX1086);
int ispunct(int anonymous_var_nameX1087);
int isspace(int anonymous_var_nameX1088);
int isupper(int anonymous_var_nameX1089);
int isxdigit(int anonymous_var_nameX1090);
int tolower(int anonymous_var_nameX1091);
int toupper(int anonymous_var_nameX1092);
int isascii(int anonymous_var_nameX1093);
int toascii(int anonymous_var_nameX1094);
int _tolower(int anonymous_var_nameX1095);
int _toupper(int anonymous_var_nameX1096);
int digittoint(int anonymous_var_nameX1097);
int ishexnumber(int anonymous_var_nameX1098);
int isideogram(int anonymous_var_nameX1099);
int isnumber(int anonymous_var_nameX1100);
int isphonogram(int anonymous_var_nameX1101);
int isrune(int anonymous_var_nameX1102);
int isspecial(int anonymous_var_nameX1103);
int iswalnum(int anonymous_var_nameX1104);
int iswalpha(int anonymous_var_nameX1105);
int iswcntrl(int anonymous_var_nameX1106);
int iswctype(int anonymous_var_nameX1107, unsigned int anonymous_var_nameX1108);
int iswdigit(int anonymous_var_nameX1109);
int iswgraph(int anonymous_var_nameX1110);
int iswlower(int anonymous_var_nameX1111);
int iswprint(int anonymous_var_nameX1112);
int iswpunct(int anonymous_var_nameX1113);
int iswspace(int anonymous_var_nameX1114);
int iswupper(int anonymous_var_nameX1115);
int iswxdigit(int anonymous_var_nameX1116);
int towlower(int anonymous_var_nameX1117);
int towupper(int anonymous_var_nameX1118);
unsigned int wctype(const char* anonymous_var_nameX1119);
int btowc(int anonymous_var_nameX1120);
int fgetwc(struct __sFILE* anonymous_var_nameX1121);
int* fgetws(int* anonymous_var_nameX1122, int anonymous_var_nameX1123, struct __sFILE* anonymous_var_nameX1124);
int fputwc(int anonymous_var_nameX1125, struct __sFILE* anonymous_var_nameX1126);
int fputws(const int* anonymous_var_nameX1127, struct __sFILE* anonymous_var_nameX1128);
int fwide(struct __sFILE* anonymous_var_nameX1129, int anonymous_var_nameX1130);
int fwprintf(struct __sFILE* anonymous_var_nameX1131, const int* anonymous_var_nameX1132, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX1133, const int* anonymous_var_nameX1134, ...);
int getwc(struct __sFILE* anonymous_var_nameX1135);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX1136, unsigned long  int anonymous_var_nameX1137, union anonymous_typeZ1* anonymous_var_nameX1138);
unsigned long  int mbrtowc(int* anonymous_var_nameX1139, const char* anonymous_var_nameX1140, unsigned long  int anonymous_var_nameX1141, union anonymous_typeZ1* anonymous_var_nameX1142);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX1143);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX1144, const char** anonymous_var_nameX1145, unsigned long  int anonymous_var_nameX1146, union anonymous_typeZ1* anonymous_var_nameX1147);
int putwc(int anonymous_var_nameX1148, struct __sFILE* anonymous_var_nameX1149);
int putwchar(int anonymous_var_nameX1150);
int swprintf(int* anonymous_var_nameX1151, unsigned long  int anonymous_var_nameX1152, const int* anonymous_var_nameX1153, ...);
int swscanf(const int* anonymous_var_nameX1154, const int* anonymous_var_nameX1155, ...);
int ungetwc(int anonymous_var_nameX1156, struct __sFILE* anonymous_var_nameX1157);
int vfwprintf(struct __sFILE* anonymous_var_nameX1158, const int* anonymous_var_nameX1159, __darwin_va_list anonymous_var_nameX1160);
int vswprintf(int* anonymous_var_nameX1161, unsigned long  int anonymous_var_nameX1162, const int* anonymous_var_nameX1163, __darwin_va_list anonymous_var_nameX1164);
int vwprintf(const int* anonymous_var_nameX1165, __darwin_va_list anonymous_var_nameX1166);
unsigned long  int wcrtomb(char* anonymous_var_nameX1167, int anonymous_var_nameX1168, union anonymous_typeZ1* anonymous_var_nameX1169);
int* wcscat(int* anonymous_var_nameX1170, const int* anonymous_var_nameX1171);
int* wcschr(const int* anonymous_var_nameX1172, int anonymous_var_nameX1173);
int wcscmp(const int* anonymous_var_nameX1174, const int* anonymous_var_nameX1175);
int wcscoll(const int* anonymous_var_nameX1176, const int* anonymous_var_nameX1177);
int* wcscpy(int* anonymous_var_nameX1178, const int* anonymous_var_nameX1179);
unsigned long  int wcscspn(const int* anonymous_var_nameX1180, const int* anonymous_var_nameX1181);
unsigned long  int wcsftime(int* anonymous_var_nameX1182, unsigned long  int anonymous_var_nameX1183, const int* anonymous_var_nameX1184, const struct tm* anonymous_var_nameX1185);
unsigned long  int wcslen(const int* anonymous_var_nameX1186);
int* wcsncat(int* anonymous_var_nameX1187, const int* anonymous_var_nameX1188, unsigned long  int anonymous_var_nameX1189);
int wcsncmp(const int* anonymous_var_nameX1190, const int* anonymous_var_nameX1191, unsigned long  int anonymous_var_nameX1192);
int* wcsncpy(int* anonymous_var_nameX1193, const int* anonymous_var_nameX1194, unsigned long  int anonymous_var_nameX1195);
int* wcspbrk(const int* anonymous_var_nameX1196, const int* anonymous_var_nameX1197);
int* wcsrchr(const int* anonymous_var_nameX1198, int anonymous_var_nameX1199);
unsigned long  int wcsrtombs(char* anonymous_var_nameX1200, const int** anonymous_var_nameX1201, unsigned long  int anonymous_var_nameX1202, union anonymous_typeZ1* anonymous_var_nameX1203);
unsigned long  int wcsspn(const int* anonymous_var_nameX1204, const int* anonymous_var_nameX1205);
int* wcsstr(const int* anonymous_var_nameX1206, const int* anonymous_var_nameX1207);
unsigned long  int wcsxfrm(int* anonymous_var_nameX1208, const int* anonymous_var_nameX1209, unsigned long  int anonymous_var_nameX1210);
int wctob(int anonymous_var_nameX1211);
double wcstod(const int* anonymous_var_nameX1212, int** anonymous_var_nameX1213);
int* wcstok(int* anonymous_var_nameX1214, const int* anonymous_var_nameX1215, int** anonymous_var_nameX1216);
long wcstol(const int* anonymous_var_nameX1217, int** anonymous_var_nameX1218, int anonymous_var_nameX1219);
unsigned long  int wcstoul(const int* anonymous_var_nameX1220, int** anonymous_var_nameX1221, int anonymous_var_nameX1222);
int* wmemchr(const int* anonymous_var_nameX1223, int anonymous_var_nameX1224, unsigned long  int anonymous_var_nameX1225);
int wmemcmp(const int* anonymous_var_nameX1226, const int* anonymous_var_nameX1227, unsigned long  int anonymous_var_nameX1228);
int* wmemcpy(int* anonymous_var_nameX1229, const int* anonymous_var_nameX1230, unsigned long  int anonymous_var_nameX1231);
int* wmemmove(int* anonymous_var_nameX1232, const int* anonymous_var_nameX1233, unsigned long  int anonymous_var_nameX1234);
int* wmemset(int* anonymous_var_nameX1235, int anonymous_var_nameX1236, unsigned long  int anonymous_var_nameX1237);
int wprintf(const int* anonymous_var_nameX1238, ...);
int wscanf(const int* anonymous_var_nameX1239, ...);
int wcswidth(const int* anonymous_var_nameX1240, unsigned long  int anonymous_var_nameX1241);
int wcwidth(int anonymous_var_nameX1242);
int vfwscanf(struct __sFILE* anonymous_var_nameX1243, const int* anonymous_var_nameX1244, __darwin_va_list anonymous_var_nameX1245);
int vswscanf(const int* anonymous_var_nameX1246, const int* anonymous_var_nameX1247, __darwin_va_list anonymous_var_nameX1248);
int vwscanf(const int* anonymous_var_nameX1249, __darwin_va_list anonymous_var_nameX1250);
float wcstof(const int* anonymous_var_nameX1251, int** anonymous_var_nameX1252);
long  double wcstold(const int* anonymous_var_nameX1253, int** anonymous_var_nameX1254);
long long wcstoll(const int* anonymous_var_nameX1255, int** anonymous_var_nameX1256, int anonymous_var_nameX1257);
unsigned long  long wcstoull(const int* anonymous_var_nameX1258, int** anonymous_var_nameX1259, int anonymous_var_nameX1260);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX1261, const char** anonymous_var_nameX1262, unsigned long  int anonymous_var_nameX1263, unsigned long  int anonymous_var_nameX1264, union anonymous_typeZ1* anonymous_var_nameX1265);
int* wcpcpy(int* anonymous_var_nameX1266, const int* anonymous_var_nameX1267);
int* wcpncpy(int* anonymous_var_nameX1268, const int* anonymous_var_nameX1269, unsigned long  int anonymous_var_nameX1270);
int* wcsdup(const int* anonymous_var_nameX1271);
int wcscasecmp(const int* anonymous_var_nameX1272, const int* anonymous_var_nameX1273);
int wcsncasecmp(const int* anonymous_var_nameX1274, const int* anonymous_var_nameX1275, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX1276, unsigned long  int anonymous_var_nameX1277);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX1278, const int** anonymous_var_nameX1279, unsigned long  int anonymous_var_nameX1280, unsigned long  int anonymous_var_nameX1281, union anonymous_typeZ1* anonymous_var_nameX1282);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX1283, unsigned long  int* anonymous_var_nameX1284);
unsigned long  int wcslcat(int* anonymous_var_nameX1285, const int* anonymous_var_nameX1286, unsigned long  int anonymous_var_nameX1287);
unsigned long  int wcslcpy(int* anonymous_var_nameX1288, const int* anonymous_var_nameX1289, unsigned long  int anonymous_var_nameX1290);
char* basename(char* anonymous_var_nameX1291);
char* dirname(char* anonymous_var_nameX1292);
char* basename_r(const char* anonymous_var_nameX1293, char* anonymous_var_nameX1294);
char* dirname_r(const char* anonymous_var_nameX1295, char* anonymous_var_nameX1296);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
void come_regex_finalize(struct come_regex* reg);
struct come_regex* come_regex_clone(struct come_regex* reg);
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* regex);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* wchar_t_to_string(int wc);
char* wchar_tp_to_string(int* wstr);
int wchar_tp_length(int* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wstring_equals(int* left, int* right);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct come_regex* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct come_regex* reg, char* replace);
char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);
struct list$1charph* charp_split_str(char* self, char* str);
struct list$1charph* charp_scan(char* self, struct come_regex* reg);
struct list$1charph* charp_split(char* self, struct come_regex* reg);
_Bool charp_match(char* self, struct come_regex* reg);
struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);
int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);
_Bool charp_match_count(char* self, struct come_regex* reg, int count);
char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
int* charp_to_wstring(char* str);
int* __builtin_wstring(char* str);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(int* wstr);
int getattrlistbulk(int anonymous_var_nameX1297, void* anonymous_var_nameX1298, void* anonymous_var_nameX1299, unsigned long  int anonymous_var_nameX1300, unsigned long  long anonymous_var_nameX1301);
int getattrlistat(int anonymous_var_nameX1302, const char* anonymous_var_nameX1303, void* anonymous_var_nameX1304, void* anonymous_var_nameX1305, unsigned long  int anonymous_var_nameX1306, unsigned long  int anonymous_var_nameX1307);
int setattrlistat(int anonymous_var_nameX1308, const char* anonymous_var_nameX1309, void* anonymous_var_nameX1310, void* anonymous_var_nameX1311, unsigned long  int anonymous_var_nameX1312, unsigned int anonymous_var_nameX1313);
long freadlink(int anonymous_var_nameX1314, char* anonymous_var_nameX1315, unsigned long  int anonymous_var_nameX1316);
int faccessat(int anonymous_var_nameX1317, const char* anonymous_var_nameX1318, int anonymous_var_nameX1319, int anonymous_var_nameX1320);
int fchownat(int anonymous_var_nameX1321, const char* anonymous_var_nameX1322, unsigned int anonymous_var_nameX1323, unsigned int anonymous_var_nameX1324, int anonymous_var_nameX1325);
int linkat(int anonymous_var_nameX1326, const char* anonymous_var_nameX1327, int anonymous_var_nameX1328, const char* anonymous_var_nameX1329, int anonymous_var_nameX1330);
long readlinkat(int anonymous_var_nameX1331, const char* anonymous_var_nameX1332, char* anonymous_var_nameX1333, unsigned long  int anonymous_var_nameX1334);
int symlinkat(const char* anonymous_var_nameX1335, int anonymous_var_nameX1336, const char* anonymous_var_nameX1337);
int unlinkat(int anonymous_var_nameX1338, const char* anonymous_var_nameX1339, int anonymous_var_nameX1340);
void _exit(int anonymous_var_nameX1341);
int access(const char* anonymous_var_nameX1342, int anonymous_var_nameX1343);
unsigned int alarm(unsigned int anonymous_var_nameX1344);
int chdir(const char* anonymous_var_nameX1345);
int chown(const char* anonymous_var_nameX1346, unsigned int anonymous_var_nameX1347, unsigned int anonymous_var_nameX1348);
int close(int anonymous_var_nameX1349);
int dup(int anonymous_var_nameX1350);
int dup2(int anonymous_var_nameX1351, int anonymous_var_nameX1352);
int execl(const char* __path, const char* __arg0, ...);
int execle(const char* __path, const char* __arg0, ...);
int execlp(const char* __file, const char* __arg0, ...);
int execv(const char* __path, char** __argv);
int execve(const char* __file, char** __argv, char** __envp);
int execvp(const char* __file, char** __argv);
int fork();
long fpathconf(int anonymous_var_nameX1353, int anonymous_var_nameX1354);
char* getcwd(char* anonymous_var_nameX1355, unsigned long  int anonymous_var_nameX1356);
unsigned int getegid();
unsigned int geteuid();
unsigned int getgid();
int getgroups(int anonymous_var_nameX1357, unsigned int anonymous_var_nameX1358[]);
char* getlogin();
int getpgrp();
int getpid();
int getppid();
unsigned int getuid();
int isatty(int anonymous_var_nameX1359);
int link(const char* anonymous_var_nameX1360, const char* anonymous_var_nameX1361);
long  long lseek(int anonymous_var_nameX1362, long  long anonymous_var_nameX1363, int anonymous_var_nameX1364);
long pathconf(const char* anonymous_var_nameX1365, int anonymous_var_nameX1366);
int pause();
int pipe(int anonymous_var_nameX1367[2]);
long read(int anonymous_var_nameX1368, void* anonymous_var_nameX1369, unsigned long  int anonymous_var_nameX1370);
int rmdir(const char* anonymous_var_nameX1371);
int setgid(unsigned int anonymous_var_nameX1372);
int setpgid(int anonymous_var_nameX1373, int anonymous_var_nameX1374);
int setsid();
int setuid(unsigned int anonymous_var_nameX1375);
unsigned int sleep(unsigned int anonymous_var_nameX1376);
long sysconf(int anonymous_var_nameX1377);
int tcgetpgrp(int anonymous_var_nameX1378);
int tcsetpgrp(int anonymous_var_nameX1379, int anonymous_var_nameX1380);
char* ttyname(int anonymous_var_nameX1381);
int ttyname_r(int anonymous_var_nameX1382, char* anonymous_var_nameX1383, unsigned long  int anonymous_var_nameX1384);
int unlink(const char* anonymous_var_nameX1385);
long write(int __fd, const void* __buf, unsigned long  int __nbyte);
unsigned long  int confstr(int anonymous_var_nameX1386, char* anonymous_var_nameX1387, unsigned long  int anonymous_var_nameX1388);
int getopt(int anonymous_var_nameX1389, char* anonymous_var_nameX1390[], const char* anonymous_var_nameX1391);
void* brk(const void* anonymous_var_nameX1392);
int chroot(const char* anonymous_var_nameX1393);
char* crypt(const char* anonymous_var_nameX1394, const char* anonymous_var_nameX1395);
void encrypt(char* anonymous_var_nameX1396, int anonymous_var_nameX1397);
int fchdir(int anonymous_var_nameX1398);
long gethostid();
int getpgid(int anonymous_var_nameX1399);
int getsid(int anonymous_var_nameX1400);
int getdtablesize();
int getpagesize();
char* getpass(const char* anonymous_var_nameX1401);
char* getwd(char* anonymous_var_nameX1402);
int lchown(const char* anonymous_var_nameX1403, unsigned int anonymous_var_nameX1404, unsigned int anonymous_var_nameX1405);
int lockf(int anonymous_var_nameX1406, int anonymous_var_nameX1407, long  long anonymous_var_nameX1408);
int nice(int anonymous_var_nameX1409);
long pread(int __fd, void* __buf, unsigned long  int __nbyte, long  long __offset);
long pwrite(int __fd, const void* __buf, unsigned long  int __nbyte, long  long __offset);
void* sbrk(int anonymous_var_nameX1410);
int setpgrp();
int setregid(unsigned int anonymous_var_nameX1411, unsigned int anonymous_var_nameX1412);
int setreuid(unsigned int anonymous_var_nameX1413, unsigned int anonymous_var_nameX1414);
void swab(const void* anonymous_var_nameX1415, void* anonymous_var_nameX1416, long anonymous_var_nameX1417);
void sync();
int truncate(const char* anonymous_var_nameX1418, long  long anonymous_var_nameX1419);
unsigned int ualarm(unsigned int anonymous_var_nameX1420, unsigned int anonymous_var_nameX1421);
int usleep(unsigned int anonymous_var_nameX1422);
int vfork();
int fsync(int anonymous_var_nameX1423);
int ftruncate(int anonymous_var_nameX1424, long  long anonymous_var_nameX1425);
int getlogin_r(char* anonymous_var_nameX1426, unsigned long  int anonymous_var_nameX1427);
int fchown(int anonymous_var_nameX1428, unsigned int anonymous_var_nameX1429, unsigned int anonymous_var_nameX1430);
int gethostname(char* anonymous_var_nameX1431, unsigned long  int anonymous_var_nameX1432);
long readlink(const char* anonymous_var_nameX1433, char* anonymous_var_nameX1434, unsigned long  int anonymous_var_nameX1435);
int setegid(unsigned int anonymous_var_nameX1436);
int seteuid(unsigned int anonymous_var_nameX1437);
int symlink(const char* anonymous_var_nameX1438, const char* anonymous_var_nameX1439);
int __darwin_check_fd_set_overflow(int anonymous_var_nameX1440, const void* anonymous_var_nameX1441, int anonymous_var_nameX1442);
int pselect(int anonymous_var_nameX1443, struct fd_set* anonymous_var_nameX1444, struct fd_set* anonymous_var_nameX1445, struct fd_set* anonymous_var_nameX1446, const struct timespec* anonymous_var_nameX1447, const unsigned int* anonymous_var_nameX1448);
int select(int anonymous_var_nameX1449, struct fd_set* anonymous_var_nameX1450, struct fd_set* anonymous_var_nameX1451, struct fd_set* anonymous_var_nameX1452, struct timeval* anonymous_var_nameX1453);
void _Exit(int anonymous_var_nameX1454);
int accessx_np(const struct accessx_descriptor* anonymous_var_nameX1455, unsigned long  int anonymous_var_nameX1456, int* anonymous_var_nameX1457, unsigned int anonymous_var_nameX1458);
int acct(const char* anonymous_var_nameX1459);
int add_profil(char* anonymous_var_nameX1460, unsigned long  int anonymous_var_nameX1461, unsigned long  int anonymous_var_nameX1462, unsigned int anonymous_var_nameX1463);
void endusershell();
int execvP(const char* __file, const char* __searchpath, char** __argv);
char* fflagstostr(unsigned long  int anonymous_var_nameX1464);
int getdomainname(char* anonymous_var_nameX1465, int anonymous_var_nameX1466);
int getgrouplist(const char* anonymous_var_nameX1467, int anonymous_var_nameX1468, int* anonymous_var_nameX1469, int* anonymous_var_nameX1470);
int gethostuuid(unsigned char anonymous_var_nameX1471[16], const struct timespec* anonymous_var_nameX1472);
unsigned short int getmode(const void* anonymous_var_nameX1473, unsigned short int anonymous_var_nameX1474);
int getpeereid(int anonymous_var_nameX1475, unsigned int* anonymous_var_nameX1476, unsigned int* anonymous_var_nameX1477);
int getsgroups_np(int* anonymous_var_nameX1478, unsigned char anonymous_var_nameX1479[16]);
char* getusershell();
int getwgroups_np(int* anonymous_var_nameX1480, unsigned char anonymous_var_nameX1481[16]);
int initgroups(const char* anonymous_var_nameX1482, int anonymous_var_nameX1483);
int issetugid();
char* mkdtemp(char* anonymous_var_nameX1484);
int mknod(const char* anonymous_var_nameX1485, unsigned short int anonymous_var_nameX1486, int anonymous_var_nameX1487);
int mkpath_np(const char* path, unsigned short int omode);
int mkpathat_np(int dfd, const char* path, unsigned short int omode);
int mkstemp(char* anonymous_var_nameX1488);
int mkstemps(char* anonymous_var_nameX1489, int anonymous_var_nameX1490);
char* mktemp(char* anonymous_var_nameX1491);
int mkostemp(char* path, int oflags);
int mkostemps(char* path, int slen, int oflags);
int mkstemp_dprotected_np(char* path, int dpclass, int dpflags);
char* mkdtempat_np(int dfd, char* path);
int mkstempsat_np(int dfd, char* path, int slen);
int mkostempsat_np(int dfd, char* path, int slen, int oflags);
int nfssvc(int anonymous_var_nameX1492, void* anonymous_var_nameX1493);
int profil(char* anonymous_var_nameX1494, unsigned long  int anonymous_var_nameX1495, unsigned long  int anonymous_var_nameX1496, unsigned int anonymous_var_nameX1497);
int pthread_setugid_np(unsigned int anonymous_var_nameX1498, unsigned int anonymous_var_nameX1499);
int pthread_getugid_np(unsigned int* anonymous_var_nameX1500, unsigned int* anonymous_var_nameX1501);
int reboot(int anonymous_var_nameX1502);
int revoke(const char* anonymous_var_nameX1503);
int rcmd(char** anonymous_var_nameX1504, int anonymous_var_nameX1505, const char* anonymous_var_nameX1506, const char* anonymous_var_nameX1507, const char* anonymous_var_nameX1508, int* anonymous_var_nameX1509);
int rcmd_af(char** anonymous_var_nameX1510, int anonymous_var_nameX1511, const char* anonymous_var_nameX1512, const char* anonymous_var_nameX1513, const char* anonymous_var_nameX1514, int* anonymous_var_nameX1515, int anonymous_var_nameX1516);
int rresvport(int* anonymous_var_nameX1517);
int rresvport_af(int* anonymous_var_nameX1518, int anonymous_var_nameX1519);
int iruserok(unsigned long  int anonymous_var_nameX1520, int anonymous_var_nameX1521, const char* anonymous_var_nameX1522, const char* anonymous_var_nameX1523);
int iruserok_sa(const void* anonymous_var_nameX1524, int anonymous_var_nameX1525, int anonymous_var_nameX1526, const char* anonymous_var_nameX1527, const char* anonymous_var_nameX1528);
int ruserok(const char* anonymous_var_nameX1529, int anonymous_var_nameX1530, const char* anonymous_var_nameX1531, const char* anonymous_var_nameX1532);
int setdomainname(const char* anonymous_var_nameX1533, int anonymous_var_nameX1534);
int setgroups(int anonymous_var_nameX1535, const unsigned int* anonymous_var_nameX1536);
void sethostid(long anonymous_var_nameX1537);
int sethostname(const char* anonymous_var_nameX1538, int anonymous_var_nameX1539);
void setkey(const char* anonymous_var_nameX1540);
int setlogin(const char* anonymous_var_nameX1541);
void* setmode(const char* anonymous_var_nameX1542);
int setrgid(unsigned int anonymous_var_nameX1543);
int setruid(unsigned int anonymous_var_nameX1544);
int setsgroups_np(int anonymous_var_nameX1545, const unsigned char anonymous_var_nameX1546[16]);
void setusershell();
int setwgroups_np(int anonymous_var_nameX1547, const unsigned char anonymous_var_nameX1548[16]);
int strtofflags(char** anonymous_var_nameX1549, unsigned long  int* anonymous_var_nameX1550, unsigned long  int* anonymous_var_nameX1551);
int swapon(const char* anonymous_var_nameX1552);
int ttyslot();
int undelete(const char* anonymous_var_nameX1553);
int unwhiteout(const char* anonymous_var_nameX1554);
void* valloc(unsigned long  int anonymous_var_nameX1555);
int syscall(int anonymous_var_nameX1556, ...);
int getsubopt(char** anonymous_var_nameX1557, char** anonymous_var_nameX1558, char** anonymous_var_nameX1559);
int fgetattrlist(int anonymous_var_nameX1560, void* anonymous_var_nameX1561, void* anonymous_var_nameX1562, unsigned long  int anonymous_var_nameX1563, unsigned int anonymous_var_nameX1564);
int fsetattrlist(int anonymous_var_nameX1565, void* anonymous_var_nameX1566, void* anonymous_var_nameX1567, unsigned long  int anonymous_var_nameX1568, unsigned int anonymous_var_nameX1569);
int getattrlist(const char* anonymous_var_nameX1570, void* anonymous_var_nameX1571, void* anonymous_var_nameX1572, unsigned long  int anonymous_var_nameX1573, unsigned int anonymous_var_nameX1574);
int setattrlist(const char* anonymous_var_nameX1575, void* anonymous_var_nameX1576, void* anonymous_var_nameX1577, unsigned long  int anonymous_var_nameX1578, unsigned int anonymous_var_nameX1579);
int exchangedata(const char* anonymous_var_nameX1580, const char* anonymous_var_nameX1581, unsigned int anonymous_var_nameX1582);
int getdirentriesattr(int anonymous_var_nameX1583, void* anonymous_var_nameX1584, void* anonymous_var_nameX1585, unsigned long  int anonymous_var_nameX1586, unsigned int* anonymous_var_nameX1587, unsigned int* anonymous_var_nameX1588, unsigned int* anonymous_var_nameX1589, unsigned int anonymous_var_nameX1590);
int searchfs(const char* anonymous_var_nameX1591, struct fssearchblock* anonymous_var_nameX1592, unsigned long  int* anonymous_var_nameX1593, unsigned int anonymous_var_nameX1594, unsigned int anonymous_var_nameX1595, struct searchstate* anonymous_var_nameX1596);
int fsctl(const char* anonymous_var_nameX1597, unsigned long  int anonymous_var_nameX1598, void* anonymous_var_nameX1599, unsigned int anonymous_var_nameX1600);
int ffsctl(int anonymous_var_nameX1601, unsigned long  int anonymous_var_nameX1602, void* anonymous_var_nameX1603, unsigned int anonymous_var_nameX1604);
int fsync_volume_np(int anonymous_var_nameX1605, int anonymous_var_nameX1606);
int sync_volume_np(const char* anonymous_var_nameX1607, int anonymous_var_nameX1608);
int accept(int anonymous_var_nameX1609, struct sockaddr* anonymous_var_nameX1610, unsigned int* anonymous_var_nameX1611);
int bind(int anonymous_var_nameX1612, const struct sockaddr* anonymous_var_nameX1613, unsigned int anonymous_var_nameX1614);
int connect(int anonymous_var_nameX1615, const struct sockaddr* anonymous_var_nameX1616, unsigned int anonymous_var_nameX1617);
int getpeername(int anonymous_var_nameX1618, struct sockaddr* anonymous_var_nameX1619, unsigned int* anonymous_var_nameX1620);
int getsockname(int anonymous_var_nameX1621, struct sockaddr* anonymous_var_nameX1622, unsigned int* anonymous_var_nameX1623);
int getsockopt(int anonymous_var_nameX1624, int anonymous_var_nameX1625, int anonymous_var_nameX1626, void* anonymous_var_nameX1627, unsigned int* anonymous_var_nameX1628);
int listen(int anonymous_var_nameX1629, int anonymous_var_nameX1630);
long recv(int anonymous_var_nameX1631, void* anonymous_var_nameX1632, unsigned long  int anonymous_var_nameX1633, int anonymous_var_nameX1634);
long recvfrom(int anonymous_var_nameX1635, void* anonymous_var_nameX1636, unsigned long  int anonymous_var_nameX1637, int anonymous_var_nameX1638, struct sockaddr* anonymous_var_nameX1639, unsigned int* anonymous_var_nameX1640);
long recvmsg(int anonymous_var_nameX1641, struct msghdr* anonymous_var_nameX1642, int anonymous_var_nameX1643);
long send(int anonymous_var_nameX1644, const void* anonymous_var_nameX1645, unsigned long  int anonymous_var_nameX1646, int anonymous_var_nameX1647);
long sendmsg(int anonymous_var_nameX1648, const struct msghdr* anonymous_var_nameX1649, int anonymous_var_nameX1650);
long sendto(int anonymous_var_nameX1651, const void* anonymous_var_nameX1652, unsigned long  int anonymous_var_nameX1653, int anonymous_var_nameX1654, const struct sockaddr* anonymous_var_nameX1655, unsigned int anonymous_var_nameX1656);
int setsockopt(int anonymous_var_nameX1657, int anonymous_var_nameX1658, int anonymous_var_nameX1659, const void* anonymous_var_nameX1660, unsigned int anonymous_var_nameX1661);
int shutdown(int anonymous_var_nameX1662, int anonymous_var_nameX1663);
int sockatmark(int anonymous_var_nameX1664);
int socket(int anonymous_var_nameX1665, int anonymous_var_nameX1666, int anonymous_var_nameX1667);
int socketpair(int anonymous_var_nameX1668, int anonymous_var_nameX1669, int anonymous_var_nameX1670, int* anonymous_var_nameX1671);
int sendfile(int anonymous_var_nameX1672, int anonymous_var_nameX1673, long  long anonymous_var_nameX1674, long  long* anonymous_var_nameX1675, struct sf_hdtr* anonymous_var_nameX1676, int anonymous_var_nameX1677);
void pfctlinput(int anonymous_var_nameX1678, struct sockaddr* anonymous_var_nameX1679);
int connectx(int anonymous_var_nameX1680, const struct sa_endpoints* anonymous_var_nameX1681, unsigned int anonymous_var_nameX1682, unsigned int anonymous_var_nameX1683, const struct iovec* anonymous_var_nameX1684, unsigned int anonymous_var_nameX1685, unsigned long  int* anonymous_var_nameX1686, unsigned int* anonymous_var_nameX1687);
int disconnectx(int anonymous_var_nameX1688, unsigned int anonymous_var_nameX1689, unsigned int anonymous_var_nameX1690);
int setipv4sourcefilter(int anonymous_var_nameX1691, struct in_addr anonymous_var_nameX1692, struct in_addr anonymous_var_nameX1693, unsigned int anonymous_var_nameX1694, unsigned int anonymous_var_nameX1695, struct in_addr* anonymous_var_nameX1696);
int getipv4sourcefilter(int anonymous_var_nameX1697, struct in_addr anonymous_var_nameX1698, struct in_addr anonymous_var_nameX1699, unsigned int* anonymous_var_nameX1700, unsigned int* anonymous_var_nameX1701, struct in_addr* anonymous_var_nameX1702);
int setsourcefilter(int anonymous_var_nameX1703, unsigned int anonymous_var_nameX1704, struct sockaddr* anonymous_var_nameX1705, unsigned int anonymous_var_nameX1706, unsigned int anonymous_var_nameX1707, unsigned int anonymous_var_nameX1708, struct sockaddr_storage* anonymous_var_nameX1709);
int getsourcefilter(int anonymous_var_nameX1710, unsigned int anonymous_var_nameX1711, struct sockaddr* anonymous_var_nameX1712, unsigned int anonymous_var_nameX1713, unsigned int* anonymous_var_nameX1714, unsigned int* anonymous_var_nameX1715, struct sockaddr_storage* anonymous_var_nameX1716);
int inet6_option_space(int anonymous_var_nameX1717);
int inet6_option_init(void* anonymous_var_nameX1718, struct cmsghdr** anonymous_var_nameX1719, int anonymous_var_nameX1720);
int inet6_option_append(struct cmsghdr* anonymous_var_nameX1721, const unsigned char* anonymous_var_nameX1722, int anonymous_var_nameX1723, int anonymous_var_nameX1724);
unsigned char* inet6_option_alloc(struct cmsghdr* anonymous_var_nameX1725, int anonymous_var_nameX1726, int anonymous_var_nameX1727, int anonymous_var_nameX1728);
int inet6_option_next(const struct cmsghdr* anonymous_var_nameX1729, unsigned char** anonymous_var_nameX1730);
int inet6_option_find(const struct cmsghdr* anonymous_var_nameX1731, unsigned char** anonymous_var_nameX1732, int anonymous_var_nameX1733);
unsigned long  int inet6_rthdr_space(int anonymous_var_nameX1734, int anonymous_var_nameX1735);
struct cmsghdr* inet6_rthdr_init(void* anonymous_var_nameX1736, int anonymous_var_nameX1737);
int inet6_rthdr_add(struct cmsghdr* anonymous_var_nameX1738, const struct in6_addr* anonymous_var_nameX1739, unsigned int anonymous_var_nameX1740);
int inet6_rthdr_lasthop(struct cmsghdr* anonymous_var_nameX1741, unsigned int anonymous_var_nameX1742);
int inet6_rthdr_segments(const struct cmsghdr* anonymous_var_nameX1743);
struct in6_addr* inet6_rthdr_getaddr(struct cmsghdr* anonymous_var_nameX1744, int anonymous_var_nameX1745);
int inet6_rthdr_getflags(const struct cmsghdr* anonymous_var_nameX1746, int anonymous_var_nameX1747);
int inet6_opt_init(void* anonymous_var_nameX1748, unsigned int anonymous_var_nameX1749);
int inet6_opt_append(void* anonymous_var_nameX1750, unsigned int anonymous_var_nameX1751, int anonymous_var_nameX1752, unsigned char anonymous_var_nameX1753, unsigned int anonymous_var_nameX1754, unsigned char anonymous_var_nameX1755, void** anonymous_var_nameX1756);
int inet6_opt_finish(void* anonymous_var_nameX1757, unsigned int anonymous_var_nameX1758, int anonymous_var_nameX1759);
int inet6_opt_set_val(void* anonymous_var_nameX1760, int anonymous_var_nameX1761, void* anonymous_var_nameX1762, unsigned int anonymous_var_nameX1763);
int inet6_opt_next(void* anonymous_var_nameX1764, unsigned int anonymous_var_nameX1765, int anonymous_var_nameX1766, unsigned char* anonymous_var_nameX1767, unsigned int* anonymous_var_nameX1768, void** anonymous_var_nameX1769);
int inet6_opt_find(void* anonymous_var_nameX1770, unsigned int anonymous_var_nameX1771, int anonymous_var_nameX1772, unsigned char anonymous_var_nameX1773, unsigned int* anonymous_var_nameX1774, void** anonymous_var_nameX1775);
int inet6_opt_get_val(void* anonymous_var_nameX1776, int anonymous_var_nameX1777, void* anonymous_var_nameX1778, unsigned int anonymous_var_nameX1779);
unsigned int inet6_rth_space(int anonymous_var_nameX1780, int anonymous_var_nameX1781);
void* inet6_rth_init(void* anonymous_var_nameX1782, unsigned int anonymous_var_nameX1783, int anonymous_var_nameX1784, int anonymous_var_nameX1785);
int inet6_rth_add(void* anonymous_var_nameX1786, const struct in6_addr* anonymous_var_nameX1787);
int inet6_rth_reverse(const void* anonymous_var_nameX1788, void* anonymous_var_nameX1789);
int inet6_rth_segments(const void* anonymous_var_nameX1790);
struct in6_addr* inet6_rth_getaddr(const void* anonymous_var_nameX1791, int anonymous_var_nameX1792);
int bindresvport(int anonymous_var_nameX1793, struct sockaddr_in* anonymous_var_nameX1794);
int bindresvport_sa(int anonymous_var_nameX1795, struct sockaddr* anonymous_var_nameX1796);
unsigned int inet_addr(const char* anonymous_var_nameX1797);
char* inet_ntoa(struct in_addr anonymous_var_nameX1798);
const char* inet_ntop(int anonymous_var_nameX1799, const void* anonymous_var_nameX1800, char* anonymous_var_nameX1801, unsigned int anonymous_var_nameX1802);
int inet_pton(int anonymous_var_nameX1803, const char* anonymous_var_nameX1804, void* anonymous_var_nameX1805);
int ascii2addr(int anonymous_var_nameX1806, const char* anonymous_var_nameX1807, void* anonymous_var_nameX1808);
char* addr2ascii(int anonymous_var_nameX1809, const void* anonymous_var_nameX1810, int anonymous_var_nameX1811, char* anonymous_var_nameX1812);
int inet_aton(const char* anonymous_var_nameX1813, struct in_addr* anonymous_var_nameX1814);
unsigned int inet_lnaof(struct in_addr anonymous_var_nameX1815);
struct in_addr inet_makeaddr(unsigned int anonymous_var_nameX1816, unsigned int anonymous_var_nameX1817);
unsigned int inet_netof(struct in_addr anonymous_var_nameX1818);
unsigned int inet_network(const char* anonymous_var_nameX1819);
char* inet_net_ntop(int anonymous_var_nameX1820, const void* anonymous_var_nameX1821, int anonymous_var_nameX1822, char* anonymous_var_nameX1823, unsigned long  int anonymous_var_nameX1824);
int inet_net_pton(int anonymous_var_nameX1825, const char* anonymous_var_nameX1826, void* anonymous_var_nameX1827, unsigned long  int anonymous_var_nameX1828);
char* inet_neta(unsigned int anonymous_var_nameX1829, char* anonymous_var_nameX1830, unsigned long  int anonymous_var_nameX1831);
unsigned int inet_nsap_addr(const char* anonymous_var_nameX1832, unsigned char* anonymous_var_nameX1833, int anonymous_var_nameX1834);
char* inet_nsap_ntoa(int anonymous_var_nameX1835, const unsigned char* anonymous_var_nameX1836, char* anonymous_var_nameX1837);
long  int imaxabs(long  int j);
struct anonymous_typeX15 imaxdiv(long  int __numer, long  int __denom);
long  int strtoimax(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoumax(const char* __nptr, char** __endptr, int __base);
long  int wcstoimax(const int* __nptr, int** __endptr, int __base);
unsigned long  int wcstoumax(const int* __nptr, int** __endptr, int __base);
int adjtime(const struct timeval* anonymous_var_nameX1838, struct timeval* anonymous_var_nameX1839);
int futimes(int anonymous_var_nameX1840, const struct timeval* anonymous_var_nameX1841);
int lutimes(const char* anonymous_var_nameX1842, const struct timeval* anonymous_var_nameX1843);
int settimeofday(const struct timeval* anonymous_var_nameX1844, const struct timezone* anonymous_var_nameX1845);
int getitimer(int anonymous_var_nameX1846, struct itimerval* anonymous_var_nameX1847);
int gettimeofday(struct timeval* anonymous_var_nameX1848, void* anonymous_var_nameX1849);
int setitimer(int anonymous_var_nameX1850, const struct itimerval* anonymous_var_nameX1851, struct itimerval* anonymous_var_nameX1852);
int utimes(const char* anonymous_var_nameX1853, const struct timeval* anonymous_var_nameX1854);
int OPENSSL_sk_num(const struct stack_st* anonymous_var_nameX1859);
void* OPENSSL_sk_value(const struct stack_st* anonymous_var_nameX1860, int anonymous_var_nameX1861);
void* OPENSSL_sk_set(struct stack_st* st, int i, const void* data);
struct stack_st* OPENSSL_sk_new(int (*cmp)(const void*,const void*));
struct stack_st* OPENSSL_sk_new_null();
struct stack_st* OPENSSL_sk_new_reserve(int (*c)(const void*,const void*), int n);
int OPENSSL_sk_reserve(struct stack_st* st, int n);
void OPENSSL_sk_free(struct stack_st* anonymous_var_nameX1862);
void OPENSSL_sk_pop_free(struct stack_st* st, void (*func)(void*));
struct stack_st* OPENSSL_sk_deep_copy(const struct stack_st* anonymous_var_nameX1864, void* (*c)(const void*), void (*f)(void*));
int OPENSSL_sk_insert(struct stack_st* sk, const void* data, int where);
void* OPENSSL_sk_delete(struct stack_st* st, int loc);
void* OPENSSL_sk_delete_ptr(struct stack_st* st, const void* p);
int OPENSSL_sk_find(struct stack_st* st, const void* data);
int OPENSSL_sk_find_ex(struct stack_st* st, const void* data);
int OPENSSL_sk_find_all(struct stack_st* st, const void* data, int* pnum);
int OPENSSL_sk_push(struct stack_st* st, const void* data);
int OPENSSL_sk_unshift(struct stack_st* st, const void* data);
void* OPENSSL_sk_shift(struct stack_st* st);
void* OPENSSL_sk_pop(struct stack_st* st);
void OPENSSL_sk_zero(struct stack_st* st);
int (*OPENSSL_sk_set_cmp_func(struct stack_st* sk, int (*cmp)(const void*,const void*)))(const void*,const void*);
struct stack_st* OPENSSL_sk_dup(const struct stack_st* st);
void OPENSSL_sk_sort(struct stack_st* st);
int OPENSSL_sk_is_sorted(const struct stack_st* st);
int ERR_load_ASN1_strings();
int ERR_load_ASYNC_strings();
int ERR_load_BIO_strings();
int ERR_load_BN_strings();
int ERR_load_BUF_strings();
int ERR_load_CMS_strings();
int ERR_load_COMP_strings();
int ERR_load_CONF_strings();
int ERR_load_CRYPTO_strings();
int ERR_load_CT_strings();
int ERR_load_DH_strings();
int ERR_load_DSA_strings();
int ERR_load_EC_strings();
int ERR_load_ENGINE_strings();
int ERR_load_ERR_strings();
int ERR_load_EVP_strings();
int ERR_load_KDF_strings();
int ERR_load_OBJ_strings();
int ERR_load_OCSP_strings();
int ERR_load_PEM_strings();
int ERR_load_PKCS12_strings();
int ERR_load_PKCS7_strings();
int ERR_load_RAND_strings();
int ERR_load_RSA_strings();
int ERR_load_OSSL_STORE_strings();
int ERR_load_TS_strings();
int ERR_load_UI_strings();
int ERR_load_X509_strings();
int ERR_load_X509V3_strings();
void* CRYPTO_THREAD_lock_new();
int CRYPTO_THREAD_read_lock(void* lock);
int CRYPTO_THREAD_write_lock(void* lock);
int CRYPTO_THREAD_unlock(void* lock);
void CRYPTO_THREAD_lock_free(void* lock);
int CRYPTO_atomic_add(int* val, int amount, int* ret, void* lock);
int CRYPTO_atomic_add64(unsigned long  long* val, unsigned long  long op, unsigned long  long* ret, void* lock);
int CRYPTO_atomic_and(unsigned long  long* val, unsigned long  long op, unsigned long  long* ret, void* lock);
int CRYPTO_atomic_or(unsigned long  long* val, unsigned long  long op, unsigned long  long* ret, void* lock);
int CRYPTO_atomic_load(unsigned long  long* val, unsigned long  long* ret, void* lock);
int CRYPTO_atomic_load_int(int* val, int* ret, void* lock);
int CRYPTO_atomic_store(unsigned long  long* dst, unsigned long  long val, void* lock);
unsigned long  int OPENSSL_strlcpy(char* dst, const char* src, unsigned long  int siz);
unsigned long  int OPENSSL_strlcat(char* dst, const char* src, unsigned long  int siz);
unsigned long  int OPENSSL_strnlen(const char* str, unsigned long  int maxlen);
int OPENSSL_strtoul(const char* str, char** endptr, int base, unsigned long  int* num);
int OPENSSL_buf2hexstr_ex(char* str, unsigned long  int str_n, unsigned long  int* strlength, const unsigned char* buf, unsigned long  int buflen, const char sep);
char* OPENSSL_buf2hexstr(const unsigned char* buf, long buflen);
int OPENSSL_hexstr2buf_ex(unsigned char* buf, unsigned long  int buf_n, unsigned long  int* buflen, const char* str, const char sep);
unsigned char* OPENSSL_hexstr2buf(const char* str, long* buflen);
int OPENSSL_hexchar2int(unsigned char c);
int OPENSSL_strcasecmp(const char* s1, const char* s2);
int OPENSSL_strncasecmp(const char* s1, const char* s2, unsigned long  int n);
unsigned int OPENSSL_version_major();
unsigned int OPENSSL_version_minor();
unsigned int OPENSSL_version_patch();
const char* OPENSSL_version_pre_release();
const char* OPENSSL_version_build_metadata();
unsigned long  int OpenSSL_version_num();
const char* OpenSSL_version(int type);
const char* OPENSSL_info(int type);
int OPENSSL_issetugid();
int CRYPTO_get_ex_new_index(int class_index, long argl, void* argp, void (*new_func)(void*,void*,struct crypto_ex_data_st*,int,long,void*), int (*dup_func)(struct crypto_ex_data_st*,const struct crypto_ex_data_st*,void**,int,long,void*), void (*free_func)(void*,void*,struct crypto_ex_data_st*,int,long,void*));
int CRYPTO_free_ex_index(int class_index, int idx);
int CRYPTO_new_ex_data(int class_index, void* obj, struct crypto_ex_data_st* ad);
int CRYPTO_dup_ex_data(int class_index, struct crypto_ex_data_st* to, const struct crypto_ex_data_st* from);
void CRYPTO_free_ex_data(int class_index, void* obj, struct crypto_ex_data_st* ad);
int CRYPTO_alloc_ex_data(int class_index, void* obj, struct crypto_ex_data_st* ad, int idx);
int CRYPTO_set_ex_data(struct crypto_ex_data_st* ad, int idx, void* val);
void* CRYPTO_get_ex_data(const struct crypto_ex_data_st* ad, int idx);
int CRYPTO_set_mem_functions(void* (*malloc_fn)(unsigned long  int,const char*,int), void* (*realloc_fn)(void*,unsigned long  int,const char*,int), void (*free_fn)(void*,const char*,int));
void CRYPTO_get_mem_functions(void* (*malloc_fn)(unsigned long  int,const char*,int), void* (*realloc_fn)(void*,unsigned long  int,const char*,int), void (*free_fn)(void*,const char*,int));
void* CRYPTO_malloc(unsigned long  int num, const char* file, int line);
void* CRYPTO_zalloc(unsigned long  int num, const char* file, int line);
void* CRYPTO_aligned_alloc(unsigned long  int num, unsigned long  int align, void** freeptr, const char* file, int line);
void* CRYPTO_memdup(const void* str, unsigned long  int siz, const char* file, int line);
char* CRYPTO_strdup(const char* str, const char* file, int line);
char* CRYPTO_strndup(const char* str, unsigned long  int s, const char* file, int line);
void CRYPTO_free(void* ptr, const char* file, int line);
void CRYPTO_clear_free(void* ptr, unsigned long  int num, const char* file, int line);
void* CRYPTO_realloc(void* addr, unsigned long  int num, const char* file, int line);
void* CRYPTO_clear_realloc(void* addr, unsigned long  int old_num, unsigned long  int num, const char* file, int line);
int CRYPTO_secure_malloc_init(unsigned long  int sz, unsigned long  int minsize);
int CRYPTO_secure_malloc_done();
void* CRYPTO_secure_malloc(unsigned long  int num, const char* file, int line);
void* CRYPTO_secure_zalloc(unsigned long  int num, const char* file, int line);
void CRYPTO_secure_free(void* ptr, const char* file, int line);
void CRYPTO_secure_clear_free(void* ptr, unsigned long  int num, const char* file, int line);
int CRYPTO_secure_allocated(const void* ptr);
int CRYPTO_secure_malloc_initialized();
unsigned long  int CRYPTO_secure_actual_size(void* ptr);
unsigned long  int CRYPTO_secure_used();
void OPENSSL_cleanse(void* ptr, unsigned long  int len);
void OPENSSL_die(const char* assertion, const char* file, int line);
int OPENSSL_isservice();
void OPENSSL_init();
void OPENSSL_fork_prepare();
void OPENSSL_fork_parent();
void OPENSSL_fork_child();
struct tm* OPENSSL_gmtime(const long* timer, struct tm* result);
int OPENSSL_gmtime_adj(struct tm* tm, int offset_day, long offset_sec);
int OPENSSL_gmtime_diff(int* pday, int* psec, const struct tm* from, const struct tm* to);
int CRYPTO_memcmp(const void* in_a, const void* in_b, unsigned long  int len);
void OPENSSL_cleanup();
int OPENSSL_init_crypto(unsigned long  long opts, const struct ossl_init_settings_st* settings);
int OPENSSL_atexit(void (*handler)());
void OPENSSL_thread_stop();
void OPENSSL_thread_stop_ex(struct ossl_lib_ctx_st* ctx);
struct ossl_init_settings_st* OPENSSL_INIT_new();
int OPENSSL_INIT_set_config_filename(struct ossl_init_settings_st* settings, const char* config_filename);
void OPENSSL_INIT_set_config_file_flags(struct ossl_init_settings_st* settings, unsigned long  int flags);
int OPENSSL_INIT_set_config_appname(struct ossl_init_settings_st* settings, const char* config_appname);
void OPENSSL_INIT_free(struct ossl_init_settings_st* settings);
int sched_yield();
int sched_get_priority_min(int anonymous_var_nameX1865);
int sched_get_priority_max(int anonymous_var_nameX1866);
unsigned int qos_class_self();
unsigned int qos_class_main();
int pthread_attr_set_qos_class_np(struct _opaque_pthread_attr_t* __attr, unsigned int __qos_class, int __relative_priority);
int pthread_attr_get_qos_class_np(struct _opaque_pthread_attr_t* __attr, unsigned int* __qos_class, int* __relative_priority);
int pthread_set_qos_class_self_np(unsigned int __qos_class, int __relative_priority);
int pthread_get_qos_class_np(struct _opaque_pthread_t* __pthread, unsigned int* __qos_class, int* __relative_priority);
struct pthread_override_s* pthread_override_qos_class_start_np(struct _opaque_pthread_t* __pthread, unsigned int __qos_class, int __relative_priority);
int pthread_override_qos_class_end_np(struct pthread_override_s* __override);
int pthread_atfork(void (*anonymous_lambda_var_nameZ9)(), void (*anonymous_lambda_var_nameZ10)(), void (*anonymous_lambda_var_nameZ11)());
int pthread_attr_destroy(struct _opaque_pthread_attr_t* anonymous_var_nameX1867);
int pthread_attr_getdetachstate(const struct _opaque_pthread_attr_t* anonymous_var_nameX1868, int* anonymous_var_nameX1869);
int pthread_attr_getguardsize(const struct _opaque_pthread_attr_t* anonymous_var_nameX1870, unsigned long  int* anonymous_var_nameX1871);
int pthread_attr_getinheritsched(const struct _opaque_pthread_attr_t* anonymous_var_nameX1872, int* anonymous_var_nameX1873);
int pthread_attr_getschedparam(const struct _opaque_pthread_attr_t* anonymous_var_nameX1874, struct sched_param* anonymous_var_nameX1875);
int pthread_attr_getschedpolicy(const struct _opaque_pthread_attr_t* anonymous_var_nameX1876, int* anonymous_var_nameX1877);
int pthread_attr_getscope(const struct _opaque_pthread_attr_t* anonymous_var_nameX1878, int* anonymous_var_nameX1879);
int pthread_attr_getstack(const struct _opaque_pthread_attr_t* anonymous_var_nameX1880, void** anonymous_var_nameX1881, unsigned long  int* anonymous_var_nameX1882);
int pthread_attr_getstackaddr(const struct _opaque_pthread_attr_t* anonymous_var_nameX1883, void** anonymous_var_nameX1884);
int pthread_attr_getstacksize(const struct _opaque_pthread_attr_t* anonymous_var_nameX1885, unsigned long  int* anonymous_var_nameX1886);
int pthread_attr_init(struct _opaque_pthread_attr_t* anonymous_var_nameX1887);
int pthread_attr_setdetachstate(struct _opaque_pthread_attr_t* anonymous_var_nameX1888, int anonymous_var_nameX1889);
int pthread_attr_setguardsize(struct _opaque_pthread_attr_t* anonymous_var_nameX1890, unsigned long  int anonymous_var_nameX1891);
int pthread_attr_setinheritsched(struct _opaque_pthread_attr_t* anonymous_var_nameX1892, int anonymous_var_nameX1893);
int pthread_attr_setschedparam(struct _opaque_pthread_attr_t* anonymous_var_nameX1894, const struct sched_param* anonymous_var_nameX1895);
int pthread_attr_setschedpolicy(struct _opaque_pthread_attr_t* anonymous_var_nameX1896, int anonymous_var_nameX1897);
int pthread_attr_setscope(struct _opaque_pthread_attr_t* anonymous_var_nameX1898, int anonymous_var_nameX1899);
int pthread_attr_setstack(struct _opaque_pthread_attr_t* anonymous_var_nameX1900, void* anonymous_var_nameX1901, unsigned long  int anonymous_var_nameX1902);
int pthread_attr_setstackaddr(struct _opaque_pthread_attr_t* anonymous_var_nameX1903, void* anonymous_var_nameX1904);
int pthread_attr_setstacksize(struct _opaque_pthread_attr_t* anonymous_var_nameX1905, unsigned long  int anonymous_var_nameX1906);
int pthread_cancel(struct _opaque_pthread_t* anonymous_var_nameX1907);
int pthread_cond_broadcast(struct _opaque_pthread_cond_t* anonymous_var_nameX1908);
int pthread_cond_destroy(struct _opaque_pthread_cond_t* anonymous_var_nameX1909);
int pthread_cond_init(struct _opaque_pthread_cond_t* anonymous_var_nameX1910, const struct _opaque_pthread_condattr_t* anonymous_var_nameX1911);
int pthread_cond_signal(struct _opaque_pthread_cond_t* anonymous_var_nameX1912);
int pthread_cond_timedwait(struct _opaque_pthread_cond_t* anonymous_var_nameX1913, struct _opaque_pthread_mutex_t* anonymous_var_nameX1914, const struct timespec* anonymous_var_nameX1915);
int pthread_cond_wait(struct _opaque_pthread_cond_t* anonymous_var_nameX1916, struct _opaque_pthread_mutex_t* anonymous_var_nameX1917);
int pthread_condattr_destroy(struct _opaque_pthread_condattr_t* anonymous_var_nameX1918);
int pthread_condattr_init(struct _opaque_pthread_condattr_t* anonymous_var_nameX1919);
int pthread_condattr_getpshared(const struct _opaque_pthread_condattr_t* anonymous_var_nameX1920, int* anonymous_var_nameX1921);
int pthread_condattr_setpshared(struct _opaque_pthread_condattr_t* anonymous_var_nameX1922, int anonymous_var_nameX1923);
int pthread_create(struct _opaque_pthread_t** anonymous_var_nameX1924, const struct _opaque_pthread_attr_t* anonymous_var_nameX1925, void* (*anonymous_lambda_var_nameZ12)(void*), void* anonymous_var_nameX1927);
int pthread_detach(struct _opaque_pthread_t* anonymous_var_nameX1928);
int pthread_equal(struct _opaque_pthread_t* anonymous_var_nameX1929, struct _opaque_pthread_t* anonymous_var_nameX1930);
void pthread_exit(void* anonymous_var_nameX1931);
int pthread_getconcurrency();
int pthread_getschedparam(struct _opaque_pthread_t* anonymous_var_nameX1932, int* anonymous_var_nameX1933, struct sched_param* anonymous_var_nameX1934);
void* pthread_getspecific(unsigned long  int anonymous_var_nameX1935);
int pthread_join(struct _opaque_pthread_t* anonymous_var_nameX1936, void** anonymous_var_nameX1937);
int pthread_key_create(unsigned long  int* anonymous_var_nameX1938, void (*anonymous_lambda_var_nameZ13)(void*));
int pthread_key_delete(unsigned long  int anonymous_var_nameX1940);
int pthread_mutex_destroy(struct _opaque_pthread_mutex_t* anonymous_var_nameX1941);
int pthread_mutex_getprioceiling(const struct _opaque_pthread_mutex_t* anonymous_var_nameX1942, int* anonymous_var_nameX1943);
int pthread_mutex_init(struct _opaque_pthread_mutex_t* anonymous_var_nameX1944, const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1945);
int pthread_mutex_lock(struct _opaque_pthread_mutex_t* anonymous_var_nameX1946);
int pthread_mutex_setprioceiling(struct _opaque_pthread_mutex_t* anonymous_var_nameX1947, int anonymous_var_nameX1948, int* anonymous_var_nameX1949);
int pthread_mutex_trylock(struct _opaque_pthread_mutex_t* anonymous_var_nameX1950);
int pthread_mutex_unlock(struct _opaque_pthread_mutex_t* anonymous_var_nameX1951);
int pthread_mutexattr_destroy(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1952);
int pthread_mutexattr_getprioceiling(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1953, int* anonymous_var_nameX1954);
int pthread_mutexattr_getprotocol(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1955, int* anonymous_var_nameX1956);
int pthread_mutexattr_getpshared(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1957, int* anonymous_var_nameX1958);
int pthread_mutexattr_gettype(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1959, int* anonymous_var_nameX1960);
int pthread_mutexattr_getpolicy_np(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1961, int* anonymous_var_nameX1962);
int pthread_mutexattr_init(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1963);
int pthread_mutexattr_setprioceiling(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1964, int anonymous_var_nameX1965);
int pthread_mutexattr_setprotocol(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1966, int anonymous_var_nameX1967);
int pthread_mutexattr_setpshared(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1968, int anonymous_var_nameX1969);
int pthread_mutexattr_settype(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1970, int anonymous_var_nameX1971);
int pthread_mutexattr_setpolicy_np(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1972, int anonymous_var_nameX1973);
int pthread_once(struct _opaque_pthread_once_t* anonymous_var_nameX1974, void (*anonymous_lambda_var_nameZ14)());
int pthread_rwlock_destroy(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1975);
int pthread_rwlock_init(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1976, const struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1977);
int pthread_rwlock_rdlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1978);
int pthread_rwlock_tryrdlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1979);
int pthread_rwlock_trywrlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1980);
int pthread_rwlock_wrlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1981);
int pthread_rwlock_unlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1982);
int pthread_rwlockattr_destroy(struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1983);
int pthread_rwlockattr_getpshared(const struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1984, int* anonymous_var_nameX1985);
int pthread_rwlockattr_init(struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1986);
int pthread_rwlockattr_setpshared(struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1987, int anonymous_var_nameX1988);
struct _opaque_pthread_t* pthread_self();
int pthread_setcancelstate(int anonymous_var_nameX1989, int* anonymous_var_nameX1990);
int pthread_setcanceltype(int anonymous_var_nameX1991, int* anonymous_var_nameX1992);
int pthread_setconcurrency(int anonymous_var_nameX1993);
int pthread_setschedparam(struct _opaque_pthread_t* anonymous_var_nameX1994, int anonymous_var_nameX1995, const struct sched_param* anonymous_var_nameX1996);
int pthread_setspecific(unsigned long  int anonymous_var_nameX1997, const void* anonymous_var_nameX1998);
void pthread_testcancel();
int CRYPTO_THREAD_run_once(struct _opaque_pthread_once_t* once, void (*init)());
int CRYPTO_THREAD_init_local(unsigned long  int* key, void (*cleanup)(void*));
void* CRYPTO_THREAD_get_local(unsigned long  int* key);
int CRYPTO_THREAD_set_local(unsigned long  int* key, void* val);
int CRYPTO_THREAD_cleanup_local(unsigned long  int* key);
struct _opaque_pthread_t* CRYPTO_THREAD_get_current_id();
int CRYPTO_THREAD_compare_id(struct _opaque_pthread_t* a, struct _opaque_pthread_t* b);
struct ossl_lib_ctx_st* OSSL_LIB_CTX_new();
struct ossl_lib_ctx_st* OSSL_LIB_CTX_new_from_dispatch(const struct ossl_core_handle_st* handle, const struct ossl_dispatch_st* in);
struct ossl_lib_ctx_st* OSSL_LIB_CTX_new_child(const struct ossl_core_handle_st* handle, const struct ossl_dispatch_st* in);
int OSSL_LIB_CTX_load_config(struct ossl_lib_ctx_st* ctx, const char* config_file);
void OSSL_LIB_CTX_free(struct ossl_lib_ctx_st* anonymous_var_nameX2000);
struct ossl_lib_ctx_st* OSSL_LIB_CTX_get0_global_default();
struct ossl_lib_ctx_st* OSSL_LIB_CTX_set0_default(struct ossl_lib_ctx_st* libctx);
int OSSL_LIB_CTX_get_conf_diagnostics(struct ossl_lib_ctx_st* ctx);
void OSSL_LIB_CTX_set_conf_diagnostics(struct ossl_lib_ctx_st* ctx, int value);
void OSSL_sleep(unsigned long  long millis);
void* OSSL_LIB_CTX_get_data(struct ossl_lib_ctx_st* ctx, int index);
struct comp_ctx_st* COMP_CTX_new(struct comp_method_st* meth);
const struct comp_method_st* COMP_CTX_get_method(const struct comp_ctx_st* ctx);
int COMP_CTX_get_type(const struct comp_ctx_st* comp);
int COMP_get_type(const struct comp_method_st* meth);
const char* COMP_get_name(const struct comp_method_st* meth);
void COMP_CTX_free(struct comp_ctx_st* ctx);
int COMP_compress_block(struct comp_ctx_st* ctx, unsigned char* out, int olen, unsigned char* in, int ilen);
int COMP_expand_block(struct comp_ctx_st* ctx, unsigned char* out, int olen, unsigned char* in, int ilen);
struct comp_method_st* COMP_zlib();
struct comp_method_st* COMP_zlib_oneshot();
struct comp_method_st* COMP_brotli();
struct comp_method_st* COMP_brotli_oneshot();
struct comp_method_st* COMP_zstd();
struct comp_method_st* COMP_zstd_oneshot();
int BIO_get_new_index();
void BIO_set_flags(struct bio_st* b, int flags);
int BIO_test_flags(const struct bio_st* b, int flags);
void BIO_clear_flags(struct bio_st* b, int flags);
long (*BIO_get_callback(const struct bio_st* b))(struct bio_st*,int,const char*,int,long,long);
void BIO_set_callback(struct bio_st* b, long (*callback)(struct bio_st*,int,const char*,int,long,long));
long BIO_debug_callback(struct bio_st* bio, int cmd, const char* argp, int argi, long argl, long ret);
long (*BIO_get_callback_ex(const struct bio_st* b))(struct bio_st*,int,const char*,unsigned long  int,int,long,int,unsigned long  int*);
void BIO_set_callback_ex(struct bio_st* b, long (*callback)(struct bio_st*,int,const char*,unsigned long  int,int,long,int,unsigned long  int*));
long BIO_debug_callback_ex(struct bio_st* bio, int oper, const char* argp, unsigned long  int len, int argi, long argl, int ret, unsigned long  int* processed);
char* BIO_get_callback_arg(const struct bio_st* b);
void BIO_set_callback_arg(struct bio_st* b, char* arg);
const char* BIO_method_name(const struct bio_st* b);
int BIO_method_type(const struct bio_st* b);
unsigned long  int BIO_ctrl_pending(struct bio_st* b);
unsigned long  int BIO_ctrl_wpending(struct bio_st* b);
unsigned long  int BIO_ctrl_get_write_guarantee(struct bio_st* b);
unsigned long  int BIO_ctrl_get_read_request(struct bio_st* b);
int BIO_ctrl_reset_read_request(struct bio_st* b);
int BIO_set_ex_data(struct bio_st* bio, int idx, void* data);
void* BIO_get_ex_data(const struct bio_st* bio, int idx);
unsigned long  long BIO_number_read(struct bio_st* bio);
unsigned long  long BIO_number_written(struct bio_st* bio);
int BIO_asn1_set_prefix(struct bio_st* b, int (*prefix)(struct bio_st*,unsigned char**,int*,void*), int (*prefix_free)(struct bio_st*,unsigned char**,int*,void*));
int BIO_asn1_get_prefix(struct bio_st* b, int (*pprefix)(struct bio_st*,unsigned char**,int*,void*), int (*pprefix_free)(struct bio_st*,unsigned char**,int*,void*));
int BIO_asn1_set_suffix(struct bio_st* b, int (*suffix)(struct bio_st*,unsigned char**,int*,void*), int (*suffix_free)(struct bio_st*,unsigned char**,int*,void*));
int BIO_asn1_get_suffix(struct bio_st* b, int (*psuffix)(struct bio_st*,unsigned char**,int*,void*), int (*psuffix_free)(struct bio_st*,unsigned char**,int*,void*));
const struct bio_method_st* BIO_s_file();
struct bio_st* BIO_new_file(const char* filename, const char* mode);
struct bio_st* BIO_new_from_core_bio(struct ossl_lib_ctx_st* libctx, struct ossl_core_bio_st* corebio);
struct bio_st* BIO_new_fp(struct __sFILE* stream, int close_flag);
struct bio_st* BIO_new_ex(struct ossl_lib_ctx_st* libctx, const struct bio_method_st* method);
struct bio_st* BIO_new(const struct bio_method_st* type);
int BIO_free(struct bio_st* a);
void BIO_set_data(struct bio_st* a, void* ptr);
void* BIO_get_data(struct bio_st* a);
void BIO_set_init(struct bio_st* a, int init);
int BIO_get_init(struct bio_st* a);
void BIO_set_shutdown(struct bio_st* a, int shut);
int BIO_get_shutdown(struct bio_st* a);
void BIO_vfree(struct bio_st* a);
int BIO_up_ref(struct bio_st* a);
int BIO_read(struct bio_st* b, void* data, int dlen);
int BIO_read_ex(struct bio_st* b, void* data, unsigned long  int dlen, unsigned long  int* readbytes);
int BIO_recvmmsg(struct bio_st* b, struct bio_msg_st* msg, unsigned long  int stride, unsigned long  int num_msg, unsigned long  long flags, unsigned long  int* msgs_processed);
int BIO_gets(struct bio_st* bp, char* buf, int size);
int BIO_get_line(struct bio_st* bio, char* buf, int size);
int BIO_write(struct bio_st* b, const void* data, int dlen);
int BIO_write_ex(struct bio_st* b, const void* data, unsigned long  int dlen, unsigned long  int* written);
int BIO_sendmmsg(struct bio_st* b, struct bio_msg_st* msg, unsigned long  int stride, unsigned long  int num_msg, unsigned long  long flags, unsigned long  int* msgs_processed);
int BIO_get_rpoll_descriptor(struct bio_st* b, struct bio_poll_descriptor_st* desc);
int BIO_get_wpoll_descriptor(struct bio_st* b, struct bio_poll_descriptor_st* desc);
int BIO_puts(struct bio_st* bp, const char* buf);
int BIO_indent(struct bio_st* b, int indent, int max);
long BIO_ctrl(struct bio_st* bp, int cmd, long larg, void* parg);
long BIO_callback_ctrl(struct bio_st* b, int cmd, int (*fp)(struct bio_st*,int,int));
void* BIO_ptr_ctrl(struct bio_st* bp, int cmd, long larg);
long BIO_int_ctrl(struct bio_st* bp, int cmd, long larg, int iarg);
struct bio_st* BIO_push(struct bio_st* b, struct bio_st* append);
struct bio_st* BIO_pop(struct bio_st* b);
void BIO_free_all(struct bio_st* a);
struct bio_st* BIO_find_type(struct bio_st* b, int bio_type);
struct bio_st* BIO_next(struct bio_st* b);
void BIO_set_next(struct bio_st* b, struct bio_st* next);
struct bio_st* BIO_get_retry_BIO(struct bio_st* bio, int* reason);
int BIO_get_retry_reason(struct bio_st* bio);
void BIO_set_retry_reason(struct bio_st* bio, int reason);
struct bio_st* BIO_dup_chain(struct bio_st* in);
int BIO_nread0(struct bio_st* bio, char** buf);
int BIO_nread(struct bio_st* bio, char** buf, int num);
int BIO_nwrite0(struct bio_st* bio, char** buf);
int BIO_nwrite(struct bio_st* bio, char** buf, int num);
const struct bio_method_st* BIO_s_mem();
const struct bio_method_st* BIO_s_dgram_mem();
const struct bio_method_st* BIO_s_secmem();
struct bio_st* BIO_new_mem_buf(const void* buf, int len);
const struct bio_method_st* BIO_s_socket();
const struct bio_method_st* BIO_s_connect();
const struct bio_method_st* BIO_s_accept();
const struct bio_method_st* BIO_s_fd();
const struct bio_method_st* BIO_s_log();
const struct bio_method_st* BIO_s_bio();
const struct bio_method_st* BIO_s_null();
const struct bio_method_st* BIO_f_null();
const struct bio_method_st* BIO_f_buffer();
const struct bio_method_st* BIO_f_readbuffer();
const struct bio_method_st* BIO_f_linebuffer();
const struct bio_method_st* BIO_f_nbio_test();
const struct bio_method_st* BIO_f_prefix();
const struct bio_method_st* BIO_s_core();
const struct bio_method_st* BIO_s_dgram_pair();
const struct bio_method_st* BIO_s_datagram();
int BIO_dgram_non_fatal_error(int error);
struct bio_st* BIO_new_dgram(int fd, int close_flag);
int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);
int BIO_err_is_non_fatal(unsigned int errcode);
int BIO_socket_wait(int fd, int for_read, long max_time);
int BIO_wait(struct bio_st* bio, long max_time, unsigned int nap_milliseconds);
int BIO_do_connect_retry(struct bio_st* bio, int timeout, int nap_milliseconds);
int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb)(const void*,unsigned long  int,void*), void* u, const void* s, int len);
int BIO_dump_indent_cb(int (*cb)(const void*,unsigned long  int,void*), void* u, const void* s, int len, int indent);
int BIO_dump(struct bio_st* b, const void* bytes, int len);
int BIO_dump_indent(struct bio_st* b, const void* bytes, int len, int indent);
int BIO_dump_fp(struct __sFILE* fp, const void* s, int len);
int BIO_dump_indent_fp(struct __sFILE* fp, const void* s, int len, int indent);
int BIO_hex_string(struct bio_st* out, int indent, int width, const void* data, int datalen);
union bio_addr_st* BIO_ADDR_new();
int BIO_ADDR_copy(union bio_addr_st* dst, const union bio_addr_st* src);
union bio_addr_st* BIO_ADDR_dup(const union bio_addr_st* ap);
int BIO_ADDR_rawmake(union bio_addr_st* ap, int family, const void* where, unsigned long  int wherelen, unsigned short int port);
void BIO_ADDR_free(union bio_addr_st* anonymous_var_nameX2004);
void BIO_ADDR_clear(union bio_addr_st* ap);
int BIO_ADDR_family(const union bio_addr_st* ap);
int BIO_ADDR_rawaddress(const union bio_addr_st* ap, void* p, unsigned long  int* l);
unsigned short int BIO_ADDR_rawport(const union bio_addr_st* ap);
char* BIO_ADDR_hostname_string(const union bio_addr_st* ap, int numeric);
char* BIO_ADDR_service_string(const union bio_addr_st* ap, int numeric);
char* BIO_ADDR_path_string(const union bio_addr_st* ap);
const struct bio_addrinfo_st* BIO_ADDRINFO_next(const struct bio_addrinfo_st* bai);
int BIO_ADDRINFO_family(const struct bio_addrinfo_st* bai);
int BIO_ADDRINFO_socktype(const struct bio_addrinfo_st* bai);
int BIO_ADDRINFO_protocol(const struct bio_addrinfo_st* bai);
const union bio_addr_st* BIO_ADDRINFO_address(const struct bio_addrinfo_st* bai);
void BIO_ADDRINFO_free(struct bio_addrinfo_st* bai);
int BIO_parse_hostserv(const char* hostserv, char** host, char** service, enum BIO_hostserv_priorities hostserv_prio);
int BIO_lookup(const char* host, const char* service, enum BIO_lookup_type lookup_type, int family, int socktype, struct bio_addrinfo_st** res);
int BIO_lookup_ex(const char* host, const char* service, int lookup_type, int family, int socktype, int protocol, struct bio_addrinfo_st** res);
int BIO_sock_error(int sock);
int BIO_socket_ioctl(int fd, long type, void* arg);
int BIO_socket_nbio(int fd, int mode);
int BIO_sock_init();
int BIO_set_tcp_ndelay(int sock, int turn_on);
struct hostent* BIO_gethostbyname(const char* name);
int BIO_get_port(const char* str, unsigned short int* port_ptr);
int BIO_get_host_ip(const char* str, unsigned char* ip);
int BIO_get_accept_socket(char* host_port, int mode);
int BIO_accept(int sock, char** ip_port);
int BIO_sock_info(int sock, enum BIO_sock_info_type type, union BIO_sock_info_u* info);
int BIO_socket(int domain, int socktype, int protocol, int options);
int BIO_connect(int sock, const union bio_addr_st* addr, int options);
int BIO_bind(int sock, const union bio_addr_st* addr, int options);
int BIO_listen(int sock, const union bio_addr_st* addr, int options);
int BIO_accept_ex(int accept_sock, union bio_addr_st* addr, int options);
int BIO_closesocket(int sock);
struct bio_st* BIO_new_socket(int sock, int close_flag);
struct bio_st* BIO_new_connect(const char* host_port);
struct bio_st* BIO_new_accept(const char* host_port);
struct bio_st* BIO_new_fd(int fd, int close_flag);
int BIO_new_bio_pair(struct bio_st** bio1, unsigned long  int writebuf1, struct bio_st** bio2, unsigned long  int writebuf2);
int BIO_new_bio_dgram_pair(struct bio_st** bio1, unsigned long  int writebuf1, struct bio_st** bio2, unsigned long  int writebuf2);
void BIO_copy_next_retry(struct bio_st* b);
int BIO_printf(struct bio_st* bio, const char* format, ...);
int BIO_vprintf(struct bio_st* bio, const char* format, va_list args);
int BIO_snprintf(char* buf, unsigned long  int n, const char* format, ...);
int BIO_vsnprintf(char* buf, unsigned long  int n, const char* format, va_list args);
struct bio_method_st* BIO_meth_new(int type, const char* name);
void BIO_meth_free(struct bio_method_st* biom);
int (*BIO_meth_get_write(const struct bio_method_st* _function_pointer_result_var_name_a3))(struct bio_st*,const char*,int);
int (*BIO_meth_get_write_ex(const struct bio_method_st* _function_pointer_result_var_name_a4))(struct bio_st*,const char*,unsigned long  int,unsigned long  int*);
int BIO_meth_set_write(struct bio_method_st* biom, int (*write)(struct bio_st*,const char*,int));
int BIO_meth_set_write_ex(struct bio_method_st* biom, int (*bwrite)(struct bio_st*,const char*,unsigned long  int,unsigned long  int*));
int BIO_meth_set_sendmmsg(struct bio_method_st* biom, int (*f)(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  long,unsigned long  int*));
int (*BIO_meth_get_sendmmsg(const struct bio_method_st* _function_pointer_result_var_name_a5))(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  long,unsigned long  int*);
int (*BIO_meth_get_read(const struct bio_method_st* _function_pointer_result_var_name_a6))(struct bio_st*,char*,int);
int (*BIO_meth_get_read_ex(const struct bio_method_st* _function_pointer_result_var_name_a7))(struct bio_st*,char*,unsigned long  int,unsigned long  int*);
int BIO_meth_set_read(struct bio_method_st* biom, int (*read)(struct bio_st*,char*,int));
int BIO_meth_set_read_ex(struct bio_method_st* biom, int (*bread)(struct bio_st*,char*,unsigned long  int,unsigned long  int*));
int BIO_meth_set_recvmmsg(struct bio_method_st* biom, int (*f)(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  long,unsigned long  int*));
int (*BIO_meth_get_recvmmsg(const struct bio_method_st* _function_pointer_result_var_name_a8))(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  long,unsigned long  int*);
int (*BIO_meth_get_puts(const struct bio_method_st* _function_pointer_result_var_name_a9))(struct bio_st*,const char*);
int BIO_meth_set_puts(struct bio_method_st* biom, int (*puts)(struct bio_st*,const char*));
int (*BIO_meth_get_gets(const struct bio_method_st* _function_pointer_result_var_name_a10))(struct bio_st*,char*,int);
int BIO_meth_set_gets(struct bio_method_st* biom, int (*ossl_gets)(struct bio_st*,char*,int));
long (*BIO_meth_get_ctrl(const struct bio_method_st* _function_pointer_result_var_name_a11))(struct bio_st*,int,long,void*);
int BIO_meth_set_ctrl(struct bio_method_st* biom, long (*ctrl)(struct bio_st*,int,long,void*));
int (*BIO_meth_get_create(const struct bio_method_st* _function_pointer_result_var_name_a12))(struct bio_st*);
int BIO_meth_set_create(struct bio_method_st* biom, int (*create)(struct bio_st*));
int (*BIO_meth_get_destroy(const struct bio_method_st* _function_pointer_result_var_name_a13))(struct bio_st*);
int BIO_meth_set_destroy(struct bio_method_st* biom, int (*destroy)(struct bio_st*));
long (*BIO_meth_get_callback_ctrl(const struct bio_method_st* _function_pointer_result_var_name_a14))(struct bio_st*,int,int (*)(struct bio_st*,int,int));
int BIO_meth_set_callback_ctrl(struct bio_method_st* biom, long (*callback_ctrl)(struct bio_st*,int,int (*)(struct bio_st*,int,int)));
struct buf_mem_st* BUF_MEM_new();
struct buf_mem_st* BUF_MEM_new_ex(unsigned long  int flags);
void BUF_MEM_free(struct buf_mem_st* a);
unsigned long  int BUF_MEM_grow(struct buf_mem_st* str, unsigned long  int len);
unsigned long  int BUF_MEM_grow_clean(struct buf_mem_st* str, unsigned long  int len);
void BUF_reverse(unsigned char* out, const unsigned char* in, unsigned long  int siz);
void BN_set_flags(struct bignum_st* b, int n);
int BN_get_flags(const struct bignum_st* b, int n);
void BN_with_flags(struct bignum_st* dest, const struct bignum_st* b, int flags);
int BN_GENCB_call(struct bn_gencb_st* cb, int a, int b);
struct bn_gencb_st* BN_GENCB_new();
void BN_GENCB_free(struct bn_gencb_st* cb);
void BN_GENCB_set_old(struct bn_gencb_st* gencb, void (*callback)(int,int,void*), void* cb_arg);
void BN_GENCB_set(struct bn_gencb_st* gencb, int (*callback)(int,int,struct bn_gencb_st*), void* cb_arg);
void* BN_GENCB_get_arg(struct bn_gencb_st* cb);
int BN_abs_is_word(const struct bignum_st* a, const unsigned long  int w);
int BN_is_zero(const struct bignum_st* a);
int BN_is_one(const struct bignum_st* a);
int BN_is_word(const struct bignum_st* a, const unsigned long  int w);
int BN_is_odd(const struct bignum_st* a);
void BN_zero_ex(struct bignum_st* a);
const struct bignum_st* BN_value_one();
char* BN_options();
struct bignum_ctx* BN_CTX_new_ex(struct ossl_lib_ctx_st* ctx);
struct bignum_ctx* BN_CTX_new();
struct bignum_ctx* BN_CTX_secure_new_ex(struct ossl_lib_ctx_st* ctx);
struct bignum_ctx* BN_CTX_secure_new();
void BN_CTX_free(struct bignum_ctx* c);
void BN_CTX_start(struct bignum_ctx* ctx);
struct bignum_st* BN_CTX_get(struct bignum_ctx* ctx);
void BN_CTX_end(struct bignum_ctx* ctx);
int BN_rand_ex(struct bignum_st* rnd, int bits, int top, int bottom, unsigned int strength, struct bignum_ctx* ctx);
int BN_rand(struct bignum_st* rnd, int bits, int top, int bottom);
int BN_priv_rand_ex(struct bignum_st* rnd, int bits, int top, int bottom, unsigned int strength, struct bignum_ctx* ctx);
int BN_priv_rand(struct bignum_st* rnd, int bits, int top, int bottom);
int BN_rand_range_ex(struct bignum_st* r, const struct bignum_st* range, unsigned int strength, struct bignum_ctx* ctx);
int BN_rand_range(struct bignum_st* rnd, const struct bignum_st* range);
int BN_priv_rand_range_ex(struct bignum_st* r, const struct bignum_st* range, unsigned int strength, struct bignum_ctx* ctx);
int BN_priv_rand_range(struct bignum_st* rnd, const struct bignum_st* range);
int BN_pseudo_rand(struct bignum_st* rnd, int bits, int top, int bottom);
int BN_pseudo_rand_range(struct bignum_st* rnd, const struct bignum_st* range);
int BN_num_bits(const struct bignum_st* a);
int BN_num_bits_word(unsigned long  int l);
int BN_security_bits(int L, int N);
struct bignum_st* BN_new();
struct bignum_st* BN_secure_new();
void BN_clear_free(struct bignum_st* a);
struct bignum_st* BN_copy(struct bignum_st* a, const struct bignum_st* b);
void BN_swap(struct bignum_st* a, struct bignum_st* b);
struct bignum_st* BN_bin2bn(const unsigned char* s, int len, struct bignum_st* ret);
struct bignum_st* BN_signed_bin2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2bin(const struct bignum_st* a, unsigned char* to);
int BN_bn2binpad(const struct bignum_st* a, unsigned char* to, int tolen);
int BN_signed_bn2bin(const struct bignum_st* a, unsigned char* to, int tolen);
struct bignum_st* BN_lebin2bn(const unsigned char* s, int len, struct bignum_st* ret);
struct bignum_st* BN_signed_lebin2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2lebinpad(const struct bignum_st* a, unsigned char* to, int tolen);
int BN_signed_bn2lebin(const struct bignum_st* a, unsigned char* to, int tolen);
struct bignum_st* BN_native2bn(const unsigned char* s, int len, struct bignum_st* ret);
struct bignum_st* BN_signed_native2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2nativepad(const struct bignum_st* a, unsigned char* to, int tolen);
int BN_signed_bn2native(const struct bignum_st* a, unsigned char* to, int tolen);
struct bignum_st* BN_mpi2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2mpi(const struct bignum_st* a, unsigned char* to);
int BN_sub(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_usub(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_uadd(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_add(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_mul(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int BN_sqr(struct bignum_st* r, const struct bignum_st* a, struct bignum_ctx* ctx);
void BN_set_negative(struct bignum_st* b, int n);
int BN_is_negative(const struct bignum_st* b);
int BN_div(struct bignum_st* dv, struct bignum_st* rem, const struct bignum_st* m, const struct bignum_st* d, struct bignum_ctx* ctx);
int BN_nnmod(struct bignum_st* r, const struct bignum_st* m, const struct bignum_st* d, struct bignum_ctx* ctx);
int BN_mod_add(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_add_quick(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m);
int BN_mod_sub(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_sub_quick(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m);
int BN_mod_mul(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_sqr(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_lshift1(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_lshift1_quick(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* m);
int BN_mod_lshift(struct bignum_st* r, const struct bignum_st* a, int n, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_lshift_quick(struct bignum_st* r, const struct bignum_st* a, int n, const struct bignum_st* m);
unsigned long  int BN_mod_word(const struct bignum_st* a, unsigned long  int w);
unsigned long  int BN_div_word(struct bignum_st* a, unsigned long  int w);
int BN_mul_word(struct bignum_st* a, unsigned long  int w);
int BN_add_word(struct bignum_st* a, unsigned long  int w);
int BN_sub_word(struct bignum_st* a, unsigned long  int w);
int BN_set_word(struct bignum_st* a, unsigned long  int w);
unsigned long  int BN_get_word(const struct bignum_st* a);
int BN_cmp(const struct bignum_st* a, const struct bignum_st* b);
void BN_free(struct bignum_st* a);
int BN_is_bit_set(const struct bignum_st* a, int n);
int BN_lshift(struct bignum_st* r, const struct bignum_st* a, int n);
int BN_lshift1(struct bignum_st* r, const struct bignum_st* a);
int BN_exp(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_mod_exp(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_exp_mont(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* m_ctx);
int BN_mod_exp_mont_consttime(struct bignum_st* rr, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* in_mont);
int BN_mod_exp_mont_word(struct bignum_st* r, unsigned long  int a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* m_ctx);
int BN_mod_exp2_mont(struct bignum_st* r, const struct bignum_st* a1, const struct bignum_st* p1, const struct bignum_st* a2, const struct bignum_st* p2, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* m_ctx);
int BN_mod_exp_simple(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_exp_mont_consttime_x2(struct bignum_st* rr1, const struct bignum_st* a1, const struct bignum_st* p1, const struct bignum_st* m1, struct bn_mont_ctx_st* in_mont1, struct bignum_st* rr2, const struct bignum_st* a2, const struct bignum_st* p2, const struct bignum_st* m2, struct bn_mont_ctx_st* in_mont2, struct bignum_ctx* ctx);
int BN_mask_bits(struct bignum_st* a, int n);
int BN_print_fp(struct __sFILE* fp, const struct bignum_st* a);
int BN_print(struct bio_st* bio, const struct bignum_st* a);
int BN_reciprocal(struct bignum_st* r, const struct bignum_st* m, int len, struct bignum_ctx* ctx);
int BN_rshift(struct bignum_st* r, const struct bignum_st* a, int n);
int BN_rshift1(struct bignum_st* r, const struct bignum_st* a);
void BN_clear(struct bignum_st* a);
struct bignum_st* BN_dup(const struct bignum_st* a);
int BN_ucmp(const struct bignum_st* a, const struct bignum_st* b);
int BN_set_bit(struct bignum_st* a, int n);
int BN_clear_bit(struct bignum_st* a, int n);
char* BN_bn2hex(const struct bignum_st* a);
char* BN_bn2dec(const struct bignum_st* a);
int BN_hex2bn(struct bignum_st** a, const char* str);
int BN_dec2bn(struct bignum_st** a, const char* str);
int BN_asc2bn(struct bignum_st** a, const char* str);
int BN_gcd(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int BN_kronecker(const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int BN_are_coprime(struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
struct bignum_st* BN_mod_inverse(struct bignum_st* ret, const struct bignum_st* a, const struct bignum_st* n, struct bignum_ctx* ctx);
struct bignum_st* BN_mod_sqrt(struct bignum_st* ret, const struct bignum_st* a, const struct bignum_st* n, struct bignum_ctx* ctx);
void BN_consttime_swap(unsigned long  int swap, struct bignum_st* a, struct bignum_st* b, int nwords);
struct bignum_st* BN_generate_prime(struct bignum_st* ret, int bits, int safe, const struct bignum_st* add, const struct bignum_st* rem, void (*callback)(int,int,void*), void* cb_arg);
int BN_is_prime(const struct bignum_st* p, int nchecks, void (*callback)(int,int,void*), struct bignum_ctx* ctx, void* cb_arg);
int BN_is_prime_fasttest(const struct bignum_st* p, int nchecks, void (*callback)(int,int,void*), struct bignum_ctx* ctx, void* cb_arg, int do_trial_division);
int BN_is_prime_ex(const struct bignum_st* p, int nchecks, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
int BN_is_prime_fasttest_ex(const struct bignum_st* p, int nchecks, struct bignum_ctx* ctx, int do_trial_division, struct bn_gencb_st* cb);
int BN_generate_prime_ex2(struct bignum_st* ret, int bits, int safe, const struct bignum_st* add, const struct bignum_st* rem, struct bn_gencb_st* cb, struct bignum_ctx* ctx);
int BN_generate_prime_ex(struct bignum_st* ret, int bits, int safe, const struct bignum_st* add, const struct bignum_st* rem, struct bn_gencb_st* cb);
int BN_check_prime(const struct bignum_st* p, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
int BN_X931_generate_Xpq(struct bignum_st* Xp, struct bignum_st* Xq, int nbits, struct bignum_ctx* ctx);
int BN_X931_derive_prime_ex(struct bignum_st* p, struct bignum_st* p1, struct bignum_st* p2, const struct bignum_st* Xp, const struct bignum_st* Xp1, const struct bignum_st* Xp2, const struct bignum_st* e, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
int BN_X931_generate_prime_ex(struct bignum_st* p, struct bignum_st* p1, struct bignum_st* p2, struct bignum_st* Xp1, struct bignum_st* Xp2, const struct bignum_st* Xp, const struct bignum_st* e, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
struct bn_mont_ctx_st* BN_MONT_CTX_new();
int BN_mod_mul_montgomery(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, struct bn_mont_ctx_st* mont, struct bignum_ctx* ctx);
int BN_to_montgomery(struct bignum_st* r, const struct bignum_st* a, struct bn_mont_ctx_st* mont, struct bignum_ctx* ctx);
int BN_from_montgomery(struct bignum_st* r, const struct bignum_st* a, struct bn_mont_ctx_st* mont, struct bignum_ctx* ctx);
void BN_MONT_CTX_free(struct bn_mont_ctx_st* mont);
int BN_MONT_CTX_set(struct bn_mont_ctx_st* mont, const struct bignum_st* mod, struct bignum_ctx* ctx);
struct bn_mont_ctx_st* BN_MONT_CTX_copy(struct bn_mont_ctx_st* to, struct bn_mont_ctx_st* from);
struct bn_mont_ctx_st* BN_MONT_CTX_set_locked(struct bn_mont_ctx_st** pmont, void* lock, const struct bignum_st* mod, struct bignum_ctx* ctx);
struct bn_blinding_st* BN_BLINDING_new(const struct bignum_st* A, const struct bignum_st* Ai, struct bignum_st* mod);
void BN_BLINDING_free(struct bn_blinding_st* b);
int BN_BLINDING_update(struct bn_blinding_st* b, struct bignum_ctx* ctx);
int BN_BLINDING_convert(struct bignum_st* n, struct bn_blinding_st* b, struct bignum_ctx* ctx);
int BN_BLINDING_invert(struct bignum_st* n, struct bn_blinding_st* b, struct bignum_ctx* ctx);
int BN_BLINDING_convert_ex(struct bignum_st* n, struct bignum_st* r, struct bn_blinding_st* b, struct bignum_ctx* anonymous_var_nameX2060);
int BN_BLINDING_invert_ex(struct bignum_st* n, const struct bignum_st* r, struct bn_blinding_st* b, struct bignum_ctx* anonymous_var_nameX2061);
int BN_BLINDING_is_current_thread(struct bn_blinding_st* b);
void BN_BLINDING_set_current_thread(struct bn_blinding_st* b);
int BN_BLINDING_lock(struct bn_blinding_st* b);
int BN_BLINDING_unlock(struct bn_blinding_st* b);
unsigned long  int BN_BLINDING_get_flags(const struct bn_blinding_st* anonymous_var_nameX2062);
void BN_BLINDING_set_flags(struct bn_blinding_st* anonymous_var_nameX2063, unsigned long  int anonymous_var_nameX2064);
struct bn_blinding_st* BN_BLINDING_create_param(struct bn_blinding_st* b, const struct bignum_st* e, struct bignum_st* m, struct bignum_ctx* ctx, int (*bn_mod_exp)(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*), struct bn_mont_ctx_st* m_ctx);
void BN_set_params(int mul, int high, int low, int mont);
int BN_get_params(int which);
struct bn_recp_ctx_st* BN_RECP_CTX_new();
void BN_RECP_CTX_free(struct bn_recp_ctx_st* recp);
int BN_RECP_CTX_set(struct bn_recp_ctx_st* recp, const struct bignum_st* rdiv, struct bignum_ctx* ctx);
int BN_mod_mul_reciprocal(struct bignum_st* r, const struct bignum_st* x, const struct bignum_st* y, struct bn_recp_ctx_st* recp, struct bignum_ctx* ctx);
int BN_mod_exp_recp(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_div_recp(struct bignum_st* dv, struct bignum_st* rem, const struct bignum_st* m, struct bn_recp_ctx_st* recp, struct bignum_ctx* ctx);
int BN_GF2m_add(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_GF2m_mod(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p);
int BN_GF2m_mod_mul(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_GF2m_mod_sqr(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_GF2m_mod_inv(struct bignum_st* r, const struct bignum_st* b, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_GF2m_mod_div(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_GF2m_mod_exp(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_GF2m_mod_sqrt(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_GF2m_mod_solve_quad(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_GF2m_mod_arr(struct bignum_st* r, const struct bignum_st* a, const int p[]);
int BN_GF2m_mod_mul_arr(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const int p[], struct bignum_ctx* ctx);
int BN_GF2m_mod_sqr_arr(struct bignum_st* r, const struct bignum_st* a, const int p[], struct bignum_ctx* ctx);
int BN_GF2m_mod_inv_arr(struct bignum_st* r, const struct bignum_st* b, const int p[], struct bignum_ctx* ctx);
int BN_GF2m_mod_div_arr(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const int p[], struct bignum_ctx* ctx);
int BN_GF2m_mod_exp_arr(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const int p[], struct bignum_ctx* ctx);
int BN_GF2m_mod_sqrt_arr(struct bignum_st* r, const struct bignum_st* a, const int p[], struct bignum_ctx* ctx);
int BN_GF2m_mod_solve_quad_arr(struct bignum_st* r, const struct bignum_st* a, const int p[], struct bignum_ctx* ctx);
int BN_GF2m_poly2arr(const struct bignum_st* a, int p[], int max);
int BN_GF2m_arr2poly(const int p[], struct bignum_st* a);
int BN_nist_mod_192(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_224(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_256(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_384(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_521(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
const struct bignum_st* BN_get0_nist_prime_192();
const struct bignum_st* BN_get0_nist_prime_224();
const struct bignum_st* BN_get0_nist_prime_256();
const struct bignum_st* BN_get0_nist_prime_384();
const struct bignum_st* BN_get0_nist_prime_521();
int (*BN_nist_mod_func(const struct bignum_st* _function_pointer_result_var_name_a15))(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*);
int BN_generate_dsa_nonce(struct bignum_st* out, const struct bignum_st* range, const struct bignum_st* priv, const unsigned char* message, unsigned long  int message_len, struct bignum_ctx* ctx);
struct bignum_st* BN_get_rfc2409_prime_768(struct bignum_st* bn);
struct bignum_st* BN_get_rfc2409_prime_1024(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_1536(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_2048(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_3072(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_4096(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_6144(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_8192(struct bignum_st* bn);
int BN_bntest_rand(struct bignum_st* rnd, int bits, int top, int bottom);
struct ossl_param_st* OSSL_PARAM_locate(struct ossl_param_st* p, const char* key);
const struct ossl_param_st* OSSL_PARAM_locate_const(const struct ossl_param_st* p, const char* key);
struct ossl_param_st OSSL_PARAM_construct_int(const char* key, int* buf);
struct ossl_param_st OSSL_PARAM_construct_uint(const char* key, unsigned int* buf);
struct ossl_param_st OSSL_PARAM_construct_long(const char* key, long  int* buf);
struct ossl_param_st OSSL_PARAM_construct_ulong(const char* key, unsigned long  int* buf);
struct ossl_param_st OSSL_PARAM_construct_int32(const char* key, int* buf);
struct ossl_param_st OSSL_PARAM_construct_uint32(const char* key, unsigned int* buf);
struct ossl_param_st OSSL_PARAM_construct_int64(const char* key, long long* buf);
struct ossl_param_st OSSL_PARAM_construct_uint64(const char* key, unsigned long  long* buf);
struct ossl_param_st OSSL_PARAM_construct_size_t(const char* key, unsigned long  int* buf);
struct ossl_param_st OSSL_PARAM_construct_time_t(const char* key, long* buf);
struct ossl_param_st OSSL_PARAM_construct_BN(const char* key, unsigned char* buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_double(const char* key, double* buf);
struct ossl_param_st OSSL_PARAM_construct_utf8_string(const char* key, char* buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_utf8_ptr(const char* key, char** buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_octet_string(const char* key, void* buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_octet_ptr(const char* key, void** buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_end();
int OSSL_PARAM_allocate_from_text(struct ossl_param_st* to, const struct ossl_param_st* paramdefs, const char* key, const char* value, unsigned long  int value_n, int* found);
int OSSL_PARAM_get_int(const struct ossl_param_st* p, int* val);
int OSSL_PARAM_get_uint(const struct ossl_param_st* p, unsigned int* val);
int OSSL_PARAM_get_long(const struct ossl_param_st* p, long  int* val);
int OSSL_PARAM_get_ulong(const struct ossl_param_st* p, unsigned long  int* val);
int OSSL_PARAM_get_int32(const struct ossl_param_st* p, int* val);
int OSSL_PARAM_get_uint32(const struct ossl_param_st* p, unsigned int* val);
int OSSL_PARAM_get_int64(const struct ossl_param_st* p, long long* val);
int OSSL_PARAM_get_uint64(const struct ossl_param_st* p, unsigned long  long* val);
int OSSL_PARAM_get_size_t(const struct ossl_param_st* p, unsigned long  int* val);
int OSSL_PARAM_get_time_t(const struct ossl_param_st* p, long* val);
int OSSL_PARAM_set_int(struct ossl_param_st* p, int val);
int OSSL_PARAM_set_uint(struct ossl_param_st* p, unsigned int val);
int OSSL_PARAM_set_long(struct ossl_param_st* p, long  int val);
int OSSL_PARAM_set_ulong(struct ossl_param_st* p, unsigned long  int val);
int OSSL_PARAM_set_int32(struct ossl_param_st* p, int val);
int OSSL_PARAM_set_uint32(struct ossl_param_st* p, unsigned int val);
int OSSL_PARAM_set_int64(struct ossl_param_st* p, long long val);
int OSSL_PARAM_set_uint64(struct ossl_param_st* p, unsigned long  long val);
int OSSL_PARAM_set_size_t(struct ossl_param_st* p, unsigned long  int val);
int OSSL_PARAM_set_time_t(struct ossl_param_st* p, long val);
int OSSL_PARAM_get_double(const struct ossl_param_st* p, double* val);
int OSSL_PARAM_set_double(struct ossl_param_st* p, double val);
int OSSL_PARAM_get_BN(const struct ossl_param_st* p, struct bignum_st** val);
int OSSL_PARAM_set_BN(struct ossl_param_st* p, const struct bignum_st* val);
int OSSL_PARAM_get_utf8_string(const struct ossl_param_st* p, char** val, unsigned long  int max_len);
int OSSL_PARAM_set_utf8_string(struct ossl_param_st* p, const char* val);
int OSSL_PARAM_get_octet_string(const struct ossl_param_st* p, void** val, unsigned long  int max_len, unsigned long  int* used_len);
int OSSL_PARAM_set_octet_string(struct ossl_param_st* p, const void* val, unsigned long  int len);
int OSSL_PARAM_get_utf8_ptr(const struct ossl_param_st* p, const char** val);
int OSSL_PARAM_set_utf8_ptr(struct ossl_param_st* p, const char* val);
int OSSL_PARAM_get_octet_ptr(const struct ossl_param_st* p, const void** val, unsigned long  int* used_len);
int OSSL_PARAM_set_octet_ptr(struct ossl_param_st* p, const void* val, unsigned long  int used_len);
int OSSL_PARAM_get_utf8_string_ptr(const struct ossl_param_st* p, const char** val);
int OSSL_PARAM_get_octet_string_ptr(const struct ossl_param_st* p, const void** val, unsigned long  int* used_len);
int OSSL_PARAM_modified(const struct ossl_param_st* p);
void OSSL_PARAM_set_all_unmodified(struct ossl_param_st* p);
struct ossl_param_st* OSSL_PARAM_dup(const struct ossl_param_st* p);
struct ossl_param_st* OSSL_PARAM_merge(const struct ossl_param_st* p1, const struct ossl_param_st* p2);
void OSSL_PARAM_free(struct ossl_param_st* p);
void OSSL_INDICATOR_set_callback(struct ossl_lib_ctx_st* libctx, int (*cb)(const char*,const char*,const struct ossl_param_st*));
void OSSL_INDICATOR_get_callback(struct ossl_lib_ctx_st* libctx, int (*cb)(const char*,const char*,const struct ossl_param_st*));
struct stack_st_ASN1_TYPE* d2i_ASN1_SEQUENCE_ANY(struct stack_st_ASN1_TYPE** a, const unsigned char** in, long len);
int i2d_ASN1_SEQUENCE_ANY(const struct stack_st_ASN1_TYPE* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_SEQUENCE_ANY_it();
struct stack_st_ASN1_TYPE* d2i_ASN1_SET_ANY(struct stack_st_ASN1_TYPE** a, const unsigned char** in, long len);
int i2d_ASN1_SET_ANY(const struct stack_st_ASN1_TYPE* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_SET_ANY_it();
struct asn1_type_st* ASN1_TYPE_new();
void ASN1_TYPE_free(struct asn1_type_st* a);
struct asn1_type_st* d2i_ASN1_TYPE(struct asn1_type_st** a, const unsigned char** in, long len);
int i2d_ASN1_TYPE(const struct asn1_type_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_ANY_it();
int ASN1_TYPE_get(const struct asn1_type_st* a);
void ASN1_TYPE_set(struct asn1_type_st* a, int type, void* value);
int ASN1_TYPE_set1(struct asn1_type_st* a, int type, const void* value);
int ASN1_TYPE_cmp(const struct asn1_type_st* a, const struct asn1_type_st* b);
struct asn1_type_st* ASN1_TYPE_pack_sequence(const struct ASN1_ITEM_st* it, void* s, struct asn1_type_st** t);
void* ASN1_TYPE_unpack_sequence(const struct ASN1_ITEM_st* it, const struct asn1_type_st* t);
struct asn1_object_st* ASN1_OBJECT_new();
void ASN1_OBJECT_free(struct asn1_object_st* a);
struct asn1_object_st* d2i_ASN1_OBJECT(struct asn1_object_st** a, const unsigned char** in, long len);
int i2d_ASN1_OBJECT(const struct asn1_object_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_OBJECT_it();
struct asn1_string_st* ASN1_STRING_new();
void ASN1_STRING_free(struct asn1_string_st* a);
void ASN1_STRING_clear_free(struct asn1_string_st* a);
int ASN1_STRING_copy(struct asn1_string_st* dst, const struct asn1_string_st* str);
struct asn1_string_st* ASN1_STRING_dup(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_STRING_type_new(int type);
int ASN1_STRING_cmp(const struct asn1_string_st* a, const struct asn1_string_st* b);
int ASN1_STRING_set(struct asn1_string_st* str, const void* data, int len);
void ASN1_STRING_set0(struct asn1_string_st* str, void* data, int len);
int ASN1_STRING_length(const struct asn1_string_st* x);
void ASN1_STRING_length_set(struct asn1_string_st* x, int n);
int ASN1_STRING_type(const struct asn1_string_st* x);
unsigned char* ASN1_STRING_data(struct asn1_string_st* x);
const unsigned char* ASN1_STRING_get0_data(const struct asn1_string_st* x);
struct asn1_string_st* ASN1_BIT_STRING_new();
void ASN1_BIT_STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_BIT_STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_BIT_STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_BIT_STRING_it();
int ASN1_BIT_STRING_set(struct asn1_string_st* a, unsigned char* d, int length);
int ASN1_BIT_STRING_set_bit(struct asn1_string_st* a, int n, int value);
int ASN1_BIT_STRING_get_bit(const struct asn1_string_st* a, int n);
int ASN1_BIT_STRING_check(const struct asn1_string_st* a, const unsigned char* flags, int flags_len);
int ASN1_BIT_STRING_name_print(struct bio_st* out, struct asn1_string_st* bs, struct BIT_STRING_BITNAME_st* tbl, int indent);
int ASN1_BIT_STRING_num_asc(const char* name, struct BIT_STRING_BITNAME_st* tbl);
int ASN1_BIT_STRING_set_asc(struct asn1_string_st* bs, const char* name, int value, struct BIT_STRING_BITNAME_st* tbl);
struct asn1_string_st* ASN1_INTEGER_new();
void ASN1_INTEGER_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_INTEGER(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_INTEGER(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_INTEGER_it();
struct asn1_string_st* d2i_ASN1_UINTEGER(struct asn1_string_st** a, const unsigned char** pp, long length);
struct asn1_string_st* ASN1_INTEGER_dup(const struct asn1_string_st* a);
int ASN1_INTEGER_cmp(const struct asn1_string_st* x, const struct asn1_string_st* y);
struct asn1_string_st* ASN1_ENUMERATED_new();
void ASN1_ENUMERATED_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_ENUMERATED(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_ENUMERATED(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_ENUMERATED_it();
int ASN1_UTCTIME_check(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_UTCTIME_set(struct asn1_string_st* s, long t);
struct asn1_string_st* ASN1_UTCTIME_adj(struct asn1_string_st* s, long t, int offset_day, long offset_sec);
int ASN1_UTCTIME_set_string(struct asn1_string_st* s, const char* str);
int ASN1_UTCTIME_cmp_time_t(const struct asn1_string_st* s, long t);
int ASN1_GENERALIZEDTIME_check(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_GENERALIZEDTIME_set(struct asn1_string_st* s, long t);
struct asn1_string_st* ASN1_GENERALIZEDTIME_adj(struct asn1_string_st* s, long t, int offset_day, long offset_sec);
int ASN1_GENERALIZEDTIME_set_string(struct asn1_string_st* s, const char* str);
int ASN1_TIME_diff(int* pday, int* psec, const struct asn1_string_st* from, const struct asn1_string_st* to);
struct asn1_string_st* ASN1_OCTET_STRING_new();
void ASN1_OCTET_STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_OCTET_STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_OCTET_STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_OCTET_STRING_it();
struct asn1_string_st* ASN1_OCTET_STRING_dup(const struct asn1_string_st* a);
int ASN1_OCTET_STRING_cmp(const struct asn1_string_st* a, const struct asn1_string_st* b);
int ASN1_OCTET_STRING_set(struct asn1_string_st* str, const unsigned char* data, int len);
struct asn1_string_st* ASN1_VISIBLESTRING_new();
void ASN1_VISIBLESTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_VISIBLESTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_VISIBLESTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_VISIBLESTRING_it();
struct asn1_string_st* ASN1_UNIVERSALSTRING_new();
void ASN1_UNIVERSALSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_UNIVERSALSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_UNIVERSALSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_UNIVERSALSTRING_it();
struct asn1_string_st* ASN1_UTF8STRING_new();
void ASN1_UTF8STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_UTF8STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_UTF8STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_UTF8STRING_it();
int* ASN1_NULL_new();
void ASN1_NULL_free(int* a);
int* d2i_ASN1_NULL(int** a, const unsigned char** in, long len);
int i2d_ASN1_NULL(const int* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_NULL_it();
struct asn1_string_st* ASN1_BMPSTRING_new();
void ASN1_BMPSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_BMPSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_BMPSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_BMPSTRING_it();
int UTF8_getc(const unsigned char* str, int len, unsigned long  int* val);
int UTF8_putc(unsigned char* str, int len, unsigned long  int value);
struct asn1_string_st* ASN1_PRINTABLE_new();
void ASN1_PRINTABLE_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_PRINTABLE(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_PRINTABLE(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_PRINTABLE_it();
struct asn1_string_st* DIRECTORYSTRING_new();
void DIRECTORYSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_DIRECTORYSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_DIRECTORYSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* DIRECTORYSTRING_it();
struct asn1_string_st* DISPLAYTEXT_new();
void DISPLAYTEXT_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_DISPLAYTEXT(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_DISPLAYTEXT(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* DISPLAYTEXT_it();
struct asn1_string_st* ASN1_PRINTABLESTRING_new();
void ASN1_PRINTABLESTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_PRINTABLESTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_PRINTABLESTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_PRINTABLESTRING_it();
struct asn1_string_st* ASN1_T61STRING_new();
void ASN1_T61STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_T61STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_T61STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_T61STRING_it();
struct asn1_string_st* ASN1_IA5STRING_new();
void ASN1_IA5STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_IA5STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_IA5STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_IA5STRING_it();
struct asn1_string_st* ASN1_GENERALSTRING_new();
void ASN1_GENERALSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_GENERALSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_GENERALSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_GENERALSTRING_it();
struct asn1_string_st* ASN1_UTCTIME_new();
void ASN1_UTCTIME_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_UTCTIME(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_UTCTIME(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_UTCTIME_it();
struct asn1_string_st* ASN1_GENERALIZEDTIME_new();
void ASN1_GENERALIZEDTIME_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_GENERALIZEDTIME(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_GENERALIZEDTIME(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_GENERALIZEDTIME_it();
struct asn1_string_st* ASN1_TIME_new();
void ASN1_TIME_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_TIME(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_TIME(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_TIME_it();
struct asn1_string_st* ASN1_TIME_dup(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_UTCTIME_dup(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_GENERALIZEDTIME_dup(const struct asn1_string_st* a);
const struct ASN1_ITEM_st* ASN1_OCTET_STRING_NDEF_it();
struct asn1_string_st* ASN1_TIME_set(struct asn1_string_st* s, long t);
struct asn1_string_st* ASN1_TIME_adj(struct asn1_string_st* s, long t, int offset_day, long offset_sec);
int ASN1_TIME_check(const struct asn1_string_st* t);
struct asn1_string_st* ASN1_TIME_to_generalizedtime(const struct asn1_string_st* t, struct asn1_string_st** out);
int ASN1_TIME_set_string(struct asn1_string_st* s, const char* str);
int ASN1_TIME_set_string_X509(struct asn1_string_st* s, const char* str);
int ASN1_TIME_to_tm(const struct asn1_string_st* s, struct tm* tm);
int ASN1_TIME_normalize(struct asn1_string_st* s);
int ASN1_TIME_cmp_time_t(const struct asn1_string_st* s, long t);
int ASN1_TIME_compare(const struct asn1_string_st* a, const struct asn1_string_st* b);
int i2a_ASN1_INTEGER(struct bio_st* bp, const struct asn1_string_st* a);
int a2i_ASN1_INTEGER(struct bio_st* bp, struct asn1_string_st* bs, char* buf, int size);
int i2a_ASN1_ENUMERATED(struct bio_st* bp, const struct asn1_string_st* a);
int a2i_ASN1_ENUMERATED(struct bio_st* bp, struct asn1_string_st* bs, char* buf, int size);
int i2a_ASN1_OBJECT(struct bio_st* bp, const struct asn1_object_st* a);
int a2i_ASN1_STRING(struct bio_st* bp, struct asn1_string_st* bs, char* buf, int size);
int i2a_ASN1_STRING(struct bio_st* bp, const struct asn1_string_st* a, int type);
int i2t_ASN1_OBJECT(char* buf, int buf_len, const struct asn1_object_st* a);
int a2d_ASN1_OBJECT(unsigned char* out, int olen, const char* buf, int num);
struct asn1_object_st* ASN1_OBJECT_create(int nid, unsigned char* data, int len, const char* sn, const char* ln);
int ASN1_INTEGER_get_int64(long long* pr, const struct asn1_string_st* a);
int ASN1_INTEGER_set_int64(struct asn1_string_st* a, long long r);
int ASN1_INTEGER_get_uint64(unsigned long  long* pr, const struct asn1_string_st* a);
int ASN1_INTEGER_set_uint64(struct asn1_string_st* a, unsigned long  long r);
int ASN1_INTEGER_set(struct asn1_string_st* a, long v);
long ASN1_INTEGER_get(const struct asn1_string_st* a);
struct asn1_string_st* BN_to_ASN1_INTEGER(const struct bignum_st* bn, struct asn1_string_st* ai);
struct bignum_st* ASN1_INTEGER_to_BN(const struct asn1_string_st* ai, struct bignum_st* bn);
int ASN1_ENUMERATED_get_int64(long long* pr, const struct asn1_string_st* a);
int ASN1_ENUMERATED_set_int64(struct asn1_string_st* a, long long r);
int ASN1_ENUMERATED_set(struct asn1_string_st* a, long v);
long ASN1_ENUMERATED_get(const struct asn1_string_st* a);
struct asn1_string_st* BN_to_ASN1_ENUMERATED(const struct bignum_st* bn, struct asn1_string_st* ai);
struct bignum_st* ASN1_ENUMERATED_to_BN(const struct asn1_string_st* ai, struct bignum_st* bn);
int ASN1_PRINTABLE_type(const unsigned char* s, int max);
unsigned long  int ASN1_tag2bit(int tag);
int ASN1_get_object(const unsigned char** pp, long* plength, int* ptag, int* pclass, long omax);
int ASN1_check_infinite_end(unsigned char** p, long len);
int ASN1_const_check_infinite_end(const unsigned char** p, long len);
void ASN1_put_object(unsigned char** pp, int constructed, int length, int tag, int xclass);
int ASN1_put_eoc(unsigned char** pp);
int ASN1_object_size(int constructed, int length, int tag);
void* ASN1_dup(int (*i2d)(const void*,unsigned char**), void* (*d2i)(void**,const unsigned char**,long), const void* x);
void* ASN1_item_dup(const struct ASN1_ITEM_st* it, const void* x);
int ASN1_item_sign_ex(const struct ASN1_ITEM_st* it, struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, const void* data, const struct asn1_string_st* id, struct evp_pkey_st* pkey, const struct evp_md_st* md, struct ossl_lib_ctx_st* libctx, const char* propq);
int ASN1_item_verify_ex(const struct ASN1_ITEM_st* it, const struct X509_algor_st* alg, const struct asn1_string_st* signature, const void* data, const struct asn1_string_st* id, struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* propq);
void* ASN1_d2i_fp(void* (*xnew)(), void* (*d2i)(void**,const unsigned char**,long), struct __sFILE* in, void** x);
void* ASN1_item_d2i_fp_ex(const struct ASN1_ITEM_st* it, struct __sFILE* in, void* x, struct ossl_lib_ctx_st* libctx, const char* propq);
void* ASN1_item_d2i_fp(const struct ASN1_ITEM_st* it, struct __sFILE* in, void* x);
int ASN1_i2d_fp(int (*i2d)(const void*,unsigned char**), struct __sFILE* out, const void* x);
int ASN1_item_i2d_fp(const struct ASN1_ITEM_st* it, struct __sFILE* out, const void* x);
int ASN1_STRING_print_ex_fp(struct __sFILE* fp, const struct asn1_string_st* str, unsigned long  int flags);
int ASN1_STRING_to_UTF8(unsigned char** out, const struct asn1_string_st* in);
void* ASN1_d2i_bio(void* (*xnew)(), void* (*d2i)(void**,const unsigned char**,long), struct bio_st* in, void** x);
void* ASN1_item_d2i_bio_ex(const struct ASN1_ITEM_st* it, struct bio_st* in, void* pval, struct ossl_lib_ctx_st* libctx, const char* propq);
void* ASN1_item_d2i_bio(const struct ASN1_ITEM_st* it, struct bio_st* in, void* pval);
int ASN1_i2d_bio(int (*i2d)(const void*,unsigned char**), struct bio_st* out, const void* x);
int ASN1_item_i2d_bio(const struct ASN1_ITEM_st* it, struct bio_st* out, const void* x);
struct bio_st* ASN1_item_i2d_mem_bio(const struct ASN1_ITEM_st* it, const struct ASN1_VALUE_st* val);
int ASN1_UTCTIME_print(struct bio_st* fp, const struct asn1_string_st* a);
int ASN1_GENERALIZEDTIME_print(struct bio_st* fp, const struct asn1_string_st* a);
int ASN1_TIME_print(struct bio_st* bp, const struct asn1_string_st* tm);
int ASN1_TIME_print_ex(struct bio_st* bp, const struct asn1_string_st* tm, unsigned long  int flags);
int ASN1_STRING_print(struct bio_st* bp, const struct asn1_string_st* v);
int ASN1_STRING_print_ex(struct bio_st* out, const struct asn1_string_st* str, unsigned long  int flags);
int ASN1_buf_print(struct bio_st* bp, const unsigned char* buf, unsigned long  int buflen, int off);
int ASN1_bn_print(struct bio_st* bp, const char* number, const struct bignum_st* num, unsigned char* buf, int off);
int ASN1_parse(struct bio_st* bp, const unsigned char* pp, long len, int indent);
int ASN1_parse_dump(struct bio_st* bp, const unsigned char* pp, long len, int indent, int dump);
const char* ASN1_tag2str(int tag);
int ASN1_UNIVERSALSTRING_to_string(struct asn1_string_st* s);
int ASN1_TYPE_set_octetstring(struct asn1_type_st* a, unsigned char* data, int len);
int ASN1_TYPE_get_octetstring(const struct asn1_type_st* a, unsigned char* data, int max_len);
int ASN1_TYPE_set_int_octetstring(struct asn1_type_st* a, long num, unsigned char* data, int len);
int ASN1_TYPE_get_int_octetstring(const struct asn1_type_st* a, long* num, unsigned char* data, int max_len);
void* ASN1_item_unpack(const struct asn1_string_st* oct, const struct ASN1_ITEM_st* it);
void* ASN1_item_unpack_ex(const struct asn1_string_st* oct, const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
struct asn1_string_st* ASN1_item_pack(void* obj, const struct ASN1_ITEM_st* it, struct asn1_string_st** oct);
void ASN1_STRING_set_default_mask(unsigned long  int mask);
int ASN1_STRING_set_default_mask_asc(const char* p);
unsigned long  int ASN1_STRING_get_default_mask();
int ASN1_mbstring_copy(struct asn1_string_st** out, const unsigned char* in, int len, int inform, unsigned long  int mask);
int ASN1_mbstring_ncopy(struct asn1_string_st** out, const unsigned char* in, int len, int inform, unsigned long  int mask, long minsize, long maxsize);
struct asn1_string_st* ASN1_STRING_set_by_NID(struct asn1_string_st** out, const unsigned char* in, int inlen, int inform, int nid);
struct asn1_string_table_st* ASN1_STRING_TABLE_get(int nid);
int ASN1_STRING_TABLE_add(int anonymous_var_nameX2071, long anonymous_var_nameX2072, long anonymous_var_nameX2073, unsigned long  int anonymous_var_nameX2074, unsigned long  int anonymous_var_nameX2075);
void ASN1_STRING_TABLE_cleanup();
struct ASN1_VALUE_st* ASN1_item_new(const struct ASN1_ITEM_st* it);
struct ASN1_VALUE_st* ASN1_item_new_ex(const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
void ASN1_item_free(struct ASN1_VALUE_st* val, const struct ASN1_ITEM_st* it);
struct ASN1_VALUE_st* ASN1_item_d2i_ex(struct ASN1_VALUE_st** val, const unsigned char** in, long len, const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
struct ASN1_VALUE_st* ASN1_item_d2i(struct ASN1_VALUE_st** val, const unsigned char** in, long len, const struct ASN1_ITEM_st* it);
int ASN1_item_i2d(const struct ASN1_VALUE_st* val, unsigned char** out, const struct ASN1_ITEM_st* it);
int ASN1_item_ndef_i2d(const struct ASN1_VALUE_st* val, unsigned char** out, const struct ASN1_ITEM_st* it);
void ASN1_add_oid_module();
void ASN1_add_stable_module();
struct asn1_type_st* ASN1_generate_nconf(const char* str, struct conf_st* nconf);
struct asn1_type_st* ASN1_generate_v3(const char* str, struct v3_ext_ctx* cnf);
int ASN1_str2mask(const char* str, unsigned long  int* pmask);
int ASN1_item_print(struct bio_st* out, const struct ASN1_VALUE_st* ifld, int indent, const struct ASN1_ITEM_st* it, const struct asn1_pctx_st* pctx);
struct asn1_pctx_st* ASN1_PCTX_new();
void ASN1_PCTX_free(struct asn1_pctx_st* p);
unsigned long  int ASN1_PCTX_get_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_nm_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_nm_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_cert_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_cert_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_oid_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_oid_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_str_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_str_flags(struct asn1_pctx_st* p, unsigned long  int flags);
struct asn1_sctx_st* ASN1_SCTX_new(int (*scan_cb)(struct asn1_sctx_st*));
void ASN1_SCTX_free(struct asn1_sctx_st* p);
const struct ASN1_ITEM_st* ASN1_SCTX_get_item(struct asn1_sctx_st* p);
const struct ASN1_TEMPLATE_st* ASN1_SCTX_get_template(struct asn1_sctx_st* p);
unsigned long  int ASN1_SCTX_get_flags(struct asn1_sctx_st* p);
void ASN1_SCTX_set_app_data(struct asn1_sctx_st* p, void* data);
void* ASN1_SCTX_get_app_data(struct asn1_sctx_st* p);
const struct bio_method_st* BIO_f_asn1();
struct bio_st* BIO_new_NDEF(struct bio_st* out, struct ASN1_VALUE_st* val, const struct ASN1_ITEM_st* it);
int i2d_ASN1_bio_stream(struct bio_st* out, struct ASN1_VALUE_st* val, struct bio_st* in, int flags, const struct ASN1_ITEM_st* it);
int PEM_write_bio_ASN1_stream(struct bio_st* out, struct ASN1_VALUE_st* val, struct bio_st* in, int flags, const char* hdr, const struct ASN1_ITEM_st* it);
int SMIME_write_ASN1(struct bio_st* bio, struct ASN1_VALUE_st* val, struct bio_st* data, int flags, int ctype_nid, int econt_nid, struct stack_st_X509_ALGOR* mdalgs, const struct ASN1_ITEM_st* it);
int SMIME_write_ASN1_ex(struct bio_st* bio, struct ASN1_VALUE_st* val, struct bio_st* data, int flags, int ctype_nid, int econt_nid, struct stack_st_X509_ALGOR* mdalgs, const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
struct ASN1_VALUE_st* SMIME_read_ASN1(struct bio_st* bio, struct bio_st** bcont, const struct ASN1_ITEM_st* it);
struct ASN1_VALUE_st* SMIME_read_ASN1_ex(struct bio_st* bio, int flags, struct bio_st** bcont, const struct ASN1_ITEM_st* it, struct ASN1_VALUE_st** x, struct ossl_lib_ctx_st* libctx, const char* propq);
int SMIME_crlf_copy(struct bio_st* in, struct bio_st* out, int flags);
int SMIME_text(struct bio_st* in, struct bio_st* out);
const struct ASN1_ITEM_st* ASN1_ITEM_lookup(const char* name);
const struct ASN1_ITEM_st* ASN1_ITEM_get(unsigned long  int i);
int OBJ_NAME_init();
int OBJ_NAME_new_index(unsigned long  int (*hash_func)(const char*), int (*cmp_func)(const char*,const char*), void (*free_func)(const char*,int,const char*));
const char* OBJ_NAME_get(const char* name, int type);
int OBJ_NAME_add(const char* name, int type, const char* data);
int OBJ_NAME_remove(const char* name, int type);
void OBJ_NAME_cleanup(int type);
void OBJ_NAME_do_all(int type, void (*fn)(const struct obj_name_st*,void*), void* arg);
void OBJ_NAME_do_all_sorted(int type, void (*fn)(const struct obj_name_st*,void*), void* arg);
struct asn1_object_st* OBJ_dup(const struct asn1_object_st* a);
struct asn1_object_st* OBJ_nid2obj(int n);
const char* OBJ_nid2ln(int n);
const char* OBJ_nid2sn(int n);
int OBJ_obj2nid(const struct asn1_object_st* o);
struct asn1_object_st* OBJ_txt2obj(const char* s, int no_name);
int OBJ_obj2txt(char* buf, int buf_len, const struct asn1_object_st* a, int no_name);
int OBJ_txt2nid(const char* s);
int OBJ_ln2nid(const char* s);
int OBJ_sn2nid(const char* s);
int OBJ_cmp(const struct asn1_object_st* a, const struct asn1_object_st* b);
const void* OBJ_bsearch_(const void* key, const void* base, int num, int size, int (*cmp)(const void*,const void*));
const void* OBJ_bsearch_ex_(const void* key, const void* base, int num, int size, int (*cmp)(const void*,const void*), int flags);
int OBJ_new_nid(int num);
int OBJ_add_object(const struct asn1_object_st* obj);
int OBJ_create(const char* oid, const char* sn, const char* ln);
int OBJ_create_objects(struct bio_st* in);
unsigned long  int OBJ_length(const struct asn1_object_st* obj);
const unsigned char* OBJ_get0_data(const struct asn1_object_st* obj);
int OBJ_find_sigid_algs(int signid, int* pdig_nid, int* ppkey_nid);
int OBJ_find_sigid_by_algs(int* psignid, int dig_nid, int pkey_nid);
int OBJ_add_sigid(int signid, int dig_id, int pkey_id);
void OBJ_sigid_free();
int EVP_set_default_properties(struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_default_properties_is_fips_enabled(struct ossl_lib_ctx_st* libctx);
int EVP_default_properties_enable_fips(struct ossl_lib_ctx_st* libctx, int enable);
struct evp_md_st* EVP_MD_meth_new(int md_type, int pkey_type);
struct evp_md_st* EVP_MD_meth_dup(const struct evp_md_st* md);
void EVP_MD_meth_free(struct evp_md_st* md);
int EVP_MD_meth_set_input_blocksize(struct evp_md_st* md, int blocksize);
int EVP_MD_meth_set_result_size(struct evp_md_st* md, int resultsize);
int EVP_MD_meth_set_app_datasize(struct evp_md_st* md, int datasize);
int EVP_MD_meth_set_flags(struct evp_md_st* md, unsigned long  int flags);
int EVP_MD_meth_set_init(struct evp_md_st* md, int (*init)(struct evp_md_ctx_st*));
int EVP_MD_meth_set_update(struct evp_md_st* md, int (*update)(struct evp_md_ctx_st*,const void*,unsigned long  int));
int EVP_MD_meth_set_final(struct evp_md_st* md, int (*final)(struct evp_md_ctx_st*,unsigned char*));
int EVP_MD_meth_set_copy(struct evp_md_st* md, int (*copy)(struct evp_md_ctx_st*,const struct evp_md_ctx_st*));
int EVP_MD_meth_set_cleanup(struct evp_md_st* md, int (*cleanup)(struct evp_md_ctx_st*));
int EVP_MD_meth_set_ctrl(struct evp_md_st* md, int (*ctrl)(struct evp_md_ctx_st*,int,int,void*));
int EVP_MD_meth_get_input_blocksize(const struct evp_md_st* md);
int EVP_MD_meth_get_result_size(const struct evp_md_st* md);
int EVP_MD_meth_get_app_datasize(const struct evp_md_st* md);
unsigned long  int EVP_MD_meth_get_flags(const struct evp_md_st* md);
int (*EVP_MD_meth_get_init(const struct evp_md_st* _function_pointer_result_var_name_a16))(struct evp_md_ctx_st*);
int (*EVP_MD_meth_get_update(const struct evp_md_st* _function_pointer_result_var_name_a17))(struct evp_md_ctx_st*,const void*,unsigned long  int);
int (*EVP_MD_meth_get_final(const struct evp_md_st* _function_pointer_result_var_name_a18))(struct evp_md_ctx_st*,unsigned char*);
int (*EVP_MD_meth_get_copy(const struct evp_md_st* _function_pointer_result_var_name_a19))(struct evp_md_ctx_st*,const struct evp_md_ctx_st*);
int (*EVP_MD_meth_get_cleanup(const struct evp_md_st* _function_pointer_result_var_name_a20))(struct evp_md_ctx_st*);
int (*EVP_MD_meth_get_ctrl(const struct evp_md_st* _function_pointer_result_var_name_a21))(struct evp_md_ctx_st*,int,int,void*);
struct evp_cipher_st* EVP_CIPHER_meth_new(int cipher_type, int block_size, int key_len);
struct evp_cipher_st* EVP_CIPHER_meth_dup(const struct evp_cipher_st* cipher);
void EVP_CIPHER_meth_free(struct evp_cipher_st* cipher);
int EVP_CIPHER_meth_set_iv_length(struct evp_cipher_st* cipher, int iv_len);
int EVP_CIPHER_meth_set_flags(struct evp_cipher_st* cipher, unsigned long  int flags);
int EVP_CIPHER_meth_set_impl_ctx_size(struct evp_cipher_st* cipher, int ctx_size);
int EVP_CIPHER_meth_set_init(struct evp_cipher_st* cipher, int (*init)(struct evp_cipher_ctx_st*,const unsigned char*,const unsigned char*,int));
int EVP_CIPHER_meth_set_do_cipher(struct evp_cipher_st* cipher, int (*do_cipher)(struct evp_cipher_ctx_st*,unsigned char*,const unsigned char*,unsigned long  int));
int EVP_CIPHER_meth_set_cleanup(struct evp_cipher_st* cipher, int (*cleanup)(struct evp_cipher_ctx_st*));
int EVP_CIPHER_meth_set_set_asn1_params(struct evp_cipher_st* cipher, int (*set_asn1_parameters)(struct evp_cipher_ctx_st*,struct asn1_type_st*));
int EVP_CIPHER_meth_set_get_asn1_params(struct evp_cipher_st* cipher, int (*get_asn1_parameters)(struct evp_cipher_ctx_st*,struct asn1_type_st*));
int EVP_CIPHER_meth_set_ctrl(struct evp_cipher_st* cipher, int (*ctrl)(struct evp_cipher_ctx_st*,int,int,void*));
int (*EVP_CIPHER_meth_get_init(const struct evp_cipher_st* _function_pointer_result_var_name_a22))(struct evp_cipher_ctx_st*,const unsigned char*,const unsigned char*,int);
int (*EVP_CIPHER_meth_get_do_cipher(const struct evp_cipher_st* _function_pointer_result_var_name_a23))(struct evp_cipher_ctx_st*,unsigned char*,const unsigned char*,unsigned long  int);
int (*EVP_CIPHER_meth_get_cleanup(const struct evp_cipher_st* _function_pointer_result_var_name_a24))(struct evp_cipher_ctx_st*);
int (*EVP_CIPHER_meth_get_set_asn1_params(const struct evp_cipher_st* _function_pointer_result_var_name_a25))(struct evp_cipher_ctx_st*,struct asn1_type_st*);
int (*EVP_CIPHER_meth_get_get_asn1_params(const struct evp_cipher_st* _function_pointer_result_var_name_a26))(struct evp_cipher_ctx_st*,struct asn1_type_st*);
int (*EVP_CIPHER_meth_get_ctrl(const struct evp_cipher_st* _function_pointer_result_var_name_a27))(struct evp_cipher_ctx_st*,int,int,void*);
int EVP_MD_get_type(const struct evp_md_st* md);
const char* EVP_MD_get0_name(const struct evp_md_st* md);
const char* EVP_MD_get0_description(const struct evp_md_st* md);
int EVP_MD_is_a(const struct evp_md_st* md, const char* name);
int EVP_MD_names_do_all(const struct evp_md_st* md, void (*fn)(const char*,void*), void* data);
const struct ossl_provider_st* EVP_MD_get0_provider(const struct evp_md_st* md);
int EVP_MD_get_pkey_type(const struct evp_md_st* md);
int EVP_MD_get_size(const struct evp_md_st* md);
int EVP_MD_get_block_size(const struct evp_md_st* md);
unsigned long  int EVP_MD_get_flags(const struct evp_md_st* md);
int EVP_MD_xof(const struct evp_md_st* md);
const struct evp_md_st* EVP_MD_CTX_get0_md(const struct evp_md_ctx_st* ctx);
struct evp_md_st* EVP_MD_CTX_get1_md(struct evp_md_ctx_st* ctx);
const struct evp_md_st* EVP_MD_CTX_md(const struct evp_md_ctx_st* ctx);
int (*EVP_MD_CTX_update_fn(struct evp_md_ctx_st* _function_pointer_result_var_name_a28))(struct evp_md_ctx_st*,const void*,unsigned long  int);
void EVP_MD_CTX_set_update_fn(struct evp_md_ctx_st* ctx, int (*update)(struct evp_md_ctx_st*,const void*,unsigned long  int));
int EVP_MD_CTX_get_size_ex(const struct evp_md_ctx_st* ctx);
struct evp_pkey_ctx_st* EVP_MD_CTX_get_pkey_ctx(const struct evp_md_ctx_st* ctx);
void EVP_MD_CTX_set_pkey_ctx(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st* pctx);
void* EVP_MD_CTX_get0_md_data(const struct evp_md_ctx_st* ctx);
int EVP_CIPHER_get_nid(const struct evp_cipher_st* cipher);
const char* EVP_CIPHER_get0_name(const struct evp_cipher_st* cipher);
const char* EVP_CIPHER_get0_description(const struct evp_cipher_st* cipher);
int EVP_CIPHER_is_a(const struct evp_cipher_st* cipher, const char* name);
int EVP_CIPHER_names_do_all(const struct evp_cipher_st* cipher, void (*fn)(const char*,void*), void* data);
const struct ossl_provider_st* EVP_CIPHER_get0_provider(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_block_size(const struct evp_cipher_st* cipher);
int EVP_CIPHER_impl_ctx_size(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_key_length(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_iv_length(const struct evp_cipher_st* cipher);
unsigned long  int EVP_CIPHER_get_flags(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_mode(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_type(const struct evp_cipher_st* cipher);
struct evp_cipher_st* EVP_CIPHER_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_CIPHER_up_ref(struct evp_cipher_st* cipher);
void EVP_CIPHER_free(struct evp_cipher_st* cipher);
const struct evp_cipher_st* EVP_CIPHER_CTX_get0_cipher(const struct evp_cipher_ctx_st* ctx);
struct evp_cipher_st* EVP_CIPHER_CTX_get1_cipher(struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_is_encrypting(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_nid(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_block_size(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_key_length(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_iv_length(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_tag_length(const struct evp_cipher_ctx_st* ctx);
const struct evp_cipher_st* EVP_CIPHER_CTX_cipher(const struct evp_cipher_ctx_st* ctx);
const unsigned char* EVP_CIPHER_CTX_iv(const struct evp_cipher_ctx_st* ctx);
const unsigned char* EVP_CIPHER_CTX_original_iv(const struct evp_cipher_ctx_st* ctx);
unsigned char* EVP_CIPHER_CTX_iv_noconst(struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_updated_iv(struct evp_cipher_ctx_st* ctx, void* buf, unsigned long  int len);
int EVP_CIPHER_CTX_get_original_iv(struct evp_cipher_ctx_st* ctx, void* buf, unsigned long  int len);
unsigned char* EVP_CIPHER_CTX_buf_noconst(struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_num(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_set_num(struct evp_cipher_ctx_st* ctx, int num);
struct evp_cipher_ctx_st* EVP_CIPHER_CTX_dup(const struct evp_cipher_ctx_st* in);
int EVP_CIPHER_CTX_copy(struct evp_cipher_ctx_st* out, const struct evp_cipher_ctx_st* in);
void* EVP_CIPHER_CTX_get_app_data(const struct evp_cipher_ctx_st* ctx);
void EVP_CIPHER_CTX_set_app_data(struct evp_cipher_ctx_st* ctx, void* data);
void* EVP_CIPHER_CTX_get_cipher_data(const struct evp_cipher_ctx_st* ctx);
void* EVP_CIPHER_CTX_set_cipher_data(struct evp_cipher_ctx_st* ctx, void* cipher_data);
int EVP_Cipher(struct evp_cipher_ctx_st* c, unsigned char* out, const unsigned char* in, unsigned int inl);
int EVP_MD_get_params(const struct evp_md_st* digest, struct ossl_param_st params[]);
int EVP_MD_CTX_set_params(struct evp_md_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_MD_CTX_get_params(struct evp_md_ctx_st* ctx, struct ossl_param_st params[]);
const struct ossl_param_st* EVP_MD_gettable_params(const struct evp_md_st* digest);
const struct ossl_param_st* EVP_MD_settable_ctx_params(const struct evp_md_st* md);
const struct ossl_param_st* EVP_MD_gettable_ctx_params(const struct evp_md_st* md);
const struct ossl_param_st* EVP_MD_CTX_settable_params(struct evp_md_ctx_st* ctx);
const struct ossl_param_st* EVP_MD_CTX_gettable_params(struct evp_md_ctx_st* ctx);
int EVP_MD_CTX_ctrl(struct evp_md_ctx_st* ctx, int cmd, int p1, void* p2);
struct evp_md_ctx_st* EVP_MD_CTX_new();
int EVP_MD_CTX_reset(struct evp_md_ctx_st* ctx);
void EVP_MD_CTX_free(struct evp_md_ctx_st* ctx);
struct evp_md_ctx_st* EVP_MD_CTX_dup(const struct evp_md_ctx_st* in);
int EVP_MD_CTX_copy_ex(struct evp_md_ctx_st* out, const struct evp_md_ctx_st* in);
void EVP_MD_CTX_set_flags(struct evp_md_ctx_st* ctx, int flags);
void EVP_MD_CTX_clear_flags(struct evp_md_ctx_st* ctx, int flags);
int EVP_MD_CTX_test_flags(const struct evp_md_ctx_st* ctx, int flags);
int EVP_DigestInit_ex2(struct evp_md_ctx_st* ctx, const struct evp_md_st* type, const struct ossl_param_st params[]);
int EVP_DigestInit_ex(struct evp_md_ctx_st* ctx, const struct evp_md_st* type, struct engine_st* impl);
int EVP_DigestUpdate(struct evp_md_ctx_st* ctx, const void* d, unsigned long  int cnt);
int EVP_DigestFinal_ex(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s);
int EVP_Digest(const void* data, unsigned long  int count, unsigned char* md, unsigned int* size, const struct evp_md_st* type, struct engine_st* impl);
int EVP_Q_digest(struct ossl_lib_ctx_st* libctx, const char* name, const char* propq, const void* data, unsigned long  int datalen, unsigned char* md, unsigned long  int* mdlen);
int EVP_MD_CTX_copy(struct evp_md_ctx_st* out, const struct evp_md_ctx_st* in);
int EVP_DigestInit(struct evp_md_ctx_st* ctx, const struct evp_md_st* type);
int EVP_DigestFinal(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s);
int EVP_DigestFinalXOF(struct evp_md_ctx_st* ctx, unsigned char* out, unsigned long  int outlen);
int EVP_DigestSqueeze(struct evp_md_ctx_st* ctx, unsigned char* out, unsigned long  int outlen);
struct evp_md_st* EVP_MD_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_MD_up_ref(struct evp_md_st* md);
void EVP_MD_free(struct evp_md_st* md);
int EVP_read_pw_string(char* buf, int length, const char* prompt, int verify);
int EVP_read_pw_string_min(char* buf, int minlen, int maxlen, const char* prompt, int verify);
void EVP_set_pw_prompt(const char* prompt);
char* EVP_get_pw_prompt();
int EVP_BytesToKey(const struct evp_cipher_st* type, const struct evp_md_st* md, const unsigned char* salt, const unsigned char* data, int datal, int count, unsigned char* key, unsigned char* iv);
void EVP_CIPHER_CTX_set_flags(struct evp_cipher_ctx_st* ctx, int flags);
void EVP_CIPHER_CTX_clear_flags(struct evp_cipher_ctx_st* ctx, int flags);
int EVP_CIPHER_CTX_test_flags(const struct evp_cipher_ctx_st* ctx, int flags);
int EVP_EncryptInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv);
int EVP_EncryptInit_ex(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, struct engine_st* impl, const unsigned char* key, const unsigned char* iv);
int EVP_EncryptInit_ex2(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, const struct ossl_param_st params[]);
int EVP_EncryptUpdate(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_EncryptFinal_ex(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
int EVP_EncryptFinal(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
int EVP_DecryptInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv);
int EVP_DecryptInit_ex(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, struct engine_st* impl, const unsigned char* key, const unsigned char* iv);
int EVP_DecryptInit_ex2(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, const struct ossl_param_st params[]);
int EVP_DecryptUpdate(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_DecryptFinal(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_DecryptFinal_ex(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_CipherInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, int enc);
int EVP_CipherInit_ex(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, struct engine_st* impl, const unsigned char* key, const unsigned char* iv, int enc);
int EVP_CipherInit_ex2(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, int enc, const struct ossl_param_st params[]);
int EVP_CipherUpdate(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_CipherFinal(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_CipherFinal_ex(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_SignFinal(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s, struct evp_pkey_st* pkey);
int EVP_SignFinal_ex(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s, struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_DigestSign(struct evp_md_ctx_st* ctx, unsigned char* sigret, unsigned long  int* siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_VerifyFinal(struct evp_md_ctx_st* ctx, const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st* pkey);
int EVP_VerifyFinal_ex(struct evp_md_ctx_st* ctx, const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_DigestVerify(struct evp_md_ctx_st* ctx, const unsigned char* sigret, unsigned long  int siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_DigestSignInit_ex(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const char* mdname, struct ossl_lib_ctx_st* libctx, const char* props, struct evp_pkey_st* pkey, const struct ossl_param_st params[]);
int EVP_DigestSignInit(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const struct evp_md_st* type, struct engine_st* e, struct evp_pkey_st* pkey);
int EVP_DigestSignUpdate(struct evp_md_ctx_st* ctx, const void* data, unsigned long  int dsize);
int EVP_DigestSignFinal(struct evp_md_ctx_st* ctx, unsigned char* sigret, unsigned long  int* siglen);
int EVP_DigestVerifyInit_ex(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const char* mdname, struct ossl_lib_ctx_st* libctx, const char* props, struct evp_pkey_st* pkey, const struct ossl_param_st params[]);
int EVP_DigestVerifyInit(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const struct evp_md_st* type, struct engine_st* e, struct evp_pkey_st* pkey);
int EVP_DigestVerifyUpdate(struct evp_md_ctx_st* ctx, const void* data, unsigned long  int dsize);
int EVP_DigestVerifyFinal(struct evp_md_ctx_st* ctx, const unsigned char* sig, unsigned long  int siglen);
int EVP_OpenInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* type, const unsigned char* ek, int ekl, const unsigned char* iv, struct evp_pkey_st* priv);
int EVP_OpenFinal(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
int EVP_SealInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* type, unsigned char** ek, int* ekl, unsigned char* iv, struct evp_pkey_st** pubk, int npubk);
int EVP_SealFinal(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
struct evp_Encode_Ctx_st* EVP_ENCODE_CTX_new();
void EVP_ENCODE_CTX_free(struct evp_Encode_Ctx_st* ctx);
int EVP_ENCODE_CTX_copy(struct evp_Encode_Ctx_st* dctx, const struct evp_Encode_Ctx_st* sctx);
int EVP_ENCODE_CTX_num(struct evp_Encode_Ctx_st* ctx);
void EVP_EncodeInit(struct evp_Encode_Ctx_st* ctx);
int EVP_EncodeUpdate(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
void EVP_EncodeFinal(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl);
int EVP_EncodeBlock(unsigned char* t, const unsigned char* f, int n);
void EVP_DecodeInit(struct evp_Encode_Ctx_st* ctx);
int EVP_DecodeUpdate(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_DecodeFinal(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl);
int EVP_DecodeBlock(unsigned char* t, const unsigned char* f, int n);
struct evp_cipher_ctx_st* EVP_CIPHER_CTX_new();
int EVP_CIPHER_CTX_reset(struct evp_cipher_ctx_st* c);
void EVP_CIPHER_CTX_free(struct evp_cipher_ctx_st* c);
int EVP_CIPHER_CTX_set_key_length(struct evp_cipher_ctx_st* x, int keylen);
int EVP_CIPHER_CTX_set_padding(struct evp_cipher_ctx_st* c, int pad);
int EVP_CIPHER_CTX_ctrl(struct evp_cipher_ctx_st* ctx, int type, int arg, void* ptr);
int EVP_CIPHER_CTX_rand_key(struct evp_cipher_ctx_st* ctx, unsigned char* key);
int EVP_CIPHER_get_params(struct evp_cipher_st* cipher, struct ossl_param_st params[]);
int EVP_CIPHER_CTX_set_params(struct evp_cipher_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_CIPHER_CTX_get_params(struct evp_cipher_ctx_st* ctx, struct ossl_param_st params[]);
const struct ossl_param_st* EVP_CIPHER_gettable_params(const struct evp_cipher_st* cipher);
const struct ossl_param_st* EVP_CIPHER_settable_ctx_params(const struct evp_cipher_st* cipher);
const struct ossl_param_st* EVP_CIPHER_gettable_ctx_params(const struct evp_cipher_st* cipher);
const struct ossl_param_st* EVP_CIPHER_CTX_settable_params(struct evp_cipher_ctx_st* ctx);
const struct ossl_param_st* EVP_CIPHER_CTX_gettable_params(struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_set_algor_params(struct evp_cipher_ctx_st* ctx, const struct X509_algor_st* alg);
int EVP_CIPHER_CTX_get_algor_params(struct evp_cipher_ctx_st* ctx, struct X509_algor_st* alg);
int EVP_CIPHER_CTX_get_algor(struct evp_cipher_ctx_st* ctx, struct X509_algor_st** alg);
const struct bio_method_st* BIO_f_md();
const struct bio_method_st* BIO_f_base64();
const struct bio_method_st* BIO_f_cipher();
const struct bio_method_st* BIO_f_reliable();
int BIO_set_cipher(struct bio_st* b, const struct evp_cipher_st* c, const unsigned char* k, const unsigned char* i, int enc);
const struct evp_md_st* EVP_md_null();
const struct evp_md_st* EVP_md4();
const struct evp_md_st* EVP_md5();
const struct evp_md_st* EVP_md5_sha1();
const struct evp_md_st* EVP_blake2b512();
const struct evp_md_st* EVP_blake2s256();
const struct evp_md_st* EVP_sha1();
const struct evp_md_st* EVP_sha224();
const struct evp_md_st* EVP_sha256();
const struct evp_md_st* EVP_sha384();
const struct evp_md_st* EVP_sha512();
const struct evp_md_st* EVP_sha512_224();
const struct evp_md_st* EVP_sha512_256();
const struct evp_md_st* EVP_sha3_224();
const struct evp_md_st* EVP_sha3_256();
const struct evp_md_st* EVP_sha3_384();
const struct evp_md_st* EVP_sha3_512();
const struct evp_md_st* EVP_shake128();
const struct evp_md_st* EVP_shake256();
const struct evp_md_st* EVP_mdc2();
const struct evp_md_st* EVP_ripemd160();
const struct evp_md_st* EVP_whirlpool();
const struct evp_md_st* EVP_sm3();
const struct evp_cipher_st* EVP_enc_null();
const struct evp_cipher_st* EVP_des_ecb();
const struct evp_cipher_st* EVP_des_ede();
const struct evp_cipher_st* EVP_des_ede3();
const struct evp_cipher_st* EVP_des_ede_ecb();
const struct evp_cipher_st* EVP_des_ede3_ecb();
const struct evp_cipher_st* EVP_des_cfb64();
const struct evp_cipher_st* EVP_des_cfb1();
const struct evp_cipher_st* EVP_des_cfb8();
const struct evp_cipher_st* EVP_des_ede_cfb64();
const struct evp_cipher_st* EVP_des_ede3_cfb64();
const struct evp_cipher_st* EVP_des_ede3_cfb1();
const struct evp_cipher_st* EVP_des_ede3_cfb8();
const struct evp_cipher_st* EVP_des_ofb();
const struct evp_cipher_st* EVP_des_ede_ofb();
const struct evp_cipher_st* EVP_des_ede3_ofb();
const struct evp_cipher_st* EVP_des_cbc();
const struct evp_cipher_st* EVP_des_ede_cbc();
const struct evp_cipher_st* EVP_des_ede3_cbc();
const struct evp_cipher_st* EVP_desx_cbc();
const struct evp_cipher_st* EVP_des_ede3_wrap();
const struct evp_cipher_st* EVP_rc4();
const struct evp_cipher_st* EVP_rc4_40();
const struct evp_cipher_st* EVP_rc4_hmac_md5();
const struct evp_cipher_st* EVP_idea_ecb();
const struct evp_cipher_st* EVP_idea_cfb64();
const struct evp_cipher_st* EVP_idea_ofb();
const struct evp_cipher_st* EVP_idea_cbc();
const struct evp_cipher_st* EVP_rc2_ecb();
const struct evp_cipher_st* EVP_rc2_cbc();
const struct evp_cipher_st* EVP_rc2_40_cbc();
const struct evp_cipher_st* EVP_rc2_64_cbc();
const struct evp_cipher_st* EVP_rc2_cfb64();
const struct evp_cipher_st* EVP_rc2_ofb();
const struct evp_cipher_st* EVP_bf_ecb();
const struct evp_cipher_st* EVP_bf_cbc();
const struct evp_cipher_st* EVP_bf_cfb64();
const struct evp_cipher_st* EVP_bf_ofb();
const struct evp_cipher_st* EVP_cast5_ecb();
const struct evp_cipher_st* EVP_cast5_cbc();
const struct evp_cipher_st* EVP_cast5_cfb64();
const struct evp_cipher_st* EVP_cast5_ofb();
const struct evp_cipher_st* EVP_aes_128_ecb();
const struct evp_cipher_st* EVP_aes_128_cbc();
const struct evp_cipher_st* EVP_aes_128_cfb1();
const struct evp_cipher_st* EVP_aes_128_cfb8();
const struct evp_cipher_st* EVP_aes_128_cfb128();
const struct evp_cipher_st* EVP_aes_128_ofb();
const struct evp_cipher_st* EVP_aes_128_ctr();
const struct evp_cipher_st* EVP_aes_128_ccm();
const struct evp_cipher_st* EVP_aes_128_gcm();
const struct evp_cipher_st* EVP_aes_128_xts();
const struct evp_cipher_st* EVP_aes_128_wrap();
const struct evp_cipher_st* EVP_aes_128_wrap_pad();
const struct evp_cipher_st* EVP_aes_128_ocb();
const struct evp_cipher_st* EVP_aes_192_ecb();
const struct evp_cipher_st* EVP_aes_192_cbc();
const struct evp_cipher_st* EVP_aes_192_cfb1();
const struct evp_cipher_st* EVP_aes_192_cfb8();
const struct evp_cipher_st* EVP_aes_192_cfb128();
const struct evp_cipher_st* EVP_aes_192_ofb();
const struct evp_cipher_st* EVP_aes_192_ctr();
const struct evp_cipher_st* EVP_aes_192_ccm();
const struct evp_cipher_st* EVP_aes_192_gcm();
const struct evp_cipher_st* EVP_aes_192_wrap();
const struct evp_cipher_st* EVP_aes_192_wrap_pad();
const struct evp_cipher_st* EVP_aes_192_ocb();
const struct evp_cipher_st* EVP_aes_256_ecb();
const struct evp_cipher_st* EVP_aes_256_cbc();
const struct evp_cipher_st* EVP_aes_256_cfb1();
const struct evp_cipher_st* EVP_aes_256_cfb8();
const struct evp_cipher_st* EVP_aes_256_cfb128();
const struct evp_cipher_st* EVP_aes_256_ofb();
const struct evp_cipher_st* EVP_aes_256_ctr();
const struct evp_cipher_st* EVP_aes_256_ccm();
const struct evp_cipher_st* EVP_aes_256_gcm();
const struct evp_cipher_st* EVP_aes_256_xts();
const struct evp_cipher_st* EVP_aes_256_wrap();
const struct evp_cipher_st* EVP_aes_256_wrap_pad();
const struct evp_cipher_st* EVP_aes_256_ocb();
const struct evp_cipher_st* EVP_aes_128_cbc_hmac_sha1();
const struct evp_cipher_st* EVP_aes_256_cbc_hmac_sha1();
const struct evp_cipher_st* EVP_aes_128_cbc_hmac_sha256();
const struct evp_cipher_st* EVP_aes_256_cbc_hmac_sha256();
const struct evp_cipher_st* EVP_aria_128_ecb();
const struct evp_cipher_st* EVP_aria_128_cbc();
const struct evp_cipher_st* EVP_aria_128_cfb1();
const struct evp_cipher_st* EVP_aria_128_cfb8();
const struct evp_cipher_st* EVP_aria_128_cfb128();
const struct evp_cipher_st* EVP_aria_128_ctr();
const struct evp_cipher_st* EVP_aria_128_ofb();
const struct evp_cipher_st* EVP_aria_128_gcm();
const struct evp_cipher_st* EVP_aria_128_ccm();
const struct evp_cipher_st* EVP_aria_192_ecb();
const struct evp_cipher_st* EVP_aria_192_cbc();
const struct evp_cipher_st* EVP_aria_192_cfb1();
const struct evp_cipher_st* EVP_aria_192_cfb8();
const struct evp_cipher_st* EVP_aria_192_cfb128();
const struct evp_cipher_st* EVP_aria_192_ctr();
const struct evp_cipher_st* EVP_aria_192_ofb();
const struct evp_cipher_st* EVP_aria_192_gcm();
const struct evp_cipher_st* EVP_aria_192_ccm();
const struct evp_cipher_st* EVP_aria_256_ecb();
const struct evp_cipher_st* EVP_aria_256_cbc();
const struct evp_cipher_st* EVP_aria_256_cfb1();
const struct evp_cipher_st* EVP_aria_256_cfb8();
const struct evp_cipher_st* EVP_aria_256_cfb128();
const struct evp_cipher_st* EVP_aria_256_ctr();
const struct evp_cipher_st* EVP_aria_256_ofb();
const struct evp_cipher_st* EVP_aria_256_gcm();
const struct evp_cipher_st* EVP_aria_256_ccm();
const struct evp_cipher_st* EVP_camellia_128_ecb();
const struct evp_cipher_st* EVP_camellia_128_cbc();
const struct evp_cipher_st* EVP_camellia_128_cfb1();
const struct evp_cipher_st* EVP_camellia_128_cfb8();
const struct evp_cipher_st* EVP_camellia_128_cfb128();
const struct evp_cipher_st* EVP_camellia_128_ofb();
const struct evp_cipher_st* EVP_camellia_128_ctr();
const struct evp_cipher_st* EVP_camellia_192_ecb();
const struct evp_cipher_st* EVP_camellia_192_cbc();
const struct evp_cipher_st* EVP_camellia_192_cfb1();
const struct evp_cipher_st* EVP_camellia_192_cfb8();
const struct evp_cipher_st* EVP_camellia_192_cfb128();
const struct evp_cipher_st* EVP_camellia_192_ofb();
const struct evp_cipher_st* EVP_camellia_192_ctr();
const struct evp_cipher_st* EVP_camellia_256_ecb();
const struct evp_cipher_st* EVP_camellia_256_cbc();
const struct evp_cipher_st* EVP_camellia_256_cfb1();
const struct evp_cipher_st* EVP_camellia_256_cfb8();
const struct evp_cipher_st* EVP_camellia_256_cfb128();
const struct evp_cipher_st* EVP_camellia_256_ofb();
const struct evp_cipher_st* EVP_camellia_256_ctr();
const struct evp_cipher_st* EVP_chacha20();
const struct evp_cipher_st* EVP_chacha20_poly1305();
const struct evp_cipher_st* EVP_seed_ecb();
const struct evp_cipher_st* EVP_seed_cbc();
const struct evp_cipher_st* EVP_seed_cfb128();
const struct evp_cipher_st* EVP_seed_ofb();
const struct evp_cipher_st* EVP_sm4_ecb();
const struct evp_cipher_st* EVP_sm4_cbc();
const struct evp_cipher_st* EVP_sm4_cfb128();
const struct evp_cipher_st* EVP_sm4_ofb();
const struct evp_cipher_st* EVP_sm4_ctr();
int EVP_add_cipher(const struct evp_cipher_st* cipher);
int EVP_add_digest(const struct evp_md_st* digest);
const struct evp_cipher_st* EVP_get_cipherbyname(const char* name);
const struct evp_md_st* EVP_get_digestbyname(const char* name);
void EVP_CIPHER_do_all(void (*fn)(const struct evp_cipher_st*,const char*,const char*,void*), void* arg);
void EVP_CIPHER_do_all_sorted(void (*fn)(const struct evp_cipher_st*,const char*,const char*,void*), void* arg);
void EVP_CIPHER_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_cipher_st*,void*), void* arg);
void EVP_MD_do_all(void (*fn)(const struct evp_md_st*,const char*,const char*,void*), void* arg);
void EVP_MD_do_all_sorted(void (*fn)(const struct evp_md_st*,const char*,const char*,void*), void* arg);
void EVP_MD_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_md_st*,void*), void* arg);
struct evp_mac_st* EVP_MAC_fetch(struct ossl_lib_ctx_st* libctx, const char* algorithm, const char* properties);
int EVP_MAC_up_ref(struct evp_mac_st* mac);
void EVP_MAC_free(struct evp_mac_st* mac);
const char* EVP_MAC_get0_name(const struct evp_mac_st* mac);
const char* EVP_MAC_get0_description(const struct evp_mac_st* mac);
int EVP_MAC_is_a(const struct evp_mac_st* mac, const char* name);
const struct ossl_provider_st* EVP_MAC_get0_provider(const struct evp_mac_st* mac);
int EVP_MAC_get_params(struct evp_mac_st* mac, struct ossl_param_st params[]);
struct evp_mac_ctx_st* EVP_MAC_CTX_new(struct evp_mac_st* mac);
void EVP_MAC_CTX_free(struct evp_mac_ctx_st* ctx);
struct evp_mac_ctx_st* EVP_MAC_CTX_dup(const struct evp_mac_ctx_st* src);
struct evp_mac_st* EVP_MAC_CTX_get0_mac(struct evp_mac_ctx_st* ctx);
int EVP_MAC_CTX_get_params(struct evp_mac_ctx_st* ctx, struct ossl_param_st params[]);
int EVP_MAC_CTX_set_params(struct evp_mac_ctx_st* ctx, const struct ossl_param_st params[]);
unsigned long  int EVP_MAC_CTX_get_mac_size(struct evp_mac_ctx_st* ctx);
unsigned long  int EVP_MAC_CTX_get_block_size(struct evp_mac_ctx_st* ctx);
unsigned char* EVP_Q_mac(struct ossl_lib_ctx_st* libctx, const char* name, const char* propq, const char* subalg, const struct ossl_param_st* params, const void* key, unsigned long  int keylen, const unsigned char* data, unsigned long  int datalen, unsigned char* out, unsigned long  int outsize, unsigned long  int* outlen);
int EVP_MAC_init(struct evp_mac_ctx_st* ctx, const unsigned char* key, unsigned long  int keylen, const struct ossl_param_st params[]);
int EVP_MAC_update(struct evp_mac_ctx_st* ctx, const unsigned char* data, unsigned long  int datalen);
int EVP_MAC_final(struct evp_mac_ctx_st* ctx, unsigned char* out, unsigned long  int* outl, unsigned long  int outsize);
int EVP_MAC_finalXOF(struct evp_mac_ctx_st* ctx, unsigned char* out, unsigned long  int outsize);
const struct ossl_param_st* EVP_MAC_gettable_params(const struct evp_mac_st* mac);
const struct ossl_param_st* EVP_MAC_gettable_ctx_params(const struct evp_mac_st* mac);
const struct ossl_param_st* EVP_MAC_settable_ctx_params(const struct evp_mac_st* mac);
const struct ossl_param_st* EVP_MAC_CTX_gettable_params(struct evp_mac_ctx_st* ctx);
const struct ossl_param_st* EVP_MAC_CTX_settable_params(struct evp_mac_ctx_st* ctx);
void EVP_MAC_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_mac_st*,void*), void* arg);
int EVP_MAC_names_do_all(const struct evp_mac_st* mac, void (*fn)(const char*,void*), void* data);
struct evp_rand_st* EVP_RAND_fetch(struct ossl_lib_ctx_st* libctx, const char* algorithm, const char* properties);
int EVP_RAND_up_ref(struct evp_rand_st* rand);
void EVP_RAND_free(struct evp_rand_st* rand);
const char* EVP_RAND_get0_name(const struct evp_rand_st* rand);
const char* EVP_RAND_get0_description(const struct evp_rand_st* md);
int EVP_RAND_is_a(const struct evp_rand_st* rand, const char* name);
const struct ossl_provider_st* EVP_RAND_get0_provider(const struct evp_rand_st* rand);
int EVP_RAND_get_params(struct evp_rand_st* rand, struct ossl_param_st params[]);
struct evp_rand_ctx_st* EVP_RAND_CTX_new(struct evp_rand_st* rand, struct evp_rand_ctx_st* parent);
int EVP_RAND_CTX_up_ref(struct evp_rand_ctx_st* ctx);
void EVP_RAND_CTX_free(struct evp_rand_ctx_st* ctx);
struct evp_rand_st* EVP_RAND_CTX_get0_rand(struct evp_rand_ctx_st* ctx);
int EVP_RAND_CTX_get_params(struct evp_rand_ctx_st* ctx, struct ossl_param_st params[]);
int EVP_RAND_CTX_set_params(struct evp_rand_ctx_st* ctx, const struct ossl_param_st params[]);
const struct ossl_param_st* EVP_RAND_gettable_params(const struct evp_rand_st* rand);
const struct ossl_param_st* EVP_RAND_gettable_ctx_params(const struct evp_rand_st* rand);
const struct ossl_param_st* EVP_RAND_settable_ctx_params(const struct evp_rand_st* rand);
const struct ossl_param_st* EVP_RAND_CTX_gettable_params(struct evp_rand_ctx_st* ctx);
const struct ossl_param_st* EVP_RAND_CTX_settable_params(struct evp_rand_ctx_st* ctx);
void EVP_RAND_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_rand_st*,void*), void* arg);
int EVP_RAND_names_do_all(const struct evp_rand_st* rand, void (*fn)(const char*,void*), void* data);
int EVP_RAND_instantiate(struct evp_rand_ctx_st* ctx, unsigned int strength, int prediction_resistance, const unsigned char* pstr, unsigned long  int pstr_len, const struct ossl_param_st params[]);
int EVP_RAND_uninstantiate(struct evp_rand_ctx_st* ctx);
int EVP_RAND_generate(struct evp_rand_ctx_st* ctx, unsigned char* out, unsigned long  int outlen, unsigned int strength, int prediction_resistance, const unsigned char* addin, unsigned long  int addin_len);
int EVP_RAND_reseed(struct evp_rand_ctx_st* ctx, int prediction_resistance, const unsigned char* ent, unsigned long  int ent_len, const unsigned char* addin, unsigned long  int addin_len);
int EVP_RAND_nonce(struct evp_rand_ctx_st* ctx, unsigned char* out, unsigned long  int outlen);
int EVP_RAND_enable_locking(struct evp_rand_ctx_st* ctx);
int EVP_RAND_verify_zeroization(struct evp_rand_ctx_st* ctx);
unsigned int EVP_RAND_get_strength(struct evp_rand_ctx_st* ctx);
int EVP_RAND_get_state(struct evp_rand_ctx_st* ctx);
int EVP_PKEY_decrypt_old(unsigned char* dec_key, const unsigned char* enc_key, int enc_key_len, struct evp_pkey_st* private_key);
int EVP_PKEY_encrypt_old(unsigned char* enc_key, const unsigned char* key, int key_len, struct evp_pkey_st* pub_key);
int EVP_PKEY_is_a(const struct evp_pkey_st* pkey, const char* name);
int EVP_PKEY_type_names_do_all(const struct evp_pkey_st* pkey, void (*fn)(const char*,void*), void* data);
int EVP_PKEY_type(int type);
int EVP_PKEY_get_id(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_base_id(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_bits(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_security_bits(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_size(const struct evp_pkey_st* pkey);
int EVP_PKEY_can_sign(const struct evp_pkey_st* pkey);
int EVP_PKEY_set_type(struct evp_pkey_st* pkey, int type);
int EVP_PKEY_set_type_str(struct evp_pkey_st* pkey, const char* str, int len);
int EVP_PKEY_set_type_by_keymgmt(struct evp_pkey_st* pkey, struct evp_keymgmt_st* keymgmt);
int EVP_PKEY_set1_engine(struct evp_pkey_st* pkey, struct engine_st* e);
struct engine_st* EVP_PKEY_get0_engine(const struct evp_pkey_st* pkey);
int EVP_PKEY_assign(struct evp_pkey_st* pkey, int type, void* key);
void* EVP_PKEY_get0(const struct evp_pkey_st* pkey);
const unsigned char* EVP_PKEY_get0_hmac(const struct evp_pkey_st* pkey, unsigned long  int* len);
const unsigned char* EVP_PKEY_get0_poly1305(const struct evp_pkey_st* pkey, unsigned long  int* len);
const unsigned char* EVP_PKEY_get0_siphash(const struct evp_pkey_st* pkey, unsigned long  int* len);
int EVP_PKEY_set1_RSA(struct evp_pkey_st* pkey, struct rsa_st* key);
const struct rsa_st* EVP_PKEY_get0_RSA(const struct evp_pkey_st* pkey);
struct rsa_st* EVP_PKEY_get1_RSA(struct evp_pkey_st* pkey);
int EVP_PKEY_set1_DSA(struct evp_pkey_st* pkey, struct dsa_st* key);
const struct dsa_st* EVP_PKEY_get0_DSA(const struct evp_pkey_st* pkey);
struct dsa_st* EVP_PKEY_get1_DSA(struct evp_pkey_st* pkey);
int EVP_PKEY_set1_DH(struct evp_pkey_st* pkey, struct dh_st* key);
const struct dh_st* EVP_PKEY_get0_DH(const struct evp_pkey_st* pkey);
struct dh_st* EVP_PKEY_get1_DH(struct evp_pkey_st* pkey);
int EVP_PKEY_set1_EC_KEY(struct evp_pkey_st* pkey, struct ec_key_st* key);
const struct ec_key_st* EVP_PKEY_get0_EC_KEY(const struct evp_pkey_st* pkey);
struct ec_key_st* EVP_PKEY_get1_EC_KEY(struct evp_pkey_st* pkey);
struct evp_pkey_st* EVP_PKEY_new();
int EVP_PKEY_up_ref(struct evp_pkey_st* pkey);
struct evp_pkey_st* EVP_PKEY_dup(struct evp_pkey_st* pkey);
void EVP_PKEY_free(struct evp_pkey_st* pkey);
const char* EVP_PKEY_get0_description(const struct evp_pkey_st* pkey);
const struct ossl_provider_st* EVP_PKEY_get0_provider(const struct evp_pkey_st* key);
struct evp_pkey_st* d2i_PublicKey(int type, struct evp_pkey_st** a, const unsigned char** pp, long length);
int i2d_PublicKey(const struct evp_pkey_st* a, unsigned char** pp);
struct evp_pkey_st* d2i_PrivateKey_ex(int type, struct evp_pkey_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PrivateKey(int type, struct evp_pkey_st** a, const unsigned char** pp, long length);
struct evp_pkey_st* d2i_AutoPrivateKey_ex(struct evp_pkey_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_AutoPrivateKey(struct evp_pkey_st** a, const unsigned char** pp, long length);
int i2d_PrivateKey(const struct evp_pkey_st* a, unsigned char** pp);
int i2d_KeyParams(const struct evp_pkey_st* a, unsigned char** pp);
struct evp_pkey_st* d2i_KeyParams(int type, struct evp_pkey_st** a, const unsigned char** pp, long length);
int i2d_KeyParams_bio(struct bio_st* bp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_KeyParams_bio(int type, struct evp_pkey_st** a, struct bio_st* in);
int EVP_PKEY_copy_parameters(struct evp_pkey_st* to, const struct evp_pkey_st* from);
int EVP_PKEY_missing_parameters(const struct evp_pkey_st* pkey);
int EVP_PKEY_save_parameters(struct evp_pkey_st* pkey, int mode);
int EVP_PKEY_parameters_eq(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_eq(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_cmp_parameters(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_cmp(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_print_public(struct bio_st* out, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_private(struct bio_st* out, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_params(struct bio_st* out, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_public_fp(struct __sFILE* fp, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_private_fp(struct __sFILE* fp, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_params_fp(struct __sFILE* fp, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_get_default_digest_nid(struct evp_pkey_st* pkey, int* pnid);
int EVP_PKEY_get_default_digest_name(struct evp_pkey_st* pkey, char* mdname, unsigned long  int mdname_sz);
int EVP_PKEY_digestsign_supports_digest(struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* name, const char* propq);
int EVP_PKEY_set1_encoded_public_key(struct evp_pkey_st* pkey, const unsigned char* pub, unsigned long  int publen);
unsigned long  int EVP_PKEY_get1_encoded_public_key(struct evp_pkey_st* pkey, unsigned char** ppub);
int EVP_CIPHER_param_to_asn1(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int EVP_CIPHER_asn1_to_param(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int EVP_CIPHER_set_asn1_iv(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int EVP_CIPHER_get_asn1_iv(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int PKCS5_PBE_keyivgen(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de);
int PKCS5_PBE_keyivgen_ex(struct evp_cipher_ctx_st* cctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
int PKCS5_PBKDF2_HMAC_SHA1(const char* pass, int passlen, const unsigned char* salt, int saltlen, int iter, int keylen, unsigned char* out);
int PKCS5_PBKDF2_HMAC(const char* pass, int passlen, const unsigned char* salt, int saltlen, int iter, const struct evp_md_st* digest, int keylen, unsigned char* out);
int PKCS5_v2_PBE_keyivgen(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de);
int PKCS5_v2_PBE_keyivgen_ex(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_PBE_scrypt(const char* pass, unsigned long  int passlen, const unsigned char* salt, unsigned long  int saltlen, unsigned long  long N, unsigned long  long r, unsigned long  long p, unsigned long  long maxmem, unsigned char* key, unsigned long  int keylen);
int EVP_PBE_scrypt_ex(const char* pass, unsigned long  int passlen, const unsigned char* salt, unsigned long  int saltlen, unsigned long  long N, unsigned long  long r, unsigned long  long p, unsigned long  long maxmem, unsigned char* key, unsigned long  int keylen, struct ossl_lib_ctx_st* ctx, const char* propq);
int PKCS5_v2_scrypt_keyivgen(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* c, const struct evp_md_st* md, int en_de);
int PKCS5_v2_scrypt_keyivgen_ex(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* c, const struct evp_md_st* md, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
void PKCS5_PBE_add();
int EVP_PBE_CipherInit(struct asn1_object_st* pbe_obj, const char* pass, int passlen, struct asn1_type_st* param, struct evp_cipher_ctx_st* ctx, int en_de);
int EVP_PBE_CipherInit_ex(struct asn1_object_st* pbe_obj, const char* pass, int passlen, struct asn1_type_st* param, struct evp_cipher_ctx_st* ctx, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_PBE_alg_add_type(int pbe_type, int pbe_nid, int cipher_nid, int md_nid, int (*keygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int));
int EVP_PBE_alg_add(int nid, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int (*keygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int));
int EVP_PBE_find(int type, int pbe_nid, int* pcnid, int* pmnid, int (*pkeygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int));
int EVP_PBE_find_ex(int type, int pbe_nid, int* pcnid, int* pmnid, int (*pkeygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int), int (*pkeygen_ex)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int,struct ossl_lib_ctx_st*,const char*));
void EVP_PBE_cleanup();
int EVP_PBE_get(int* ptype, int* ppbe_nid, unsigned long  int num);
int EVP_PKEY_asn1_get_count();
const struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_get0(int idx);
const struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_find(struct engine_st** pe, int type);
const struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_find_str(struct engine_st** pe, const char* str, int len);
int EVP_PKEY_asn1_add0(const struct evp_pkey_asn1_method_st* ameth);
int EVP_PKEY_asn1_add_alias(int to, int from);
int EVP_PKEY_asn1_get0_info(int* ppkey_id, int* pkey_base_id, int* ppkey_flags, const char** pinfo, const char** ppem_str, const struct evp_pkey_asn1_method_st* ameth);
const struct evp_pkey_asn1_method_st* EVP_PKEY_get0_asn1(const struct evp_pkey_st* pkey);
struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_new(int id, int flags, const char* pem_str, const char* info);
void EVP_PKEY_asn1_copy(struct evp_pkey_asn1_method_st* dst, const struct evp_pkey_asn1_method_st* src);
void EVP_PKEY_asn1_free(struct evp_pkey_asn1_method_st* ameth);
void EVP_PKEY_asn1_set_public(struct evp_pkey_asn1_method_st* ameth, int (*pub_decode)(struct evp_pkey_st*,const struct X509_pubkey_st*), int (*pub_encode)(struct X509_pubkey_st*,const struct evp_pkey_st*), int (*pub_cmp)(const struct evp_pkey_st*,const struct evp_pkey_st*), int (*pub_print)(struct bio_st*,const struct evp_pkey_st*,int,struct asn1_pctx_st*), int (*pkey_size)(const struct evp_pkey_st*), int (*pkey_bits)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_private(struct evp_pkey_asn1_method_st* ameth, int (*priv_decode)(struct evp_pkey_st*,const struct pkcs8_priv_key_info_st*), int (*priv_encode)(struct pkcs8_priv_key_info_st*,const struct evp_pkey_st*), int (*priv_print)(struct bio_st*,const struct evp_pkey_st*,int,struct asn1_pctx_st*));
void EVP_PKEY_asn1_set_param(struct evp_pkey_asn1_method_st* ameth, int (*param_decode)(struct evp_pkey_st*,const unsigned char**,int), int (*param_encode)(const struct evp_pkey_st*,unsigned char**), int (*param_missing)(const struct evp_pkey_st*), int (*param_copy)(struct evp_pkey_st*,const struct evp_pkey_st*), int (*param_cmp)(const struct evp_pkey_st*,const struct evp_pkey_st*), int (*param_print)(struct bio_st*,const struct evp_pkey_st*,int,struct asn1_pctx_st*));
void EVP_PKEY_asn1_set_free(struct evp_pkey_asn1_method_st* ameth, void (*pkey_free)(struct evp_pkey_st*));
void EVP_PKEY_asn1_set_ctrl(struct evp_pkey_asn1_method_st* ameth, int (*pkey_ctrl)(struct evp_pkey_st*,int,long,void*));
void EVP_PKEY_asn1_set_item(struct evp_pkey_asn1_method_st* ameth, int (*item_verify)(struct evp_md_ctx_st*,const struct ASN1_ITEM_st*,const void*,const struct X509_algor_st*,const struct asn1_string_st*,struct evp_pkey_st*), int (*item_sign)(struct evp_md_ctx_st*,const struct ASN1_ITEM_st*,const void*,struct X509_algor_st*,struct X509_algor_st*,struct asn1_string_st*));
void EVP_PKEY_asn1_set_siginf(struct evp_pkey_asn1_method_st* ameth, int (*siginf_set)(struct x509_sig_info_st*,const struct X509_algor_st*,const struct asn1_string_st*));
void EVP_PKEY_asn1_set_check(struct evp_pkey_asn1_method_st* ameth, int (*pkey_check)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_public_check(struct evp_pkey_asn1_method_st* ameth, int (*pkey_pub_check)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_param_check(struct evp_pkey_asn1_method_st* ameth, int (*pkey_param_check)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_set_priv_key(struct evp_pkey_asn1_method_st* ameth, int (*set_priv_key)(struct evp_pkey_st*,const unsigned char*,unsigned long  int));
void EVP_PKEY_asn1_set_set_pub_key(struct evp_pkey_asn1_method_st* ameth, int (*set_pub_key)(struct evp_pkey_st*,const unsigned char*,unsigned long  int));
void EVP_PKEY_asn1_set_get_priv_key(struct evp_pkey_asn1_method_st* ameth, int (*get_priv_key)(const struct evp_pkey_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_asn1_set_get_pub_key(struct evp_pkey_asn1_method_st* ameth, int (*get_pub_key)(const struct evp_pkey_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_asn1_set_security_bits(struct evp_pkey_asn1_method_st* ameth, int (*pkey_security_bits)(const struct evp_pkey_st*));
int EVP_PKEY_CTX_get_signature_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_set_signature_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set1_id(struct evp_pkey_ctx_st* ctx, const void* id, int len);
int EVP_PKEY_CTX_get1_id(struct evp_pkey_ctx_st* ctx, void* id);
int EVP_PKEY_CTX_get1_id_len(struct evp_pkey_ctx_st* ctx, unsigned long  int* id_len);
int EVP_PKEY_CTX_set_kem_op(struct evp_pkey_ctx_st* ctx, const char* op);
const char* EVP_PKEY_get0_type_name(const struct evp_pkey_st* key);
int EVP_PKEY_CTX_set_mac_key(struct evp_pkey_ctx_st* ctx, const unsigned char* key, int keylen);
const struct evp_pkey_method_st* EVP_PKEY_meth_find(int type);
struct evp_pkey_method_st* EVP_PKEY_meth_new(int id, int flags);
void EVP_PKEY_meth_get0_info(int* ppkey_id, int* pflags, const struct evp_pkey_method_st* meth);
void EVP_PKEY_meth_copy(struct evp_pkey_method_st* dst, const struct evp_pkey_method_st* src);
void EVP_PKEY_meth_free(struct evp_pkey_method_st* pmeth);
int EVP_PKEY_meth_add0(const struct evp_pkey_method_st* pmeth);
int EVP_PKEY_meth_remove(const struct evp_pkey_method_st* pmeth);
unsigned long  int EVP_PKEY_meth_get_count();
const struct evp_pkey_method_st* EVP_PKEY_meth_get0(unsigned long  int idx);
struct evp_keymgmt_st* EVP_KEYMGMT_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_KEYMGMT_up_ref(struct evp_keymgmt_st* keymgmt);
void EVP_KEYMGMT_free(struct evp_keymgmt_st* keymgmt);
const struct ossl_provider_st* EVP_KEYMGMT_get0_provider(const struct evp_keymgmt_st* keymgmt);
const char* EVP_KEYMGMT_get0_name(const struct evp_keymgmt_st* keymgmt);
const char* EVP_KEYMGMT_get0_description(const struct evp_keymgmt_st* keymgmt);
int EVP_KEYMGMT_is_a(const struct evp_keymgmt_st* keymgmt, const char* name);
void EVP_KEYMGMT_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_keymgmt_st*,void*), void* arg);
int EVP_KEYMGMT_names_do_all(const struct evp_keymgmt_st* keymgmt, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_KEYMGMT_gettable_params(const struct evp_keymgmt_st* keymgmt);
const struct ossl_param_st* EVP_KEYMGMT_settable_params(const struct evp_keymgmt_st* keymgmt);
const struct ossl_param_st* EVP_KEYMGMT_gen_settable_params(const struct evp_keymgmt_st* keymgmt);
const struct ossl_param_st* EVP_KEYMGMT_gen_gettable_params(const struct evp_keymgmt_st* keymgmt);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new(struct evp_pkey_st* pkey, struct engine_st* e);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new_id(int id, struct engine_st* e);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new_from_name(struct ossl_lib_ctx_st* libctx, const char* name, const char* propquery);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new_from_pkey(struct ossl_lib_ctx_st* libctx, struct evp_pkey_st* pkey, const char* propquery);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_dup(const struct evp_pkey_ctx_st* ctx);
void EVP_PKEY_CTX_free(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_is_a(struct evp_pkey_ctx_st* ctx, const char* keytype);
int EVP_PKEY_CTX_get_params(struct evp_pkey_ctx_st* ctx, struct ossl_param_st* params);
const struct ossl_param_st* EVP_PKEY_CTX_gettable_params(const struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_params(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st* params);
const struct ossl_param_st* EVP_PKEY_CTX_settable_params(const struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_algor_params(struct evp_pkey_ctx_st* ctx, const struct X509_algor_st* alg);
int EVP_PKEY_CTX_get_algor_params(struct evp_pkey_ctx_st* ctx, struct X509_algor_st* alg);
int EVP_PKEY_CTX_get_algor(struct evp_pkey_ctx_st* ctx, struct X509_algor_st** alg);
int EVP_PKEY_CTX_ctrl(struct evp_pkey_ctx_st* ctx, int keytype, int optype, int cmd, int p1, void* p2);
int EVP_PKEY_CTX_ctrl_str(struct evp_pkey_ctx_st* ctx, const char* type, const char* value);
int EVP_PKEY_CTX_ctrl_uint64(struct evp_pkey_ctx_st* ctx, int keytype, int optype, int cmd, unsigned long  long value);
int EVP_PKEY_CTX_str2ctrl(struct evp_pkey_ctx_st* ctx, int cmd, const char* str);
int EVP_PKEY_CTX_hex2ctrl(struct evp_pkey_ctx_st* ctx, int cmd, const char* hex);
int EVP_PKEY_CTX_md(struct evp_pkey_ctx_st* ctx, int optype, int cmd, const char* md);
int EVP_PKEY_CTX_get_operation(struct evp_pkey_ctx_st* ctx);
void EVP_PKEY_CTX_set0_keygen_info(struct evp_pkey_ctx_st* ctx, int* dat, int datlen);
struct evp_pkey_st* EVP_PKEY_new_mac_key(int type, struct engine_st* e, const unsigned char* key, int keylen);
struct evp_pkey_st* EVP_PKEY_new_raw_private_key_ex(struct ossl_lib_ctx_st* libctx, const char* keytype, const char* propq, const unsigned char* priv, unsigned long  int len);
struct evp_pkey_st* EVP_PKEY_new_raw_private_key(int type, struct engine_st* e, const unsigned char* priv, unsigned long  int len);
struct evp_pkey_st* EVP_PKEY_new_raw_public_key_ex(struct ossl_lib_ctx_st* libctx, const char* keytype, const char* propq, const unsigned char* pub, unsigned long  int len);
struct evp_pkey_st* EVP_PKEY_new_raw_public_key(int type, struct engine_st* e, const unsigned char* pub, unsigned long  int len);
int EVP_PKEY_get_raw_private_key(const struct evp_pkey_st* pkey, unsigned char* priv, unsigned long  int* len);
int EVP_PKEY_get_raw_public_key(const struct evp_pkey_st* pkey, unsigned char* pub, unsigned long  int* len);
struct evp_pkey_st* EVP_PKEY_new_CMAC_key(struct engine_st* e, const unsigned char* priv, unsigned long  int len, const struct evp_cipher_st* cipher);
void EVP_PKEY_CTX_set_data(struct evp_pkey_ctx_st* ctx, void* data);
void* EVP_PKEY_CTX_get_data(const struct evp_pkey_ctx_st* ctx);
struct evp_pkey_st* EVP_PKEY_CTX_get0_pkey(struct evp_pkey_ctx_st* ctx);
struct evp_pkey_st* EVP_PKEY_CTX_get0_peerkey(struct evp_pkey_ctx_st* ctx);
void EVP_PKEY_CTX_set_app_data(struct evp_pkey_ctx_st* ctx, void* data);
void* EVP_PKEY_CTX_get_app_data(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_signature(struct evp_pkey_ctx_st* pctx, const unsigned char* sig, unsigned long  int siglen);
void EVP_SIGNATURE_free(struct evp_signature_st* signature);
int EVP_SIGNATURE_up_ref(struct evp_signature_st* signature);
struct ossl_provider_st* EVP_SIGNATURE_get0_provider(const struct evp_signature_st* signature);
struct evp_signature_st* EVP_SIGNATURE_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_SIGNATURE_is_a(const struct evp_signature_st* signature, const char* name);
const char* EVP_SIGNATURE_get0_name(const struct evp_signature_st* signature);
const char* EVP_SIGNATURE_get0_description(const struct evp_signature_st* signature);
void EVP_SIGNATURE_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_signature_st*,void*), void* data);
int EVP_SIGNATURE_names_do_all(const struct evp_signature_st* signature, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_SIGNATURE_gettable_ctx_params(const struct evp_signature_st* sig);
const struct ossl_param_st* EVP_SIGNATURE_settable_ctx_params(const struct evp_signature_st* sig);
void EVP_ASYM_CIPHER_free(struct evp_asym_cipher_st* cipher);
int EVP_ASYM_CIPHER_up_ref(struct evp_asym_cipher_st* cipher);
struct ossl_provider_st* EVP_ASYM_CIPHER_get0_provider(const struct evp_asym_cipher_st* cipher);
struct evp_asym_cipher_st* EVP_ASYM_CIPHER_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_ASYM_CIPHER_is_a(const struct evp_asym_cipher_st* cipher, const char* name);
const char* EVP_ASYM_CIPHER_get0_name(const struct evp_asym_cipher_st* cipher);
const char* EVP_ASYM_CIPHER_get0_description(const struct evp_asym_cipher_st* cipher);
void EVP_ASYM_CIPHER_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_asym_cipher_st*,void*), void* arg);
int EVP_ASYM_CIPHER_names_do_all(const struct evp_asym_cipher_st* cipher, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_ASYM_CIPHER_gettable_ctx_params(const struct evp_asym_cipher_st* ciph);
const struct ossl_param_st* EVP_ASYM_CIPHER_settable_ctx_params(const struct evp_asym_cipher_st* ciph);
void EVP_KEM_free(struct evp_kem_st* wrap);
int EVP_KEM_up_ref(struct evp_kem_st* wrap);
struct ossl_provider_st* EVP_KEM_get0_provider(const struct evp_kem_st* wrap);
struct evp_kem_st* EVP_KEM_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_KEM_is_a(const struct evp_kem_st* wrap, const char* name);
const char* EVP_KEM_get0_name(const struct evp_kem_st* wrap);
const char* EVP_KEM_get0_description(const struct evp_kem_st* wrap);
void EVP_KEM_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_kem_st*,void*), void* arg);
int EVP_KEM_names_do_all(const struct evp_kem_st* wrap, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_KEM_gettable_ctx_params(const struct evp_kem_st* kem);
const struct ossl_param_st* EVP_KEM_settable_ctx_params(const struct evp_kem_st* kem);
int EVP_PKEY_sign_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_sign_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_sign_init_ex2(struct evp_pkey_ctx_st* ctx, struct evp_signature_st* algo, const struct ossl_param_st params[]);
int EVP_PKEY_sign(struct evp_pkey_ctx_st* ctx, unsigned char* sig, unsigned long  int* siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_PKEY_sign_message_init(struct evp_pkey_ctx_st* ctx, struct evp_signature_st* algo, const struct ossl_param_st params[]);
int EVP_PKEY_sign_message_update(struct evp_pkey_ctx_st* ctx, const unsigned char* in, unsigned long  int inlen);
int EVP_PKEY_sign_message_final(struct evp_pkey_ctx_st* ctx, unsigned char* sig, unsigned long  int* siglen);
int EVP_PKEY_verify_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_verify_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_verify_init_ex2(struct evp_pkey_ctx_st* ctx, struct evp_signature_st* algo, const struct ossl_param_st params[]);
int EVP_PKEY_verify(struct evp_pkey_ctx_st* ctx, const unsigned char* sig, unsigned long  int siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_PKEY_verify_message_init(struct evp_pkey_ctx_st* ctx, struct evp_signature_st* algo, const struct ossl_param_st params[]);
int EVP_PKEY_verify_message_update(struct evp_pkey_ctx_st* ctx, const unsigned char* in, unsigned long  int inlen);
int EVP_PKEY_verify_message_final(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_verify_recover_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_verify_recover_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_verify_recover_init_ex2(struct evp_pkey_ctx_st* ctx, struct evp_signature_st* algo, const struct ossl_param_st params[]);
int EVP_PKEY_verify_recover(struct evp_pkey_ctx_st* ctx, unsigned char* rout, unsigned long  int* routlen, const unsigned char* sig, unsigned long  int siglen);
int EVP_PKEY_encrypt_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_encrypt_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_encrypt(struct evp_pkey_ctx_st* ctx, unsigned char* out, unsigned long  int* outlen, const unsigned char* in, unsigned long  int inlen);
int EVP_PKEY_decrypt_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_decrypt_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_decrypt(struct evp_pkey_ctx_st* ctx, unsigned char* out, unsigned long  int* outlen, const unsigned char* in, unsigned long  int inlen);
int EVP_PKEY_derive_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_derive_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_derive_set_peer_ex(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* peer, int validate_peer);
int EVP_PKEY_derive_set_peer(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* peer);
int EVP_PKEY_derive(struct evp_pkey_ctx_st* ctx, unsigned char* key, unsigned long  int* keylen);
int EVP_PKEY_encapsulate_init(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_auth_encapsulate_init(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* authpriv, const struct ossl_param_st params[]);
int EVP_PKEY_encapsulate(struct evp_pkey_ctx_st* ctx, unsigned char* wrappedkey, unsigned long  int* wrappedkeylen, unsigned char* genkey, unsigned long  int* genkeylen);
int EVP_PKEY_decapsulate_init(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_auth_decapsulate_init(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* authpub, const struct ossl_param_st params[]);
int EVP_PKEY_decapsulate(struct evp_pkey_ctx_st* ctx, unsigned char* unwrapped, unsigned long  int* unwrappedlen, const unsigned char* wrapped, unsigned long  int wrappedlen);
int EVP_PKEY_fromdata_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_fromdata(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey, int selection, struct ossl_param_st param[]);
const struct ossl_param_st* EVP_PKEY_fromdata_settable(struct evp_pkey_ctx_st* ctx, int selection);
int EVP_PKEY_todata(const struct evp_pkey_st* pkey, int selection, struct ossl_param_st** params);
int EVP_PKEY_export(const struct evp_pkey_st* pkey, int selection, int (*export_cb)(const struct ossl_param_st*,void*), void* export_cbarg);
const struct ossl_param_st* EVP_PKEY_gettable_params(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_params(const struct evp_pkey_st* pkey, struct ossl_param_st params[]);
int EVP_PKEY_get_int_param(const struct evp_pkey_st* pkey, const char* key_name, int* out);
int EVP_PKEY_get_size_t_param(const struct evp_pkey_st* pkey, const char* key_name, unsigned long  int* out);
int EVP_PKEY_get_bn_param(const struct evp_pkey_st* pkey, const char* key_name, struct bignum_st** bn);
int EVP_PKEY_get_utf8_string_param(const struct evp_pkey_st* pkey, const char* key_name, char* str, unsigned long  int max_buf_sz, unsigned long  int* out_sz);
int EVP_PKEY_get_octet_string_param(const struct evp_pkey_st* pkey, const char* key_name, unsigned char* buf, unsigned long  int max_buf_sz, unsigned long  int* out_sz);
const struct ossl_param_st* EVP_PKEY_settable_params(const struct evp_pkey_st* pkey);
int EVP_PKEY_set_params(struct evp_pkey_st* pkey, struct ossl_param_st params[]);
int EVP_PKEY_set_int_param(struct evp_pkey_st* pkey, const char* key_name, int in);
int EVP_PKEY_set_size_t_param(struct evp_pkey_st* pkey, const char* key_name, unsigned long  int in);
int EVP_PKEY_set_bn_param(struct evp_pkey_st* pkey, const char* key_name, const struct bignum_st* bn);
int EVP_PKEY_set_utf8_string_param(struct evp_pkey_st* pkey, const char* key_name, const char* str);
int EVP_PKEY_set_octet_string_param(struct evp_pkey_st* pkey, const char* key_name, const unsigned char* buf, unsigned long  int bsize);
int EVP_PKEY_get_ec_point_conv_form(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_field_type(const struct evp_pkey_st* pkey);
struct evp_pkey_st* EVP_PKEY_Q_keygen(struct ossl_lib_ctx_st* libctx, const char* propq, const char* type, ...);
int EVP_PKEY_paramgen_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_paramgen(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey);
int EVP_PKEY_keygen_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_keygen(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey);
int EVP_PKEY_generate(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey);
int EVP_PKEY_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_public_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_public_check_quick(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_param_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_param_check_quick(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_private_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_pairwise_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_set_ex_data(struct evp_pkey_st* key, int idx, void* arg);
void* EVP_PKEY_get_ex_data(const struct evp_pkey_st* key, int idx);
void EVP_PKEY_CTX_set_cb(struct evp_pkey_ctx_st* ctx, int (*cb)(struct evp_pkey_ctx_st*));
int (*EVP_PKEY_CTX_get_cb(struct evp_pkey_ctx_st* ctx))(struct evp_pkey_ctx_st*);
int EVP_PKEY_CTX_get_keygen_info(struct evp_pkey_ctx_st* ctx, int idx);
void EVP_PKEY_meth_set_init(struct evp_pkey_method_st* pmeth, int (*init)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_set_copy(struct evp_pkey_method_st* pmeth, int (*copy)(struct evp_pkey_ctx_st*,const struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_set_cleanup(struct evp_pkey_method_st* pmeth, void (*cleanup)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_set_paramgen(struct evp_pkey_method_st* pmeth, int (*paramgen_init)(struct evp_pkey_ctx_st*), int (*paramgen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_set_keygen(struct evp_pkey_method_st* pmeth, int (*keygen_init)(struct evp_pkey_ctx_st*), int (*keygen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_set_sign(struct evp_pkey_method_st* pmeth, int (*sign_init)(struct evp_pkey_ctx_st*), int (*sign)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_verify(struct evp_pkey_method_st* pmeth, int (*verify_init)(struct evp_pkey_ctx_st*), int (*verify)(struct evp_pkey_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_verify_recover(struct evp_pkey_method_st* pmeth, int (*verify_recover_init)(struct evp_pkey_ctx_st*), int (*verify_recover)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_signctx(struct evp_pkey_method_st* pmeth, int (*signctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (*signctx)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,struct evp_md_ctx_st*));
void EVP_PKEY_meth_set_verifyctx(struct evp_pkey_method_st* pmeth, int (*verifyctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (*verifyctx)(struct evp_pkey_ctx_st*,const unsigned char*,int,struct evp_md_ctx_st*));
void EVP_PKEY_meth_set_encrypt(struct evp_pkey_method_st* pmeth, int (*encrypt_init)(struct evp_pkey_ctx_st*), int (*encryptfn)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_decrypt(struct evp_pkey_method_st* pmeth, int (*decrypt_init)(struct evp_pkey_ctx_st*), int (*decrypt)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_derive(struct evp_pkey_method_st* pmeth, int (*derive_init)(struct evp_pkey_ctx_st*), int (*derive)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_meth_set_ctrl(struct evp_pkey_method_st* pmeth, int (*ctrl)(struct evp_pkey_ctx_st*,int,int,void*), int (*ctrl_str)(struct evp_pkey_ctx_st*,const char*,const char*));
void EVP_PKEY_meth_set_digestsign(struct evp_pkey_method_st* pmeth, int (*digestsign)(struct evp_md_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_digestverify(struct evp_pkey_method_st* pmeth, int (*digestverify)(struct evp_md_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_check(struct evp_pkey_method_st* pmeth, int (*check)(struct evp_pkey_st*));
void EVP_PKEY_meth_set_public_check(struct evp_pkey_method_st* pmeth, int (*check)(struct evp_pkey_st*));
void EVP_PKEY_meth_set_param_check(struct evp_pkey_method_st* pmeth, int (*check)(struct evp_pkey_st*));
void EVP_PKEY_meth_set_digest_custom(struct evp_pkey_method_st* pmeth, int (*digest_custom)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*));
void EVP_PKEY_meth_get_init(const struct evp_pkey_method_st* pmeth, int (**pinit)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_get_copy(const struct evp_pkey_method_st* pmeth, int (**pcopy)(struct evp_pkey_ctx_st*,const struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_get_cleanup(const struct evp_pkey_method_st* pmeth, void (**pcleanup)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_get_paramgen(const struct evp_pkey_method_st* pmeth, int (**pparamgen_init)(struct evp_pkey_ctx_st*), int (**pparamgen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_get_keygen(const struct evp_pkey_method_st* pmeth, int (**pkeygen_init)(struct evp_pkey_ctx_st*), int (**pkeygen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_get_sign(const struct evp_pkey_method_st* pmeth, int (**psign_init)(struct evp_pkey_ctx_st*), int (**psign)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_verify(const struct evp_pkey_method_st* pmeth, int (**pverify_init)(struct evp_pkey_ctx_st*), int (**pverify)(struct evp_pkey_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_verify_recover(const struct evp_pkey_method_st* pmeth, int (**pverify_recover_init)(struct evp_pkey_ctx_st*), int (**pverify_recover)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_signctx(const struct evp_pkey_method_st* pmeth, int (**psignctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (**psignctx)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,struct evp_md_ctx_st*));
void EVP_PKEY_meth_get_verifyctx(const struct evp_pkey_method_st* pmeth, int (**pverifyctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (**pverifyctx)(struct evp_pkey_ctx_st*,const unsigned char*,int,struct evp_md_ctx_st*));
void EVP_PKEY_meth_get_encrypt(const struct evp_pkey_method_st* pmeth, int (**pencrypt_init)(struct evp_pkey_ctx_st*), int (**pencryptfn)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_decrypt(const struct evp_pkey_method_st* pmeth, int (**pdecrypt_init)(struct evp_pkey_ctx_st*), int (**pdecrypt)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_derive(const struct evp_pkey_method_st* pmeth, int (**pderive_init)(struct evp_pkey_ctx_st*), int (**pderive)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_meth_get_ctrl(const struct evp_pkey_method_st* pmeth, int (**pctrl)(struct evp_pkey_ctx_st*,int,int,void*), int (**pctrl_str)(struct evp_pkey_ctx_st*,const char*,const char*));
void EVP_PKEY_meth_get_digestsign(const struct evp_pkey_method_st* pmeth, int (**digestsign)(struct evp_md_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_digestverify(const struct evp_pkey_method_st* pmeth, int (**digestverify)(struct evp_md_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_check(const struct evp_pkey_method_st* pmeth, int (**pcheck)(struct evp_pkey_st*));
void EVP_PKEY_meth_get_public_check(const struct evp_pkey_method_st* pmeth, int (**pcheck)(struct evp_pkey_st*));
void EVP_PKEY_meth_get_param_check(const struct evp_pkey_method_st* pmeth, int (**pcheck)(struct evp_pkey_st*));
void EVP_PKEY_meth_get_digest_custom(const struct evp_pkey_method_st* pmeth, int (**pdigest_custom)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*));
void EVP_KEYEXCH_free(struct evp_keyexch_st* exchange);
int EVP_KEYEXCH_up_ref(struct evp_keyexch_st* exchange);
struct evp_keyexch_st* EVP_KEYEXCH_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
struct ossl_provider_st* EVP_KEYEXCH_get0_provider(const struct evp_keyexch_st* exchange);
int EVP_KEYEXCH_is_a(const struct evp_keyexch_st* keyexch, const char* name);
const char* EVP_KEYEXCH_get0_name(const struct evp_keyexch_st* keyexch);
const char* EVP_KEYEXCH_get0_description(const struct evp_keyexch_st* keyexch);
void EVP_KEYEXCH_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_keyexch_st*,void*), void* data);
int EVP_KEYEXCH_names_do_all(const struct evp_keyexch_st* keyexch, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_KEYEXCH_gettable_ctx_params(const struct evp_keyexch_st* keyexch);
const struct ossl_param_st* EVP_KEYEXCH_settable_ctx_params(const struct evp_keyexch_st* keyexch);
void EVP_add_alg_module();
int EVP_PKEY_CTX_set_group_name(struct evp_pkey_ctx_st* ctx, const char* name);
int EVP_PKEY_CTX_get_group_name(struct evp_pkey_ctx_st* ctx, char* name, unsigned long  int namelen);
int EVP_PKEY_get_group_name(const struct evp_pkey_st* pkey, char* name, unsigned long  int name_sz, unsigned long  int* gname_len);
struct ossl_lib_ctx_st* EVP_PKEY_CTX_get0_libctx(struct evp_pkey_ctx_st* ctx);
const char* EVP_PKEY_CTX_get0_propq(const struct evp_pkey_ctx_st* ctx);
const struct ossl_provider_st* EVP_PKEY_CTX_get0_provider(const struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_ec_paramgen_curve_nid(struct evp_pkey_ctx_st* ctx, int nid);
int EVP_PKEY_CTX_set_ec_param_enc(struct evp_pkey_ctx_st* ctx, int param_enc);
int EVP_PKEY_CTX_set_ecdh_cofactor_mode(struct evp_pkey_ctx_st* ctx, int cofactor_mode);
int EVP_PKEY_CTX_get_ecdh_cofactor_mode(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_ecdh_kdf_type(struct evp_pkey_ctx_st* ctx, int kdf);
int EVP_PKEY_CTX_get_ecdh_kdf_type(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_ecdh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_get_ecdh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_set_ecdh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int len);
int EVP_PKEY_CTX_get_ecdh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int* len);
int EVP_PKEY_CTX_set0_ecdh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char* ukm, int len);
int EVP_PKEY_CTX_get0_ecdh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char** ukm);
const char* OSSL_EC_curve_nid2name(int nid);
const struct ec_method_st* EC_GFp_simple_method();
const struct ec_method_st* EC_GFp_mont_method();
const struct ec_method_st* EC_GFp_nist_method();
const struct ec_method_st* EC_GFp_nistp224_method();
const struct ec_method_st* EC_GFp_nistp256_method();
const struct ec_method_st* EC_GFp_nistp521_method();
const struct ec_method_st* EC_GF2m_simple_method();
struct ec_group_st* EC_GROUP_new(const struct ec_method_st* meth);
void EC_GROUP_clear_free(struct ec_group_st* group);
const struct ec_method_st* EC_GROUP_method_of(const struct ec_group_st* group);
int EC_METHOD_get_field_type(const struct ec_method_st* meth);
void EC_GROUP_free(struct ec_group_st* group);
int EC_GROUP_copy(struct ec_group_st* dst, const struct ec_group_st* src);
struct ec_group_st* EC_GROUP_dup(const struct ec_group_st* src);
int EC_GROUP_set_generator(struct ec_group_st* group, const struct ec_point_st* generator, const struct bignum_st* order, const struct bignum_st* cofactor);
const struct ec_point_st* EC_GROUP_get0_generator(const struct ec_group_st* group);
struct bn_mont_ctx_st* EC_GROUP_get_mont_data(const struct ec_group_st* group);
int EC_GROUP_get_order(const struct ec_group_st* group, struct bignum_st* order, struct bignum_ctx* ctx);
const struct bignum_st* EC_GROUP_get0_order(const struct ec_group_st* group);
int EC_GROUP_order_bits(const struct ec_group_st* group);
int EC_GROUP_get_cofactor(const struct ec_group_st* group, struct bignum_st* cofactor, struct bignum_ctx* ctx);
const struct bignum_st* EC_GROUP_get0_cofactor(const struct ec_group_st* group);
void EC_GROUP_set_curve_name(struct ec_group_st* group, int nid);
int EC_GROUP_get_curve_name(const struct ec_group_st* group);
const struct bignum_st* EC_GROUP_get0_field(const struct ec_group_st* group);
int EC_GROUP_get_field_type(const struct ec_group_st* group);
void EC_GROUP_set_asn1_flag(struct ec_group_st* group, int flag);
int EC_GROUP_get_asn1_flag(const struct ec_group_st* group);
void EC_GROUP_set_point_conversion_form(struct ec_group_st* group, enum anonymous_typeY22 form);
enum anonymous_typeY22 EC_GROUP_get_point_conversion_form(const struct ec_group_st* anonymous_var_nameX2094);
unsigned char* EC_GROUP_get0_seed(const struct ec_group_st* x);
unsigned long  int EC_GROUP_get_seed_len(const struct ec_group_st* anonymous_var_nameX2095);
unsigned long  int EC_GROUP_set_seed(struct ec_group_st* anonymous_var_nameX2096, const unsigned char* anonymous_var_nameX2097, unsigned long  int len);
int EC_GROUP_set_curve(struct ec_group_st* group, const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_get_curve(const struct ec_group_st* group, struct bignum_st* p, struct bignum_st* a, struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_set_curve_GFp(struct ec_group_st* group, const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_get_curve_GFp(const struct ec_group_st* group, struct bignum_st* p, struct bignum_st* a, struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_set_curve_GF2m(struct ec_group_st* group, const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_get_curve_GF2m(const struct ec_group_st* group, struct bignum_st* p, struct bignum_st* a, struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_get_degree(const struct ec_group_st* group);
int EC_GROUP_check(const struct ec_group_st* group, struct bignum_ctx* ctx);
int EC_GROUP_check_discriminant(const struct ec_group_st* group, struct bignum_ctx* ctx);
int EC_GROUP_cmp(const struct ec_group_st* a, const struct ec_group_st* b, struct bignum_ctx* ctx);
struct ec_group_st* EC_GROUP_new_curve_GFp(const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
struct ec_group_st* EC_GROUP_new_curve_GF2m(const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
struct ec_group_st* EC_GROUP_new_from_params(const struct ossl_param_st params[], struct ossl_lib_ctx_st* libctx, const char* propq);
struct ossl_param_st* EC_GROUP_to_params(const struct ec_group_st* group, struct ossl_lib_ctx_st* libctx, const char* propq, struct bignum_ctx* bnctx);
struct ec_group_st* EC_GROUP_new_by_curve_name_ex(struct ossl_lib_ctx_st* libctx, const char* propq, int nid);
struct ec_group_st* EC_GROUP_new_by_curve_name(int nid);
struct ec_group_st* EC_GROUP_new_from_ecparameters(const struct ec_parameters_st* params);
struct ec_parameters_st* EC_GROUP_get_ecparameters(const struct ec_group_st* group, struct ec_parameters_st* params);
struct ec_group_st* EC_GROUP_new_from_ecpkparameters(const struct ecpk_parameters_st* params);
struct ecpk_parameters_st* EC_GROUP_get_ecpkparameters(const struct ec_group_st* group, struct ecpk_parameters_st* params);
unsigned long  int EC_get_builtin_curves(struct anonymous_typeX23* r, unsigned long  int nitems);
const char* EC_curve_nid2nist(int nid);
int EC_curve_nist2nid(const char* name);
int EC_GROUP_check_named_curve(const struct ec_group_st* group, int nist_only, struct bignum_ctx* ctx);
struct ec_point_st* EC_POINT_new(const struct ec_group_st* group);
void EC_POINT_free(struct ec_point_st* point);
void EC_POINT_clear_free(struct ec_point_st* point);
int EC_POINT_copy(struct ec_point_st* dst, const struct ec_point_st* src);
struct ec_point_st* EC_POINT_dup(const struct ec_point_st* src, const struct ec_group_st* group);
int EC_POINT_set_to_infinity(const struct ec_group_st* group, struct ec_point_st* point);
const struct ec_method_st* EC_POINT_method_of(const struct ec_point_st* point);
int EC_POINT_set_Jprojective_coordinates_GFp(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, const struct bignum_st* y, const struct bignum_st* z, struct bignum_ctx* ctx);
int EC_POINT_get_Jprojective_coordinates_GFp(const struct ec_group_st* group, const struct ec_point_st* p, struct bignum_st* x, struct bignum_st* y, struct bignum_st* z, struct bignum_ctx* ctx);
int EC_POINT_set_affine_coordinates(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, const struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_get_affine_coordinates(const struct ec_group_st* group, const struct ec_point_st* p, struct bignum_st* x, struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_set_affine_coordinates_GFp(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, const struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_get_affine_coordinates_GFp(const struct ec_group_st* group, const struct ec_point_st* p, struct bignum_st* x, struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_set_compressed_coordinates(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, int y_bit, struct bignum_ctx* ctx);
int EC_POINT_set_compressed_coordinates_GFp(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, int y_bit, struct bignum_ctx* ctx);
int EC_POINT_set_affine_coordinates_GF2m(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, const struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_get_affine_coordinates_GF2m(const struct ec_group_st* group, const struct ec_point_st* p, struct bignum_st* x, struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_set_compressed_coordinates_GF2m(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, int y_bit, struct bignum_ctx* ctx);
unsigned long  int EC_POINT_point2oct(const struct ec_group_st* group, const struct ec_point_st* p, enum anonymous_typeY22 form, unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
int EC_POINT_oct2point(const struct ec_group_st* group, struct ec_point_st* p, const unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
unsigned long  int EC_POINT_point2buf(const struct ec_group_st* group, const struct ec_point_st* point, enum anonymous_typeY22 form, unsigned char** pbuf, struct bignum_ctx* ctx);
struct bignum_st* EC_POINT_point2bn(const struct ec_group_st* anonymous_var_nameX2098, const struct ec_point_st* anonymous_var_nameX2099, enum anonymous_typeY22 form, struct bignum_st* anonymous_var_nameX2100, struct bignum_ctx* anonymous_var_nameX2101);
struct ec_point_st* EC_POINT_bn2point(const struct ec_group_st* anonymous_var_nameX2102, const struct bignum_st* anonymous_var_nameX2103, struct ec_point_st* anonymous_var_nameX2104, struct bignum_ctx* anonymous_var_nameX2105);
char* EC_POINT_point2hex(const struct ec_group_st* anonymous_var_nameX2106, const struct ec_point_st* anonymous_var_nameX2107, enum anonymous_typeY22 form, struct bignum_ctx* anonymous_var_nameX2108);
struct ec_point_st* EC_POINT_hex2point(const struct ec_group_st* anonymous_var_nameX2109, const char* anonymous_var_nameX2110, struct ec_point_st* anonymous_var_nameX2111, struct bignum_ctx* anonymous_var_nameX2112);
int EC_POINT_add(const struct ec_group_st* group, struct ec_point_st* r, const struct ec_point_st* a, const struct ec_point_st* b, struct bignum_ctx* ctx);
int EC_POINT_dbl(const struct ec_group_st* group, struct ec_point_st* r, const struct ec_point_st* a, struct bignum_ctx* ctx);
int EC_POINT_invert(const struct ec_group_st* group, struct ec_point_st* a, struct bignum_ctx* ctx);
int EC_POINT_is_at_infinity(const struct ec_group_st* group, const struct ec_point_st* p);
int EC_POINT_is_on_curve(const struct ec_group_st* group, const struct ec_point_st* point, struct bignum_ctx* ctx);
int EC_POINT_cmp(const struct ec_group_st* group, const struct ec_point_st* a, const struct ec_point_st* b, struct bignum_ctx* ctx);
int EC_POINT_make_affine(const struct ec_group_st* group, struct ec_point_st* point, struct bignum_ctx* ctx);
int EC_POINTs_make_affine(const struct ec_group_st* group, unsigned long  int num, struct ec_point_st* points[], struct bignum_ctx* ctx);
int EC_POINTs_mul(const struct ec_group_st* group, struct ec_point_st* r, const struct bignum_st* n, unsigned long  int num, const struct ec_point_st* p[], const struct bignum_st* m[], struct bignum_ctx* ctx);
int EC_POINT_mul(const struct ec_group_st* group, struct ec_point_st* r, const struct bignum_st* n, const struct ec_point_st* q, const struct bignum_st* m, struct bignum_ctx* ctx);
int EC_GROUP_precompute_mult(struct ec_group_st* group, struct bignum_ctx* ctx);
int EC_GROUP_have_precompute_mult(const struct ec_group_st* group);
const struct ASN1_ITEM_st* ECPKPARAMETERS_it();
struct ecpk_parameters_st* ECPKPARAMETERS_new();
void ECPKPARAMETERS_free(struct ecpk_parameters_st* a);
const struct ASN1_ITEM_st* ECPARAMETERS_it();
struct ec_parameters_st* ECPARAMETERS_new();
void ECPARAMETERS_free(struct ec_parameters_st* a);
int EC_GROUP_get_basis_type(const struct ec_group_st* anonymous_var_nameX2113);
int EC_GROUP_get_trinomial_basis(const struct ec_group_st* anonymous_var_nameX2114, unsigned int* k);
int EC_GROUP_get_pentanomial_basis(const struct ec_group_st* anonymous_var_nameX2115, unsigned int* k1, unsigned int* k2, unsigned int* k3);
struct ec_group_st* d2i_ECPKParameters(struct ec_group_st** anonymous_var_nameX2116, const unsigned char** in, long len);
int i2d_ECPKParameters(const struct ec_group_st* anonymous_var_nameX2117, unsigned char** out);
int ECPKParameters_print(struct bio_st* bp, const struct ec_group_st* x, int off);
int ECPKParameters_print_fp(struct __sFILE* fp, const struct ec_group_st* x, int off);
struct ec_key_st* EC_KEY_new_ex(struct ossl_lib_ctx_st* ctx, const char* propq);
struct ec_key_st* EC_KEY_new();
int EC_KEY_get_flags(const struct ec_key_st* key);
void EC_KEY_set_flags(struct ec_key_st* key, int flags);
void EC_KEY_clear_flags(struct ec_key_st* key, int flags);
int EC_KEY_decoded_from_explicit_params(const struct ec_key_st* key);
struct ec_key_st* EC_KEY_new_by_curve_name_ex(struct ossl_lib_ctx_st* ctx, const char* propq, int nid);
struct ec_key_st* EC_KEY_new_by_curve_name(int nid);
void EC_KEY_free(struct ec_key_st* key);
struct ec_key_st* EC_KEY_copy(struct ec_key_st* dst, const struct ec_key_st* src);
struct ec_key_st* EC_KEY_dup(const struct ec_key_st* src);
int EC_KEY_up_ref(struct ec_key_st* key);
struct engine_st* EC_KEY_get0_engine(const struct ec_key_st* eckey);
const struct ec_group_st* EC_KEY_get0_group(const struct ec_key_st* key);
int EC_KEY_set_group(struct ec_key_st* key, const struct ec_group_st* group);
const struct bignum_st* EC_KEY_get0_private_key(const struct ec_key_st* key);
int EC_KEY_set_private_key(struct ec_key_st* key, const struct bignum_st* prv);
const struct ec_point_st* EC_KEY_get0_public_key(const struct ec_key_st* key);
int EC_KEY_set_public_key(struct ec_key_st* key, const struct ec_point_st* pub);
unsigned int EC_KEY_get_enc_flags(const struct ec_key_st* key);
void EC_KEY_set_enc_flags(struct ec_key_st* eckey, unsigned int flags);
enum anonymous_typeY22 EC_KEY_get_conv_form(const struct ec_key_st* key);
void EC_KEY_set_conv_form(struct ec_key_st* eckey, enum anonymous_typeY22 cform);
int EC_KEY_set_ex_data(struct ec_key_st* key, int idx, void* arg);
void* EC_KEY_get_ex_data(const struct ec_key_st* key, int idx);
void EC_KEY_set_asn1_flag(struct ec_key_st* eckey, int asn1_flag);
int EC_KEY_precompute_mult(struct ec_key_st* key, struct bignum_ctx* ctx);
int EC_KEY_generate_key(struct ec_key_st* key);
int EC_KEY_check_key(const struct ec_key_st* key);
int EC_KEY_can_sign(const struct ec_key_st* eckey);
int EC_KEY_set_public_key_affine_coordinates(struct ec_key_st* key, struct bignum_st* x, struct bignum_st* y);
unsigned long  int EC_KEY_key2buf(const struct ec_key_st* key, enum anonymous_typeY22 form, unsigned char** pbuf, struct bignum_ctx* ctx);
int EC_KEY_oct2key(struct ec_key_st* key, const unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
int EC_KEY_oct2priv(struct ec_key_st* key, const unsigned char* buf, unsigned long  int len);
unsigned long  int EC_KEY_priv2oct(const struct ec_key_st* key, unsigned char* buf, unsigned long  int len);
unsigned long  int EC_KEY_priv2buf(const struct ec_key_st* eckey, unsigned char** pbuf);
struct ec_key_st* d2i_ECPrivateKey(struct ec_key_st** key, const unsigned char** in, long len);
int i2d_ECPrivateKey(const struct ec_key_st* key, unsigned char** out);
struct ec_key_st* d2i_ECParameters(struct ec_key_st** key, const unsigned char** in, long len);
int i2d_ECParameters(const struct ec_key_st* key, unsigned char** out);
struct ec_key_st* o2i_ECPublicKey(struct ec_key_st** key, const unsigned char** in, long len);
int i2o_ECPublicKey(const struct ec_key_st* key, unsigned char** out);
int ECParameters_print(struct bio_st* bp, const struct ec_key_st* key);
int EC_KEY_print(struct bio_st* bp, const struct ec_key_st* key, int off);
int ECParameters_print_fp(struct __sFILE* fp, const struct ec_key_st* key);
int EC_KEY_print_fp(struct __sFILE* fp, const struct ec_key_st* key, int off);
const struct ec_key_method_st* EC_KEY_OpenSSL();
const struct ec_key_method_st* EC_KEY_get_default_method();
void EC_KEY_set_default_method(const struct ec_key_method_st* meth);
const struct ec_key_method_st* EC_KEY_get_method(const struct ec_key_st* key);
int EC_KEY_set_method(struct ec_key_st* key, const struct ec_key_method_st* meth);
struct ec_key_st* EC_KEY_new_method(struct engine_st* engine);
int ECDH_KDF_X9_62(unsigned char* out, unsigned long  int outlen, const unsigned char* Z, unsigned long  int Zlen, const unsigned char* sinfo, unsigned long  int sinfolen, const struct evp_md_st* md);
int ECDH_compute_key(void* out, unsigned long  int outlen, const struct ec_point_st* pub_key, const struct ec_key_st* ecdh, void* (*KDF)(const void*,unsigned long  int,void*,unsigned long  int*));
struct ECDSA_SIG_st* ECDSA_SIG_new();
void ECDSA_SIG_free(struct ECDSA_SIG_st* sig);
struct ECDSA_SIG_st* d2i_ECDSA_SIG(struct ECDSA_SIG_st** a, const unsigned char** in, long len);
int i2d_ECDSA_SIG(const struct ECDSA_SIG_st* a, unsigned char** out);
void ECDSA_SIG_get0(const struct ECDSA_SIG_st* sig, const struct bignum_st** pr, const struct bignum_st** ps);
const struct bignum_st* ECDSA_SIG_get0_r(const struct ECDSA_SIG_st* sig);
const struct bignum_st* ECDSA_SIG_get0_s(const struct ECDSA_SIG_st* sig);
int ECDSA_SIG_set0(struct ECDSA_SIG_st* sig, struct bignum_st* r, struct bignum_st* s);
struct ECDSA_SIG_st* ECDSA_do_sign(const unsigned char* dgst, int dgst_len, struct ec_key_st* eckey);
struct ECDSA_SIG_st* ECDSA_do_sign_ex(const unsigned char* dgst, int dgstlen, const struct bignum_st* kinv, const struct bignum_st* rp, struct ec_key_st* eckey);
int ECDSA_do_verify(const unsigned char* dgst, int dgst_len, const struct ECDSA_SIG_st* sig, struct ec_key_st* eckey);
int ECDSA_sign_setup(struct ec_key_st* eckey, struct bignum_ctx* ctx, struct bignum_st** kinv, struct bignum_st** rp);
int ECDSA_sign(int type, const unsigned char* dgst, int dgstlen, unsigned char* sig, unsigned int* siglen, struct ec_key_st* eckey);
int ECDSA_sign_ex(int type, const unsigned char* dgst, int dgstlen, unsigned char* sig, unsigned int* siglen, const struct bignum_st* kinv, const struct bignum_st* rp, struct ec_key_st* eckey);
int ECDSA_verify(int type, const unsigned char* dgst, int dgstlen, const unsigned char* sig, int siglen, struct ec_key_st* eckey);
int ECDSA_size(const struct ec_key_st* eckey);
struct ec_key_method_st* EC_KEY_METHOD_new(const struct ec_key_method_st* meth);
void EC_KEY_METHOD_free(struct ec_key_method_st* meth);
void EC_KEY_METHOD_set_init(struct ec_key_method_st* meth, int (*init)(struct ec_key_st*), void (*finish)(struct ec_key_st*), int (*copy)(struct ec_key_st*,const struct ec_key_st*), int (*set_group)(struct ec_key_st*,const struct ec_group_st*), int (*set_private)(struct ec_key_st*,const struct bignum_st*), int (*set_public)(struct ec_key_st*,const struct ec_point_st*));
void EC_KEY_METHOD_set_keygen(struct ec_key_method_st* meth, int (*keygen)(struct ec_key_st*));
void EC_KEY_METHOD_set_compute_key(struct ec_key_method_st* meth, int (*ckey)(unsigned char**,unsigned long  int*,const struct ec_point_st*,const struct ec_key_st*));
void EC_KEY_METHOD_set_sign(struct ec_key_method_st* meth, int (*sign)(int,const unsigned char*,int,unsigned char*,unsigned int*,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*), int (*sign_setup)(struct ec_key_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**), struct ECDSA_SIG_st* (*sign_sig)(const unsigned char*,int,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*));
void EC_KEY_METHOD_set_verify(struct ec_key_method_st* meth, int (*verify)(int,const unsigned char*,int,const unsigned char*,int,struct ec_key_st*), int (*verify_sig)(const unsigned char*,int,const struct ECDSA_SIG_st*,struct ec_key_st*));
void EC_KEY_METHOD_get_init(const struct ec_key_method_st* meth, int (**pinit)(struct ec_key_st*), void (**pfinish)(struct ec_key_st*), int (**pcopy)(struct ec_key_st*,const struct ec_key_st*), int (**pset_group)(struct ec_key_st*,const struct ec_group_st*), int (**pset_private)(struct ec_key_st*,const struct bignum_st*), int (**pset_public)(struct ec_key_st*,const struct ec_point_st*));
void EC_KEY_METHOD_get_keygen(const struct ec_key_method_st* meth, int (**pkeygen)(struct ec_key_st*));
void EC_KEY_METHOD_get_compute_key(const struct ec_key_method_st* meth, int (**pck)(unsigned char**,unsigned long  int*,const struct ec_point_st*,const struct ec_key_st*));
void EC_KEY_METHOD_get_sign(const struct ec_key_method_st* meth, int (**psign)(int,const unsigned char*,int,unsigned char*,unsigned int*,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*), int (**psign_setup)(struct ec_key_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**), struct ECDSA_SIG_st* (**psign_sig)(const unsigned char*,int,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*));
void EC_KEY_METHOD_get_verify(const struct ec_key_method_st* meth, int (**pverify)(int,const unsigned char*,int,const unsigned char*,int,struct ec_key_st*), int (**pverify_sig)(const unsigned char*,int,const struct ECDSA_SIG_st*,struct ec_key_st*));
int EVP_PKEY_CTX_set_rsa_padding(struct evp_pkey_ctx_st* ctx, int pad_mode);
int EVP_PKEY_CTX_get_rsa_padding(struct evp_pkey_ctx_st* ctx, int* pad_mode);
int EVP_PKEY_CTX_set_rsa_pss_saltlen(struct evp_pkey_ctx_st* ctx, int saltlen);
int EVP_PKEY_CTX_get_rsa_pss_saltlen(struct evp_pkey_ctx_st* ctx, int* saltlen);
int EVP_PKEY_CTX_set_rsa_keygen_bits(struct evp_pkey_ctx_st* ctx, int bits);
int EVP_PKEY_CTX_set1_rsa_keygen_pubexp(struct evp_pkey_ctx_st* ctx, struct bignum_st* pubexp);
int EVP_PKEY_CTX_set_rsa_keygen_primes(struct evp_pkey_ctx_st* ctx, int primes);
int EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(struct evp_pkey_ctx_st* ctx, int saltlen);
int EVP_PKEY_CTX_set_rsa_keygen_pubexp(struct evp_pkey_ctx_st* ctx, struct bignum_st* pubexp);
int EVP_PKEY_CTX_set_rsa_mgf1_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_mgf1_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_get_rsa_mgf1_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_get_rsa_mgf1_md_name(struct evp_pkey_ctx_st* ctx, char* name, unsigned long  int namelen);
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname);
int EVP_PKEY_CTX_set_rsa_pss_keygen_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_set_rsa_oaep_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_oaep_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_get_rsa_oaep_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_get_rsa_oaep_md_name(struct evp_pkey_ctx_st* ctx, char* name, unsigned long  int namelen);
int EVP_PKEY_CTX_set0_rsa_oaep_label(struct evp_pkey_ctx_st* ctx, void* label, int llen);
int EVP_PKEY_CTX_get0_rsa_oaep_label(struct evp_pkey_ctx_st* ctx, unsigned char** label);
struct rsa_st* RSA_new();
struct rsa_st* RSA_new_method(struct engine_st* engine);
int RSA_bits(const struct rsa_st* rsa);
int RSA_size(const struct rsa_st* rsa);
int RSA_security_bits(const struct rsa_st* rsa);
int RSA_set0_key(struct rsa_st* r, struct bignum_st* n, struct bignum_st* e, struct bignum_st* d);
int RSA_set0_factors(struct rsa_st* r, struct bignum_st* p, struct bignum_st* q);
int RSA_set0_crt_params(struct rsa_st* r, struct bignum_st* dmp1, struct bignum_st* dmq1, struct bignum_st* iqmp);
int RSA_set0_multi_prime_params(struct rsa_st* r, struct bignum_st* primes[], struct bignum_st* exps[], struct bignum_st* coeffs[], int pnum);
void RSA_get0_key(const struct rsa_st* r, const struct bignum_st** n, const struct bignum_st** e, const struct bignum_st** d);
void RSA_get0_factors(const struct rsa_st* r, const struct bignum_st** p, const struct bignum_st** q);
int RSA_get_multi_prime_extra_count(const struct rsa_st* r);
int RSA_get0_multi_prime_factors(const struct rsa_st* r, const struct bignum_st* primes[]);
void RSA_get0_crt_params(const struct rsa_st* r, const struct bignum_st** dmp1, const struct bignum_st** dmq1, const struct bignum_st** iqmp);
int RSA_get0_multi_prime_crt_params(const struct rsa_st* r, const struct bignum_st* exps[], const struct bignum_st* coeffs[]);
const struct bignum_st* RSA_get0_n(const struct rsa_st* d);
const struct bignum_st* RSA_get0_e(const struct rsa_st* d);
const struct bignum_st* RSA_get0_d(const struct rsa_st* d);
const struct bignum_st* RSA_get0_p(const struct rsa_st* d);
const struct bignum_st* RSA_get0_q(const struct rsa_st* d);
const struct bignum_st* RSA_get0_dmp1(const struct rsa_st* r);
const struct bignum_st* RSA_get0_dmq1(const struct rsa_st* r);
const struct bignum_st* RSA_get0_iqmp(const struct rsa_st* r);
const struct rsa_pss_params_st* RSA_get0_pss_params(const struct rsa_st* r);
void RSA_clear_flags(struct rsa_st* r, int flags);
int RSA_test_flags(const struct rsa_st* r, int flags);
void RSA_set_flags(struct rsa_st* r, int flags);
int RSA_get_version(struct rsa_st* r);
struct engine_st* RSA_get0_engine(const struct rsa_st* r);
struct rsa_st* RSA_generate_key(int bits, unsigned long  int e, void (*callback)(int,int,void*), void* cb_arg);
int RSA_generate_key_ex(struct rsa_st* rsa, int bits, struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_generate_multi_prime_key(struct rsa_st* rsa, int bits, int primes, struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_X931_derive_ex(struct rsa_st* rsa, struct bignum_st* p1, struct bignum_st* p2, struct bignum_st* q1, struct bignum_st* q2, const struct bignum_st* Xp1, const struct bignum_st* Xp2, const struct bignum_st* Xp, const struct bignum_st* Xq1, const struct bignum_st* Xq2, const struct bignum_st* Xq, const struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_X931_generate_key_ex(struct rsa_st* rsa, int bits, const struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_check_key(const struct rsa_st* anonymous_var_nameX2121);
int RSA_check_key_ex(const struct rsa_st* anonymous_var_nameX2122, struct bn_gencb_st* cb);
int RSA_public_encrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
int RSA_private_encrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
int RSA_public_decrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
int RSA_private_decrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
void RSA_free(struct rsa_st* r);
int RSA_up_ref(struct rsa_st* r);
int RSA_flags(const struct rsa_st* r);
void RSA_set_default_method(const struct rsa_meth_st* meth);
const struct rsa_meth_st* RSA_get_default_method();
const struct rsa_meth_st* RSA_null_method();
const struct rsa_meth_st* RSA_get_method(const struct rsa_st* rsa);
int RSA_set_method(struct rsa_st* rsa, const struct rsa_meth_st* meth);
const struct rsa_meth_st* RSA_PKCS1_OpenSSL();
struct rsa_st* d2i_RSAPublicKey(struct rsa_st** a, const unsigned char** in, long len);
int i2d_RSAPublicKey(const struct rsa_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSAPublicKey_it();
struct rsa_st* d2i_RSAPrivateKey(struct rsa_st** a, const unsigned char** in, long len);
int i2d_RSAPrivateKey(const struct rsa_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSAPrivateKey_it();
int RSA_pkey_ctx_ctrl(struct evp_pkey_ctx_st* ctx, int optype, int cmd, int p1, void* p2);
struct rsa_pss_params_st* RSA_PSS_PARAMS_new();
void RSA_PSS_PARAMS_free(struct rsa_pss_params_st* a);
struct rsa_pss_params_st* d2i_RSA_PSS_PARAMS(struct rsa_pss_params_st** a, const unsigned char** in, long len);
int i2d_RSA_PSS_PARAMS(const struct rsa_pss_params_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSA_PSS_PARAMS_it();
struct rsa_pss_params_st* RSA_PSS_PARAMS_dup(const struct rsa_pss_params_st* a);
struct rsa_oaep_params_st* RSA_OAEP_PARAMS_new();
void RSA_OAEP_PARAMS_free(struct rsa_oaep_params_st* a);
struct rsa_oaep_params_st* d2i_RSA_OAEP_PARAMS(struct rsa_oaep_params_st** a, const unsigned char** in, long len);
int i2d_RSA_OAEP_PARAMS(const struct rsa_oaep_params_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSA_OAEP_PARAMS_it();
int RSA_print_fp(struct __sFILE* fp, const struct rsa_st* r, int offset);
int RSA_print(struct bio_st* bp, const struct rsa_st* r, int offset);
int RSA_sign(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigret, unsigned int* siglen, struct rsa_st* rsa);
int RSA_verify(int type, const unsigned char* m, unsigned int m_length, const unsigned char* sigbuf, unsigned int siglen, struct rsa_st* rsa);
int RSA_sign_ASN1_OCTET_STRING(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigret, unsigned int* siglen, struct rsa_st* rsa);
int RSA_verify_ASN1_OCTET_STRING(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigbuf, unsigned int siglen, struct rsa_st* rsa);
int RSA_blinding_on(struct rsa_st* rsa, struct bignum_ctx* ctx);
void RSA_blinding_off(struct rsa_st* rsa);
struct bn_blinding_st* RSA_setup_blinding(struct rsa_st* rsa, struct bignum_ctx* ctx);
int RSA_padding_add_PKCS1_type_1(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_PKCS1_type_1(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_padding_add_PKCS1_type_2(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_PKCS1_type_2(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int PKCS1_MGF1(unsigned char* mask, long len, const unsigned char* seed, long seedlen, const struct evp_md_st* dgst);
int RSA_padding_add_PKCS1_OAEP(unsigned char* to, int tlen, const unsigned char* f, int fl, const unsigned char* p, int pl);
int RSA_padding_check_PKCS1_OAEP(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len, const unsigned char* p, int pl);
int RSA_padding_add_PKCS1_OAEP_mgf1(unsigned char* to, int tlen, const unsigned char* from, int flen, const unsigned char* param, int plen, const struct evp_md_st* md, const struct evp_md_st* mgf1md);
int RSA_padding_check_PKCS1_OAEP_mgf1(unsigned char* to, int tlen, const unsigned char* from, int flen, int num, const unsigned char* param, int plen, const struct evp_md_st* md, const struct evp_md_st* mgf1md);
int RSA_padding_add_none(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_none(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_padding_add_X931(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_X931(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_X931_hash_id(int nid);
int RSA_verify_PKCS1_PSS(struct rsa_st* rsa, const unsigned char* mHash, const struct evp_md_st* Hash, const unsigned char* EM, int sLen);
int RSA_padding_add_PKCS1_PSS(struct rsa_st* rsa, unsigned char* EM, const unsigned char* mHash, const struct evp_md_st* Hash, int sLen);
int RSA_verify_PKCS1_PSS_mgf1(struct rsa_st* rsa, const unsigned char* mHash, const struct evp_md_st* Hash, const struct evp_md_st* mgf1Hash, const unsigned char* EM, int sLen);
int RSA_padding_add_PKCS1_PSS_mgf1(struct rsa_st* rsa, unsigned char* EM, const unsigned char* mHash, const struct evp_md_st* Hash, const struct evp_md_st* mgf1Hash, int sLen);
int RSA_set_ex_data(struct rsa_st* r, int idx, void* arg);
void* RSA_get_ex_data(const struct rsa_st* r, int idx);
struct rsa_st* RSAPublicKey_dup(const struct rsa_st* a);
struct rsa_st* RSAPrivateKey_dup(const struct rsa_st* a);
struct rsa_meth_st* RSA_meth_new(const char* name, int flags);
void RSA_meth_free(struct rsa_meth_st* meth);
struct rsa_meth_st* RSA_meth_dup(const struct rsa_meth_st* meth);
const char* RSA_meth_get0_name(const struct rsa_meth_st* meth);
int RSA_meth_set1_name(struct rsa_meth_st* meth, const char* name);
int RSA_meth_get_flags(const struct rsa_meth_st* meth);
int RSA_meth_set_flags(struct rsa_meth_st* meth, int flags);
void* RSA_meth_get0_app_data(const struct rsa_meth_st* meth);
int RSA_meth_set0_app_data(struct rsa_meth_st* meth, void* app_data);
int (*RSA_meth_get_pub_enc(const struct rsa_meth_st* _function_pointer_result_var_name_a29))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_pub_enc(struct rsa_meth_st* rsa, int (*pub_enc)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_pub_dec(const struct rsa_meth_st* _function_pointer_result_var_name_a30))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_pub_dec(struct rsa_meth_st* rsa, int (*pub_dec)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_priv_enc(const struct rsa_meth_st* _function_pointer_result_var_name_a31))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_priv_enc(struct rsa_meth_st* rsa, int (*priv_enc)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_priv_dec(const struct rsa_meth_st* _function_pointer_result_var_name_a32))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_priv_dec(struct rsa_meth_st* rsa, int (*priv_dec)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_mod_exp(const struct rsa_meth_st* _function_pointer_result_var_name_a33))(struct bignum_st*,const struct bignum_st*,struct rsa_st*,struct bignum_ctx*);
int RSA_meth_set_mod_exp(struct rsa_meth_st* rsa, int (*mod_exp)(struct bignum_st*,const struct bignum_st*,struct rsa_st*,struct bignum_ctx*));
int (*RSA_meth_get_bn_mod_exp(const struct rsa_meth_st* _function_pointer_result_var_name_a34))(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int RSA_meth_set_bn_mod_exp(struct rsa_meth_st* rsa, int (*bn_mod_exp)(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*RSA_meth_get_init(const struct rsa_meth_st* _function_pointer_result_var_name_a35))(struct rsa_st*);
int RSA_meth_set_init(struct rsa_meth_st* rsa, int (*init)(struct rsa_st*));
int (*RSA_meth_get_finish(const struct rsa_meth_st* _function_pointer_result_var_name_a36))(struct rsa_st*);
int RSA_meth_set_finish(struct rsa_meth_st* rsa, int (*finish)(struct rsa_st*));
int (*RSA_meth_get_sign(const struct rsa_meth_st* _function_pointer_result_var_name_a37))(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st*);
int RSA_meth_set_sign(struct rsa_meth_st* rsa, int (*sign)(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st*));
int (*RSA_meth_get_verify(const struct rsa_meth_st* _function_pointer_result_var_name_a38))(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st*);
int RSA_meth_set_verify(struct rsa_meth_st* rsa, int (*verify)(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st*));
int (*RSA_meth_get_keygen(const struct rsa_meth_st* _function_pointer_result_var_name_a39))(struct rsa_st*,int,struct bignum_st*,struct bn_gencb_st*);
int RSA_meth_set_keygen(struct rsa_meth_st* rsa, int (*keygen)(struct rsa_st*,int,struct bignum_st*,struct bn_gencb_st*));
int (*RSA_meth_get_multi_prime_keygen(const struct rsa_meth_st* _function_pointer_result_var_name_a40))(struct rsa_st*,int,int,struct bignum_st*,struct bn_gencb_st*);
int RSA_meth_set_multi_prime_keygen(struct rsa_meth_st* meth, int (*keygen)(struct rsa_st*,int,int,struct bignum_st*,struct bn_gencb_st*));
int EVP_PKEY_CTX_set_dh_paramgen_type(struct evp_pkey_ctx_st* ctx, int typ);
int EVP_PKEY_CTX_set_dh_paramgen_gindex(struct evp_pkey_ctx_st* ctx, int gindex);
int EVP_PKEY_CTX_set_dh_paramgen_seed(struct evp_pkey_ctx_st* ctx, const unsigned char* seed, unsigned long  int seedlen);
int EVP_PKEY_CTX_set_dh_paramgen_prime_len(struct evp_pkey_ctx_st* ctx, int pbits);
int EVP_PKEY_CTX_set_dh_paramgen_subprime_len(struct evp_pkey_ctx_st* ctx, int qlen);
int EVP_PKEY_CTX_set_dh_paramgen_generator(struct evp_pkey_ctx_st* ctx, int gen);
int EVP_PKEY_CTX_set_dh_nid(struct evp_pkey_ctx_st* ctx, int nid);
int EVP_PKEY_CTX_set_dh_rfc5114(struct evp_pkey_ctx_st* ctx, int gen);
int EVP_PKEY_CTX_set_dhx_rfc5114(struct evp_pkey_ctx_st* ctx, int gen);
int EVP_PKEY_CTX_set_dh_pad(struct evp_pkey_ctx_st* ctx, int pad);
int EVP_PKEY_CTX_set_dh_kdf_type(struct evp_pkey_ctx_st* ctx, int kdf);
int EVP_PKEY_CTX_get_dh_kdf_type(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set0_dh_kdf_oid(struct evp_pkey_ctx_st* ctx, struct asn1_object_st* oid);
int EVP_PKEY_CTX_get0_dh_kdf_oid(struct evp_pkey_ctx_st* ctx, struct asn1_object_st** oid);
int EVP_PKEY_CTX_set_dh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_get_dh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_set_dh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int len);
int EVP_PKEY_CTX_get_dh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int* len);
int EVP_PKEY_CTX_set0_dh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char* ukm, int len);
int EVP_PKEY_CTX_get0_dh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char** ukm);
const struct ASN1_ITEM_st* DHparams_it();
struct dh_st* DHparams_dup(const struct dh_st* a);
const struct dh_method* DH_OpenSSL();
void DH_set_default_method(const struct dh_method* meth);
const struct dh_method* DH_get_default_method();
int DH_set_method(struct dh_st* dh, const struct dh_method* meth);
struct dh_st* DH_new_method(struct engine_st* engine);
struct dh_st* DH_new();
void DH_free(struct dh_st* dh);
int DH_up_ref(struct dh_st* dh);
int DH_bits(const struct dh_st* dh);
int DH_size(const struct dh_st* dh);
int DH_security_bits(const struct dh_st* dh);
int DH_set_ex_data(struct dh_st* d, int idx, void* arg);
void* DH_get_ex_data(const struct dh_st* d, int idx);
int DH_generate_parameters_ex(struct dh_st* dh, int prime_len, int generator, struct bn_gencb_st* cb);
int DH_check_params_ex(const struct dh_st* dh);
int DH_check_ex(const struct dh_st* dh);
int DH_check_pub_key_ex(const struct dh_st* dh, const struct bignum_st* pub_key);
int DH_check_params(const struct dh_st* dh, int* ret);
int DH_check(const struct dh_st* dh, int* codes);
int DH_check_pub_key(const struct dh_st* dh, const struct bignum_st* pub_key, int* codes);
int DH_generate_key(struct dh_st* dh);
int DH_compute_key(unsigned char* key, const struct bignum_st* pub_key, struct dh_st* dh);
int DH_compute_key_padded(unsigned char* key, const struct bignum_st* pub_key, struct dh_st* dh);
struct dh_st* d2i_DHparams(struct dh_st** a, const unsigned char** in, long len);
int i2d_DHparams(const struct dh_st* a, unsigned char** out);
struct dh_st* d2i_DHxparams(struct dh_st** a, const unsigned char** in, long len);
int i2d_DHxparams(const struct dh_st* a, unsigned char** out);
int DHparams_print_fp(struct __sFILE* fp, const struct dh_st* x);
int DHparams_print(struct bio_st* bp, const struct dh_st* x);
struct dh_st* DH_get_1024_160();
struct dh_st* DH_get_2048_224();
struct dh_st* DH_get_2048_256();
struct dh_st* DH_new_by_nid(int nid);
int DH_get_nid(const struct dh_st* dh);
int DH_KDF_X9_42(unsigned char* out, unsigned long  int outlen, const unsigned char* Z, unsigned long  int Zlen, struct asn1_object_st* key_oid, const unsigned char* ukm, unsigned long  int ukmlen, const struct evp_md_st* md);
void DH_get0_pqg(const struct dh_st* dh, const struct bignum_st** p, const struct bignum_st** q, const struct bignum_st** g);
int DH_set0_pqg(struct dh_st* dh, struct bignum_st* p, struct bignum_st* q, struct bignum_st* g);
void DH_get0_key(const struct dh_st* dh, const struct bignum_st** pub_key, const struct bignum_st** priv_key);
int DH_set0_key(struct dh_st* dh, struct bignum_st* pub_key, struct bignum_st* priv_key);
const struct bignum_st* DH_get0_p(const struct dh_st* dh);
const struct bignum_st* DH_get0_q(const struct dh_st* dh);
const struct bignum_st* DH_get0_g(const struct dh_st* dh);
const struct bignum_st* DH_get0_priv_key(const struct dh_st* dh);
const struct bignum_st* DH_get0_pub_key(const struct dh_st* dh);
void DH_clear_flags(struct dh_st* dh, int flags);
int DH_test_flags(const struct dh_st* dh, int flags);
void DH_set_flags(struct dh_st* dh, int flags);
struct engine_st* DH_get0_engine(struct dh_st* d);
long DH_get_length(const struct dh_st* dh);
int DH_set_length(struct dh_st* dh, long length);
struct dh_method* DH_meth_new(const char* name, int flags);
void DH_meth_free(struct dh_method* dhm);
struct dh_method* DH_meth_dup(const struct dh_method* dhm);
const char* DH_meth_get0_name(const struct dh_method* dhm);
int DH_meth_set1_name(struct dh_method* dhm, const char* name);
int DH_meth_get_flags(const struct dh_method* dhm);
int DH_meth_set_flags(struct dh_method* dhm, int flags);
void* DH_meth_get0_app_data(const struct dh_method* dhm);
int DH_meth_set0_app_data(struct dh_method* dhm, void* app_data);
int (*DH_meth_get_generate_key(const struct dh_method* _function_pointer_result_var_name_a41))(struct dh_st*);
int DH_meth_set_generate_key(struct dh_method* dhm, int (*generate_key)(struct dh_st*));
int (*DH_meth_get_compute_key(const struct dh_method* _function_pointer_result_var_name_a42))(unsigned char*,const struct bignum_st*,struct dh_st*);
int DH_meth_set_compute_key(struct dh_method* dhm, int (*compute_key)(unsigned char*,const struct bignum_st*,struct dh_st*));
int (*DH_meth_get_bn_mod_exp(const struct dh_method* _function_pointer_result_var_name_a43))(const struct dh_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int DH_meth_set_bn_mod_exp(struct dh_method* dhm, int (*bn_mod_exp)(const struct dh_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*DH_meth_get_init(const struct dh_method* _function_pointer_result_var_name_a44))(struct dh_st*);
int DH_meth_set_init(struct dh_method* dhm, int (*init)(struct dh_st*));
int (*DH_meth_get_finish(const struct dh_method* _function_pointer_result_var_name_a45))(struct dh_st*);
int DH_meth_set_finish(struct dh_method* dhm, int (*finish)(struct dh_st*));
int (*DH_meth_get_generate_params(const struct dh_method* _function_pointer_result_var_name_a46))(struct dh_st*,int,int,struct bn_gencb_st*);
int DH_meth_set_generate_params(struct dh_method* dhm, int (*generate_params)(struct dh_st*,int,int,struct bn_gencb_st*));
struct dh_st* DH_generate_parameters(int prime_len, int generator, void (*callback)(int,int,void*), void* cb_arg);
int EVP_PKEY_CTX_set_dsa_paramgen_bits(struct evp_pkey_ctx_st* ctx, int nbits);
int EVP_PKEY_CTX_set_dsa_paramgen_q_bits(struct evp_pkey_ctx_st* ctx, int qbits);
int EVP_PKEY_CTX_set_dsa_paramgen_md_props(struct evp_pkey_ctx_st* ctx, const char* md_name, const char* md_properties);
int EVP_PKEY_CTX_set_dsa_paramgen_gindex(struct evp_pkey_ctx_st* ctx, int gindex);
int EVP_PKEY_CTX_set_dsa_paramgen_type(struct evp_pkey_ctx_st* ctx, const char* name);
int EVP_PKEY_CTX_set_dsa_paramgen_seed(struct evp_pkey_ctx_st* ctx, const unsigned char* seed, unsigned long  int seedlen);
int EVP_PKEY_CTX_set_dsa_paramgen_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
struct DSA_SIG_st* DSA_SIG_new();
void DSA_SIG_free(struct DSA_SIG_st* a);
struct DSA_SIG_st* d2i_DSA_SIG(struct DSA_SIG_st** a, const unsigned char** in, long len);
int i2d_DSA_SIG(const struct DSA_SIG_st* a, unsigned char** out);
void DSA_SIG_get0(const struct DSA_SIG_st* sig, const struct bignum_st** pr, const struct bignum_st** ps);
int DSA_SIG_set0(struct DSA_SIG_st* sig, struct bignum_st* r, struct bignum_st* s);
struct dsa_st* DSAparams_dup(const struct dsa_st* a);
struct DSA_SIG_st* DSA_do_sign(const unsigned char* dgst, int dlen, struct dsa_st* dsa);
int DSA_do_verify(const unsigned char* dgst, int dgst_len, struct DSA_SIG_st* sig, struct dsa_st* dsa);
const struct dsa_method* DSA_OpenSSL();
void DSA_set_default_method(const struct dsa_method* anonymous_var_nameX2140);
const struct dsa_method* DSA_get_default_method();
int DSA_set_method(struct dsa_st* dsa, const struct dsa_method* anonymous_var_nameX2141);
const struct dsa_method* DSA_get_method(struct dsa_st* d);
struct dsa_st* DSA_new();
struct dsa_st* DSA_new_method(struct engine_st* engine);
void DSA_free(struct dsa_st* r);
int DSA_up_ref(struct dsa_st* r);
int DSA_size(const struct dsa_st* anonymous_var_nameX2142);
int DSA_bits(const struct dsa_st* d);
int DSA_security_bits(const struct dsa_st* d);
int DSA_sign_setup(struct dsa_st* dsa, struct bignum_ctx* ctx_in, struct bignum_st** kinvp, struct bignum_st** rp);
int DSA_sign(int type, const unsigned char* dgst, int dlen, unsigned char* sig, unsigned int* siglen, struct dsa_st* dsa);
int DSA_verify(int type, const unsigned char* dgst, int dgst_len, const unsigned char* sigbuf, int siglen, struct dsa_st* dsa);
int DSA_set_ex_data(struct dsa_st* d, int idx, void* arg);
void* DSA_get_ex_data(const struct dsa_st* d, int idx);
struct dsa_st* d2i_DSAPublicKey(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSAPublicKey(const struct dsa_st* a, unsigned char** out);
struct dsa_st* d2i_DSAPrivateKey(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSAPrivateKey(const struct dsa_st* a, unsigned char** out);
struct dsa_st* d2i_DSAparams(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSAparams(const struct dsa_st* a, unsigned char** out);
struct dsa_st* DSA_generate_parameters(int bits, unsigned char* seed, int seed_len, int* counter_ret, unsigned long  int* h_ret, void (*callback)(int,int,void*), void* cb_arg);
int DSA_generate_parameters_ex(struct dsa_st* dsa, int bits, const unsigned char* seed, int seed_len, int* counter_ret, unsigned long  int* h_ret, struct bn_gencb_st* cb);
int DSA_generate_key(struct dsa_st* a);
int DSAparams_print(struct bio_st* bp, const struct dsa_st* x);
int DSA_print(struct bio_st* bp, const struct dsa_st* x, int off);
int DSAparams_print_fp(struct __sFILE* fp, const struct dsa_st* x);
int DSA_print_fp(struct __sFILE* bp, const struct dsa_st* x, int off);
struct dh_st* DSA_dup_DH(const struct dsa_st* r);
void DSA_get0_pqg(const struct dsa_st* d, const struct bignum_st** p, const struct bignum_st** q, const struct bignum_st** g);
int DSA_set0_pqg(struct dsa_st* d, struct bignum_st* p, struct bignum_st* q, struct bignum_st* g);
void DSA_get0_key(const struct dsa_st* d, const struct bignum_st** pub_key, const struct bignum_st** priv_key);
int DSA_set0_key(struct dsa_st* d, struct bignum_st* pub_key, struct bignum_st* priv_key);
const struct bignum_st* DSA_get0_p(const struct dsa_st* d);
const struct bignum_st* DSA_get0_q(const struct dsa_st* d);
const struct bignum_st* DSA_get0_g(const struct dsa_st* d);
const struct bignum_st* DSA_get0_pub_key(const struct dsa_st* d);
const struct bignum_st* DSA_get0_priv_key(const struct dsa_st* d);
void DSA_clear_flags(struct dsa_st* d, int flags);
int DSA_test_flags(const struct dsa_st* d, int flags);
void DSA_set_flags(struct dsa_st* d, int flags);
struct engine_st* DSA_get0_engine(struct dsa_st* d);
struct dsa_method* DSA_meth_new(const char* name, int flags);
void DSA_meth_free(struct dsa_method* dsam);
struct dsa_method* DSA_meth_dup(const struct dsa_method* dsam);
const char* DSA_meth_get0_name(const struct dsa_method* dsam);
int DSA_meth_set1_name(struct dsa_method* dsam, const char* name);
int DSA_meth_get_flags(const struct dsa_method* dsam);
int DSA_meth_set_flags(struct dsa_method* dsam, int flags);
void* DSA_meth_get0_app_data(const struct dsa_method* dsam);
int DSA_meth_set0_app_data(struct dsa_method* dsam, void* app_data);
struct DSA_SIG_st* (*DSA_meth_get_sign(const struct dsa_method* _function_pointer_result_var_name_a47))(const unsigned char*,int,struct dsa_st*);
int DSA_meth_set_sign(struct dsa_method* dsam, struct DSA_SIG_st* (*sign)(const unsigned char*,int,struct dsa_st*));
int (*DSA_meth_get_sign_setup(const struct dsa_method* _function_pointer_result_var_name_a48))(struct dsa_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**);
int DSA_meth_set_sign_setup(struct dsa_method* dsam, int (*sign_setup)(struct dsa_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**));
int (*DSA_meth_get_verify(const struct dsa_method* _function_pointer_result_var_name_a49))(const unsigned char*,int,struct DSA_SIG_st*,struct dsa_st*);
int DSA_meth_set_verify(struct dsa_method* dsam, int (*verify)(const unsigned char*,int,struct DSA_SIG_st*,struct dsa_st*));
int (*DSA_meth_get_mod_exp(const struct dsa_method* _function_pointer_result_var_name_a50))(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int DSA_meth_set_mod_exp(struct dsa_method* dsam, int (*mod_exp)(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*DSA_meth_get_bn_mod_exp(const struct dsa_method* _function_pointer_result_var_name_a51))(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int DSA_meth_set_bn_mod_exp(struct dsa_method* dsam, int (*bn_mod_exp)(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*DSA_meth_get_init(const struct dsa_method* _function_pointer_result_var_name_a52))(struct dsa_st*);
int DSA_meth_set_init(struct dsa_method* dsam, int (*init)(struct dsa_st*));
int (*DSA_meth_get_finish(const struct dsa_method* _function_pointer_result_var_name_a53))(struct dsa_st*);
int DSA_meth_set_finish(struct dsa_method* dsam, int (*finish)(struct dsa_st*));
int (*DSA_meth_get_paramgen(const struct dsa_method* _function_pointer_result_var_name_a54))(struct dsa_st*,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st*);
int DSA_meth_set_paramgen(struct dsa_method* dsam, int (*paramgen)(struct dsa_st*,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st*));
int (*DSA_meth_get_keygen(const struct dsa_method* _function_pointer_result_var_name_a55))(struct dsa_st*);
int DSA_meth_set_keygen(struct dsa_method* dsam, int (*keygen)(struct dsa_st*));
int SHA1_Init(struct SHAstate_st* c);
int SHA1_Update(struct SHAstate_st* c, const void* data, unsigned long  int len);
int SHA1_Final(unsigned char* md, struct SHAstate_st* c);
void SHA1_Transform(struct SHAstate_st* c, const unsigned char* data);
unsigned char* SHA1(const unsigned char* d, unsigned long  int n, unsigned char* md);
int SHA224_Init(struct SHA256state_st* c);
int SHA224_Update(struct SHA256state_st* c, const void* data, unsigned long  int len);
int SHA224_Final(unsigned char* md, struct SHA256state_st* c);
int SHA256_Init(struct SHA256state_st* c);
int SHA256_Update(struct SHA256state_st* c, const void* data, unsigned long  int len);
int SHA256_Final(unsigned char* md, struct SHA256state_st* c);
void SHA256_Transform(struct SHA256state_st* c, const unsigned char* data);
unsigned char* SHA224(const unsigned char* d, unsigned long  int n, unsigned char* md);
unsigned char* SHA256(const unsigned char* d, unsigned long  int n, unsigned char* md);
int SHA384_Init(struct SHA512state_st* c);
int SHA384_Update(struct SHA512state_st* c, const void* data, unsigned long  int len);
int SHA384_Final(unsigned char* md, struct SHA512state_st* c);
int SHA512_Init(struct SHA512state_st* c);
int SHA512_Update(struct SHA512state_st* c, const void* data, unsigned long  int len);
int SHA512_Final(unsigned char* md, struct SHA512state_st* c);
void SHA512_Transform(struct SHA512state_st* c, const unsigned char* data);
unsigned char* SHA384(const unsigned char* d, unsigned long  int n, unsigned char* md);
unsigned char* SHA512(const unsigned char* d, unsigned long  int n, unsigned char* md);
int OPENSSL_LH_error(struct lhash_st* lh);
struct lhash_st* OPENSSL_LH_new(unsigned long  int (*h)(const void*), int (*c)(const void*,const void*));
struct lhash_st* OPENSSL_LH_set_thunks(struct lhash_st* lh, unsigned long  int (*hw)(const void*,unsigned long  int (*)(const void*)), int (*cw)(const void*,const void*,int (*)(const void*,const void*)), void (*daw)(void*,void (*)(void*)), void (*daaw)(void*,void*,void (*)(void*,void*)));
void OPENSSL_LH_free(struct lhash_st* lh);
void OPENSSL_LH_flush(struct lhash_st* lh);
void* OPENSSL_LH_insert(struct lhash_st* lh, void* data);
void* OPENSSL_LH_delete(struct lhash_st* lh, const void* data);
void* OPENSSL_LH_retrieve(struct lhash_st* lh, const void* data);
void OPENSSL_LH_doall(struct lhash_st* lh, void (*func)(void*));
void OPENSSL_LH_doall_arg(struct lhash_st* lh, void (*func)(void*,void*), void* arg);
void OPENSSL_LH_doall_arg_thunk(struct lhash_st* lh, void (*daaw)(void*,void*,void (*)(void*,void*)), void (*fn)(void*,void*), void* arg);
unsigned long  int OPENSSL_LH_strhash(const char* c);
unsigned long  int OPENSSL_LH_num_items(const struct lhash_st* lh);
unsigned long  int OPENSSL_LH_get_down_load(const struct lhash_st* lh);
void OPENSSL_LH_set_down_load(struct lhash_st* lh, unsigned long  int down_load);
void OPENSSL_LH_stats(const struct lhash_st* lh, struct __sFILE* fp);
void OPENSSL_LH_node_stats(const struct lhash_st* lh, struct __sFILE* fp);
void OPENSSL_LH_node_usage_stats(const struct lhash_st* lh, struct __sFILE* fp);
void OPENSSL_LH_stats_bio(const struct lhash_st* lh, struct bio_st* out);
void OPENSSL_LH_node_stats_bio(const struct lhash_st* lh, struct bio_st* out);
void OPENSSL_LH_node_usage_stats_bio(const struct lhash_st* lh, struct bio_st* out);
int X509_TRUST_set(int* t, int trust);
int X509_TRUST_get_count();
struct x509_trust_st* X509_TRUST_get0(int idx);
int X509_TRUST_get_by_id(int id);
int X509_TRUST_add(int id, int flags, int (*ck)(struct x509_trust_st*,struct x509_st*,int), const char* name, int arg1, void* arg2);
void X509_TRUST_cleanup();
int X509_TRUST_get_flags(const struct x509_trust_st* xp);
char* X509_TRUST_get0_name(const struct x509_trust_st* xp);
int X509_TRUST_get_trust(const struct x509_trust_st* xp);
int X509_trusted(const struct x509_st* x);
int X509_add1_trust_object(struct x509_st* x, const struct asn1_object_st* obj);
int X509_add1_reject_object(struct x509_st* x, const struct asn1_object_st* obj);
void X509_trust_clear(struct x509_st* x);
void X509_reject_clear(struct x509_st* x);
struct stack_st_ASN1_OBJECT* X509_get0_trust_objects(struct x509_st* x);
struct stack_st_ASN1_OBJECT* X509_get0_reject_objects(struct x509_st* x);
int (*X509_TRUST_set_default(int (*_function_pointer_result_var_name_a56)(int,struct x509_st*,int)))(int,struct x509_st*,int);
int X509_check_trust(struct x509_st* x, int id, int flags);
int X509_verify_cert(struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_verify(struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_build_chain(struct x509_st* target, struct stack_st_X509* certs, struct x509_store_st* store, int with_self_signed, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_set_depth(struct x509_store_st* store, int depth);
int X509_STORE_CTX_print_verify_cb(int ok, struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_depth(struct x509_store_ctx_st* ctx, int depth);
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT* h, enum anonymous_typeY27 type, const struct X509_name_st* name);
struct x509_object_st* X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT* h, enum anonymous_typeY27 type, const struct X509_name_st* name);
struct x509_object_st* X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT* h, struct x509_object_st* x);
int X509_OBJECT_up_ref_count(struct x509_object_st* a);
struct x509_object_st* X509_OBJECT_new();
void X509_OBJECT_free(struct x509_object_st* a);
enum anonymous_typeY27 X509_OBJECT_get_type(const struct x509_object_st* a);
struct x509_st* X509_OBJECT_get0_X509(const struct x509_object_st* a);
int X509_OBJECT_set1_X509(struct x509_object_st* a, struct x509_st* obj);
struct X509_crl_st* X509_OBJECT_get0_X509_CRL(const struct x509_object_st* a);
int X509_OBJECT_set1_X509_CRL(struct x509_object_st* a, struct X509_crl_st* obj);
struct x509_store_st* X509_STORE_new();
void X509_STORE_free(struct x509_store_st* xs);
int X509_STORE_lock(struct x509_store_st* xs);
int X509_STORE_unlock(struct x509_store_st* xs);
int X509_STORE_up_ref(struct x509_store_st* xs);
struct stack_st_X509_OBJECT* X509_STORE_get0_objects(const struct x509_store_st* xs);
struct stack_st_X509_OBJECT* X509_STORE_get1_objects(struct x509_store_st* xs);
struct stack_st_X509* X509_STORE_get1_all_certs(struct x509_store_st* xs);
struct stack_st_X509* X509_STORE_CTX_get1_certs(struct x509_store_ctx_st* xs, const struct X509_name_st* nm);
struct stack_st_X509_CRL* X509_STORE_CTX_get1_crls(const struct x509_store_ctx_st* st, const struct X509_name_st* nm);
int X509_STORE_set_flags(struct x509_store_st* xs, unsigned long  int flags);
int X509_STORE_set_purpose(struct x509_store_st* xs, int purpose);
int X509_STORE_set_trust(struct x509_store_st* xs, int trust);
int X509_STORE_set1_param(struct x509_store_st* xs, const struct X509_VERIFY_PARAM_st* pm);
struct X509_VERIFY_PARAM_st* X509_STORE_get0_param(const struct x509_store_st* xs);
void X509_STORE_set_verify(struct x509_store_st* xs, int (*verify)(struct x509_store_ctx_st*));
void X509_STORE_CTX_set_verify(struct x509_store_ctx_st* ctx, int (*verify)(struct x509_store_ctx_st*));
int (*X509_STORE_get_verify(const struct x509_store_st* xs))(struct x509_store_ctx_st*);
void X509_STORE_set_verify_cb(struct x509_store_st* xs, int (*verify_cb)(int,struct x509_store_ctx_st*));
int (*X509_STORE_get_verify_cb(const struct x509_store_st* xs))(int,struct x509_store_ctx_st*);
void X509_STORE_set_get_issuer(struct x509_store_st* xs, int (*get_issuer)(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*));
int (*X509_STORE_get_get_issuer(const struct x509_store_st* xs))(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*);
void X509_STORE_set_check_issued(struct x509_store_st* xs, int (*check_issued)(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*));
int (*X509_STORE_get_check_issued(const struct x509_store_st* s))(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*);
void X509_STORE_set_check_revocation(struct x509_store_st* xs, int (*check_revocation)(struct x509_store_ctx_st*));
int (*X509_STORE_get_check_revocation(const struct x509_store_st* xs))(struct x509_store_ctx_st*);
void X509_STORE_set_get_crl(struct x509_store_st* xs, int (*get_crl)(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*));
int (*X509_STORE_get_get_crl(const struct x509_store_st* xs))(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*);
void X509_STORE_set_check_crl(struct x509_store_st* xs, int (*check_crl)(struct x509_store_ctx_st*,struct X509_crl_st*));
int (*X509_STORE_get_check_crl(const struct x509_store_st* xs))(struct x509_store_ctx_st*,struct X509_crl_st*);
void X509_STORE_set_cert_crl(struct x509_store_st* xs, int (*cert_crl)(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*));
int (*X509_STORE_get_cert_crl(const struct x509_store_st* xs))(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*);
void X509_STORE_set_check_policy(struct x509_store_st* xs, int (*check_policy)(struct x509_store_ctx_st*));
int (*X509_STORE_get_check_policy(const struct x509_store_st* s))(struct x509_store_ctx_st*);
void X509_STORE_set_lookup_certs(struct x509_store_st* xs, struct stack_st_X509* (*lookup_certs)(struct x509_store_ctx_st*,const struct X509_name_st*));
struct stack_st_X509* (*X509_STORE_get_lookup_certs(const struct x509_store_st* s))(struct x509_store_ctx_st*,const struct X509_name_st*);
void X509_STORE_set_lookup_crls(struct x509_store_st* xs, struct stack_st_X509_CRL* (*lookup_crls)(const struct x509_store_ctx_st*,const struct X509_name_st*));
struct stack_st_X509_CRL* (*X509_STORE_get_lookup_crls(const struct x509_store_st* xs))(const struct x509_store_ctx_st*,const struct X509_name_st*);
void X509_STORE_set_cleanup(struct x509_store_st* xs, int (*cleanup)(struct x509_store_ctx_st*));
int (*X509_STORE_get_cleanup(const struct x509_store_st* xs))(struct x509_store_ctx_st*);
int X509_STORE_set_ex_data(struct x509_store_st* xs, int idx, void* data);
void* X509_STORE_get_ex_data(const struct x509_store_st* xs, int idx);
struct x509_store_ctx_st* X509_STORE_CTX_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_store_ctx_st* X509_STORE_CTX_new();
int X509_STORE_CTX_get1_issuer(struct x509_st** issuer, struct x509_store_ctx_st* ctx, struct x509_st* x);
void X509_STORE_CTX_free(struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_init(struct x509_store_ctx_st* ctx, struct x509_store_st* trust_store, struct x509_st* target, struct stack_st_X509* untrusted);
int X509_STORE_CTX_init_rpk(struct x509_store_ctx_st* ctx, struct x509_store_st* trust_store, struct evp_pkey_st* rpk);
void X509_STORE_CTX_set0_trusted_stack(struct x509_store_ctx_st* ctx, struct stack_st_X509* sk);
void X509_STORE_CTX_cleanup(struct x509_store_ctx_st* ctx);
struct x509_store_st* X509_STORE_CTX_get0_store(const struct x509_store_ctx_st* ctx);
struct x509_st* X509_STORE_CTX_get0_cert(const struct x509_store_ctx_st* ctx);
struct evp_pkey_st* X509_STORE_CTX_get0_rpk(const struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_STORE_CTX_get0_untrusted(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set0_untrusted(struct x509_store_ctx_st* ctx, struct stack_st_X509* sk);
void X509_STORE_CTX_set_verify_cb(struct x509_store_ctx_st* ctx, int (*verify)(int,struct x509_store_ctx_st*));
int (*X509_STORE_CTX_get_verify_cb(const struct x509_store_ctx_st* ctx))(int,struct x509_store_ctx_st*);
int (*X509_STORE_CTX_get_verify(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
int (*X509_STORE_CTX_get_get_issuer(const struct x509_store_ctx_st* ctx))(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*);
int (*X509_STORE_CTX_get_check_issued(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*);
int (*X509_STORE_CTX_get_check_revocation(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
void X509_STORE_CTX_set_get_crl(struct x509_store_ctx_st* ctx, int (*get_crl)(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*));
int (*X509_STORE_CTX_get_get_crl(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*);
int (*X509_STORE_CTX_get_check_crl(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct X509_crl_st*);
int (*X509_STORE_CTX_get_cert_crl(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*);
int (*X509_STORE_CTX_get_check_policy(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
struct stack_st_X509* (*X509_STORE_CTX_get_lookup_certs(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,const struct X509_name_st*);
struct stack_st_X509_CRL* (*X509_STORE_CTX_get_lookup_crls(const struct x509_store_ctx_st* ctx))(const struct x509_store_ctx_st*,const struct X509_name_st*);
int (*X509_STORE_CTX_get_cleanup(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
struct x509_lookup_st* X509_STORE_add_lookup(struct x509_store_st* xs, struct x509_lookup_method_st* m);
struct x509_lookup_method_st* X509_LOOKUP_hash_dir();
struct x509_lookup_method_st* X509_LOOKUP_file();
struct x509_lookup_method_st* X509_LOOKUP_store();
struct x509_lookup_method_st* X509_LOOKUP_meth_new(const char* name);
void X509_LOOKUP_meth_free(struct x509_lookup_method_st* method);
int X509_LOOKUP_meth_set_new_item(struct x509_lookup_method_st* method, int (*new_item)(struct x509_lookup_st*));
int (*X509_LOOKUP_meth_get_new_item(const struct x509_lookup_method_st* _function_pointer_result_var_name_a57))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_free(struct x509_lookup_method_st* method, void (*free_fn)(struct x509_lookup_st*));
void (*X509_LOOKUP_meth_get_free(const struct x509_lookup_method_st* _function_pointer_result_var_name_a58))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_init(struct x509_lookup_method_st* method, int (*init)(struct x509_lookup_st*));
int (*X509_LOOKUP_meth_get_init(const struct x509_lookup_method_st* _function_pointer_result_var_name_a59))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_shutdown(struct x509_lookup_method_st* method, int (*shutdown)(struct x509_lookup_st*));
int (*X509_LOOKUP_meth_get_shutdown(const struct x509_lookup_method_st* _function_pointer_result_var_name_a60))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_ctrl(struct x509_lookup_method_st* method, int (*ctrl_fn)(struct x509_lookup_st*,int,const char*,long,char**));
int (*X509_LOOKUP_meth_get_ctrl(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,int,const char*,long,char**);
int X509_LOOKUP_meth_set_get_by_subject(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY27,const struct X509_name_st*,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_subject(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY27,const struct X509_name_st*,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_issuer_serial(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY27,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_issuer_serial(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY27,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_fingerprint(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY27,const unsigned char*,int,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_fingerprint(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY27,const unsigned char*,int,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_alias(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY27,const char*,int,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_alias(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY27,const char*,int,struct x509_object_st*);
int X509_STORE_add_cert(struct x509_store_st* xs, struct x509_st* x);
int X509_STORE_add_crl(struct x509_store_st* xs, struct X509_crl_st* x);
int X509_STORE_CTX_get_by_subject(const struct x509_store_ctx_st* vs, enum anonymous_typeY27 type, const struct X509_name_st* name, struct x509_object_st* ret);
struct x509_object_st* X509_STORE_CTX_get_obj_by_subject(struct x509_store_ctx_st* vs, enum anonymous_typeY27 type, const struct X509_name_st* name);
int X509_LOOKUP_ctrl(struct x509_lookup_st* ctx, int cmd, const char* argc, long argl, char** ret);
int X509_LOOKUP_ctrl_ex(struct x509_lookup_st* ctx, int cmd, const char* argc, long argl, char** ret, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_load_cert_file(struct x509_lookup_st* ctx, const char* file, int type);
int X509_load_cert_file_ex(struct x509_lookup_st* ctx, const char* file, int type, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_load_crl_file(struct x509_lookup_st* ctx, const char* file, int type);
int X509_load_cert_crl_file(struct x509_lookup_st* ctx, const char* file, int type);
int X509_load_cert_crl_file_ex(struct x509_lookup_st* ctx, const char* file, int type, struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_lookup_st* X509_LOOKUP_new(struct x509_lookup_method_st* method);
void X509_LOOKUP_free(struct x509_lookup_st* ctx);
int X509_LOOKUP_init(struct x509_lookup_st* ctx);
int X509_LOOKUP_by_subject(struct x509_lookup_st* ctx, enum anonymous_typeY27 type, const struct X509_name_st* name, struct x509_object_st* ret);
int X509_LOOKUP_by_subject_ex(struct x509_lookup_st* ctx, enum anonymous_typeY27 type, const struct X509_name_st* name, struct x509_object_st* ret, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_LOOKUP_by_issuer_serial(struct x509_lookup_st* ctx, enum anonymous_typeY27 type, const struct X509_name_st* name, const struct asn1_string_st* serial, struct x509_object_st* ret);
int X509_LOOKUP_by_fingerprint(struct x509_lookup_st* ctx, enum anonymous_typeY27 type, const unsigned char* bytes, int len, struct x509_object_st* ret);
int X509_LOOKUP_by_alias(struct x509_lookup_st* ctx, enum anonymous_typeY27 type, const char* str, int len, struct x509_object_st* ret);
int X509_LOOKUP_set_method_data(struct x509_lookup_st* ctx, void* data);
void* X509_LOOKUP_get_method_data(const struct x509_lookup_st* ctx);
struct x509_store_st* X509_LOOKUP_get_store(const struct x509_lookup_st* ctx);
int X509_LOOKUP_shutdown(struct x509_lookup_st* ctx);
int X509_STORE_load_file(struct x509_store_st* xs, const char* file);
int X509_STORE_load_path(struct x509_store_st* xs, const char* path);
int X509_STORE_load_store(struct x509_store_st* xs, const char* store);
int X509_STORE_load_locations(struct x509_store_st* s, const char* file, const char* dir);
int X509_STORE_set_default_paths(struct x509_store_st* xs);
int X509_STORE_load_file_ex(struct x509_store_st* xs, const char* file, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_load_store_ex(struct x509_store_st* xs, const char* store, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_load_locations_ex(struct x509_store_st* xs, const char* file, const char* dir, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_set_default_paths_ex(struct x509_store_st* xs, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_CTX_set_ex_data(struct x509_store_ctx_st* ctx, int idx, void* data);
void* X509_STORE_CTX_get_ex_data(const struct x509_store_ctx_st* ctx, int idx);
int X509_STORE_CTX_get_error(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_error(struct x509_store_ctx_st* ctx, int s);
int X509_STORE_CTX_get_error_depth(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_error_depth(struct x509_store_ctx_st* ctx, int depth);
struct x509_st* X509_STORE_CTX_get_current_cert(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_current_cert(struct x509_store_ctx_st* ctx, struct x509_st* x);
struct x509_st* X509_STORE_CTX_get0_current_issuer(const struct x509_store_ctx_st* ctx);
struct X509_crl_st* X509_STORE_CTX_get0_current_crl(const struct x509_store_ctx_st* ctx);
struct x509_store_ctx_st* X509_STORE_CTX_get0_parent_ctx(const struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_STORE_CTX_get0_chain(const struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_STORE_CTX_get1_chain(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_cert(struct x509_store_ctx_st* ctx, struct x509_st* target);
void X509_STORE_CTX_set0_rpk(struct x509_store_ctx_st* ctx, struct evp_pkey_st* target);
void X509_STORE_CTX_set0_verified_chain(struct x509_store_ctx_st* c, struct stack_st_X509* sk);
void X509_STORE_CTX_set0_crls(struct x509_store_ctx_st* ctx, struct stack_st_X509_CRL* sk);
int X509_STORE_CTX_set_purpose(struct x509_store_ctx_st* ctx, int purpose);
int X509_STORE_CTX_set_trust(struct x509_store_ctx_st* ctx, int trust);
int X509_STORE_CTX_purpose_inherit(struct x509_store_ctx_st* ctx, int def_purpose, int purpose, int trust);
void X509_STORE_CTX_set_flags(struct x509_store_ctx_st* ctx, unsigned long  int flags);
void X509_STORE_CTX_set_time(struct x509_store_ctx_st* ctx, unsigned long  int flags, long t);
void X509_STORE_CTX_set_current_reasons(struct x509_store_ctx_st* ctx, unsigned int current_reasons);
struct X509_POLICY_TREE_st* X509_STORE_CTX_get0_policy_tree(const struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_get_explicit_policy(const struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_get_num_untrusted(const struct x509_store_ctx_st* ctx);
struct X509_VERIFY_PARAM_st* X509_STORE_CTX_get0_param(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set0_param(struct x509_store_ctx_st* ctx, struct X509_VERIFY_PARAM_st* param);
int X509_STORE_CTX_set_default(struct x509_store_ctx_st* ctx, const char* name);
void X509_STORE_CTX_set0_dane(struct x509_store_ctx_st* ctx, struct ssl_dane_st* dane);
struct X509_VERIFY_PARAM_st* X509_VERIFY_PARAM_new();
void X509_VERIFY_PARAM_free(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_inherit(struct X509_VERIFY_PARAM_st* to, const struct X509_VERIFY_PARAM_st* from);
int X509_VERIFY_PARAM_set1(struct X509_VERIFY_PARAM_st* to, const struct X509_VERIFY_PARAM_st* from);
int X509_VERIFY_PARAM_set1_name(struct X509_VERIFY_PARAM_st* param, const char* name);
int X509_VERIFY_PARAM_set_flags(struct X509_VERIFY_PARAM_st* param, unsigned long  int flags);
int X509_VERIFY_PARAM_clear_flags(struct X509_VERIFY_PARAM_st* param, unsigned long  int flags);
unsigned long  int X509_VERIFY_PARAM_get_flags(const struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_set_purpose(struct X509_VERIFY_PARAM_st* param, int purpose);
int X509_VERIFY_PARAM_set_trust(struct X509_VERIFY_PARAM_st* param, int trust);
void X509_VERIFY_PARAM_set_depth(struct X509_VERIFY_PARAM_st* param, int depth);
void X509_VERIFY_PARAM_set_auth_level(struct X509_VERIFY_PARAM_st* param, int auth_level);
long X509_VERIFY_PARAM_get_time(const struct X509_VERIFY_PARAM_st* param);
void X509_VERIFY_PARAM_set_time(struct X509_VERIFY_PARAM_st* param, long t);
int X509_VERIFY_PARAM_add0_policy(struct X509_VERIFY_PARAM_st* param, struct asn1_object_st* policy);
int X509_VERIFY_PARAM_set1_policies(struct X509_VERIFY_PARAM_st* param, struct stack_st_ASN1_OBJECT* policies);
int X509_VERIFY_PARAM_set_inh_flags(struct X509_VERIFY_PARAM_st* param, unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_inh_flags(const struct X509_VERIFY_PARAM_st* param);
char* X509_VERIFY_PARAM_get0_host(struct X509_VERIFY_PARAM_st* param, int idx);
int X509_VERIFY_PARAM_set1_host(struct X509_VERIFY_PARAM_st* param, const char* name, unsigned long  int namelen);
int X509_VERIFY_PARAM_add1_host(struct X509_VERIFY_PARAM_st* param, const char* name, unsigned long  int namelen);
void X509_VERIFY_PARAM_set_hostflags(struct X509_VERIFY_PARAM_st* param, unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_hostflags(const struct X509_VERIFY_PARAM_st* param);
char* X509_VERIFY_PARAM_get0_peername(const struct X509_VERIFY_PARAM_st* param);
void X509_VERIFY_PARAM_move_peername(struct X509_VERIFY_PARAM_st* anonymous_var_nameX2270, struct X509_VERIFY_PARAM_st* anonymous_var_nameX2271);
char* X509_VERIFY_PARAM_get0_email(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_set1_email(struct X509_VERIFY_PARAM_st* param, const char* email, unsigned long  int emaillen);
char* X509_VERIFY_PARAM_get1_ip_asc(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_set1_ip(struct X509_VERIFY_PARAM_st* param, const unsigned char* ip, unsigned long  int iplen);
int X509_VERIFY_PARAM_set1_ip_asc(struct X509_VERIFY_PARAM_st* param, const char* ipasc);
int X509_VERIFY_PARAM_get_depth(const struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_get_auth_level(const struct X509_VERIFY_PARAM_st* param);
const char* X509_VERIFY_PARAM_get0_name(const struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_add0_table(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_get_count();
const struct X509_VERIFY_PARAM_st* X509_VERIFY_PARAM_get0(int id);
const struct X509_VERIFY_PARAM_st* X509_VERIFY_PARAM_lookup(const char* name);
void X509_VERIFY_PARAM_table_cleanup();
int X509_policy_check(struct X509_POLICY_TREE_st** ptree, int* pexplicit_policy, struct stack_st_X509* certs, struct stack_st_ASN1_OBJECT* policy_oids, unsigned int flags);
void X509_policy_tree_free(struct X509_POLICY_TREE_st* tree);
int X509_policy_tree_level_count(const struct X509_POLICY_TREE_st* tree);
struct X509_POLICY_LEVEL_st* X509_policy_tree_get0_level(const struct X509_POLICY_TREE_st* tree, int i);
struct stack_st_X509_POLICY_NODE* X509_policy_tree_get0_policies(const struct X509_POLICY_TREE_st* tree);
struct stack_st_X509_POLICY_NODE* X509_policy_tree_get0_user_policies(const struct X509_POLICY_TREE_st* tree);
int X509_policy_level_node_count(struct X509_POLICY_LEVEL_st* level);
struct X509_POLICY_NODE_st* X509_policy_level_get0_node(const struct X509_POLICY_LEVEL_st* level, int i);
const struct asn1_object_st* X509_policy_node_get0_policy(const struct X509_POLICY_NODE_st* node);
struct stack_st_POLICYQUALINFO* X509_policy_node_get0_qualifiers(const struct X509_POLICY_NODE_st* node);
const struct X509_POLICY_NODE_st* X509_policy_node_get0_parent(const struct X509_POLICY_NODE_st* node);
struct pkcs7_issuer_and_serial_st* PKCS7_ISSUER_AND_SERIAL_new();
void PKCS7_ISSUER_AND_SERIAL_free(struct pkcs7_issuer_and_serial_st* a);
struct pkcs7_issuer_and_serial_st* d2i_PKCS7_ISSUER_AND_SERIAL(struct pkcs7_issuer_and_serial_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ISSUER_AND_SERIAL(const struct pkcs7_issuer_and_serial_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ISSUER_AND_SERIAL_it();
int PKCS7_ISSUER_AND_SERIAL_digest(struct pkcs7_issuer_and_serial_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
struct pkcs7_st* d2i_PKCS7_fp(struct __sFILE* fp, struct pkcs7_st** p7);
int i2d_PKCS7_fp(struct __sFILE* fp, const struct pkcs7_st* p7);
struct pkcs7_st* PKCS7_dup(const struct pkcs7_st* a);
struct pkcs7_st* d2i_PKCS7_bio(struct bio_st* bp, struct pkcs7_st** p7);
int i2d_PKCS7_bio(struct bio_st* bp, const struct pkcs7_st* p7);
int i2d_PKCS7_bio_stream(struct bio_st* out, struct pkcs7_st* p7, struct bio_st* in, int flags);
int PEM_write_bio_PKCS7_stream(struct bio_st* out, struct pkcs7_st* p7, struct bio_st* in, int flags);
struct pkcs7_signer_info_st* PKCS7_SIGNER_INFO_new();
void PKCS7_SIGNER_INFO_free(struct pkcs7_signer_info_st* a);
struct pkcs7_signer_info_st* d2i_PKCS7_SIGNER_INFO(struct pkcs7_signer_info_st** a, const unsigned char** in, long len);
int i2d_PKCS7_SIGNER_INFO(const struct pkcs7_signer_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_SIGNER_INFO_it();
struct pkcs7_recip_info_st* PKCS7_RECIP_INFO_new();
void PKCS7_RECIP_INFO_free(struct pkcs7_recip_info_st* a);
struct pkcs7_recip_info_st* d2i_PKCS7_RECIP_INFO(struct pkcs7_recip_info_st** a, const unsigned char** in, long len);
int i2d_PKCS7_RECIP_INFO(const struct pkcs7_recip_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_RECIP_INFO_it();
struct pkcs7_signed_st* PKCS7_SIGNED_new();
void PKCS7_SIGNED_free(struct pkcs7_signed_st* a);
struct pkcs7_signed_st* d2i_PKCS7_SIGNED(struct pkcs7_signed_st** a, const unsigned char** in, long len);
int i2d_PKCS7_SIGNED(const struct pkcs7_signed_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_SIGNED_it();
struct pkcs7_enc_content_st* PKCS7_ENC_CONTENT_new();
void PKCS7_ENC_CONTENT_free(struct pkcs7_enc_content_st* a);
struct pkcs7_enc_content_st* d2i_PKCS7_ENC_CONTENT(struct pkcs7_enc_content_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ENC_CONTENT(const struct pkcs7_enc_content_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ENC_CONTENT_it();
struct pkcs7_enveloped_st* PKCS7_ENVELOPE_new();
void PKCS7_ENVELOPE_free(struct pkcs7_enveloped_st* a);
struct pkcs7_enveloped_st* d2i_PKCS7_ENVELOPE(struct pkcs7_enveloped_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ENVELOPE(const struct pkcs7_enveloped_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ENVELOPE_it();
struct pkcs7_signedandenveloped_st* PKCS7_SIGN_ENVELOPE_new();
void PKCS7_SIGN_ENVELOPE_free(struct pkcs7_signedandenveloped_st* a);
struct pkcs7_signedandenveloped_st* d2i_PKCS7_SIGN_ENVELOPE(struct pkcs7_signedandenveloped_st** a, const unsigned char** in, long len);
int i2d_PKCS7_SIGN_ENVELOPE(const struct pkcs7_signedandenveloped_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_SIGN_ENVELOPE_it();
struct pkcs7_digest_st* PKCS7_DIGEST_new();
void PKCS7_DIGEST_free(struct pkcs7_digest_st* a);
struct pkcs7_digest_st* d2i_PKCS7_DIGEST(struct pkcs7_digest_st** a, const unsigned char** in, long len);
int i2d_PKCS7_DIGEST(const struct pkcs7_digest_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_DIGEST_it();
struct pkcs7_encrypted_st* PKCS7_ENCRYPT_new();
void PKCS7_ENCRYPT_free(struct pkcs7_encrypted_st* a);
struct pkcs7_encrypted_st* d2i_PKCS7_ENCRYPT(struct pkcs7_encrypted_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ENCRYPT(const struct pkcs7_encrypted_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ENCRYPT_it();
struct pkcs7_st* PKCS7_new();
void PKCS7_free(struct pkcs7_st* a);
struct pkcs7_st* d2i_PKCS7(struct pkcs7_st** a, const unsigned char** in, long len);
int i2d_PKCS7(const struct pkcs7_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_it();
struct pkcs7_st* PKCS7_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
const struct ASN1_ITEM_st* PKCS7_ATTR_SIGN_it();
const struct ASN1_ITEM_st* PKCS7_ATTR_VERIFY_it();
int i2d_PKCS7_NDEF(const struct pkcs7_st* a, unsigned char** out);
int PKCS7_print_ctx(struct bio_st* out, const struct pkcs7_st* x, int indent, const struct asn1_pctx_st* pctx);
long PKCS7_ctrl(struct pkcs7_st* p7, int cmd, long larg, char* parg);
int PKCS7_type_is_other(struct pkcs7_st* p7);
int PKCS7_set_type(struct pkcs7_st* p7, int type);
int PKCS7_set0_type_other(struct pkcs7_st* p7, int type, struct asn1_type_st* other);
int PKCS7_set_content(struct pkcs7_st* p7, struct pkcs7_st* p7_data);
int PKCS7_SIGNER_INFO_set(struct pkcs7_signer_info_st* p7i, struct x509_st* x509, struct evp_pkey_st* pkey, const struct evp_md_st* dgst);
int PKCS7_SIGNER_INFO_sign(struct pkcs7_signer_info_st* si);
int PKCS7_add_signer(struct pkcs7_st* p7, struct pkcs7_signer_info_st* p7i);
int PKCS7_add_certificate(struct pkcs7_st* p7, struct x509_st* cert);
int PKCS7_add_crl(struct pkcs7_st* p7, struct X509_crl_st* crl);
int PKCS7_content_new(struct pkcs7_st* p7, int nid);
int PKCS7_dataVerify(struct x509_store_st* cert_store, struct x509_store_ctx_st* ctx, struct bio_st* bio, struct pkcs7_st* p7, struct pkcs7_signer_info_st* si);
int PKCS7_signatureVerify(struct bio_st* bio, struct pkcs7_st* p7, struct pkcs7_signer_info_st* si, struct x509_st* signer);
struct bio_st* PKCS7_dataInit(struct pkcs7_st* p7, struct bio_st* bio);
int PKCS7_dataFinal(struct pkcs7_st* p7, struct bio_st* bio);
struct bio_st* PKCS7_dataDecode(struct pkcs7_st* p7, struct evp_pkey_st* pkey, struct bio_st* in_bio, struct x509_st* pcert);
struct pkcs7_signer_info_st* PKCS7_add_signature(struct pkcs7_st* p7, struct x509_st* x509, struct evp_pkey_st* pkey, const struct evp_md_st* dgst);
struct x509_st* PKCS7_cert_from_signer_info(struct pkcs7_st* p7, struct pkcs7_signer_info_st* si);
int PKCS7_set_digest(struct pkcs7_st* p7, const struct evp_md_st* md);
struct stack_st_PKCS7_SIGNER_INFO* PKCS7_get_signer_info(struct pkcs7_st* p7);
struct pkcs7_recip_info_st* PKCS7_add_recipient(struct pkcs7_st* p7, struct x509_st* x509);
void PKCS7_SIGNER_INFO_get0_algs(struct pkcs7_signer_info_st* si, struct evp_pkey_st** pk, struct X509_algor_st** pdig, struct X509_algor_st** psig);
void PKCS7_RECIP_INFO_get0_alg(struct pkcs7_recip_info_st* ri, struct X509_algor_st** penc);
int PKCS7_add_recipient_info(struct pkcs7_st* p7, struct pkcs7_recip_info_st* ri);
int PKCS7_RECIP_INFO_set(struct pkcs7_recip_info_st* p7i, struct x509_st* x509);
int PKCS7_set_cipher(struct pkcs7_st* p7, const struct evp_cipher_st* cipher);
int PKCS7_stream(unsigned char*** boundary, struct pkcs7_st* p7);
struct pkcs7_issuer_and_serial_st* PKCS7_get_issuer_and_serial(struct pkcs7_st* p7, int idx);
struct asn1_string_st* PKCS7_get_octet_string(struct pkcs7_st* p7);
struct asn1_string_st* PKCS7_digest_from_attributes(struct stack_st_X509_ATTRIBUTE* sk);
int PKCS7_add_signed_attribute(struct pkcs7_signer_info_st* p7si, int nid, int type, void* data);
int PKCS7_add_attribute(struct pkcs7_signer_info_st* p7si, int nid, int atrtype, void* value);
struct asn1_type_st* PKCS7_get_attribute(const struct pkcs7_signer_info_st* si, int nid);
struct asn1_type_st* PKCS7_get_signed_attribute(const struct pkcs7_signer_info_st* si, int nid);
int PKCS7_set_signed_attributes(struct pkcs7_signer_info_st* p7si, struct stack_st_X509_ATTRIBUTE* sk);
int PKCS7_set_attributes(struct pkcs7_signer_info_st* p7si, struct stack_st_X509_ATTRIBUTE* sk);
struct pkcs7_st* PKCS7_sign(struct x509_st* signcert, struct evp_pkey_st* pkey, struct stack_st_X509* certs, struct bio_st* data, int flags);
struct pkcs7_st* PKCS7_sign_ex(struct x509_st* signcert, struct evp_pkey_st* pkey, struct stack_st_X509* certs, struct bio_st* data, int flags, struct ossl_lib_ctx_st* libctx, const char* propq);
struct pkcs7_signer_info_st* PKCS7_sign_add_signer(struct pkcs7_st* p7, struct x509_st* signcert, struct evp_pkey_st* pkey, const struct evp_md_st* md, int flags);
int PKCS7_final(struct pkcs7_st* p7, struct bio_st* data, int flags);
int PKCS7_verify(struct pkcs7_st* p7, struct stack_st_X509* certs, struct x509_store_st* store, struct bio_st* indata, struct bio_st* out, int flags);
struct stack_st_X509* PKCS7_get0_signers(struct pkcs7_st* p7, struct stack_st_X509* certs, int flags);
struct pkcs7_st* PKCS7_encrypt(struct stack_st_X509* certs, struct bio_st* in, const struct evp_cipher_st* cipher, int flags);
struct pkcs7_st* PKCS7_encrypt_ex(struct stack_st_X509* certs, struct bio_st* in, const struct evp_cipher_st* cipher, int flags, struct ossl_lib_ctx_st* libctx, const char* propq);
int PKCS7_decrypt(struct pkcs7_st* p7, struct evp_pkey_st* pkey, struct x509_st* cert, struct bio_st* data, int flags);
int PKCS7_add_attrib_smimecap(struct pkcs7_signer_info_st* si, struct stack_st_X509_ALGOR* cap);
struct stack_st_X509_ALGOR* PKCS7_get_smimecap(struct pkcs7_signer_info_st* si);
int PKCS7_simple_smimecap(struct stack_st_X509_ALGOR* sk, int nid, int arg);
int PKCS7_add_attrib_content_type(struct pkcs7_signer_info_st* si, struct asn1_object_st* coid);
int PKCS7_add0_attrib_signing_time(struct pkcs7_signer_info_st* si, struct asn1_string_st* t);
int PKCS7_add1_attrib_digest(struct pkcs7_signer_info_st* si, const unsigned char* md, int mdlen);
int SMIME_write_PKCS7(struct bio_st* bio, struct pkcs7_st* p7, struct bio_st* data, int flags);
struct pkcs7_st* SMIME_read_PKCS7_ex(struct bio_st* bio, struct bio_st** bcont, struct pkcs7_st** p7);
struct pkcs7_st* SMIME_read_PKCS7(struct bio_st* bio, struct bio_st** bcont);
struct bio_st* BIO_new_PKCS7(struct bio_st* out, struct pkcs7_st* p7);
void X509_CRL_set_default_method(const struct x509_crl_method_st* meth);
struct x509_crl_method_st* X509_CRL_METHOD_new(int (*crl_init)(struct X509_crl_st*), int (*crl_free)(struct X509_crl_st*), int (*crl_lookup)(struct X509_crl_st*,struct x509_revoked_st**,const struct asn1_string_st*,const struct X509_name_st*), int (*crl_verify)(struct X509_crl_st*,struct evp_pkey_st*));
void X509_CRL_METHOD_free(struct x509_crl_method_st* m);
void X509_CRL_set_meth_data(struct X509_crl_st* crl, void* dat);
void* X509_CRL_get_meth_data(struct X509_crl_st* crl);
const char* X509_verify_cert_error_string(long n);
int X509_verify(struct x509_st* a, struct evp_pkey_st* r);
int X509_self_signed(struct x509_st* cert, int verify_signature);
int X509_REQ_verify_ex(struct X509_req_st* a, struct evp_pkey_st* r, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_REQ_verify(struct X509_req_st* a, struct evp_pkey_st* r);
int X509_CRL_verify(struct X509_crl_st* a, struct evp_pkey_st* r);
int NETSCAPE_SPKI_verify(struct Netscape_spki_st* a, struct evp_pkey_st* r);
struct Netscape_spki_st* NETSCAPE_SPKI_b64_decode(const char* str, int len);
char* NETSCAPE_SPKI_b64_encode(struct Netscape_spki_st* x);
struct evp_pkey_st* NETSCAPE_SPKI_get_pubkey(struct Netscape_spki_st* x);
int NETSCAPE_SPKI_set_pubkey(struct Netscape_spki_st* x, struct evp_pkey_st* pkey);
int NETSCAPE_SPKI_print(struct bio_st* out, struct Netscape_spki_st* spki);
int X509_signature_dump(struct bio_st* bp, const struct asn1_string_st* sig, int indent);
int X509_signature_print(struct bio_st* bp, const struct X509_algor_st* alg, const struct asn1_string_st* sig);
int X509_sign(struct x509_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_sign_ctx(struct x509_st* x, struct evp_md_ctx_st* ctx);
int X509_REQ_sign(struct X509_req_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_REQ_sign_ctx(struct X509_req_st* x, struct evp_md_ctx_st* ctx);
int X509_CRL_sign(struct X509_crl_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_CRL_sign_ctx(struct X509_crl_st* x, struct evp_md_ctx_st* ctx);
int NETSCAPE_SPKI_sign(struct Netscape_spki_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_pubkey_digest(const struct x509_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
int X509_digest(const struct x509_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
struct asn1_string_st* X509_digest_sig(const struct x509_st* cert, struct evp_md_st** md_used, int* md_is_fallback);
int X509_CRL_digest(const struct X509_crl_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
int X509_REQ_digest(const struct X509_req_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
int X509_NAME_digest(const struct X509_name_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
struct x509_st* X509_load_http(const char* url, struct bio_st* bio, struct bio_st* rbio, int timeout);
struct X509_crl_st* X509_CRL_load_http(const char* url, struct bio_st* bio, struct bio_st* rbio, int timeout);
int CONF_set_default_method(struct conf_method_st* meth);
void CONF_set_nconf(struct conf_st* conf, struct lhash_st_CONF_VALUE* hash);
struct lhash_st_CONF_VALUE* CONF_load(struct lhash_st_CONF_VALUE* conf, const char* file, long* eline);
struct lhash_st_CONF_VALUE* CONF_load_fp(struct lhash_st_CONF_VALUE* conf, struct __sFILE* fp, long* eline);
struct lhash_st_CONF_VALUE* CONF_load_bio(struct lhash_st_CONF_VALUE* conf, struct bio_st* bp, long* eline);
struct stack_st_CONF_VALUE* CONF_get_section(struct lhash_st_CONF_VALUE* conf, const char* section);
char* CONF_get_string(struct lhash_st_CONF_VALUE* conf, const char* group, const char* name);
long CONF_get_number(struct lhash_st_CONF_VALUE* conf, const char* group, const char* name);
void CONF_free(struct lhash_st_CONF_VALUE* conf);
int CONF_dump_fp(struct lhash_st_CONF_VALUE* conf, struct __sFILE* out);
int CONF_dump_bio(struct lhash_st_CONF_VALUE* conf, struct bio_st* out);
void OPENSSL_config(const char* config_name);
struct conf_st* NCONF_new_ex(struct ossl_lib_ctx_st* libctx, struct conf_method_st* meth);
struct ossl_lib_ctx_st* NCONF_get0_libctx(const struct conf_st* conf);
struct conf_st* NCONF_new(struct conf_method_st* meth);
struct conf_method_st* NCONF_default();
struct conf_method_st* NCONF_WIN32();
void NCONF_free(struct conf_st* conf);
void NCONF_free_data(struct conf_st* conf);
int NCONF_load(struct conf_st* conf, const char* file, long* eline);
int NCONF_load_fp(struct conf_st* conf, struct __sFILE* fp, long* eline);
int NCONF_load_bio(struct conf_st* conf, struct bio_st* bp, long* eline);
struct stack_st_OPENSSL_CSTRING* NCONF_get_section_names(const struct conf_st* conf);
struct stack_st_CONF_VALUE* NCONF_get_section(const struct conf_st* conf, const char* section);
char* NCONF_get_string(const struct conf_st* conf, const char* group, const char* name);
int NCONF_get_number_e(const struct conf_st* conf, const char* group, const char* name, long* result);
int NCONF_dump_fp(const struct conf_st* conf, struct __sFILE* out);
int NCONF_dump_bio(const struct conf_st* conf, struct bio_st* out);
int CONF_modules_load(const struct conf_st* cnf, const char* appname, unsigned long  int flags);
int CONF_modules_load_file_ex(struct ossl_lib_ctx_st* libctx, const char* filename, const char* appname, unsigned long  int flags);
int CONF_modules_load_file(const char* filename, const char* appname, unsigned long  int flags);
void CONF_modules_unload(int all);
void CONF_modules_finish();
int CONF_module_add(const char* name, int (*ifunc)(struct conf_imodule_st*,const struct conf_st*), void (*ffunc)(struct conf_imodule_st*));
const char* CONF_imodule_get_name(const struct conf_imodule_st* md);
const char* CONF_imodule_get_value(const struct conf_imodule_st* md);
void* CONF_imodule_get_usr_data(const struct conf_imodule_st* md);
void CONF_imodule_set_usr_data(struct conf_imodule_st* md, void* usr_data);
struct conf_module_st* CONF_imodule_get_module(const struct conf_imodule_st* md);
unsigned long  int CONF_imodule_get_flags(const struct conf_imodule_st* md);
void CONF_imodule_set_flags(struct conf_imodule_st* md, unsigned long  int flags);
void* CONF_module_get_usr_data(struct conf_module_st* pmod);
void CONF_module_set_usr_data(struct conf_module_st* pmod, void* usr_data);
char* CONF_get1_default_config_file();
int CONF_parse_list(const char* list, int sep, int nospc, int (*list_cb)(const char*,int,void*), void* arg);
void OPENSSL_load_builtin_modules();
struct ossl_http_req_ctx_st* OSSL_HTTP_REQ_CTX_new(struct bio_st* wbio, struct bio_st* rbio, int buf_size);
void OSSL_HTTP_REQ_CTX_free(struct ossl_http_req_ctx_st* rctx);
int OSSL_HTTP_REQ_CTX_set_request_line(struct ossl_http_req_ctx_st* rctx, int method_POST, const char* server, const char* port, const char* path);
int OSSL_HTTP_REQ_CTX_add1_header(struct ossl_http_req_ctx_st* rctx, const char* name, const char* value);
int OSSL_HTTP_REQ_CTX_set_expected(struct ossl_http_req_ctx_st* rctx, const char* content_type, int asn1, int timeout, int keep_alive);
int OSSL_HTTP_REQ_CTX_set1_req(struct ossl_http_req_ctx_st* rctx, const char* content_type, const struct ASN1_ITEM_st* it, const struct ASN1_VALUE_st* req);
int OSSL_HTTP_REQ_CTX_nbio(struct ossl_http_req_ctx_st* rctx);
int OSSL_HTTP_REQ_CTX_nbio_d2i(struct ossl_http_req_ctx_st* rctx, struct ASN1_VALUE_st** pval, const struct ASN1_ITEM_st* it);
struct bio_st* OSSL_HTTP_REQ_CTX_exchange(struct ossl_http_req_ctx_st* rctx);
struct bio_st* OSSL_HTTP_REQ_CTX_get0_mem_bio(const struct ossl_http_req_ctx_st* rctx);
unsigned long  int OSSL_HTTP_REQ_CTX_get_resp_len(const struct ossl_http_req_ctx_st* rctx);
void OSSL_HTTP_REQ_CTX_set_max_response_length(struct ossl_http_req_ctx_st* rctx, unsigned long  int len);
int OSSL_HTTP_is_alive(const struct ossl_http_req_ctx_st* rctx);
struct ossl_http_req_ctx_st* OSSL_HTTP_open(const char* server, const char* port, const char* proxy, const char* no_proxy, int use_ssl, struct bio_st* bio, struct bio_st* rbio, struct bio_st* (*bio_update_fn)(struct bio_st*,void*,int,int), void* arg, int buf_size, int overall_timeout);
int OSSL_HTTP_proxy_connect(struct bio_st* bio, const char* server, const char* port, const char* proxyuser, const char* proxypass, int timeout, struct bio_st* bio_err, const char* prog);
int OSSL_HTTP_set1_request(struct ossl_http_req_ctx_st* rctx, const char* path, const struct stack_st_CONF_VALUE* headers, const char* content_type, struct bio_st* req, const char* expected_content_type, int expect_asn1, unsigned long  int max_resp_len, int timeout, int keep_alive);
struct bio_st* OSSL_HTTP_exchange(struct ossl_http_req_ctx_st* rctx, char** redirection_url);
struct bio_st* OSSL_HTTP_get(const char* url, const char* proxy, const char* no_proxy, struct bio_st* bio, struct bio_st* rbio, struct bio_st* (*bio_update_fn)(struct bio_st*,void*,int,int), void* arg, int buf_size, const struct stack_st_CONF_VALUE* headers, const char* expected_content_type, int expect_asn1, unsigned long  int max_resp_len, int timeout);
struct bio_st* OSSL_HTTP_transfer(struct ossl_http_req_ctx_st** prctx, const char* server, const char* port, const char* path, int use_ssl, const char* proxy, const char* no_proxy, struct bio_st* bio, struct bio_st* rbio, struct bio_st* (*bio_update_fn)(struct bio_st*,void*,int,int), void* arg, int buf_size, const struct stack_st_CONF_VALUE* headers, const char* content_type, struct bio_st* req, const char* expected_content_type, int expect_asn1, unsigned long  int max_resp_len, int timeout, int keep_alive);
int OSSL_HTTP_close(struct ossl_http_req_ctx_st* rctx, int ok);
int OSSL_parse_url(const char* url, char** pscheme, char** puser, char** phost, char** pport, int* pport_num, char** ppath, char** pquery, char** pfrag);
int OSSL_HTTP_parse_url(const char* url, int* pssl, char** puser, char** phost, char** pport, int* pport_num, char** ppath, char** pquery, char** pfrag);
const char* OSSL_HTTP_adapt_proxy(const char* proxy, const char* no_proxy, const char* server, int use_ssl);
void OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(struct ossl_http_req_ctx_st* rctx, unsigned long  int count);
struct x509_st* d2i_X509_fp(struct __sFILE* fp, struct x509_st** x509);
int i2d_X509_fp(struct __sFILE* fp, const struct x509_st* x509);
struct X509_crl_st* d2i_X509_CRL_fp(struct __sFILE* fp, struct X509_crl_st** crl);
int i2d_X509_CRL_fp(struct __sFILE* fp, const struct X509_crl_st* crl);
struct X509_req_st* d2i_X509_REQ_fp(struct __sFILE* fp, struct X509_req_st** req);
int i2d_X509_REQ_fp(struct __sFILE* fp, const struct X509_req_st* req);
struct rsa_st* d2i_RSAPrivateKey_fp(struct __sFILE* fp, struct rsa_st** rsa);
int i2d_RSAPrivateKey_fp(struct __sFILE* fp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSAPublicKey_fp(struct __sFILE* fp, struct rsa_st** rsa);
int i2d_RSAPublicKey_fp(struct __sFILE* fp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSA_PUBKEY_fp(struct __sFILE* fp, struct rsa_st** rsa);
int i2d_RSA_PUBKEY_fp(struct __sFILE* fp, const struct rsa_st* rsa);
struct dsa_st* d2i_DSA_PUBKEY_fp(struct __sFILE* fp, struct dsa_st** dsa);
int i2d_DSA_PUBKEY_fp(struct __sFILE* fp, const struct dsa_st* dsa);
struct dsa_st* d2i_DSAPrivateKey_fp(struct __sFILE* fp, struct dsa_st** dsa);
int i2d_DSAPrivateKey_fp(struct __sFILE* fp, const struct dsa_st* dsa);
struct ec_key_st* d2i_EC_PUBKEY_fp(struct __sFILE* fp, struct ec_key_st** eckey);
int i2d_EC_PUBKEY_fp(struct __sFILE* fp, const struct ec_key_st* eckey);
struct ec_key_st* d2i_ECPrivateKey_fp(struct __sFILE* fp, struct ec_key_st** eckey);
int i2d_ECPrivateKey_fp(struct __sFILE* fp, const struct ec_key_st* eckey);
struct X509_sig_st* d2i_PKCS8_fp(struct __sFILE* fp, struct X509_sig_st** p8);
int i2d_PKCS8_fp(struct __sFILE* fp, const struct X509_sig_st* p8);
struct X509_pubkey_st* d2i_X509_PUBKEY_fp(struct __sFILE* fp, struct X509_pubkey_st** xpk);
int i2d_X509_PUBKEY_fp(struct __sFILE* fp, const struct X509_pubkey_st* xpk);
struct pkcs8_priv_key_info_st* d2i_PKCS8_PRIV_KEY_INFO_fp(struct __sFILE* fp, struct pkcs8_priv_key_info_st** p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_fp(struct __sFILE* fp, const struct pkcs8_priv_key_info_st* p8inf);
int i2d_PKCS8PrivateKeyInfo_fp(struct __sFILE* fp, const struct evp_pkey_st* key);
int i2d_PrivateKey_fp(struct __sFILE* fp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PrivateKey_ex_fp(struct __sFILE* fp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PrivateKey_fp(struct __sFILE* fp, struct evp_pkey_st** a);
int i2d_PUBKEY_fp(struct __sFILE* fp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PUBKEY_ex_fp(struct __sFILE* fp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PUBKEY_fp(struct __sFILE* fp, struct evp_pkey_st** a);
struct x509_st* d2i_X509_bio(struct bio_st* bp, struct x509_st** x509);
int i2d_X509_bio(struct bio_st* bp, const struct x509_st* x509);
struct X509_crl_st* d2i_X509_CRL_bio(struct bio_st* bp, struct X509_crl_st** crl);
int i2d_X509_CRL_bio(struct bio_st* bp, const struct X509_crl_st* crl);
struct X509_req_st* d2i_X509_REQ_bio(struct bio_st* bp, struct X509_req_st** req);
int i2d_X509_REQ_bio(struct bio_st* bp, const struct X509_req_st* req);
struct rsa_st* d2i_RSAPrivateKey_bio(struct bio_st* bp, struct rsa_st** rsa);
int i2d_RSAPrivateKey_bio(struct bio_st* bp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSAPublicKey_bio(struct bio_st* bp, struct rsa_st** rsa);
int i2d_RSAPublicKey_bio(struct bio_st* bp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSA_PUBKEY_bio(struct bio_st* bp, struct rsa_st** rsa);
int i2d_RSA_PUBKEY_bio(struct bio_st* bp, const struct rsa_st* rsa);
struct dsa_st* d2i_DSA_PUBKEY_bio(struct bio_st* bp, struct dsa_st** dsa);
int i2d_DSA_PUBKEY_bio(struct bio_st* bp, const struct dsa_st* dsa);
struct dsa_st* d2i_DSAPrivateKey_bio(struct bio_st* bp, struct dsa_st** dsa);
int i2d_DSAPrivateKey_bio(struct bio_st* bp, const struct dsa_st* dsa);
struct ec_key_st* d2i_EC_PUBKEY_bio(struct bio_st* bp, struct ec_key_st** eckey);
int i2d_EC_PUBKEY_bio(struct bio_st* bp, const struct ec_key_st* eckey);
struct ec_key_st* d2i_ECPrivateKey_bio(struct bio_st* bp, struct ec_key_st** eckey);
int i2d_ECPrivateKey_bio(struct bio_st* bp, const struct ec_key_st* eckey);
struct X509_sig_st* d2i_PKCS8_bio(struct bio_st* bp, struct X509_sig_st** p8);
int i2d_PKCS8_bio(struct bio_st* bp, const struct X509_sig_st* p8);
struct X509_pubkey_st* d2i_X509_PUBKEY_bio(struct bio_st* bp, struct X509_pubkey_st** xpk);
int i2d_X509_PUBKEY_bio(struct bio_st* bp, const struct X509_pubkey_st* xpk);
struct pkcs8_priv_key_info_st* d2i_PKCS8_PRIV_KEY_INFO_bio(struct bio_st* bp, struct pkcs8_priv_key_info_st** p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_bio(struct bio_st* bp, const struct pkcs8_priv_key_info_st* p8inf);
int i2d_PKCS8PrivateKeyInfo_bio(struct bio_st* bp, const struct evp_pkey_st* key);
int i2d_PrivateKey_bio(struct bio_st* bp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PrivateKey_ex_bio(struct bio_st* bp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PrivateKey_bio(struct bio_st* bp, struct evp_pkey_st** a);
int i2d_PUBKEY_bio(struct bio_st* bp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PUBKEY_ex_bio(struct bio_st* bp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PUBKEY_bio(struct bio_st* bp, struct evp_pkey_st** a);
struct x509_st* X509_dup(const struct x509_st* a);
struct X509_algor_st* X509_ALGOR_dup(const struct X509_algor_st* a);
struct x509_attributes_st* X509_ATTRIBUTE_dup(const struct x509_attributes_st* a);
struct X509_crl_st* X509_CRL_dup(const struct X509_crl_st* a);
struct X509_extension_st* X509_EXTENSION_dup(const struct X509_extension_st* a);
struct X509_pubkey_st* X509_PUBKEY_dup(const struct X509_pubkey_st* a);
struct X509_req_st* X509_REQ_dup(const struct X509_req_st* a);
struct x509_revoked_st* X509_REVOKED_dup(const struct x509_revoked_st* a);
int X509_ALGOR_set0(struct X509_algor_st* alg, struct asn1_object_st* aobj, int ptype, void* pval);
void X509_ALGOR_get0(const struct asn1_object_st** paobj, int* pptype, const void** ppval, const struct X509_algor_st* algor);
void X509_ALGOR_set_md(struct X509_algor_st* alg, const struct evp_md_st* md);
int X509_ALGOR_cmp(const struct X509_algor_st* a, const struct X509_algor_st* b);
int X509_ALGOR_copy(struct X509_algor_st* dest, const struct X509_algor_st* src);
struct X509_name_st* X509_NAME_dup(const struct X509_name_st* a);
struct X509_name_entry_st* X509_NAME_ENTRY_dup(const struct X509_name_entry_st* a);
int X509_cmp_time(const struct asn1_string_st* s, long* t);
int X509_cmp_current_time(const struct asn1_string_st* s);
int X509_cmp_timeframe(const struct X509_VERIFY_PARAM_st* vpm, const struct asn1_string_st* start, const struct asn1_string_st* end);
struct asn1_string_st* X509_time_adj(struct asn1_string_st* s, long adj, long* t);
struct asn1_string_st* X509_time_adj_ex(struct asn1_string_st* s, int offset_day, long offset_sec, long* t);
struct asn1_string_st* X509_gmtime_adj(struct asn1_string_st* s, long adj);
const char* X509_get_default_cert_area();
const char* X509_get_default_cert_dir();
const char* X509_get_default_cert_file();
const char* X509_get_default_cert_dir_env();
const char* X509_get_default_cert_file_env();
const char* X509_get_default_private_dir();
struct X509_req_st* X509_to_X509_REQ(struct x509_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
struct x509_st* X509_REQ_to_X509(struct X509_req_st* r, int days, struct evp_pkey_st* pkey);
struct X509_algor_st* X509_ALGOR_new();
void X509_ALGOR_free(struct X509_algor_st* a);
struct X509_algor_st* d2i_X509_ALGOR(struct X509_algor_st** a, const unsigned char** in, long len);
int i2d_X509_ALGOR(const struct X509_algor_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_ALGOR_it();
struct stack_st_X509_ALGOR* d2i_X509_ALGORS(struct stack_st_X509_ALGOR** a, const unsigned char** in, long len);
int i2d_X509_ALGORS(const struct stack_st_X509_ALGOR* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_ALGORS_it();
struct X509_val_st* X509_VAL_new();
void X509_VAL_free(struct X509_val_st* a);
struct X509_val_st* d2i_X509_VAL(struct X509_val_st** a, const unsigned char** in, long len);
int i2d_X509_VAL(const struct X509_val_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_VAL_it();
struct X509_pubkey_st* X509_PUBKEY_new();
void X509_PUBKEY_free(struct X509_pubkey_st* a);
struct X509_pubkey_st* d2i_X509_PUBKEY(struct X509_pubkey_st** a, const unsigned char** in, long len);
int i2d_X509_PUBKEY(const struct X509_pubkey_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_PUBKEY_it();
struct X509_pubkey_st* X509_PUBKEY_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_PUBKEY_set(struct X509_pubkey_st** x, struct evp_pkey_st* pkey);
struct evp_pkey_st* X509_PUBKEY_get0(const struct X509_pubkey_st* key);
struct evp_pkey_st* X509_PUBKEY_get(const struct X509_pubkey_st* key);
int X509_get_pubkey_parameters(struct evp_pkey_st* pkey, struct stack_st_X509* chain);
long X509_get_pathlen(struct x509_st* x);
struct evp_pkey_st* d2i_PUBKEY(struct evp_pkey_st** a, const unsigned char** in, long len);
int i2d_PUBKEY(const struct evp_pkey_st* a, unsigned char** out);
struct evp_pkey_st* d2i_PUBKEY_ex(struct evp_pkey_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct rsa_st* d2i_RSA_PUBKEY(struct rsa_st** a, const unsigned char** in, long len);
int i2d_RSA_PUBKEY(const struct rsa_st* a, unsigned char** out);
struct dsa_st* d2i_DSA_PUBKEY(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSA_PUBKEY(const struct dsa_st* a, unsigned char** out);
struct ec_key_st* d2i_EC_PUBKEY(struct ec_key_st** a, const unsigned char** in, long len);
int i2d_EC_PUBKEY(const struct ec_key_st* a, unsigned char** out);
struct X509_sig_st* X509_SIG_new();
void X509_SIG_free(struct X509_sig_st* a);
struct X509_sig_st* d2i_X509_SIG(struct X509_sig_st** a, const unsigned char** in, long len);
int i2d_X509_SIG(const struct X509_sig_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_SIG_it();
void X509_SIG_get0(const struct X509_sig_st* sig, const struct X509_algor_st** palg, const struct asn1_string_st** pdigest);
void X509_SIG_getm(struct X509_sig_st* sig, struct X509_algor_st** palg, struct asn1_string_st** pdigest);
struct X509_req_info_st* X509_REQ_INFO_new();
void X509_REQ_INFO_free(struct X509_req_info_st* a);
struct X509_req_info_st* d2i_X509_REQ_INFO(struct X509_req_info_st** a, const unsigned char** in, long len);
int i2d_X509_REQ_INFO(const struct X509_req_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_REQ_INFO_it();
struct X509_req_st* X509_REQ_new();
void X509_REQ_free(struct X509_req_st* a);
struct X509_req_st* d2i_X509_REQ(struct X509_req_st** a, const unsigned char** in, long len);
int i2d_X509_REQ(const struct X509_req_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_REQ_it();
struct X509_req_st* X509_REQ_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_attributes_st* X509_ATTRIBUTE_new();
void X509_ATTRIBUTE_free(struct x509_attributes_st* a);
struct x509_attributes_st* d2i_X509_ATTRIBUTE(struct x509_attributes_st** a, const unsigned char** in, long len);
int i2d_X509_ATTRIBUTE(const struct x509_attributes_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_ATTRIBUTE_it();
struct x509_attributes_st* X509_ATTRIBUTE_create(int nid, int atrtype, void* value);
struct X509_extension_st* X509_EXTENSION_new();
void X509_EXTENSION_free(struct X509_extension_st* a);
struct X509_extension_st* d2i_X509_EXTENSION(struct X509_extension_st** a, const unsigned char** in, long len);
int i2d_X509_EXTENSION(const struct X509_extension_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_EXTENSION_it();
struct stack_st_X509_EXTENSION* d2i_X509_EXTENSIONS(struct stack_st_X509_EXTENSION** a, const unsigned char** in, long len);
int i2d_X509_EXTENSIONS(const struct stack_st_X509_EXTENSION* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_EXTENSIONS_it();
struct X509_name_entry_st* X509_NAME_ENTRY_new();
void X509_NAME_ENTRY_free(struct X509_name_entry_st* a);
struct X509_name_entry_st* d2i_X509_NAME_ENTRY(struct X509_name_entry_st** a, const unsigned char** in, long len);
int i2d_X509_NAME_ENTRY(const struct X509_name_entry_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_NAME_ENTRY_it();
struct X509_name_st* X509_NAME_new();
void X509_NAME_free(struct X509_name_st* a);
struct X509_name_st* d2i_X509_NAME(struct X509_name_st** a, const unsigned char** in, long len);
int i2d_X509_NAME(const struct X509_name_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_NAME_it();
int X509_NAME_set(struct X509_name_st** xn, const struct X509_name_st* name);
struct x509_cinf_st* X509_CINF_new();
void X509_CINF_free(struct x509_cinf_st* a);
struct x509_cinf_st* d2i_X509_CINF(struct x509_cinf_st** a, const unsigned char** in, long len);
int i2d_X509_CINF(const struct x509_cinf_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CINF_it();
struct x509_st* X509_new();
void X509_free(struct x509_st* a);
struct x509_st* d2i_X509(struct x509_st** a, const unsigned char** in, long len);
int i2d_X509(const struct x509_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_it();
struct x509_st* X509_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_cert_aux_st* X509_CERT_AUX_new();
void X509_CERT_AUX_free(struct x509_cert_aux_st* a);
struct x509_cert_aux_st* d2i_X509_CERT_AUX(struct x509_cert_aux_st** a, const unsigned char** in, long len);
int i2d_X509_CERT_AUX(const struct x509_cert_aux_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CERT_AUX_it();
int X509_set_ex_data(struct x509_st* r, int idx, void* arg);
void* X509_get_ex_data(const struct x509_st* r, int idx);
struct x509_st* d2i_X509_AUX(struct x509_st** a, const unsigned char** in, long len);
int i2d_X509_AUX(const struct x509_st* a, unsigned char** out);
int i2d_re_X509_tbs(struct x509_st* x, unsigned char** pp);
int X509_SIG_INFO_get(const struct x509_sig_info_st* siginf, int* mdnid, int* pknid, int* secbits, unsigned int* flags);
void X509_SIG_INFO_set(struct x509_sig_info_st* siginf, int mdnid, int pknid, int secbits, unsigned int flags);
int X509_get_signature_info(struct x509_st* x, int* mdnid, int* pknid, int* secbits, unsigned int* flags);
void X509_get0_signature(const struct asn1_string_st** psig, const struct X509_algor_st** palg, const struct x509_st* x);
int X509_get_signature_nid(const struct x509_st* x);
void X509_set0_distinguishing_id(struct x509_st* x, struct asn1_string_st* d_id);
struct asn1_string_st* X509_get0_distinguishing_id(struct x509_st* x);
void X509_REQ_set0_distinguishing_id(struct X509_req_st* x, struct asn1_string_st* d_id);
struct asn1_string_st* X509_REQ_get0_distinguishing_id(struct X509_req_st* x);
int X509_alias_set1(struct x509_st* x, const unsigned char* name, int len);
int X509_keyid_set1(struct x509_st* x, const unsigned char* id, int len);
unsigned char* X509_alias_get0(struct x509_st* x, int* len);
unsigned char* X509_keyid_get0(struct x509_st* x, int* len);
struct x509_revoked_st* X509_REVOKED_new();
void X509_REVOKED_free(struct x509_revoked_st* a);
struct x509_revoked_st* d2i_X509_REVOKED(struct x509_revoked_st** a, const unsigned char** in, long len);
int i2d_X509_REVOKED(const struct x509_revoked_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_REVOKED_it();
struct X509_crl_info_st* X509_CRL_INFO_new();
void X509_CRL_INFO_free(struct X509_crl_info_st* a);
struct X509_crl_info_st* d2i_X509_CRL_INFO(struct X509_crl_info_st** a, const unsigned char** in, long len);
int i2d_X509_CRL_INFO(const struct X509_crl_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CRL_INFO_it();
struct X509_crl_st* X509_CRL_new();
void X509_CRL_free(struct X509_crl_st* a);
struct X509_crl_st* d2i_X509_CRL(struct X509_crl_st** a, const unsigned char** in, long len);
int i2d_X509_CRL(const struct X509_crl_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CRL_it();
struct X509_crl_st* X509_CRL_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_CRL_add0_revoked(struct X509_crl_st* crl, struct x509_revoked_st* rev);
int X509_CRL_get0_by_serial(struct X509_crl_st* crl, struct x509_revoked_st** ret, const struct asn1_string_st* serial);
int X509_CRL_get0_by_cert(struct X509_crl_st* crl, struct x509_revoked_st** ret, struct x509_st* x);
struct private_key_st* X509_PKEY_new();
void X509_PKEY_free(struct private_key_st* a);
struct Netscape_spki_st* NETSCAPE_SPKI_new();
void NETSCAPE_SPKI_free(struct Netscape_spki_st* a);
struct Netscape_spki_st* d2i_NETSCAPE_SPKI(struct Netscape_spki_st** a, const unsigned char** in, long len);
int i2d_NETSCAPE_SPKI(const struct Netscape_spki_st* a, unsigned char** out);
const struct ASN1_ITEM_st* NETSCAPE_SPKI_it();
struct Netscape_spkac_st* NETSCAPE_SPKAC_new();
void NETSCAPE_SPKAC_free(struct Netscape_spkac_st* a);
struct Netscape_spkac_st* d2i_NETSCAPE_SPKAC(struct Netscape_spkac_st** a, const unsigned char** in, long len);
int i2d_NETSCAPE_SPKAC(const struct Netscape_spkac_st* a, unsigned char** out);
const struct ASN1_ITEM_st* NETSCAPE_SPKAC_it();
struct Netscape_certificate_sequence* NETSCAPE_CERT_SEQUENCE_new();
void NETSCAPE_CERT_SEQUENCE_free(struct Netscape_certificate_sequence* a);
struct Netscape_certificate_sequence* d2i_NETSCAPE_CERT_SEQUENCE(struct Netscape_certificate_sequence** a, const unsigned char** in, long len);
int i2d_NETSCAPE_CERT_SEQUENCE(const struct Netscape_certificate_sequence* a, unsigned char** out);
const struct ASN1_ITEM_st* NETSCAPE_CERT_SEQUENCE_it();
struct X509_info_st* X509_INFO_new();
void X509_INFO_free(struct X509_info_st* a);
char* X509_NAME_oneline(const struct X509_name_st* a, char* buf, int size);
int ASN1_verify(int (*i2d)(const void*,unsigned char**), struct X509_algor_st* algor1, struct asn1_string_st* signature, char* data, struct evp_pkey_st* pkey);
int ASN1_digest(int (*i2d)(const void*,unsigned char**), const struct evp_md_st* type, char* data, unsigned char* md, unsigned int* len);
int ASN1_sign(int (*i2d)(const void*,unsigned char**), struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, char* data, struct evp_pkey_st* pkey, const struct evp_md_st* type);
int ASN1_item_digest(const struct ASN1_ITEM_st* it, const struct evp_md_st* type, void* data, unsigned char* md, unsigned int* len);
int ASN1_item_verify(const struct ASN1_ITEM_st* it, const struct X509_algor_st* alg, const struct asn1_string_st* signature, const void* data, struct evp_pkey_st* pkey);
int ASN1_item_verify_ctx(const struct ASN1_ITEM_st* it, const struct X509_algor_st* alg, const struct asn1_string_st* signature, const void* data, struct evp_md_ctx_st* ctx);
int ASN1_item_sign(const struct ASN1_ITEM_st* it, struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, const void* data, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int ASN1_item_sign_ctx(const struct ASN1_ITEM_st* it, struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, const void* data, struct evp_md_ctx_st* ctx);
long X509_get_version(const struct x509_st* x);
int X509_set_version(struct x509_st* x, long version);
int X509_set_serialNumber(struct x509_st* x, struct asn1_string_st* serial);
struct asn1_string_st* X509_get_serialNumber(struct x509_st* x);
const struct asn1_string_st* X509_get0_serialNumber(const struct x509_st* x);
int X509_set_issuer_name(struct x509_st* x, const struct X509_name_st* name);
struct X509_name_st* X509_get_issuer_name(const struct x509_st* a);
int X509_set_subject_name(struct x509_st* x, const struct X509_name_st* name);
struct X509_name_st* X509_get_subject_name(const struct x509_st* a);
const struct asn1_string_st* X509_get0_notBefore(const struct x509_st* x);
struct asn1_string_st* X509_getm_notBefore(const struct x509_st* x);
int X509_set1_notBefore(struct x509_st* x, const struct asn1_string_st* tm);
const struct asn1_string_st* X509_get0_notAfter(const struct x509_st* x);
struct asn1_string_st* X509_getm_notAfter(const struct x509_st* x);
int X509_set1_notAfter(struct x509_st* x, const struct asn1_string_st* tm);
int X509_set_pubkey(struct x509_st* x, struct evp_pkey_st* pkey);
int X509_up_ref(struct x509_st* x);
int X509_get_signature_type(const struct x509_st* x);
struct X509_pubkey_st* X509_get_X509_PUBKEY(const struct x509_st* x);
const struct stack_st_X509_EXTENSION* X509_get0_extensions(const struct x509_st* x);
void X509_get0_uids(const struct x509_st* x, const struct asn1_string_st** piuid, const struct asn1_string_st** psuid);
const struct X509_algor_st* X509_get0_tbs_sigalg(const struct x509_st* x);
struct evp_pkey_st* X509_get0_pubkey(const struct x509_st* x);
struct evp_pkey_st* X509_get_pubkey(struct x509_st* x);
struct asn1_string_st* X509_get0_pubkey_bitstr(const struct x509_st* x);
long X509_REQ_get_version(const struct X509_req_st* req);
int X509_REQ_set_version(struct X509_req_st* x, long version);
struct X509_name_st* X509_REQ_get_subject_name(const struct X509_req_st* req);
int X509_REQ_set_subject_name(struct X509_req_st* req, const struct X509_name_st* name);
void X509_REQ_get0_signature(const struct X509_req_st* req, const struct asn1_string_st** psig, const struct X509_algor_st** palg);
void X509_REQ_set0_signature(struct X509_req_st* req, struct asn1_string_st* psig);
int X509_REQ_set1_signature_algo(struct X509_req_st* req, struct X509_algor_st* palg);
int X509_REQ_get_signature_nid(const struct X509_req_st* req);
int i2d_re_X509_REQ_tbs(struct X509_req_st* req, unsigned char** pp);
int X509_REQ_set_pubkey(struct X509_req_st* x, struct evp_pkey_st* pkey);
struct evp_pkey_st* X509_REQ_get_pubkey(struct X509_req_st* req);
struct evp_pkey_st* X509_REQ_get0_pubkey(const struct X509_req_st* req);
struct X509_pubkey_st* X509_REQ_get_X509_PUBKEY(struct X509_req_st* req);
int X509_REQ_extension_nid(int nid);
int* X509_REQ_get_extension_nids();
void X509_REQ_set_extension_nids(int* nids);
struct stack_st_X509_EXTENSION* X509_REQ_get_extensions(struct X509_req_st* req);
int X509_REQ_add_extensions_nid(struct X509_req_st* req, const struct stack_st_X509_EXTENSION* exts, int nid);
int X509_REQ_add_extensions(struct X509_req_st* req, const struct stack_st_X509_EXTENSION* ext);
int X509_REQ_get_attr_count(const struct X509_req_st* req);
int X509_REQ_get_attr_by_NID(const struct X509_req_st* req, int nid, int lastpos);
int X509_REQ_get_attr_by_OBJ(const struct X509_req_st* req, const struct asn1_object_st* obj, int lastpos);
struct x509_attributes_st* X509_REQ_get_attr(const struct X509_req_st* req, int loc);
struct x509_attributes_st* X509_REQ_delete_attr(struct X509_req_st* req, int loc);
int X509_REQ_add1_attr(struct X509_req_st* req, struct x509_attributes_st* attr);
int X509_REQ_add1_attr_by_OBJ(struct X509_req_st* req, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
int X509_REQ_add1_attr_by_NID(struct X509_req_st* req, int nid, int type, const unsigned char* bytes, int len);
int X509_REQ_add1_attr_by_txt(struct X509_req_st* req, const char* attrname, int type, const unsigned char* bytes, int len);
int X509_CRL_set_version(struct X509_crl_st* x, long version);
int X509_CRL_set_issuer_name(struct X509_crl_st* x, const struct X509_name_st* name);
int X509_CRL_set1_lastUpdate(struct X509_crl_st* x, const struct asn1_string_st* tm);
int X509_CRL_set1_nextUpdate(struct X509_crl_st* x, const struct asn1_string_st* tm);
int X509_CRL_sort(struct X509_crl_st* crl);
int X509_CRL_up_ref(struct X509_crl_st* crl);
long X509_CRL_get_version(const struct X509_crl_st* crl);
const struct asn1_string_st* X509_CRL_get0_lastUpdate(const struct X509_crl_st* crl);
const struct asn1_string_st* X509_CRL_get0_nextUpdate(const struct X509_crl_st* crl);
struct asn1_string_st* X509_CRL_get_lastUpdate(struct X509_crl_st* crl);
struct asn1_string_st* X509_CRL_get_nextUpdate(struct X509_crl_st* crl);
struct X509_name_st* X509_CRL_get_issuer(const struct X509_crl_st* crl);
const struct stack_st_X509_EXTENSION* X509_CRL_get0_extensions(const struct X509_crl_st* crl);
struct stack_st_X509_REVOKED* X509_CRL_get_REVOKED(struct X509_crl_st* crl);
void X509_CRL_get0_signature(const struct X509_crl_st* crl, const struct asn1_string_st** psig, const struct X509_algor_st** palg);
int X509_CRL_get_signature_nid(const struct X509_crl_st* crl);
int i2d_re_X509_CRL_tbs(struct X509_crl_st* req, unsigned char** pp);
const struct asn1_string_st* X509_REVOKED_get0_serialNumber(const struct x509_revoked_st* x);
int X509_REVOKED_set_serialNumber(struct x509_revoked_st* x, struct asn1_string_st* serial);
const struct asn1_string_st* X509_REVOKED_get0_revocationDate(const struct x509_revoked_st* x);
int X509_REVOKED_set_revocationDate(struct x509_revoked_st* r, struct asn1_string_st* tm);
const struct stack_st_X509_EXTENSION* X509_REVOKED_get0_extensions(const struct x509_revoked_st* r);
struct X509_crl_st* X509_CRL_diff(struct X509_crl_st* base, struct X509_crl_st* newer, struct evp_pkey_st* skey, const struct evp_md_st* md, unsigned int flags);
int X509_REQ_check_private_key(const struct X509_req_st* req, struct evp_pkey_st* pkey);
int X509_check_private_key(const struct x509_st* cert, const struct evp_pkey_st* pkey);
int X509_chain_check_suiteb(int* perror_depth, struct x509_st* x, struct stack_st_X509* chain, unsigned long  int flags);
int X509_CRL_check_suiteb(struct X509_crl_st* crl, struct evp_pkey_st* pk, unsigned long  int flags);
void OSSL_STACK_OF_X509_free(struct stack_st_X509* certs);
struct stack_st_X509* X509_chain_up_ref(struct stack_st_X509* chain);
int X509_issuer_and_serial_cmp(const struct x509_st* a, const struct x509_st* b);
unsigned long  int X509_issuer_and_serial_hash(struct x509_st* a);
int X509_issuer_name_cmp(const struct x509_st* a, const struct x509_st* b);
unsigned long  int X509_issuer_name_hash(struct x509_st* a);
int X509_subject_name_cmp(const struct x509_st* a, const struct x509_st* b);
unsigned long  int X509_subject_name_hash(struct x509_st* x);
unsigned long  int X509_issuer_name_hash_old(struct x509_st* a);
unsigned long  int X509_subject_name_hash_old(struct x509_st* x);
int X509_add_cert(struct stack_st_X509* sk, struct x509_st* cert, int flags);
int X509_add_certs(struct stack_st_X509* sk, struct stack_st_X509* certs, int flags);
int X509_cmp(const struct x509_st* a, const struct x509_st* b);
int X509_NAME_cmp(const struct X509_name_st* a, const struct X509_name_st* b);
int X509_certificate_type(const struct x509_st* x, const struct evp_pkey_st* pubkey);
unsigned long  int X509_NAME_hash_ex(const struct X509_name_st* x, struct ossl_lib_ctx_st* libctx, const char* propq, int* ok);
unsigned long  int X509_NAME_hash_old(const struct X509_name_st* x);
int X509_CRL_cmp(const struct X509_crl_st* a, const struct X509_crl_st* b);
int X509_CRL_match(const struct X509_crl_st* a, const struct X509_crl_st* b);
int X509_aux_print(struct bio_st* out, struct x509_st* x, int indent);
int X509_print_ex_fp(struct __sFILE* bp, struct x509_st* x, unsigned long  int nmflag, unsigned long  int cflag);
int X509_print_fp(struct __sFILE* bp, struct x509_st* x);
int X509_CRL_print_fp(struct __sFILE* bp, struct X509_crl_st* x);
int X509_REQ_print_fp(struct __sFILE* bp, struct X509_req_st* req);
int X509_NAME_print_ex_fp(struct __sFILE* fp, const struct X509_name_st* nm, int indent, unsigned long  int flags);
int X509_NAME_print(struct bio_st* bp, const struct X509_name_st* name, int obase);
int X509_NAME_print_ex(struct bio_st* out, const struct X509_name_st* nm, int indent, unsigned long  int flags);
int X509_print_ex(struct bio_st* bp, struct x509_st* x, unsigned long  int nmflag, unsigned long  int cflag);
int X509_print(struct bio_st* bp, struct x509_st* x);
int X509_ocspid_print(struct bio_st* bp, struct x509_st* x);
int X509_CRL_print_ex(struct bio_st* out, struct X509_crl_st* x, unsigned long  int nmflag);
int X509_CRL_print(struct bio_st* bp, struct X509_crl_st* x);
int X509_REQ_print_ex(struct bio_st* bp, struct X509_req_st* x, unsigned long  int nmflag, unsigned long  int cflag);
int X509_REQ_print(struct bio_st* bp, struct X509_req_st* req);
int X509_NAME_entry_count(const struct X509_name_st* name);
int X509_NAME_get_text_by_NID(const struct X509_name_st* name, int nid, char* buf, int len);
int X509_NAME_get_text_by_OBJ(const struct X509_name_st* name, const struct asn1_object_st* obj, char* buf, int len);
int X509_NAME_get_index_by_NID(const struct X509_name_st* name, int nid, int lastpos);
int X509_NAME_get_index_by_OBJ(const struct X509_name_st* name, const struct asn1_object_st* obj, int lastpos);
struct X509_name_entry_st* X509_NAME_get_entry(const struct X509_name_st* name, int loc);
struct X509_name_entry_st* X509_NAME_delete_entry(struct X509_name_st* name, int loc);
int X509_NAME_add_entry(struct X509_name_st* name, const struct X509_name_entry_st* ne, int loc, int set);
int X509_NAME_add_entry_by_OBJ(struct X509_name_st* name, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len, int loc, int set);
int X509_NAME_add_entry_by_NID(struct X509_name_st* name, int nid, int type, const unsigned char* bytes, int len, int loc, int set);
struct X509_name_entry_st* X509_NAME_ENTRY_create_by_txt(struct X509_name_entry_st** ne, const char* field, int type, const unsigned char* bytes, int len);
struct X509_name_entry_st* X509_NAME_ENTRY_create_by_NID(struct X509_name_entry_st** ne, int nid, int type, const unsigned char* bytes, int len);
int X509_NAME_add_entry_by_txt(struct X509_name_st* name, const char* field, int type, const unsigned char* bytes, int len, int loc, int set);
struct X509_name_entry_st* X509_NAME_ENTRY_create_by_OBJ(struct X509_name_entry_st** ne, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
int X509_NAME_ENTRY_set_object(struct X509_name_entry_st* ne, const struct asn1_object_st* obj);
int X509_NAME_ENTRY_set_data(struct X509_name_entry_st* ne, int type, const unsigned char* bytes, int len);
struct asn1_object_st* X509_NAME_ENTRY_get_object(const struct X509_name_entry_st* ne);
struct asn1_string_st* X509_NAME_ENTRY_get_data(const struct X509_name_entry_st* ne);
int X509_NAME_ENTRY_set(const struct X509_name_entry_st* ne);
int X509_NAME_get0_der(const struct X509_name_st* nm, const unsigned char** pder, unsigned long  int* pderlen);
int X509v3_get_ext_count(const struct stack_st_X509_EXTENSION* x);
int X509v3_get_ext_by_NID(const struct stack_st_X509_EXTENSION* x, int nid, int lastpos);
int X509v3_get_ext_by_OBJ(const struct stack_st_X509_EXTENSION* x, const struct asn1_object_st* obj, int lastpos);
int X509v3_get_ext_by_critical(const struct stack_st_X509_EXTENSION* x, int crit, int lastpos);
struct X509_extension_st* X509v3_get_ext(const struct stack_st_X509_EXTENSION* x, int loc);
struct X509_extension_st* X509v3_delete_ext(struct stack_st_X509_EXTENSION* x, int loc);
struct stack_st_X509_EXTENSION* X509v3_add_ext(struct stack_st_X509_EXTENSION** x, struct X509_extension_st* ex, int loc);
struct stack_st_X509_EXTENSION* X509v3_add_extensions(struct stack_st_X509_EXTENSION** target, const struct stack_st_X509_EXTENSION* exts);
int X509_get_ext_count(const struct x509_st* x);
int X509_get_ext_by_NID(const struct x509_st* x, int nid, int lastpos);
int X509_get_ext_by_OBJ(const struct x509_st* x, const struct asn1_object_st* obj, int lastpos);
int X509_get_ext_by_critical(const struct x509_st* x, int crit, int lastpos);
struct X509_extension_st* X509_get_ext(const struct x509_st* x, int loc);
struct X509_extension_st* X509_delete_ext(struct x509_st* x, int loc);
int X509_add_ext(struct x509_st* x, struct X509_extension_st* ex, int loc);
void* X509_get_ext_d2i(const struct x509_st* x, int nid, int* crit, int* idx);
int X509_add1_ext_i2d(struct x509_st* x, int nid, void* value, int crit, unsigned long  int flags);
int X509_CRL_get_ext_count(const struct X509_crl_st* x);
int X509_CRL_get_ext_by_NID(const struct X509_crl_st* x, int nid, int lastpos);
int X509_CRL_get_ext_by_OBJ(const struct X509_crl_st* x, const struct asn1_object_st* obj, int lastpos);
int X509_CRL_get_ext_by_critical(const struct X509_crl_st* x, int crit, int lastpos);
struct X509_extension_st* X509_CRL_get_ext(const struct X509_crl_st* x, int loc);
struct X509_extension_st* X509_CRL_delete_ext(struct X509_crl_st* x, int loc);
int X509_CRL_add_ext(struct X509_crl_st* x, struct X509_extension_st* ex, int loc);
void* X509_CRL_get_ext_d2i(const struct X509_crl_st* x, int nid, int* crit, int* idx);
int X509_CRL_add1_ext_i2d(struct X509_crl_st* x, int nid, void* value, int crit, unsigned long  int flags);
int X509_REVOKED_get_ext_count(const struct x509_revoked_st* x);
int X509_REVOKED_get_ext_by_NID(const struct x509_revoked_st* x, int nid, int lastpos);
int X509_REVOKED_get_ext_by_OBJ(const struct x509_revoked_st* x, const struct asn1_object_st* obj, int lastpos);
int X509_REVOKED_get_ext_by_critical(const struct x509_revoked_st* x, int crit, int lastpos);
struct X509_extension_st* X509_REVOKED_get_ext(const struct x509_revoked_st* x, int loc);
struct X509_extension_st* X509_REVOKED_delete_ext(struct x509_revoked_st* x, int loc);
int X509_REVOKED_add_ext(struct x509_revoked_st* x, struct X509_extension_st* ex, int loc);
void* X509_REVOKED_get_ext_d2i(const struct x509_revoked_st* x, int nid, int* crit, int* idx);
int X509_REVOKED_add1_ext_i2d(struct x509_revoked_st* x, int nid, void* value, int crit, unsigned long  int flags);
struct X509_extension_st* X509_EXTENSION_create_by_NID(struct X509_extension_st** ex, int nid, int crit, struct asn1_string_st* data);
struct X509_extension_st* X509_EXTENSION_create_by_OBJ(struct X509_extension_st** ex, const struct asn1_object_st* obj, int crit, struct asn1_string_st* data);
int X509_EXTENSION_set_object(struct X509_extension_st* ex, const struct asn1_object_st* obj);
int X509_EXTENSION_set_critical(struct X509_extension_st* ex, int crit);
int X509_EXTENSION_set_data(struct X509_extension_st* ex, struct asn1_string_st* data);
struct asn1_object_st* X509_EXTENSION_get_object(struct X509_extension_st* ex);
struct asn1_string_st* X509_EXTENSION_get_data(struct X509_extension_st* ne);
int X509_EXTENSION_get_critical(const struct X509_extension_st* ex);
int X509at_get_attr_count(const struct stack_st_X509_ATTRIBUTE* x);
int X509at_get_attr_by_NID(const struct stack_st_X509_ATTRIBUTE* x, int nid, int lastpos);
int X509at_get_attr_by_OBJ(const struct stack_st_X509_ATTRIBUTE* sk, const struct asn1_object_st* obj, int lastpos);
struct x509_attributes_st* X509at_get_attr(const struct stack_st_X509_ATTRIBUTE* x, int loc);
struct x509_attributes_st* X509at_delete_attr(struct stack_st_X509_ATTRIBUTE* x, int loc);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr(struct stack_st_X509_ATTRIBUTE** x, struct x509_attributes_st* attr);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE** x, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr_by_NID(struct stack_st_X509_ATTRIBUTE** x, int nid, int type, const unsigned char* bytes, int len);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr_by_txt(struct stack_st_X509_ATTRIBUTE** x, const char* attrname, int type, const unsigned char* bytes, int len);
void* X509at_get0_data_by_OBJ(const struct stack_st_X509_ATTRIBUTE* x, const struct asn1_object_st* obj, int lastpos, int type);
struct x509_attributes_st* X509_ATTRIBUTE_create_by_NID(struct x509_attributes_st** attr, int nid, int atrtype, const void* data, int len);
struct x509_attributes_st* X509_ATTRIBUTE_create_by_OBJ(struct x509_attributes_st** attr, const struct asn1_object_st* obj, int atrtype, const void* data, int len);
struct x509_attributes_st* X509_ATTRIBUTE_create_by_txt(struct x509_attributes_st** attr, const char* atrname, int type, const unsigned char* bytes, int len);
int X509_ATTRIBUTE_set1_object(struct x509_attributes_st* attr, const struct asn1_object_st* obj);
int X509_ATTRIBUTE_set1_data(struct x509_attributes_st* attr, int attrtype, const void* data, int len);
void* X509_ATTRIBUTE_get0_data(struct x509_attributes_st* attr, int idx, int atrtype, void* data);
int X509_ATTRIBUTE_count(const struct x509_attributes_st* attr);
struct asn1_object_st* X509_ATTRIBUTE_get0_object(struct x509_attributes_st* attr);
struct asn1_type_st* X509_ATTRIBUTE_get0_type(struct x509_attributes_st* attr, int idx);
int EVP_PKEY_get_attr_count(const struct evp_pkey_st* key);
int EVP_PKEY_get_attr_by_NID(const struct evp_pkey_st* key, int nid, int lastpos);
int EVP_PKEY_get_attr_by_OBJ(const struct evp_pkey_st* key, const struct asn1_object_st* obj, int lastpos);
struct x509_attributes_st* EVP_PKEY_get_attr(const struct evp_pkey_st* key, int loc);
struct x509_attributes_st* EVP_PKEY_delete_attr(struct evp_pkey_st* key, int loc);
int EVP_PKEY_add1_attr(struct evp_pkey_st* key, struct x509_attributes_st* attr);
int EVP_PKEY_add1_attr_by_OBJ(struct evp_pkey_st* key, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
int EVP_PKEY_add1_attr_by_NID(struct evp_pkey_st* key, int nid, int type, const unsigned char* bytes, int len);
int EVP_PKEY_add1_attr_by_txt(struct evp_pkey_st* key, const char* attrname, int type, const unsigned char* bytes, int len);
struct x509_st* X509_find_by_issuer_and_serial(struct stack_st_X509* sk, const struct X509_name_st* name, const struct asn1_string_st* serial);
struct x509_st* X509_find_by_subject(struct stack_st_X509* sk, const struct X509_name_st* name);
struct PBEPARAM_st* PBEPARAM_new();
void PBEPARAM_free(struct PBEPARAM_st* a);
struct PBEPARAM_st* d2i_PBEPARAM(struct PBEPARAM_st** a, const unsigned char** in, long len);
int i2d_PBEPARAM(const struct PBEPARAM_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PBEPARAM_it();
struct PBE2PARAM_st* PBE2PARAM_new();
void PBE2PARAM_free(struct PBE2PARAM_st* a);
struct PBE2PARAM_st* d2i_PBE2PARAM(struct PBE2PARAM_st** a, const unsigned char** in, long len);
int i2d_PBE2PARAM(const struct PBE2PARAM_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PBE2PARAM_it();
struct PBKDF2PARAM_st* PBKDF2PARAM_new();
void PBKDF2PARAM_free(struct PBKDF2PARAM_st* a);
struct PBKDF2PARAM_st* d2i_PBKDF2PARAM(struct PBKDF2PARAM_st** a, const unsigned char** in, long len);
int i2d_PBKDF2PARAM(const struct PBKDF2PARAM_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PBKDF2PARAM_it();
struct anonymous_typeX26* PBMAC1PARAM_new();
void PBMAC1PARAM_free(struct anonymous_typeX26* a);
struct anonymous_typeX26* d2i_PBMAC1PARAM(struct anonymous_typeX26** a, const unsigned char** in, long len);
int i2d_PBMAC1PARAM(const struct anonymous_typeX26* a, unsigned char** out);
const struct ASN1_ITEM_st* PBMAC1PARAM_it();
struct SCRYPT_PARAMS_st* SCRYPT_PARAMS_new();
void SCRYPT_PARAMS_free(struct SCRYPT_PARAMS_st* a);
struct SCRYPT_PARAMS_st* d2i_SCRYPT_PARAMS(struct SCRYPT_PARAMS_st** a, const unsigned char** in, long len);
int i2d_SCRYPT_PARAMS(const struct SCRYPT_PARAMS_st* a, unsigned char** out);
const struct ASN1_ITEM_st* SCRYPT_PARAMS_it();
int PKCS5_pbe_set0_algor(struct X509_algor_st* algor, int alg, int iter, const unsigned char* salt, int saltlen);
int PKCS5_pbe_set0_algor_ex(struct X509_algor_st* algor, int alg, int iter, const unsigned char* salt, int saltlen, struct ossl_lib_ctx_st* libctx);
struct X509_algor_st* PKCS5_pbe_set(int alg, int iter, const unsigned char* salt, int saltlen);
struct X509_algor_st* PKCS5_pbe_set_ex(int alg, int iter, const unsigned char* salt, int saltlen, struct ossl_lib_ctx_st* libctx);
struct X509_algor_st* PKCS5_pbe2_set(const struct evp_cipher_st* cipher, int iter, unsigned char* salt, int saltlen);
struct X509_algor_st* PKCS5_pbe2_set_iv(const struct evp_cipher_st* cipher, int iter, unsigned char* salt, int saltlen, unsigned char* aiv, int prf_nid);
struct X509_algor_st* PKCS5_pbe2_set_iv_ex(const struct evp_cipher_st* cipher, int iter, unsigned char* salt, int saltlen, unsigned char* aiv, int prf_nid, struct ossl_lib_ctx_st* libctx);
struct X509_algor_st* PKCS5_pbe2_set_scrypt(const struct evp_cipher_st* cipher, const unsigned char* salt, int saltlen, unsigned char* aiv, unsigned long  long N, unsigned long  long r, unsigned long  long p);
struct X509_algor_st* PKCS5_pbkdf2_set(int iter, unsigned char* salt, int saltlen, int prf_nid, int keylen);
struct X509_algor_st* PKCS5_pbkdf2_set_ex(int iter, unsigned char* salt, int saltlen, int prf_nid, int keylen, struct ossl_lib_ctx_st* libctx);
struct PBKDF2PARAM_st* PBMAC1_get1_pbkdf2_param(const struct X509_algor_st* macalg);
struct pkcs8_priv_key_info_st* PKCS8_PRIV_KEY_INFO_new();
void PKCS8_PRIV_KEY_INFO_free(struct pkcs8_priv_key_info_st* a);
struct pkcs8_priv_key_info_st* d2i_PKCS8_PRIV_KEY_INFO(struct pkcs8_priv_key_info_st** a, const unsigned char** in, long len);
int i2d_PKCS8_PRIV_KEY_INFO(const struct pkcs8_priv_key_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS8_PRIV_KEY_INFO_it();
struct evp_pkey_st* EVP_PKCS82PKEY(const struct pkcs8_priv_key_info_st* p8);
struct evp_pkey_st* EVP_PKCS82PKEY_ex(const struct pkcs8_priv_key_info_st* p8, struct ossl_lib_ctx_st* libctx, const char* propq);
struct pkcs8_priv_key_info_st* EVP_PKEY2PKCS8(const struct evp_pkey_st* pkey);
int PKCS8_pkey_set0(struct pkcs8_priv_key_info_st* priv, struct asn1_object_st* aobj, int version, int ptype, void* pval, unsigned char* penc, int penclen);
int PKCS8_pkey_get0(const struct asn1_object_st** ppkalg, const unsigned char** pk, int* ppklen, const struct X509_algor_st** pa, const struct pkcs8_priv_key_info_st* p8);
const struct stack_st_X509_ATTRIBUTE* PKCS8_pkey_get0_attrs(const struct pkcs8_priv_key_info_st* p8);
int PKCS8_pkey_add1_attr(struct pkcs8_priv_key_info_st* p8, struct x509_attributes_st* attr);
int PKCS8_pkey_add1_attr_by_NID(struct pkcs8_priv_key_info_st* p8, int nid, int type, const unsigned char* bytes, int len);
int PKCS8_pkey_add1_attr_by_OBJ(struct pkcs8_priv_key_info_st* p8, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
void X509_PUBKEY_set0_public_key(struct X509_pubkey_st* pub, unsigned char* penc, int penclen);
int X509_PUBKEY_set0_param(struct X509_pubkey_st* pub, struct asn1_object_st* aobj, int ptype, void* pval, unsigned char* penc, int penclen);
int X509_PUBKEY_get0_param(struct asn1_object_st** ppkalg, const unsigned char** pk, int* ppklen, struct X509_algor_st** pa, const struct X509_pubkey_st* pub);
int X509_PUBKEY_eq(const struct X509_pubkey_st* a, const struct X509_pubkey_st* b);
int PEM_get_EVP_CIPHER_INFO(char* header, struct evp_cipher_info_st* cipher);
int PEM_do_header(struct evp_cipher_info_st* cipher, unsigned char* data, long* len, int (*callback)(char*,int,int,void*), void* u);
int PEM_read_bio(struct bio_st* bp, char** name, char** header, unsigned char** data, long* len);
int PEM_read_bio_ex(struct bio_st* bp, char** name, char** header, unsigned char** data, long* len, unsigned int flags);
int PEM_bytes_read_bio_secmem(unsigned char** pdata, long* plen, char** pnm, const char* name, struct bio_st* bp, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio(struct bio_st* bp, const char* name, const char* hdr, const unsigned char* data, long len);
int PEM_bytes_read_bio(unsigned char** pdata, long* plen, char** pnm, const char* name, struct bio_st* bp, int (*cb)(char*,int,int,void*), void* u);
void* PEM_ASN1_read_bio(void* (*d2i)(void**,const unsigned char**,long), const char* name, struct bio_st* bp, void** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_ASN1_write_bio(int (*i2d)(const void*,unsigned char**), const char* name, struct bio_st* bp, const void* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read_bio(struct bio_st* bp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read_bio_ex(struct bio_st* bp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_X509_INFO_write_bio(struct bio_st* bp, const struct X509_info_st* xi, struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cd)(char*,int,int,void*), void* u);
int PEM_read(struct __sFILE* fp, char** name, char** header, unsigned char** data, long* len);
int PEM_write(struct __sFILE* fp, const char* name, const char* hdr, const unsigned char* data, long len);
void* PEM_ASN1_read(void* (*d2i)(void**,const unsigned char**,long), const char* name, struct __sFILE* fp, void** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_ASN1_write(int (*i2d)(const void*,unsigned char**), const char* name, struct __sFILE* fp, const void* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*callback)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read(struct __sFILE* fp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read_ex(struct __sFILE* fp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_SignInit(struct evp_md_ctx_st* ctx, struct evp_md_st* type);
int PEM_SignUpdate(struct evp_md_ctx_st* ctx, const unsigned char* d, unsigned int cnt);
int PEM_SignFinal(struct evp_md_ctx_st* ctx, unsigned char* sigret, unsigned int* siglen, struct evp_pkey_st* pkey);
int PEM_def_callback(char* buf, int num, int rwflag, void* userdata);
void PEM_proc_type(char* buf, int type);
void PEM_dek_info(char* buf, const char* type, int len, const char* str);
struct x509_st* PEM_read_bio_X509(struct bio_st* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
struct x509_st* PEM_read_X509(struct __sFILE* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509(struct bio_st* out, const struct x509_st* x);
int PEM_write_X509(struct __sFILE* out, const struct x509_st* x);
struct x509_st* PEM_read_bio_X509_AUX(struct bio_st* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
struct x509_st* PEM_read_X509_AUX(struct __sFILE* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_AUX(struct bio_st* out, const struct x509_st* x);
int PEM_write_X509_AUX(struct __sFILE* out, const struct x509_st* x);
struct X509_req_st* PEM_read_bio_X509_REQ(struct bio_st* out, struct X509_req_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_req_st* PEM_read_X509_REQ(struct __sFILE* out, struct X509_req_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_REQ(struct bio_st* out, const struct X509_req_st* x);
int PEM_write_X509_REQ(struct __sFILE* out, const struct X509_req_st* x);
int PEM_write_bio_X509_REQ_NEW(struct bio_st* out, const struct X509_req_st* x);
int PEM_write_X509_REQ_NEW(struct __sFILE* out, const struct X509_req_st* x);
struct X509_crl_st* PEM_read_bio_X509_CRL(struct bio_st* out, struct X509_crl_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_crl_st* PEM_read_X509_CRL(struct __sFILE* out, struct X509_crl_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_CRL(struct bio_st* out, const struct X509_crl_st* x);
int PEM_write_X509_CRL(struct __sFILE* out, const struct X509_crl_st* x);
struct X509_pubkey_st* PEM_read_bio_X509_PUBKEY(struct bio_st* out, struct X509_pubkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_pubkey_st* PEM_read_X509_PUBKEY(struct __sFILE* out, struct X509_pubkey_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_PUBKEY(struct bio_st* out, const struct X509_pubkey_st* x);
int PEM_write_X509_PUBKEY(struct __sFILE* out, const struct X509_pubkey_st* x);
struct pkcs7_st* PEM_read_bio_PKCS7(struct bio_st* out, struct pkcs7_st** x, int (*cb)(char*,int,int,void*), void* u);
struct pkcs7_st* PEM_read_PKCS7(struct __sFILE* out, struct pkcs7_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS7(struct bio_st* out, const struct pkcs7_st* x);
int PEM_write_PKCS7(struct __sFILE* out, const struct pkcs7_st* x);
struct Netscape_certificate_sequence* PEM_read_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st* out, struct Netscape_certificate_sequence** x, int (*cb)(char*,int,int,void*), void* u);
struct Netscape_certificate_sequence* PEM_read_NETSCAPE_CERT_SEQUENCE(struct __sFILE* out, struct Netscape_certificate_sequence** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st* out, const struct Netscape_certificate_sequence* x);
int PEM_write_NETSCAPE_CERT_SEQUENCE(struct __sFILE* out, const struct Netscape_certificate_sequence* x);
struct X509_sig_st* PEM_read_bio_PKCS8(struct bio_st* out, struct X509_sig_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_sig_st* PEM_read_PKCS8(struct __sFILE* out, struct X509_sig_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8(struct bio_st* out, const struct X509_sig_st* x);
int PEM_write_PKCS8(struct __sFILE* out, const struct X509_sig_st* x);
struct pkcs8_priv_key_info_st* PEM_read_bio_PKCS8_PRIV_KEY_INFO(struct bio_st* out, struct pkcs8_priv_key_info_st** x, int (*cb)(char*,int,int,void*), void* u);
struct pkcs8_priv_key_info_st* PEM_read_PKCS8_PRIV_KEY_INFO(struct __sFILE* out, struct pkcs8_priv_key_info_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8_PRIV_KEY_INFO(struct bio_st* out, const struct pkcs8_priv_key_info_st* x);
int PEM_write_PKCS8_PRIV_KEY_INFO(struct __sFILE* out, const struct pkcs8_priv_key_info_st* x);
struct rsa_st* PEM_read_bio_RSAPrivateKey(struct bio_st* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_RSAPrivateKey(struct __sFILE* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_RSAPrivateKey(struct bio_st* out, const struct rsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_RSAPrivateKey(struct __sFILE* out, const struct rsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_bio_RSAPublicKey(struct bio_st* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_RSAPublicKey(struct __sFILE* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_RSAPublicKey(struct bio_st* out, const struct rsa_st* x);
int PEM_write_RSAPublicKey(struct __sFILE* out, const struct rsa_st* x);
struct rsa_st* PEM_read_bio_RSA_PUBKEY(struct bio_st* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_RSA_PUBKEY(struct __sFILE* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_RSA_PUBKEY(struct bio_st* out, const struct rsa_st* x);
int PEM_write_RSA_PUBKEY(struct __sFILE* out, const struct rsa_st* x);
struct dsa_st* PEM_read_bio_DSAPrivateKey(struct bio_st* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_DSAPrivateKey(struct __sFILE* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DSAPrivateKey(struct bio_st* out, const struct dsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_DSAPrivateKey(struct __sFILE* out, const struct dsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_bio_DSA_PUBKEY(struct bio_st* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_DSA_PUBKEY(struct __sFILE* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DSA_PUBKEY(struct bio_st* out, const struct dsa_st* x);
int PEM_write_DSA_PUBKEY(struct __sFILE* out, const struct dsa_st* x);
struct dsa_st* PEM_read_bio_DSAparams(struct bio_st* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_DSAparams(struct __sFILE* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DSAparams(struct bio_st* out, const struct dsa_st* x);
int PEM_write_DSAparams(struct __sFILE* out, const struct dsa_st* x);
struct ec_group_st* PEM_read_bio_ECPKParameters(struct bio_st* out, struct ec_group_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ec_group_st* PEM_read_ECPKParameters(struct __sFILE* out, struct ec_group_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_ECPKParameters(struct bio_st* out, const struct ec_group_st* x);
int PEM_write_ECPKParameters(struct __sFILE* out, const struct ec_group_st* x);
struct ec_key_st* PEM_read_bio_ECPrivateKey(struct bio_st* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ec_key_st* PEM_read_ECPrivateKey(struct __sFILE* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_ECPrivateKey(struct bio_st* out, const struct ec_key_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_ECPrivateKey(struct __sFILE* out, const struct ec_key_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct ec_key_st* PEM_read_bio_EC_PUBKEY(struct bio_st* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ec_key_st* PEM_read_EC_PUBKEY(struct __sFILE* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_EC_PUBKEY(struct bio_st* out, const struct ec_key_st* x);
int PEM_write_EC_PUBKEY(struct __sFILE* out, const struct ec_key_st* x);
struct dh_st* PEM_read_bio_DHparams(struct bio_st* out, struct dh_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dh_st* PEM_read_DHparams(struct __sFILE* out, struct dh_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DHparams(struct bio_st* out, const struct dh_st* x);
int PEM_write_DHparams(struct __sFILE* out, const struct dh_st* x);
int PEM_write_bio_DHxparams(struct bio_st* out, const struct dh_st* x);
int PEM_write_DHxparams(struct __sFILE* out, const struct dh_st* x);
struct evp_pkey_st* PEM_read_bio_PrivateKey(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_bio_PrivateKey_ex(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_PrivateKey(struct __sFILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_PrivateKey_ex(struct __sFILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_bio_PrivateKey(struct bio_st* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PrivateKey_ex(struct bio_st* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_PrivateKey(struct __sFILE* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_PrivateKey_ex(struct __sFILE* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_bio_PUBKEY(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_bio_PUBKEY_ex(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_PUBKEY(struct __sFILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_PUBKEY_ex(struct __sFILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_bio_PUBKEY(struct bio_st* out, const struct evp_pkey_st* x);
int PEM_write_bio_PUBKEY_ex(struct bio_st* out, const struct evp_pkey_st* x, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_PUBKEY(struct __sFILE* out, const struct evp_pkey_st* x);
int PEM_write_PUBKEY_ex(struct __sFILE* out, const struct evp_pkey_st* x, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_bio_PrivateKey_traditional(struct bio_st* bp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8PrivateKey_nid(struct bio_st* bp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8PrivateKey(struct bio_st* anonymous_var_nameX2302, const struct evp_pkey_st* anonymous_var_nameX2303, const struct evp_cipher_st* anonymous_var_nameX2304, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_bio(struct bio_st* bp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_nid_bio(struct bio_st* bp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* d2i_PKCS8PrivateKey_bio(struct bio_st* bp, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_fp(struct __sFILE* fp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_nid_fp(struct __sFILE* fp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_PKCS8PrivateKey_nid(struct __sFILE* fp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* d2i_PKCS8PrivateKey_fp(struct __sFILE* fp, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_PKCS8PrivateKey(struct __sFILE* fp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const char* kstr, int klen, int (*cd)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_bio_Parameters_ex(struct bio_st* bp, struct evp_pkey_st** x, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_bio_Parameters(struct bio_st* bp, struct evp_pkey_st** x);
int PEM_write_bio_Parameters(struct bio_st* bp, const struct evp_pkey_st* x);
struct evp_pkey_st* b2i_PrivateKey(const unsigned char** in, long length);
struct evp_pkey_st* b2i_PublicKey(const unsigned char** in, long length);
struct evp_pkey_st* b2i_PrivateKey_bio(struct bio_st* in);
struct evp_pkey_st* b2i_PublicKey_bio(struct bio_st* in);
int i2b_PrivateKey_bio(struct bio_st* out, const struct evp_pkey_st* pk);
int i2b_PublicKey_bio(struct bio_st* out, const struct evp_pkey_st* pk);
struct evp_pkey_st* b2i_PVK_bio(struct bio_st* in, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* b2i_PVK_bio_ex(struct bio_st* in, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int i2b_PVK_bio(struct bio_st* out, const struct evp_pkey_st* pk, int enclevel, int (*cb)(char*,int,int,void*), void* u);
int i2b_PVK_bio_ex(struct bio_st* out, const struct evp_pkey_st* pk, int enclevel, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
unsigned long  int HMAC_size(const struct hmac_ctx_st* e);
struct hmac_ctx_st* HMAC_CTX_new();
int HMAC_CTX_reset(struct hmac_ctx_st* ctx);
void HMAC_CTX_free(struct hmac_ctx_st* ctx);
int HMAC_Init(struct hmac_ctx_st* ctx, const void* key, int len, const struct evp_md_st* md);
int HMAC_Init_ex(struct hmac_ctx_st* ctx, const void* key, int len, const struct evp_md_st* md, struct engine_st* impl);
int HMAC_Update(struct hmac_ctx_st* ctx, const unsigned char* data, unsigned long  int len);
int HMAC_Final(struct hmac_ctx_st* ctx, unsigned char* md, unsigned int* len);
int HMAC_CTX_copy(struct hmac_ctx_st* dctx, struct hmac_ctx_st* sctx);
void HMAC_CTX_set_flags(struct hmac_ctx_st* ctx, unsigned long  int flags);
const struct evp_md_st* HMAC_CTX_get_md(const struct hmac_ctx_st* ctx);
unsigned char* HMAC(const struct evp_md_st* evp_md, const void* key, int key_len, const unsigned char* data, unsigned long  int data_len, unsigned char* md, unsigned int* md_len);
int ASYNC_init_thread(unsigned long  int max_size, unsigned long  int init_size);
void ASYNC_cleanup_thread();
struct async_wait_ctx_st* ASYNC_WAIT_CTX_new();
void ASYNC_WAIT_CTX_free(struct async_wait_ctx_st* ctx);
int ASYNC_WAIT_CTX_set_wait_fd(struct async_wait_ctx_st* ctx, const void* key, int fd, void* custom_data, void (*cleanup)(struct async_wait_ctx_st*,const void*,int,void*));
int ASYNC_WAIT_CTX_get_fd(struct async_wait_ctx_st* ctx, const void* key, int* fd, void** custom_data);
int ASYNC_WAIT_CTX_get_all_fds(struct async_wait_ctx_st* ctx, int* fd, unsigned long  int* numfds);
int ASYNC_WAIT_CTX_get_callback(struct async_wait_ctx_st* ctx, int (*callback)(void*), void** callback_arg);
int ASYNC_WAIT_CTX_set_callback(struct async_wait_ctx_st* ctx, int (*callback)(void*), void* callback_arg);
int ASYNC_WAIT_CTX_set_status(struct async_wait_ctx_st* ctx, int status);
int ASYNC_WAIT_CTX_get_status(struct async_wait_ctx_st* ctx);
int ASYNC_WAIT_CTX_get_changed_fds(struct async_wait_ctx_st* ctx, int* addfd, unsigned long  int* numaddfds, int* delfd, unsigned long  int* numdelfds);
int ASYNC_WAIT_CTX_clear_fd(struct async_wait_ctx_st* ctx, const void* key);
int ASYNC_is_capable();
int ASYNC_set_mem_functions(void* (*alloc_fn)(unsigned long  int*), void (*free_fn)(void*));
void ASYNC_get_mem_functions(void* (*alloc_fn)(unsigned long  int*), void (*free_fn)(void*));
int ASYNC_start_job(struct async_job_st** job, struct async_wait_ctx_st* ctx, int* ret, int (*func)(void*), void* args, unsigned long  int size);
int ASYNC_pause_job();
struct async_job_st* ASYNC_get_current_job();
struct async_wait_ctx_st* ASYNC_get_wait_ctx(struct async_job_st* job);
void ASYNC_block_pause();
void ASYNC_unblock_pause();
struct ct_policy_eval_ctx_st* CT_POLICY_EVAL_CTX_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct ct_policy_eval_ctx_st* CT_POLICY_EVAL_CTX_new();
void CT_POLICY_EVAL_CTX_free(struct ct_policy_eval_ctx_st* ctx);
struct x509_st* CT_POLICY_EVAL_CTX_get0_cert(const struct ct_policy_eval_ctx_st* ctx);
int CT_POLICY_EVAL_CTX_set1_cert(struct ct_policy_eval_ctx_st* ctx, struct x509_st* cert);
struct x509_st* CT_POLICY_EVAL_CTX_get0_issuer(const struct ct_policy_eval_ctx_st* ctx);
int CT_POLICY_EVAL_CTX_set1_issuer(struct ct_policy_eval_ctx_st* ctx, struct x509_st* issuer);
const struct ctlog_store_st* CT_POLICY_EVAL_CTX_get0_log_store(const struct ct_policy_eval_ctx_st* ctx);
void CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(struct ct_policy_eval_ctx_st* ctx, struct ctlog_store_st* log_store);
unsigned long  long CT_POLICY_EVAL_CTX_get_time(const struct ct_policy_eval_ctx_st* ctx);
void CT_POLICY_EVAL_CTX_set_time(struct ct_policy_eval_ctx_st* ctx, unsigned long  long time_in_ms);
struct sct_st* SCT_new();
struct sct_st* SCT_new_from_base64(unsigned char version, const char* logid_base64, enum anonymous_typeY31 entry_type, unsigned long  long timestamp, const char* extensions_base64, const char* signature_base64);
void SCT_free(struct sct_st* sct);
void SCT_LIST_free(struct stack_st_SCT* a);
enum anonymous_typeY32 SCT_get_version(const struct sct_st* sct);
int SCT_set_version(struct sct_st* sct, enum anonymous_typeY32 version);
enum anonymous_typeY31 SCT_get_log_entry_type(const struct sct_st* sct);
int SCT_set_log_entry_type(struct sct_st* sct, enum anonymous_typeY31 entry_type);
unsigned long  int SCT_get0_log_id(const struct sct_st* sct, unsigned char** log_id);
int SCT_set0_log_id(struct sct_st* sct, unsigned char* log_id, unsigned long  int log_id_len);
int SCT_set1_log_id(struct sct_st* sct, const unsigned char* log_id, unsigned long  int log_id_len);
unsigned long  long SCT_get_timestamp(const struct sct_st* sct);
void SCT_set_timestamp(struct sct_st* sct, unsigned long  long timestamp);
int SCT_get_signature_nid(const struct sct_st* sct);
int SCT_set_signature_nid(struct sct_st* sct, int nid);
unsigned long  int SCT_get0_extensions(const struct sct_st* sct, unsigned char** ext);
void SCT_set0_extensions(struct sct_st* sct, unsigned char* ext, unsigned long  int ext_len);
int SCT_set1_extensions(struct sct_st* sct, const unsigned char* ext, unsigned long  int ext_len);
unsigned long  int SCT_get0_signature(const struct sct_st* sct, unsigned char** sig);
void SCT_set0_signature(struct sct_st* sct, unsigned char* sig, unsigned long  int sig_len);
int SCT_set1_signature(struct sct_st* sct, const unsigned char* sig, unsigned long  int sig_len);
enum anonymous_typeY33 SCT_get_source(const struct sct_st* sct);
int SCT_set_source(struct sct_st* sct, enum anonymous_typeY33 source);
const char* SCT_validation_status_string(const struct sct_st* sct);
void SCT_print(const struct sct_st* sct, struct bio_st* out, int indent, const struct ctlog_store_st* logs);
void SCT_LIST_print(const struct stack_st_SCT* sct_list, struct bio_st* out, int indent, const char* separator, const struct ctlog_store_st* logs);
enum anonymous_typeY34 SCT_get_validation_status(const struct sct_st* sct);
int SCT_validate(struct sct_st* sct, const struct ct_policy_eval_ctx_st* ctx);
int SCT_LIST_validate(const struct stack_st_SCT* scts, struct ct_policy_eval_ctx_st* ctx);
int i2o_SCT_LIST(const struct stack_st_SCT* a, unsigned char** pp);
struct stack_st_SCT* o2i_SCT_LIST(struct stack_st_SCT** a, const unsigned char** pp, unsigned long  int len);
int i2d_SCT_LIST(const struct stack_st_SCT* a, unsigned char** pp);
struct stack_st_SCT* d2i_SCT_LIST(struct stack_st_SCT** a, const unsigned char** pp, long len);
int i2o_SCT(const struct sct_st* sct, unsigned char** out);
struct sct_st* o2i_SCT(struct sct_st** psct, const unsigned char** in, unsigned long  int len);
struct ctlog_st* CTLOG_new_ex(struct evp_pkey_st* public_key, const char* name, struct ossl_lib_ctx_st* libctx, const char* propq);
struct ctlog_st* CTLOG_new(struct evp_pkey_st* public_key, const char* name);
int CTLOG_new_from_base64_ex(struct ctlog_st** ct_log, const char* pkey_base64, const char* name, struct ossl_lib_ctx_st* libctx, const char* propq);
int CTLOG_new_from_base64(struct ctlog_st** ct_log, const char* pkey_base64, const char* name);
void CTLOG_free(struct ctlog_st* log);
const char* CTLOG_get0_name(const struct ctlog_st* log);
void CTLOG_get0_log_id(const struct ctlog_st* log, const unsigned char** log_id, unsigned long  int* log_id_len);
struct evp_pkey_st* CTLOG_get0_public_key(const struct ctlog_st* log);
struct ctlog_store_st* CTLOG_STORE_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct ctlog_store_st* CTLOG_STORE_new();
void CTLOG_STORE_free(struct ctlog_store_st* store);
const struct ctlog_st* CTLOG_STORE_get0_log_by_id(const struct ctlog_store_st* store, const unsigned char* log_id, unsigned long  int log_id_len);
int CTLOG_STORE_load_file(struct ctlog_store_st* store, const char* file);
int CTLOG_STORE_load_default_file(struct ctlog_store_st* store);
int ERR_load_SSL_strings();
unsigned long  long SSL_CTX_get_options(const struct ssl_ctx_st* ctx);
unsigned long  long SSL_get_options(const struct ssl_st* s);
unsigned long  long SSL_CTX_clear_options(struct ssl_ctx_st* ctx, unsigned long  long op);
unsigned long  long SSL_clear_options(struct ssl_st* s, unsigned long  long op);
unsigned long  long SSL_CTX_set_options(struct ssl_ctx_st* ctx, unsigned long  long op);
unsigned long  long SSL_set_options(struct ssl_st* s, unsigned long  long op);
void SSL_CTX_set_msg_callback(struct ssl_ctx_st* ctx, void (*cb)(int,int,int,const void*,unsigned long  int,struct ssl_st*,void*));
void SSL_set_msg_callback(struct ssl_st* ssl, void (*cb)(int,int,int,const void*,unsigned long  int,struct ssl_st*,void*));
int SSL_SRP_CTX_init(struct ssl_st* s);
int SSL_CTX_SRP_CTX_init(struct ssl_ctx_st* ctx);
int SSL_SRP_CTX_free(struct ssl_st* ctx);
int SSL_CTX_SRP_CTX_free(struct ssl_ctx_st* ctx);
int SSL_srp_server_param_with_username(struct ssl_st* s, int* ad);
int SRP_Calc_A_param(struct ssl_st* s);
struct lhash_st_SSL_SESSION* SSL_CTX_sessions(struct ssl_ctx_st* ctx);
void SSL_CTX_sess_set_new_cb(struct ssl_ctx_st* ctx, int (*new_session_cb)(struct ssl_st*,struct ssl_session_st*));
int (*SSL_CTX_sess_get_new_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a61))(struct ssl_st*,struct ssl_session_st*);
void SSL_CTX_sess_set_remove_cb(struct ssl_ctx_st* ctx, void (*remove_session_cb)(struct ssl_ctx_st*,struct ssl_session_st*));
void (*SSL_CTX_sess_get_remove_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a62))(struct ssl_ctx_st*,struct ssl_session_st*);
void SSL_CTX_sess_set_get_cb(struct ssl_ctx_st* ctx, struct ssl_session_st* (*get_session_cb)(struct ssl_st*,const unsigned char*,int,int*));
struct ssl_session_st* (*SSL_CTX_sess_get_get_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a63))(struct ssl_st*,const unsigned char*,int,int*);
void SSL_CTX_set_info_callback(struct ssl_ctx_st* ctx, void (*cb)(const struct ssl_st*,int,int));
void (*SSL_CTX_get_info_callback(struct ssl_ctx_st* _function_pointer_result_var_name_a64))(const struct ssl_st*,int,int);
void SSL_CTX_set_client_cert_cb(struct ssl_ctx_st* ctx, int (*client_cert_cb)(struct ssl_st*,struct x509_st**,struct evp_pkey_st**));
int (*SSL_CTX_get_client_cert_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a65))(struct ssl_st*,struct x509_st**,struct evp_pkey_st**);
int SSL_CTX_set_client_cert_engine(struct ssl_ctx_st* ctx, struct engine_st* e);
void SSL_CTX_set_cookie_generate_cb(struct ssl_ctx_st* ctx, int (*app_gen_cookie_cb)(struct ssl_st*,unsigned char*,unsigned int*));
void SSL_CTX_set_cookie_verify_cb(struct ssl_ctx_st* ctx, int (*app_verify_cookie_cb)(struct ssl_st*,const unsigned char*,unsigned int));
void SSL_CTX_set_stateless_cookie_generate_cb(struct ssl_ctx_st* ctx, int (*gen_stateless_cookie_cb)(struct ssl_st*,unsigned char*,unsigned long  int*));
void SSL_CTX_set_stateless_cookie_verify_cb(struct ssl_ctx_st* ctx, int (*verify_stateless_cookie_cb)(struct ssl_st*,const unsigned char*,unsigned long  int));
void SSL_CTX_set_next_protos_advertised_cb(struct ssl_ctx_st* s, int (*cb)(struct ssl_st*,const unsigned char**,unsigned int*,void*), void* arg);
void SSL_CTX_set_next_proto_select_cb(struct ssl_ctx_st* s, int (*cb)(struct ssl_st*,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*), void* arg);
void SSL_get0_next_proto_negotiated(const struct ssl_st* s, const unsigned char** data, unsigned int* len);
int SSL_select_next_proto(unsigned char** out, unsigned char* outlen, const unsigned char* in, unsigned int inlen, const unsigned char* client, unsigned int client_len);
int SSL_CTX_set_alpn_protos(struct ssl_ctx_st* ctx, const unsigned char* protos, unsigned int protos_len);
int SSL_set_alpn_protos(struct ssl_st* ssl, const unsigned char* protos, unsigned int protos_len);
void SSL_CTX_set_alpn_select_cb(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,const unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*), void* arg);
void SSL_get0_alpn_selected(const struct ssl_st* ssl, const unsigned char** data, unsigned int* len);
void SSL_CTX_set_psk_client_callback(struct ssl_ctx_st* ctx, unsigned int (*cb)(struct ssl_st*,const char*,char*,unsigned int,unsigned char*,unsigned int));
void SSL_set_psk_client_callback(struct ssl_st* ssl, unsigned int (*cb)(struct ssl_st*,const char*,char*,unsigned int,unsigned char*,unsigned int));
void SSL_CTX_set_psk_server_callback(struct ssl_ctx_st* ctx, unsigned int (*cb)(struct ssl_st*,const char*,unsigned char*,unsigned int));
void SSL_set_psk_server_callback(struct ssl_st* ssl, unsigned int (*cb)(struct ssl_st*,const char*,unsigned char*,unsigned int));
int SSL_CTX_use_psk_identity_hint(struct ssl_ctx_st* ctx, const char* identity_hint);
int SSL_use_psk_identity_hint(struct ssl_st* s, const char* identity_hint);
const char* SSL_get_psk_identity_hint(const struct ssl_st* s);
const char* SSL_get_psk_identity(const struct ssl_st* s);
void SSL_set_psk_find_session_callback(struct ssl_st* s, int (*cb)(struct ssl_st*,const unsigned char*,unsigned long  int,struct ssl_session_st**));
void SSL_CTX_set_psk_find_session_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,const unsigned char*,unsigned long  int,struct ssl_session_st**));
void SSL_set_psk_use_session_callback(struct ssl_st* s, int (*cb)(struct ssl_st*,const struct evp_md_st*,const unsigned char**,unsigned long  int*,struct ssl_session_st**));
void SSL_CTX_set_psk_use_session_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,const struct evp_md_st*,const unsigned char**,unsigned long  int*,struct ssl_session_st**));
int SSL_CTX_has_client_custom_ext(const struct ssl_ctx_st* ctx, unsigned int ext_type);
int SSL_CTX_add_client_custom_ext(struct ssl_ctx_st* ctx, unsigned int ext_type, int (*add_cb)(struct ssl_st*,unsigned int,const unsigned char**,unsigned long  int*,int*,void*), void (*free_cb)(struct ssl_st*,unsigned int,const unsigned char*,void*), void* add_arg, int (*parse_cb)(struct ssl_st*,unsigned int,const unsigned char*,unsigned long  int,int*,void*), void* parse_arg);
int SSL_CTX_add_server_custom_ext(struct ssl_ctx_st* ctx, unsigned int ext_type, int (*add_cb)(struct ssl_st*,unsigned int,const unsigned char**,unsigned long  int*,int*,void*), void (*free_cb)(struct ssl_st*,unsigned int,const unsigned char*,void*), void* add_arg, int (*parse_cb)(struct ssl_st*,unsigned int,const unsigned char*,unsigned long  int,int*,void*), void* parse_arg);
int SSL_CTX_add_custom_ext(struct ssl_ctx_st* ctx, unsigned int ext_type, unsigned int context, int (*add_cb)(struct ssl_st*,unsigned int,unsigned int,const unsigned char**,unsigned long  int*,struct x509_st*,unsigned long  int,int*,void*), void (*free_cb)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,void*), void* add_arg, int (*parse_cb)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,unsigned long  int,struct x509_st*,unsigned long  int,int*,void*), void* parse_arg);
int SSL_extension_supported(unsigned int ext_type);
void SSL_CTX_set_keylog_callback(struct ssl_ctx_st* ctx, void (*cb)(const struct ssl_st*,const char*));
void (*SSL_CTX_get_keylog_callback(const struct ssl_ctx_st* ctx))(const struct ssl_st*,const char*);
int SSL_CTX_set_max_early_data(struct ssl_ctx_st* ctx, unsigned int max_early_data);
unsigned int SSL_CTX_get_max_early_data(const struct ssl_ctx_st* ctx);
int SSL_set_max_early_data(struct ssl_st* s, unsigned int max_early_data);
unsigned int SSL_get_max_early_data(const struct ssl_st* s);
int SSL_CTX_set_recv_max_early_data(struct ssl_ctx_st* ctx, unsigned int recv_max_early_data);
unsigned int SSL_CTX_get_recv_max_early_data(const struct ssl_ctx_st* ctx);
int SSL_set_recv_max_early_data(struct ssl_st* s, unsigned int recv_max_early_data);
unsigned int SSL_get_recv_max_early_data(const struct ssl_st* s);
int SSL_CTX_set_tlsext_max_fragment_length(struct ssl_ctx_st* ctx, unsigned char mode);
int SSL_set_tlsext_max_fragment_length(struct ssl_st* ssl, unsigned char mode);
const char* SSL_get_servername(const struct ssl_st* s, const int type);
int SSL_get_servername_type(const struct ssl_st* s);
int SSL_export_keying_material(struct ssl_st* s, unsigned char* out, unsigned long  int olen, const char* label, unsigned long  int llen, const unsigned char* context, unsigned long  int contextlen, int use_context);
int SSL_export_keying_material_early(struct ssl_st* s, unsigned char* out, unsigned long  int olen, const char* label, unsigned long  int llen, const unsigned char* context, unsigned long  int contextlen);
int SSL_get_peer_signature_type_nid(const struct ssl_st* s, int* pnid);
int SSL_get_signature_type_nid(const struct ssl_st* s, int* pnid);
int SSL_get_sigalgs(struct ssl_st* s, int idx, int* psign, int* phash, int* psignandhash, unsigned char* rsig, unsigned char* rhash);
char* SSL_get1_builtin_sigalgs(struct ossl_lib_ctx_st* libctx);
int SSL_get_shared_sigalgs(struct ssl_st* s, int idx, int* psign, int* phash, int* psignandhash, unsigned char* rsig, unsigned char* rhash);
int SSL_check_chain(struct ssl_st* s, struct x509_st* x, struct evp_pkey_st* pk, struct stack_st_X509* chain);
int SSL_CTX_set_tlsext_ticket_key_evp_cb(struct ssl_ctx_st* ctx, int (*fp)(struct ssl_st*,unsigned char*,unsigned char*,struct evp_cipher_ctx_st*,struct evp_mac_ctx_st*,int));
int SSL_CTX_set_tlsext_use_srtp(struct ssl_ctx_st* ctx, const char* profiles);
int SSL_set_tlsext_use_srtp(struct ssl_st* ssl, const char* profiles);
struct stack_st_SRTP_PROTECTION_PROFILE* SSL_get_srtp_profiles(struct ssl_st* ssl);
struct srtp_protection_profile_st* SSL_get_selected_srtp_profile(struct ssl_st* s);
const struct ssl_method_st* OSSL_QUIC_client_method();
const struct ssl_method_st* OSSL_QUIC_client_thread_method();
void SSL_set_debug(struct ssl_st* s, int debug);
int SSL_in_init(const struct ssl_st* s);
int SSL_in_before(const struct ssl_st* s);
int SSL_is_init_finished(const struct ssl_st* s);
unsigned long  int SSL_get_finished(const struct ssl_st* s, void* buf, unsigned long  int count);
unsigned long  int SSL_get_peer_finished(const struct ssl_st* s, void* buf, unsigned long  int count);
struct ssl_session_st* PEM_read_bio_SSL_SESSION(struct bio_st* out, struct ssl_session_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ssl_session_st* PEM_read_SSL_SESSION(struct __sFILE* out, struct ssl_session_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_SSL_SESSION(struct bio_st* out, const struct ssl_session_st* x);
int PEM_write_SSL_SESSION(struct __sFILE* out, const struct ssl_session_st* x);
const char* SSL_get0_group_name(struct ssl_st* s);
const char* SSL_group_to_name(struct ssl_st* s, int id);
int SSL_set0_tmp_dh_pkey(struct ssl_st* s, struct evp_pkey_st* dhpkey);
int SSL_CTX_set0_tmp_dh_pkey(struct ssl_ctx_st* ctx, struct evp_pkey_st* dhpkey);
const struct bio_method_st* BIO_f_ssl();
struct bio_st* BIO_new_ssl(struct ssl_ctx_st* ctx, int client);
struct bio_st* BIO_new_ssl_connect(struct ssl_ctx_st* ctx);
struct bio_st* BIO_new_buffer_ssl_connect(struct ssl_ctx_st* ctx);
int BIO_ssl_copy_session_id(struct bio_st* to, struct bio_st* from);
void BIO_ssl_shutdown(struct bio_st* ssl_bio);
int SSL_CTX_set_cipher_list(struct ssl_ctx_st* anonymous_var_nameX2316, const char* str);
struct ssl_ctx_st* SSL_CTX_new(const struct ssl_method_st* meth);
struct ssl_ctx_st* SSL_CTX_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq, const struct ssl_method_st* meth);
int SSL_CTX_up_ref(struct ssl_ctx_st* ctx);
void SSL_CTX_free(struct ssl_ctx_st* anonymous_var_nameX2317);
long SSL_CTX_set_timeout(struct ssl_ctx_st* ctx, long t);
long SSL_CTX_get_timeout(const struct ssl_ctx_st* ctx);
struct x509_store_st* SSL_CTX_get_cert_store(const struct ssl_ctx_st* anonymous_var_nameX2318);
void SSL_CTX_set_cert_store(struct ssl_ctx_st* anonymous_var_nameX2319, struct x509_store_st* anonymous_var_nameX2320);
void SSL_CTX_set1_cert_store(struct ssl_ctx_st* anonymous_var_nameX2321, struct x509_store_st* anonymous_var_nameX2322);
int SSL_want(const struct ssl_st* s);
int SSL_clear(struct ssl_st* s);
void SSL_CTX_flush_sessions(struct ssl_ctx_st* ctx, long tm);
void SSL_CTX_flush_sessions_ex(struct ssl_ctx_st* ctx, long tm);
const struct ssl_cipher_st* SSL_get_current_cipher(const struct ssl_st* s);
const struct ssl_cipher_st* SSL_get_pending_cipher(const struct ssl_st* s);
int SSL_CIPHER_get_bits(const struct ssl_cipher_st* c, int* alg_bits);
const char* SSL_CIPHER_get_version(const struct ssl_cipher_st* c);
const char* SSL_CIPHER_get_name(const struct ssl_cipher_st* c);
const char* SSL_CIPHER_standard_name(const struct ssl_cipher_st* c);
const char* OPENSSL_cipher_name(const char* rfc_name);
unsigned int SSL_CIPHER_get_id(const struct ssl_cipher_st* c);
unsigned short int SSL_CIPHER_get_protocol_id(const struct ssl_cipher_st* c);
int SSL_CIPHER_get_kx_nid(const struct ssl_cipher_st* c);
int SSL_CIPHER_get_auth_nid(const struct ssl_cipher_st* c);
const struct evp_md_st* SSL_CIPHER_get_handshake_digest(const struct ssl_cipher_st* c);
int SSL_CIPHER_is_aead(const struct ssl_cipher_st* c);
int SSL_get_fd(const struct ssl_st* s);
int SSL_get_rfd(const struct ssl_st* s);
int SSL_get_wfd(const struct ssl_st* s);
const char* SSL_get_cipher_list(const struct ssl_st* s, int n);
char* SSL_get_shared_ciphers(const struct ssl_st* s, char* buf, int size);
int SSL_get_read_ahead(const struct ssl_st* s);
int SSL_pending(const struct ssl_st* s);
int SSL_has_pending(const struct ssl_st* s);
int SSL_set_fd(struct ssl_st* s, int fd);
int SSL_set_rfd(struct ssl_st* s, int fd);
int SSL_set_wfd(struct ssl_st* s, int fd);
void SSL_set0_rbio(struct ssl_st* s, struct bio_st* rbio);
void SSL_set0_wbio(struct ssl_st* s, struct bio_st* wbio);
void SSL_set_bio(struct ssl_st* s, struct bio_st* rbio, struct bio_st* wbio);
struct bio_st* SSL_get_rbio(const struct ssl_st* s);
struct bio_st* SSL_get_wbio(const struct ssl_st* s);
int SSL_set_cipher_list(struct ssl_st* s, const char* str);
int SSL_CTX_set_ciphersuites(struct ssl_ctx_st* ctx, const char* str);
int SSL_set_ciphersuites(struct ssl_st* s, const char* str);
void SSL_set_read_ahead(struct ssl_st* s, int yes);
int SSL_get_verify_mode(const struct ssl_st* s);
int SSL_get_verify_depth(const struct ssl_st* s);
int (*SSL_get_verify_callback(const struct ssl_st* s))(int,struct x509_store_ctx_st*);
void SSL_set_verify(struct ssl_st* s, int mode, int (*callback)(int,struct x509_store_ctx_st*));
void SSL_set_verify_depth(struct ssl_st* s, int depth);
void SSL_set_cert_cb(struct ssl_st* s, int (*cb)(struct ssl_st*,void*), void* arg);
int SSL_use_RSAPrivateKey(struct ssl_st* ssl, struct rsa_st* rsa);
int SSL_use_RSAPrivateKey_ASN1(struct ssl_st* ssl, const unsigned char* d, long len);
int SSL_use_PrivateKey(struct ssl_st* ssl, struct evp_pkey_st* pkey);
int SSL_use_PrivateKey_ASN1(int pk, struct ssl_st* ssl, const unsigned char* d, long len);
int SSL_use_certificate(struct ssl_st* ssl, struct x509_st* x);
int SSL_use_certificate_ASN1(struct ssl_st* ssl, const unsigned char* d, int len);
int SSL_use_cert_and_key(struct ssl_st* ssl, struct x509_st* x509, struct evp_pkey_st* privatekey, struct stack_st_X509* chain, int override);
int SSL_CTX_use_serverinfo(struct ssl_ctx_st* ctx, const unsigned char* serverinfo, unsigned long  int serverinfo_length);
int SSL_CTX_use_serverinfo_ex(struct ssl_ctx_st* ctx, unsigned int version, const unsigned char* serverinfo, unsigned long  int serverinfo_length);
int SSL_CTX_use_serverinfo_file(struct ssl_ctx_st* ctx, const char* file);
int SSL_use_RSAPrivateKey_file(struct ssl_st* ssl, const char* file, int type);
int SSL_use_PrivateKey_file(struct ssl_st* ssl, const char* file, int type);
int SSL_use_certificate_file(struct ssl_st* ssl, const char* file, int type);
int SSL_CTX_use_RSAPrivateKey_file(struct ssl_ctx_st* ctx, const char* file, int type);
int SSL_CTX_use_PrivateKey_file(struct ssl_ctx_st* ctx, const char* file, int type);
int SSL_CTX_use_certificate_file(struct ssl_ctx_st* ctx, const char* file, int type);
int SSL_CTX_use_certificate_chain_file(struct ssl_ctx_st* ctx, const char* file);
int SSL_use_certificate_chain_file(struct ssl_st* ssl, const char* file);
struct stack_st_X509_NAME* SSL_load_client_CA_file(const char* file);
struct stack_st_X509_NAME* SSL_load_client_CA_file_ex(const char* file, struct ossl_lib_ctx_st* libctx, const char* propq);
int SSL_add_file_cert_subjects_to_stack(struct stack_st_X509_NAME* stackCAs, const char* file);
int SSL_add_dir_cert_subjects_to_stack(struct stack_st_X509_NAME* stackCAs, const char* dir);
int SSL_add_store_cert_subjects_to_stack(struct stack_st_X509_NAME* stackCAs, const char* uri);
const char* SSL_state_string(const struct ssl_st* s);
const char* SSL_rstate_string(const struct ssl_st* s);
const char* SSL_state_string_long(const struct ssl_st* s);
const char* SSL_rstate_string_long(const struct ssl_st* s);
long SSL_SESSION_get_time(const struct ssl_session_st* s);
long SSL_SESSION_set_time(struct ssl_session_st* s, long t);
long SSL_SESSION_get_timeout(const struct ssl_session_st* s);
long SSL_SESSION_set_timeout(struct ssl_session_st* s, long t);
int SSL_SESSION_get_protocol_version(const struct ssl_session_st* s);
int SSL_SESSION_set_protocol_version(struct ssl_session_st* s, int version);
long SSL_SESSION_get_time_ex(const struct ssl_session_st* s);
long SSL_SESSION_set_time_ex(struct ssl_session_st* s, long t);
const char* SSL_SESSION_get0_hostname(const struct ssl_session_st* s);
int SSL_SESSION_set1_hostname(struct ssl_session_st* s, const char* hostname);
void SSL_SESSION_get0_alpn_selected(const struct ssl_session_st* s, const unsigned char** alpn, unsigned long  int* len);
int SSL_SESSION_set1_alpn_selected(struct ssl_session_st* s, const unsigned char* alpn, unsigned long  int len);
const struct ssl_cipher_st* SSL_SESSION_get0_cipher(const struct ssl_session_st* s);
int SSL_SESSION_set_cipher(struct ssl_session_st* s, const struct ssl_cipher_st* cipher);
int SSL_SESSION_has_ticket(const struct ssl_session_st* s);
unsigned long  int SSL_SESSION_get_ticket_lifetime_hint(const struct ssl_session_st* s);
void SSL_SESSION_get0_ticket(const struct ssl_session_st* s, const unsigned char** tick, unsigned long  int* len);
unsigned int SSL_SESSION_get_max_early_data(const struct ssl_session_st* s);
int SSL_SESSION_set_max_early_data(struct ssl_session_st* s, unsigned int max_early_data);
int SSL_copy_session_id(struct ssl_st* to, const struct ssl_st* from);
struct x509_st* SSL_SESSION_get0_peer(struct ssl_session_st* s);
int SSL_SESSION_set1_id_context(struct ssl_session_st* s, const unsigned char* sid_ctx, unsigned int sid_ctx_len);
int SSL_SESSION_set1_id(struct ssl_session_st* s, const unsigned char* sid, unsigned int sid_len);
int SSL_SESSION_is_resumable(const struct ssl_session_st* s);
struct ssl_session_st* SSL_SESSION_new();
struct ssl_session_st* SSL_SESSION_dup(const struct ssl_session_st* src);
const unsigned char* SSL_SESSION_get_id(const struct ssl_session_st* s, unsigned int* len);
const unsigned char* SSL_SESSION_get0_id_context(const struct ssl_session_st* s, unsigned int* len);
unsigned int SSL_SESSION_get_compress_id(const struct ssl_session_st* s);
int SSL_SESSION_print_fp(struct __sFILE* fp, const struct ssl_session_st* ses);
int SSL_SESSION_print(struct bio_st* fp, const struct ssl_session_st* ses);
int SSL_SESSION_print_keylog(struct bio_st* bp, const struct ssl_session_st* x);
int SSL_SESSION_up_ref(struct ssl_session_st* ses);
void SSL_SESSION_free(struct ssl_session_st* ses);
int i2d_SSL_SESSION(const struct ssl_session_st* in, unsigned char** pp);
int SSL_set_session(struct ssl_st* to, struct ssl_session_st* session);
int SSL_CTX_add_session(struct ssl_ctx_st* ctx, struct ssl_session_st* session);
int SSL_CTX_remove_session(struct ssl_ctx_st* ctx, struct ssl_session_st* session);
int SSL_CTX_set_generate_session_id(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,unsigned char*,unsigned int*));
int SSL_set_generate_session_id(struct ssl_st* s, int (*cb)(struct ssl_st*,unsigned char*,unsigned int*));
int SSL_has_matching_session_id(const struct ssl_st* s, const unsigned char* id, unsigned int id_len);
struct ssl_session_st* d2i_SSL_SESSION(struct ssl_session_st** a, const unsigned char** pp, long length);
struct ssl_session_st* d2i_SSL_SESSION_ex(struct ssl_session_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_st* SSL_get0_peer_certificate(const struct ssl_st* s);
struct x509_st* SSL_get1_peer_certificate(const struct ssl_st* s);
struct stack_st_X509* SSL_get_peer_cert_chain(const struct ssl_st* s);
int SSL_CTX_get_verify_mode(const struct ssl_ctx_st* ctx);
int SSL_CTX_get_verify_depth(const struct ssl_ctx_st* ctx);
int (*SSL_CTX_get_verify_callback(const struct ssl_ctx_st* ctx))(int,struct x509_store_ctx_st*);
void SSL_CTX_set_verify(struct ssl_ctx_st* ctx, int mode, int (*callback)(int,struct x509_store_ctx_st*));
void SSL_CTX_set_verify_depth(struct ssl_ctx_st* ctx, int depth);
void SSL_CTX_set_cert_verify_callback(struct ssl_ctx_st* ctx, int (*cb)(struct x509_store_ctx_st*,void*), void* arg);
void SSL_CTX_set_cert_cb(struct ssl_ctx_st* c, int (*cb)(struct ssl_st*,void*), void* arg);
int SSL_CTX_use_RSAPrivateKey(struct ssl_ctx_st* ctx, struct rsa_st* rsa);
int SSL_CTX_use_RSAPrivateKey_ASN1(struct ssl_ctx_st* ctx, const unsigned char* d, long len);
int SSL_CTX_use_PrivateKey(struct ssl_ctx_st* ctx, struct evp_pkey_st* pkey);
int SSL_CTX_use_PrivateKey_ASN1(int pk, struct ssl_ctx_st* ctx, const unsigned char* d, long len);
int SSL_CTX_use_certificate(struct ssl_ctx_st* ctx, struct x509_st* x);
int SSL_CTX_use_certificate_ASN1(struct ssl_ctx_st* ctx, int len, const unsigned char* d);
int SSL_CTX_use_cert_and_key(struct ssl_ctx_st* ctx, struct x509_st* x509, struct evp_pkey_st* privatekey, struct stack_st_X509* chain, int override);
void SSL_CTX_set_default_passwd_cb(struct ssl_ctx_st* ctx, int (*cb)(char*,int,int,void*));
void SSL_CTX_set_default_passwd_cb_userdata(struct ssl_ctx_st* ctx, void* u);
int (*SSL_CTX_get_default_passwd_cb(struct ssl_ctx_st* ctx))(char*,int,int,void*);
void* SSL_CTX_get_default_passwd_cb_userdata(struct ssl_ctx_st* ctx);
void SSL_set_default_passwd_cb(struct ssl_st* s, int (*cb)(char*,int,int,void*));
void SSL_set_default_passwd_cb_userdata(struct ssl_st* s, void* u);
int (*SSL_get_default_passwd_cb(struct ssl_st* s))(char*,int,int,void*);
void* SSL_get_default_passwd_cb_userdata(struct ssl_st* s);
int SSL_CTX_check_private_key(const struct ssl_ctx_st* ctx);
int SSL_check_private_key(const struct ssl_st* ctx);
int SSL_CTX_set_session_id_context(struct ssl_ctx_st* ctx, const unsigned char* sid_ctx, unsigned int sid_ctx_len);
struct ssl_st* SSL_new(struct ssl_ctx_st* ctx);
int SSL_up_ref(struct ssl_st* s);
int SSL_is_dtls(const struct ssl_st* s);
int SSL_is_tls(const struct ssl_st* s);
int SSL_is_quic(const struct ssl_st* s);
int SSL_set_session_id_context(struct ssl_st* ssl, const unsigned char* sid_ctx, unsigned int sid_ctx_len);
int SSL_CTX_set_purpose(struct ssl_ctx_st* ctx, int purpose);
int SSL_set_purpose(struct ssl_st* ssl, int purpose);
int SSL_CTX_set_trust(struct ssl_ctx_st* ctx, int trust);
int SSL_set_trust(struct ssl_st* ssl, int trust);
int SSL_set1_host(struct ssl_st* s, const char* hostname);
int SSL_add1_host(struct ssl_st* s, const char* hostname);
const char* SSL_get0_peername(struct ssl_st* s);
void SSL_set_hostflags(struct ssl_st* s, unsigned int flags);
int SSL_CTX_dane_enable(struct ssl_ctx_st* ctx);
int SSL_CTX_dane_mtype_set(struct ssl_ctx_st* ctx, const struct evp_md_st* md, unsigned char mtype, unsigned char ord);
int SSL_dane_enable(struct ssl_st* s, const char* basedomain);
int SSL_dane_tlsa_add(struct ssl_st* s, unsigned char usage, unsigned char selector, unsigned char mtype, const unsigned char* data, unsigned long  int dlen);
int SSL_get0_dane_authority(struct ssl_st* s, struct x509_st** mcert, struct evp_pkey_st** mspki);
int SSL_get0_dane_tlsa(struct ssl_st* s, unsigned char* usage, unsigned char* selector, unsigned char* mtype, const unsigned char** data, unsigned long  int* dlen);
struct ssl_dane_st* SSL_get0_dane(struct ssl_st* ssl);
unsigned long  int SSL_CTX_dane_set_flags(struct ssl_ctx_st* ctx, unsigned long  int flags);
unsigned long  int SSL_CTX_dane_clear_flags(struct ssl_ctx_st* ctx, unsigned long  int flags);
unsigned long  int SSL_dane_set_flags(struct ssl_st* ssl, unsigned long  int flags);
unsigned long  int SSL_dane_clear_flags(struct ssl_st* ssl, unsigned long  int flags);
int SSL_CTX_set1_param(struct ssl_ctx_st* ctx, struct X509_VERIFY_PARAM_st* vpm);
int SSL_set1_param(struct ssl_st* ssl, struct X509_VERIFY_PARAM_st* vpm);
struct X509_VERIFY_PARAM_st* SSL_CTX_get0_param(struct ssl_ctx_st* ctx);
struct X509_VERIFY_PARAM_st* SSL_get0_param(struct ssl_st* ssl);
int SSL_CTX_set_srp_username(struct ssl_ctx_st* ctx, char* name);
int SSL_CTX_set_srp_password(struct ssl_ctx_st* ctx, char* password);
int SSL_CTX_set_srp_strength(struct ssl_ctx_st* ctx, int strength);
int SSL_CTX_set_srp_client_pwd_callback(struct ssl_ctx_st* ctx, char* (*cb)(struct ssl_st*,void*));
int SSL_CTX_set_srp_verify_param_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,void*));
int SSL_CTX_set_srp_username_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,int*,void*));
int SSL_CTX_set_srp_cb_arg(struct ssl_ctx_st* ctx, void* arg);
int SSL_set_srp_server_param(struct ssl_st* s, const struct bignum_st* N, const struct bignum_st* g, struct bignum_st* sa, struct bignum_st* v, char* info);
int SSL_set_srp_server_param_pw(struct ssl_st* s, const char* user, const char* pass, const char* grp);
struct bignum_st* SSL_get_srp_g(struct ssl_st* s);
struct bignum_st* SSL_get_srp_N(struct ssl_st* s);
char* SSL_get_srp_username(struct ssl_st* s);
char* SSL_get_srp_userinfo(struct ssl_st* s);
void SSL_CTX_set_client_hello_cb(struct ssl_ctx_st* c, int (*cb)(struct ssl_st*,int*,void*), void* arg);
int SSL_client_hello_isv2(struct ssl_st* s);
unsigned int SSL_client_hello_get0_legacy_version(struct ssl_st* s);
unsigned long  int SSL_client_hello_get0_random(struct ssl_st* s, const unsigned char** out);
unsigned long  int SSL_client_hello_get0_session_id(struct ssl_st* s, const unsigned char** out);
unsigned long  int SSL_client_hello_get0_ciphers(struct ssl_st* s, const unsigned char** out);
unsigned long  int SSL_client_hello_get0_compression_methods(struct ssl_st* s, const unsigned char** out);
int SSL_client_hello_get1_extensions_present(struct ssl_st* s, int** out, unsigned long  int* outlen);
int SSL_client_hello_get_extension_order(struct ssl_st* s, unsigned short int* exts, unsigned long  int* num_exts);
int SSL_client_hello_get0_ext(struct ssl_st* s, unsigned int type, const unsigned char** out, unsigned long  int* outlen);
void SSL_certs_clear(struct ssl_st* s);
void SSL_free(struct ssl_st* ssl);
int SSL_waiting_for_async(struct ssl_st* s);
int SSL_get_all_async_fds(struct ssl_st* s, int* fds, unsigned long  int* numfds);
int SSL_get_changed_async_fds(struct ssl_st* s, int* addfd, unsigned long  int* numaddfds, int* delfd, unsigned long  int* numdelfds);
int SSL_CTX_set_async_callback(struct ssl_ctx_st* ctx, int (*callback)(struct ssl_st*,void*));
int SSL_CTX_set_async_callback_arg(struct ssl_ctx_st* ctx, void* arg);
int SSL_set_async_callback(struct ssl_st* s, int (*callback)(struct ssl_st*,void*));
int SSL_set_async_callback_arg(struct ssl_st* s, void* arg);
int SSL_get_async_status(struct ssl_st* s, int* status);
int SSL_accept(struct ssl_st* ssl);
int SSL_stateless(struct ssl_st* s);
int SSL_connect(struct ssl_st* ssl);
int SSL_read(struct ssl_st* ssl, void* buf, int num);
int SSL_read_ex(struct ssl_st* ssl, void* buf, unsigned long  int num, unsigned long  int* readbytes);
int SSL_read_early_data(struct ssl_st* s, void* buf, unsigned long  int num, unsigned long  int* readbytes);
int SSL_peek(struct ssl_st* ssl, void* buf, int num);
int SSL_peek_ex(struct ssl_st* ssl, void* buf, unsigned long  int num, unsigned long  int* readbytes);
long SSL_sendfile(struct ssl_st* s, int fd, long  long offset, unsigned long  int size, int flags);
int SSL_write(struct ssl_st* ssl, const void* buf, int num);
int SSL_write_ex(struct ssl_st* s, const void* buf, unsigned long  int num, unsigned long  int* written);
int SSL_write_early_data(struct ssl_st* s, const void* buf, unsigned long  int num, unsigned long  int* written);
long SSL_ctrl(struct ssl_st* ssl, int cmd, long larg, void* parg);
long SSL_callback_ctrl(struct ssl_st* anonymous_var_nameX2332, int anonymous_var_nameX2333, void (*anonymous_lambda_var_nameZ39)());
long SSL_CTX_ctrl(struct ssl_ctx_st* ctx, int cmd, long larg, void* parg);
long SSL_CTX_callback_ctrl(struct ssl_ctx_st* anonymous_var_nameX2334, int anonymous_var_nameX2335, void (*anonymous_lambda_var_nameZ40)());
int SSL_write_ex2(struct ssl_st* s, const void* buf, unsigned long  int num, unsigned long  long flags, unsigned long  int* written);
int SSL_get_early_data_status(const struct ssl_st* s);
int SSL_get_error(const struct ssl_st* s, int ret_code);
const char* SSL_get_version(const struct ssl_st* s);
int SSL_get_handshake_rtt(const struct ssl_st* s, unsigned long  long* rtt);
int SSL_CTX_set_ssl_version(struct ssl_ctx_st* ctx, const struct ssl_method_st* meth);
const struct ssl_method_st* TLS_method();
const struct ssl_method_st* TLS_server_method();
const struct ssl_method_st* TLS_client_method();
const struct ssl_method_st* TLSv1_method();
const struct ssl_method_st* TLSv1_server_method();
const struct ssl_method_st* TLSv1_client_method();
const struct ssl_method_st* TLSv1_1_method();
const struct ssl_method_st* TLSv1_1_server_method();
const struct ssl_method_st* TLSv1_1_client_method();
const struct ssl_method_st* TLSv1_2_method();
const struct ssl_method_st* TLSv1_2_server_method();
const struct ssl_method_st* TLSv1_2_client_method();
const struct ssl_method_st* DTLSv1_method();
const struct ssl_method_st* DTLSv1_server_method();
const struct ssl_method_st* DTLSv1_client_method();
const struct ssl_method_st* DTLSv1_2_method();
const struct ssl_method_st* DTLSv1_2_server_method();
const struct ssl_method_st* DTLSv1_2_client_method();
const struct ssl_method_st* DTLS_method();
const struct ssl_method_st* DTLS_server_method();
const struct ssl_method_st* DTLS_client_method();
unsigned long  int DTLS_get_data_mtu(const struct ssl_st* s);
struct stack_st_SSL_CIPHER* SSL_get_ciphers(const struct ssl_st* s);
struct stack_st_SSL_CIPHER* SSL_CTX_get_ciphers(const struct ssl_ctx_st* ctx);
struct stack_st_SSL_CIPHER* SSL_get_client_ciphers(const struct ssl_st* s);
struct stack_st_SSL_CIPHER* SSL_get1_supported_ciphers(struct ssl_st* s);
int SSL_do_handshake(struct ssl_st* s);
int SSL_key_update(struct ssl_st* s, int updatetype);
int SSL_get_key_update_type(const struct ssl_st* s);
int SSL_renegotiate(struct ssl_st* s);
int SSL_renegotiate_abbreviated(struct ssl_st* s);
int SSL_renegotiate_pending(const struct ssl_st* s);
int SSL_new_session_ticket(struct ssl_st* s);
int SSL_shutdown(struct ssl_st* s);
int SSL_verify_client_post_handshake(struct ssl_st* s);
void SSL_CTX_set_post_handshake_auth(struct ssl_ctx_st* ctx, int val);
void SSL_set_post_handshake_auth(struct ssl_st* s, int val);
const struct ssl_method_st* SSL_CTX_get_ssl_method(const struct ssl_ctx_st* ctx);
const struct ssl_method_st* SSL_get_ssl_method(const struct ssl_st* s);
int SSL_set_ssl_method(struct ssl_st* s, const struct ssl_method_st* method);
const char* SSL_alert_type_string_long(int value);
const char* SSL_alert_type_string(int value);
const char* SSL_alert_desc_string_long(int value);
const char* SSL_alert_desc_string(int value);
void SSL_set0_CA_list(struct ssl_st* s, struct stack_st_X509_NAME* name_list);
void SSL_CTX_set0_CA_list(struct ssl_ctx_st* ctx, struct stack_st_X509_NAME* name_list);
const struct stack_st_X509_NAME* SSL_get0_CA_list(const struct ssl_st* s);
const struct stack_st_X509_NAME* SSL_CTX_get0_CA_list(const struct ssl_ctx_st* ctx);
int SSL_add1_to_CA_list(struct ssl_st* ssl, const struct x509_st* x);
int SSL_CTX_add1_to_CA_list(struct ssl_ctx_st* ctx, const struct x509_st* x);
const struct stack_st_X509_NAME* SSL_get0_peer_CA_list(const struct ssl_st* s);
void SSL_set_client_CA_list(struct ssl_st* s, struct stack_st_X509_NAME* name_list);
void SSL_CTX_set_client_CA_list(struct ssl_ctx_st* ctx, struct stack_st_X509_NAME* name_list);
struct stack_st_X509_NAME* SSL_get_client_CA_list(const struct ssl_st* s);
struct stack_st_X509_NAME* SSL_CTX_get_client_CA_list(const struct ssl_ctx_st* s);
int SSL_add_client_CA(struct ssl_st* ssl, struct x509_st* x);
int SSL_CTX_add_client_CA(struct ssl_ctx_st* ctx, struct x509_st* x);
void SSL_set_connect_state(struct ssl_st* s);
void SSL_set_accept_state(struct ssl_st* s);
long SSL_get_default_timeout(const struct ssl_st* s);
char* SSL_CIPHER_description(const struct ssl_cipher_st* anonymous_var_nameX2336, char* buf, int size);
struct stack_st_X509_NAME* SSL_dup_CA_list(const struct stack_st_X509_NAME* sk);
struct ssl_st* SSL_dup(struct ssl_st* ssl);
struct x509_st* SSL_get_certificate(const struct ssl_st* ssl);
struct evp_pkey_st* SSL_get_privatekey(const struct ssl_st* ssl);
struct x509_st* SSL_CTX_get0_certificate(const struct ssl_ctx_st* ctx);
struct evp_pkey_st* SSL_CTX_get0_privatekey(const struct ssl_ctx_st* ctx);
void SSL_CTX_set_quiet_shutdown(struct ssl_ctx_st* ctx, int mode);
int SSL_CTX_get_quiet_shutdown(const struct ssl_ctx_st* ctx);
void SSL_set_quiet_shutdown(struct ssl_st* ssl, int mode);
int SSL_get_quiet_shutdown(const struct ssl_st* ssl);
void SSL_set_shutdown(struct ssl_st* ssl, int mode);
int SSL_get_shutdown(const struct ssl_st* ssl);
int SSL_version(const struct ssl_st* ssl);
int SSL_client_version(const struct ssl_st* s);
int SSL_CTX_set_default_verify_paths(struct ssl_ctx_st* ctx);
int SSL_CTX_set_default_verify_dir(struct ssl_ctx_st* ctx);
int SSL_CTX_set_default_verify_file(struct ssl_ctx_st* ctx);
int SSL_CTX_set_default_verify_store(struct ssl_ctx_st* ctx);
int SSL_CTX_load_verify_file(struct ssl_ctx_st* ctx, const char* CAfile);
int SSL_CTX_load_verify_dir(struct ssl_ctx_st* ctx, const char* CApath);
int SSL_CTX_load_verify_store(struct ssl_ctx_st* ctx, const char* CAstore);
int SSL_CTX_load_verify_locations(struct ssl_ctx_st* ctx, const char* CAfile, const char* CApath);
struct ssl_session_st* SSL_get_session(const struct ssl_st* ssl);
struct ssl_session_st* SSL_get1_session(struct ssl_st* ssl);
struct ssl_ctx_st* SSL_get_SSL_CTX(const struct ssl_st* ssl);
struct ssl_ctx_st* SSL_set_SSL_CTX(struct ssl_st* ssl, struct ssl_ctx_st* ctx);
void SSL_set_info_callback(struct ssl_st* ssl, void (*cb)(const struct ssl_st*,int,int));
void (*SSL_get_info_callback(const struct ssl_st* _function_pointer_result_var_name_a66))(const struct ssl_st*,int,int);
enum anonymous_typeY35 SSL_get_state(const struct ssl_st* ssl);
void SSL_set_verify_result(struct ssl_st* ssl, long v);
long SSL_get_verify_result(const struct ssl_st* ssl);
struct stack_st_X509* SSL_get0_verified_chain(const struct ssl_st* s);
unsigned long  int SSL_get_client_random(const struct ssl_st* ssl, unsigned char* out, unsigned long  int outlen);
unsigned long  int SSL_get_server_random(const struct ssl_st* ssl, unsigned char* out, unsigned long  int outlen);
unsigned long  int SSL_SESSION_get_master_key(const struct ssl_session_st* sess, unsigned char* out, unsigned long  int outlen);
int SSL_SESSION_set1_master_key(struct ssl_session_st* sess, const unsigned char* in, unsigned long  int len);
unsigned char SSL_SESSION_get_max_fragment_length(const struct ssl_session_st* sess);
int SSL_set_ex_data(struct ssl_st* ssl, int idx, void* data);
void* SSL_get_ex_data(const struct ssl_st* ssl, int idx);
int SSL_SESSION_set_ex_data(struct ssl_session_st* ss, int idx, void* data);
void* SSL_SESSION_get_ex_data(const struct ssl_session_st* ss, int idx);
int SSL_CTX_set_ex_data(struct ssl_ctx_st* ssl, int idx, void* data);
void* SSL_CTX_get_ex_data(const struct ssl_ctx_st* ssl, int idx);
int SSL_get_ex_data_X509_STORE_CTX_idx();
void SSL_CTX_set_default_read_buffer_len(struct ssl_ctx_st* ctx, unsigned long  int len);
void SSL_set_default_read_buffer_len(struct ssl_st* s, unsigned long  int len);
void SSL_CTX_set_tmp_dh_callback(struct ssl_ctx_st* ctx, struct dh_st* (*dh)(struct ssl_st*,int,int));
void SSL_set_tmp_dh_callback(struct ssl_st* ssl, struct dh_st* (*dh)(struct ssl_st*,int,int));
const struct comp_method_st* SSL_get_current_compression(const struct ssl_st* s);
const struct comp_method_st* SSL_get_current_expansion(const struct ssl_st* s);
const char* SSL_COMP_get_name(const struct comp_method_st* comp);
const char* SSL_COMP_get0_name(const struct ssl_comp_st* comp);
int SSL_COMP_get_id(const struct ssl_comp_st* comp);
struct stack_st_SSL_COMP* SSL_COMP_get_compression_methods();
struct stack_st_SSL_COMP* SSL_COMP_set0_compression_methods(struct stack_st_SSL_COMP* meths);
int SSL_COMP_add_compression_method(int id, struct comp_method_st* cm);
const struct ssl_cipher_st* SSL_CIPHER_find(struct ssl_st* ssl, const unsigned char* ptr);
int SSL_CIPHER_get_cipher_nid(const struct ssl_cipher_st* c);
int SSL_CIPHER_get_digest_nid(const struct ssl_cipher_st* c);
int SSL_bytes_to_cipher_list(struct ssl_st* s, const unsigned char* bytes, unsigned long  int len, int isv2format, struct stack_st_SSL_CIPHER** sk, struct stack_st_SSL_CIPHER** scsvs);
int SSL_set_session_ticket_ext(struct ssl_st* s, void* ext_data, int ext_len);
int SSL_set_session_ticket_ext_cb(struct ssl_st* s, int (*cb)(struct ssl_st*,const unsigned char*,int,void*), void* arg);
int SSL_set_session_secret_cb(struct ssl_st* s, int (*session_secret_cb)(struct ssl_st*,void*,int*,struct stack_st_SSL_CIPHER*,const struct ssl_cipher_st**,void*), void* arg);
void SSL_CTX_set_not_resumable_session_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,int));
void SSL_set_not_resumable_session_callback(struct ssl_st* ssl, int (*cb)(struct ssl_st*,int));
void SSL_CTX_set_record_padding_callback(struct ssl_ctx_st* ctx, unsigned long  int (*cb)(struct ssl_st*,int,unsigned long  int,void*));
void SSL_CTX_set_record_padding_callback_arg(struct ssl_ctx_st* ctx, void* arg);
void* SSL_CTX_get_record_padding_callback_arg(const struct ssl_ctx_st* ctx);
int SSL_CTX_set_block_padding(struct ssl_ctx_st* ctx, unsigned long  int block_size);
int SSL_CTX_set_block_padding_ex(struct ssl_ctx_st* ctx, unsigned long  int app_block_size, unsigned long  int hs_block_size);
int SSL_set_record_padding_callback(struct ssl_st* ssl, unsigned long  int (*cb)(struct ssl_st*,int,unsigned long  int,void*));
void SSL_set_record_padding_callback_arg(struct ssl_st* ssl, void* arg);
void* SSL_get_record_padding_callback_arg(const struct ssl_st* ssl);
int SSL_set_block_padding(struct ssl_st* ssl, unsigned long  int block_size);
int SSL_set_block_padding_ex(struct ssl_st* ssl, unsigned long  int app_block_size, unsigned long  int hs_block_size);
int SSL_set_num_tickets(struct ssl_st* s, unsigned long  int num_tickets);
unsigned long  int SSL_get_num_tickets(const struct ssl_st* s);
int SSL_CTX_set_num_tickets(struct ssl_ctx_st* ctx, unsigned long  int num_tickets);
unsigned long  int SSL_CTX_get_num_tickets(const struct ssl_ctx_st* ctx);
int SSL_handle_events(struct ssl_st* s);
int SSL_get_event_timeout(struct ssl_st* s, struct timeval* tv, int* is_infinite);
int SSL_get_rpoll_descriptor(struct ssl_st* s, struct bio_poll_descriptor_st* desc);
int SSL_get_wpoll_descriptor(struct ssl_st* s, struct bio_poll_descriptor_st* desc);
int SSL_net_read_desired(struct ssl_st* s);
int SSL_net_write_desired(struct ssl_st* s);
int SSL_set_blocking_mode(struct ssl_st* s, int blocking);
int SSL_get_blocking_mode(struct ssl_st* s);
int SSL_set1_initial_peer_addr(struct ssl_st* s, const union bio_addr_st* peer_addr);
struct ssl_st* SSL_get0_connection(struct ssl_st* s);
int SSL_is_connection(struct ssl_st* s);
int SSL_get_stream_type(struct ssl_st* s);
unsigned long  long SSL_get_stream_id(struct ssl_st* s);
int SSL_is_stream_local(struct ssl_st* s);
int SSL_set_default_stream_mode(struct ssl_st* s, unsigned int mode);
struct ssl_st* SSL_new_stream(struct ssl_st* s, unsigned long  long flags);
int SSL_set_incoming_stream_policy(struct ssl_st* s, int policy, unsigned long  long aec);
struct ssl_st* SSL_accept_stream(struct ssl_st* s, unsigned long  long flags);
unsigned long  int SSL_get_accept_stream_queue_len(struct ssl_st* s);
int SSL_inject_net_dgram(struct ssl_st* s, const unsigned char* buf, unsigned long  int buf_len, const union bio_addr_st* peer, const union bio_addr_st* local);
int SSL_shutdown_ex(struct ssl_st* ssl, unsigned long  long flags, const struct ssl_shutdown_ex_args_st* args, unsigned long  int args_len);
int SSL_stream_conclude(struct ssl_st* ssl, unsigned long  long flags);
int SSL_stream_reset(struct ssl_st* ssl, const struct ssl_stream_reset_args_st* args, unsigned long  int args_len);
int SSL_get_stream_read_state(struct ssl_st* ssl);
int SSL_get_stream_write_state(struct ssl_st* ssl);
int SSL_get_stream_read_error_code(struct ssl_st* ssl, unsigned long  long* app_error_code);
int SSL_get_stream_write_error_code(struct ssl_st* ssl, unsigned long  long* app_error_code);
int SSL_get_conn_close_info(struct ssl_st* ssl, struct ssl_conn_close_info_st* info, unsigned long  int info_len);
int SSL_get_value_uint(struct ssl_st* s, unsigned int class_, unsigned int id, unsigned long  long* v);
int SSL_set_value_uint(struct ssl_st* s, unsigned int class_, unsigned int id, unsigned long  long v);
int SSL_poll(struct ssl_poll_item_st* items, unsigned long  int num_items, unsigned long  int stride, const struct timeval* timeout, unsigned long  long flags, unsigned long  int* result_count);
int SSL_session_reused(const struct ssl_st* s);
int SSL_is_server(const struct ssl_st* s);
struct ssl_conf_ctx_st* SSL_CONF_CTX_new();
int SSL_CONF_CTX_finish(struct ssl_conf_ctx_st* cctx);
void SSL_CONF_CTX_free(struct ssl_conf_ctx_st* cctx);
unsigned int SSL_CONF_CTX_set_flags(struct ssl_conf_ctx_st* cctx, unsigned int flags);
unsigned int SSL_CONF_CTX_clear_flags(struct ssl_conf_ctx_st* cctx, unsigned int flags);
int SSL_CONF_CTX_set1_prefix(struct ssl_conf_ctx_st* cctx, const char* pre);
void SSL_CONF_CTX_set_ssl(struct ssl_conf_ctx_st* cctx, struct ssl_st* ssl);
void SSL_CONF_CTX_set_ssl_ctx(struct ssl_conf_ctx_st* cctx, struct ssl_ctx_st* ctx);
int SSL_CONF_cmd(struct ssl_conf_ctx_st* cctx, const char* cmd, const char* value);
int SSL_CONF_cmd_argv(struct ssl_conf_ctx_st* cctx, int* pargc, char*** pargv);
int SSL_CONF_cmd_value_type(struct ssl_conf_ctx_st* cctx, const char* cmd);
void SSL_add_ssl_module();
int SSL_config(struct ssl_st* s, const char* name);
int SSL_CTX_config(struct ssl_ctx_st* ctx, const char* name);
void SSL_trace(int write_p, int version, int content_type, const void* buf, unsigned long  int len, struct ssl_st* ssl, void* arg);
int DTLSv1_listen(struct ssl_st* s, union bio_addr_st* client);
int SSL_set_ct_validation_callback(struct ssl_st* s, int (*callback)(const struct ct_policy_eval_ctx_st*,const struct stack_st_SCT*,void*), void* arg);
int SSL_CTX_set_ct_validation_callback(struct ssl_ctx_st* ctx, int (*callback)(const struct ct_policy_eval_ctx_st*,const struct stack_st_SCT*,void*), void* arg);
int SSL_enable_ct(struct ssl_st* s, int validation_mode);
int SSL_CTX_enable_ct(struct ssl_ctx_st* ctx, int validation_mode);
int SSL_ct_is_enabled(const struct ssl_st* s);
int SSL_CTX_ct_is_enabled(const struct ssl_ctx_st* ctx);
const struct stack_st_SCT* SSL_get0_peer_scts(struct ssl_st* s);
int SSL_CTX_set_default_ctlog_list_file(struct ssl_ctx_st* ctx);
int SSL_CTX_set_ctlog_list_file(struct ssl_ctx_st* ctx, const char* path);
void SSL_CTX_set0_ctlog_store(struct ssl_ctx_st* ctx, struct ctlog_store_st* logs);
const struct ctlog_store_st* SSL_CTX_get0_ctlog_store(const struct ssl_ctx_st* ctx);
void SSL_set_security_level(struct ssl_st* s, int level);
int SSL_get_security_level(const struct ssl_st* s);
void SSL_set_security_callback(struct ssl_st* s, int (*cb)(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*));
int (*SSL_get_security_callback(const struct ssl_st* _function_pointer_result_var_name_a67))(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*);
void SSL_set0_security_ex_data(struct ssl_st* s, void* ex);
void* SSL_get0_security_ex_data(const struct ssl_st* s);
void SSL_CTX_set_security_level(struct ssl_ctx_st* ctx, int level);
int SSL_CTX_get_security_level(const struct ssl_ctx_st* ctx);
void SSL_CTX_set_security_callback(struct ssl_ctx_st* ctx, int (*cb)(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*));
int (*SSL_CTX_get_security_callback(const struct ssl_ctx_st* _function_pointer_result_var_name_a68))(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*);
void SSL_CTX_set0_security_ex_data(struct ssl_ctx_st* ctx, void* ex);
void* SSL_CTX_get0_security_ex_data(const struct ssl_ctx_st* ctx);
int OPENSSL_init_ssl(unsigned long  long opts, const struct ossl_init_settings_st* settings);
int SSL_free_buffers(struct ssl_st* ssl);
int SSL_alloc_buffers(struct ssl_st* ssl);
int SSL_CTX_set_session_ticket_cb(struct ssl_ctx_st* ctx, int (*gen_cb)(struct ssl_st*,void*), int (*dec_cb)(struct ssl_st*,struct ssl_session_st*,const unsigned char*,unsigned long  int,int,void*), void* arg);
int SSL_SESSION_set1_ticket_appdata(struct ssl_session_st* ss, const void* data, unsigned long  int len);
int SSL_SESSION_get0_ticket_appdata(struct ssl_session_st* ss, void** data, unsigned long  int* len);
void DTLS_set_timer_cb(struct ssl_st* s, unsigned int (*cb)(struct ssl_st*,unsigned int));
void SSL_CTX_set_allow_early_data_cb(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,void*), void* arg);
void SSL_set_allow_early_data_cb(struct ssl_st* s, int (*cb)(struct ssl_st*,void*), void* arg);
const char* OSSL_default_cipher_list();
const char* OSSL_default_ciphersuites();
int SSL_CTX_compress_certs(struct ssl_ctx_st* ctx, int alg);
int SSL_compress_certs(struct ssl_st* ssl, int alg);
int SSL_CTX_set1_cert_comp_preference(struct ssl_ctx_st* ctx, int* algs, unsigned long  int len);
int SSL_set1_cert_comp_preference(struct ssl_st* ssl, int* algs, unsigned long  int len);
int SSL_CTX_set1_compressed_cert(struct ssl_ctx_st* ctx, int algorithm, unsigned char* comp_data, unsigned long  int comp_length, unsigned long  int orig_length);
int SSL_set1_compressed_cert(struct ssl_st* ssl, int algorithm, unsigned char* comp_data, unsigned long  int comp_length, unsigned long  int orig_length);
unsigned long  int SSL_CTX_get1_compressed_cert(struct ssl_ctx_st* ctx, int alg, unsigned char** data, unsigned long  int* orig_len);
unsigned long  int SSL_get1_compressed_cert(struct ssl_st* ssl, int alg, unsigned char** data, unsigned long  int* orig_len);
int SSL_add_expected_rpk(struct ssl_st* s, struct evp_pkey_st* rpk);
struct evp_pkey_st* SSL_get0_peer_rpk(const struct ssl_st* s);
struct evp_pkey_st* SSL_SESSION_get0_peer_rpk(struct ssl_session_st* s);
int SSL_get_negotiated_client_cert_type(const struct ssl_st* s);
int SSL_get_negotiated_server_cert_type(const struct ssl_st* s);
int SSL_set1_client_cert_type(struct ssl_st* s, const unsigned char* val, unsigned long  int len);
int SSL_set1_server_cert_type(struct ssl_st* s, const unsigned char* val, unsigned long  int len);
int SSL_CTX_set1_client_cert_type(struct ssl_ctx_st* ctx, const unsigned char* val, unsigned long  int len);
int SSL_CTX_set1_server_cert_type(struct ssl_ctx_st* ctx, const unsigned char* val, unsigned long  int len);
int SSL_get0_client_cert_type(const struct ssl_st* s, unsigned char** t, unsigned long  int* len);
int SSL_get0_server_cert_type(const struct ssl_st* s, unsigned char** t, unsigned long  int* len);
int SSL_CTX_get0_client_cert_type(const struct ssl_ctx_st* ctx, unsigned char** t, unsigned long  int* len);
int SSL_CTX_get0_server_cert_type(const struct ssl_ctx_st* s, unsigned char** t, unsigned long  int* len);
void ERR_new();
void ERR_set_debug(const char* file, int line, const char* func);
void ERR_set_error(int lib, int reason, const char* fmt, ...);
void ERR_vset_error(int lib, int reason, const char* fmt, va_list args);
void ERR_set_error_data(char* data, int flags);
unsigned long  int ERR_get_error();
unsigned long  int ERR_get_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_get_error_line(const char** file, int* line);
unsigned long  int ERR_get_error_line_data(const char** file, int* line, const char** data, int* flags);
unsigned long  int ERR_peek_error();
unsigned long  int ERR_peek_error_line(const char** file, int* line);
unsigned long  int ERR_peek_error_func(const char** func);
unsigned long  int ERR_peek_error_data(const char** data, int* flags);
unsigned long  int ERR_peek_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_peek_error_line_data(const char** file, int* line, const char** data, int* flags);
unsigned long  int ERR_peek_last_error();
unsigned long  int ERR_peek_last_error_line(const char** file, int* line);
unsigned long  int ERR_peek_last_error_func(const char** func);
unsigned long  int ERR_peek_last_error_data(const char** data, int* flags);
unsigned long  int ERR_peek_last_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_peek_last_error_line_data(const char** file, int* line, const char** data, int* flags);
void ERR_clear_error();
char* ERR_error_string(unsigned long  int e, char* buf);
void ERR_error_string_n(unsigned long  int e, char* buf, unsigned long  int len);
const char* ERR_lib_error_string(unsigned long  int e);
const char* ERR_func_error_string(unsigned long  int e);
const char* ERR_reason_error_string(unsigned long  int e);
void ERR_print_errors_cb(int (*cb)(const char*,unsigned long  int,void*), void* u);
void ERR_print_errors_fp(struct __sFILE* fp);
void ERR_print_errors(struct bio_st* bp);
void ERR_add_error_data(int num, ...);
void ERR_add_error_vdata(int num, va_list args);
void ERR_add_error_txt(const char* sepr, const char* txt);
void ERR_add_error_mem_bio(const char* sep, struct bio_st* bio);
int ERR_load_strings(int lib, struct ERR_string_data_st* str);
int ERR_load_strings_const(const struct ERR_string_data_st* str);
int ERR_unload_strings(int lib, struct ERR_string_data_st* str);
void ERR_remove_thread_state(void* anonymous_var_nameX2367);
void ERR_remove_state(unsigned long  int pid);
struct err_state_st* ERR_get_state();
int ERR_get_next_error_library();
int ERR_set_mark();
int ERR_pop_to_mark();
int ERR_clear_last_mark();
int ERR_count_to_mark();
int ERR_pop();
struct err_state_st* OSSL_ERR_STATE_new();
void OSSL_ERR_STATE_save(struct err_state_st* es);
void OSSL_ERR_STATE_save_to_mark(struct err_state_st* es);
void OSSL_ERR_STATE_restore(const struct err_state_st* es);
void OSSL_ERR_STATE_free(struct err_state_st* es);
int socket_fd_write(int self, char* str);
int server_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*,_Bool*));
int client_socket(int port, char* address, void* parent, void (*block)(void*,int,_Bool*));
char* client_socket2(int port, char* data, char* address);
int httpd_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*));
int httpsd_socket(int port, _Bool reuse, void* parent, void (*block)(void*,struct ssl_st*,_Bool*));
int xmysql_query(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name);
struct list$1list$1charphph* xmysql_query_and_fetch_row(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name);
int main(int argc, char** argv);
// uniq global variable
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

void* gComeFunResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3641, "buffer"))));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3648, "buffer"))));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3664, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3671, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3678, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3685, "buffer"))));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4013, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4018, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4023, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4028, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4033, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_122;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4066, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4068, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_123;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result72__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4073, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4075, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_124;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result73__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4080, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4082, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_125;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result74__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4087, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4089, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_126;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4094, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4096, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_127;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4101, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4103, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_128;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result79__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4108, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4110, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
    /*i*/come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4115, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4120, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4125, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4130, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4135, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4140, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4145, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4150, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4155, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4160, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4165, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4170, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4175, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4180, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_186;
int i_187;
    result_186=(_Bool)0;
    for(    i_187=0;    i_187<len;    i_187++    ){
        if(        strncmp(self[i_187],str,strlen(self[i_187]))==0) {
            result_186=(_Bool)1;
            break;
        }
    }
    return result_186;
}
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf(msg,self)));
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf(msg,self)));
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf(msg,self)));
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=string_printable(str)));
    /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}
static int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
int* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value280=wchar_tp_substring(str,head,tail)));
    /* U11 */__right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}
static int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value281=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value281,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}
static struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value282=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value282,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result225__;
}
static struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* __result226__;
    __result226__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value283=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value283,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result226__;
}
static struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value284=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value284,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}
static struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list$1charph* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value285=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value285,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result228__;
}
static char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value286=charp_strip(self)));
    /* U11 */__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}
static int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
int* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value287=charp_to_wstring(str)));
    /* U11 */__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}
static char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value288=wchar_tp_to_string(wstr)));
    /* U11 */__right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}
static int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
int* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value290=string_to_wstring(((char*)(__right_value289=xsprintf("%d",self))))));
    /* U11 */__right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}
static int wstring_length(int* str){
    return wchar_tp_length(str);
}
static int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
int* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value291=wchar_tp_delete(str,head,tail)));
    /* U11 */__right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}
static int wstring_index(int* str, int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static int wstring_rindex(int* str, int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static int* wstring_reverse(int* str){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
int* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value292=wchar_tp_reverse(str)));
    /* U11 */__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}
static int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
int* __result235__;
    __result235__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value293=wchar_tp_multiply(str,n)));
    /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}
static int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
int* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value294=wchar_tp_printable(str)));
    /* U11 */__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}
static unsigned int wstring_get_hash_key(int* value){
    return wchar_tp_get_hash_key(value);
}
static _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
char* __result237__;
    __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value295=charp_replace(self,index,c)));
    /* U11 */__right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}
static char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value296=charp_multiply(str,n)));
    /* U11 */__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}
static char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
char* __result239__;
    __result239__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value297=charp_sub(self,reg,replace)));
    /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result239__;
}
static char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
char* __result240__;
    __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value298=charp_sub_count(self,reg,replace,count)));
    /* U11 */__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result240__;
}
static struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list$1charph* __result241__;
    __result241__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value299=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value299,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result241__;
}
static struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value300=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value300,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}
static struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list$1charph* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value301=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value301,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}
static _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* __result244__;
    __result244__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value302=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value302,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}
static int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=charp_sub_block(self,reg,parent,block)));
    /* U11 */__right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}
static char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=charp_sub_block_count(self,reg,count,parent,block)));
    /* U11 */__right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}
static char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
char* __result248__;
    __result248__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value306=string_chomp(str)));
    /* U11 */__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result248__;
}
static inline int __darwin_check_fd_set(int _a, const void* _b){
    if(    (unsigned long  int)&__darwin_check_fd_set_overflow!=(unsigned long  int)0) {
        return __darwin_check_fd_set_overflow(_a,_b,0);
    }
    else {
        return 1;
    }
}
static inline int __darwin_fd_isset(int _fd, const struct fd_set* _p){
    if(    __darwin_check_fd_set(_fd,(const void*)_p)) {
        return _p->fds_bits[(unsigned long  int)_fd/(sizeof(int)*8)]&((int)(((unsigned long  int)1)<<((unsigned long  int)_fd%(sizeof(int)*8))));
    }
    return 0;
}
static inline void __darwin_fd_set(int _fd, struct fd_set* _p){
    if(    __darwin_check_fd_set(_fd,(const void*)_p)) {
        (_p->fds_bits[(unsigned long  int)_fd/(sizeof(int)*8)]|=((int)(((unsigned long  int)1)<<((unsigned long  int)_fd%(sizeof(int)*8)))));
    }
}
static inline void __darwin_fd_clr(int _fd, struct fd_set* _p){
    if(    __darwin_check_fd_set(_fd,(const void*)_p)) {
        (_p->fds_bits[(unsigned long  int)_fd/(sizeof(int)*8)]&=~((int)(((unsigned long  int)1)<<((unsigned long  int)_fd%(sizeof(int)*8)))));
    }
}
static unsigned short int _OSSwapInt16(unsigned short int data){
    return ((unsigned short int)((((unsigned short int)(data)&65280)>>8)|(((unsigned short int)(data)&255)<<8)));
}
static unsigned int _OSSwapInt32(unsigned int data){
    return ((unsigned int)((((unsigned int)(data)&4278190080)>>24)|(((unsigned int)(data)&16711680)>>8)|(((unsigned int)(data)&65280)<<8)|(((unsigned int)(data)&255)<<24)));
}
static unsigned long  long _OSSwapInt64(unsigned long  long data){
    return ((unsigned long  long)((((unsigned long  long)(data)&18374686479671623680)>>56)|(((unsigned long  long)(data)&71776119061217280)>>40)|(((unsigned long  long)(data)&280375465082880)>>24)|(((unsigned long  long)(data)&1095216660480)>>8)|(((unsigned long  long)(data)&4278190080)<<8)|(((unsigned long  long)(data)&16711680)<<24)|(((unsigned long  long)(data)&65280)<<40)|(((unsigned long  long)(data)&255)<<56)));
}
static unsigned short int OSReadSwapInt16(const void* base, unsigned long  int byteOffset){
unsigned short int data_271;
    data_271=*(unsigned short int*)((unsigned long  int)base+byteOffset);
    return _OSSwapInt16(data_271);
}
static unsigned int OSReadSwapInt32(const void* base, unsigned long  int byteOffset){
unsigned int data_272;
    data_272=*(unsigned int*)((unsigned long  int)base+byteOffset);
    return _OSSwapInt32(data_272);
}
static unsigned long  long OSReadSwapInt64(const void* base, unsigned long  int byteOffset){
unsigned long  long data_273;
    data_273=*(unsigned long  long*)((unsigned long  int)base+byteOffset);
    return _OSSwapInt64(data_273);
}
static void OSWriteSwapInt16(void* base, unsigned long  int byteOffset, unsigned short int data){
    *(unsigned short int*)((unsigned long  int)base+byteOffset)=_OSSwapInt16(data);
}
static void OSWriteSwapInt32(void* base, unsigned long  int byteOffset, unsigned int data){
    *(unsigned int*)((unsigned long  int)base+byteOffset)=_OSSwapInt32(data);
}
static void OSWriteSwapInt64(void* base, unsigned long  int byteOffset, unsigned long  long data){
    *(unsigned long  long*)((unsigned long  int)base+byteOffset)=_OSSwapInt64(data);
}
static int OSHostByteOrder(){
    return (1);
}
static unsigned short int _OSReadInt16(const void* base, unsigned long  int byteOffset){
    return *(unsigned short int*)((unsigned long  int)base+byteOffset);
}
static unsigned int _OSReadInt32(const void* base, unsigned long  int byteOffset){
    return *(unsigned int*)((unsigned long  int)base+byteOffset);
}
static unsigned long  long _OSReadInt64(const void* base, unsigned long  int byteOffset){
    return *(unsigned long  long*)((unsigned long  int)base+byteOffset);
}
static void _OSWriteInt16(void* base, unsigned long  int byteOffset, unsigned short int data){
    *(unsigned short int*)((unsigned long  int)base+byteOffset)=data;
}
static void _OSWriteInt32(void* base, unsigned long  int byteOffset, unsigned int data){
    *(unsigned int*)((unsigned long  int)base+byteOffset)=data;
}
static void _OSWriteInt64(void* base, unsigned long  int byteOffset, unsigned long  long data){
    *(unsigned long  long*)((unsigned long  int)base+byteOffset)=data;
}
static char* ossl_check_OPENSSL_STRING_type(char* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_OPENSSL_STRING_sk_type(const struct stack_st_OPENSSL_STRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_OPENSSL_STRING_sk_type(struct stack_st_OPENSSL_STRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_OPENSSL_STRING_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_OPENSSL_STRING_copyfunc_type(char* (*cpy)(const char*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_OPENSSL_STRING_freefunc_type(void (*fr)(char*)))(void*){
    return (void (*)(void*))fr;
}
static const char* ossl_check_OPENSSL_CSTRING_type(const char* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_OPENSSL_CSTRING_sk_type(const struct stack_st_OPENSSL_CSTRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_OPENSSL_CSTRING_sk_type(struct stack_st_OPENSSL_CSTRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_OPENSSL_CSTRING_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_OPENSSL_CSTRING_copyfunc_type(char* (*cpy)(const char*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_OPENSSL_CSTRING_freefunc_type(void (*fr)(char*)))(void*){
    return (void (*)(void*))fr;
}
static void* ossl_check_OPENSSL_BLOCK_type(void* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_OPENSSL_BLOCK_sk_type(const struct stack_st_OPENSSL_BLOCK* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_OPENSSL_BLOCK_sk_type(struct stack_st_OPENSSL_BLOCK* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_OPENSSL_BLOCK_compfunc_type(int (*cmp)(const void**,const void**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_OPENSSL_BLOCK_copyfunc_type(void* (*cpy)(const void*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_OPENSSL_BLOCK_freefunc_type(void (*fr)(void*)))(void*){
    return (void (*)(void*))fr;
}
static void* ossl_check_void_type(void* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_void_sk_type(const struct stack_st_void* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_void_sk_type(struct stack_st_void* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_void_compfunc_type(int (*cmp)(const void**,const void**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_void_copyfunc_type(void* (*cpy)(const void*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_void_freefunc_type(void (*fr)(void*)))(void*){
    return (void (*)(void*))fr;
}
static struct ssl_comp_st* ossl_check_SSL_COMP_type(struct ssl_comp_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SSL_COMP_sk_type(const struct stack_st_SSL_COMP* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SSL_COMP_sk_type(struct stack_st_SSL_COMP* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SSL_COMP_compfunc_type(int (*cmp)(const struct ssl_comp_st**,const struct ssl_comp_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SSL_COMP_copyfunc_type(struct ssl_comp_st* (*cpy)(const struct ssl_comp_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SSL_COMP_freefunc_type(void (*fr)(struct ssl_comp_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct bio_st* ossl_check_BIO_type(struct bio_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_BIO_sk_type(const struct stack_st_BIO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_BIO_sk_type(struct stack_st_BIO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_BIO_compfunc_type(int (*cmp)(const struct bio_st**,const struct bio_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_BIO_copyfunc_type(struct bio_st* (*cpy)(const struct bio_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_BIO_freefunc_type(void (*fr)(struct bio_st*)))(void*){
    return (void (*)(void*))fr;
}
static const struct ossl_param_st* (*OSSL_FUNC_core_gettable_params(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (const struct ossl_param_st* (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_get_params(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,struct ossl_param_st*){
    return (int (*)(const struct ossl_core_handle_st*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_core_thread_start(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,void (*)(void*),void*){
    return (int (*)(const struct ossl_core_handle_st*,void (*)(void*),void*))opf->function;
}
static struct openssl_core_ctx_st* (*OSSL_FUNC_core_get_libctx(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (struct openssl_core_ctx_st* (*)(const struct ossl_core_handle_st*))opf->function;
}
static void (*OSSL_FUNC_core_new_error(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (void (*)(const struct ossl_core_handle_st*))opf->function;
}
static void (*OSSL_FUNC_core_set_error_debug(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,const char*,int,const char*){
    return (void (*)(const struct ossl_core_handle_st*,const char*,int,const char*))opf->function;
}
static void (*OSSL_FUNC_core_vset_error(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned int,const char*,va_list){
    return (void (*)(const struct ossl_core_handle_st*,unsigned int,const char*,va_list))opf->function;
}
static int (*OSSL_FUNC_core_set_error_mark(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (int (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_clear_last_error_mark(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (int (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_pop_error_to_mark(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (int (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_obj_add_sigid(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,const char*,const char*,const char*){
    return (int (*)(const struct ossl_core_handle_st*,const char*,const char*,const char*))opf->function;
}
static int (*OSSL_FUNC_core_obj_create(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,const char*,const char*,const char*){
    return (int (*)(const struct ossl_core_handle_st*,const char*,const char*,const char*))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_malloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_zalloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_free(const struct ossl_dispatch_st* opf))(void*,const char*,int){
    return (void (*)(void*,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_clear_free(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,const char*,int){
    return (void (*)(void*,unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_realloc(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,const char*,int){
    return (void* (*)(void*,unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_clear_realloc(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,unsigned long  int,const char*,int){
    return (void* (*)(void*,unsigned long  int,unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_secure_malloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_secure_zalloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_secure_free(const struct ossl_dispatch_st* opf))(void*,const char*,int){
    return (void (*)(void*,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_secure_clear_free(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,const char*,int){
    return (void (*)(void*,unsigned long  int,const char*,int))opf->function;
}
static int (*OSSL_FUNC_CRYPTO_secure_allocated(const struct ossl_dispatch_st* opf))(const void*){
    return (int (*)(const void*))opf->function;
}
static void (*OSSL_FUNC_OPENSSL_cleanse(const struct ossl_dispatch_st* opf))(void*,unsigned long  int){
    return (void (*)(void*,unsigned long  int))opf->function;
}
static struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_file(const struct ossl_dispatch_st* opf))(const char*,const char*){
    return (struct ossl_core_bio_st* (*)(const char*,const char*))opf->function;
}
static struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_membuf(const struct ossl_dispatch_st* opf))(const void*,int){
    return (struct ossl_core_bio_st* (*)(const void*,int))opf->function;
}
static int (*OSSL_FUNC_BIO_read_ex(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,void*,unsigned long  int,unsigned long  int*){
    return (int (*)(struct ossl_core_bio_st*,void*,unsigned long  int,unsigned long  int*))opf->function;
}
static int (*OSSL_FUNC_BIO_write_ex(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,const void*,unsigned long  int,unsigned long  int*){
    return (int (*)(struct ossl_core_bio_st*,const void*,unsigned long  int,unsigned long  int*))opf->function;
}
static int (*OSSL_FUNC_BIO_gets(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,char*,int){
    return (int (*)(struct ossl_core_bio_st*,char*,int))opf->function;
}
static int (*OSSL_FUNC_BIO_puts(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,const char*){
    return (int (*)(struct ossl_core_bio_st*,const char*))opf->function;
}
static int (*OSSL_FUNC_BIO_up_ref(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*){
    return (int (*)(struct ossl_core_bio_st*))opf->function;
}
static int (*OSSL_FUNC_BIO_free(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*){
    return (int (*)(struct ossl_core_bio_st*))opf->function;
}
static int (*OSSL_FUNC_BIO_vprintf(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,const char*,va_list){
    return (int (*)(struct ossl_core_bio_st*,const char*,va_list))opf->function;
}
static int (*OSSL_FUNC_BIO_vsnprintf(const struct ossl_dispatch_st* opf))(char*,unsigned long  int,const char*,va_list){
    return (int (*)(char*,unsigned long  int,const char*,va_list))opf->function;
}
static int (*OSSL_FUNC_BIO_ctrl(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,int,long,void*){
    return (int (*)(struct ossl_core_bio_st*,int,long,void*))opf->function;
}
static void (*OSSL_FUNC_indicator_cb(const struct ossl_dispatch_st* opf))(struct openssl_core_ctx_st*,int (*)(const char*,const char*,const struct ossl_param_st*)){
    return (void (*)(struct openssl_core_ctx_st*,int (*)(const char*,const char*,const struct ossl_param_st*)))opf->function;
}
static void (*OSSL_FUNC_self_test_cb(const struct ossl_dispatch_st* opf))(struct openssl_core_ctx_st*,int (*)(const struct ossl_param_st*,void*),void**){
    return (void (*)(struct openssl_core_ctx_st*,int (*)(const struct ossl_param_st*,void*),void**))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_user_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_user_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_user_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_user_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_provider_register_child_cb(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,int (*)(const struct ossl_core_handle_st*,void*),int (*)(const struct ossl_core_handle_st*,void*),int (*)(const char*,void*),void*){
    return (int (*)(const struct ossl_core_handle_st*,int (*)(const struct ossl_core_handle_st*,void*),int (*)(const struct ossl_core_handle_st*,void*),int (*)(const char*,void*),void*))opf->function;
}
static void (*OSSL_FUNC_provider_deregister_child_cb(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (void (*)(const struct ossl_core_handle_st*))opf->function;
}
static const char* (*OSSL_FUNC_provider_name(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (const char* (*)(const struct ossl_core_handle_st*))opf->function;
}
static void* (*OSSL_FUNC_provider_get0_provider_ctx(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (void* (*)(const struct ossl_core_handle_st*))opf->function;
}
static const struct ossl_dispatch_st* (*OSSL_FUNC_provider_get0_dispatch(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (const struct ossl_dispatch_st* (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_provider_up_ref(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,int){
    return (int (*)(const struct ossl_core_handle_st*,int))opf->function;
}
static int (*OSSL_FUNC_provider_free(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,int){
    return (int (*)(const struct ossl_core_handle_st*,int))opf->function;
}
static void (*OSSL_FUNC_provider_teardown(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_provider_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_provider_get_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_algorithm_st* (*OSSL_FUNC_provider_query_operation(const struct ossl_dispatch_st* opf))(void*,int,int*){
    return (const struct ossl_algorithm_st* (*)(void*,int,int*))opf->function;
}
static void (*OSSL_FUNC_provider_unquery_operation(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_algorithm_st*){
    return (void (*)(void*,int,const struct ossl_algorithm_st*))opf->function;
}
static const struct ossl_item_st* (*OSSL_FUNC_provider_get_reason_strings(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_item_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_provider_get_capabilities(const struct ossl_dispatch_st* opf))(void*,const char*,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const char*,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_provider_self_test(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_digest_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_digest_init(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_digest_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_digest_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_digest_squeeze(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_digest_digest(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_digest_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_digest_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_digest_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_digest_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_digest_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_digest_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_cipher_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_cipher_encrypt_init(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_decrypt_init(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_update(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_cipher_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_cipher_cipher(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cipher_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_cipher_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_cipher_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_cipher_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_mac_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_mac_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_mac_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_mac_init(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_mac_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_mac_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_mac_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_mac_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_mac_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_mac_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static void* (*OSSL_FUNC_kdf_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_kdf_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_kdf_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void (*OSSL_FUNC_kdf_reset(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_kdf_derive(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kdf_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_kdf_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kdf_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kdf_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static void* (*OSSL_FUNC_rand_newctx(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_dispatch_st*){
    return (void* (*)(void*,void*,const struct ossl_dispatch_st*))opf->function;
}
static void (*OSSL_FUNC_rand_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_rand_instantiate(const struct ossl_dispatch_st* opf))(void*,unsigned int,int,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,unsigned int,int,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_rand_uninstantiate(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_rand_generate(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int,unsigned int,int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int,unsigned int,int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_rand_reseed(const struct ossl_dispatch_st* opf))(void*,int,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,int,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_rand_nonce(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned int,unsigned long  int,unsigned long  int){
    return (unsigned long  int (*)(void*,unsigned char*,unsigned int,unsigned long  int,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_rand_enable_locking(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_rand_lock(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static void (*OSSL_FUNC_rand_unlock(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_rand_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_rand_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_rand_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_rand_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static void (*OSSL_FUNC_rand_set_callbacks(const struct ossl_dispatch_st* opf))(void*,int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),void*){
    return (void (*)(void*,int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_rand_verify_zeroization(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static unsigned long  int (*OSSL_FUNC_rand_get_seed(const struct ossl_dispatch_st* opf))(void*,unsigned char**,int,unsigned long  int,unsigned long  int,int,const unsigned char*,unsigned long  int){
    return (unsigned long  int (*)(void*,unsigned char**,int,unsigned long  int,unsigned long  int,int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_rand_clear_seed(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int){
    return (void (*)(void*,unsigned char*,unsigned long  int))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_new(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_gen_init(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_param_st*){
    return (void* (*)(void*,int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_gen_set_template(const struct ossl_dispatch_st* opf))(void*,void*){
    return (int (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_gen_set_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_settable_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_gen_get_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_gettable_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_gen(const struct ossl_dispatch_st* opf))(void*,int (*)(const struct ossl_param_st*,void*),void*){
    return (void* (*)(void*,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static void (*OSSL_FUNC_keymgmt_gen_cleanup(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_load(const struct ossl_dispatch_st* opf))(const void*,unsigned long  int){
    return (void* (*)(const void*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_keymgmt_free(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_get_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_set_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_settable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const char* (*OSSL_FUNC_keymgmt_query_operation_name(const struct ossl_dispatch_st* opf))(int){
    return (const char* (*)(int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_has(const struct ossl_dispatch_st* opf))(const void*,int){
    return (int (*)(const void*,int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_validate(const struct ossl_dispatch_st* opf))(const void*,int,int){
    return (int (*)(const void*,int,int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_match(const struct ossl_dispatch_st* opf))(const void*,const void*,int){
    return (int (*)(const void*,const void*,int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_import(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_param_st*){
    return (int (*)(void*,int,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types(const struct ossl_dispatch_st* opf))(int){
    return (const struct ossl_param_st* (*)(int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_export(const struct ossl_dispatch_st* opf))(void*,int,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,int,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types(const struct ossl_dispatch_st* opf))(int){
    return (const struct ossl_param_st* (*)(int))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_dup(const struct ossl_dispatch_st* opf))(const void*,int){
    return (void* (*)(const void*,int))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_ex(const struct ossl_dispatch_st* opf))(void*,int){
    return (const struct ossl_param_st* (*)(void*,int))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_ex(const struct ossl_dispatch_st* opf))(void*,int){
    return (const struct ossl_param_st* (*)(void*,int))opf->function;
}
static void* (*OSSL_FUNC_keyexch_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keyexch_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_keyexch_derive(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_keyexch_set_peer(const struct ossl_dispatch_st* opf))(void*,void*){
    return (int (*)(void*,void*))opf->function;
}
static void (*OSSL_FUNC_keyexch_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_keyexch_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keyexch_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keyexch_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_keyexch_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keyexch_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_signature_newctx(const struct ossl_dispatch_st* opf))(void*,const char*){
    return (void* (*)(void*,const char*))opf->function;
}
static int (*OSSL_FUNC_signature_sign_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_sign(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_sign_message_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_sign_message_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_sign_message_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_verify_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_verify(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_verify_message_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_verify_message_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_verify_message_final(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_signature_verify_recover_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_verify_recover(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign_init(const struct ossl_dispatch_st* opf))(void*,const char*,void*,const struct ossl_param_st*){
    return (int (*)(void*,const char*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify_init(const struct ossl_dispatch_st* opf))(void*,const char*,void*,const struct ossl_param_st*){
    return (int (*)(void*,const char*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify_final(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_signature_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_signature_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_signature_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_signature_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_signature_get_ctx_md_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_md_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_signature_set_ctx_md_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_md_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const char** (*OSSL_FUNC_signature_query_key_types(const struct ossl_dispatch_st* opf))(){
    return (const char** (*)())opf->function;
}
static void* (*OSSL_FUNC_asym_cipher_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_encrypt_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_encrypt(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_decrypt_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_decrypt(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_asym_cipher_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_asym_cipher_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_kem_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_kem_encapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_auth_encapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_encapsulate(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned char*,unsigned long  int*){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned char*,unsigned long  int*))opf->function;
}
static int (*OSSL_FUNC_kem_decapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_auth_decapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_decapsulate(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_kem_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_kem_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_kem_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kem_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_kem_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kem_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_encoder_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_encoder_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_encoder_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_encoder_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_encoder_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_encoder_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_encoder_does_selection(const struct ossl_dispatch_st* opf))(void*,int){
    return (int (*)(void*,int))opf->function;
}
static int (*OSSL_FUNC_encoder_encode(const struct ossl_dispatch_st* opf))(void*,struct ossl_core_bio_st*,const void*,const struct ossl_param_st*,int,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,struct ossl_core_bio_st*,const void*,const struct ossl_param_st*,int,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static void* (*OSSL_FUNC_encoder_import_object(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_param_st*){
    return (void* (*)(void*,int,const struct ossl_param_st*))opf->function;
}
static void (*OSSL_FUNC_encoder_free_object(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_decoder_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_decoder_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_decoder_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_decoder_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_decoder_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_decoder_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_decoder_does_selection(const struct ossl_dispatch_st* opf))(void*,int){
    return (int (*)(void*,int))opf->function;
}
static int (*OSSL_FUNC_decoder_decode(const struct ossl_dispatch_st* opf))(void*,struct ossl_core_bio_st*,int,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,struct ossl_core_bio_st*,int,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_decoder_export_object(const struct ossl_dispatch_st* opf))(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static void* (*OSSL_FUNC_store_open(const struct ossl_dispatch_st* opf))(void*,const char*){
    return (void* (*)(void*,const char*))opf->function;
}
static void* (*OSSL_FUNC_store_attach(const struct ossl_dispatch_st* opf))(void*,struct ossl_core_bio_st*){
    return (void* (*)(void*,struct ossl_core_bio_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_store_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_store_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_store_load(const struct ossl_dispatch_st* opf))(void*,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_store_eof(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_store_close(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_store_export_object(const struct ossl_dispatch_st* opf))(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_store_delete(const struct ossl_dispatch_st* opf))(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static void* (*OSSL_FUNC_store_open_ex(const struct ossl_dispatch_st* opf))(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (void* (*)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static struct X509_algor_st* ossl_check_X509_ALGOR_type(struct X509_algor_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_ALGOR_sk_type(const struct stack_st_X509_ALGOR* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_ALGOR_sk_type(struct stack_st_X509_ALGOR* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_ALGOR_compfunc_type(int (*cmp)(const struct X509_algor_st**,const struct X509_algor_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_ALGOR_copyfunc_type(struct X509_algor_st* (*cpy)(const struct X509_algor_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_ALGOR_freefunc_type(void (*fr)(struct X509_algor_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_table_st* ossl_check_ASN1_STRING_TABLE_type(struct asn1_string_table_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_STRING_TABLE_sk_type(const struct stack_st_ASN1_STRING_TABLE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_STRING_TABLE_sk_type(struct stack_st_ASN1_STRING_TABLE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_STRING_TABLE_compfunc_type(int (*cmp)(const struct asn1_string_table_st**,const struct asn1_string_table_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_STRING_TABLE_copyfunc_type(struct asn1_string_table_st* (*cpy)(const struct asn1_string_table_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_STRING_TABLE_freefunc_type(void (*fr)(struct asn1_string_table_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_type_st* ossl_check_ASN1_TYPE_type(struct asn1_type_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_TYPE_sk_type(const struct stack_st_ASN1_TYPE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_TYPE_sk_type(struct stack_st_ASN1_TYPE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_TYPE_compfunc_type(int (*cmp)(const struct asn1_type_st**,const struct asn1_type_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_TYPE_copyfunc_type(struct asn1_type_st* (*cpy)(const struct asn1_type_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_TYPE_freefunc_type(void (*fr)(struct asn1_type_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_object_st* ossl_check_ASN1_OBJECT_type(struct asn1_object_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_OBJECT_sk_type(const struct stack_st_ASN1_OBJECT* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_OBJECT_sk_type(struct stack_st_ASN1_OBJECT* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_OBJECT_compfunc_type(int (*cmp)(const struct asn1_object_st**,const struct asn1_object_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_OBJECT_copyfunc_type(struct asn1_object_st* (*cpy)(const struct asn1_object_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_OBJECT_freefunc_type(void (*fr)(struct asn1_object_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_st* ossl_check_ASN1_INTEGER_type(struct asn1_string_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_INTEGER_sk_type(const struct stack_st_ASN1_INTEGER* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_INTEGER_sk_type(struct stack_st_ASN1_INTEGER* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_INTEGER_compfunc_type(int (*cmp)(const struct asn1_string_st**,const struct asn1_string_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_INTEGER_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_INTEGER_freefunc_type(void (*fr)(struct asn1_string_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_st* ossl_check_ASN1_UTF8STRING_type(struct asn1_string_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_UTF8STRING_sk_type(const struct stack_st_ASN1_UTF8STRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_UTF8STRING_sk_type(struct stack_st_ASN1_UTF8STRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_UTF8STRING_compfunc_type(int (*cmp)(const struct asn1_string_st**,const struct asn1_string_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_UTF8STRING_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_UTF8STRING_freefunc_type(void (*fr)(struct asn1_string_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_st* ossl_check_ASN1_GENERALSTRING_type(struct asn1_string_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_GENERALSTRING_sk_type(const struct stack_st_ASN1_GENERALSTRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_GENERALSTRING_sk_type(struct stack_st_ASN1_GENERALSTRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_GENERALSTRING_compfunc_type(int (*cmp)(const struct asn1_string_st**,const struct asn1_string_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_GENERALSTRING_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_GENERALSTRING_freefunc_type(void (*fr)(struct asn1_string_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_name_st* ossl_check_X509_NAME_type(struct X509_name_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_NAME_sk_type(const struct stack_st_X509_NAME* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_NAME_sk_type(struct stack_st_X509_NAME* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_NAME_compfunc_type(int (*cmp)(const struct X509_name_st**,const struct X509_name_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_NAME_copyfunc_type(struct X509_name_st* (*cpy)(const struct X509_name_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_NAME_freefunc_type(void (*fr)(struct X509_name_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_st* ossl_check_X509_type(struct x509_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_sk_type(const struct stack_st_X509* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_sk_type(struct stack_st_X509* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_compfunc_type(int (*cmp)(const struct x509_st**,const struct x509_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_copyfunc_type(struct x509_st* (*cpy)(const struct x509_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_freefunc_type(void (*fr)(struct x509_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_revoked_st* ossl_check_X509_REVOKED_type(struct x509_revoked_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_REVOKED_sk_type(const struct stack_st_X509_REVOKED* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_REVOKED_sk_type(struct stack_st_X509_REVOKED* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_REVOKED_compfunc_type(int (*cmp)(const struct x509_revoked_st**,const struct x509_revoked_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_REVOKED_copyfunc_type(struct x509_revoked_st* (*cpy)(const struct x509_revoked_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_REVOKED_freefunc_type(void (*fr)(struct x509_revoked_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_crl_st* ossl_check_X509_CRL_type(struct X509_crl_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_CRL_sk_type(const struct stack_st_X509_CRL* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_CRL_sk_type(struct stack_st_X509_CRL* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_CRL_compfunc_type(int (*cmp)(const struct X509_crl_st**,const struct X509_crl_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_CRL_copyfunc_type(struct X509_crl_st* (*cpy)(const struct X509_crl_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_CRL_freefunc_type(void (*fr)(struct X509_crl_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_name_entry_st* ossl_check_X509_NAME_ENTRY_type(struct X509_name_entry_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_NAME_ENTRY_sk_type(const struct stack_st_X509_NAME_ENTRY* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_NAME_ENTRY_sk_type(struct stack_st_X509_NAME_ENTRY* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_NAME_ENTRY_compfunc_type(int (*cmp)(const struct X509_name_entry_st**,const struct X509_name_entry_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_NAME_ENTRY_copyfunc_type(struct X509_name_entry_st* (*cpy)(const struct X509_name_entry_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_NAME_ENTRY_freefunc_type(void (*fr)(struct X509_name_entry_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_extension_st* ossl_check_X509_EXTENSION_type(struct X509_extension_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_EXTENSION_sk_type(const struct stack_st_X509_EXTENSION* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_EXTENSION_sk_type(struct stack_st_X509_EXTENSION* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_EXTENSION_compfunc_type(int (*cmp)(const struct X509_extension_st**,const struct X509_extension_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_EXTENSION_copyfunc_type(struct X509_extension_st* (*cpy)(const struct X509_extension_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_EXTENSION_freefunc_type(void (*fr)(struct X509_extension_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_attributes_st* ossl_check_X509_ATTRIBUTE_type(struct x509_attributes_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_ATTRIBUTE_sk_type(const struct stack_st_X509_ATTRIBUTE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_ATTRIBUTE_sk_type(struct stack_st_X509_ATTRIBUTE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_ATTRIBUTE_compfunc_type(int (*cmp)(const struct x509_attributes_st**,const struct x509_attributes_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_ATTRIBUTE_copyfunc_type(struct x509_attributes_st* (*cpy)(const struct x509_attributes_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_ATTRIBUTE_freefunc_type(void (*fr)(struct x509_attributes_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_info_st* ossl_check_X509_INFO_type(struct X509_info_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_INFO_sk_type(const struct stack_st_X509_INFO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_INFO_sk_type(struct stack_st_X509_INFO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_INFO_compfunc_type(int (*cmp)(const struct X509_info_st**,const struct X509_info_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_INFO_copyfunc_type(struct X509_info_st* (*cpy)(const struct X509_info_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_INFO_freefunc_type(void (*fr)(struct X509_info_st*)))(void*){
    return (void (*)(void*))fr;
}
static unsigned long  int lh_OPENSSL_STRING_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_274)(const char**);
memset(&hfn_conv_274, 0, sizeof(unsigned long  int (*)(const char**)));
    hfn_conv_274=(unsigned long  int (*)(const char**))hfn;
    return hfn_conv_274((const char**)data);
}
static int lh_OPENSSL_STRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_275)(const char**,const char**);
memset(&cfn_conv_275, 0, sizeof(int (*)(const char**,const char**)));
    cfn_conv_275=(int (*)(const char**,const char**))cfn;
    return cfn_conv_275((const char**)da,(const char**)db);
}
static void lh_OPENSSL_STRING_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_276)(char**);
memset(&doall_conv_276, 0, sizeof(void (*)(char**)));
    doall_conv_276=(void (*)(char**))doall;
    doall_conv_276((char**)node);
}
static void lh_OPENSSL_STRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_277)(char**,void*);
memset(&doall_conv_277, 0, sizeof(void (*)(char**,void*)));
    doall_conv_277=(void (*)(char**,void*))doall;
    doall_conv_277((char**)node,arg);
}
static char** ossl_check_OPENSSL_STRING_lh_plain_type(char** ptr){
    return ptr;
}
static const char** ossl_check_const_OPENSSL_STRING_lh_plain_type(const char** ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_OPENSSL_STRING_lh_type(const struct lhash_st_OPENSSL_STRING* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_OPENSSL_STRING_lh_type(struct lhash_st_OPENSSL_STRING* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_OPENSSL_STRING_lh_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_OPENSSL_STRING_lh_hashfunc_type(unsigned long  int (*hfn)(const char**)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_OPENSSL_STRING_lh_doallfunc_type(void (*dfn)(char**)))(void*){
    return (void (*)(void*))dfn;
}
static unsigned long  int lh_OPENSSL_CSTRING_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_278)(const char**);
memset(&hfn_conv_278, 0, sizeof(unsigned long  int (*)(const char**)));
    hfn_conv_278=(unsigned long  int (*)(const char**))hfn;
    return hfn_conv_278((const char**)data);
}
static int lh_OPENSSL_CSTRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_279)(const char**,const char**);
memset(&cfn_conv_279, 0, sizeof(int (*)(const char**,const char**)));
    cfn_conv_279=(int (*)(const char**,const char**))cfn;
    return cfn_conv_279((const char**)da,(const char**)db);
}
static void lh_OPENSSL_CSTRING_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_280)(const char**);
memset(&doall_conv_280, 0, sizeof(void (*)(const char**)));
    doall_conv_280=(void (*)(const char**))doall;
    doall_conv_280((const char**)node);
}
static void lh_OPENSSL_CSTRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_281)(const char**,void*);
memset(&doall_conv_281, 0, sizeof(void (*)(const char**,void*)));
    doall_conv_281=(void (*)(const char**,void*))doall;
    doall_conv_281((const char**)node,arg);
}
static const char** ossl_check_OPENSSL_CSTRING_lh_plain_type(const char** ptr){
    return ptr;
}
static const char** ossl_check_const_OPENSSL_CSTRING_lh_plain_type(const char** ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_OPENSSL_CSTRING_lh_type(const struct lhash_st_OPENSSL_CSTRING* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_OPENSSL_CSTRING_lh_type(struct lhash_st_OPENSSL_CSTRING* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_OPENSSL_CSTRING_lh_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_OPENSSL_CSTRING_lh_hashfunc_type(unsigned long  int (*hfn)(const char**)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_OPENSSL_CSTRING_lh_doallfunc_type(void (*dfn)(const char**)))(void*){
    return (void (*)(void*))dfn;
}
static struct x509_lookup_st* ossl_check_X509_LOOKUP_type(struct x509_lookup_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_LOOKUP_sk_type(const struct stack_st_X509_LOOKUP* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_LOOKUP_sk_type(struct stack_st_X509_LOOKUP* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_LOOKUP_compfunc_type(int (*cmp)(const struct x509_lookup_st**,const struct x509_lookup_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_LOOKUP_copyfunc_type(struct x509_lookup_st* (*cpy)(const struct x509_lookup_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_LOOKUP_freefunc_type(void (*fr)(struct x509_lookup_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_object_st* ossl_check_X509_OBJECT_type(struct x509_object_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_OBJECT_sk_type(const struct stack_st_X509_OBJECT* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_OBJECT_sk_type(struct stack_st_X509_OBJECT* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_OBJECT_compfunc_type(int (*cmp)(const struct x509_object_st**,const struct x509_object_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_OBJECT_copyfunc_type(struct x509_object_st* (*cpy)(const struct x509_object_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_OBJECT_freefunc_type(void (*fr)(struct x509_object_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_VERIFY_PARAM_st* ossl_check_X509_VERIFY_PARAM_type(struct X509_VERIFY_PARAM_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_VERIFY_PARAM_sk_type(const struct stack_st_X509_VERIFY_PARAM* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_VERIFY_PARAM_sk_type(struct stack_st_X509_VERIFY_PARAM* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_VERIFY_PARAM_compfunc_type(int (*cmp)(const struct X509_VERIFY_PARAM_st**,const struct X509_VERIFY_PARAM_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_VERIFY_PARAM_copyfunc_type(struct X509_VERIFY_PARAM_st* (*cpy)(const struct X509_VERIFY_PARAM_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_VERIFY_PARAM_freefunc_type(void (*fr)(struct X509_VERIFY_PARAM_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_trust_st* ossl_check_X509_TRUST_type(struct x509_trust_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_TRUST_sk_type(const struct stack_st_X509_TRUST* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_TRUST_sk_type(struct stack_st_X509_TRUST* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_TRUST_compfunc_type(int (*cmp)(const struct x509_trust_st**,const struct x509_trust_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_TRUST_copyfunc_type(struct x509_trust_st* (*cpy)(const struct x509_trust_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_TRUST_freefunc_type(void (*fr)(struct x509_trust_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct pkcs7_signer_info_st* ossl_check_PKCS7_SIGNER_INFO_type(struct pkcs7_signer_info_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_PKCS7_SIGNER_INFO_sk_type(const struct stack_st_PKCS7_SIGNER_INFO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_PKCS7_SIGNER_INFO_sk_type(struct stack_st_PKCS7_SIGNER_INFO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_PKCS7_SIGNER_INFO_compfunc_type(int (*cmp)(const struct pkcs7_signer_info_st**,const struct pkcs7_signer_info_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_PKCS7_SIGNER_INFO_copyfunc_type(struct pkcs7_signer_info_st* (*cpy)(const struct pkcs7_signer_info_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_PKCS7_SIGNER_INFO_freefunc_type(void (*fr)(struct pkcs7_signer_info_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct pkcs7_recip_info_st* ossl_check_PKCS7_RECIP_INFO_type(struct pkcs7_recip_info_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_PKCS7_RECIP_INFO_sk_type(const struct stack_st_PKCS7_RECIP_INFO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_PKCS7_RECIP_INFO_sk_type(struct stack_st_PKCS7_RECIP_INFO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_PKCS7_RECIP_INFO_compfunc_type(int (*cmp)(const struct pkcs7_recip_info_st**,const struct pkcs7_recip_info_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_PKCS7_RECIP_INFO_copyfunc_type(struct pkcs7_recip_info_st* (*cpy)(const struct pkcs7_recip_info_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_PKCS7_RECIP_INFO_freefunc_type(void (*fr)(struct pkcs7_recip_info_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct pkcs7_st* ossl_check_PKCS7_type(struct pkcs7_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_PKCS7_sk_type(const struct stack_st_PKCS7* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_PKCS7_sk_type(struct stack_st_PKCS7* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_PKCS7_compfunc_type(int (*cmp)(const struct pkcs7_st**,const struct pkcs7_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_PKCS7_copyfunc_type(struct pkcs7_st* (*cpy)(const struct pkcs7_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_PKCS7_freefunc_type(void (*fr)(struct pkcs7_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct anonymous_typeX30* ossl_check_CONF_VALUE_type(struct anonymous_typeX30* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_CONF_VALUE_sk_type(const struct stack_st_CONF_VALUE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_CONF_VALUE_sk_type(struct stack_st_CONF_VALUE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_CONF_VALUE_compfunc_type(int (*cmp)(const struct anonymous_typeX30**,const struct anonymous_typeX30**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_CONF_VALUE_copyfunc_type(struct anonymous_typeX30* (*cpy)(const struct anonymous_typeX30*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_CONF_VALUE_freefunc_type(void (*fr)(struct anonymous_typeX30*)))(void*){
    return (void (*)(void*))fr;
}
static unsigned long  int lh_CONF_VALUE_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_282)(const struct anonymous_typeX30*);
memset(&hfn_conv_282, 0, sizeof(unsigned long  int (*)(const struct anonymous_typeX30*)));
    hfn_conv_282=(unsigned long  int (*)(const struct anonymous_typeX30*))hfn;
    return hfn_conv_282((const struct anonymous_typeX30*)data);
}
static int lh_CONF_VALUE_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_283)(const struct anonymous_typeX30*,const struct anonymous_typeX30*);
memset(&cfn_conv_283, 0, sizeof(int (*)(const struct anonymous_typeX30*,const struct anonymous_typeX30*)));
    cfn_conv_283=(int (*)(const struct anonymous_typeX30*,const struct anonymous_typeX30*))cfn;
    return cfn_conv_283((const struct anonymous_typeX30*)da,(const struct anonymous_typeX30*)db);
}
static void lh_CONF_VALUE_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_284)(struct anonymous_typeX30*);
memset(&doall_conv_284, 0, sizeof(void (*)(struct anonymous_typeX30*)));
    doall_conv_284=(void (*)(struct anonymous_typeX30*))doall;
    doall_conv_284((struct anonymous_typeX30*)node);
}
static void lh_CONF_VALUE_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_285)(struct anonymous_typeX30*,void*);
memset(&doall_conv_285, 0, sizeof(void (*)(struct anonymous_typeX30*,void*)));
    doall_conv_285=(void (*)(struct anonymous_typeX30*,void*))doall;
    doall_conv_285((struct anonymous_typeX30*)node,arg);
}
static struct anonymous_typeX30* ossl_check_CONF_VALUE_lh_plain_type(struct anonymous_typeX30* ptr){
    return ptr;
}
static const struct anonymous_typeX30* ossl_check_const_CONF_VALUE_lh_plain_type(const struct anonymous_typeX30* ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_CONF_VALUE_lh_type(const struct lhash_st_CONF_VALUE* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_CONF_VALUE_lh_type(struct lhash_st_CONF_VALUE* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_CONF_VALUE_lh_compfunc_type(int (*cmp)(const struct anonymous_typeX30*,const struct anonymous_typeX30*)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_CONF_VALUE_lh_hashfunc_type(unsigned long  int (*hfn)(const struct anonymous_typeX30*)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_CONF_VALUE_lh_doallfunc_type(void (*dfn)(struct anonymous_typeX30*)))(void*){
    return (void (*)(void*))dfn;
}
static struct sct_st* ossl_check_SCT_type(struct sct_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SCT_sk_type(const struct stack_st_SCT* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SCT_sk_type(struct stack_st_SCT* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SCT_compfunc_type(int (*cmp)(const struct sct_st**,const struct sct_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SCT_copyfunc_type(struct sct_st* (*cpy)(const struct sct_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SCT_freefunc_type(void (*fr)(struct sct_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct ctlog_st* ossl_check_CTLOG_type(struct ctlog_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_CTLOG_sk_type(const struct stack_st_CTLOG* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_CTLOG_sk_type(struct stack_st_CTLOG* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_CTLOG_compfunc_type(int (*cmp)(const struct ctlog_st**,const struct ctlog_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_CTLOG_copyfunc_type(struct ctlog_st* (*cpy)(const struct ctlog_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_CTLOG_freefunc_type(void (*fr)(struct ctlog_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct srtp_protection_profile_st* ossl_check_SRTP_PROTECTION_PROFILE_type(struct srtp_protection_profile_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SRTP_PROTECTION_PROFILE_sk_type(const struct stack_st_SRTP_PROTECTION_PROFILE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SRTP_PROTECTION_PROFILE_sk_type(struct stack_st_SRTP_PROTECTION_PROFILE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SRTP_PROTECTION_PROFILE_compfunc_type(int (*cmp)(const struct srtp_protection_profile_st**,const struct srtp_protection_profile_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SRTP_PROTECTION_PROFILE_copyfunc_type(struct srtp_protection_profile_st* (*cpy)(const struct srtp_protection_profile_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SRTP_PROTECTION_PROFILE_freefunc_type(void (*fr)(struct srtp_protection_profile_st*)))(void*){
    return (void (*)(void*))fr;
}
static const struct ssl_cipher_st* ossl_check_SSL_CIPHER_type(const struct ssl_cipher_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SSL_CIPHER_sk_type(const struct stack_st_SSL_CIPHER* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SSL_CIPHER_sk_type(struct stack_st_SSL_CIPHER* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SSL_CIPHER_compfunc_type(int (*cmp)(const struct ssl_cipher_st**,const struct ssl_cipher_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SSL_CIPHER_copyfunc_type(struct ssl_cipher_st* (*cpy)(const struct ssl_cipher_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SSL_CIPHER_freefunc_type(void (*fr)(struct ssl_cipher_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct bio_poll_descriptor_st SSL_as_poll_descriptor(struct ssl_st* s){
struct bio_poll_descriptor_st d_286;
memset(&d_286, 0, sizeof(struct bio_poll_descriptor_st));
    d_286.type=2;
    d_286.value.ssl=s;
    return d_286;
}
static int ERR_GET_LIB(unsigned long  int errcode){
    if(    (((errcode)&((unsigned int)2147483647+1))!=0)) {
        return 2;
    }
    return (errcode>>23)&255;
}
static int ERR_GET_RFLAGS(unsigned long  int errcode){
    if(    (((errcode)&((unsigned int)2147483647+1))!=0)) {
        return 0;
    }
    return errcode&(31<<18);
}
static int ERR_GET_REASON(unsigned long  int errcode){
    if(    (((errcode)&((unsigned int)2147483647+1))!=0)) {
        return errcode&((unsigned int)2147483647);
    }
    return errcode&8388607;
}
static int ERR_FATAL_ERROR(unsigned long  int errcode){
    return (ERR_GET_RFLAGS(errcode)&(1<<18))!=0;
}
static int ERR_COMMON_ERROR(unsigned long  int errcode){
    return (ERR_GET_RFLAGS(errcode)&(2<<18))!=0;
}
static unsigned long  int lh_ERR_STRING_DATA_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_287)(const struct ERR_string_data_st*);
memset(&hfn_conv_287, 0, sizeof(unsigned long  int (*)(const struct ERR_string_data_st*)));
    hfn_conv_287=(unsigned long  int (*)(const struct ERR_string_data_st*))hfn;
    return hfn_conv_287((const struct ERR_string_data_st*)data);
}
static int lh_ERR_STRING_DATA_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_288)(const struct ERR_string_data_st*,const struct ERR_string_data_st*);
memset(&cfn_conv_288, 0, sizeof(int (*)(const struct ERR_string_data_st*,const struct ERR_string_data_st*)));
    cfn_conv_288=(int (*)(const struct ERR_string_data_st*,const struct ERR_string_data_st*))cfn;
    return cfn_conv_288((const struct ERR_string_data_st*)da,(const struct ERR_string_data_st*)db);
}
static void lh_ERR_STRING_DATA_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_289)(struct ERR_string_data_st*);
memset(&doall_conv_289, 0, sizeof(void (*)(struct ERR_string_data_st*)));
    doall_conv_289=(void (*)(struct ERR_string_data_st*))doall;
    doall_conv_289((struct ERR_string_data_st*)node);
}
static void lh_ERR_STRING_DATA_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_290)(struct ERR_string_data_st*,void*);
memset(&doall_conv_290, 0, sizeof(void (*)(struct ERR_string_data_st*,void*)));
    doall_conv_290=(void (*)(struct ERR_string_data_st*,void*))doall;
    doall_conv_290((struct ERR_string_data_st*)node,arg);
}
static struct ERR_string_data_st* ossl_check_ERR_STRING_DATA_lh_plain_type(struct ERR_string_data_st* ptr){
    return ptr;
}
static const struct ERR_string_data_st* ossl_check_const_ERR_STRING_DATA_lh_plain_type(const struct ERR_string_data_st* ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_ERR_STRING_DATA_lh_type(const struct lhash_st_ERR_STRING_DATA* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_ERR_STRING_DATA_lh_type(struct lhash_st_ERR_STRING_DATA* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_ERR_STRING_DATA_lh_compfunc_type(int (*cmp)(const struct ERR_string_data_st*,const struct ERR_string_data_st*)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_ERR_STRING_DATA_lh_hashfunc_type(unsigned long  int (*hfn)(const struct ERR_string_data_st*)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_ERR_STRING_DATA_lh_doallfunc_type(void (*dfn)(struct ERR_string_data_st*)))(void*){
    return (void (*)(void*))dfn;
}

// body function
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
int i_1;
void* __right_value2 = (void*)0;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 138, "buffer"))));
    buffer_append_format(buf_0,"%s %d\n",sname,sline);
    for(    i_1=gNumComeStackFrame-2;    i_1>=0;    i_1--    ){
        buffer_append_format(buf_0,"%s %d #%d\n",gComeStackFrameSName[i_1],gComeStackFrameSLine[i_1],gComeStackFrameID[i_1]);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_0))));
    /* U11 */__right_value2 = come_decrement_ref_count2(__right_value2, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
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

void stackframe(){
int i_2;
    for(    i_2=gNumComeStackFrame-1;    i_2>=0;    i_2--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_2],gComeStackFrameSLine[i_2],gComeStackFrameID[i_2]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
void* __right_value3 = (void*)0;
char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer)));
    /* U11 */__right_value3 = come_decrement_ref_count2(__right_value3, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result1__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result2__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result2__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result2__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result3__;
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
    __result3__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result3__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
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

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
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
int i_3;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_3=0;    i_3<gHeapPages.mSizePages;    i_3++    ){
        gHeapPages.mPages[i_3]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_4;
int n_5;
_Bool flag_6;
int i_7;
struct sMemHeaderTiny* it_8;
int n_9;
int i_10;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_4=gAllocMem;
        n_5=0;
        while(it_4) {
            n_5++;
            flag_6=(_Bool)0;
            printf("#%d ",n_5);
            if(            it_4->class_name) {
                printf("%p (%s): ",(char*)it_4+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_4->class_name);
            }
            for(            i_7=0;            i_7<16;            i_7++            ){
                if(                it_4->sname[i_7]) {
                    printf("%s %d #%d, ",it_4->sname[i_7],it_4->sline[i_7],it_4->id[i_7]);
                    flag_6=(_Bool)1;
                }
            }
            if(            flag_6) {
                puts("");
            }
            it_4=it_4->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_5,gNumAlloc,gNumFree);
    }
    else {
        it_8=(struct sMemHeaderTiny*)gAllocMem;
        n_9=0;
        while(it_8) {
            n_9++;
            it_8=it_8->next;
        }
        if(        n_9>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_9,gNumAlloc,gNumFree);
        }
    }
    for(    i_10=0;    i_10<gHeapPages.mSizePages;    i_10++    ){
        free(gHeapPages.mPages[i_10]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_11;
unsigned long  int free_area_12;
int new_size_pages_13;
void** new_pages_14;
int i_15;
void* __result4__;
    result_11=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_11=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_11,0,size);
        }
        if(        result_11==((void*)0)) {
            free_area_12=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_12) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_13=gHeapPages.mSizePages*2;
                    new_pages_14=calloc(1,sizeof(char*)*new_size_pages_13);
                    i_15=0;
                    for(                    ;                    i_15<gHeapPages.mSizePages;                    i_15++                    ){
                        new_pages_14[i_15]=gHeapPages.mPages[i_15];
                    }
                    for(                    ;                    i_15<new_size_pages_13;                    i_15++                    ){
                        new_pages_14[i_15]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_14;
                    gHeapPages.mSizePages=new_size_pages_13;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_11=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_11=calloc(1,size);
    }
    __result4__ = gComeFunResultObject = __result_obj__ = result_11;
    gComeFunResultObject = (void*)0;
    return __result4__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_16;
struct sMemHeader* it_17;
void* __result5__;
void* result_18;
struct sMemHeaderTiny* it_19;
void* __result6__;
    if(    gComeDebugLib) {
        result_16=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_17=result_16;
        it_17->allocated=177783;
        it_17->size=size+sizeof(struct sMemHeader);
        it_17->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_17->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_17->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_17->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_17->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_17->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_17->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_17->next=gAllocMem;
        it_17->prev=((void*)0);
        if(        class_name) {
            it_17->class_name=strdup(class_name);
        }
        else {
            it_17->class_name=((void*)0);
        }
        if(        gAllocMem) {
            gAllocMem->prev=it_17;
        }
        gAllocMem=it_17;
        gNumAlloc++;
        __result5__ = gComeFunResultObject = __result_obj__ = (char*)result_16+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result5__;
    }
    else {
        result_18=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_19=result_18;
        it_19->allocated=177783;
        it_19->size=size+sizeof(struct sMemHeaderTiny);
        it_19->free_next=((void*)0);
        it_19->next=(struct sMemHeaderTiny*)gAllocMem;
        it_19->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_19;
        }
        gAllocMem=(struct sMemHeader*)it_19;
        gNumAlloc++;
        __result6__ = gComeFunResultObject = __result_obj__ = (char*)result_18+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result6__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_20;
struct sMemHeader* prev_it_21;
struct sMemHeader* next_it_22;
unsigned long  int size_23;
struct sMemHeaderTiny* it_24;
struct sMemHeaderTiny* prev_it_25;
struct sMemHeaderTiny* next_it_26;
unsigned long  int size_27;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_20=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_20->allocated!=177783) {
                return;
            }
            it_20->allocated=0;
            prev_it_21=it_20->prev;
            next_it_22=it_20->next;
            if(            it_20->class_name) {
                free(it_20->class_name);
            }
            if(            gAllocMem==it_20) {
                gAllocMem=next_it_22;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_21) {
                    prev_it_21->next=next_it_22;
                }
                if(                next_it_22) {
                    next_it_22->prev=prev_it_21;
                }
            }
            size_23=it_20->size;
            if(            size_23<2048*2) {
                if(                gHeapPages.mFreeMem[size_23]==((void*)0)) {
                    it_20->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_23]=(struct sMemHeaderTiny*)it_20;
                }
                else {
                    it_20->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_23];
                    gHeapPages.mFreeMem[size_23]=(struct sMemHeaderTiny*)it_20;
                }
            }
            else {
                free(it_20);
            }
            gNumFree++;
        }
        else {
            it_24=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_24->allocated!=177783) {
                return;
            }
            it_24->allocated=0;
            prev_it_25=it_24->prev;
            next_it_26=it_24->next;
            if(            gAllocMem==it_24) {
                gAllocMem=(struct sMemHeader*)next_it_26;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_25) {
                    prev_it_25->next=next_it_26;
                }
                if(                next_it_26) {
                    next_it_26->prev=prev_it_25;
                }
            }
            size_27=it_24->size;
            if(            size_27<2048*2) {
                if(                gHeapPages.mFreeMem[size_27]==((void*)0)) {
                    it_24->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_27]=it_24;
                }
                else {
                    it_24->free_next=gHeapPages.mFreeMem[size_27];
                    gHeapPages.mFreeMem[size_27]=it_24;
                }
            }
            else {
                free(it_24);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_28;
char* __result7__;
    it_28=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
    if(    it_28->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_28);
        exit(2);
    }
    __result7__ = gComeFunResultObject = __result_obj__ = it_28->class_name;
    gComeFunResultObject = (void*)0;
    return __result7__;
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_29;
unsigned long  int* ref_count_30;
unsigned long  int* size2_31;
void* __result8__;
    mem_29=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_30=(unsigned long  int*)mem_29;
    *ref_count_30=0;
    size2_31=(unsigned long  int*)(mem_29+sizeof(unsigned long  int));
    *size2_31=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result8__ = gComeFunResultObject = __result_obj__ = mem_29+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_32;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_32=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_32);
}

void come_free(void* mem){
unsigned long  int* ref_count_33;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_33=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_33);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result9__;
char* mem_34;
unsigned long  int* size_p_35;
unsigned long  int size_36;
void* result_37;
void* __result10__;
    if(    !block) {
        __result9__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result9__;
    }
    mem_34=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_35=(unsigned long  int*)(mem_34+sizeof(unsigned long  int));
    size_36=*size_p_35-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_37=come_calloc(1,size_36,sname,sline,class_name);
    memcpy(result_37,block,size_36);
    __result10__ = gComeFunResultObject = __result_obj__ = result_37;
    gComeFunResultObject = (void*)0;
    return __result10__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result11__;
unsigned long  int* ref_count_38;
void* __result12__;
    if(    mem==((void*)0)) {
        __result11__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result11__;
    }
    ref_count_38=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_38)++;
    __result12__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result12__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result13__;
unsigned long  int* ref_count_39;
void* __result14__;
    if(    mem==((void*)0)) {
        __result13__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result13__;
    }
    ref_count_39=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_39);
    __result14__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result14__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result15__;
unsigned long  int* ref_count_40;
unsigned long  int count_41;
void (*finalizer_42)(void*);
void* __result16__;
void* __result17__;
memset(&finalizer_42, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result15__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result15__;
    }
    ref_count_40=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_40)--;
    }
    count_41=*ref_count_40;
    if(    !no_free&&(count_41<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_42=protocol_fun;
            finalizer_42(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result16__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result16__;
    }
    __result17__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result17__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result18__;
void* __result19__;
unsigned long  int* ref_count_43;
unsigned long  int count_44;
void (*finalizer_45)(void*);
void* __result20__;
void* __result21__;
memset(&finalizer_45, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result18__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result18__;
        }
    }
    if(    mem==((void*)0)) {
        __result19__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result19__;
    }
    ref_count_43=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_43)--;
    }
    count_44=*ref_count_43;
    if(    !no_free&&(count_44<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_45=protocol_fun;
            finalizer_45(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result20__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result20__;
    }
    __result21__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result21__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_46)(void*);
void (*finalizer_47)(void*);
unsigned long  int* ref_count_48;
unsigned long  int count_49;
void (*finalizer_50)(void*);
void (*finalizer_51)(void*);
memset(&finalizer_46, 0, sizeof(void (*)(void*)));
memset(&finalizer_47, 0, sizeof(void (*)(void*)));
memset(&finalizer_50, 0, sizeof(void (*)(void*)));
memset(&finalizer_51, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_46=protocol_fun;
                finalizer_46(protocol_obj);
            }
            finalizer_47=fun;
            finalizer_47(mem);
        }
    }
    else {
        ref_count_48=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_48)--;
        }
        count_49=*ref_count_48;
        if(        !no_free&&(count_49<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_50=protocol_fun;
                    finalizer_50(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_51=fun;
                    finalizer_51(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_52)(void*);
void (*finalizer_53)(void*);
unsigned long  int* ref_count_54;
unsigned long  int count_55;
void (*finalizer_56)(void*);
void (*finalizer_57)(void*);
memset(&finalizer_52, 0, sizeof(void (*)(void*)));
memset(&finalizer_53, 0, sizeof(void (*)(void*)));
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
memset(&finalizer_57, 0, sizeof(void (*)(void*)));
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
                finalizer_52=protocol_fun;
                finalizer_52(protocol_obj);
            }
            finalizer_53=fun;
            finalizer_53(mem);
        }
    }
    else {
        ref_count_54=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_54)--;
        }
        count_55=*ref_count_54;
        if(        !no_free&&(count_55<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_56=protocol_fun;
                    finalizer_56(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_57=fun;
                    finalizer_57(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_58)(void*);
unsigned long  int* ref_count_59;
unsigned long  int count_60;
void (*finalizer_61)(void*);
memset(&finalizer_58, 0, sizeof(void (*)(void*)));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
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
            finalizer_58=fun;
            finalizer_58(mem);
        }
    }
    else {
        ref_count_59=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_59)--;
        }
        count_60=*ref_count_59;
        if(        !no_free&&(count_60<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    finalizer_61=fun;
                    finalizer_61(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result22__;
int len_62;
void* __right_value4 = (void*)0;
char* result_63;
char* __result23__;
    if(    str==((void*)0)) {
        __result22__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result22__;
    }
    len_62=strlen(str)+1;
    result_63=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_62)), "/usr/local/include/comelang.h", 980, "char"));
    strncpy(result_63,str,len_62);
    __result23__ = gComeFunResultObject = __result_obj__ = result_63;
    /* U13 */result_63 = come_decrement_ref_count2(result_63, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_64;
int i_65;
    found_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        array[i_65]==element) {
            found_64=(_Bool)1;
            break;
        }
    }
    return found_64;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj2;
struct buffer* __result24__;
    self->size=128;
    __dec_obj2=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3282, "char"));
    /*G*/ __dec_obj2 = come_decrement_ref_count2(__dec_obj2, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result24__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result24__;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
char* __dec_obj3;
struct buffer* __result25__;
    self->size=128;
    __dec_obj3=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3292, "char"));
    /*G*/ __dec_obj3 = come_decrement_ref_count2(__dec_obj3, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result26__;
void* __right_value7 = (void*)0;
struct buffer* result_66;
void* __right_value8 = (void*)0;
char* __dec_obj4;
struct buffer* __result27__;
    if(    self==((void*)0)) {
        __result26__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result26__;
    }
    result_66=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3312, "buffer"));
    result_66->size=self->size;
    __dec_obj4=result_66->buf;
    result_66->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3315, "char"));
    /*G*/ __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_66->len=self->len;
    memcpy(result_66->buf,self->buf,self->len);
    __result27__ = gComeFunResultObject = __result_obj__ = result_66;
    /*i*/come_call_finalizer3(result_66,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result27__;
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
struct buffer* __result28__;
void* __right_value9 = (void*)0;
char* old_buf_67;
int old_len_68;
int new_size_69;
void* __right_value10 = (void*)0;
char* __dec_obj5;
struct buffer* __result29__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result28__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result28__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_67=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3354, "char"));
        memcpy(old_buf_67,self->buf,self->size);
        old_len_68=self->len;
        new_size_69=(self->size+size+1)*2;
        __dec_obj5=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_69)), "/usr/local/include/comelang.h", 3358, "char"));
        /*G*/ __dec_obj5 = come_decrement_ref_count2(__dec_obj5, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_67,old_len_68);
        self->buf[old_len_68]=0;
        self->size=new_size_69;
        /* U13 */old_buf_67 = come_decrement_ref_count2(old_buf_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result29__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result29__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result30__;
void* __right_value11 = (void*)0;
char* old_buf_70;
int old_len_71;
int new_size_72;
void* __right_value12 = (void*)0;
char* __dec_obj6;
struct buffer* __result31__;
    if(    self==((void*)0)) {
        __result30__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result30__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_70=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3377, "char*"));
        old_len_71=self->len;
        new_size_72=(self->size+10+1)*2;
        __dec_obj6=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_72)), "/usr/local/include/comelang.h", 3381, "char"));
        /*G*/ __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_70,old_len_71);
        self->buf[old_len_71]=0;
        self->size=new_size_72;
        /* U13 */old_buf_70 = come_decrement_ref_count2(old_buf_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result32__;
int size_73;
void* __right_value13 = (void*)0;
char* old_buf_74;
int old_len_75;
int new_size_76;
void* __right_value14 = (void*)0;
char* __dec_obj7;
struct buffer* __result33__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result32__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result32__;
    }
    size_73=strlen(mem);
    if(    self->len+size_73+1+1>=self->size) {
        old_buf_74=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3403, "char"));
        memcpy(old_buf_74,self->buf,self->size);
        old_len_75=self->len;
        new_size_76=(self->size+size_73+1)*2;
        __dec_obj7=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_76)), "/usr/local/include/comelang.h", 3407, "char"));
        /*G*/ __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_74,old_len_75);
        self->buf[old_len_75]=0;
        self->size=new_size_76;
        /* U13 */old_buf_74 = come_decrement_ref_count2(old_buf_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_73);
    self->len+=size_73;
    self->buf[self->len]=0;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result34__;
va_list args_77;
char* result_78;
int len_79;
struct buffer* __result35__;
void* __right_value15 = (void*)0;
char* mem_80;
int size_81;
void* __right_value16 = (void*)0;
char* old_buf_82;
int old_len_83;
int new_size_84;
void* __right_value17 = (void*)0;
char* __dec_obj8;
struct buffer* __result36__;
memset(&args_77, 0, sizeof(va_list));
result_78 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result34__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result34__;
    }
    __builtin_va_start(args_77,msg);
    len_79=vasprintf(&result_78,msg,args_77);
    __builtin_va_end(args_77);
    if(    len_79<0) {
        __result35__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result35__;
    }
    mem_80=(char*)come_increment_ref_count(__builtin_string(result_78));
    size_81=strlen(mem_80);
    if(    self->len+size_81+1+1>=self->size) {
        old_buf_82=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3440, "char"));
        memcpy(old_buf_82,self->buf,self->size);
        old_len_83=self->len;
        new_size_84=(self->size+size_81+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_84)), "/usr/local/include/comelang.h", 3444, "char"));
        /*G*/ __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_82,old_len_83);
        self->buf[old_len_83]=0;
        self->size=new_size_84;
        /* U13 */old_buf_82 = come_decrement_ref_count2(old_buf_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_80,size_81);
    self->len+=size_81;
    self->buf[self->len]=0;
    free(result_78);
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */mem_80 = come_decrement_ref_count2(mem_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result36__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result37__;
int size_85;
void* __right_value18 = (void*)0;
char* old_buf_86;
int old_len_87;
int new_size_88;
void* __right_value19 = (void*)0;
char* __dec_obj9;
struct buffer* __result38__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result37__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result37__;
    }
    size_85=strlen(mem)+1;
    if(    self->len+size_85+1+1+1>=self->size) {
        old_buf_86=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3466, "char"));
        memcpy(old_buf_86,self->buf,self->size);
        old_len_87=self->len;
        new_size_88=(self->size+size_85+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_88)), "/usr/local/include/comelang.h", 3470, "char"));
        /*G*/ __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_86,old_len_87);
        self->buf[old_len_87]=0;
        self->size=new_size_88;
        /* U13 */old_buf_86 = come_decrement_ref_count2(old_buf_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_85);
    self->len+=size_85;
    self->buf[self->len]=0;
    self->len++;
    __result38__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result38__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result39__;
int* mem_89;
int size_90;
void* __right_value20 = (void*)0;
char* old_buf_91;
int old_len_92;
int new_size_93;
void* __right_value21 = (void*)0;
char* __dec_obj10;
struct buffer* __result40__;
    if(    self==((void*)0)) {
        __result39__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result39__;
    }
    mem_89=&value;
    size_90=sizeof(int);
    if(    self->len+size_90+1+1>=self->size) {
        old_buf_91=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3493, "char"));
        memcpy(old_buf_91,self->buf,self->size);
        old_len_92=self->len;
        new_size_93=(self->size+size_90+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_93)), "/usr/local/include/comelang.h", 3497, "char"));
        /*G*/ __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_91,old_len_92);
        self->buf[old_len_92]=0;
        self->size=new_size_93;
        /* U13 */old_buf_91 = come_decrement_ref_count2(old_buf_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_89,size_90);
    self->len+=size_90;
    self->buf[self->len]=0;
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_94;
int size_95;
void* __right_value22 = (void*)0;
char* old_buf_96;
int old_len_97;
int new_size_98;
void* __right_value23 = (void*)0;
char* __dec_obj11;
struct buffer* __result41__;
    mem_94=&value;
    size_95=sizeof(long);
    if(    self->len+size_95+1+1>=self->size) {
        old_buf_96=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3516, "char"));
        memcpy(old_buf_96,self->buf,self->size);
        old_len_97=self->len;
        new_size_98=(self->size+size_95+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_98)), "/usr/local/include/comelang.h", 3520, "char"));
        /*G*/ __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_96,old_len_97);
        self->buf[old_len_97]=0;
        self->size=new_size_98;
        /* U13 */old_buf_96 = come_decrement_ref_count2(old_buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_94,size_95);
    self->len+=size_95;
    self->buf[self->len]=0;
    __result41__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result41__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result42__;
short* mem_99;
int size_100;
void* __right_value24 = (void*)0;
char* old_buf_101;
int old_len_102;
int new_size_103;
void* __right_value25 = (void*)0;
char* __dec_obj12;
struct buffer* __result43__;
    if(    self==((void*)0)) {
        __result42__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result42__;
    }
    mem_99=&value;
    size_100=sizeof(short);
    if(    self->len+size_100+1+1>=self->size) {
        old_buf_101=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3543, "char"));
        memcpy(old_buf_101,self->buf,self->size);
        old_len_102=self->len;
        new_size_103=(self->size+size_100+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_103)), "/usr/local/include/comelang.h", 3547, "char"));
        /*G*/ __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_101,old_len_102);
        self->buf[old_len_102]=0;
        self->size=new_size_103;
        /* U13 */old_buf_101 = come_decrement_ref_count2(old_buf_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_99,size_100);
    self->len+=size_100;
    self->buf[self->len]=0;
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result44__;
int len_104;
int new_size_105;
void* __right_value26 = (void*)0;
char* __dec_obj13;
int i_106;
struct buffer* __result45__;
    if(    self==((void*)0)) {
        __result44__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result44__;
    }
    len_104=self->len;
    len_104=(len_104+3)&~3;
    if(    len_104>=self->size) {
        new_size_105=(self->size+1+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_105)), "/usr/local/include/comelang.h", 3571, "char"));
        /*G*/ __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_105;
    }
    for(    i_106=self->len;    i_106<len_104;    i_106++    ){
        self->buf[i_106]=0;
    }
    self->len=len_104;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
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
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* result_107;
struct buffer* __result46__;
struct buffer* __result47__;
    result_107=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3601, "buffer"))));
    if(    self==((void*)0)) {
        __result46__ = gComeFunResultObject = __result_obj__ = result_107;
        /*i*/come_call_finalizer3(result_107,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result46__;
    }
    buffer_append_str(result_107,self);
    __result47__ = gComeFunResultObject = __result_obj__ = result_107;
    /*i*/come_call_finalizer3(result_107,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result47__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_108;
struct buffer* __result48__;
struct buffer* __result49__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3614, "buffer"))));
    if(    self==((void*)0)) {
        __result48__ = gComeFunResultObject = __result_obj__ = result_108;
        /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result48__;
    }
    buffer_append_str(result_108,self);
    __result49__ = gComeFunResultObject = __result_obj__ = result_108;
    /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result49__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
char* __result50__;
void* __right_value32 = (void*)0;
char* __result51__;
    if(    self==((void*)0)) {
        __result50__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value31=__builtin_string("")));
        /* U11 */__right_value31 = come_decrement_ref_count2(__right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result50__;
    }
    __result51__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value32=__builtin_string(self->buf)));
    /* U11 */__right_value32 = come_decrement_ref_count2(__right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}

char* buffer_printable(struct buffer* self){
void* __result_obj__=(void*)0;
int len_117;
void* __right_value47 = (void*)0;
char* result_118;
int n_119;
int i_120;
unsigned char c_121;
char* __result60__;
    len_117=self->len;
    result_118=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_117*2+1)), "/usr/local/include/comelang.h", 3693, "char"));
    n_119=0;
    for(    i_120=0;    i_120<len_117;    i_120++    ){
        c_121=self->buf[i_120];
        if(        (c_121>=0&&c_121<32)||c_121==127) {
            result_118[n_119++]=94;
            result_118[n_119++]=c_121+65-1;
        }
        else if(        c_121>127) {
            result_118[n_119++]=63;
        }
        else {
            result_118[n_119++]=c_121;
        }
    }
    result_118[n_119]=0;
    __result60__ = gComeFunResultObject = __result_obj__ = result_118;
    /* U13 */result_118 = come_decrement_ref_count2(result_118, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result61__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result64__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result66__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result68__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result71__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result76__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result78__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
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

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_129;
struct list$1char* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_129=0;    i_129<num_value;    i_129++    ){
        list$1char_push_back(self,values[i_129]);
    }
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_131;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_132;
struct list$1char* __result80__;
    if(    self->len==0) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1char"))));
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        litem_132->item=item;
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_133;
struct list_item$1char* prev_it_134;
    it_133=self->head;
    while(it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*i*/come_call_finalizer3(prev_it_134,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_135;
struct list$1charp* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_135=0;    i_135<num_value;    i_135++    ){
        list$1charp_push_back(self,values[i_135]);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_137;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_138;
struct list$1charp* __result83__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1charp"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_139;
struct list_item$1charp* prev_it_140;
    it_139=self->head;
    while(it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*i*/come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_141;
struct list$1short* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_141=0;    i_141<num_value;    i_141++    ){
        list$1short_push_back(self,values[i_141]);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_143;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_144;
struct list$1short* __result86__;
    if(    self->len==0) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1short"))));
        litem_144->prev=self->tail;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail->next=litem_144;
        self->tail=litem_144;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_145;
struct list_item$1short* prev_it_146;
    it_145=self->head;
    while(it_145!=((void*)0)) {
        prev_it_146=it_145;
        it_145=it_145->next;
        /*i*/come_call_finalizer3(prev_it_146,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_147;
struct list$1int* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_147=0;    i_147<num_value;    i_147++    ){
        list$1int_push_back(self,values[i_147]);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_149;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_150;
struct list$1int* __result89__;
    if(    self->len==0) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1int"))));
        litem_150->prev=self->tail;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail->next=litem_150;
        self->tail=litem_150;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_151;
struct list_item$1int* prev_it_152;
    it_151=self->head;
    while(it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*i*/come_call_finalizer3(prev_it_152,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_153;
struct list$1long* __result93__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_153=0;    i_153<num_value;    i_153++    ){
        list$1long_push_back(self,values[i_153]);
    }
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_155;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_156;
struct list$1long* __result92__;
    if(    self->len==0) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1long"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_157;
struct list_item$1long* prev_it_158;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*i*/come_call_finalizer3(prev_it_158,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_159;
struct list$1float* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_159=0;    i_159<num_value;    i_159++    ){
        list$1float_push_back(self,values[i_159]);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_161;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_162;
struct list$1float* __result95__;
    if(    self->len==0) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1float"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_163;
struct list_item$1float* prev_it_164;
    it_163=self->head;
    while(it_163!=((void*)0)) {
        prev_it_164=it_163;
        it_163=it_163->next;
        /*i*/come_call_finalizer3(prev_it_164,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_165;
struct list$1double* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0;    i_165<num_value;    i_165++    ){
        list$1double_push_back(self,values[i_165]);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_167;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_168;
struct list$1double* __result98__;
    if(    self->len==0) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1double"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_169;
struct list_item$1double* prev_it_170;
    it_169=self->head;
    while(it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*i*/come_call_finalizer3(prev_it_170,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1929, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1929, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
            /* U13 */self->items[i_172] = come_decrement_ref_count2(self->items[i_172], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1929, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1929, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1929, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1929, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1929, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

_Bool bool_equals(_Bool self, _Bool right){
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

_Bool bool_operator_equals(_Bool self, _Bool right){
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

_Bool bool_operator_not_equals(_Bool self, _Bool right){
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
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
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
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
char* __result115__;
int len_178;
void* __right_value148 = (void*)0;
char* result_179;
char* __result116__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result115__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value147=__builtin_string("")));
        /* U11 */__right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    len_178=strlen(self)+strlen(right);
    result_179=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_178+1)), "/usr/local/include/comelang.h", 4389, "char"));
    strncpy(result_179,self,len_178+1);
    strncat(result_179,right,len_178+1);
    __result116__ = gComeFunResultObject = __result_obj__ = result_179;
    /* U13 */result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
char* __result117__;
int len_180;
void* __right_value150 = (void*)0;
char* result_181;
char* __result118__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result117__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value149=__builtin_string("")));
        /* U11 */__right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result117__;
    }
    len_180=strlen(self)+strlen(right);
    result_181=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_180+1)), "/usr/local/include/comelang.h", 4404, "char"));
    strncpy(result_181,self,len_180+1);
    strncat(result_181,right,len_180+1);
    __result118__ = gComeFunResultObject = __result_obj__ = result_181;
    /* U13 */result_181 = come_decrement_ref_count2(result_181, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
char* __result119__;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct buffer* buf_182;
int i_183;
void* __right_value154 = (void*)0;
char* __result120__;
    if(    self==((void*)0)) {
        __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value151=__builtin_string("")));
        /* U11 */__right_value151 = come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    buf_182=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4417, "buffer"))));
    for(    i_183=0;    i_183<right;    i_183++    ){
        buffer_append_str(buf_182,self);
    }
    __result120__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value154=buffer_to_string(buf_182)));
    /*i*/come_call_finalizer3(buf_182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* __result121__;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct buffer* buf_184;
int i_185;
void* __right_value158 = (void*)0;
char* __result122__;
    if(    self==((void*)0)) {
        __result121__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value155=__builtin_string("")));
        /* U11 */__right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    buf_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4431, "buffer"))));
    for(    i_185=0;    i_185<right;    i_185++    ){
        buffer_append_str(buf_184,self);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=buffer_to_string(buf_184)));
    /*i*/come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

unsigned int bool_get_hash_key(_Bool value){
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
int result_188;
char* p_189;
    if(    value==((void*)0)) {
        return 0;
    }
    result_188=0;
    p_189=value;
    while(*p_189) {
        result_188+=(*p_189);
        p_189++;
    }
    return result_188;
}

unsigned int charp_get_hash_key(char* value){
int result_190;
char* p_191;
    if(    value==((void*)0)) {
        return 0;
    }
    result_190=0;
    p_191=value;
    while(*p_191) {
        result_190+=(*p_191);
        p_191++;
    }
    return result_190;
}

_Bool bool_clone(_Bool self){
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
char* __result123__;
void* __right_value159 = (void*)0;
char* __result124__;
    if(    self==((void*)0)) {
        __result123__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    __result124__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value159=__builtin_string(self)));
    /* U11 */__right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result125__;
void* __right_value160 = (void*)0;
char* __result126__;
    if(    self==((void*)0)) {
        __result125__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value160=__builtin_string(self)));
    /* U11 */__right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

_Bool xiswalpha(int c){
_Bool result_192;
    result_192=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_192;
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
_Bool result_193;
    result_193=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_193;
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
_Bool result_194;
    result_194=(c>=32&&c<=126);
    return result_194;
}

_Bool xiswascii(int c){
_Bool result_195;
    result_195=(c>=32&&c<=126);
    return result_195;
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
void* __right_value161 = (void*)0;
char* __result127__;
int len_196;
void* __right_value162 = (void*)0;
char* result_197;
int i_198;
char* __result128__;
    if(    str==((void*)0)) {
        __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=__builtin_string("")));
        /* U11 */__right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    len_196=strlen(str);
    result_197=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_196+1)), "/usr/local/include/comelang.h", 4690, "char"));
    for(    i_198=0;    i_198<len_196;    i_198++    ){
        result_197[i_198]=str[len_196-i_198-1];
    }
    result_197[len_196]=0;
    __result128__ = gComeFunResultObject = __result_obj__ = result_197;
    /* U13 */result_197 = come_decrement_ref_count2(result_197, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value163 = (void*)0;
char* __result129__;
int len_199;
void* __right_value164 = (void*)0;
char* result_200;
int i_201;
char* __result130__;
    if(    str==((void*)0)) {
        __result129__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=__builtin_string("")));
        /* U11 */__right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    len_199=strlen(str);
    result_200=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_199+1)), "/usr/local/include/comelang.h", 4707, "char"));
    for(    i_201=0;    i_201<len_199;    i_201++    ){
        result_200[i_201]=str[len_199-i_201-1];
    }
    result_200[len_199]=0;
    __result130__ = gComeFunResultObject = __result_obj__ = result_200;
    /* U13 */result_200 = come_decrement_ref_count2(result_200, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
char* __result131__;
int len_202;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
char* __result132__;
void* __right_value168 = (void*)0;
char* __result133__;
void* __right_value169 = (void*)0;
char* __result134__;
void* __right_value170 = (void*)0;
char* result_203;
char* __result135__;
    if(    str==((void*)0)) {
        __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
        /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    len_202=strlen(str);
    if(    head<0) {
        head+=len_202;
    }
    if(    tail<0) {
        tail+=len_202+1;
    }
    if(    head>tail) {
        __result132__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=string_reverse(((char*)(__right_value166=charp_substring(str,tail,head))))));
        /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result132__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_202) {
        tail=len_202;
    }
    if(    head==tail) {
        __result133__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string("")));
        /* U11 */__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    if(    tail-head+1<1) {
        __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=__builtin_string("")));
        /* U11 */__right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    result_203=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4753, "char"));
    memcpy(result_203,str+head,tail-head);
    result_203[tail-head]=0;
    __result135__ = gComeFunResultObject = __result_obj__ = result_203;
    /* U13 */result_203 = come_decrement_ref_count2(result_203, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value171 = (void*)0;
char* __result136__;
int len_204;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
char* __result137__;
void* __right_value174 = (void*)0;
char* __result138__;
void* __right_value175 = (void*)0;
char* __result139__;
void* __right_value176 = (void*)0;
char* result_205;
char* __result140__;
    if(    str==((void*)0)) {
        __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value171=__builtin_string("")));
        /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    len_204=strlen(str);
    if(    head<0) {
        head+=len_204;
    }
    if(    tail<0) {
        tail+=len_204+1;
    }
    if(    head>tail) {
        __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=string_reverse(((char*)(__right_value172=charp_substring(str,tail,head))))));
        /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_204) {
        tail=len_204;
    }
    if(    head==tail) {
        __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value174=__builtin_string("")));
        /* U11 */__right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    if(    tail-head+1<1) {
        __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value175=__builtin_string("")));
        /* U11 */__right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    result_205=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4796, "char"));
    memcpy(result_205,str+head,tail-head);
    result_205[tail-head]=0;
    __result140__ = gComeFunResultObject = __result_obj__ = result_205;
    /* U13 */result_205 = come_decrement_ref_count2(result_205, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
char* __result141__;
int len_206;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
char* __result142__;
void* __right_value180 = (void*)0;
char* __result143__;
void* __right_value181 = (void*)0;
char* __result144__;
void* __right_value182 = (void*)0;
char* result_207;
char* __result145__;
    if(    str==((void*)0)) {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value177=__builtin_string("")));
        /* U11 */__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    len_206=strlen(str);
    if(    head<0) {
        head+=len_206;
    }
    if(    tail<0) {
        tail+=len_206+1;
    }
    if(    head>tail) {
        __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=string_reverse(((char*)(__right_value178=charp_substring(str,tail,head))))));
        /* U11 */__right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_206) {
        tail=len_206;
    }
    if(    head==tail) {
        __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=__builtin_string("")));
        /* U11 */__right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    if(    tail-head+1<1) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value181=__builtin_string("")));
        /* U11 */__right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    result_207=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4839, "char"));
    memcpy(result_207,str+head,tail-head);
    result_207[tail-head]=0;
    __result145__ = gComeFunResultObject = __result_obj__ = result_207;
    /* U13 */result_207 = come_decrement_ref_count2(result_207, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
char* __result146__;
int len_208;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
char* __result147__;
void* __right_value186 = (void*)0;
char* __result148__;
void* __right_value187 = (void*)0;
char* __result149__;
void* __right_value188 = (void*)0;
char* result_209;
char* __result150__;
    if(    str==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value183=__builtin_string("")));
        /* U11 */__right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    len_208=strlen(str);
    if(    head<0) {
        head+=len_208;
    }
    if(    tail<0) {
        tail+=len_208+1;
    }
    if(    head>tail) {
        __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=string_reverse(((char*)(__right_value184=charp_substring(str,tail,head))))));
        /* U11 */__right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_208) {
        tail=len_208;
    }
    if(    head==tail) {
        __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string("")));
        /* U11 */__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    if(    tail-head+1<1) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value187=__builtin_string("")));
        /* U11 */__right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result_209=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4882, "char"));
    memcpy(result_209,str+head,tail-head);
    result_209[tail-head]=0;
    __result150__ = gComeFunResultObject = __result_obj__ = result_209;
    /* U13 */result_209 = come_decrement_ref_count2(result_209, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value189 = (void*)0;
char* __result151__;
va_list args_210;
char* result_211;
int len_212;
void* __right_value190 = (void*)0;
char* __result152__;
void* __right_value191 = (void*)0;
char* result2_213;
char* __result153__;
memset(&args_210, 0, sizeof(va_list));
result_211 = (void*)0;
    if(    msg==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value189=__builtin_string("")));
        /* U11 */__right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    __builtin_va_start(args_210,msg);
    len_212=vasprintf(&result_211,msg,args_210);
    __builtin_va_end(args_210);
    if(    len_212<0) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value190=__builtin_string("")));
        /* U11 */__right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    result2_213=(char*)come_increment_ref_count(__builtin_string(result_211));
    free(result_211);
    __result153__ = gComeFunResultObject = __result_obj__ = result2_213;
    /* U13 */result2_213 = come_decrement_ref_count2(result2_213, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
char* __result154__;
int len_214;
void* __right_value193 = (void*)0;
char* __result155__;
void* __right_value194 = (void*)0;
char* __result156__;
void* __right_value195 = (void*)0;
char* result_215;
char* __result157__;
    if(    str==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value192=__builtin_string("")));
        /* U11 */__right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    len_214=strlen(str);
    if(    strcmp(str,"")==0) {
        __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string(str)));
        /* U11 */__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    if(    head<0) {
        head+=len_214;
    }
    if(    tail<0) {
        tail+=len_214+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string(str)));
        /* U11 */__right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    if(    tail>=len_214) {
        tail=len_214;
    }
    result_215=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_214-(tail-head)+1)), "/usr/local/include/comelang.h", 4944, "char"));
    memcpy(result_215,str,head);
    memcpy(result_215+head,str+tail,len_214-tail);
    result_215[len_214-(tail-head)]=0;
    __result157__ = gComeFunResultObject = __result_obj__ = result_215;
    /* U13 */result_215 = come_decrement_ref_count2(result_215, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value196 = (void*)0;
char* __result158__;
int len_216;
void* __right_value197 = (void*)0;
char* __result159__;
void* __right_value198 = (void*)0;
char* __result160__;
void* __right_value199 = (void*)0;
char* sub_str_217;
void* __right_value200 = (void*)0;
char* __result161__;
    if(    str==((void*)0)) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value196=__builtin_string("")));
        /* U11 */__right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    len_216=strlen(str);
    if(    strcmp(str,"")==0) {
        __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=__builtin_string(str)));
        /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    if(    head<0) {
        head+=len_216;
    }
    if(    tail<0) {
        tail+=len_216+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=__builtin_string(str)));
        /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    if(    tail>=len_216) {
        tail=len_216;
    }
    sub_str_217=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    memcpy(str+head,sub_str_217,string_length(sub_str_217)+1);
    __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value200=__builtin_string(str)));
    /* U13 */sub_str_217 = come_decrement_ref_count2(sub_str_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct list$1charph* __result163__;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct list$1charph* result_220;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct buffer* str_221;
int i_222;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1charph* __result165__;
    if(    self==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value202=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 4996, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value202,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_220=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 4999, "list$1charph"))));
    str_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5001, "buffer"))));
    for(    i_222=0;    i_222<charp_length(self);    i_222++    ){
        if(        self[i_222]==c) {
            list$1charph_push_back(result_220,(char*)come_increment_ref_count(__builtin_string(str_221->buf)));
            buffer_reset(str_221);
        }
        else {
            buffer_append_char(str_221,self[i_222]);
        }
    }
    if(    buffer_length(str_221)!=0) {
        list$1charph_push_back(result_220,(char*)come_increment_ref_count(__builtin_string(str_221->buf)));
    }
    __result165__ = gComeFunResultObject = __result_obj__ = result_220;
    /*i*/come_call_finalizer3(result_220,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_218;
struct list_item$1charph* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        /*i*/come_call_finalizer3(prev_it_219,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1charph* litem_225;
char* __dec_obj31;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1135, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1145, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1155, "list_item$1charph"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        __dec_obj31=litem_225->item;
        litem_225->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct list$1charph* __result166__;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1charph* result_226;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct buffer* str_227;
int i_228;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1charph* __result167__;
    if(    self==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value213=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 5022, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value213,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    result_226=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 5025, "list$1charph"))));
    str_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5027, "buffer"))));
    for(    i_228=0;    i_228<charp_length(self);    i_228++    ){
        if(        self[i_228]==c) {
            list$1charph_push_back(result_226,(char*)come_increment_ref_count(__builtin_string(str_227->buf)));
            buffer_reset(str_227);
        }
        else {
            buffer_append_char(str_227,self[i_228]);
        }
    }
    if(    buffer_length(str_227)!=0) {
        list$1charph_push_back(result_226,(char*)come_increment_ref_count(__builtin_string(str_227->buf)));
    }
    __result167__ = gComeFunResultObject = __result_obj__ = result_226;
    /*i*/come_call_finalizer3(result_226,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_227,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_229;
void* __right_value223 = (void*)0;
char* result_230;
int n_231;
int i_232;
char c_233;
char* __result171__;
    len_229=charp_length(str);
    result_230=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_229*2+1)), "/usr/local/include/comelang.h", 5064, "char"));
    n_231=0;
    for(    i_232=0;    i_232<len_229;    i_232++    ){
        c_233=str[i_232];
        if(        (c_233>=0&&c_233<32)||c_233==127) {
            result_230[n_231++]=94;
            result_230[n_231++]=c_233+65-1;
        }
        else {
            result_230[n_231++]=c_233;
        }
    }
    result_230[n_231]=0;
    __result171__ = gComeFunResultObject = __result_obj__ = result_230;
    /* U13 */result_230 = come_decrement_ref_count2(result_230, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
char* __result173__;
char* p_234;
void* __right_value226 = (void*)0;
char* __result174__;
void* __right_value227 = (void*)0;
char* __result175__;
void* __right_value228 = (void*)0;
char* __result176__;
    if(    path==((void*)0)) {
        __result173__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=__builtin_string("")));
        /* U11 */__right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    p_234=path+strlen(path);
    while(p_234>=path) {
        if(        *p_234==47) {
            break;
        }
        else {
            p_234--;
        }
    }
    if(    p_234<path) {
        __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=__builtin_string(path)));
        /* U11 */__right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    else {
        __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string(p_234+1)));
        /* U11 */__right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    __result176__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value228=__builtin_string("")));
    /* U11 */__right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value229 = (void*)0;
char* __result177__;
void* __right_value230 = (void*)0;
char* path2_235;
char* p_236;
void* __right_value231 = (void*)0;
char* __result178__;
void* __right_value232 = (void*)0;
char* __result179__;
void* __right_value233 = (void*)0;
char* __result180__;
    if(    path==((void*)0)) {
        __result177__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value229=__builtin_string("")));
        /* U11 */__right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    path2_235=(char*)come_increment_ref_count(xbasename(path));
    p_236=path2_235+strlen(path2_235);
    while(p_236>=path2_235) {
        if(        *p_236==46) {
            break;
        }
        else {
            p_236--;
        }
    }
    if(    p_236<path2_235) {
        __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value231=__builtin_string(path2_235)));
        /* U13 */path2_235 = come_decrement_ref_count2(path2_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
    else {
        __result179__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value232=string_substring(path2_235,0,p_236-path2_235)));
        /* U13 */path2_235 = come_decrement_ref_count2(path2_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value233=__builtin_string("")));
    /* U13 */path2_235 = come_decrement_ref_count2(path2_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result181__;
char* p_237;
void* __right_value235 = (void*)0;
char* __result182__;
void* __right_value236 = (void*)0;
char* __result183__;
void* __right_value237 = (void*)0;
char* __result184__;
    if(    path==((void*)0)) {
        __result181__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=__builtin_string("")));
        /* U11 */__right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    p_237=path+strlen(path);
    while(p_237>=path) {
        if(        *p_237==46) {
            break;
        }
        else {
            p_237--;
        }
    }
    if(    p_237<path) {
        __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value235=__builtin_string(path)));
        /* U11 */__right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    else {
        __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value236=__builtin_string(p_237+1)));
        /* U11 */__right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
    __result184__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value237=__builtin_string("")));
    /* U11 */__right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
char* __result185__;
void* __right_value239 = (void*)0;
char* __result186__;
    if(    self) {
        __result185__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=__builtin_string("true")));
        /* U11 */__right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    else {
        __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=__builtin_string("false")));
        /* U11 */__right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
char* __result187__;
    __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value240=xsprintf("%c",self)));
    /* U11 */__right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
char* __result188__;
    __result188__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value241=xsprintf("%d",self)));
    /* U11 */__right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
char* __result189__;
    __result189__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value242=xsprintf("%d",self)));
    /* U11 */__right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
char* __result190__;
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value243=xsprintf("%ld",self)));
    /* U11 */__right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
char* __result191__;
    __result191__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=xsprintf("%ld",self)));
    /* U11 */__right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* __result192__;
    __result192__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value245=xsprintf("%f",self)));
    /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
char* __result193__;
    __result193__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=xsprintf("%lf",self)));
    /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result194__;
void* __right_value248 = (void*)0;
char* __result195__;
    if(    self==((void*)0)) {
        __result194__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("")));
        /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    __result195__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string(self)));
    /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
char* __result196__;
void* __right_value250 = (void*)0;
char* __result197__;
    if(    self==((void*)0)) {
        __result196__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value249=__builtin_string("")));
        /* U11 */__right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result196__;
    }
    __result197__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string(self)));
    /* U11 */__right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

int bool_compare(_Bool left, _Bool right){
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
void* __right_value251 = (void*)0;
char* __result198__;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_238;
int size_240;
void* __right_value254 = (void*)0;
char* __result199__;
    if(    f==((void*)0)) {
        __result198__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("")));
        /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    buf_238=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5401, "buffer"))));
    while(1) {
        char buf2_239[1024];
        memset(&buf2_239, 0, sizeof(char)        *(1024)        );
        size_240=fread(buf2_239,1,1024,f);
        buffer_append(buf_238,buf2_239,size_240);
        if(        size_240<1024) {
            break;
        }
    }
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=buffer_to_string(buf_238)));
    /*i*/come_call_finalizer3(buf_238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

int FILE_write(struct __sFILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f){
int result_241;
    if(    f==((void*)0)) {
        return -1;
    }
    result_241=fclose(f);
    if(    result_241<0) {
        return result_241;
    }
    return result_241;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct __sFILE* __result200__;
va_list args_243;
int result_244;
struct __sFILE* __result201__;
struct __sFILE* __result202__;
memset(&args_243, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result200__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    char msg2_242[1024*2*2*2];
    memset(&msg2_242, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_243,msg);
    vsnprintf(msg2_242,1024*2*2*2,msg,args_243);
    __builtin_va_end(args_243);
    result_244=fprintf(f,"%s",msg2_242);
    if(    result_244<0) {
        __result201__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    __result202__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

int string_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_245;
int result_246;
int result2_247;
f_245 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_245=fopen(file_name,"a");
    }
    else {
        f_245=fopen(file_name,"w");
    }
    if(    f_245==((void*)0)) {
        return -1;
    }
    result_246=fwrite(self,strlen(self),1,f_245);
    if(    result_246<0) {
        return result_246;
    }
    result2_247=fclose(f_245);
    if(    result2_247<0) {
        return result2_247;
    }
    return result_246;
}

int charp_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_248;
int result_249;
int result2_250;
f_248 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_248=fopen(file_name,"a");
    }
    else {
        f_248=fopen(file_name,"w");
    }
    if(    f_248==((void*)0)) {
        return -1;
    }
    result_249=fwrite(self,strlen(self),1,f_248);
    if(    result_249<0) {
        return result_249;
    }
    result2_250=fclose(f_248);
    if(    result2_250<0) {
        return result2_250;
    }
    return result_249;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
char* __result203__;
struct __sFILE* f_251;
void* __right_value256 = (void*)0;
char* __result204__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct buffer* buf_252;
int size_254;
void* __right_value259 = (void*)0;
char* result_255;
int result2_256;
void* __right_value260 = (void*)0;
char* __result205__;
char* __result206__;
    if(    file_name==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value255=__builtin_string("")));
        /* U11 */__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    f_251=fopen(file_name,"r");
    if(    f_251==((void*)0)) {
        __result204__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=__builtin_string("")));
        /* U11 */__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    buf_252=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5541, "buffer"))));
    while(1) {
        char buf2_253[1024];
        memset(&buf2_253, 0, sizeof(char)        *(1024)        );
        size_254=fread(buf2_253,1,1024,f_251);
        buffer_append(buf_252,buf2_253,size_254);
        if(        size_254<1024) {
            break;
        }
    }
    result_255=(char*)come_increment_ref_count(buffer_to_string(buf_252));
    result2_256=fclose(f_251);
    if(    result2_256<0) {
        __result205__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_252,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_255 = come_decrement_ref_count2(result_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_255;
    /*i*/come_call_finalizer3(buf_252,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_255 = come_decrement_ref_count2(result_255, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
char* __result207__;
struct __sFILE* f_257;
void* __right_value262 = (void*)0;
char* __result208__;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct buffer* buf_258;
int size_260;
void* __right_value265 = (void*)0;
char* result_261;
int result2_262;
void* __right_value266 = (void*)0;
char* __result209__;
char* __result210__;
    if(    file_name==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string("")));
        /* U11 */__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    f_257=fopen(file_name,"r");
    if(    f_257==((void*)0)) {
        __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value262=__builtin_string("")));
        /* U11 */__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    buf_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5578, "buffer"))));
    while(1) {
        char buf2_259[1024];
        memset(&buf2_259, 0, sizeof(char)        *(1024)        );
        size_260=fread(buf2_259,1,1024,f_257);
        buffer_append(buf_258,buf2_259,size_260);
        if(        size_260<1024) {
            break;
        }
    }
    result_261=(char*)come_increment_ref_count(buffer_to_string(buf_258));
    result2_262=fclose(f_257);
    if(    result2_262<0) {
        __result209__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value266=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_258,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_261;
    /*i*/come_call_finalizer3(buf_258,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1charph* result_263;
struct list$1charph* __result211__;
void* __right_value269 = (void*)0;
struct list$1charph* __result212__;
    result_263=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 5605, "list$1charph"))));
    if(    f==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = result_263;
        /*i*/come_call_finalizer3(result_263,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    while(1) {
        char buf_264[1024];
        memset(&buf_264, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_264,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_263,(char*)come_increment_ref_count(__builtin_string(buf_264)));
    }
    __result212__ = gComeFunResultObject = __result_obj__ = result_263;
    /*i*/come_call_finalizer3(result_263,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
struct __sFILE* f_265;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_265=fopen(path,mode);
    if(    f_265) {
        block(parent,f_265);
        fclose(f_265);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
char* __result213__;
void* __right_value271 = (void*)0;
char* __result214__;
    if(    self==((void*)0)) {
        __result213__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value270=__builtin_string("")));
        /* U11 */__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    puts(self);
    __result214__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value271=__builtin_string(self)));
    /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
char* __result215__;
void* __right_value273 = (void*)0;
char* __result216__;
    if(    self==((void*)0)) {
        __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value272=__builtin_string("")));
        /* U11 */__right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    printf("%s",self);
    __result216__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value273=__builtin_string(self)));
    /* U11 */__right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
char* __result217__;
char* msg2_266;
va_list args_267;
void* __right_value275 = (void*)0;
char* __result218__;
msg2_266 = (void*)0;
memset(&args_267, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value274=__builtin_string("")));
        /* U11 */__right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    __builtin_va_start(args_267,self);
    vasprintf(&msg2_266,self,args_267);
    __builtin_va_end(args_267);
    printf("%s",msg2_266);
    free(msg2_266);
    __result218__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value275=__builtin_string(self)));
    /* U11 */__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
char* __result219__;
char* msg2_268;
va_list args_269;
void* __right_value277 = (void*)0;
char* __result220__;
msg2_268 = (void*)0;
memset(&args_269, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result219__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value276=__builtin_string("")));
        /* U11 */__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    __builtin_va_start(args_269,self);
    vasprintf(&msg2_268,self,args_269);
    __builtin_va_end(args_269);
    printf("%s",msg2_268);
    free(msg2_268);
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value277=__builtin_string(self)));
    /* U11 */__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
char* __result221__;
void* __right_value279 = (void*)0;
char* __result222__;
    if(    self==((void*)0)) {
        __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value278=__builtin_string("")));
        /* U11 */__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    puts(self);
    __result222__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value279=__builtin_string(self)));
    /* U11 */__right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_270;
    for(    i_270=0;    i_270<self;    i_270++    ){
        block(parent,i_270);
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

int main(int argc, char** argv){
void* __right_value307 = (void*)0;
char* input_291;
char* cookie_292;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
int __result249__;
    come_heap_init(0, 0, 0);
    input_291=(char*)come_increment_ref_count(FILE_read(__stdinp));
    cookie_292=getenv("HTTP_COOKIE");
    char username_293[1024];
    memset(&username_293, 0, sizeof(char)    *(1024)    );
    if(    cookie_292) {
        sscanf(cookie_292,"Cookie: username=%s",username_293);
    }
    puts(((char*)(__right_value309=xsprintf("<!DOCTYPE html>\n<html lang=\"ja\">\n<head>\n    <meta charset=\"UTF-8\">\n    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0,maximum-scale=1, user-scalable=no\">\n    <title>メインページ</title>\n    <style>\n        a {\n            touch-action: manipulation;\n            text-decoration: none;\n            color: blue;\n        }\n    </style>\n</head>\n<body>\n<p>シバ犬物語</p>\n\n<p>ようこそ、\%sさん。</p>\n\n<img src=\"/cgi-bin/images/title.jpeg\" alt=\"title\" style=\"width: 30%%; height: 30%%;\">\n\n<p>メニュー</p>\n\n<a href=\"/cgi-bin/food.cgi\" rel=\"nofollow\">エサをやる</a>\n<a href=\"/cgi-bin/walking.cgi\" rel=\"nofollow\">散歩に行く</a>\n<a href=\"/cgi-bin/ball.cgi\" rel=\"nofollow\">ボールで遊ぶ</a>\n<a href=\"/cgi-bin/pet.cgi\" rel=\"nofollow\">撫でる</a>\n\n\n</body>\n</html>\n",((char*)(__right_value308=charp_to_string(username_293)))))));
    /* U11 */__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result249__ = 0;
    /* U13 */input_291 = come_decrement_ref_count2(input_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result249__;
}

