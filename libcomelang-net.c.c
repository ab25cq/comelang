/// previous struct definition ///
struct __sFILEX;

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

struct Vio;

struct MYSQL;

struct MEM_ROOT;

struct st_mysql_options_extention;

struct MYSQL_METHODS;

struct MYSQL_STMT;

struct MYSQL_STMT_EXT;

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

struct timespec
{
    long tv_sec;
    long tv_nsec;
};

typedef long time_t;

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

typedef unsigned long  int clock_t;

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

union anonymous_typeZ8
{
unsigned char __u6_addr8[16];
unsigned short int __u6_addr16[8];
unsigned int __u6_addr32[4];
};

union anonymous_typeZ9
{
unsigned char __u6_addr8[16];
unsigned short int __u6_addr16[8];
unsigned int __u6_addr32[4];
};

struct in6_addr
{
    union anonymous_typeZ9 __u6_addr;
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

struct anonymous_typeX10
{
    long  int quot;
    long  int rem;
};

typedef struct anonymous_typeX10 imaxdiv_t;

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
enum anonymous_typeY11 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY11 clockid_t;

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

struct anonymous_typeX12
{
    int dummy;
};

typedef struct anonymous_typeX12 CRYPTO_dynlock;

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

typedef unsigned int mach_port_t;

typedef int (*pthread_jit_write_callback_t)(void*);

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

union anonymous_typeZ13
{
int fd;
void* custom;
unsigned long  int custom_ui;
struct ssl_st* ssl;
};

union anonymous_typeZ14
{
int fd;
void* custom;
unsigned long  int custom_ui;
struct ssl_st* ssl;
};

struct bio_poll_descriptor_st
{
    unsigned int type;
    union anonymous_typeZ14 value;
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

union anonymous_typeZ15
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

union anonymous_typeZ16
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
    union anonymous_typeZ16 value;
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

struct anonymous_typeX17
{
    unsigned char* out;
    const unsigned char* inp;
    unsigned long  int len;
    unsigned int interleave;
};

typedef struct anonymous_typeX17 EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;

struct evp_cipher_info_st
{
    const struct evp_cipher_st* cipher;
    unsigned char iv[16];
};

typedef struct evp_cipher_info_st EVP_CIPHER_INFO;

typedef int (*EVP_PBE_KEYGEN)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int);

typedef int (*EVP_PBE_KEYGEN_EX)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int,struct ossl_lib_ctx_st*,const char*);

typedef int (*EVP_PKEY_gen_cb)(struct evp_pkey_ctx_st*);

enum anonymous_typeY18 { POINT_CONVERSION_COMPRESSED=(2),
POINT_CONVERSION_UNCOMPRESSED=(4),
POINT_CONVERSION_HYBRID=(6)
};

typedef enum anonymous_typeY18 point_conversion_form_t;

typedef struct ec_method_st EC_METHOD;

typedef struct ec_group_st EC_GROUP;

typedef struct ec_point_st EC_POINT;

typedef struct ecpk_parameters_st ECPKPARAMETERS;

typedef struct ec_parameters_st ECPARAMETERS;

struct anonymous_typeX19
{
    int nid;
    const char* comment;
};

typedef struct anonymous_typeX19 EC_builtin_curve;

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

union anonymous_typeZ20
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

union anonymous_typeZ21
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

struct SHA512state_st
{
    unsigned long  long h[8];
    unsigned long  long Nl;
    unsigned long  long Nh;
    union anonymous_typeZ21 u;
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

struct anonymous_typeX22
{
    struct X509_algor_st* keyDerivationFunc;
    struct X509_algor_st* messageAuthScheme;
};

typedef struct anonymous_typeX22 PBMAC1PARAM;

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

enum anonymous_typeY23 { X509_LU_NONE=(0),
X509_LU_X509
,X509_LU_CRL
};

typedef enum anonymous_typeY23 X509_LOOKUP_TYPE;

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

typedef int (*X509_LOOKUP_get_by_subject_fn)(struct x509_lookup_st*,enum anonymous_typeY23,const struct X509_name_st*,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_subject_ex_fn)(struct x509_lookup_st*,enum anonymous_typeY23,const struct X509_name_st*,struct x509_object_st*,struct ossl_lib_ctx_st*,const char*);

typedef int (*X509_LOOKUP_get_by_issuer_serial_fn)(struct x509_lookup_st*,enum anonymous_typeY23,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_fingerprint_fn)(struct x509_lookup_st*,enum anonymous_typeY23,const unsigned char*,int,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_alias_fn)(struct x509_lookup_st*,enum anonymous_typeY23,const char*,int,struct x509_object_st*);

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

union anonymous_typeZ24
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

union anonymous_typeZ25
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
    union anonymous_typeZ25 d;
    struct PKCS7_CTX_st ctx;
};

typedef struct pkcs7_st PKCS7;

typedef int (*sk_PKCS7_compfunc)(const struct pkcs7_st**,const struct pkcs7_st**);

typedef void (*sk_PKCS7_freefunc)(struct pkcs7_st*);

typedef struct pkcs7_st* (*sk_PKCS7_copyfunc)(const struct pkcs7_st*);

struct anonymous_typeX26
{
    char* section;
    char* name;
    char* value;
};

typedef struct anonymous_typeX26 CONF_VALUE;

typedef int (*sk_CONF_VALUE_compfunc)(const struct anonymous_typeX26**,const struct anonymous_typeX26**);

typedef void (*sk_CONF_VALUE_freefunc)(struct anonymous_typeX26*);

typedef struct anonymous_typeX26* (*sk_CONF_VALUE_copyfunc)(const struct anonymous_typeX26*);

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

typedef int (*lh_CONF_VALUE_compfunc)(const struct anonymous_typeX26*,const struct anonymous_typeX26*);

typedef unsigned long  int (*lh_CONF_VALUE_hashfunc)(const struct anonymous_typeX26*);

typedef void (*lh_CONF_VALUE_doallfunc)(struct anonymous_typeX26*);

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

enum anonymous_typeY27 { CT_LOG_ENTRY_TYPE_NOT_SET=(-1),
CT_LOG_ENTRY_TYPE_X509=(0),
CT_LOG_ENTRY_TYPE_PRECERT=(1)
};

typedef enum anonymous_typeY27 ct_log_entry_type_t;

enum anonymous_typeY28 { SCT_VERSION_NOT_SET=(-1),
SCT_VERSION_V1=(0)
};

typedef enum anonymous_typeY28 sct_version_t;

enum anonymous_typeY29 { SCT_SOURCE_UNKNOWN
,SCT_SOURCE_TLS_EXTENSION
,SCT_SOURCE_X509V3_EXTENSION
,SCT_SOURCE_OCSP_STAPLED_RESPONSE
};

typedef enum anonymous_typeY29 sct_source_t;

enum anonymous_typeY30 { SCT_VALIDATION_STATUS_NOT_SET
,SCT_VALIDATION_STATUS_UNKNOWN_LOG
,SCT_VALIDATION_STATUS_VALID
,SCT_VALIDATION_STATUS_INVALID
,SCT_VALIDATION_STATUS_UNVERIFIED
,SCT_VALIDATION_STATUS_UNKNOWN_VERSION
};

typedef enum anonymous_typeY30 sct_validation_status_t;

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

enum anonymous_typeY31 { TLS_ST_BEFORE
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

typedef enum anonymous_typeY31 OSSL_HANDSHAKE_STATE;

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

typedef unsigned long  long my_ulonglong;

typedef int my_socket;

enum enum_field_types { MYSQL_TYPE_DECIMAL
,MYSQL_TYPE_TINY
,MYSQL_TYPE_SHORT
,MYSQL_TYPE_LONG
,MYSQL_TYPE_FLOAT
,MYSQL_TYPE_DOUBLE
,MYSQL_TYPE_NULL
,MYSQL_TYPE_TIMESTAMP
,MYSQL_TYPE_LONGLONG
,MYSQL_TYPE_INT24
,MYSQL_TYPE_DATE
,MYSQL_TYPE_TIME
,MYSQL_TYPE_DATETIME
,MYSQL_TYPE_YEAR
,MYSQL_TYPE_NEWDATE
,MYSQL_TYPE_VARCHAR
,MYSQL_TYPE_BIT
,MYSQL_TYPE_TIMESTAMP2
,MYSQL_TYPE_DATETIME2
,MYSQL_TYPE_TIME2
,MYSQL_TYPE_TYPED_ARRAY
,MYSQL_TYPE_VECTOR=(242),
MYSQL_TYPE_INVALID=(243),
MYSQL_TYPE_BOOL=(244),
MYSQL_TYPE_JSON=(245),
MYSQL_TYPE_NEWDECIMAL=(246),
MYSQL_TYPE_ENUM=(247),
MYSQL_TYPE_SET=(248),
MYSQL_TYPE_TINY_BLOB=(249),
MYSQL_TYPE_MEDIUM_BLOB=(250),
MYSQL_TYPE_LONG_BLOB=(251),
MYSQL_TYPE_BLOB=(252),
MYSQL_TYPE_VAR_STRING=(253),
MYSQL_TYPE_STRING=(254),
MYSQL_TYPE_GEOMETRY=(255)
};

typedef enum enum_field_types enum_field_types;

struct LIST
{
    struct LIST* prev;
    struct LIST* next;
    void* data;
};

typedef struct LIST LIST;

typedef int (*list_walk_action)(void*,void*);

enum enum_server_command { COM_SLEEP
,COM_QUIT
,COM_INIT_DB
,COM_QUERY
,COM_FIELD_LIST
,COM_CREATE_DB
,COM_DROP_DB
,COM_UNUSED_2
,COM_UNUSED_1
,COM_STATISTICS
,COM_UNUSED_4
,COM_CONNECT
,COM_UNUSED_5
,COM_DEBUG
,COM_PING
,COM_TIME
,COM_DELAYED_INSERT
,COM_CHANGE_USER
,COM_BINLOG_DUMP
,COM_TABLE_DUMP
,COM_CONNECT_OUT
,COM_REGISTER_SLAVE
,COM_STMT_PREPARE
,COM_STMT_EXECUTE
,COM_STMT_SEND_LONG_DATA
,COM_STMT_CLOSE
,COM_STMT_RESET
,COM_SET_OPTION
,COM_STMT_FETCH
,COM_DAEMON
,COM_BINLOG_DUMP_GTID
,COM_RESET_CONNECTION
,COM_CLONE
,COM_SUBSCRIBE_GROUP_REPLICATION_STREAM
,COM_END
};

enum enum_compression_algorithm { MYSQL_UNCOMPRESSED=(1),
MYSQL_ZLIB
,MYSQL_ZSTD
,MYSQL_INVALID
};

struct mysql_zlib_compress_context
{
    unsigned int compression_level;
};

typedef struct mysql_zlib_compress_context mysql_zlib_compress_context;

typedef struct ZSTD_CCtx_s ZSTD_CCtx;

typedef struct ZSTD_DCtx_s ZSTD_DCtx;

struct mysql_zstd_compress_context
{
    struct ZSTD_CCtx_s* cctx;
    struct ZSTD_DCtx_s* dctx;
    unsigned int compression_level;
};

typedef struct mysql_zstd_compress_context mysql_zstd_compress_context;

union anonymous_typeZ32
{
struct mysql_zlib_compress_context zlib_ctx;
struct mysql_zstd_compress_context zstd_ctx;
};

union anonymous_typeZ33
{
struct mysql_zlib_compress_context zlib_ctx;
struct mysql_zstd_compress_context zstd_ctx;
};

struct mysql_compress_context
{
    enum enum_compression_algorithm algorithm;
    union anonymous_typeZ33 u;
};

typedef struct mysql_compress_context mysql_compress_context;

enum SERVER_STATUS_flags_enum { SERVER_STATUS_IN_TRANS=(1),
SERVER_STATUS_AUTOCOMMIT=(2),
SERVER_MORE_RESULTS_EXISTS=(8),
SERVER_QUERY_NO_GOOD_INDEX_USED=(16),
SERVER_QUERY_NO_INDEX_USED=(32),
SERVER_STATUS_CURSOR_EXISTS=(64),
SERVER_STATUS_LAST_ROW_SENT=(128),
SERVER_STATUS_DB_DROPPED=(256),
SERVER_STATUS_NO_BACKSLASH_ESCAPES=(512),
SERVER_STATUS_METADATA_CHANGED=(1024),
SERVER_QUERY_WAS_SLOW=(2048),
SERVER_PS_OUT_PARAMS=(4096),
SERVER_STATUS_IN_TRANS_READONLY=(8192),
SERVER_SESSION_STATE_CHANGED=((1<<14))
};

struct NET
{
    struct Vio* vio;
    unsigned char* buff;
    unsigned char* buff_end;
    unsigned char* write_pos;
    unsigned char* read_pos;
    int fd;
    unsigned long  int remain_in_buf;
    unsigned long  int length;
    unsigned long  int buf_length;
    unsigned long  int where_b;
    unsigned long  int max_packet;
    unsigned long  int max_packet_size;
    unsigned int pkt_nr;
    unsigned int compress_pkt_nr;
    unsigned int write_timeout;
    unsigned int read_timeout;
    unsigned int retry_count;
    int fcntl;
    unsigned int* return_status;
    unsigned char reading_or_writing;
    unsigned char save_char;
    _Bool compress;
    unsigned int last_errno;
    unsigned char error;
    char last_error[512];
    char sqlstate[5+1];
    void* extension;
};

typedef struct NET NET;

enum mysql_enum_shutdown_level { SHUTDOWN_DEFAULT=(0),
SHUTDOWN_WAIT_CONNECTIONS=((unsigned char)(1<<0)),
SHUTDOWN_WAIT_TRANSACTIONS=((unsigned char)(1<<1)),
SHUTDOWN_WAIT_UPDATES=((unsigned char)(1<<3)),
SHUTDOWN_WAIT_ALL_BUFFERS=(((unsigned char)(1<<3)<<1)),
SHUTDOWN_WAIT_CRITICAL_BUFFERS=(((unsigned char)(1<<3)<<1)+1),
KILL_QUERY=(254),
KILL_CONNECTION=(255)
};

enum enum_resultset_metadata { RESULTSET_METADATA_NONE=(0),
RESULTSET_METADATA_FULL=(1)
};

enum enum_cursor_type { CURSOR_TYPE_NO_CURSOR=(0),
CURSOR_TYPE_READ_ONLY=(1),
CURSOR_TYPE_FOR_UPDATE=(2),
CURSOR_TYPE_SCROLLABLE=(4),
PARAMETER_COUNT_AVAILABLE=(8)
};

enum enum_mysql_set_option { MYSQL_OPTION_MULTI_STATEMENTS_ON
,MYSQL_OPTION_MULTI_STATEMENTS_OFF
};

enum enum_session_state_type { SESSION_TRACK_SYSTEM_VARIABLES
,SESSION_TRACK_SCHEMA
,SESSION_TRACK_STATE_CHANGE
,SESSION_TRACK_GTIDS
,SESSION_TRACK_TRANSACTION_CHARACTERISTICS
,SESSION_TRACK_TRANSACTION_STATE
};

struct rand_struct
{
    unsigned long  int seed1;
    unsigned long  int seed2;
    unsigned long  int max_value;
    double max_value_dbl;
};

enum Item_result { INVALID_RESULT=(-1),
STRING_RESULT=(0),
REAL_RESULT
,INT_RESULT
,ROW_RESULT
,DECIMAL_RESULT
};

struct UDF_ARGS
{
    unsigned int arg_count;
    enum Item_result* arg_type;
    char** args;
    unsigned long  int* lengths;
    char* maybe_null;
    char** attributes;
    unsigned long  int* attribute_lengths;
    void* extension;
};

typedef struct UDF_ARGS UDF_ARGS;

struct UDF_INIT
{
    _Bool maybe_null;
    unsigned int decimals;
    unsigned long  int max_length;
    char* ptr;
    _Bool const_item;
    void* extension;
};

typedef struct UDF_INIT UDF_INIT;

enum Item_udftype { UDFTYPE_FUNCTION=(1),
UDFTYPE_AGGREGATE
};

typedef void (*Udf_func_clear)(struct UDF_INIT*,unsigned char*,unsigned char*);

typedef void (*Udf_func_add)(struct UDF_INIT*,struct UDF_ARGS*,unsigned char*,unsigned char*);

typedef void (*Udf_func_deinit)(struct UDF_INIT*);

typedef _Bool (*Udf_func_init)(struct UDF_INIT*,struct UDF_ARGS*,char*);

typedef void (*Udf_func_any)();

typedef double (*Udf_func_double)(struct UDF_INIT*,struct UDF_ARGS*,unsigned char*,unsigned char*);

typedef long  long (*Udf_func_longlong)(struct UDF_INIT*,struct UDF_ARGS*,unsigned char*,unsigned char*);

typedef char* (*Udf_func_string)(struct UDF_INIT*,struct UDF_ARGS*,char*,unsigned long  int*,unsigned char*,unsigned char*);

enum connect_stage { CONNECT_STAGE_INVALID=(0),
CONNECT_STAGE_NOT_STARTED
,CONNECT_STAGE_NET_BEGIN_CONNECT
,CONNECT_STAGE_NET_WAIT_CONNECT
,CONNECT_STAGE_NET_COMPLETE_CONNECT
,CONNECT_STAGE_READ_GREETING
,CONNECT_STAGE_PARSE_HANDSHAKE
,CONNECT_STAGE_ESTABLISH_SSL
,CONNECT_STAGE_AUTHENTICATE
,CONNECT_STAGE_AUTH_BEGIN
,CONNECT_STAGE_AUTH_RUN_FIRST_AUTHENTICATE_USER
,CONNECT_STAGE_AUTH_HANDLE_FIRST_AUTHENTICATE_USER
,CONNECT_STAGE_AUTH_READ_CHANGE_USER_RESULT
,CONNECT_STAGE_AUTH_HANDLE_CHANGE_USER_REQUEST
,CONNECT_STAGE_AUTH_RUN_SECOND_AUTHENTICATE_USER
,CONNECT_STAGE_AUTH_INIT_MULTI_AUTH
,CONNECT_STAGE_AUTH_FINISH_AUTH
,CONNECT_STAGE_AUTH_HANDLE_SECOND_AUTHENTICATE_USER
,CONNECT_STAGE_AUTH_DO_MULTI_PLUGIN_AUTH
,CONNECT_STAGE_AUTH_HANDLE_MULTI_AUTH_RESPONSE
,CONNECT_STAGE_PREP_SELECT_DATABASE
,CONNECT_STAGE_PREP_INIT_COMMANDS
,CONNECT_STAGE_SEND_ONE_INIT_COMMAND
,CONNECT_STAGE_COMPLETE
};

struct st_mysql_client_plugin
{
    int type;
    unsigned int interface_version;
    const char* name;
    const char* author;
    const char* desc;
    unsigned int version[3];
    const char* license;
    void* mysql_api;
    int (*init)(char*,unsigned long  int,int,va_list);
    int (*deinit)();
    int (*options)(const char*,const void*);
    int (*get_options)(const char*,void*);
};

enum anonymous_typeY35 { MYSQL_VIO_INVALID
,MYSQL_VIO_TCP
,MYSQL_VIO_SOCKET
,MYSQL_VIO_PIPE
,MYSQL_VIO_MEMORY
};

struct MYSQL_PLUGIN_VIO_INFO
{
    enum anonymous_typeY35 protocol;
    int socket;
    _Bool is_tls_established;
};

enum net_async_status { NET_ASYNC_COMPLETE=(0),
NET_ASYNC_NOT_READY
,NET_ASYNC_ERROR
,NET_ASYNC_COMPLETE_NO_MORE_RESULTS
};

struct MYSQL_PLUGIN_VIO
{
    int (*read_packet)(struct MYSQL_PLUGIN_VIO*,unsigned char**);
    int (*write_packet)(struct MYSQL_PLUGIN_VIO*,const unsigned char*,int);
    void (*info)(struct MYSQL_PLUGIN_VIO*,struct MYSQL_PLUGIN_VIO_INFO*);
    enum net_async_status (*read_packet_nonblocking)(struct MYSQL_PLUGIN_VIO*,unsigned char**,int*);
    enum net_async_status (*write_packet_nonblocking)(struct MYSQL_PLUGIN_VIO*,const unsigned char*,int,int*);
};

typedef struct MYSQL_PLUGIN_VIO MYSQL_PLUGIN_VIO;

struct auth_plugin_t
{
    int type;
    unsigned int interface_version;
    const char* name;
    const char* author;
    const char* desc;
    unsigned int version[3];
    const char* license;
    void* mysql_api;
    int (*init)(char*,unsigned long  int,int,va_list);
    int (*deinit)();
    int (*options)(const char*,const void*);
    int (*get_options)(const char*,void*);
    int (*authenticate_user)(struct MYSQL_PLUGIN_VIO*,struct MYSQL*);
    enum net_async_status (*authenticate_user_nonblocking)(struct MYSQL_PLUGIN_VIO*,struct MYSQL*,int*);
};

typedef struct auth_plugin_t st_mysql_client_plugin_AUTHENTICATION;

enum enum_mysql_timestamp_type { MYSQL_TIMESTAMP_NONE=(-2),
MYSQL_TIMESTAMP_ERROR=(-1),
MYSQL_TIMESTAMP_DATE=(0),
MYSQL_TIMESTAMP_DATETIME=(1),
MYSQL_TIMESTAMP_TIME=(2),
MYSQL_TIMESTAMP_DATETIME_TZ=(3)
};

struct MYSQL_TIME
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned long  int second_part;
    _Bool neg;
    enum enum_mysql_timestamp_type time_type;
    int time_zone_displacement;
};

typedef struct MYSQL_TIME MYSQL_TIME;

extern const char* client_errors[];
extern unsigned int mysql_port;
extern char* mysql_unix_port;
struct MYSQL_FIELD
{
    char* name;
    char* org_name;
    char* table;
    char* org_table;
    char* db;
    char* catalog;
    char* def;
    unsigned long  int length;
    unsigned long  int max_length;
    unsigned int name_length;
    unsigned int org_name_length;
    unsigned int table_length;
    unsigned int org_table_length;
    unsigned int db_length;
    unsigned int catalog_length;
    unsigned int def_length;
    unsigned int flags;
    unsigned int decimals;
    unsigned int charsetnr;
    enum enum_field_types type;
    void* extension;
};

typedef struct MYSQL_FIELD MYSQL_FIELD;

typedef char** MYSQL_ROW;

typedef unsigned int MYSQL_FIELD_OFFSET;

struct MYSQL_ROWS
{
    struct MYSQL_ROWS* next;
    char** data;
    unsigned long  int length;
};

typedef struct MYSQL_ROWS MYSQL_ROWS;

typedef struct MYSQL_ROWS* MYSQL_ROW_OFFSET;

struct MYSQL_DATA
{
    struct MYSQL_ROWS* data;
    struct MEM_ROOT* alloc;
    unsigned long  long rows;
    unsigned int fields;
};

typedef struct MYSQL_DATA MYSQL_DATA;

enum mysql_option { MYSQL_OPT_CONNECT_TIMEOUT
,MYSQL_OPT_COMPRESS
,MYSQL_OPT_NAMED_PIPE
,MYSQL_INIT_COMMAND
,MYSQL_READ_DEFAULT_FILE
,MYSQL_READ_DEFAULT_GROUP
,MYSQL_SET_CHARSET_DIR
,MYSQL_SET_CHARSET_NAME
,MYSQL_OPT_LOCAL_INFILE
,MYSQL_OPT_PROTOCOL
,MYSQL_SHARED_MEMORY_BASE_NAME
,MYSQL_OPT_READ_TIMEOUT
,MYSQL_OPT_WRITE_TIMEOUT
,MYSQL_OPT_USE_RESULT
,MYSQL_REPORT_DATA_TRUNCATION
,MYSQL_OPT_RECONNECT
,MYSQL_PLUGIN_DIR
,MYSQL_DEFAULT_AUTH
,MYSQL_OPT_BIND
,MYSQL_OPT_SSL_KEY
,MYSQL_OPT_SSL_CERT
,MYSQL_OPT_SSL_CA
,MYSQL_OPT_SSL_CAPATH
,MYSQL_OPT_SSL_CIPHER
,MYSQL_OPT_SSL_CRL
,MYSQL_OPT_SSL_CRLPATH
,MYSQL_OPT_CONNECT_ATTR_RESET
,MYSQL_OPT_CONNECT_ATTR_ADD
,MYSQL_OPT_CONNECT_ATTR_DELETE
,MYSQL_SERVER_PUBLIC_KEY
,MYSQL_ENABLE_CLEARTEXT_PLUGIN
,MYSQL_OPT_CAN_HANDLE_EXPIRED_PASSWORDS
,MYSQL_OPT_MAX_ALLOWED_PACKET
,MYSQL_OPT_NET_BUFFER_LENGTH
,MYSQL_OPT_TLS_VERSION
,MYSQL_OPT_SSL_MODE
,MYSQL_OPT_GET_SERVER_PUBLIC_KEY
,MYSQL_OPT_RETRY_COUNT
,MYSQL_OPT_OPTIONAL_RESULTSET_METADATA
,MYSQL_OPT_SSL_FIPS_MODE
,MYSQL_OPT_TLS_CIPHERSUITES
,MYSQL_OPT_COMPRESSION_ALGORITHMS
,MYSQL_OPT_ZSTD_COMPRESSION_LEVEL
,MYSQL_OPT_LOAD_DATA_LOCAL_DIR
,MYSQL_OPT_USER_PASSWORD
,MYSQL_OPT_SSL_SESSION_DATA
,MYSQL_OPT_TLS_SNI_SERVERNAME
};

struct st_mysql_options
{
    unsigned int connect_timeout;
    unsigned int read_timeout;
    unsigned int write_timeout;
    unsigned int port;
    unsigned int protocol;
    unsigned long  int client_flag;
    char* host;
    char* user;
    char* password;
    char* unix_socket;
    char* db;
    struct Init_commands_array* init_commands;
    char* my_cnf_file;
    char* my_cnf_group;
    char* charset_dir;
    char* charset_name;
    char* ssl_key;
    char* ssl_cert;
    char* ssl_ca;
    char* ssl_capath;
    char* ssl_cipher;
    char* shared_memory_base_name;
    unsigned long  int max_allowed_packet;
    _Bool compress;
    _Bool named_pipe;
    char* bind_address;
    _Bool report_data_truncation;
    int (*local_infile_init)(void**,const char*,void*);
    int (*local_infile_read)(void*,char*,unsigned int);
    void (*local_infile_end)(void*);
    int (*local_infile_error)(void*,char*,unsigned int);
    void* local_infile_userdata;
    struct st_mysql_options_extention* extension;
};

enum mysql_status { MYSQL_STATUS_READY
,MYSQL_STATUS_GET_RESULT
,MYSQL_STATUS_USE_RESULT
,MYSQL_STATUS_STATEMENT_GET_RESULT
};

enum mysql_protocol_type { MYSQL_PROTOCOL_DEFAULT
,MYSQL_PROTOCOL_TCP
,MYSQL_PROTOCOL_SOCKET
,MYSQL_PROTOCOL_PIPE
,MYSQL_PROTOCOL_MEMORY
};

enum mysql_ssl_mode { SSL_MODE_DISABLED=(1),
SSL_MODE_PREFERRED
,SSL_MODE_REQUIRED
,SSL_MODE_VERIFY_CA
,SSL_MODE_VERIFY_IDENTITY
};

enum mysql_ssl_fips_mode { SSL_FIPS_MODE_OFF=(0),
SSL_FIPS_MODE_ON=(1),
SSL_FIPS_MODE_STRICT
};

struct character_set
{
    unsigned int number;
    unsigned int state;
    const char* csname;
    const char* name;
    const char* comment;
    const char* dir;
    unsigned int mbminlen;
    unsigned int mbmaxlen;
};

typedef struct character_set MY_CHARSET_INFO;

struct MYSQL
{
    struct NET net;
    unsigned char* connector_fd;
    char* host;
    char* user;
    char* passwd;
    char* unix_socket;
    char* server_version;
    char* host_info;
    char* info;
    char* db;
    struct CHARSET_INFO* charset;
    struct MYSQL_FIELD* fields;
    struct MEM_ROOT* field_alloc;
    unsigned long  long affected_rows;
    unsigned long  long insert_id;
    unsigned long  long extra_info;
    unsigned long  int thread_id;
    unsigned long  int packet_length;
    unsigned int port;
    unsigned long  int client_flag;
    unsigned long  int server_capabilities;
    unsigned int protocol_version;
    unsigned int field_count;
    unsigned int server_status;
    unsigned int server_language;
    unsigned int warning_count;
    struct st_mysql_options options;
    enum mysql_status status;
    enum enum_resultset_metadata resultset_metadata;
    _Bool free_me;
    _Bool reconnect;
    char scramble[20+1];
    struct LIST* stmts;
    const struct MYSQL_METHODS* methods;
    void* thd;
    _Bool* unbuffered_fetch_owner;
    void* extension;
};

typedef struct MYSQL MYSQL;

struct MYSQL_RES
{
    unsigned long  long row_count;
    struct MYSQL_FIELD* fields;
    struct MYSQL_DATA* data;
    struct MYSQL_ROWS* data_cursor;
    unsigned long  int* lengths;
    struct MYSQL* handle;
    const struct MYSQL_METHODS* methods;
    char** row;
    char** current_row;
    struct MEM_ROOT* field_alloc;
    unsigned int field_count;
    unsigned int current_field;
    _Bool eof;
    _Bool unbuffered_fetch_cancelled;
    enum enum_resultset_metadata metadata;
    void* extension;
};

typedef struct MYSQL_RES MYSQL_RES;

struct MYSQL_RPL
{
    unsigned long  int file_name_length;
    const char* file_name;
    unsigned long  long start_position;
    unsigned int server_id;
    unsigned int flags;
    unsigned long  int gtid_set_encoded_size;
    void (*fix_gtid_set)(struct MYSQL_RPL*,unsigned char*);
    void* gtid_set_arg;
    unsigned long  int size;
    const unsigned char* buffer;
};

typedef struct MYSQL_RPL MYSQL_RPL;

enum enum_mysql_stmt_state { MYSQL_STMT_INIT_DONE=(1),
MYSQL_STMT_PREPARE_DONE
,MYSQL_STMT_EXECUTE_DONE
,MYSQL_STMT_FETCH_DONE
};

struct MYSQL_BIND
{
    unsigned long  int* length;
    _Bool* is_null;
    void* buffer;
    _Bool* error;
    unsigned char* row_ptr;
    void (*store_param_func)(struct NET*,struct MYSQL_BIND*);
    void (*fetch_result)(struct MYSQL_BIND*,struct MYSQL_FIELD*,unsigned char**);
    void (*skip_result)(struct MYSQL_BIND*,struct MYSQL_FIELD*,unsigned char**);
    unsigned long  int buffer_length;
    unsigned long  int offset;
    unsigned long  int length_value;
    unsigned int param_number;
    unsigned int pack_length;
    enum enum_field_types buffer_type;
    _Bool error_value;
    _Bool is_unsigned;
    _Bool long_data_used;
    _Bool is_null_value;
    void* extension;
};

typedef struct MYSQL_BIND MYSQL_BIND;

struct MYSQL_STMT
{
    struct MEM_ROOT* mem_root;
    struct LIST list;
    struct MYSQL* mysql;
    struct MYSQL_BIND* params;
    struct MYSQL_BIND* bind;
    struct MYSQL_FIELD* fields;
    struct MYSQL_DATA result;
    struct MYSQL_ROWS* data_cursor;
    int (*read_row_func)(struct MYSQL_STMT*,unsigned char**);
    unsigned long  long affected_rows;
    unsigned long  long insert_id;
    unsigned long  int stmt_id;
    unsigned long  int flags;
    unsigned long  int prefetch_rows;
    unsigned int server_status;
    unsigned int last_errno;
    unsigned int param_count;
    unsigned int field_count;
    enum enum_mysql_stmt_state state;
    char last_error[512];
    char sqlstate[5+1];
    _Bool send_types_to_server;
    _Bool bind_param_done;
    unsigned char bind_result_done;
    _Bool unbuffered_fetch_cancelled;
    _Bool update_max_length;
    struct MYSQL_STMT_EXT* extension;
};

typedef struct MYSQL_STMT MYSQL_STMT;

enum enum_stmt_attr_type { STMT_ATTR_UPDATE_MAX_LENGTH
,STMT_ATTR_CURSOR_TYPE
,STMT_ATTR_PREFETCH_ROWS
};

struct MYSQL* gComeMySQL=((void*)0);
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
int getattrlistbulk(int anonymous_var_nameX652, void* anonymous_var_nameX653, void* anonymous_var_nameX654, unsigned long  int anonymous_var_nameX655, unsigned long  long anonymous_var_nameX656);
int getattrlistat(int anonymous_var_nameX657, const char* anonymous_var_nameX658, void* anonymous_var_nameX659, void* anonymous_var_nameX660, unsigned long  int anonymous_var_nameX661, unsigned long  int anonymous_var_nameX662);
int setattrlistat(int anonymous_var_nameX663, const char* anonymous_var_nameX664, void* anonymous_var_nameX665, void* anonymous_var_nameX666, unsigned long  int anonymous_var_nameX667, unsigned int anonymous_var_nameX668);
long freadlink(int anonymous_var_nameX669, char* anonymous_var_nameX670, unsigned long  int anonymous_var_nameX671);
int faccessat(int anonymous_var_nameX672, const char* anonymous_var_nameX673, int anonymous_var_nameX674, int anonymous_var_nameX675);
int fchownat(int anonymous_var_nameX676, const char* anonymous_var_nameX677, unsigned int anonymous_var_nameX678, unsigned int anonymous_var_nameX679, int anonymous_var_nameX680);
int linkat(int anonymous_var_nameX681, const char* anonymous_var_nameX682, int anonymous_var_nameX683, const char* anonymous_var_nameX684, int anonymous_var_nameX685);
long readlinkat(int anonymous_var_nameX686, const char* anonymous_var_nameX687, char* anonymous_var_nameX688, unsigned long  int anonymous_var_nameX689);
int symlinkat(const char* anonymous_var_nameX690, int anonymous_var_nameX691, const char* anonymous_var_nameX692);
int unlinkat(int anonymous_var_nameX693, const char* anonymous_var_nameX694, int anonymous_var_nameX695);
void _exit(int anonymous_var_nameX696);
int access(const char* anonymous_var_nameX697, int anonymous_var_nameX698);
unsigned int alarm(unsigned int anonymous_var_nameX699);
int chdir(const char* anonymous_var_nameX700);
int chown(const char* anonymous_var_nameX701, unsigned int anonymous_var_nameX702, unsigned int anonymous_var_nameX703);
int close(int anonymous_var_nameX704);
int dup(int anonymous_var_nameX705);
int dup2(int anonymous_var_nameX706, int anonymous_var_nameX707);
int execl(const char* __path, const char* __arg0, ...);
int execle(const char* __path, const char* __arg0, ...);
int execlp(const char* __file, const char* __arg0, ...);
int execv(const char* __path, char** __argv);
int execve(const char* __file, char** __argv, char** __envp);
int execvp(const char* __file, char** __argv);
int fork();
long fpathconf(int anonymous_var_nameX708, int anonymous_var_nameX709);
char* getcwd(char* anonymous_var_nameX710, unsigned long  int anonymous_var_nameX711);
unsigned int getegid();
unsigned int geteuid();
unsigned int getgid();
int getgroups(int anonymous_var_nameX712, unsigned int anonymous_var_nameX713[]);
char* getlogin();
int getpgrp();
int getpid();
int getppid();
unsigned int getuid();
int isatty(int anonymous_var_nameX714);
int link(const char* anonymous_var_nameX715, const char* anonymous_var_nameX716);
long  long lseek(int anonymous_var_nameX717, long  long anonymous_var_nameX718, int anonymous_var_nameX719);
long pathconf(const char* anonymous_var_nameX720, int anonymous_var_nameX721);
int pause();
int pipe(int anonymous_var_nameX722[2]);
long read(int anonymous_var_nameX723, void* anonymous_var_nameX724, unsigned long  int anonymous_var_nameX725);
int rmdir(const char* anonymous_var_nameX726);
int setgid(unsigned int anonymous_var_nameX727);
int setpgid(int anonymous_var_nameX728, int anonymous_var_nameX729);
int setsid();
int setuid(unsigned int anonymous_var_nameX730);
unsigned int sleep(unsigned int anonymous_var_nameX731);
long sysconf(int anonymous_var_nameX732);
int tcgetpgrp(int anonymous_var_nameX733);
int tcsetpgrp(int anonymous_var_nameX734, int anonymous_var_nameX735);
char* ttyname(int anonymous_var_nameX736);
int ttyname_r(int anonymous_var_nameX737, char* anonymous_var_nameX738, unsigned long  int anonymous_var_nameX739);
int unlink(const char* anonymous_var_nameX740);
long write(int __fd, const void* __buf, unsigned long  int __nbyte);
unsigned long  int confstr(int anonymous_var_nameX741, char* anonymous_var_nameX742, unsigned long  int anonymous_var_nameX743);
int getopt(int anonymous_var_nameX744, char* anonymous_var_nameX745[], const char* anonymous_var_nameX746);
void* brk(const void* anonymous_var_nameX747);
int chroot(const char* anonymous_var_nameX748);
char* crypt(const char* anonymous_var_nameX749, const char* anonymous_var_nameX750);
void encrypt(char* anonymous_var_nameX751, int anonymous_var_nameX752);
int fchdir(int anonymous_var_nameX753);
long gethostid();
int getpgid(int anonymous_var_nameX754);
int getsid(int anonymous_var_nameX755);
int getdtablesize();
int getpagesize();
char* getpass(const char* anonymous_var_nameX756);
char* getwd(char* anonymous_var_nameX757);
int lchown(const char* anonymous_var_nameX758, unsigned int anonymous_var_nameX759, unsigned int anonymous_var_nameX760);
int lockf(int anonymous_var_nameX761, int anonymous_var_nameX762, long  long anonymous_var_nameX763);
int nice(int anonymous_var_nameX764);
long pread(int __fd, void* __buf, unsigned long  int __nbyte, long  long __offset);
long pwrite(int __fd, const void* __buf, unsigned long  int __nbyte, long  long __offset);
void* sbrk(int anonymous_var_nameX765);
int setpgrp();
int setregid(unsigned int anonymous_var_nameX766, unsigned int anonymous_var_nameX767);
int setreuid(unsigned int anonymous_var_nameX768, unsigned int anonymous_var_nameX769);
void swab(const void* anonymous_var_nameX770, void* anonymous_var_nameX771, long anonymous_var_nameX772);
void sync();
int truncate(const char* anonymous_var_nameX773, long  long anonymous_var_nameX774);
unsigned int ualarm(unsigned int anonymous_var_nameX775, unsigned int anonymous_var_nameX776);
int usleep(unsigned int anonymous_var_nameX777);
int vfork();
int fsync(int anonymous_var_nameX778);
int ftruncate(int anonymous_var_nameX779, long  long anonymous_var_nameX780);
int getlogin_r(char* anonymous_var_nameX781, unsigned long  int anonymous_var_nameX782);
int fchown(int anonymous_var_nameX783, unsigned int anonymous_var_nameX784, unsigned int anonymous_var_nameX785);
int gethostname(char* anonymous_var_nameX786, unsigned long  int anonymous_var_nameX787);
long readlink(const char* anonymous_var_nameX788, char* anonymous_var_nameX789, unsigned long  int anonymous_var_nameX790);
int setegid(unsigned int anonymous_var_nameX791);
int seteuid(unsigned int anonymous_var_nameX792);
int symlink(const char* anonymous_var_nameX793, const char* anonymous_var_nameX794);
int __darwin_check_fd_set_overflow(int anonymous_var_nameX795, const void* anonymous_var_nameX796, int anonymous_var_nameX797);
int pselect(int anonymous_var_nameX798, struct fd_set* anonymous_var_nameX799, struct fd_set* anonymous_var_nameX800, struct fd_set* anonymous_var_nameX801, const struct timespec* anonymous_var_nameX802, const unsigned int* anonymous_var_nameX803);
int select(int anonymous_var_nameX804, struct fd_set* anonymous_var_nameX805, struct fd_set* anonymous_var_nameX806, struct fd_set* anonymous_var_nameX807, struct timeval* anonymous_var_nameX808);
void _Exit(int anonymous_var_nameX809);
int accessx_np(const struct accessx_descriptor* anonymous_var_nameX810, unsigned long  int anonymous_var_nameX811, int* anonymous_var_nameX812, unsigned int anonymous_var_nameX813);
int acct(const char* anonymous_var_nameX814);
int add_profil(char* anonymous_var_nameX815, unsigned long  int anonymous_var_nameX816, unsigned long  int anonymous_var_nameX817, unsigned int anonymous_var_nameX818);
void endusershell();
int execvP(const char* __file, const char* __searchpath, char** __argv);
char* fflagstostr(unsigned long  int anonymous_var_nameX819);
int getdomainname(char* anonymous_var_nameX820, int anonymous_var_nameX821);
int getgrouplist(const char* anonymous_var_nameX822, int anonymous_var_nameX823, int* anonymous_var_nameX824, int* anonymous_var_nameX825);
int gethostuuid(unsigned char anonymous_var_nameX826[16], const struct timespec* anonymous_var_nameX827);
unsigned short int getmode(const void* anonymous_var_nameX828, unsigned short int anonymous_var_nameX829);
int getpeereid(int anonymous_var_nameX830, unsigned int* anonymous_var_nameX831, unsigned int* anonymous_var_nameX832);
int getsgroups_np(int* anonymous_var_nameX833, unsigned char anonymous_var_nameX834[16]);
char* getusershell();
int getwgroups_np(int* anonymous_var_nameX835, unsigned char anonymous_var_nameX836[16]);
int initgroups(const char* anonymous_var_nameX837, int anonymous_var_nameX838);
int issetugid();
char* mkdtemp(char* anonymous_var_nameX839);
int mknod(const char* anonymous_var_nameX840, unsigned short int anonymous_var_nameX841, int anonymous_var_nameX842);
int mkpath_np(const char* path, unsigned short int omode);
int mkpathat_np(int dfd, const char* path, unsigned short int omode);
int mkstemp(char* anonymous_var_nameX843);
int mkstemps(char* anonymous_var_nameX844, int anonymous_var_nameX845);
char* mktemp(char* anonymous_var_nameX846);
int mkostemp(char* path, int oflags);
int mkostemps(char* path, int slen, int oflags);
int mkstemp_dprotected_np(char* path, int dpclass, int dpflags);
char* mkdtempat_np(int dfd, char* path);
int mkstempsat_np(int dfd, char* path, int slen);
int mkostempsat_np(int dfd, char* path, int slen, int oflags);
int nfssvc(int anonymous_var_nameX847, void* anonymous_var_nameX848);
int profil(char* anonymous_var_nameX849, unsigned long  int anonymous_var_nameX850, unsigned long  int anonymous_var_nameX851, unsigned int anonymous_var_nameX852);
int pthread_setugid_np(unsigned int anonymous_var_nameX853, unsigned int anonymous_var_nameX854);
int pthread_getugid_np(unsigned int* anonymous_var_nameX855, unsigned int* anonymous_var_nameX856);
int reboot(int anonymous_var_nameX857);
int revoke(const char* anonymous_var_nameX858);
int rcmd(char** anonymous_var_nameX859, int anonymous_var_nameX860, const char* anonymous_var_nameX861, const char* anonymous_var_nameX862, const char* anonymous_var_nameX863, int* anonymous_var_nameX864);
int rcmd_af(char** anonymous_var_nameX865, int anonymous_var_nameX866, const char* anonymous_var_nameX867, const char* anonymous_var_nameX868, const char* anonymous_var_nameX869, int* anonymous_var_nameX870, int anonymous_var_nameX871);
int rresvport(int* anonymous_var_nameX872);
int rresvport_af(int* anonymous_var_nameX873, int anonymous_var_nameX874);
int iruserok(unsigned long  int anonymous_var_nameX875, int anonymous_var_nameX876, const char* anonymous_var_nameX877, const char* anonymous_var_nameX878);
int iruserok_sa(const void* anonymous_var_nameX879, int anonymous_var_nameX880, int anonymous_var_nameX881, const char* anonymous_var_nameX882, const char* anonymous_var_nameX883);
int ruserok(const char* anonymous_var_nameX884, int anonymous_var_nameX885, const char* anonymous_var_nameX886, const char* anonymous_var_nameX887);
int setdomainname(const char* anonymous_var_nameX888, int anonymous_var_nameX889);
int setgroups(int anonymous_var_nameX890, const unsigned int* anonymous_var_nameX891);
void sethostid(long anonymous_var_nameX892);
int sethostname(const char* anonymous_var_nameX893, int anonymous_var_nameX894);
void setkey(const char* anonymous_var_nameX895);
int setlogin(const char* anonymous_var_nameX896);
void* setmode(const char* anonymous_var_nameX897);
int setrgid(unsigned int anonymous_var_nameX898);
int setruid(unsigned int anonymous_var_nameX899);
int setsgroups_np(int anonymous_var_nameX900, const unsigned char anonymous_var_nameX901[16]);
void setusershell();
int setwgroups_np(int anonymous_var_nameX902, const unsigned char anonymous_var_nameX903[16]);
int strtofflags(char** anonymous_var_nameX904, unsigned long  int* anonymous_var_nameX905, unsigned long  int* anonymous_var_nameX906);
int swapon(const char* anonymous_var_nameX907);
int ttyslot();
int undelete(const char* anonymous_var_nameX908);
int unwhiteout(const char* anonymous_var_nameX909);
void* valloc(unsigned long  int anonymous_var_nameX910);
int syscall(int anonymous_var_nameX911, ...);
int getsubopt(char** anonymous_var_nameX912, char** anonymous_var_nameX913, char** anonymous_var_nameX914);
int fgetattrlist(int anonymous_var_nameX915, void* anonymous_var_nameX916, void* anonymous_var_nameX917, unsigned long  int anonymous_var_nameX918, unsigned int anonymous_var_nameX919);
int fsetattrlist(int anonymous_var_nameX920, void* anonymous_var_nameX921, void* anonymous_var_nameX922, unsigned long  int anonymous_var_nameX923, unsigned int anonymous_var_nameX924);
int getattrlist(const char* anonymous_var_nameX925, void* anonymous_var_nameX926, void* anonymous_var_nameX927, unsigned long  int anonymous_var_nameX928, unsigned int anonymous_var_nameX929);
int setattrlist(const char* anonymous_var_nameX930, void* anonymous_var_nameX931, void* anonymous_var_nameX932, unsigned long  int anonymous_var_nameX933, unsigned int anonymous_var_nameX934);
int exchangedata(const char* anonymous_var_nameX935, const char* anonymous_var_nameX936, unsigned int anonymous_var_nameX937);
int getdirentriesattr(int anonymous_var_nameX938, void* anonymous_var_nameX939, void* anonymous_var_nameX940, unsigned long  int anonymous_var_nameX941, unsigned int* anonymous_var_nameX942, unsigned int* anonymous_var_nameX943, unsigned int* anonymous_var_nameX944, unsigned int anonymous_var_nameX945);
int searchfs(const char* anonymous_var_nameX946, struct fssearchblock* anonymous_var_nameX947, unsigned long  int* anonymous_var_nameX948, unsigned int anonymous_var_nameX949, unsigned int anonymous_var_nameX950, struct searchstate* anonymous_var_nameX951);
int fsctl(const char* anonymous_var_nameX952, unsigned long  int anonymous_var_nameX953, void* anonymous_var_nameX954, unsigned int anonymous_var_nameX955);
int ffsctl(int anonymous_var_nameX956, unsigned long  int anonymous_var_nameX957, void* anonymous_var_nameX958, unsigned int anonymous_var_nameX959);
int fsync_volume_np(int anonymous_var_nameX960, int anonymous_var_nameX961);
int sync_volume_np(const char* anonymous_var_nameX962, int anonymous_var_nameX963);
int accept(int anonymous_var_nameX964, struct sockaddr* anonymous_var_nameX965, unsigned int* anonymous_var_nameX966);
int bind(int anonymous_var_nameX967, const struct sockaddr* anonymous_var_nameX968, unsigned int anonymous_var_nameX969);
int connect(int anonymous_var_nameX970, const struct sockaddr* anonymous_var_nameX971, unsigned int anonymous_var_nameX972);
int getpeername(int anonymous_var_nameX973, struct sockaddr* anonymous_var_nameX974, unsigned int* anonymous_var_nameX975);
int getsockname(int anonymous_var_nameX976, struct sockaddr* anonymous_var_nameX977, unsigned int* anonymous_var_nameX978);
int getsockopt(int anonymous_var_nameX979, int anonymous_var_nameX980, int anonymous_var_nameX981, void* anonymous_var_nameX982, unsigned int* anonymous_var_nameX983);
int listen(int anonymous_var_nameX984, int anonymous_var_nameX985);
long recv(int anonymous_var_nameX986, void* anonymous_var_nameX987, unsigned long  int anonymous_var_nameX988, int anonymous_var_nameX989);
long recvfrom(int anonymous_var_nameX990, void* anonymous_var_nameX991, unsigned long  int anonymous_var_nameX992, int anonymous_var_nameX993, struct sockaddr* anonymous_var_nameX994, unsigned int* anonymous_var_nameX995);
long recvmsg(int anonymous_var_nameX996, struct msghdr* anonymous_var_nameX997, int anonymous_var_nameX998);
long send(int anonymous_var_nameX999, const void* anonymous_var_nameX1000, unsigned long  int anonymous_var_nameX1001, int anonymous_var_nameX1002);
long sendmsg(int anonymous_var_nameX1003, const struct msghdr* anonymous_var_nameX1004, int anonymous_var_nameX1005);
long sendto(int anonymous_var_nameX1006, const void* anonymous_var_nameX1007, unsigned long  int anonymous_var_nameX1008, int anonymous_var_nameX1009, const struct sockaddr* anonymous_var_nameX1010, unsigned int anonymous_var_nameX1011);
int setsockopt(int anonymous_var_nameX1012, int anonymous_var_nameX1013, int anonymous_var_nameX1014, const void* anonymous_var_nameX1015, unsigned int anonymous_var_nameX1016);
int shutdown(int anonymous_var_nameX1017, int anonymous_var_nameX1018);
int sockatmark(int anonymous_var_nameX1019);
int socket(int anonymous_var_nameX1020, int anonymous_var_nameX1021, int anonymous_var_nameX1022);
int socketpair(int anonymous_var_nameX1023, int anonymous_var_nameX1024, int anonymous_var_nameX1025, int* anonymous_var_nameX1026);
int sendfile(int anonymous_var_nameX1027, int anonymous_var_nameX1028, long  long anonymous_var_nameX1029, long  long* anonymous_var_nameX1030, struct sf_hdtr* anonymous_var_nameX1031, int anonymous_var_nameX1032);
void pfctlinput(int anonymous_var_nameX1033, struct sockaddr* anonymous_var_nameX1034);
int connectx(int anonymous_var_nameX1035, const struct sa_endpoints* anonymous_var_nameX1036, unsigned int anonymous_var_nameX1037, unsigned int anonymous_var_nameX1038, const struct iovec* anonymous_var_nameX1039, unsigned int anonymous_var_nameX1040, unsigned long  int* anonymous_var_nameX1041, unsigned int* anonymous_var_nameX1042);
int disconnectx(int anonymous_var_nameX1043, unsigned int anonymous_var_nameX1044, unsigned int anonymous_var_nameX1045);
int setipv4sourcefilter(int anonymous_var_nameX1046, struct in_addr anonymous_var_nameX1047, struct in_addr anonymous_var_nameX1048, unsigned int anonymous_var_nameX1049, unsigned int anonymous_var_nameX1050, struct in_addr* anonymous_var_nameX1051);
int getipv4sourcefilter(int anonymous_var_nameX1052, struct in_addr anonymous_var_nameX1053, struct in_addr anonymous_var_nameX1054, unsigned int* anonymous_var_nameX1055, unsigned int* anonymous_var_nameX1056, struct in_addr* anonymous_var_nameX1057);
int setsourcefilter(int anonymous_var_nameX1058, unsigned int anonymous_var_nameX1059, struct sockaddr* anonymous_var_nameX1060, unsigned int anonymous_var_nameX1061, unsigned int anonymous_var_nameX1062, unsigned int anonymous_var_nameX1063, struct sockaddr_storage* anonymous_var_nameX1064);
int getsourcefilter(int anonymous_var_nameX1065, unsigned int anonymous_var_nameX1066, struct sockaddr* anonymous_var_nameX1067, unsigned int anonymous_var_nameX1068, unsigned int* anonymous_var_nameX1069, unsigned int* anonymous_var_nameX1070, struct sockaddr_storage* anonymous_var_nameX1071);
int inet6_option_space(int anonymous_var_nameX1072);
int inet6_option_init(void* anonymous_var_nameX1073, struct cmsghdr** anonymous_var_nameX1074, int anonymous_var_nameX1075);
int inet6_option_append(struct cmsghdr* anonymous_var_nameX1076, const unsigned char* anonymous_var_nameX1077, int anonymous_var_nameX1078, int anonymous_var_nameX1079);
unsigned char* inet6_option_alloc(struct cmsghdr* anonymous_var_nameX1080, int anonymous_var_nameX1081, int anonymous_var_nameX1082, int anonymous_var_nameX1083);
int inet6_option_next(const struct cmsghdr* anonymous_var_nameX1084, unsigned char** anonymous_var_nameX1085);
int inet6_option_find(const struct cmsghdr* anonymous_var_nameX1086, unsigned char** anonymous_var_nameX1087, int anonymous_var_nameX1088);
unsigned long  int inet6_rthdr_space(int anonymous_var_nameX1089, int anonymous_var_nameX1090);
struct cmsghdr* inet6_rthdr_init(void* anonymous_var_nameX1091, int anonymous_var_nameX1092);
int inet6_rthdr_add(struct cmsghdr* anonymous_var_nameX1093, const struct in6_addr* anonymous_var_nameX1094, unsigned int anonymous_var_nameX1095);
int inet6_rthdr_lasthop(struct cmsghdr* anonymous_var_nameX1096, unsigned int anonymous_var_nameX1097);
int inet6_rthdr_segments(const struct cmsghdr* anonymous_var_nameX1098);
struct in6_addr* inet6_rthdr_getaddr(struct cmsghdr* anonymous_var_nameX1099, int anonymous_var_nameX1100);
int inet6_rthdr_getflags(const struct cmsghdr* anonymous_var_nameX1101, int anonymous_var_nameX1102);
int inet6_opt_init(void* anonymous_var_nameX1103, unsigned int anonymous_var_nameX1104);
int inet6_opt_append(void* anonymous_var_nameX1105, unsigned int anonymous_var_nameX1106, int anonymous_var_nameX1107, unsigned char anonymous_var_nameX1108, unsigned int anonymous_var_nameX1109, unsigned char anonymous_var_nameX1110, void** anonymous_var_nameX1111);
int inet6_opt_finish(void* anonymous_var_nameX1112, unsigned int anonymous_var_nameX1113, int anonymous_var_nameX1114);
int inet6_opt_set_val(void* anonymous_var_nameX1115, int anonymous_var_nameX1116, void* anonymous_var_nameX1117, unsigned int anonymous_var_nameX1118);
int inet6_opt_next(void* anonymous_var_nameX1119, unsigned int anonymous_var_nameX1120, int anonymous_var_nameX1121, unsigned char* anonymous_var_nameX1122, unsigned int* anonymous_var_nameX1123, void** anonymous_var_nameX1124);
int inet6_opt_find(void* anonymous_var_nameX1125, unsigned int anonymous_var_nameX1126, int anonymous_var_nameX1127, unsigned char anonymous_var_nameX1128, unsigned int* anonymous_var_nameX1129, void** anonymous_var_nameX1130);
int inet6_opt_get_val(void* anonymous_var_nameX1131, int anonymous_var_nameX1132, void* anonymous_var_nameX1133, unsigned int anonymous_var_nameX1134);
unsigned int inet6_rth_space(int anonymous_var_nameX1135, int anonymous_var_nameX1136);
void* inet6_rth_init(void* anonymous_var_nameX1137, unsigned int anonymous_var_nameX1138, int anonymous_var_nameX1139, int anonymous_var_nameX1140);
int inet6_rth_add(void* anonymous_var_nameX1141, const struct in6_addr* anonymous_var_nameX1142);
int inet6_rth_reverse(const void* anonymous_var_nameX1143, void* anonymous_var_nameX1144);
int inet6_rth_segments(const void* anonymous_var_nameX1145);
struct in6_addr* inet6_rth_getaddr(const void* anonymous_var_nameX1146, int anonymous_var_nameX1147);
int bindresvport(int anonymous_var_nameX1148, struct sockaddr_in* anonymous_var_nameX1149);
int bindresvport_sa(int anonymous_var_nameX1150, struct sockaddr* anonymous_var_nameX1151);
unsigned int inet_addr(const char* anonymous_var_nameX1152);
char* inet_ntoa(struct in_addr anonymous_var_nameX1153);
const char* inet_ntop(int anonymous_var_nameX1154, const void* anonymous_var_nameX1155, char* anonymous_var_nameX1156, unsigned int anonymous_var_nameX1157);
int inet_pton(int anonymous_var_nameX1158, const char* anonymous_var_nameX1159, void* anonymous_var_nameX1160);
int ascii2addr(int anonymous_var_nameX1161, const char* anonymous_var_nameX1162, void* anonymous_var_nameX1163);
char* addr2ascii(int anonymous_var_nameX1164, const void* anonymous_var_nameX1165, int anonymous_var_nameX1166, char* anonymous_var_nameX1167);
int inet_aton(const char* anonymous_var_nameX1168, struct in_addr* anonymous_var_nameX1169);
unsigned int inet_lnaof(struct in_addr anonymous_var_nameX1170);
struct in_addr inet_makeaddr(unsigned int anonymous_var_nameX1171, unsigned int anonymous_var_nameX1172);
unsigned int inet_netof(struct in_addr anonymous_var_nameX1173);
unsigned int inet_network(const char* anonymous_var_nameX1174);
char* inet_net_ntop(int anonymous_var_nameX1175, const void* anonymous_var_nameX1176, int anonymous_var_nameX1177, char* anonymous_var_nameX1178, unsigned long  int anonymous_var_nameX1179);
int inet_net_pton(int anonymous_var_nameX1180, const char* anonymous_var_nameX1181, void* anonymous_var_nameX1182, unsigned long  int anonymous_var_nameX1183);
char* inet_neta(unsigned int anonymous_var_nameX1184, char* anonymous_var_nameX1185, unsigned long  int anonymous_var_nameX1186);
unsigned int inet_nsap_addr(const char* anonymous_var_nameX1187, unsigned char* anonymous_var_nameX1188, int anonymous_var_nameX1189);
char* inet_nsap_ntoa(int anonymous_var_nameX1190, const unsigned char* anonymous_var_nameX1191, char* anonymous_var_nameX1192);
long  int imaxabs(long  int j);
struct anonymous_typeX10 imaxdiv(long  int __numer, long  int __denom);
long  int strtoimax(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoumax(const char* __nptr, char** __endptr, int __base);
long  int wcstoimax(const int* __nptr, int** __endptr, int __base);
unsigned long  int wcstoumax(const int* __nptr, int** __endptr, int __base);
char* asctime(const struct tm* anonymous_var_nameX1193);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX1194);
double difftime(long anonymous_var_nameX1195, long anonymous_var_nameX1196);
struct tm* getdate(const char* anonymous_var_nameX1197);
struct tm* gmtime(const long* anonymous_var_nameX1198);
struct tm* localtime(const long* anonymous_var_nameX1199);
long mktime(struct tm* anonymous_var_nameX1200);
unsigned long  int strftime(char* anonymous_var_nameX1201, unsigned long  int anonymous_var_nameX1202, const char* anonymous_var_nameX1203, const struct tm* anonymous_var_nameX1204);
char* strptime(const char* anonymous_var_nameX1205, const char* anonymous_var_nameX1206, struct tm* anonymous_var_nameX1207);
long time(long* anonymous_var_nameX1208);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX1209, char* anonymous_var_nameX1210);
char* ctime_r(const long* anonymous_var_nameX1211, char* anonymous_var_nameX1212);
struct tm* gmtime_r(const long* anonymous_var_nameX1213, struct tm* anonymous_var_nameX1214);
struct tm* localtime_r(const long* anonymous_var_nameX1215, struct tm* anonymous_var_nameX1216);
long posix2time(long anonymous_var_nameX1217);
void tzsetwall();
long time2posix(long anonymous_var_nameX1218);
long timelocal(struct tm* anonymous_var_nameX1219);
long timegm(struct tm* anonymous_var_nameX1220);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY11 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY11 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY11 __clock_id);
int clock_settime(enum anonymous_typeY11 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int adjtime(const struct timeval* anonymous_var_nameX1221, struct timeval* anonymous_var_nameX1222);
int futimes(int anonymous_var_nameX1223, const struct timeval* anonymous_var_nameX1224);
int lutimes(const char* anonymous_var_nameX1225, const struct timeval* anonymous_var_nameX1226);
int settimeofday(const struct timeval* anonymous_var_nameX1227, const struct timezone* anonymous_var_nameX1228);
int getitimer(int anonymous_var_nameX1229, struct itimerval* anonymous_var_nameX1230);
int gettimeofday(struct timeval* anonymous_var_nameX1231, void* anonymous_var_nameX1232);
int setitimer(int anonymous_var_nameX1233, const struct itimerval* anonymous_var_nameX1234, struct itimerval* anonymous_var_nameX1235);
int utimes(const char* anonymous_var_nameX1236, const struct timeval* anonymous_var_nameX1237);
int OPENSSL_sk_num(const struct stack_st* anonymous_var_nameX1242);
void* OPENSSL_sk_value(const struct stack_st* anonymous_var_nameX1243, int anonymous_var_nameX1244);
void* OPENSSL_sk_set(struct stack_st* st, int i, const void* data);
struct stack_st* OPENSSL_sk_new(int (*cmp)(const void*,const void*));
struct stack_st* OPENSSL_sk_new_null();
struct stack_st* OPENSSL_sk_new_reserve(int (*c)(const void*,const void*), int n);
int OPENSSL_sk_reserve(struct stack_st* st, int n);
void OPENSSL_sk_free(struct stack_st* anonymous_var_nameX1245);
void OPENSSL_sk_pop_free(struct stack_st* st, void (*func)(void*));
struct stack_st* OPENSSL_sk_deep_copy(const struct stack_st* anonymous_var_nameX1247, void* (*c)(const void*), void (*f)(void*));
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
int sched_get_priority_min(int anonymous_var_nameX1248);
int sched_get_priority_max(int anonymous_var_nameX1249);
unsigned int qos_class_self();
unsigned int qos_class_main();
int pthread_attr_set_qos_class_np(struct _opaque_pthread_attr_t* __attr, unsigned int __qos_class, int __relative_priority);
int pthread_attr_get_qos_class_np(struct _opaque_pthread_attr_t* __attr, unsigned int* __qos_class, int* __relative_priority);
int pthread_set_qos_class_self_np(unsigned int __qos_class, int __relative_priority);
int pthread_get_qos_class_np(struct _opaque_pthread_t* __pthread, unsigned int* __qos_class, int* __relative_priority);
struct pthread_override_s* pthread_override_qos_class_start_np(struct _opaque_pthread_t* __pthread, unsigned int __qos_class, int __relative_priority);
int pthread_override_qos_class_end_np(struct pthread_override_s* __override);
int pthread_atfork(void (*anonymous_lambda_var_nameZ9)(), void (*anonymous_lambda_var_nameZ10)(), void (*anonymous_lambda_var_nameZ11)());
int pthread_attr_destroy(struct _opaque_pthread_attr_t* anonymous_var_nameX1250);
int pthread_attr_getdetachstate(const struct _opaque_pthread_attr_t* anonymous_var_nameX1251, int* anonymous_var_nameX1252);
int pthread_attr_getguardsize(const struct _opaque_pthread_attr_t* anonymous_var_nameX1253, unsigned long  int* anonymous_var_nameX1254);
int pthread_attr_getinheritsched(const struct _opaque_pthread_attr_t* anonymous_var_nameX1255, int* anonymous_var_nameX1256);
int pthread_attr_getschedparam(const struct _opaque_pthread_attr_t* anonymous_var_nameX1257, struct sched_param* anonymous_var_nameX1258);
int pthread_attr_getschedpolicy(const struct _opaque_pthread_attr_t* anonymous_var_nameX1259, int* anonymous_var_nameX1260);
int pthread_attr_getscope(const struct _opaque_pthread_attr_t* anonymous_var_nameX1261, int* anonymous_var_nameX1262);
int pthread_attr_getstack(const struct _opaque_pthread_attr_t* anonymous_var_nameX1263, void** anonymous_var_nameX1264, unsigned long  int* anonymous_var_nameX1265);
int pthread_attr_getstackaddr(const struct _opaque_pthread_attr_t* anonymous_var_nameX1266, void** anonymous_var_nameX1267);
int pthread_attr_getstacksize(const struct _opaque_pthread_attr_t* anonymous_var_nameX1268, unsigned long  int* anonymous_var_nameX1269);
int pthread_attr_init(struct _opaque_pthread_attr_t* anonymous_var_nameX1270);
int pthread_attr_setdetachstate(struct _opaque_pthread_attr_t* anonymous_var_nameX1271, int anonymous_var_nameX1272);
int pthread_attr_setguardsize(struct _opaque_pthread_attr_t* anonymous_var_nameX1273, unsigned long  int anonymous_var_nameX1274);
int pthread_attr_setinheritsched(struct _opaque_pthread_attr_t* anonymous_var_nameX1275, int anonymous_var_nameX1276);
int pthread_attr_setschedparam(struct _opaque_pthread_attr_t* anonymous_var_nameX1277, const struct sched_param* anonymous_var_nameX1278);
int pthread_attr_setschedpolicy(struct _opaque_pthread_attr_t* anonymous_var_nameX1279, int anonymous_var_nameX1280);
int pthread_attr_setscope(struct _opaque_pthread_attr_t* anonymous_var_nameX1281, int anonymous_var_nameX1282);
int pthread_attr_setstack(struct _opaque_pthread_attr_t* anonymous_var_nameX1283, void* anonymous_var_nameX1284, unsigned long  int anonymous_var_nameX1285);
int pthread_attr_setstackaddr(struct _opaque_pthread_attr_t* anonymous_var_nameX1286, void* anonymous_var_nameX1287);
int pthread_attr_setstacksize(struct _opaque_pthread_attr_t* anonymous_var_nameX1288, unsigned long  int anonymous_var_nameX1289);
int pthread_cancel(struct _opaque_pthread_t* anonymous_var_nameX1290);
int pthread_cond_broadcast(struct _opaque_pthread_cond_t* anonymous_var_nameX1291);
int pthread_cond_destroy(struct _opaque_pthread_cond_t* anonymous_var_nameX1292);
int pthread_cond_init(struct _opaque_pthread_cond_t* anonymous_var_nameX1293, const struct _opaque_pthread_condattr_t* anonymous_var_nameX1294);
int pthread_cond_signal(struct _opaque_pthread_cond_t* anonymous_var_nameX1295);
int pthread_cond_timedwait(struct _opaque_pthread_cond_t* anonymous_var_nameX1296, struct _opaque_pthread_mutex_t* anonymous_var_nameX1297, const struct timespec* anonymous_var_nameX1298);
int pthread_cond_wait(struct _opaque_pthread_cond_t* anonymous_var_nameX1299, struct _opaque_pthread_mutex_t* anonymous_var_nameX1300);
int pthread_condattr_destroy(struct _opaque_pthread_condattr_t* anonymous_var_nameX1301);
int pthread_condattr_init(struct _opaque_pthread_condattr_t* anonymous_var_nameX1302);
int pthread_condattr_getpshared(const struct _opaque_pthread_condattr_t* anonymous_var_nameX1303, int* anonymous_var_nameX1304);
int pthread_condattr_setpshared(struct _opaque_pthread_condattr_t* anonymous_var_nameX1305, int anonymous_var_nameX1306);
int pthread_create(struct _opaque_pthread_t** anonymous_var_nameX1307, const struct _opaque_pthread_attr_t* anonymous_var_nameX1308, void* (*anonymous_lambda_var_nameZ12)(void*), void* anonymous_var_nameX1310);
int pthread_detach(struct _opaque_pthread_t* anonymous_var_nameX1311);
int pthread_equal(struct _opaque_pthread_t* anonymous_var_nameX1312, struct _opaque_pthread_t* anonymous_var_nameX1313);
void pthread_exit(void* anonymous_var_nameX1314);
int pthread_getconcurrency();
int pthread_getschedparam(struct _opaque_pthread_t* anonymous_var_nameX1315, int* anonymous_var_nameX1316, struct sched_param* anonymous_var_nameX1317);
void* pthread_getspecific(unsigned long  int anonymous_var_nameX1318);
int pthread_join(struct _opaque_pthread_t* anonymous_var_nameX1319, void** anonymous_var_nameX1320);
int pthread_key_create(unsigned long  int* anonymous_var_nameX1321, void (*anonymous_lambda_var_nameZ13)(void*));
int pthread_key_delete(unsigned long  int anonymous_var_nameX1323);
int pthread_mutex_destroy(struct _opaque_pthread_mutex_t* anonymous_var_nameX1324);
int pthread_mutex_getprioceiling(const struct _opaque_pthread_mutex_t* anonymous_var_nameX1325, int* anonymous_var_nameX1326);
int pthread_mutex_init(struct _opaque_pthread_mutex_t* anonymous_var_nameX1327, const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1328);
int pthread_mutex_lock(struct _opaque_pthread_mutex_t* anonymous_var_nameX1329);
int pthread_mutex_setprioceiling(struct _opaque_pthread_mutex_t* anonymous_var_nameX1330, int anonymous_var_nameX1331, int* anonymous_var_nameX1332);
int pthread_mutex_trylock(struct _opaque_pthread_mutex_t* anonymous_var_nameX1333);
int pthread_mutex_unlock(struct _opaque_pthread_mutex_t* anonymous_var_nameX1334);
int pthread_mutexattr_destroy(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1335);
int pthread_mutexattr_getprioceiling(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1336, int* anonymous_var_nameX1337);
int pthread_mutexattr_getprotocol(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1338, int* anonymous_var_nameX1339);
int pthread_mutexattr_getpshared(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1340, int* anonymous_var_nameX1341);
int pthread_mutexattr_gettype(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1342, int* anonymous_var_nameX1343);
int pthread_mutexattr_getpolicy_np(const struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1344, int* anonymous_var_nameX1345);
int pthread_mutexattr_init(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1346);
int pthread_mutexattr_setprioceiling(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1347, int anonymous_var_nameX1348);
int pthread_mutexattr_setprotocol(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1349, int anonymous_var_nameX1350);
int pthread_mutexattr_setpshared(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1351, int anonymous_var_nameX1352);
int pthread_mutexattr_settype(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1353, int anonymous_var_nameX1354);
int pthread_mutexattr_setpolicy_np(struct _opaque_pthread_mutexattr_t* anonymous_var_nameX1355, int anonymous_var_nameX1356);
int pthread_once(struct _opaque_pthread_once_t* anonymous_var_nameX1357, void (*anonymous_lambda_var_nameZ14)());
int pthread_rwlock_destroy(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1358);
int pthread_rwlock_init(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1359, const struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1360);
int pthread_rwlock_rdlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1361);
int pthread_rwlock_tryrdlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1362);
int pthread_rwlock_trywrlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1363);
int pthread_rwlock_wrlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1364);
int pthread_rwlock_unlock(struct _opaque_pthread_rwlock_t* anonymous_var_nameX1365);
int pthread_rwlockattr_destroy(struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1366);
int pthread_rwlockattr_getpshared(const struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1367, int* anonymous_var_nameX1368);
int pthread_rwlockattr_init(struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1369);
int pthread_rwlockattr_setpshared(struct _opaque_pthread_rwlockattr_t* anonymous_var_nameX1370, int anonymous_var_nameX1371);
struct _opaque_pthread_t* pthread_self();
int pthread_setcancelstate(int anonymous_var_nameX1372, int* anonymous_var_nameX1373);
int pthread_setcanceltype(int anonymous_var_nameX1374, int* anonymous_var_nameX1375);
int pthread_setconcurrency(int anonymous_var_nameX1376);
int pthread_setschedparam(struct _opaque_pthread_t* anonymous_var_nameX1377, int anonymous_var_nameX1378, const struct sched_param* anonymous_var_nameX1379);
int pthread_setspecific(unsigned long  int anonymous_var_nameX1380, const void* anonymous_var_nameX1381);
void pthread_testcancel();
int pthread_is_threaded_np();
int pthread_threadid_np(struct _opaque_pthread_t* anonymous_var_nameX1382, unsigned long  long* anonymous_var_nameX1383);
int pthread_getname_np(struct _opaque_pthread_t* anonymous_var_nameX1384, char* anonymous_var_nameX1385, unsigned long  int anonymous_var_nameX1386);
int pthread_setname_np(const char* anonymous_var_nameX1387);
int pthread_main_np();
unsigned int pthread_mach_thread_np(struct _opaque_pthread_t* anonymous_var_nameX1388);
unsigned long  int pthread_get_stacksize_np(struct _opaque_pthread_t* anonymous_var_nameX1389);
void* pthread_get_stackaddr_np(struct _opaque_pthread_t* anonymous_var_nameX1390);
int pthread_cond_signal_thread_np(struct _opaque_pthread_cond_t* anonymous_var_nameX1391, struct _opaque_pthread_t* anonymous_var_nameX1392);
int pthread_cond_timedwait_relative_np(struct _opaque_pthread_cond_t* anonymous_var_nameX1393, struct _opaque_pthread_mutex_t* anonymous_var_nameX1394, const struct timespec* anonymous_var_nameX1395);
int pthread_create_suspended_np(struct _opaque_pthread_t** anonymous_var_nameX1396, const struct _opaque_pthread_attr_t* anonymous_var_nameX1397, void* (*anonymous_lambda_var_nameZ15)(void*), void* anonymous_var_nameX1399);
int pthread_kill(struct _opaque_pthread_t* anonymous_var_nameX1400, int anonymous_var_nameX1401);
struct _opaque_pthread_t* pthread_from_mach_thread_np(unsigned int anonymous_var_nameX1402);
int pthread_sigmask(int anonymous_var_nameX1403, const unsigned int* anonymous_var_nameX1404, unsigned int* anonymous_var_nameX1405);
void pthread_yield_np();
void pthread_jit_write_protect_np(int enabled);
int pthread_jit_write_protect_supported_np();
int pthread_jit_write_with_callback_np(int (*callback)(void*), void* ctx);
void pthread_jit_write_freeze_callbacks_np();
int pthread_cpu_number_np(unsigned long  int* cpu_number_out);
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
void OSSL_LIB_CTX_free(struct ossl_lib_ctx_st* anonymous_var_nameX1407);
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
void BIO_ADDR_free(union bio_addr_st* anonymous_var_nameX1411);
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
int BN_BLINDING_convert_ex(struct bignum_st* n, struct bignum_st* r, struct bn_blinding_st* b, struct bignum_ctx* anonymous_var_nameX1467);
int BN_BLINDING_invert_ex(struct bignum_st* n, const struct bignum_st* r, struct bn_blinding_st* b, struct bignum_ctx* anonymous_var_nameX1468);
int BN_BLINDING_is_current_thread(struct bn_blinding_st* b);
void BN_BLINDING_set_current_thread(struct bn_blinding_st* b);
int BN_BLINDING_lock(struct bn_blinding_st* b);
int BN_BLINDING_unlock(struct bn_blinding_st* b);
unsigned long  int BN_BLINDING_get_flags(const struct bn_blinding_st* anonymous_var_nameX1469);
void BN_BLINDING_set_flags(struct bn_blinding_st* anonymous_var_nameX1470, unsigned long  int anonymous_var_nameX1471);
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
int ASN1_STRING_TABLE_add(int anonymous_var_nameX1478, long anonymous_var_nameX1479, long anonymous_var_nameX1480, unsigned long  int anonymous_var_nameX1481, unsigned long  int anonymous_var_nameX1482);
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
void EC_GROUP_set_point_conversion_form(struct ec_group_st* group, enum anonymous_typeY18 form);
enum anonymous_typeY18 EC_GROUP_get_point_conversion_form(const struct ec_group_st* anonymous_var_nameX1501);
unsigned char* EC_GROUP_get0_seed(const struct ec_group_st* x);
unsigned long  int EC_GROUP_get_seed_len(const struct ec_group_st* anonymous_var_nameX1502);
unsigned long  int EC_GROUP_set_seed(struct ec_group_st* anonymous_var_nameX1503, const unsigned char* anonymous_var_nameX1504, unsigned long  int len);
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
unsigned long  int EC_get_builtin_curves(struct anonymous_typeX19* r, unsigned long  int nitems);
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
unsigned long  int EC_POINT_point2oct(const struct ec_group_st* group, const struct ec_point_st* p, enum anonymous_typeY18 form, unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
int EC_POINT_oct2point(const struct ec_group_st* group, struct ec_point_st* p, const unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
unsigned long  int EC_POINT_point2buf(const struct ec_group_st* group, const struct ec_point_st* point, enum anonymous_typeY18 form, unsigned char** pbuf, struct bignum_ctx* ctx);
struct bignum_st* EC_POINT_point2bn(const struct ec_group_st* anonymous_var_nameX1505, const struct ec_point_st* anonymous_var_nameX1506, enum anonymous_typeY18 form, struct bignum_st* anonymous_var_nameX1507, struct bignum_ctx* anonymous_var_nameX1508);
struct ec_point_st* EC_POINT_bn2point(const struct ec_group_st* anonymous_var_nameX1509, const struct bignum_st* anonymous_var_nameX1510, struct ec_point_st* anonymous_var_nameX1511, struct bignum_ctx* anonymous_var_nameX1512);
char* EC_POINT_point2hex(const struct ec_group_st* anonymous_var_nameX1513, const struct ec_point_st* anonymous_var_nameX1514, enum anonymous_typeY18 form, struct bignum_ctx* anonymous_var_nameX1515);
struct ec_point_st* EC_POINT_hex2point(const struct ec_group_st* anonymous_var_nameX1516, const char* anonymous_var_nameX1517, struct ec_point_st* anonymous_var_nameX1518, struct bignum_ctx* anonymous_var_nameX1519);
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
int EC_GROUP_get_basis_type(const struct ec_group_st* anonymous_var_nameX1520);
int EC_GROUP_get_trinomial_basis(const struct ec_group_st* anonymous_var_nameX1521, unsigned int* k);
int EC_GROUP_get_pentanomial_basis(const struct ec_group_st* anonymous_var_nameX1522, unsigned int* k1, unsigned int* k2, unsigned int* k3);
struct ec_group_st* d2i_ECPKParameters(struct ec_group_st** anonymous_var_nameX1523, const unsigned char** in, long len);
int i2d_ECPKParameters(const struct ec_group_st* anonymous_var_nameX1524, unsigned char** out);
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
enum anonymous_typeY18 EC_KEY_get_conv_form(const struct ec_key_st* key);
void EC_KEY_set_conv_form(struct ec_key_st* eckey, enum anonymous_typeY18 cform);
int EC_KEY_set_ex_data(struct ec_key_st* key, int idx, void* arg);
void* EC_KEY_get_ex_data(const struct ec_key_st* key, int idx);
void EC_KEY_set_asn1_flag(struct ec_key_st* eckey, int asn1_flag);
int EC_KEY_precompute_mult(struct ec_key_st* key, struct bignum_ctx* ctx);
int EC_KEY_generate_key(struct ec_key_st* key);
int EC_KEY_check_key(const struct ec_key_st* key);
int EC_KEY_can_sign(const struct ec_key_st* eckey);
int EC_KEY_set_public_key_affine_coordinates(struct ec_key_st* key, struct bignum_st* x, struct bignum_st* y);
unsigned long  int EC_KEY_key2buf(const struct ec_key_st* key, enum anonymous_typeY18 form, unsigned char** pbuf, struct bignum_ctx* ctx);
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
int RSA_check_key(const struct rsa_st* anonymous_var_nameX1528);
int RSA_check_key_ex(const struct rsa_st* anonymous_var_nameX1529, struct bn_gencb_st* cb);
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
void DSA_set_default_method(const struct dsa_method* anonymous_var_nameX1547);
const struct dsa_method* DSA_get_default_method();
int DSA_set_method(struct dsa_st* dsa, const struct dsa_method* anonymous_var_nameX1548);
const struct dsa_method* DSA_get_method(struct dsa_st* d);
struct dsa_st* DSA_new();
struct dsa_st* DSA_new_method(struct engine_st* engine);
void DSA_free(struct dsa_st* r);
int DSA_up_ref(struct dsa_st* r);
int DSA_size(const struct dsa_st* anonymous_var_nameX1549);
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
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT* h, enum anonymous_typeY23 type, const struct X509_name_st* name);
struct x509_object_st* X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT* h, enum anonymous_typeY23 type, const struct X509_name_st* name);
struct x509_object_st* X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT* h, struct x509_object_st* x);
int X509_OBJECT_up_ref_count(struct x509_object_st* a);
struct x509_object_st* X509_OBJECT_new();
void X509_OBJECT_free(struct x509_object_st* a);
enum anonymous_typeY23 X509_OBJECT_get_type(const struct x509_object_st* a);
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
int X509_LOOKUP_meth_set_get_by_subject(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY23,const struct X509_name_st*,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_subject(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY23,const struct X509_name_st*,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_issuer_serial(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY23,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_issuer_serial(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY23,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_fingerprint(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY23,const unsigned char*,int,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_fingerprint(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY23,const unsigned char*,int,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_alias(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY23,const char*,int,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_alias(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY23,const char*,int,struct x509_object_st*);
int X509_STORE_add_cert(struct x509_store_st* xs, struct x509_st* x);
int X509_STORE_add_crl(struct x509_store_st* xs, struct X509_crl_st* x);
int X509_STORE_CTX_get_by_subject(const struct x509_store_ctx_st* vs, enum anonymous_typeY23 type, const struct X509_name_st* name, struct x509_object_st* ret);
struct x509_object_st* X509_STORE_CTX_get_obj_by_subject(struct x509_store_ctx_st* vs, enum anonymous_typeY23 type, const struct X509_name_st* name);
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
int X509_LOOKUP_by_subject(struct x509_lookup_st* ctx, enum anonymous_typeY23 type, const struct X509_name_st* name, struct x509_object_st* ret);
int X509_LOOKUP_by_subject_ex(struct x509_lookup_st* ctx, enum anonymous_typeY23 type, const struct X509_name_st* name, struct x509_object_st* ret, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_LOOKUP_by_issuer_serial(struct x509_lookup_st* ctx, enum anonymous_typeY23 type, const struct X509_name_st* name, const struct asn1_string_st* serial, struct x509_object_st* ret);
int X509_LOOKUP_by_fingerprint(struct x509_lookup_st* ctx, enum anonymous_typeY23 type, const unsigned char* bytes, int len, struct x509_object_st* ret);
int X509_LOOKUP_by_alias(struct x509_lookup_st* ctx, enum anonymous_typeY23 type, const char* str, int len, struct x509_object_st* ret);
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
void X509_VERIFY_PARAM_move_peername(struct X509_VERIFY_PARAM_st* anonymous_var_nameX1677, struct X509_VERIFY_PARAM_st* anonymous_var_nameX1678);
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
struct anonymous_typeX22* PBMAC1PARAM_new();
void PBMAC1PARAM_free(struct anonymous_typeX22* a);
struct anonymous_typeX22* d2i_PBMAC1PARAM(struct anonymous_typeX22** a, const unsigned char** in, long len);
int i2d_PBMAC1PARAM(const struct anonymous_typeX22* a, unsigned char** out);
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
int PEM_write_bio_PKCS8PrivateKey(struct bio_st* anonymous_var_nameX1709, const struct evp_pkey_st* anonymous_var_nameX1710, const struct evp_cipher_st* anonymous_var_nameX1711, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
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
struct sct_st* SCT_new_from_base64(unsigned char version, const char* logid_base64, enum anonymous_typeY27 entry_type, unsigned long  long timestamp, const char* extensions_base64, const char* signature_base64);
void SCT_free(struct sct_st* sct);
void SCT_LIST_free(struct stack_st_SCT* a);
enum anonymous_typeY28 SCT_get_version(const struct sct_st* sct);
int SCT_set_version(struct sct_st* sct, enum anonymous_typeY28 version);
enum anonymous_typeY27 SCT_get_log_entry_type(const struct sct_st* sct);
int SCT_set_log_entry_type(struct sct_st* sct, enum anonymous_typeY27 entry_type);
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
enum anonymous_typeY29 SCT_get_source(const struct sct_st* sct);
int SCT_set_source(struct sct_st* sct, enum anonymous_typeY29 source);
const char* SCT_validation_status_string(const struct sct_st* sct);
void SCT_print(const struct sct_st* sct, struct bio_st* out, int indent, const struct ctlog_store_st* logs);
void SCT_LIST_print(const struct stack_st_SCT* sct_list, struct bio_st* out, int indent, const char* separator, const struct ctlog_store_st* logs);
enum anonymous_typeY30 SCT_get_validation_status(const struct sct_st* sct);
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
int SSL_CTX_set_cipher_list(struct ssl_ctx_st* anonymous_var_nameX1723, const char* str);
struct ssl_ctx_st* SSL_CTX_new(const struct ssl_method_st* meth);
struct ssl_ctx_st* SSL_CTX_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq, const struct ssl_method_st* meth);
int SSL_CTX_up_ref(struct ssl_ctx_st* ctx);
void SSL_CTX_free(struct ssl_ctx_st* anonymous_var_nameX1724);
long SSL_CTX_set_timeout(struct ssl_ctx_st* ctx, long t);
long SSL_CTX_get_timeout(const struct ssl_ctx_st* ctx);
struct x509_store_st* SSL_CTX_get_cert_store(const struct ssl_ctx_st* anonymous_var_nameX1725);
void SSL_CTX_set_cert_store(struct ssl_ctx_st* anonymous_var_nameX1726, struct x509_store_st* anonymous_var_nameX1727);
void SSL_CTX_set1_cert_store(struct ssl_ctx_st* anonymous_var_nameX1728, struct x509_store_st* anonymous_var_nameX1729);
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
long SSL_callback_ctrl(struct ssl_st* anonymous_var_nameX1739, int anonymous_var_nameX1740, void (*anonymous_lambda_var_nameZ40)());
long SSL_CTX_ctrl(struct ssl_ctx_st* ctx, int cmd, long larg, void* parg);
long SSL_CTX_callback_ctrl(struct ssl_ctx_st* anonymous_var_nameX1741, int anonymous_var_nameX1742, void (*anonymous_lambda_var_nameZ41)());
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
char* SSL_CIPHER_description(const struct ssl_cipher_st* anonymous_var_nameX1743, char* buf, int size);
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
enum anonymous_typeY31 SSL_get_state(const struct ssl_st* ssl);
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
void ERR_print_errors(struct bio_st* bp);
void ERR_add_error_data(int num, ...);
void ERR_add_error_vdata(int num, va_list args);
void ERR_add_error_txt(const char* sepr, const char* txt);
void ERR_add_error_mem_bio(const char* sep, struct bio_st* bio);
int ERR_load_strings(int lib, struct ERR_string_data_st* str);
int ERR_load_strings_const(const struct ERR_string_data_st* str);
int ERR_unload_strings(int lib, struct ERR_string_data_st* str);
void ERR_remove_thread_state(void* anonymous_var_nameX1774);
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
struct LIST* list_add(struct LIST* root, struct LIST* element);
struct LIST* list_delete(struct LIST* root, struct LIST* element);
struct LIST* list_cons(void* data, struct LIST* root);
struct LIST* list_reverse(struct LIST* root);
void list_free(struct LIST* root, unsigned int free_data);
unsigned int list_length(struct LIST* anonymous_var_nameX1777);
int list_walk(struct LIST* anonymous_var_nameX1778, int (*action)(void*,void*), unsigned char* argument);
unsigned int mysql_default_compression_level(enum enum_compression_algorithm algorithm);
void mysql_compress_context_init(struct mysql_compress_context* cmp_ctx, enum enum_compression_algorithm algorithm, unsigned int compression_level);
void mysql_compress_context_deinit(struct mysql_compress_context* mysql_compress_ctx);
_Bool my_net_init(struct NET* net, struct Vio* vio);
void my_net_local_init(struct NET* net);
void net_end(struct NET* net);
void net_clear(struct NET* net, _Bool check_buffer);
void net_claim_memory_ownership(struct NET* net, _Bool claim);
_Bool net_realloc(struct NET* net, unsigned long  int length);
_Bool net_flush(struct NET* net);
_Bool my_net_write(struct NET* net, const unsigned char* packet, unsigned long  int len);
_Bool net_write_command(struct NET* net, unsigned char command, const unsigned char* header, unsigned long  int head_len, const unsigned char* packet, unsigned long  int len);
_Bool net_write_packet(struct NET* net, const unsigned char* packet, unsigned long  int length);
unsigned long  int my_net_read(struct NET* net);
void my_net_set_write_timeout(struct NET* net, unsigned int timeout);
void my_net_set_read_timeout(struct NET* net, unsigned int timeout);
void my_net_set_retry_count(struct NET* net, unsigned int retry_count);
char* octet2hex(char* to, const char* str, unsigned int len);
_Bool generate_sha256_scramble(unsigned char* dst, unsigned long  int dst_size, const char* src, unsigned long  int src_size, const char* rnd, unsigned long  int rnd_size);
char* get_tty_password(const char* opt_message);
const char* mysql_errno_to_sqlstate(unsigned int mysql_errno);
_Bool my_thread_init();
void my_thread_end();
unsigned long  int net_field_length(unsigned char** packet);
unsigned long  int net_field_length_checked(unsigned char** packet, unsigned long  int max_length);
unsigned long  long net_field_length_ll(unsigned char** packet);
unsigned char* net_store_length(unsigned char* pkg, unsigned long  long length);
unsigned int net_length_size(unsigned long  long num);
unsigned int net_field_length_size(const unsigned char* pos);
unsigned long  long net_length_size_including_self(unsigned long  long length_without_self);
struct st_mysql_client_plugin* mysql_load_plugin(struct MYSQL* mysql, const char* name, int type, int argc, ...);
struct st_mysql_client_plugin* mysql_load_plugin_v(struct MYSQL* mysql, const char* name, int type, int argc, va_list args);
struct st_mysql_client_plugin* mysql_client_find_plugin(struct MYSQL* mysql, const char* name, int type);
struct st_mysql_client_plugin* mysql_client_register_plugin(struct MYSQL* mysql, struct st_mysql_client_plugin* plugin);
int mysql_plugin_options(struct st_mysql_client_plugin* plugin, const char* option, const void* value);
int mysql_plugin_get_option(struct st_mysql_client_plugin* plugin, const char* option, void* value);
void init_client_errs();
void finish_client_errs();
int mysql_server_init(int argc, char** argv, char** groups);
void mysql_server_end();
_Bool mysql_thread_init();
void mysql_thread_end();
unsigned long  long mysql_num_rows(struct MYSQL_RES* res);
unsigned int mysql_num_fields(struct MYSQL_RES* res);
_Bool mysql_eof(struct MYSQL_RES* res);
struct MYSQL_FIELD* mysql_fetch_field_direct(struct MYSQL_RES* res, unsigned int fieldnr);
struct MYSQL_FIELD* mysql_fetch_fields(struct MYSQL_RES* res);
struct MYSQL_ROWS* mysql_row_tell(struct MYSQL_RES* res);
unsigned int mysql_field_tell(struct MYSQL_RES* res);
enum enum_resultset_metadata mysql_result_metadata(struct MYSQL_RES* result);
unsigned int mysql_field_count(struct MYSQL* mysql);
unsigned long  long mysql_affected_rows(struct MYSQL* mysql);
unsigned long  long mysql_insert_id(struct MYSQL* mysql);
unsigned int mysql_errno(struct MYSQL* mysql);
const char* mysql_error(struct MYSQL* mysql);
const char* mysql_sqlstate(struct MYSQL* mysql);
unsigned int mysql_warning_count(struct MYSQL* mysql);
const char* mysql_info(struct MYSQL* mysql);
unsigned long  int mysql_thread_id(struct MYSQL* mysql);
const char* mysql_character_set_name(struct MYSQL* mysql);
int mysql_set_character_set(struct MYSQL* mysql, const char* csname);
struct MYSQL* mysql_init(struct MYSQL* mysql);
_Bool mysql_ssl_set(struct MYSQL* mysql, const char* key, const char* cert, const char* ca, const char* capath, const char* cipher);
const char* mysql_get_ssl_cipher(struct MYSQL* mysql);
_Bool mysql_get_ssl_session_reused(struct MYSQL* mysql);
void* mysql_get_ssl_session_data(struct MYSQL* mysql, unsigned int n_ticket, unsigned int* out_len);
_Bool mysql_free_ssl_session_data(struct MYSQL* mysql, void* data);
_Bool mysql_change_user(struct MYSQL* mysql, const char* user, const char* passwd, const char* db);
struct MYSQL* mysql_real_connect(struct MYSQL* mysql, const char* host, const char* user, const char* passwd, const char* db, unsigned int port, const char* unix_socket, unsigned long  int clientflag);
int mysql_select_db(struct MYSQL* mysql, const char* db);
int mysql_query(struct MYSQL* mysql, const char* q);
int mysql_send_query(struct MYSQL* mysql, const char* q, unsigned long  int length);
int mysql_real_query(struct MYSQL* mysql, const char* q, unsigned long  int length);
struct MYSQL_RES* mysql_store_result(struct MYSQL* mysql);
struct MYSQL_RES* mysql_use_result(struct MYSQL* mysql);
enum net_async_status mysql_real_connect_nonblocking(struct MYSQL* mysql, const char* host, const char* user, const char* passwd, const char* db, unsigned int port, const char* unix_socket, unsigned long  int clientflag);
enum net_async_status mysql_send_query_nonblocking(struct MYSQL* mysql, const char* query, unsigned long  int length);
enum net_async_status mysql_real_query_nonblocking(struct MYSQL* mysql, const char* query, unsigned long  int length);
enum net_async_status mysql_store_result_nonblocking(struct MYSQL* mysql, struct MYSQL_RES** result);
enum net_async_status mysql_next_result_nonblocking(struct MYSQL* mysql);
enum net_async_status mysql_select_db_nonblocking(struct MYSQL* mysql, const char* db, _Bool* error);
void mysql_get_character_set_info(struct MYSQL* mysql, struct character_set* charset);
int mysql_session_track_get_first(struct MYSQL* mysql, enum enum_session_state_type type, const char** data, unsigned long  int* length);
int mysql_session_track_get_next(struct MYSQL* mysql, enum enum_session_state_type type, const char** data, unsigned long  int* length);
void mysql_set_local_infile_handler(struct MYSQL* mysql, int (*local_infile_init)(void**,const char*,void*), int (*local_infile_read)(void*,char*,unsigned int), void (*local_infile_end)(void*), int (*local_infile_error)(void*,char*,unsigned int), void* anonymous_var_nameX1865);
void mysql_set_local_infile_default(struct MYSQL* mysql);
int mysql_shutdown(struct MYSQL* mysql, enum mysql_enum_shutdown_level shutdown_level);
int mysql_dump_debug_info(struct MYSQL* mysql);
int mysql_refresh(struct MYSQL* mysql, unsigned int refresh_options);
int mysql_kill(struct MYSQL* mysql, unsigned long  int pid);
int mysql_set_server_option(struct MYSQL* mysql, enum enum_mysql_set_option option);
int mysql_ping(struct MYSQL* mysql);
const char* mysql_stat(struct MYSQL* mysql);
const char* mysql_get_server_info(struct MYSQL* mysql);
const char* mysql_get_client_info();
unsigned long  int mysql_get_client_version();
const char* mysql_get_host_info(struct MYSQL* mysql);
unsigned long  int mysql_get_server_version(struct MYSQL* mysql);
unsigned int mysql_get_proto_info(struct MYSQL* mysql);
struct MYSQL_RES* mysql_list_dbs(struct MYSQL* mysql, const char* wild);
struct MYSQL_RES* mysql_list_tables(struct MYSQL* mysql, const char* wild);
struct MYSQL_RES* mysql_list_processes(struct MYSQL* mysql);
int mysql_options(struct MYSQL* mysql, enum mysql_option option, const void* arg);
int mysql_options4(struct MYSQL* mysql, enum mysql_option option, const void* arg1, const void* arg2);
int mysql_get_option(struct MYSQL* mysql, enum mysql_option option, const void* arg);
void mysql_free_result(struct MYSQL_RES* result);
enum net_async_status mysql_free_result_nonblocking(struct MYSQL_RES* result);
void mysql_data_seek(struct MYSQL_RES* result, unsigned long  long offset);
struct MYSQL_ROWS* mysql_row_seek(struct MYSQL_RES* result, struct MYSQL_ROWS* offset);
unsigned int mysql_field_seek(struct MYSQL_RES* result, unsigned int offset);
char** mysql_fetch_row(struct MYSQL_RES* result);
enum net_async_status mysql_fetch_row_nonblocking(struct MYSQL_RES* res, char*** row);
unsigned long  int* mysql_fetch_lengths(struct MYSQL_RES* result);
struct MYSQL_FIELD* mysql_fetch_field(struct MYSQL_RES* result);
struct MYSQL_RES* mysql_list_fields(struct MYSQL* mysql, const char* table, const char* wild);
unsigned long  int mysql_escape_string(char* to, const char* from, unsigned long  int from_length);
unsigned long  int mysql_hex_string(char* to, const char* from, unsigned long  int from_length);
unsigned long  int mysql_real_escape_string(struct MYSQL* mysql, char* to, const char* from, unsigned long  int length);
unsigned long  int mysql_real_escape_string_quote(struct MYSQL* mysql, char* to, const char* from, unsigned long  int length, char quote);
void mysql_debug(const char* debug);
void myodbc_remove_escape(struct MYSQL* mysql, char* name);
unsigned int mysql_thread_safe();
_Bool mysql_read_query_result(struct MYSQL* mysql);
int mysql_reset_connection(struct MYSQL* mysql);
enum net_async_status mysql_reset_connection_nonblocking(struct MYSQL* mysql);
int mysql_binlog_open(struct MYSQL* mysql, struct MYSQL_RPL* rpl);
int mysql_binlog_fetch(struct MYSQL* mysql, struct MYSQL_RPL* rpl);
void mysql_binlog_close(struct MYSQL* mysql, struct MYSQL_RPL* rpl);
_Bool mysql_bind_param(struct MYSQL* mysql, unsigned int n_params, struct MYSQL_BIND* binds, const char** names);
struct MYSQL_STMT* mysql_stmt_init(struct MYSQL* mysql);
int mysql_stmt_prepare(struct MYSQL_STMT* stmt, const char* query, unsigned long  int length);
int mysql_stmt_execute(struct MYSQL_STMT* stmt);
int mysql_stmt_fetch(struct MYSQL_STMT* stmt);
int mysql_stmt_fetch_column(struct MYSQL_STMT* stmt, struct MYSQL_BIND* bind_arg, unsigned int column, unsigned long  int offset);
int mysql_stmt_store_result(struct MYSQL_STMT* stmt);
unsigned long  int mysql_stmt_param_count(struct MYSQL_STMT* stmt);
_Bool mysql_stmt_attr_set(struct MYSQL_STMT* stmt, enum enum_stmt_attr_type attr_type, const void* attr);
_Bool mysql_stmt_attr_get(struct MYSQL_STMT* stmt, enum enum_stmt_attr_type attr_type, void* attr);
_Bool mysql_stmt_bind_param(struct MYSQL_STMT* stmt, struct MYSQL_BIND* bnd);
_Bool mysql_stmt_bind_named_param(struct MYSQL_STMT* stmt, struct MYSQL_BIND* binds, unsigned int n_params, const char** names);
_Bool mysql_stmt_bind_result(struct MYSQL_STMT* stmt, struct MYSQL_BIND* bnd);
_Bool mysql_stmt_close(struct MYSQL_STMT* stmt);
_Bool mysql_stmt_reset(struct MYSQL_STMT* stmt);
_Bool mysql_stmt_free_result(struct MYSQL_STMT* stmt);
_Bool mysql_stmt_send_long_data(struct MYSQL_STMT* stmt, unsigned int param_number, const char* data, unsigned long  int length);
struct MYSQL_RES* mysql_stmt_result_metadata(struct MYSQL_STMT* stmt);
struct MYSQL_RES* mysql_stmt_param_metadata(struct MYSQL_STMT* stmt);
unsigned int mysql_stmt_errno(struct MYSQL_STMT* stmt);
const char* mysql_stmt_error(struct MYSQL_STMT* stmt);
const char* mysql_stmt_sqlstate(struct MYSQL_STMT* stmt);
struct MYSQL_ROWS* mysql_stmt_row_seek(struct MYSQL_STMT* stmt, struct MYSQL_ROWS* offset);
struct MYSQL_ROWS* mysql_stmt_row_tell(struct MYSQL_STMT* stmt);
void mysql_stmt_data_seek(struct MYSQL_STMT* stmt, unsigned long  long offset);
unsigned long  long mysql_stmt_num_rows(struct MYSQL_STMT* stmt);
unsigned long  long mysql_stmt_affected_rows(struct MYSQL_STMT* stmt);
unsigned long  long mysql_stmt_insert_id(struct MYSQL_STMT* stmt);
unsigned int mysql_stmt_field_count(struct MYSQL_STMT* stmt);
_Bool mysql_commit(struct MYSQL* mysql);
_Bool mysql_rollback(struct MYSQL* mysql);
_Bool mysql_autocommit(struct MYSQL* mysql, _Bool auto_mode);
_Bool mysql_more_results(struct MYSQL* mysql);
int mysql_next_result(struct MYSQL* mysql);
int mysql_stmt_next_result(struct MYSQL_STMT* stmt);
void mysql_close(struct MYSQL* sock);
void mysql_reset_server_public_key();
struct MYSQL* mysql_real_connect_dns_srv(struct MYSQL* mysql, const char* dns_srv_name, const char* user, const char* passwd, const char* db, unsigned long  int client_flag);
enum connect_stage mysql_get_connect_nonblocking_stage(struct MYSQL* mysql);
int socket_fd_write(int self, char* str);
int server_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*,_Bool*));
static void sockaddr_in_finalize(struct sockaddr_in* self);
int client_socket(int port, char* address, void* parent, void (*block)(void*,int,_Bool*));
char* client_socket2(int port, char* data, char* address);
int httpd_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*));
void ERR_print_errors_fp(struct __sFILE* f);
int httpsd_socket(int port, _Bool reuse, void* parent, void (*block)(void*,struct ssl_st*,_Bool*));
int come_mysql_init();
void come_mysql_final();
int finish_with_error();
int create_user_if_not_exists(char* user, char* password, char* root_password, char* host_name);
int create_database_if_not_exists(char* database_name, char* user_name, char* password, char* host_name);
int xmysql_query(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name);
struct list$1list$1charphph* xmysql_query_and_fetch_row(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name);
static struct list$1list$1charphph* list$1list$1charphph_initialize(struct list$1list$1charphph* self);
static void list$1list$1charphphp_finalize(struct list$1list$1charphph* self);
static void list_item$1list$1charphphp_finalize(struct list_item$1list$1charphph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct list$1list$1charphph* list$1list$1charphph_add(struct list$1list$1charphph* self, struct list$1charph* item);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3603, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3610, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3619, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    /*i*/come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3626, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3633, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3640, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3647, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3975, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3980, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 3985, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 3990, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 3995, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4028, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4030, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    /*i*/come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4035, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4037, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4042, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4044, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4049, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4051, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4056, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4058, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4063, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4065, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4070, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4072, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4077, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4082, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4087, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4092, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4097, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4102, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4107, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4112, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4117, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4122, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4127, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4132, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4137, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4142, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
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
unsigned short int data_247;
    data_247=*(unsigned short int*)((unsigned long  int)base+byteOffset);
    return _OSSwapInt16(data_247);
}
static unsigned int OSReadSwapInt32(const void* base, unsigned long  int byteOffset){
unsigned int data_248;
    data_248=*(unsigned int*)((unsigned long  int)base+byteOffset);
    return _OSSwapInt32(data_248);
}
static unsigned long  long OSReadSwapInt64(const void* base, unsigned long  int byteOffset){
unsigned long  long data_249;
    data_249=*(unsigned long  long*)((unsigned long  int)base+byteOffset);
    return _OSSwapInt64(data_249);
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
unsigned long  int (*hfn_conv_250)(const char**);
memset(&hfn_conv_250, 0, sizeof(unsigned long  int (*)(const char**)));
    hfn_conv_250=(unsigned long  int (*)(const char**))hfn;
    return hfn_conv_250((const char**)data);
}
static int lh_OPENSSL_STRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_251)(const char**,const char**);
memset(&cfn_conv_251, 0, sizeof(int (*)(const char**,const char**)));
    cfn_conv_251=(int (*)(const char**,const char**))cfn;
    return cfn_conv_251((const char**)da,(const char**)db);
}
static void lh_OPENSSL_STRING_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_252)(char**);
memset(&doall_conv_252, 0, sizeof(void (*)(char**)));
    doall_conv_252=(void (*)(char**))doall;
    doall_conv_252((char**)node);
}
static void lh_OPENSSL_STRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_253)(char**,void*);
memset(&doall_conv_253, 0, sizeof(void (*)(char**,void*)));
    doall_conv_253=(void (*)(char**,void*))doall;
    doall_conv_253((char**)node,arg);
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
unsigned long  int (*hfn_conv_254)(const char**);
memset(&hfn_conv_254, 0, sizeof(unsigned long  int (*)(const char**)));
    hfn_conv_254=(unsigned long  int (*)(const char**))hfn;
    return hfn_conv_254((const char**)data);
}
static int lh_OPENSSL_CSTRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_255)(const char**,const char**);
memset(&cfn_conv_255, 0, sizeof(int (*)(const char**,const char**)));
    cfn_conv_255=(int (*)(const char**,const char**))cfn;
    return cfn_conv_255((const char**)da,(const char**)db);
}
static void lh_OPENSSL_CSTRING_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_256)(const char**);
memset(&doall_conv_256, 0, sizeof(void (*)(const char**)));
    doall_conv_256=(void (*)(const char**))doall;
    doall_conv_256((const char**)node);
}
static void lh_OPENSSL_CSTRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_257)(const char**,void*);
memset(&doall_conv_257, 0, sizeof(void (*)(const char**,void*)));
    doall_conv_257=(void (*)(const char**,void*))doall;
    doall_conv_257((const char**)node,arg);
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
static struct anonymous_typeX26* ossl_check_CONF_VALUE_type(struct anonymous_typeX26* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_CONF_VALUE_sk_type(const struct stack_st_CONF_VALUE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_CONF_VALUE_sk_type(struct stack_st_CONF_VALUE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_CONF_VALUE_compfunc_type(int (*cmp)(const struct anonymous_typeX26**,const struct anonymous_typeX26**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_CONF_VALUE_copyfunc_type(struct anonymous_typeX26* (*cpy)(const struct anonymous_typeX26*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_CONF_VALUE_freefunc_type(void (*fr)(struct anonymous_typeX26*)))(void*){
    return (void (*)(void*))fr;
}
static unsigned long  int lh_CONF_VALUE_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_258)(const struct anonymous_typeX26*);
memset(&hfn_conv_258, 0, sizeof(unsigned long  int (*)(const struct anonymous_typeX26*)));
    hfn_conv_258=(unsigned long  int (*)(const struct anonymous_typeX26*))hfn;
    return hfn_conv_258((const struct anonymous_typeX26*)data);
}
static int lh_CONF_VALUE_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_259)(const struct anonymous_typeX26*,const struct anonymous_typeX26*);
memset(&cfn_conv_259, 0, sizeof(int (*)(const struct anonymous_typeX26*,const struct anonymous_typeX26*)));
    cfn_conv_259=(int (*)(const struct anonymous_typeX26*,const struct anonymous_typeX26*))cfn;
    return cfn_conv_259((const struct anonymous_typeX26*)da,(const struct anonymous_typeX26*)db);
}
static void lh_CONF_VALUE_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_260)(struct anonymous_typeX26*);
memset(&doall_conv_260, 0, sizeof(void (*)(struct anonymous_typeX26*)));
    doall_conv_260=(void (*)(struct anonymous_typeX26*))doall;
    doall_conv_260((struct anonymous_typeX26*)node);
}
static void lh_CONF_VALUE_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_261)(struct anonymous_typeX26*,void*);
memset(&doall_conv_261, 0, sizeof(void (*)(struct anonymous_typeX26*,void*)));
    doall_conv_261=(void (*)(struct anonymous_typeX26*,void*))doall;
    doall_conv_261((struct anonymous_typeX26*)node,arg);
}
static struct anonymous_typeX26* ossl_check_CONF_VALUE_lh_plain_type(struct anonymous_typeX26* ptr){
    return ptr;
}
static const struct anonymous_typeX26* ossl_check_const_CONF_VALUE_lh_plain_type(const struct anonymous_typeX26* ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_CONF_VALUE_lh_type(const struct lhash_st_CONF_VALUE* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_CONF_VALUE_lh_type(struct lhash_st_CONF_VALUE* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_CONF_VALUE_lh_compfunc_type(int (*cmp)(const struct anonymous_typeX26*,const struct anonymous_typeX26*)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_CONF_VALUE_lh_hashfunc_type(unsigned long  int (*hfn)(const struct anonymous_typeX26*)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_CONF_VALUE_lh_doallfunc_type(void (*dfn)(struct anonymous_typeX26*)))(void*){
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
struct bio_poll_descriptor_st d_262;
memset(&d_262, 0, sizeof(struct bio_poll_descriptor_st));
    d_262.type=2;
    d_262.value.ssl=s;
    return d_262;
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
unsigned long  int (*hfn_conv_263)(const struct ERR_string_data_st*);
memset(&hfn_conv_263, 0, sizeof(unsigned long  int (*)(const struct ERR_string_data_st*)));
    hfn_conv_263=(unsigned long  int (*)(const struct ERR_string_data_st*))hfn;
    return hfn_conv_263((const struct ERR_string_data_st*)data);
}
static int lh_ERR_STRING_DATA_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_264)(const struct ERR_string_data_st*,const struct ERR_string_data_st*);
memset(&cfn_conv_264, 0, sizeof(int (*)(const struct ERR_string_data_st*,const struct ERR_string_data_st*)));
    cfn_conv_264=(int (*)(const struct ERR_string_data_st*,const struct ERR_string_data_st*))cfn;
    return cfn_conv_264((const struct ERR_string_data_st*)da,(const struct ERR_string_data_st*)db);
}
static void lh_ERR_STRING_DATA_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_265)(struct ERR_string_data_st*);
memset(&doall_conv_265, 0, sizeof(void (*)(struct ERR_string_data_st*)));
    doall_conv_265=(void (*)(struct ERR_string_data_st*))doall;
    doall_conv_265((struct ERR_string_data_st*)node);
}
static void lh_ERR_STRING_DATA_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_266)(struct ERR_string_data_st*,void*);
memset(&doall_conv_266, 0, sizeof(void (*)(struct ERR_string_data_st*,void*)));
    doall_conv_266=(void (*)(struct ERR_string_data_st*,void*))doall;
    doall_conv_266((struct ERR_string_data_st*)node,arg);
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
static const char* ER_CLIENT(int client_errno){
void* __result_obj__=(void*)0;
const char* __result198__;
const char* __result199__;
    if(    client_errno>=2000&&client_errno<=2075) {
        __result198__ = gComeFunResultObject = __result_obj__ = client_errors[client_errno-2000];
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    __result199__ = gComeFunResultObject = __result_obj__ = client_errors[2000-2000];
    gComeFunResultObject = (void*)0;
    return __result199__;
}

// body function
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

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1char"))));
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
        /*i*/come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1charp"))));
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
        /*i*/come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1short"))));
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
        /*i*/come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1int"))));
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
        /*i*/come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1long"))));
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
        /*i*/come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1float"))));
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
        /*i*/come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1double"))));
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
        /*i*/come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            /* U13 */self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
        /*i*/come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

int socket_fd_write(int self, char* str){
int __result200__;
    __result200__ = write(self,str,string_length(str));
    /* U13 */str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result200__;
}

int server_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*,_Bool*)){
int sock_267;
_Bool __exception_result_var_b1;
int opt_268;
void* __right_value245 = (void*)0;
_Bool __exception_result_var_b2;
struct sockaddr_in address_269;
int addrlen_270;
void* __right_value246 = (void*)0;
_Bool __exception_result_var_b3;
void* __right_value247 = (void*)0;
_Bool __exception_result_var_b4;
int new_socket_271;
_Bool reconnection_272;
_Bool break__273;
int __result201__;
memset(&address_269, 0, sizeof(struct sockaddr_in));
    sock_267=socket(socket_family,socket_type,protocol);
    if(    sock_267<0) {
        (come_push_stackframe("libcomelang-net.c", 16, 0),__exception_result_var_b1=die("socket failed"), come_pop_stackframe(), __exception_result_var_b1);
    }
    if(    reuse) {
        opt_268=1;
        if(        setsockopt(sock_267,65535,4,&opt_268,sizeof(opt_268))) {
            close(sock_267);
            (come_push_stackframe("libcomelang-net.c", 23, 1),__exception_result_var_b2=die(((char*)(__right_value245=xsprintf("setsockopt")))), come_pop_stackframe(), __exception_result_var_b2);
            /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    address_269.sin_family=2;
    address_269.sin_addr.s_addr=(unsigned int)0;
    address_269.sin_port=_OSSwapInt16(port);
    addrlen_270=sizeof(address_269);
    if(    bind(sock_267,(struct sockaddr*)&address_269,sizeof(address_269))<0) {
        close(sock_267);
        (come_push_stackframe("libcomelang-net.c", 37, 2),__exception_result_var_b3=die(((char*)(__right_value246=xsprintf("Unable to bind")))), come_pop_stackframe(), __exception_result_var_b3);
        /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    listen(sock_267,3)<0) {
        close(sock_267);
        (come_push_stackframe("libcomelang-net.c", 42, 3),__exception_result_var_b4=die(((char*)(__right_value247=xsprintf("Unable to listen")))), come_pop_stackframe(), __exception_result_var_b4);
        /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    new_socket_271=accept(sock_267,(struct sockaddr*)&address_269,(unsigned int*)&addrlen_270);
    while(1) {
        reconnection_272=0;
        break__273=0;
        block(parent,new_socket_271,&break__273,&reconnection_272);
        if(        reconnection_272) {
            close(new_socket_271);
            new_socket_271=accept(sock_267,(struct sockaddr*)&address_269,(unsigned int*)&addrlen_270);
        }
        if(        break__273) {
            break;
        }
    }
    close(new_socket_271);
    close(sock_267);
    __result201__ = 0;
    /*i*/come_call_finalizer3((&address_269),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result201__;
}

static void sockaddr_in_finalize(struct sockaddr_in* self){
}

int client_socket(int port, char* address, void* parent, void (*block)(void*,int,_Bool*)){
int sock_274;
struct sockaddr_in serv_addr_275;
void* __right_value248 = (void*)0;
_Bool __exception_result_var_b5;
void* __right_value249 = (void*)0;
_Bool __exception_result_var_b6;
void* __right_value250 = (void*)0;
_Bool __exception_result_var_b7;
_Bool break__276;
_Bool break__277;
int __result202__;
memset(&serv_addr_275, 0, sizeof(struct sockaddr_in));
    sock_274=0;
    if(    (sock_274=socket(2,1,0))<0) {
        (come_push_stackframe("libcomelang-net.c", 75, 4),__exception_result_var_b5=die(((char*)(__right_value248=xsprintf("socket")))), come_pop_stackframe(), __exception_result_var_b5);
        /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    serv_addr_275.sin_family=2;
    serv_addr_275.sin_port=_OSSwapInt16(port);
    if(    inet_pton(2,address,&serv_addr_275.sin_addr)<=0) {
        close(sock_274);
        (come_push_stackframe("libcomelang-net.c", 83, 5),__exception_result_var_b6=die(((char*)(__right_value249=xsprintf("Invalid address/ Address not supported")))), come_pop_stackframe(), __exception_result_var_b6);
        /* U11 */__right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    connect(sock_274,(struct sockaddr*)&serv_addr_275,sizeof(serv_addr_275))<0) {
        close(sock_274);
        (come_push_stackframe("libcomelang-net.c", 87, 6),__exception_result_var_b7=die(((char*)(__right_value250=xsprintf("Connection Failed")))), come_pop_stackframe(), __exception_result_var_b7);
        /* U11 */__right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    break__276=0;
    while(1) {
        break__277=0;
        block(parent,sock_274,&break__277);
        if(        break__277) {
            break;
        }
    }
    close(sock_274);
    __result202__ = 0;
    /*i*/come_call_finalizer3((&serv_addr_275),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result202__;
}

char* client_socket2(int port, char* data, char* address){
void* __result_obj__=(void*)0;
int sock_278;
struct sockaddr_in serv_addr_279;
void* __right_value251 = (void*)0;
_Bool __exception_result_var_b8;
void* __right_value252 = (void*)0;
_Bool __exception_result_var_b9;
void* __right_value253 = (void*)0;
_Bool __exception_result_var_b10;
void* __right_value254 = (void*)0;
_Bool __exception_result_var_b11;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct buffer* buf_280;
int size_282;
void* __right_value257 = (void*)0;
_Bool __exception_result_var_b12;
void* __right_value258 = (void*)0;
char* __result203__;
memset(&serv_addr_279, 0, sizeof(struct sockaddr_in));
    sock_278=0;
    if(    (sock_278=socket(2,1,0))<0) {
        (come_push_stackframe("libcomelang-net.c", 112, 7),__exception_result_var_b8=die(((char*)(__right_value251=xsprintf("Socket creation error")))), come_pop_stackframe(), __exception_result_var_b8);
        /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    serv_addr_279.sin_family=2;
    serv_addr_279.sin_port=_OSSwapInt16(port);
    if(    inet_pton(2,address,&serv_addr_279.sin_addr)<=0) {
        close(sock_278);
        (come_push_stackframe("libcomelang-net.c", 120, 8),__exception_result_var_b9=die(((char*)(__right_value252=xsprintf("Invalid address/ Address not supported")))), come_pop_stackframe(), __exception_result_var_b9);
        /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(    connect(sock_278,(struct sockaddr*)&serv_addr_279,sizeof(serv_addr_279))<0) {
        close(sock_278);
        (come_push_stackframe("libcomelang-net.c", 124, 9),__exception_result_var_b10=die(((char*)(__right_value253=xsprintf("Connection Failed")))), come_pop_stackframe(), __exception_result_var_b10);
        /* U11 */__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(    write(sock_278,data,strlen(data))<0) {
        close(sock_278);
        (come_push_stackframe("libcomelang-net.c", 129, 10),__exception_result_var_b11=die(((char*)(__right_value254=xsprintf("Write Failed")))), come_pop_stackframe(), __exception_result_var_b11);
        /* U11 */__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    buf_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-net.c", 132, "buffer"))));
    char buf2_281[1024]={0};
    size_282=read(sock_278,buf2_281,1024);
    if(    size_282<0) {
        close(sock_278);
        (come_push_stackframe("libcomelang-net.c", 140, 11),__exception_result_var_b12=die(((char*)(__right_value257=xsprintf("Read Failed")))), come_pop_stackframe(), __exception_result_var_b12);
        /* U11 */__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    buffer_append(buf_280,buf2_281,size_282);
    close(sock_278);
    __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value258=buffer_to_string(buf_280)));
    /*i*/come_call_finalizer3((&serv_addr_279),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_280,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

int httpd_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*)){
int sock_283;
_Bool __exception_result_var_b13;
int opt_284;
void* __right_value259 = (void*)0;
_Bool __exception_result_var_b14;
struct sockaddr_in address_285;
int addrlen_286;
void* __right_value260 = (void*)0;
_Bool __exception_result_var_b15;
void* __right_value261 = (void*)0;
_Bool __exception_result_var_b16;
int new_socket_287;
_Bool break__288;
int __result204__;
memset(&address_285, 0, sizeof(struct sockaddr_in));
    sock_283=socket(socket_family,socket_type,protocol);
    if(    sock_283<0) {
        (come_push_stackframe("libcomelang-net.c", 153, 12),__exception_result_var_b13=die("socket failed"), come_pop_stackframe(), __exception_result_var_b13);
    }
    if(    reuse) {
        opt_284=1;
        if(        setsockopt(sock_283,65535,4,&opt_284,sizeof(opt_284))) {
            close(sock_283);
            (come_push_stackframe("libcomelang-net.c", 160, 13),__exception_result_var_b14=die(((char*)(__right_value259=xsprintf("setsockpt failed")))), come_pop_stackframe(), __exception_result_var_b14);
            /* U11 */__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    address_285.sin_family=2;
    address_285.sin_addr.s_addr=(unsigned int)0;
    address_285.sin_port=_OSSwapInt16(port);
    addrlen_286=sizeof(address_285);
    if(    bind(sock_283,(struct sockaddr*)&address_285,sizeof(address_285))<0) {
        close(sock_283);
        (come_push_stackframe("libcomelang-net.c", 174, 14),__exception_result_var_b15=die(((char*)(__right_value260=xsprintf("Unable to bind")))), come_pop_stackframe(), __exception_result_var_b15);
        /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    listen(sock_283,3)<0) {
        close(sock_283);
        (come_push_stackframe("libcomelang-net.c", 179, 15),__exception_result_var_b16=die(((char*)(__right_value261=xsprintf("Unable to listen")))), come_pop_stackframe(), __exception_result_var_b16);
        /* U11 */__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    while(1) {
        new_socket_287=accept(sock_283,(struct sockaddr*)&address_285,(unsigned int*)&addrlen_286);
        break__288=0;
        block(parent,new_socket_287,&break__288);
        close(new_socket_287);
        if(        break__288) {
            break;
        }
    }
    close(sock_283);
    __result204__ = 0;
    /*i*/come_call_finalizer3((&address_285),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result204__;
}

void ERR_print_errors_fp(struct __sFILE* f){
}

int httpsd_socket(int port, _Bool reuse, void* parent, void (*block)(void*,struct ssl_st*,_Bool*)){
int sock_289;
struct ssl_ctx_st* ctx_290;
const struct ssl_method_st* method_291;
void* __right_value262 = (void*)0;
_Bool __exception_result_var_b17;
void* __right_value263 = (void*)0;
_Bool __exception_result_var_b18;
void* __right_value264 = (void*)0;
_Bool __exception_result_var_b19;
void* __right_value265 = (void*)0;
_Bool __exception_result_var_b20;
struct sockaddr_in addr_292;
void* __right_value266 = (void*)0;
_Bool __exception_result_var_b21;
void* __right_value267 = (void*)0;
_Bool __exception_result_var_b22;
struct sockaddr_in addr_293;
unsigned int len_294;
int client_295;
void* __right_value268 = (void*)0;
_Bool __exception_result_var_b23;
struct ssl_st* ssl_296;
_Bool break__297;
int __result205__;
memset(&sock_289, 0, sizeof(int));
ctx_290 = (void*)0;
method_291 = (void*)0;
memset(&addr_292, 0, sizeof(struct sockaddr_in));
memset(&addr_293, 0, sizeof(struct sockaddr_in));
    OPENSSL_init_ssl(2097152|2,((void*)0));
    OPENSSL_init_ssl(0,((void*)0));
    method_291=TLS_server_method();
    ctx_290=SSL_CTX_new(method_291);
    if(    !ctx_290) {
        (come_push_stackframe("libcomelang-net.c", 225, 16),__exception_result_var_b17=die(((char*)(__right_value262=xsprintf("Unable to create SSL context")))), come_pop_stackframe(), __exception_result_var_b17);
        /* U11 */__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    SSL_CTX_use_certificate_file(ctx_290,"cert.pem",1)<=0) {
        (come_push_stackframe("libcomelang-net.c", 230, 17),__exception_result_var_b18=die(((char*)(__right_value263=xsprintf("SSL_CTX_use_certificate_file")))), come_pop_stackframe(), __exception_result_var_b18);
        /* U11 */__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    SSL_CTX_use_PrivateKey_file(ctx_290,"key.pem",1)<=0) {
        (come_push_stackframe("libcomelang-net.c", 235, 18),__exception_result_var_b19=die(((char*)(__right_value264=xsprintf("SSL_CTX_use_PrivateKey_file")))), come_pop_stackframe(), __exception_result_var_b19);
        /* U11 */__right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    sock_289=socket(2,1,0);
    if(    sock_289<0) {
        (come_push_stackframe("libcomelang-net.c", 240, 19),__exception_result_var_b20=die(((char*)(__right_value265=xsprintf("Unable to create socket")))), come_pop_stackframe(), __exception_result_var_b20);
        /* U11 */__right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    addr_292.sin_family=2;
    addr_292.sin_port=_OSSwapInt16(port);
    addr_292.sin_addr.s_addr=(unsigned int)0;
    if(    bind(sock_289,(struct sockaddr*)&addr_292,sizeof(addr_292))<0) {
        (come_push_stackframe("libcomelang-net.c", 249, 20),__exception_result_var_b21=die(((char*)(__right_value266=xsprintf("Unable to bind")))), come_pop_stackframe(), __exception_result_var_b21);
        /* U11 */__right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    listen(sock_289,1)<0) {
        (come_push_stackframe("libcomelang-net.c", 253, 21),__exception_result_var_b22=die(((char*)(__right_value267=xsprintf("Unable to listen")))), come_pop_stackframe(), __exception_result_var_b22);
        /* U11 */__right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    while(1) {
        len_294=sizeof(addr_293);
        client_295=accept(sock_289,(struct sockaddr*)&addr_293,&len_294);
        if(        client_295<0) {
            (come_push_stackframe("libcomelang-net.c", 262, 22),__exception_result_var_b23=die(((char*)(__right_value268=xsprintf("Unable to accept")))), come_pop_stackframe(), __exception_result_var_b23);
            /* U11 */__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        ssl_296=SSL_new(ctx_290);
        SSL_set_fd(ssl_296,client_295);
        if(        SSL_accept(ssl_296)<=0) {
            ERR_print_errors_fp(__stdoutp);
        }
        else {
            break__297=0;
            block(parent,ssl_296,&break__297);
            if(            break__297) {
                /*i*/come_call_finalizer3((&addr_293),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
                break;
            }
        }
        SSL_shutdown(ssl_296);
        SSL_free(ssl_296);
        close(client_295);
        /*i*/come_call_finalizer3((&addr_293),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    }
    close(sock_289);
    SSL_CTX_free(ctx_290);
    while(0) {
        continue;
    }
    __result205__ = 0;
    /*i*/come_call_finalizer3((&addr_292),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result205__;
}

int come_mysql_init(){
void* __right_value269 = (void*)0;
_Bool __exception_result_var_b24;
    if(    gComeMySQL==((void*)0)) {
        gComeMySQL=mysql_init(((void*)0));
        if(        gComeMySQL==((void*)0)) {
            (come_push_stackframe("libcomelang-net.c", 299, 23),__exception_result_var_b24=die(((char*)(__right_value269=xsprintf("mysql_init failed")))), come_pop_stackframe(), __exception_result_var_b24);
            /* U11 */__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    return 0;
}

void come_mysql_final(){
    if(    gComeMySQL) {
        mysql_close(gComeMySQL);
        gComeMySQL=((void*)0);
    }
}

int finish_with_error(){
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
_Bool __exception_result_var_b25;
    mysql_close(gComeMySQL);
    (come_push_stackframe("libcomelang-net.c", 317, 24),__exception_result_var_b25=die(((char*)(__right_value271=xsprintf("\%s",((char*)(__right_value270=charp_to_string(mysql_error(gComeMySQL)))))))), come_pop_stackframe(), __exception_result_var_b25);
    /* U11 */__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
}

int create_user_if_not_exists(char* user, char* password, char* root_password, char* host_name){
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
char* check_user_query_298;
struct MYSQL_RES* result_299;
char** row_300;
int user_exists_301;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
_Bool _if_conditional1;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
_Bool _if_conditional2;
int __result206__;
    come_mysql_init();
    if(    mysql_real_connect(gComeMySQL,host_name,"root",root_password,((void*)0),0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    check_user_query_298=(char*)come_increment_ref_count(xsprintf("SELECT COUNT(*) FROM mysql.user WHERE user = '\%s' AND host = '\%s'",((char*)(__right_value272=charp_to_string(user))),((char*)(__right_value273=charp_to_string(host_name)))));
    /* U11 */__right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    mysql_query(gComeMySQL,check_user_query_298)==((void*)0)) {
        finish_with_error();
    }
    result_299=mysql_store_result(gComeMySQL);
    if(    result_299==((void*)0)) {
        finish_with_error();
    }
    row_300=mysql_fetch_row(result_299);
    user_exists_301=atoi(row_300[0]);
    mysql_free_result(result_299);
    if(    user_exists_301==0) {
        if(        (_if_conditional1=(mysql_query(gComeMySQL,((char*)(__right_value278=xsprintf("CREATE USER '\%s'@'\%s' IDENTIFIED BY '\%s'",((char*)(__right_value275=charp_to_string(user))),((char*)(__right_value276=charp_to_string(host_name))),((char*)(__right_value277=charp_to_string(password)))))))==((void*)0))),        /* U10 */ (__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            finish_with_error();
        }
        if(        (_if_conditional2=(mysql_query(gComeMySQL,((char*)(__right_value281=xsprintf("GRANT ALL PRIVILEGES ON *.* TO '\%s'@'\%s'",((char*)(__right_value279=charp_to_string(user))),((char*)(__right_value280=charp_to_string(host_name)))))))==((void*)0))),        /* U10 */ (__right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional2) {
            finish_with_error();
        }
        if(        mysql_query(gComeMySQL,"FLUSH PRIVILEGES")==((void*)0)) {
            finish_with_error();
        }
    }
    come_mysql_final();
    __result206__ = 0;
    /* U13 */check_user_query_298 = come_decrement_ref_count2(check_user_query_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result206__;
}

int create_database_if_not_exists(char* database_name, char* user_name, char* password, char* host_name){
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
char* create_db_query_302;
int __result207__;
    come_mysql_init();
    if(    mysql_real_connect(gComeMySQL,host_name,user_name,password,((void*)0),0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    create_db_query_302=(char*)come_increment_ref_count(xsprintf("CREATE DATABASE IF NOT EXISTS \%s",((char*)(__right_value282=charp_to_string(database_name)))));
    /* U11 */__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    mysql_query(gComeMySQL,create_db_query_302)==((void*)0)) {
        finish_with_error();
    }
    come_mysql_final();
    __result207__ = 0;
    /* U13 */create_db_query_302 = come_decrement_ref_count2(create_db_query_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result207__;
}

int xmysql_query(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name){
    if(    create_user) {
        create_user_if_not_exists(user,password,root_password,"localhost");
    }
    if(    create_database) {
        create_database_if_not_exists(database_name,user,password,host_name);
    }
    come_mysql_init();
    if(    mysql_select_db(gComeMySQL,database_name)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_real_connect(gComeMySQL,host_name,user,password,database_name,0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_query(gComeMySQL,query)==((void*)0)) {
        finish_with_error();
    }
    come_mysql_final();
    return 0;
}

struct list$1list$1charphph* xmysql_query_and_fetch_row(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name){
void* __result_obj__=(void*)0;
struct MYSQL_RES* res_303;
int num_fields_304;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1list$1charphph* result_305;
char** row_310;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1charph* li_311;
int i_312;
void* __right_value291 = (void*)0;
struct list$1list$1charphph* __result211__;
row_310 = (void*)0;
    if(    create_user) {
        create_user_if_not_exists(user,password,root_password,"localhost");
    }
    if(    create_database) {
        create_database_if_not_exists(database_name,user,password,host_name);
    }
    come_mysql_init();
    if(    mysql_select_db(gComeMySQL,database_name)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_real_connect(gComeMySQL,host_name,user,password,database_name,0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_query(gComeMySQL,query)==((void*)0)) {
        finish_with_error();
    }
    res_303=mysql_store_result(gComeMySQL);
    if(    res_303) {
        finish_with_error();
    }
    num_fields_304=mysql_num_fields(res_303);
    result_305=(struct list$1list$1charphph*)come_increment_ref_count(list$1list$1charphph_initialize((struct list$1list$1charphph*)come_increment_ref_count((struct list$1list$1charphph*)come_calloc(1, sizeof(struct list$1list$1charphph)*(1), "libcomelang-net.c", 421, "list$1list$1charphph"))));
    while((row_310=mysql_fetch_row(res_303))!=((void*)0)) {
        li_311=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-net.c", 425, "list$1charph"))));
        for(        i_312=0;        i_312<num_fields_304;        i_312++        ){
            if(            row_310[i_312]) {
                list$1charph_add(li_311,(char*)come_increment_ref_count(__builtin_string(row_310[i_312])));
            }
        }
        list$1list$1charphph_add(result_305,(struct list$1charph*)come_increment_ref_count(li_311));
        /*i*/come_call_finalizer3(li_311,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    mysql_free_result(res_303);
    come_mysql_final();
    __result211__ = gComeFunResultObject = __result_obj__ = result_305;
    /*i*/come_call_finalizer3(result_305,list$1list$1charphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct list$1list$1charphph* list$1list$1charphph_initialize(struct list$1list$1charphph* self){
void* __result_obj__=(void*)0;
struct list$1list$1charphph* __result208__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1list$1charphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void list$1list$1charphphp_finalize(struct list$1list$1charphph* self){
struct list_item$1list$1charphph* it_306;
struct list_item$1list$1charphph* prev_it_307;
    it_306=self->head;
    while(it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        /*i*/come_call_finalizer3(prev_it_307,list_item$1list$1charphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1list$1charphphp_finalize(struct list_item$1list$1charphph* self){
struct list$1charph* __dec_obj32;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj32=self->item;
            come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_308;
struct list_item$1charph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        /*i*/come_call_finalizer3(prev_it_309,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct list_item$1charph* litem_313;
char* __dec_obj33;
void* __right_value289 = (void*)0;
struct list_item$1charph* litem_314;
char* __dec_obj34;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_315;
char* __dec_obj35;
struct list$1charph* __result209__;
    if(    self->len==0) {
        litem_313=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value288=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1040, "list_item$1charph"))));
        litem_313->prev=((void*)0);
        litem_313->next=((void*)0);
        __dec_obj33=litem_313->item;
        litem_313->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_313;
        self->head=litem_313;
    }
    else if(    self->len==1) {
        litem_314=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value289=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1050, "list_item$1charph"))));
        litem_314->prev=self->head;
        litem_314->next=((void*)0);
        __dec_obj34=litem_314->item;
        litem_314->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_314;
        self->head->next=litem_314;
    }
    else {
        litem_315=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1060, "list_item$1charph"))));
        litem_315->prev=self->tail;
        litem_315->next=((void*)0);
        __dec_obj35=litem_315->item;
        litem_315->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_315;
        self->tail=litem_315;
    }
    self->len++;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1list$1charphph* list$1list$1charphph_add(struct list$1list$1charphph* self, struct list$1charph* item){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
struct list_item$1list$1charphph* litem_316;
struct list$1charph* __dec_obj36;
void* __right_value293 = (void*)0;
struct list_item$1list$1charphph* litem_317;
struct list$1charph* __dec_obj37;
void* __right_value294 = (void*)0;
struct list_item$1list$1charphph* litem_318;
struct list$1charph* __dec_obj38;
struct list$1list$1charphph* __result210__;
    if(    self->len==0) {
        litem_316=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(__right_value292=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "/usr/local/include/comelang.h", 1040, "list_item$1list$1charphph"))));
        litem_316->prev=((void*)0);
        litem_316->next=((void*)0);
        __dec_obj36=litem_316->item;
        litem_316->item=(struct list$1charph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj36,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_316;
        self->head=litem_316;
    }
    else if(    self->len==1) {
        litem_317=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(__right_value293=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "/usr/local/include/comelang.h", 1050, "list_item$1list$1charphph"))));
        litem_317->prev=self->head;
        litem_317->next=((void*)0);
        __dec_obj37=litem_317->item;
        litem_317->item=(struct list$1charph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj37,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_317;
        self->head->next=litem_317;
    }
    else {
        litem_318=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(__right_value294=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "/usr/local/include/comelang.h", 1060, "list_item$1list$1charphph"))));
        litem_318->prev=self->tail;
        litem_318->next=((void*)0);
        __dec_obj38=litem_318->item;
        litem_318->item=(struct list$1charph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj38,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_318;
        self->tail=litem_318;
    }
    self->len++;
    __result210__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

