# 1 "libtcc.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 406 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "libtcc.c" 2
# 21 "libtcc.c"
# 1 "./tcc.h" 1
# 22 "./tcc.h"
# 1 "./config.h" 1
# 23 "./tcc.h" 2








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/Availability.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/Availability.h" 2 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 1 3 4
# 659 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 660 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 2 3 4
# 725 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 726 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 2 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_types.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_types.h" 1 3 4
# 17 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_types.h" 3 4
typedef char __int8_t;

typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;







typedef void * __darwin_va_list;



typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 2 3 4
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/signal.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/signal.h" 1 3 4
# 17 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/signal.h" 3 4
typedef int sig_atomic_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_mcontext.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/machine/_structs.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/machine/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/types.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 1 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4


typedef int64_t register_t;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 2 3 4




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/types.h" 3 4
typedef u_int64_t syscall_arg_t;
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/types.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 2 3 4



struct __darwin_arm_exception_state
{
 __uint32_t __exception;
 __uint32_t __fsr;
 __uint32_t __far;
};
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_exception_state64
{
 __uint64_t __far;
 __uint32_t __esr;
 __uint32_t __exception;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state
{
 __uint32_t __r[13];
 __uint32_t __sp;
 __uint32_t __lr;
 __uint32_t __pc;
 __uint32_t __cpsr;
};
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state64
{
 __uint64_t __x[29];
 __uint64_t __fp;
 __uint64_t __lr;
 __uint64_t __sp;
 __uint64_t __pc;
 __uint32_t __cpsr;
 __uint32_t __pad;
};
# 433 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_vfp_state
{
 __uint32_t __r[64];
 __uint32_t __fpscr;
};
# 452 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_neon_state64
{
 __uint128_t __v[32];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};

struct __darwin_arm_neon_state
{
 __uint128_t __v[16];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};
# 523 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __arm_pagein_state
{
 int __pagein_error;
};
# 560 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __arm_legacy_debug_state
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
};
# 583 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_debug_state32
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
 __uint64_t __mdscr_el1;
};


struct __darwin_arm_debug_state64
{
 __uint64_t __bvr[16];
 __uint64_t __bcr[16];
 __uint64_t __wvr[16];
 __uint64_t __wcr[16];
 __uint64_t __mdscr_el1;
};
# 625 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_arm_exception_state __es;
 struct __darwin_arm_thread_state __ss;
 struct __darwin_arm_vfp_state __fs;
};
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_arm_exception_state64 __es;
 struct __darwin_arm_thread_state64 __ss;
 struct __darwin_arm_neon_state64 __ns;
};
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 390 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/signal.h" 3 4
    void(*signal(int, void (*)(int)))(int);
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 3 4
# 1 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/stdint.h" 1 3 4
# 52 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdint.h" 2 3 4
# 53 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/stdint.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 3 4
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
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};

typedef struct rusage_info_v5 rusage_info_current;
# 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 511 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 2 3 4
# 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/endian.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/endian.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_endian.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_endian.h" 2 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/arm/endian.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/endian.h" 2 3 4
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
      w_Coredump:1,
      w_Retcode:8,
      w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
      w_Stopsig:8,
      w_Filler:16;






 } w_S;
};
# 248 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/alloca.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4
# 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/malloc/_malloc.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/malloc/_malloc.h" 3 4
void *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void free(void *);
void *realloc(void *__ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void *valloc(size_t) __attribute__((alloc_size(1)));




void *aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));

int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__((availability(macosx,introduced=10.6)));
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4


void abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (* _Nonnull)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* _Nonnull __compar)(const void *, const void *));

div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));

char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);


int mblen(const char *__s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);

void qsort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));
int rand(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

void srand(unsigned) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);


__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
int system(const char *) __asm("_" "system" );


size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int);
char *ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));


int putenv(char *) __asm("_" "putenv" );
long random(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned *) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 254 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 255 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 2 3 4


uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
    __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void * __buf, size_t __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^ _Nonnull)(void)) __attribute__((availability(macosx,introduced=10.6)));
# 277 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 3 4
void *bsearch_b(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);
void setprogname(const char *);
# 311 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdlib.h" 3 4
int heapsort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int heapsort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int mergesort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void psort(void *__base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *__base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
int rpmatch(const char *)
 __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *__ptr, size_t __size) __attribute__((alloc_size(2)));
long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char **__errstrp)
 __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;
# 32 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_stdio.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/stdio.h" 1 3 4
# 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));



int renamex_np(const char *, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int, const char *, int, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (* _Nullable _close)(void *);
 int (* _Nullable _read) (void *, char *, int);
 fpos_t (* _Nullable _seek) (void *, fpos_t, int);
 int (* _Nullable _write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 2 3 4


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *) __attribute__((__cold__));
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);

__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")));
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_ctermid.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_ctermid.h" 3 4
char *ctermid(char *);
# 206 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 2 3 4




FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
int pclose(FILE *) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));



FILE *popen(const char *, const char *) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
# 242 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 279 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);


__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );
# 317 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 318 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 2 3 4


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 342 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
FILE *fmemopen(void * restrict __buf, size_t __size, const char * restrict __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
FILE *open_memstream(char **__bufp, size_t *__sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
# 360 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));





FILE *funopen(const void *,
                 int (* _Nullable)(void *, char *, int),
                 int (* _Nullable)(void *, const char *, int),
                 fpos_t (* _Nullable)(void *, fpos_t, int),
                 int (* _Nullable)(void *));
# 33 "./tcc.h" 2
# 1 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/stdarg.h" 1 3
# 14 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/stdarg.h" 3
typedef __builtin_va_list va_list;
# 32 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 34 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 3 4
void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 3 4
char *strtok_r(char *__str, const char *__sep, char **__lasts);
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 3 4
int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 3 4
char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int __sig);






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 3 4
void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);

__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);

__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
int strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/strings.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 1 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/string.h" 2 3 4
# 35 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/errno.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/errno.h" 3 4
extern int * __error(void);
# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/errno.h" 2 3 4
# 36 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 1 3 4
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
extern int __math_errhandling(void);
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 284 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
extern int __isnormalf(float);
extern int __isnormald(double);
extern int __isnormall(long double);
extern int __isfinitef(float);
extern int __isfinited(double);
extern int __isfinitel(long double);
extern int __isinff(float);
extern int __isinfd(double);
extern int __isinfl(long double);
extern int __isnanf(float);
extern int __isnand(double);
extern int __isnanl(long double);
extern int __signbitf(float);
extern int __signbitd(double);
extern int __signbitl(long double);
# 308 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 588 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
extern float __exp10f(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __exp10(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));





inline void __sincosf(float __x, float *__sinp, float *__cosp);
inline void __sincos(double __x, double *__sinp, double *__cosp);
# 605 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
extern float __cospif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __cospi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __sinpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __sinpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __tanpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __tanpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
# 636 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
inline void __sincospif(float __x, float *__sinp, float *__cosp);
inline void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double j1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double jn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double yn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double scalb(double, double);
extern int signgam;
# 763 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/math.h" 3 4
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
# 37 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/signal.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];



int raise(int);




void (* _Nullable bsd_signal(int, void (* _Nullable)(int)))(int);
int kill(pid_t, int) __asm("_" "kill" );
int killpg(pid_t, int) __asm("_" "killpg" );
int pthread_kill(pthread_t, int);
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
int sigaction(int, const struct sigaction * restrict,
     struct sigaction * restrict);
int sigaddset(sigset_t *, int);
int sigaltstack(const stack_t * restrict, stack_t * restrict) __asm("_" "sigaltstack" ) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigismember(const sigset_t *, int);
int sigpause(int) __asm("_" "sigpause" );
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * restrict, sigset_t * restrict);
int sigrelse(int);
void (* _Nullable sigset(int, void (* _Nullable)(int)))(int);
int sigsuspend(const sigset_t *) __asm("_" "sigsuspend" );
int sigwait(const sigset_t * restrict, int * restrict) __asm("_" "sigwait" );

void psignal(unsigned int, const char *);
int sigblock(int);
int sigsetmask(int);
int sigvec(int, struct sigvec *, struct sigvec *);




inline int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}
# 38 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 1 3 4
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_o_sync.h" 1 3 4
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 2 3 4
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 2 3 4
# 336 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 337 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 2 3 4
# 361 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 370 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 2 3 4






struct flocktimeout {
 struct flock fl;
 struct timespec timeout;
};
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
struct radvisory {
 off_t ra_offset;
 int ra_count;
};
# 402 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fsignatures {
 off_t fs_file_start;
 void *fs_blob_start;
 size_t fs_blob_size;



 size_t fs_fsignatures_size;
 char fs_cdhash[20];
 int fs_hash_type;
} fsignatures_t;

typedef struct fsupplement {
 off_t fs_file_start;
 off_t fs_blob_start;
 size_t fs_blob_size;
 int fs_orig_fd;
} fsupplement_t;
# 433 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fchecklv {
 off_t lv_file_start;
 size_t lv_error_message_size;
 void *lv_error_message;
} fchecklv_t;
# 447 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fgetsigsinfo {
 off_t fg_file_start;
 int fg_info_request;
 int fg_sig_is_platform;
} fgetsigsinfo_t;
# 462 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fstore {
 unsigned int fst_flags;
 int fst_posmode;
 off_t fst_offset;
 off_t fst_length;
 off_t fst_bytesalloc;
} fstore_t;


typedef struct fpunchhole {
 unsigned int fp_flags;
 unsigned int reserved;
 off_t fp_offset;
 off_t fp_length;
} fpunchhole_t;


typedef struct ftrimactivefile {
 off_t fta_offset;
 off_t fta_length;
} ftrimactivefile_t;


typedef struct fspecread {
 unsigned int fsr_flags;
 unsigned int reserved;
 off_t fsr_offset;
 off_t fsr_length;
} fspecread_t;



typedef struct fbootstraptransfer {
 off_t fbt_offset;
 size_t fbt_length;
 void *fbt_buffer;
} fbootstraptransfer_t;
# 522 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
#pragma pack(4)

struct log2phys {
 unsigned int l2p_flags;
 off_t l2p_contigbytes;


 off_t l2p_devoffset;


};

#pragma pack()
# 545 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 546 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/fcntl.h" 2 3 4

typedef enum {
 FILESEC_OWNER = 1,
 FILESEC_GROUP = 2,
 FILESEC_UUID = 3,
 FILESEC_MODE = 4,
 FILESEC_ACL = 5,
 FILESEC_GRPUUID = 6,


 FILESEC_ACL_RAW = 100,
 FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;






int open(const char *, int, ...) __asm("_" "open" );

int openat(int, const char *, int, ...) __asm("_" "openat" ) __attribute__((availability(macosx,introduced=10.10)));

int creat(const char *, mode_t) __asm("_" "creat" );
int fcntl(int, int, ...) __asm("_" "fcntl" );


int openx_np(const char *, int, filesec_t);




int open_dprotected_np( const char *, int, int, int, ...);
int flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void filesec_free(filesec_t);
int filesec_get_property(filesec_t, filesec_property_t, void *);
int filesec_query_property(filesec_t, filesec_property_t, int *);
int filesec_set_property(filesec_t, filesec_property_t, const void *);
int filesec_unset_property(filesec_t, filesec_property_t) __attribute__((availability(macosx,introduced=10.6)));
# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/fcntl.h" 2 3 4
# 39 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/setjmp.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/setjmp.h" 3 4
typedef int jmp_buf[((14 + 8 + 2) * 2)];
typedef int sigjmp_buf[((14 + 8 + 2) * 2) + 1];






extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int) __attribute__((__noreturn__));


int _setjmp(jmp_buf);
void _longjmp(jmp_buf, int) __attribute__((__noreturn__));
int sigsetjmp(sigjmp_buf, int);
void siglongjmp(sigjmp_buf, int) __attribute__((__noreturn__));



void longjmperror(void);
# 40 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/time.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/time.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/time.h" 2 3 4


struct tm {
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
 char *tm_zone;
};
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 0,

_CLOCK_MONOTONIC __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 6,


_CLOCK_MONOTONIC_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 4,

_CLOCK_MONOTONIC_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 5,

_CLOCK_UPTIME_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 8,

_CLOCK_UPTIME_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 9,


_CLOCK_PROCESS_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 12,

_CLOCK_THREAD_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0))) = 16

} clockid_t;

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
int clock_getres(clockid_t __clock_id, struct timespec *__res);

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
int clock_gettime(clockid_t __clock_id, struct timespec *__tp);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)))
__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/time.h" 3 4
__attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)))
int timespec_get(struct timespec *ts, int base);
# 41 "./tcc.h" 2
# 52 "./tcc.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 2 3 4
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 2 3 4
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 188 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 3 4
int getattrlistbulk(int, void *, void *, size_t, uint64_t) __attribute__((availability(macosx,introduced=10.10)));
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) __attribute__((availability(macosx,introduced=10.10)));
int setattrlistat(int, const char *, void *, void *, size_t, uint32_t) __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
# 203 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) __attribute__((availability(macosx,introduced=10.10)));
int fchownat(int, const char *, uid_t, gid_t, int) __attribute__((availability(macosx,introduced=10.10)));
int linkat(int, const char *, int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
ssize_t readlinkat(int, const char *, char *, size_t) __attribute__((availability(macosx,introduced=10.10)));
int symlinkat(const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
int unlinkat(int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 2 3 4
# 430 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char * __path, const char * __arg0, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execle(const char * __path, const char * __arg0, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execlp(const char * __file, const char * __arg0, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execv(const char * __path, char * const * __argv) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execve(const char * __file, char * const * __argv, char * const * __envp) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execvp(const char * __file, char * const * __argv) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
pid_t fork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int __fd, const void * __buf, size_t __nbyte) __asm("_" "write" );
# 507 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
# 538 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
__attribute__((__deprecated__)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);

void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((__const__)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread" );

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite" );






__attribute__((__deprecated__)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );


__attribute__((__deprecated__("Use posix_spawn or fork")))

pid_t vfork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 625 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 639 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_def.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_def.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;

int __darwin_check_fd_set_overflow(int, const void *, int) __attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));


inline int
__darwin_check_fd_set(int _a, const void *_b)
{

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunguarded-availability-new"

 if ((uintptr_t)&__darwin_check_fd_set_overflow != (uintptr_t) 0) {



  return __darwin_check_fd_set_overflow(_a, _b, 0);

 } else {
  return 1;
 }

#pragma clang diagnostic pop

}


inline int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  return _p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8))));
 }

 return 0;
}

inline void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}

inline void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4






int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)




__asm("_" "pselect" )




;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_select.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)





__asm("_" "select" )




;
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/select.h" 2 3 4
# 640 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 644 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
void endusershell(void);
int execvP(const char * __file, const char * __searchpath, char * const * __argv) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/gethostuuid.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macos,introduced=10.5))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)));
# 660 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkpathat_np(int dfd, const char *path, mode_t omode)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int mkostemp(char *path, int oflags)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int mkostemps(char *path, int slen, int oflags)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));

int mkstemp_dprotected_np(char *path, int dpclass, int dpflags)
  __attribute__((availability(macosx,unavailable))) __attribute__((availability(ios,introduced=10.0)))
  __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
char *mkdtempat_np(int dfd, char *path)
  __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0)))
  __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int mkstempsat_np(int dfd, char *path, int slen)
  __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0)))
  __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int mkostempsat_np(int dfd, char *path, int slen, int oflags)
  __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0)))
  __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);

__attribute__((__deprecated__("Use of per-thread security contexts is error-prone and discouraged.")))
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);

int reboot(int);
int revoke(const char *);

__attribute__((__deprecated__)) int rcmd(char **, int, const char *, const char *, const char *, int *);
__attribute__((__deprecated__)) int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
__attribute__((__deprecated__)) int rresvport(int *);
__attribute__((__deprecated__)) int rresvport_af(int *, int);
__attribute__((__deprecated__)) int iruserok(unsigned long, int, const char *, const char *);
__attribute__((__deprecated__)) int iruserok_sa(const void *, int, int, const char *, const char *);
__attribute__((__deprecated__)) int ruserok(const char *, int, const char *, const char *);

int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
__attribute__((availability(ios,deprecated=10.0,message="syscall(2) is unsupported; " "please switch to a supported interface. For SYS_kdebug_trace use kdebug_signpost().")))

__attribute__((availability(macosx,deprecated=10.12,message="syscall(2) is unsupported; " "please switch to a supported interface. For SYS_kdebug_trace use kdebug_signpost().")))

int syscall(int, ...);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
# 773 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 53 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/time.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_timeval64.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_timeval64.h" 3 4
struct timeval64 {
 __int64_t tv_sec;
 __int64_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/time.h" 2 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};
# 190 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/time.h" 3 4
int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) __attribute__((availability(macosx,introduced=10.5)));
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);



int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);
# 54 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/ucontext.h" 1 3 4
# 55 "./tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/mman.h" 1 3 4
# 231 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/mman.h" 3 4
int mlockall(int);
int munlockall(void);

int mlock(const void *, size_t);



void * mmap(void *, size_t, int, int, int, off_t) __asm("_" "mmap" );


int mprotect(void *, size_t, int) __asm("_" "mprotect" );

int msync(void *, size_t, int) __asm("_" "msync" );

int munlock(const void *, size_t);

int munmap(void *, size_t) __asm("_" "munmap" );

int shm_open(const char *, int, ...);
int shm_unlink(const char *);

int posix_madvise(void *, size_t, int);


int madvise(void *, size_t, int);
int mincore(const void *, size_t, char *);
int minherit(void *, size_t, int);
# 56 "./tcc.h" 2








# 1 "./elf.h" 1
# 25 "./elf.h"
# 1 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/inttypes.h" 1 3
# 21 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/inttypes.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/inttypes.h" 2 3 4






__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;

__attribute__((availability(macosx,introduced=10.4)))
extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);
# 22 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/inttypes.h" 2 3
# 26 "./elf.h" 2
# 44 "./elf.h"
typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;


typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;


typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;


typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;


typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;


typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;


typedef uint32_t Elf32_Symndx;
typedef uint64_t Elf64_Symndx;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
# 269 "./elf.h"
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 348 "./elf.h"
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
# 463 "./elf.h"
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
# 508 "./elf.h"
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 577 "./elf.h"
typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;
# 688 "./elf.h"
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
# 724 "./elf.h"
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
# 771 "./elf.h"
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
# 805 "./elf.h"
typedef struct
{
  int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf32_auxv_t;

typedef struct
{
  long int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf64_auxv_t;
# 858 "./elf.h"
typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 1177 "./elf.h"
typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;
      Elf32_Word gt_unused;
    } gt_header;
  struct
    {
      Elf32_Word gt_g_value;
      Elf32_Word gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
# 1253 "./elf.h"
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1392 "./elf.h"
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
# 1423 "./elf.h"
typedef Elf32_Addr Elf32_Conflict;
# 65 "./tcc.h" 2
# 1 "./stab.h" 1








enum __stab_debug_code
{
# 1 "./stab.def" 1
# 24 "./stab.def"
N_GSYM=0x20,



N_FNAME=0x22,




N_FUN=0x24,



N_STSYM=0x26,


N_LCSYM=0x28,



N_MAIN=0x2a,



N_PC=0x30,


N_NSYMS=0x32,


N_NOMAP=0x34,



N_OBJ=0x38,




N_OPT=0x3c,


N_RSYM=0x40,


N_M2C=0x42,



N_SLINE=0x44,


N_DSLINE=0x46,


N_BSLINE=0x48,




N_BROWS=0x48,





N_DEFD=0x4a,




N_EHDECL=0x50,

N_MOD2=0x50,






N_CATCH=0x54,


N_SSYM=0x60,



N_SO=0x64,



N_LSYM=0x80,




N_BINCL=0x82,



N_SOL=0x84,



N_PSYM=0xa0,





N_EINCL=0xa2,


N_ENTRY=0xa4,





N_LBRAC=0xc0,





N_EXCL=0xc2,


N_SCOPE=0xc4,



N_RBRAC=0xe0,


N_BCOMM=0xe2,



N_ECOMM=0xe4,



N_ECOML=0xe8,




N_NBTEXT=0xF0,
N_NBDATA=0xF2,
N_NBBSS=0xF4,
N_NBSTS=0xF6,
N_NBLCS=0xF8,



N_LENG=0xfe,
# 12 "./stab.h" 2
LAST_UNUSED_STAB_CODE
};
# 66 "./tcc.h" 2





# 1 "./libtcc.h" 1
# 14 "./libtcc.h"
struct TCCState;

typedef struct TCCState TCCState;


          TCCState *tcc_new(void);


          void tcc_delete(TCCState *s);


          void tcc_enable_debug(TCCState *s);


          void tcc_set_error_func(TCCState *s, void *error_opaque,
                        void (*error_func)(void *opaque, const char *msg));


          int tcc_set_warning(TCCState *s, const char *warning_name, int value);





          int tcc_add_include_path(TCCState *s, const char *pathname);


          int tcc_add_sysinclude_path(TCCState *s, const char *pathname);


          void tcc_define_symbol(TCCState *s, const char *sym, const char *value);


          void tcc_undefine_symbol(TCCState *s, const char *sym);






          int tcc_add_file(TCCState *s, const char *filename);



          int tcc_compile_string(TCCState *s, const char *buf);
# 70 "./libtcc.h"
          int tcc_set_output_type(TCCState *s, int output_type);






          int tcc_add_library_path(TCCState *s, const char *pathname);


          int tcc_add_library(TCCState *s, const char *libraryname);


          int tcc_add_symbol(TCCState *s, const char *name, void *val);



          int tcc_output_file(TCCState *s, const char *filename);



          int tcc_run(TCCState *s, int argc, char **argv);




          int tcc_relocate(TCCState *s1, void *ptr);


          void *tcc_get_symbol(TCCState *s, const char *name);


          void tcc_set_lib_path(TCCState *s, const char *path);
# 72 "./tcc.h" 2
# 125 "./tcc.h"
typedef int BOOL;
# 142 "./tcc.h"
typedef struct TokenSym {
    struct TokenSym *hash_next;
    struct Sym *sym_define;
    struct Sym *sym_label;
    struct Sym *sym_struct;
    struct Sym *sym_identifier;
    int tok;
    int len;
    char str[1];
} TokenSym;




typedef int nwchar_t;


typedef struct CString {
    int size;
    void *data;
    int size_allocated;
    void *data_allocated;
} CString;


typedef struct CType {
    int t;
    struct Sym *ref;
} CType;


typedef union CValue {
    long double ld;
    double d;
    float f;
    int i;
    unsigned int ui;
    unsigned int ul;
    long long ll;
    unsigned long long ull;
    struct CString *cstr;
    void *ptr;
    int tab[1];
} CValue;


typedef struct SValue {
    CType type;
    unsigned short r;
    unsigned short r2;

    CValue c;
    struct Sym *sym;
} SValue;


typedef struct Sym {
    int v;
    long r;
    long c;
    CType type;
    struct Sym *next;
    struct Sym *prev;
    struct Sym *prev_tok;
} Sym;
# 217 "./tcc.h"
typedef struct Section {
    unsigned long data_offset;
    unsigned char *data;
    unsigned long data_allocated;
    int sh_name;
    int sh_num;
    int sh_type;
    int sh_flags;
    int sh_info;
    int sh_addralign;
    int sh_entsize;
    unsigned long sh_size;
    unsigned long sh_addr;
    unsigned long sh_offset;
    int nb_hashed_syms;
    struct Section *link;
    struct Section *reloc;
    struct Section *hash;
    struct Section *next;
    char name[1];
} Section;

typedef struct DLLReference {
    int level;
    void *handle;
    char name[1];
} DLLReference;


typedef struct AttributeDef {
    int aligned;
    int packed;
    Section *section;
    int func_attr;
} AttributeDef;



typedef struct {
    unsigned
      func_call : 8,
      func_args : 8,
      func_export : 1;
} func_attr_t;
# 300 "./tcc.h"
typedef struct BufferedFile {
    uint8_t *buf_ptr;
    uint8_t *buf_end;
    int fd;
    int line_num;
    int ifndef_macro;
    int ifndef_macro_saved;
    int *ifdef_stack_ptr;
    char inc_type;
    char inc_filename[512];
    char filename[1024];
    unsigned char buffer[8192 + 1];
} BufferedFile;






typedef struct ParseState {
    int *macro_ptr;
    int line_num;
    int tok;
    CValue tokc;
} ParseState;


typedef struct TokenString {
    int *str;
    int len;
    int allocated_len;
    int last_line_num;
} TokenString;



typedef struct CachedInclude {
    int ifndef_macro;
    int hash_next;
    char type;
    char filename[1];
} CachedInclude;




typedef struct ExprValue {
    uint32_t v;
    Sym *sym;
} ExprValue;


typedef struct ASMOperand {
    int id;
    char *constraint;
    char asm_str[16];
    SValue *vt;
    int ref_index;
    int input_index;
    int priority;
    int reg;
    int is_llong;
    int is_memory;
    int is_rw;
} ASMOperand;



struct TCCState {
    int output_type;

    BufferedFile **include_stack_ptr;
    int *ifdef_stack_ptr;


    char **include_paths;
    int nb_include_paths;
    char **sysinclude_paths;
    int nb_sysinclude_paths;
    CachedInclude **cached_includes;
    int nb_cached_includes;

    char **library_paths;
    int nb_library_paths;



    DLLReference **loaded_dlls;
    int nb_loaded_dlls;


    Section **sections;
    int nb_sections;

    Section **priv_sections;
    int nb_priv_sections;


    Section *got;
    Section *plt;
    unsigned long *got_offsets;
    int nb_got_offsets;

    int *symtab_to_dynsym;


    Section *dynsymtab_section;

    Section *dynsym;

    int nostdinc;
    int nostdlib;
    int nocommon;


    int static_link;


    const char *soname;


    int rdynamic;


    int alacarte_link;


    unsigned long text_addr;
    int has_text_addr;


    int output_format;


    int char_is_unsigned;
    int leading_underscore;


    int warn_write_strings;
    int warn_unsupported;
    int warn_error;
    int warn_none;
    int warn_implicit_function_declaration;


    int verbose;

    int do_debug;

    int do_bounds_check;

    const char *tcc_lib_path;


    void *error_opaque;
    void (*error_func)(void *opaque, const char *msg);
    int error_set_jmp_enabled;
    jmp_buf error_jmp_buf;
    int nb_errors;


    Sym *asm_labels;


    BufferedFile *include_stack[32];


    int ifdef_stack[64];


    int cached_includes_hash[512];


    int pack_stack[8];
    int *pack_stack_ptr;


    FILE *outfile;


    int runtime_added;






};
# 683 "./tcc.h"
enum tcc_token {
    TOK_LAST = 256 - 1,

# 1 "./tcctok.h" 1

     TOK_INT,
     TOK_VOID,
     TOK_CHAR,
     TOK_IF,
     TOK_ELSE,
     TOK_WHILE,
     TOK_BREAK,
     TOK_RETURN,
     TOK_FOR,
     TOK_EXTERN,
     TOK_STATIC,
     TOK_UNSIGNED,
     TOK_GOTO,
     TOK_DO,
     TOK_CONTINUE,
     TOK_SWITCH,
     TOK_CASE,

     TOK_CONST1,
     TOK_CONST2,
     TOK_CONST3,
     TOK_VOLATILE1,
     TOK_VOLATILE2,
     TOK_VOLATILE3,
     TOK_LONG,
     TOK_REGISTER,
     TOK_SIGNED1,
     TOK_SIGNED2,
     TOK_SIGNED3,
     TOK_AUTO,
     TOK_INLINE1,
     TOK_INLINE2,
     TOK_INLINE3,
     TOK_RESTRICT1,
     TOK_RESTRICT2,
     TOK_RESTRICT3,
     TOK_EXTENSION,

     TOK_FLOAT,
     TOK_DOUBLE,
     TOK_BOOL,
     TOK_SHORT,
     TOK_STRUCT,
     TOK_UNION,
     TOK_TYPEDEF,
     TOK_DEFAULT,
     TOK_ENUM,
     TOK_SIZEOF,
     TOK_ATTRIBUTE1,
     TOK_ATTRIBUTE2,
     TOK_ALIGNOF1,
     TOK_ALIGNOF2,
     TOK_TYPEOF1,
     TOK_TYPEOF2,
     TOK_TYPEOF3,
     TOK_LABEL,
     TOK_ASM1,
     TOK_ASM2,
     TOK_ASM3,




     TOK_DEFINE,
     TOK_INCLUDE,
     TOK_INCLUDE_NEXT,
     TOK_IFDEF,
     TOK_IFNDEF,
     TOK_ELIF,
     TOK_ENDIF,
     TOK_DEFINED,
     TOK_UNDEF,
     TOK_ERROR,
     TOK_WARNING,
     TOK_LINE,
     TOK_PRAGMA,
     TOK___LINE__,
     TOK___FILE__,
     TOK___DATE__,
     TOK___TIME__,
     TOK___FUNCTION__,
     TOK___VA_ARGS__,


     TOK___FUNC__,



     TOK_SECTION1,
     TOK_SECTION2,
     TOK_ALIGNED1,
     TOK_ALIGNED2,
     TOK_PACKED1,
     TOK_PACKED2,
     TOK_UNUSED1,
     TOK_UNUSED2,
     TOK_CDECL1,
     TOK_CDECL2,
     TOK_CDECL3,
     TOK_STDCALL1,
     TOK_STDCALL2,
     TOK_STDCALL3,
     TOK_FASTCALL1,
     TOK_FASTCALL2,
     TOK_FASTCALL3,
     TOK_DLLEXPORT,
     TOK_NORETURN1,
     TOK_NORETURN2,
     TOK_builtin_types_compatible_p,
     TOK_builtin_constant_p,
     TOK_builtin_frame_address,






     TOK_REGPARM1,
     TOK_REGPARM2,


     TOK_pack,
# 139 "./tcctok.h"
     TOK_memcpy,
     TOK_memset,
     TOK___divdi3,
     TOK___moddi3,
     TOK___udivdi3,
     TOK___umoddi3,
# 182 "./tcctok.h"
     TOK___tcc_int_fpu_control,
     TOK___tcc_fpu_control,
# 194 "./tcctok.h"
     TOK___ashrdi3,
     TOK___lshrdi3,
     TOK___ashldi3,
     TOK___floatundisf,
     TOK___floatundidf,

     TOK___floatundixf,
     TOK___fixunsxfdi,

     TOK___fixunssfdi,
     TOK___fixunsdfdi,







     TOK___bound_ptr_add,
     TOK___bound_ptr_indir1,
     TOK___bound_ptr_indir2,
     TOK___bound_ptr_indir4,
     TOK___bound_ptr_indir8,
     TOK___bound_ptr_indir12,
     TOK___bound_ptr_indir16,
     TOK___bound_local_new,
     TOK___bound_local_delete,







     TOK_memmove,
     TOK_strlen,
     TOK_strcpy,
     TOK_alloca,




 TOK_ASM_byte,
 TOK_ASM_align,
 TOK_ASM_skip,
 TOK_ASM_space,
 TOK_ASM_string,
 TOK_ASM_asciz,
 TOK_ASM_ascii,
 TOK_ASM_globl,
 TOK_ASM_global,
 TOK_ASM_text,
 TOK_ASM_data,
 TOK_ASM_bss,
 TOK_ASM_previous,
 TOK_ASM_fill,
 TOK_ASM_org,
 TOK_ASM_quad,




 TOK_ASM_al,
 TOK_ASM_cl,
 TOK_ASM_dl,
 TOK_ASM_bl,
 TOK_ASM_ah,
 TOK_ASM_ch,
 TOK_ASM_dh,
 TOK_ASM_bh,
 TOK_ASM_ax,
 TOK_ASM_cx,
 TOK_ASM_dx,
 TOK_ASM_bx,
 TOK_ASM_sp,
 TOK_ASM_bp,
 TOK_ASM_si,
 TOK_ASM_di,
 TOK_ASM_eax,
 TOK_ASM_ecx,
 TOK_ASM_edx,
 TOK_ASM_ebx,
 TOK_ASM_esp,
 TOK_ASM_ebp,
 TOK_ASM_esi,
 TOK_ASM_edi,
 TOK_ASM_mm0,
 TOK_ASM_mm1,
 TOK_ASM_mm2,
 TOK_ASM_mm3,
 TOK_ASM_mm4,
 TOK_ASM_mm5,
 TOK_ASM_mm6,
 TOK_ASM_mm7,
 TOK_ASM_xmm0,
 TOK_ASM_xmm1,
 TOK_ASM_xmm2,
 TOK_ASM_xmm3,
 TOK_ASM_xmm4,
 TOK_ASM_xmm5,
 TOK_ASM_xmm6,
 TOK_ASM_xmm7,
 TOK_ASM_cr0,
 TOK_ASM_cr1,
 TOK_ASM_cr2,
 TOK_ASM_cr3,
 TOK_ASM_cr4,
 TOK_ASM_cr5,
 TOK_ASM_cr6,
 TOK_ASM_cr7,
 TOK_ASM_tr0,
 TOK_ASM_tr1,
 TOK_ASM_tr2,
 TOK_ASM_tr3,
 TOK_ASM_tr4,
 TOK_ASM_tr5,
 TOK_ASM_tr6,
 TOK_ASM_tr7,
 TOK_ASM_db0,
 TOK_ASM_db1,
 TOK_ASM_db2,
 TOK_ASM_db3,
 TOK_ASM_db4,
 TOK_ASM_db5,
 TOK_ASM_db6,
 TOK_ASM_db7,
 TOK_ASM_dr0,
 TOK_ASM_dr1,
 TOK_ASM_dr2,
 TOK_ASM_dr3,
 TOK_ASM_dr4,
 TOK_ASM_dr5,
 TOK_ASM_dr6,
 TOK_ASM_dr7,
 TOK_ASM_es,
 TOK_ASM_cs,
 TOK_ASM_ss,
 TOK_ASM_ds,
 TOK_ASM_fs,
 TOK_ASM_gs,
 TOK_ASM_st,

 TOK_ASM_movb, TOK_ASM_movw, TOK_ASM_movl, TOK_ASM_mov,


 TOK_ASM_addb, TOK_ASM_addw, TOK_ASM_addl, TOK_ASM_add,
 TOK_ASM_orb, TOK_ASM_orw, TOK_ASM_orl, TOK_ASM_or,
 TOK_ASM_adcb, TOK_ASM_adcw, TOK_ASM_adcl, TOK_ASM_adc,
 TOK_ASM_sbbb, TOK_ASM_sbbw, TOK_ASM_sbbl, TOK_ASM_sbb,
 TOK_ASM_andb, TOK_ASM_andw, TOK_ASM_andl, TOK_ASM_and,
 TOK_ASM_subb, TOK_ASM_subw, TOK_ASM_subl, TOK_ASM_sub,
 TOK_ASM_xorb, TOK_ASM_xorw, TOK_ASM_xorl, TOK_ASM_xor,
 TOK_ASM_cmpb, TOK_ASM_cmpw, TOK_ASM_cmpl, TOK_ASM_cmp,


 TOK_ASM_incb, TOK_ASM_incw, TOK_ASM_incl, TOK_ASM_inc,
 TOK_ASM_decb, TOK_ASM_decw, TOK_ASM_decl, TOK_ASM_dec,
 TOK_ASM_notb, TOK_ASM_notw, TOK_ASM_notl, TOK_ASM_not,
 TOK_ASM_negb, TOK_ASM_negw, TOK_ASM_negl, TOK_ASM_neg,
 TOK_ASM_mulb, TOK_ASM_mulw, TOK_ASM_mull, TOK_ASM_mul,
 TOK_ASM_imulb, TOK_ASM_imulw, TOK_ASM_imull, TOK_ASM_imul,
 TOK_ASM_divb, TOK_ASM_divw, TOK_ASM_divl, TOK_ASM_div,
 TOK_ASM_idivb, TOK_ASM_idivw, TOK_ASM_idivl, TOK_ASM_idiv,

 TOK_ASM_xchgb, TOK_ASM_xchgw, TOK_ASM_xchgl, TOK_ASM_xchg,
 TOK_ASM_testb, TOK_ASM_testw, TOK_ASM_testl, TOK_ASM_test,


 TOK_ASM_rolb, TOK_ASM_rolw, TOK_ASM_roll, TOK_ASM_rol,
 TOK_ASM_rorb, TOK_ASM_rorw, TOK_ASM_rorl, TOK_ASM_ror,
 TOK_ASM_rclb, TOK_ASM_rclw, TOK_ASM_rcll, TOK_ASM_rcl,
 TOK_ASM_rcrb, TOK_ASM_rcrw, TOK_ASM_rcrl, TOK_ASM_rcr,
 TOK_ASM_shlb, TOK_ASM_shlw, TOK_ASM_shll, TOK_ASM_shl,
 TOK_ASM_shrb, TOK_ASM_shrw, TOK_ASM_shrl, TOK_ASM_shr,
 TOK_ASM_sarb, TOK_ASM_sarw, TOK_ASM_sarl, TOK_ASM_sar,

 TOK_ASM_shldw,
 TOK_ASM_shldl,
 TOK_ASM_shld,
 TOK_ASM_shrdw,
 TOK_ASM_shrdl,
 TOK_ASM_shrd,

 TOK_ASM_pushw,
 TOK_ASM_pushl,
 TOK_ASM_push,
 TOK_ASM_popw,
 TOK_ASM_popl,
 TOK_ASM_pop,
 TOK_ASM_inb, TOK_ASM_inw, TOK_ASM_inl, TOK_ASM_in,
 TOK_ASM_outb, TOK_ASM_outw, TOK_ASM_outl, TOK_ASM_out,

 TOK_ASM_movzbw, TOK_ASM_movzbl, TOK_ASM_movzb,

 TOK_ASM_movzwl,
 TOK_ASM_movsbw,
 TOK_ASM_movsbl,
 TOK_ASM_movswl,

 TOK_ASM_leaw, TOK_ASM_leal, TOK_ASM_lea,

 TOK_ASM_les,
 TOK_ASM_lds,
 TOK_ASM_lss,
 TOK_ASM_lfs,
 TOK_ASM_lgs,

 TOK_ASM_call,
 TOK_ASM_jmp,
 TOK_ASM_lcall,
 TOK_ASM_ljmp,

 TOK_ASM_jo, TOK_ASM_jno, TOK_ASM_jb, TOK_ASM_jc, TOK_ASM_jnae, TOK_ASM_jnb, TOK_ASM_jnc, TOK_ASM_jae, TOK_ASM_je, TOK_ASM_jz, TOK_ASM_jne, TOK_ASM_jnz, TOK_ASM_jbe, TOK_ASM_jna, TOK_ASM_jnbe, TOK_ASM_ja, TOK_ASM_js, TOK_ASM_jns, TOK_ASM_jp, TOK_ASM_jpe, TOK_ASM_jnp, TOK_ASM_jpo, TOK_ASM_jl, TOK_ASM_jnge, TOK_ASM_jnl, TOK_ASM_jge, TOK_ASM_jle, TOK_ASM_jng, TOK_ASM_jnle, TOK_ASM_jg,

 TOK_ASM_seto, TOK_ASM_setno, TOK_ASM_setb, TOK_ASM_setc, TOK_ASM_setnae, TOK_ASM_setnb, TOK_ASM_setnc, TOK_ASM_setae, TOK_ASM_sete, TOK_ASM_setz, TOK_ASM_setne, TOK_ASM_setnz, TOK_ASM_setbe, TOK_ASM_setna, TOK_ASM_setnbe, TOK_ASM_seta, TOK_ASM_sets, TOK_ASM_setns, TOK_ASM_setp, TOK_ASM_setpe, TOK_ASM_setnp, TOK_ASM_setpo, TOK_ASM_setl, TOK_ASM_setnge, TOK_ASM_setnl, TOK_ASM_setge, TOK_ASM_setle, TOK_ASM_setng, TOK_ASM_setnle, TOK_ASM_setg,
 TOK_ASM_cmovo, TOK_ASM_cmovno, TOK_ASM_cmovb, TOK_ASM_cmovc, TOK_ASM_cmovnae, TOK_ASM_cmovnb, TOK_ASM_cmovnc, TOK_ASM_cmovae, TOK_ASM_cmove, TOK_ASM_cmovz, TOK_ASM_cmovne, TOK_ASM_cmovnz, TOK_ASM_cmovbe, TOK_ASM_cmovna, TOK_ASM_cmovnbe, TOK_ASM_cmova, TOK_ASM_cmovs, TOK_ASM_cmovns, TOK_ASM_cmovp, TOK_ASM_cmovpe, TOK_ASM_cmovnp, TOK_ASM_cmovpo, TOK_ASM_cmovl, TOK_ASM_cmovnge, TOK_ASM_cmovnl, TOK_ASM_cmovge, TOK_ASM_cmovle, TOK_ASM_cmovng, TOK_ASM_cmovnle, TOK_ASM_cmovg,

 TOK_ASM_bsfw, TOK_ASM_bsfl, TOK_ASM_bsf,
 TOK_ASM_bsrw, TOK_ASM_bsrl, TOK_ASM_bsr,
 TOK_ASM_btw, TOK_ASM_btl, TOK_ASM_bt,
 TOK_ASM_btsw, TOK_ASM_btsl, TOK_ASM_bts,
 TOK_ASM_btrw, TOK_ASM_btrl, TOK_ASM_btr,
 TOK_ASM_btcw, TOK_ASM_btcl, TOK_ASM_btc,

 TOK_ASM_lslw, TOK_ASM_lsll, TOK_ASM_lsl,


 TOK_ASM_fadd, TOK_ASM_faddp, TOK_ASM_fadds, TOK_ASM_fiaddl, TOK_ASM_faddl, TOK_ASM_fiadds,
 TOK_ASM_fmul, TOK_ASM_fmulp, TOK_ASM_fmuls, TOK_ASM_fimull, TOK_ASM_fmull, TOK_ASM_fimuls,

 TOK_ASM_fcom,
 TOK_ASM_fcom_1,
 TOK_ASM_fcoms, TOK_ASM_ficoml, TOK_ASM_fcoml, TOK_ASM_ficoms,

 TOK_ASM_fcomp, TOK_ASM_fcompp, TOK_ASM_fcomps, TOK_ASM_ficompl, TOK_ASM_fcompl, TOK_ASM_ficomps,
 TOK_ASM_fsub, TOK_ASM_fsubp, TOK_ASM_fsubs, TOK_ASM_fisubl, TOK_ASM_fsubl, TOK_ASM_fisubs,
 TOK_ASM_fsubr, TOK_ASM_fsubrp, TOK_ASM_fsubrs, TOK_ASM_fisubrl, TOK_ASM_fsubrl, TOK_ASM_fisubrs,
 TOK_ASM_fdiv, TOK_ASM_fdivp, TOK_ASM_fdivs, TOK_ASM_fidivl, TOK_ASM_fdivl, TOK_ASM_fidivs,
 TOK_ASM_fdivr, TOK_ASM_fdivrp, TOK_ASM_fdivrs, TOK_ASM_fidivrl, TOK_ASM_fdivrl, TOK_ASM_fidivrs,

 TOK_ASM_xaddb, TOK_ASM_xaddw, TOK_ASM_xaddl, TOK_ASM_xadd,
 TOK_ASM_cmpxchgb, TOK_ASM_cmpxchgw, TOK_ASM_cmpxchgl, TOK_ASM_cmpxchg,


 TOK_ASM_cmpsb, TOK_ASM_cmpsw, TOK_ASM_cmpsl, TOK_ASM_cmps,
 TOK_ASM_scmpb, TOK_ASM_scmpw, TOK_ASM_scmpl, TOK_ASM_scmp,
 TOK_ASM_insb, TOK_ASM_insw, TOK_ASM_insl, TOK_ASM_ins,
 TOK_ASM_outsb, TOK_ASM_outsw, TOK_ASM_outsl, TOK_ASM_outs,
 TOK_ASM_lodsb, TOK_ASM_lodsw, TOK_ASM_lodsl, TOK_ASM_lods,
 TOK_ASM_slodb, TOK_ASM_slodw, TOK_ASM_slodl, TOK_ASM_slod,
 TOK_ASM_movsb, TOK_ASM_movsw, TOK_ASM_movsl, TOK_ASM_movs,
 TOK_ASM_smovb, TOK_ASM_smovw, TOK_ASM_smovl, TOK_ASM_smov,
 TOK_ASM_scasb, TOK_ASM_scasw, TOK_ASM_scasl, TOK_ASM_scas,
 TOK_ASM_sscab, TOK_ASM_sscaw, TOK_ASM_sscal, TOK_ASM_ssca,
 TOK_ASM_stosb, TOK_ASM_stosw, TOK_ASM_stosl, TOK_ASM_stos,
 TOK_ASM_sstob, TOK_ASM_sstow, TOK_ASM_sstol, TOK_ASM_ssto,
# 459 "./tcctok.h"
# 1 "./i386-asm.h" 1
     TOK_ASM_pusha,
     TOK_ASM_popa,
     TOK_ASM_clc,
     TOK_ASM_cld,
     TOK_ASM_cli,
     TOK_ASM_clts,
     TOK_ASM_cmc,
     TOK_ASM_lahf,
     TOK_ASM_sahf,
     TOK_ASM_pushfl,
     TOK_ASM_popfl,
     TOK_ASM_pushf,
     TOK_ASM_popf,
     TOK_ASM_stc,
     TOK_ASM_std,
     TOK_ASM_sti,
     TOK_ASM_aaa,
     TOK_ASM_aas,
     TOK_ASM_daa,
     TOK_ASM_das,
     TOK_ASM_aad,
     TOK_ASM_aam,
     TOK_ASM_cbw,
     TOK_ASM_cwd,
     TOK_ASM_cwde,
     TOK_ASM_cdq,
     TOK_ASM_cbtw,
     TOK_ASM_cwtl,
     TOK_ASM_cwtd,
     TOK_ASM_cltd,
     TOK_ASM_int3,
     TOK_ASM_into,
     TOK_ASM_iret,
     TOK_ASM_rsm,
     TOK_ASM_hlt,
     TOK_ASM_wait,
     TOK_ASM_nop,
     TOK_ASM_xlat,
# 77 "./i386-asm.h"
     TOK_ASM_aword,
     TOK_ASM_addr16,
     TOK_ASM_word,
     TOK_ASM_data16,
     TOK_ASM_lock,
     TOK_ASM_rep,
     TOK_ASM_repe,
     TOK_ASM_repz,
     TOK_ASM_repne,
     TOK_ASM_repnz,

     TOK_ASM_invd,
     TOK_ASM_wbinvd,
     TOK_ASM_cpuid,
     TOK_ASM_wrmsr,
     TOK_ASM_rdtsc,
     TOK_ASM_rdmsr,
     TOK_ASM_rdpmc,
     TOK_ASM_ud2,
# 213 "./i386-asm.h"
    TOK_ASM_leave,
    TOK_ASM_ret,

    TOK_ASM_lret,
# 243 "./i386-asm.h"
     TOK_ASM_fucompp,
     TOK_ASM_ftst,
     TOK_ASM_fxam,
     TOK_ASM_fld1,
     TOK_ASM_fldl2t,
     TOK_ASM_fldl2e,
     TOK_ASM_fldpi,
     TOK_ASM_fldlg2,
     TOK_ASM_fldln2,
     TOK_ASM_fldz,

     TOK_ASM_f2xm1,
     TOK_ASM_fyl2x,
     TOK_ASM_fptan,
     TOK_ASM_fpatan,
     TOK_ASM_fxtract,
     TOK_ASM_fprem1,
     TOK_ASM_fdecstp,
     TOK_ASM_fincstp,
     TOK_ASM_fprem,
     TOK_ASM_fyl2xp1,
     TOK_ASM_fsqrt,
     TOK_ASM_fsincos,
     TOK_ASM_frndint,
     TOK_ASM_fscale,
     TOK_ASM_fsin,
     TOK_ASM_fcos,
     TOK_ASM_fchs,
     TOK_ASM_fabs,
     TOK_ASM_fninit,
     TOK_ASM_fnclex,
     TOK_ASM_fnop,
     TOK_ASM_fwait,
# 307 "./i386-asm.h"
    TOK_ASM_fxch,
# 318 "./i386-asm.h"
    TOK_ASM_fnstsw,
# 383 "./i386-asm.h"
    TOK_ASM_emms,
# 460 "./tcctok.h" 2







# 1 "./i386-asm.h" 1
# 212 "./i386-asm.h"
    TOK_ASM_enter,







    TOK_ASM_loopne,
    TOK_ASM_loopnz,
    TOK_ASM_loope,
    TOK_ASM_loopz,
    TOK_ASM_loop,
    TOK_ASM_jecxz,
# 278 "./i386-asm.h"
    TOK_ASM_fld,
    TOK_ASM_fldl,
    TOK_ASM_flds,

    TOK_ASM_fildl,
    TOK_ASM_fildq,
    TOK_ASM_fildll,
    TOK_ASM_fldt,
    TOK_ASM_fbld,


    TOK_ASM_fst,
    TOK_ASM_fstl,
    TOK_ASM_fsts,
    TOK_ASM_fstps,

    TOK_ASM_fstpl,
    TOK_ASM_fist,
    TOK_ASM_fistp,
    TOK_ASM_fistl,
    TOK_ASM_fistpl,

    TOK_ASM_fstp,
    TOK_ASM_fistpq,
    TOK_ASM_fistpll,
    TOK_ASM_fstpt,
    TOK_ASM_fbstp,






    TOK_ASM_fucom,
    TOK_ASM_fucomp,

    TOK_ASM_finit,
    TOK_ASM_fldcw,
    TOK_ASM_fnstcw,
    TOK_ASM_fstcw,



    TOK_ASM_fstsw,


    TOK_ASM_fclex,
    TOK_ASM_fnstenv,
    TOK_ASM_fstenv,
    TOK_ASM_fldenv,
    TOK_ASM_fnsave,
    TOK_ASM_fsave,
    TOK_ASM_frstor,
    TOK_ASM_ffree,
    TOK_ASM_ffreep,
    TOK_ASM_fxsave,
    TOK_ASM_fxrstor,


    TOK_ASM_arpl,
    TOK_ASM_lar,
    TOK_ASM_lgdt,
    TOK_ASM_lidt,
    TOK_ASM_lldt,
    TOK_ASM_lmsw,

    TOK_ASM_ltr,
    TOK_ASM_sgdt,
    TOK_ASM_sidt,
    TOK_ASM_sldt,
    TOK_ASM_smsw,
    TOK_ASM_str,
    TOK_ASM_verr,
    TOK_ASM_verw,


    TOK_ASM_bswap,


    TOK_ASM_invlpg,

    TOK_ASM_boundl,
    TOK_ASM_boundw,


    TOK_ASM_cmpxchg8b,




    TOK_ASM_fcmovb,
    TOK_ASM_fcmove,
    TOK_ASM_fcmovbe,
    TOK_ASM_fcmovu,
    TOK_ASM_fcmovnb,
    TOK_ASM_fcmovne,
    TOK_ASM_fcmovnbe,
    TOK_ASM_fcmovnu,

    TOK_ASM_fucomi,
    TOK_ASM_fcomi,
    TOK_ASM_fucomip,
    TOK_ASM_fcomip,



    TOK_ASM_movd,

    TOK_ASM_movq,

    TOK_ASM_packssdw,
    TOK_ASM_packsswb,
    TOK_ASM_packuswb,
    TOK_ASM_paddb,
    TOK_ASM_paddw,
    TOK_ASM_paddd,
    TOK_ASM_paddsb,
    TOK_ASM_paddsw,
    TOK_ASM_paddusb,
    TOK_ASM_paddusw,
    TOK_ASM_pand,
    TOK_ASM_pandn,
    TOK_ASM_pcmpeqb,
    TOK_ASM_pcmpeqw,
    TOK_ASM_pcmpeqd,
    TOK_ASM_pcmpgtb,
    TOK_ASM_pcmpgtw,
    TOK_ASM_pcmpgtd,
    TOK_ASM_pmaddwd,
    TOK_ASM_pmulhw,
    TOK_ASM_pmullw,
    TOK_ASM_por,
    TOK_ASM_psllw,

    TOK_ASM_pslld,

    TOK_ASM_psllq,

    TOK_ASM_psraw,

    TOK_ASM_psrad,

    TOK_ASM_psrlw,

    TOK_ASM_psrld,

    TOK_ASM_psrlq,

    TOK_ASM_psubb,
    TOK_ASM_psubw,
    TOK_ASM_psubd,
    TOK_ASM_psubsb,
    TOK_ASM_psubsw,
    TOK_ASM_psubusb,
    TOK_ASM_psubusw,
    TOK_ASM_punpckhbw,
    TOK_ASM_punpckhwd,
    TOK_ASM_punpckhdq,
    TOK_ASM_punpcklbw,
    TOK_ASM_punpcklwd,
    TOK_ASM_punpckldq,
    TOK_ASM_pxor,
# 468 "./tcctok.h" 2
# 687 "./tcc.h" 2

};
# 713 "./tcc.h"
extern float strtof (const char *__nptr, char **__endptr);
extern long double strtold (const char *__nptr, char **__endptr);
# 727 "./tcc.h"
void error(const char *fmt, ...);
void error_noabort(const char *fmt, ...);
void warning(const char *fmt, ...);

void tcc_set_lib_path_w32(TCCState *s);
int tcc_set_flag(TCCState *s, const char *flag_name, int value);
void tcc_print_stats(TCCState *s, int64_t total_time);

void tcc_free(void *ptr);
void *tcc_malloc(unsigned long size);
void *tcc_mallocz(unsigned long size);
void *tcc_realloc(void *ptr, unsigned long size);
char *tcc_strdup(const char *str);

char *tcc_basename(const char *name);
char *tcc_fileextension (const char *name);
char *pstrcpy(char *buf, int buf_size, const char *s);
char *pstrcat(char *buf, int buf_size, const char *s);
void dynarray_add(void ***ptab, int *nb_ptr, void *data);
void dynarray_reset(void *pp, int *n);


extern int num_callers;
extern const char **rt_bound_error_msg;



static inline int is_float(int t)
{
    int bt;
    bt = t & 0x000f;
    return bt == 10 || bt == 9 || bt == 8;
}


static inline int is_space(int ch)
{
    return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\r';
}
# 22 "libtcc.c" 2





int total_lines;
int total_bytes;


static struct BufferedFile *file;
static int ch, tok;
static CValue tokc;
static CString tokcstr;

static int tok_flags;





static int *macro_ptr, *macro_ptr_allocated;
static int *unget_saved_macro_ptr;
static int unget_saved_buffer[4 + 1];
static int unget_buffer_enabled;
static int parse_flags;
# 55 "libtcc.c"
static Section *text_section, *data_section, *bss_section;
static Section *cur_text_section;


static Section *last_text_section;


static Section *bounds_section;
static Section *lbounds_section;

static Section *symtab_section, *strtab_section;


static Section *stab_section, *stabstr_section;






static int rsym, anon_sym, ind, loc;

static int const_wanted;
static int nocode_wanted;
static int global_expr;

static CType func_vt;

static int func_vc;
static int last_line_num, last_ind, func_ind;
static int tok_ident;
static TokenSym **table_ident;
static TokenSym *hash_ident[8192];
static char token_buf[1024 + 1];
static char *funcname;
static Sym *global_stack, *local_stack;
static Sym *define_stack;
static Sym *global_label_stack, *local_label_stack;


static Sym *sym_free_first;
static void **sym_pools;
static int nb_sym_pools;

static SValue vstack[256], *vtop;

static CType char_pointer_type, func_old_type, int_type;


static int gnu_ext = 1;


static int tcc_ext = 1;



int num_callers = 6;
const char **rt_bound_error_msg;



static struct TCCState *tcc_state;





static void next(void);
char *get_tok_str(int v, CValue *cv);


static void parse_expr_type(CType *type);
static void expr_type(CType *type);
static void unary_type(CType *type);
static void block(int *bsym, int *csym, int *case_sym, int *def_sym,
                  int case_reg, int is_expr);
static int expr_const(void);
static void expr_eq(void);
static void gexpr(void);
static void gen_inline_functions(void);
static void decl(int l);
static void decl_initializer(CType *type, Section *sec, unsigned long c,
                             int first, int size_only);
static void decl_initializer_alloc(CType *type, AttributeDef *ad, int r,
                                   int has_init, int v, int scope);
int gv(int rc);
void gv2(int rc1, int rc2);
void move_reg(int r, int s);
void save_regs(int n);
void save_reg(int r);
void vpop(void);
void vswap(void);
void vdup(void);
int get_reg(int rc);
int get_reg_ex(int rc,int rc2);

void gen_op(int op);
void force_charshort_cast(int t);
static void gen_cast(CType *type);
void vstore(void);
static Sym *sym_find(int v);
static Sym *sym_push(int v, CType *type, int r, int c);


static int type_size(CType *type, int *a);
static inline CType *pointed_type(CType *type);
static int pointed_size(CType *type);
static int lvalue_type(int t);
static int parse_btype(CType *type, AttributeDef *ad);
static void type_decl(CType *type, AttributeDef *ad, int *v, int td);
static int compare_types(CType *type1, CType *type2, int unqualified);
static int is_compatible_types(CType *type1, CType *type2);
static int is_compatible_parameter_types(CType *type1, CType *type2);

int ieee_finite(double d);
void vpushi(int v);
void vpushll(long long v);
void vrott(int n);
void vnrott(int n);
void lexpand_nr(void);
static void vpush_global_sym(CType *type, int v);
void vset(CType *type, int r, int v);
void type_to_str(char *buf, int buf_size,
                 CType *type, const char *varstr);
static Sym *get_sym_ref(CType *type, Section *sec,
                        unsigned long offset, unsigned long size);
static Sym *external_global_sym(int v, CType *type, int r);


static void section_realloc(Section *sec, unsigned long new_size);
static void *section_ptr_add(Section *sec, unsigned long size);
static void put_extern_sym(Sym *sym, Section *section,
                           unsigned long value, unsigned long size);
static void greloc(Section *s, Sym *sym, unsigned long addr, int type);
static int put_elf_str(Section *s, const char *sym);
static int put_elf_sym(Section *s,
                       unsigned long value, unsigned long size,
                       int info, int other, int shndx, const char *name);
static int add_elf_sym(Section *s, unsigned long value, unsigned long size,
                       int info, int other, int sh_num, const char *name);
static void put_elf_reloc(Section *symtab, Section *s, unsigned long offset,
                          int type, int symbol);
static void put_stabs(const char *str, int type, int other, int desc,
                      unsigned long value);
static void put_stabs_r(const char *str, int type, int other, int desc,
                        unsigned long value, Section *sec, int sym_index);
static void put_stabn(int type, int other, int desc, int value);
static void put_stabd(int type, int other, int desc);
static int tcc_add_dll(TCCState *s, const char *filename, int flags);




static int tcc_add_file_internal(TCCState *s, const char *filename, int flags);


int tcc_output_coff(TCCState *s1, FILE *f);


void *resolve_sym(TCCState *s1, const char *sym, int type);
int pe_load_def_file(struct TCCState *s1, int fd);
int pe_test_res_file(void *v, int size);
int pe_load_res_file(struct TCCState *s1, int fd);
void pe_add_runtime(struct TCCState *s1);
void pe_guess_outfile(char *objfilename, int output_type);
int pe_output_file(struct TCCState *s1, const char *filename);



static void asm_expr(TCCState *s1, ExprValue *pe);
static int asm_int_expr(TCCState *s1);
static int find_constraint(ASMOperand *operands, int nb_operands,
                           const char *name, const char **pp);

static int tcc_assemble(TCCState *s1, int do_preprocess);


static void asm_instr(void);
static void asm_global_instr(void);





# 1 "./i386-gen.c" 1
# 38 "./i386-gen.c"
enum {
    TREG_EAX = 0,
    TREG_ECX,
    TREG_EDX,
    TREG_ST0,
};

int reg_classes[4] = {
              0x0001 | 0x0004,
              0x0001 | 0x0010,
              0x0001 | 0x0020,
              0x0002 | 0x0008,
};
# 88 "./i386-gen.c"
static unsigned long func_sub_sp_offset;
static unsigned long func_bound_offset;
static int func_ret_sub;


void g(int c)
{
    int ind1;
    ind1 = ind + 1;
    if (ind1 > cur_text_section->data_allocated)
        section_realloc(cur_text_section, ind1);
    cur_text_section->data[ind] = c;
    ind = ind1;
}

void o(unsigned int c)
{
    while (c) {
        g(c);
        c = c >> 8;
    }
}

void gen_le32(int c)
{
    g(c);
    g(c >> 8);
    g(c >> 16);
    g(c >> 24);
}


void gsym_addr(int t, int a)
{
    int n, *ptr;
    while (t) {
        ptr = (int *)(cur_text_section->data + t);
        n = *ptr;
        *ptr = a - t - 4;
        t = n;
    }
}

void gsym(int t)
{
    gsym_addr(t, ind);
}






static int oad(int c, int s)
{
    int ind1;

    o(c);
    ind1 = ind + 4;
    if (ind1 > cur_text_section->data_allocated)
        section_realloc(cur_text_section, ind1);
    *(int *)(cur_text_section->data + ind) = s;
    s = ind;
    ind = ind1;
    return s;
}


static void gen_addr32(int r, Sym *sym, int c)
{
    if (r & 0x0200)
        greloc(cur_text_section, sym, ind, 1);
    gen_le32(c);
}



static void gen_modrm(int op_reg, int r, Sym *sym, int c)
{
    op_reg = op_reg << 3;
    if ((r & 0x00ff) == 0x00f0) {

        o(0x05 | op_reg);
        gen_addr32(r, sym, c);
    } else if ((r & 0x00ff) == 0x00f2) {

        if (c == (char)c) {

            o(0x45 | op_reg);
            g(c);
        } else {
            oad(0x85 | op_reg, c);
        }
    } else {
        g(0x00 | op_reg | (r & 0x00ff));
    }
}



void load(int r, SValue *sv)
{
    int v, t, ft, fc, fr;
    SValue v1;

    fr = sv->r;
    ft = sv->type.t;
    fc = sv->c.ul;

    v = fr & 0x00ff;
    if (fr & 0x0100) {
        if (v == 0x00f1) {
            v1.type.t = 0;
            v1.r = 0x00f2 | 0x0100;
            v1.c.ul = fc;
            load(r, &v1);
            fr = r;
        }
        if ((ft & 0x000f) == 8) {
            o(0xd9);
            r = 0;
        } else if ((ft & 0x000f) == 9) {
            o(0xdd);
            r = 0;
        } else if ((ft & 0x000f) == 10) {
            o(0xdb);
            r = 5;
        } else if ((ft & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400)))) == 1) {
            o(0xbe0f);
        } else if ((ft & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400)))) == (1 | 0x0010)) {
            o(0xb60f);
        } else if ((ft & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400)))) == 2) {
            o(0xbf0f);
        } else if ((ft & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400)))) == (2 | 0x0010)) {
            o(0xb70f);
        } else {
            o(0x8b);
        }
        gen_modrm(r, fr, sv->sym, fc);
    } else {
        if (v == 0x00f0) {
            o(0xb8 + r);
            gen_addr32(fr, sv->sym, fc);
        } else if (v == 0x00f2) {
            o(0x8d);
            gen_modrm(r, 0x00f2, sv->sym, fc);
        } else if (v == 0x00f3) {
            oad(0xb8 + r, 0);
            o(0x0f);
            o(fc);
            o(0xc0 + r);
        } else if (v == 0x00f4 || v == 0x00f5) {
            t = v & 1;
            oad(0xb8 + r, t);
            o(0x05eb);
            gsym(fc);
            oad(0xb8 + r, t ^ 1);
        } else if (v != r) {
            o(0x89);
            o(0xc0 + r + v * 8);
        }
    }
}


void store(int r, SValue *v)
{
    int fr, bt, ft, fc;

    ft = v->type.t;
    fc = v->c.ul;
    fr = v->r & 0x00ff;
    bt = ft & 0x000f;

    if (bt == 8) {
        o(0xd9);
        r = 2;
    } else if (bt == 9) {
        o(0xdd);
        r = 2;
    } else if (bt == 10) {
        o(0xc0d9);
        o(0xdb);
        r = 7;
    } else {
        if (bt == 2)
            o(0x66);
        if (bt == 1 || bt == 11)
            o(0x88);
        else
            o(0x89);
    }
    if (fr == 0x00f0 ||
        fr == 0x00f2 ||
        (v->r & 0x0100)) {
        gen_modrm(r, v->r, v->sym, fc);
    } else if (fr != r) {
        o(0xc0 + fr + r * 8);
    }
}

static void gadd_sp(int val)
{
    if (val == (char)val) {
        o(0xc483);
        g(val);
    } else {
        oad(0xc481, val);
    }
}


static void gcall_or_jmp(int is_jmp)
{
    int r;
    if ((vtop->r & (0x00ff | 0x0100)) == 0x00f0) {

        if (vtop->r & 0x0200) {

            greloc(cur_text_section, vtop->sym,
                   ind + 1, 2);
        } else {

            put_elf_reloc(symtab_section, cur_text_section,
                          ind + 1, 2, 0);
        }
        oad(0xe8 + is_jmp, vtop->c.ul - 4);
    } else {

        r = gv(0x0001);
        o(0xff);
        o(0xd0 + r + (is_jmp << 4));
    }
}

static uint8_t fastcall_regs[3] = { TREG_EAX, TREG_EDX, TREG_ECX };
static uint8_t fastcallw_regs[2] = { TREG_ECX, TREG_EDX };




void gfunc_call(int nb_args)
{
    int size, align, r, args_size, i, func_call;
    Sym *func_sym;

    args_size = 0;
    for(i = 0;i < nb_args; i++) {
        if ((vtop->type.t & 0x000f) == 7) {
            size = type_size(&vtop->type, &align);

            size = (size + 3) & ~3;

            oad(0xec81, size);

            r = get_reg(0x0001);
            o(0x89);
            o(0xe0 + r);
            vset(&vtop->type, r | 0x0100, 0);
            vswap();
            vstore();
            args_size += size;
        } else if (is_float(vtop->type.t)) {
            gv(0x0002);
            if ((vtop->type.t & 0x000f) == 8)
                size = 4;
            else if ((vtop->type.t & 0x000f) == 9)
                size = 8;
            else
                size = 12;
            oad(0xec81, size);
            if (size == 12)
                o(0x7cdb);
            else
                o(0x5cd9 + size - 4);
            g(0x24);
            g(0x00);
            args_size += size;
        } else {


            r = gv(0x0001);
            if ((vtop->type.t & 0x000f) == 12) {
                size = 8;
                o(0x50 + vtop->r2);
            } else {
                size = 4;
            }
            o(0x50 + r);
            args_size += size;
        }
        vtop--;
    }
    save_regs(0);
    func_sym = vtop->type.ref;
    func_call = (((func_attr_t*)&(func_sym->r))->func_call);

    if ((func_call >= 2 && func_call <= 4) ||
        func_call == 5) {
        int fastcall_nb_regs;
        uint8_t *fastcall_regs_ptr;
        if (func_call == 5) {
            fastcall_regs_ptr = fastcallw_regs;
            fastcall_nb_regs = 2;
        } else {
            fastcall_regs_ptr = fastcall_regs;
            fastcall_nb_regs = func_call - 2 + 1;
        }
        for(i = 0;i < fastcall_nb_regs; i++) {
            if (args_size <= 0)
                break;
            o(0x58 + fastcall_regs_ptr[i]);

            args_size -= 4;
        }
    }
    gcall_or_jmp(0);
    if (args_size && func_call != 1)
        gadd_sp(args_size);
    vtop--;
}
# 417 "./i386-gen.c"
void gfunc_prolog(CType *func_type)
{
    int addr, align, size, func_call, fastcall_nb_regs;
    int param_index, param_addr;
    uint8_t *fastcall_regs_ptr;
    Sym *sym;
    CType *type;

    sym = func_type->ref;
    func_call = (((func_attr_t*)&(sym->r))->func_call);
    addr = 8;
    loc = 0;
    if (func_call >= 2 && func_call <= 4) {
        fastcall_nb_regs = func_call - 2 + 1;
        fastcall_regs_ptr = fastcall_regs;
    } else if (func_call == 5) {
        fastcall_nb_regs = 2;
        fastcall_regs_ptr = fastcallw_regs;
    } else {
        fastcall_nb_regs = 0;
        fastcall_regs_ptr = ((void *)0);
    }
    param_index = 0;

    ind += 9;
    func_sub_sp_offset = ind;


    func_vt = sym->type;
    if ((func_vt.t & 0x000f) == 7) {

        func_vc = addr;
        addr += 4;
        param_index++;
    }

    while ((sym = sym->next) != ((void *)0)) {
        type = &sym->type;
        size = type_size(type, &align);
        size = (size + 3) & ~3;






        if (param_index < fastcall_nb_regs) {

            loc -= 4;
            o(0x89);
            gen_modrm(fastcall_regs_ptr[param_index], 0x00f2, ((void *)0), loc);
            param_addr = loc;
        } else {
            param_addr = addr;
            addr += size;
        }
        sym_push(sym->v & ~0x20000000, type,
                 0x00f2 | lvalue_type(type->t), param_addr);
        param_index++;
    }
    func_ret_sub = 0;

    if (func_call == 1)
        func_ret_sub = addr - 8;


    if (tcc_state->do_bounds_check) {
        oad(0xb8, 0);
        oad(0xb8, 0);
        func_bound_offset = lbounds_section->data_offset;
    }
}


void gfunc_epilog(void)
{
    int v, saved_ind;


    if (tcc_state->do_bounds_check
     && func_bound_offset != lbounds_section->data_offset) {
        int saved_ind;
        int *bounds_ptr;
        Sym *sym, *sym_data;

        bounds_ptr = section_ptr_add(lbounds_section, sizeof(int));
        *bounds_ptr = 0;

        saved_ind = ind;
        ind = func_sub_sp_offset;
        sym_data = get_sym_ref(&char_pointer_type, lbounds_section,
                               func_bound_offset, lbounds_section->data_offset);
        greloc(cur_text_section, sym_data,
               ind + 1, 1);
        oad(0xb8, 0);
        sym = external_global_sym(TOK___bound_local_new, &func_old_type, 0);
        greloc(cur_text_section, sym,
               ind + 1, 2);
        oad(0xe8, -4);
        ind = saved_ind;

        o(0x5250);
        greloc(cur_text_section, sym_data,
               ind + 1, 1);
        oad(0xb8, 0);
        sym = external_global_sym(TOK___bound_local_delete, &func_old_type, 0);
        greloc(cur_text_section, sym,
               ind + 1, 2);
        oad(0xe8, -4);
        o(0x585a);
    }

    o(0xc9);
    if (func_ret_sub == 0) {
        o(0xc3);
    } else {
        o(0xc2);
        g(func_ret_sub);
        g(func_ret_sub >> 8);
    }


    v = (-loc + 3) & -4;
    saved_ind = ind;
    ind = func_sub_sp_offset - 9;
# 550 "./i386-gen.c"
    {
        o(0xe58955);
        o(0xec81);
        gen_le32(v);



    }
    ind = saved_ind;
}


int gjmp(int t)
{
    return oad(0xe9, t);
}


void gjmp_addr(int a)
{
    int r;
    r = a - ind - 2;
    if (r == (char)r) {
        g(0xeb);
        g(r);
    } else {
        oad(0xe9, a - ind - 5);
    }
}


int gtst(int inv, int t)
{
    int v, *p;

    v = vtop->r & 0x00ff;
    if (v == 0x00f3) {

        g(0x0f);
        t = oad((vtop->c.i - 16) ^ inv, t);
    } else if (v == 0x00f4 || v == 0x00f5) {

        if ((v & 1) == inv) {

            p = &vtop->c.i;
            while (*p != 0)
                p = (int *)(cur_text_section->data + *p);
            *p = t;
            t = vtop->c.i;
        } else {
            t = gjmp(t);
            gsym(vtop->c.i);
        }
    } else {
        if (is_float(vtop->type.t) ||
            (vtop->type.t & 0x000f) == 12) {
            vpushi(0);
            gen_op(0x95);
        }
        if ((vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0) {

            if ((vtop->c.i != 0) != inv)
                t = gjmp(t);
        } else {
            v = gv(0x0001);
            o(0x85);
            o(0xc0 + v * 9);
            g(0x0f);
            t = oad(0x85 ^ inv, t);
        }
    }
    vtop--;
    return t;
}


void gen_opi(int op)
{
    int r, fr, opc, c;

    switch(op) {
    case '+':
    case 0xc3:
        opc = 0;
    gen_op8:
        if ((vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0) {

            vswap();
            r = gv(0x0001);
            vswap();
            c = vtop->c.i;
            if (c == (char)c) {

                o(0x83);
                o(0xc0 | (opc << 3) | r);
                g(c);
            } else {
                o(0x81);
                oad(0xc0 | (opc << 3) | r, c);
            }
        } else {
            gv2(0x0001, 0x0001);
            r = vtop[-1].r;
            fr = vtop[0].r;
            o((opc << 3) | 0x01);
            o(0xc0 + r + fr * 8);
        }
        vtop--;
        if (op >= 0x92 && op <= 0x9f) {
            vtop->r = 0x00f3;
            vtop->c.i = op;
        }
        break;
    case '-':
    case 0xc5:
        opc = 5;
        goto gen_op8;
    case 0xc4:
        opc = 2;
        goto gen_op8;
    case 0xc6:
        opc = 3;
        goto gen_op8;
    case '&':
        opc = 4;
        goto gen_op8;
    case '^':
        opc = 6;
        goto gen_op8;
    case '|':
        opc = 1;
        goto gen_op8;
    case '*':
        gv2(0x0001, 0x0001);
        r = vtop[-1].r;
        fr = vtop[0].r;
        vtop--;
        o(0xaf0f);
        o(0xc0 + fr + r * 8);
        break;
    case 0x01:
        opc = 4;
        goto gen_shift;
    case 0xcd:
        opc = 5;
        goto gen_shift;
    case 0x02:
        opc = 7;
    gen_shift:
        opc = 0xc0 | (opc << 3);
        if ((vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0) {

            vswap();
            r = gv(0x0001);
            vswap();
            c = vtop->c.i & 0x1f;
            o(0xc1);
            o(opc | r);
            g(c);
        } else {

            gv2(0x0001, 0x0010);
            r = vtop[-1].r;
            o(0xd3);
            o(opc | r);
        }
        vtop--;
        break;
    case '/':
    case 0xb0:
    case 0xb2:
    case '%':
    case 0xb1:
    case 0xc2:


        gv2(0x0004, 0x0010);
        r = vtop[-1].r;
        fr = vtop[0].r;
        vtop--;
        save_reg(TREG_EDX);
        if (op == 0xc2) {
            o(0xf7);
            o(0xe0 + fr);
            vtop->r2 = TREG_EDX;
            r = TREG_EAX;
        } else {
            if (op == 0xb0 || op == 0xb1) {
                o(0xf7d231);
                o(0xf0 + fr);
            } else {
                o(0xf799);
                o(0xf8 + fr);
            }
            if (op == '%' || op == 0xb1)
                r = TREG_EDX;
            else
                r = TREG_EAX;
        }
        vtop->r = r;
        break;
    default:
        opc = 7;
        goto gen_op8;
    }
}




void gen_opf(int op)
{
    int a, ft, fc, swapped, r;


    if ((vtop[-1].r & (0x00ff | 0x0100)) == 0x00f0) {
        vswap();
        gv(0x0002);
        vswap();
    }
    if ((vtop[0].r & (0x00ff | 0x0100)) == 0x00f0)
        gv(0x0002);


    if ((vtop[-1].r & 0x0100) &&
        (vtop[0].r & 0x0100)) {
        vswap();
        gv(0x0002);
        vswap();
    }
    swapped = 0;


    if (vtop[-1].r & 0x0100) {
        vswap();
        swapped = 1;
    }
    if (op >= 0x92 && op <= 0x9f) {

        load(TREG_ST0, vtop);
        save_reg(TREG_EAX);
        if (op == 0x9d || op == 0x9f)
            swapped = !swapped;
        else if (op == 0x94 || op == 0x95)
            swapped = 0;
        if (swapped)
            o(0xc9d9);
        o(0xe9da);
        o(0xe0df);
        if (op == 0x94) {
            o(0x45e480);
            o(0x40fC80);
        } else if (op == 0x95) {
            o(0x45e480);
            o(0x40f480);
            op = 0x95;
        } else if (op == 0x9d || op == 0x9e) {
            o(0x05c4f6);
            op = 0x94;
        } else {
            o(0x45c4f6);
            op = 0x94;
        }
        vtop--;
        vtop->r = 0x00f3;
        vtop->c.i = op;
    } else {

        if ((vtop->type.t & 0x000f) == 10) {
            load(TREG_ST0, vtop);
            swapped = !swapped;
        }

        switch(op) {
        default:
        case '+':
            a = 0;
            break;
        case '-':
            a = 4;
            if (swapped)
                a++;
            break;
        case '*':
            a = 1;
            break;
        case '/':
            a = 6;
            if (swapped)
                a++;
            break;
        }
        ft = vtop->type.t;
        fc = vtop->c.ul;
        if ((ft & 0x000f) == 10) {
            o(0xde);
            o(0xc1 + (a << 3));
        } else {

            r = vtop->r;
            if ((r & 0x00ff) == 0x00f1) {
                SValue v1;
                r = get_reg(0x0001);
                v1.type.t = 0;
                v1.r = 0x00f2 | 0x0100;
                v1.c.ul = fc;
                load(r, &v1);
                fc = 0;
            }

            if ((ft & 0x000f) == 9)
                o(0xdc);
            else
                o(0xd8);
            gen_modrm(a, r, vtop->sym, fc);
        }
        vtop--;
    }
}



void gen_cvt_itof(int t)
{
    save_reg(TREG_ST0);
    gv(0x0001);
    if ((vtop->type.t & 0x000f) == 12) {


        o(0x50 + vtop->r2);
        o(0x50 + (vtop->r & 0x00ff));
        o(0x242cdf);
        o(0x08c483);
    } else if ((vtop->type.t & (0x000f | 0x0010)) ==
               (0 | 0x0010)) {

        o(0x6a);
        g(0x00);
        o(0x50 + (vtop->r & 0x00ff));
        o(0x242cdf);
        o(0x08c483);
    } else {

        o(0x50 + (vtop->r & 0x00ff));
        o(0x2404db);
        o(0x04c483);
    }
    vtop->r = TREG_ST0;
}



void gen_cvt_ftoi(int t)
{
    int r, r2, size;
    Sym *sym;
    CType ushort_type;

    ushort_type.t = 2 | 0x0010;

    gv(0x0002);
    if (t != 0)
        size = 8;
    else
        size = 4;

    o(0x2dd9);
    sym = external_global_sym(TOK___tcc_int_fpu_control,
                              &ushort_type, 0x0100);
    greloc(cur_text_section, sym,
           ind, 1);
    gen_le32(0);

    oad(0xec81, size);
    if (size == 4)
        o(0x1cdb);
    else
        o(0x3cdf);
    o(0x24);
    o(0x2dd9);
    sym = external_global_sym(TOK___tcc_fpu_control,
                              &ushort_type, 0x0100);
    greloc(cur_text_section, sym,
           ind, 1);
    gen_le32(0);

    r = get_reg(0x0001);
    o(0x58 + r);
    if (size == 8) {
        if (t == 12) {
            vtop->r = r;
            r2 = get_reg(0x0001);
            o(0x58 + r2);
            vtop->r2 = r2;
        } else {
            o(0x04c483);
        }
    }
    vtop->r = r;
}


void gen_cvt_ftof(int t)
{

    gv(0x0002);
}


void ggoto(void)
{
    gcall_or_jmp(1);
    vtop--;
}





void gen_bounded_ptr_add(void)
{
    Sym *sym;


    gv2(0x0004, 0x0020);

    vtop -= 2;
    save_regs(0);

    sym = external_global_sym(TOK___bound_ptr_add, &func_old_type, 0);
    greloc(cur_text_section, sym,
           ind + 1, 2);
    oad(0xe8, -4);

    vtop++;
    vtop->r = TREG_EAX | 0x8000;

    vtop->c.ul = (cur_text_section->reloc->data_offset - sizeof(Elf32_Rel));
}



void gen_bounded_ptr_deref(void)
{
    int func;
    int size, align;
    Elf32_Rel *rel;
    Sym *sym;

    size = 0;

    if (!is_float(vtop->type.t)) {
        if (vtop->r & 0x1000)
            size = 1;
        else if (vtop->r & 0x2000)
            size = 2;
    }
    if (!size)
        size = type_size(&vtop->type, &align);
    switch(size) {
    case 1: func = TOK___bound_ptr_indir1; break;
    case 2: func = TOK___bound_ptr_indir2; break;
    case 4: func = TOK___bound_ptr_indir4; break;
    case 8: func = TOK___bound_ptr_indir8; break;
    case 12: func = TOK___bound_ptr_indir12; break;
    case 16: func = TOK___bound_ptr_indir16; break;
    default:
        error("unhandled size when derefencing bounded pointer");
        func = 0;
        break;
    }



    rel = (Elf32_Rel *)(cur_text_section->reloc->data + vtop->c.ul);
    sym = external_global_sym(func, &func_old_type, 0);
    if (!sym->c)
        put_extern_sym(sym, ((void *)0), 0, 0);
    rel->r_info = (((sym->c) << 8) + ((((rel->r_info) & 0xff)) & 0xff));
}
# 240 "libtcc.c" 2
# 308 "libtcc.c"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/dlfcn.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/dlfcn.h" 3 4
# 1 "/opt/homebrew/Cellar/llvm/14.0.6_1/lib/clang/14.0.6/include/stdbool.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/dlfcn.h" 2 3 4
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/dlfcn.h" 3 4
typedef struct dl_info {
        const char *dli_fname;
        void *dli_fbase;
        const char *dli_sname;
        void *dli_saddr;
} Dl_info;

extern int dladdr(const void *, Dl_info *);




extern int dlclose(void * __handle) __attribute__((availability(driverkit,unavailable)));
extern char * dlerror(void) __attribute__((availability(driverkit,unavailable)));
extern void * dlopen(const char * __path, int __mode) __attribute__((availability(driverkit,unavailable)));
extern void * dlsym(void * __handle, const char * __symbol) __attribute__((availability(driverkit,unavailable)));


extern _Bool dlopen_preflight(const char* __path) __attribute__((availability(macosx,introduced=10.5))) __attribute__((availability(driverkit,unavailable)));
# 309 "libtcc.c" 2

void *resolve_sym(TCCState *s1, const char *sym, int type)
{
    return dlsym(((void *) -2), sym);
}
# 322 "libtcc.c"
int ieee_finite(double d)
{
    int *p = (int *)&d;
    return ((unsigned)((p[1] | 0x800fffff) + 1)) >> 31;
}


char *pstrcpy(char *buf, int buf_size, const char *s)
{
    char *q, *q_end;
    int c;

    if (buf_size > 0) {
        q = buf;
        q_end = buf + buf_size - 1;
        while (q < q_end) {
            c = *s++;
            if (c == '\0')
                break;
            *q++ = c;
        }
        *q = '\0';
    }
    return buf;
}


char *pstrcat(char *buf, int buf_size, const char *s)
{
    int len;
    len = strlen(buf);
    if (len < buf_size)
        pstrcpy(buf + len, buf_size - len, s);
    return buf;
}


char *tcc_basename(const char *name)
{
    char *p = strchr(name, 0);
    while (p > name && !(p[-1] == '/'))
        --p;
    return p;
}

char *tcc_fileextension (const char *name)
{
    char *b = tcc_basename(name);
    char *e = strrchr(b, '.');
    return e ? e : strchr(b, 0);
}
# 400 "libtcc.c"
void set_pages_executable(void *ptr, unsigned long length)
{




    unsigned long start, end;
    start = (unsigned long)ptr & ~(4096 - 1);
    end = (unsigned long)ptr + length;
    end = (end + 4096 - 1) & ~(4096 - 1);
    mprotect((void *)start, end - start, 0x01 | 0x02 | 0x04);

}
# 421 "libtcc.c"
void tcc_free(void *ptr)
{



    free(ptr);
}

void *tcc_malloc(unsigned long size)
{
    void *ptr;
    ptr = malloc(size);
    if (!ptr && size)
        error("memory full");





    return ptr;
}

void *tcc_mallocz(unsigned long size)
{
    void *ptr;
    ptr = tcc_malloc(size);
    memset(ptr, 0, size);
    return ptr;
}

void *tcc_realloc(void *ptr, unsigned long size)
{
    void *ptr1;



    ptr1 = realloc(ptr, size);






    return ptr1;
}

char *tcc_strdup(const char *str)
{
    char *ptr;
    ptr = tcc_malloc(strlen(str) + 1);
    strcpy(ptr, str);
    return ptr;
}





void dynarray_add(void ***ptab, int *nb_ptr, void *data)
{
    int nb, nb_alloc;
    void **pp;

    nb = *nb_ptr;
    pp = *ptab;

    if ((nb & (nb - 1)) == 0) {
        if (!nb)
            nb_alloc = 1;
        else
            nb_alloc = nb * 2;
        pp = tcc_realloc(pp, nb_alloc * sizeof(void *));
        if (!pp)
            error("memory full");
        *ptab = pp;
    }
    pp[nb++] = data;
    *nb_ptr = nb;
}

void dynarray_reset(void *pp, int *n)
{
    void **p;
    for (p = *(void***)pp; *n; ++p, --*n)
        if (*p)
            tcc_free(*p);
    tcc_free(*(void**)pp);
    *(void**)pp = ((void *)0);
}


static Sym *__sym_malloc(void)
{
    Sym *sym_pool, *sym, *last_sym;
    int i;

    sym_pool = tcc_malloc((8192 / sizeof(Sym)) * sizeof(Sym));
    dynarray_add(&sym_pools, &nb_sym_pools, sym_pool);

    last_sym = sym_free_first;
    sym = sym_pool;
    for(i = 0; i < (8192 / sizeof(Sym)); i++) {
        sym->next = last_sym;
        last_sym = sym;
        sym++;
    }
    sym_free_first = last_sym;
    return last_sym;
}

static inline Sym *sym_malloc(void)
{
    Sym *sym;
    sym = sym_free_first;
    if (!sym)
        sym = __sym_malloc();
    sym_free_first = sym->next;
    return sym;
}

static inline void sym_free(Sym *sym)
{
    sym->next = sym_free_first;
    sym_free_first = sym;
}

Section *new_section(TCCState *s1, const char *name, int sh_type, int sh_flags)
{
    Section *sec;

    sec = tcc_mallocz(sizeof(Section) + strlen(name));
    strcpy(sec->name, name);
    sec->sh_type = sh_type;
    sec->sh_flags = sh_flags;
    switch(sh_type) {
    case 5:
    case 9:
    case 4:
    case 11:
    case 2:
    case 6:
        sec->sh_addralign = 4;
        break;
    case 3:
        sec->sh_addralign = 1;
        break;
    default:
        sec->sh_addralign = 32;
        break;
    }

    if (sh_flags & 0x80000000) {
        dynarray_add((void ***)&s1->priv_sections, &s1->nb_priv_sections, sec);
    } else {
        sec->sh_num = s1->nb_sections;
        dynarray_add((void ***)&s1->sections, &s1->nb_sections, sec);
    }

    return sec;
}

static void free_section(Section *s)
{
    tcc_free(s->data);
}


static void section_realloc(Section *sec, unsigned long new_size)
{
    unsigned long size;
    unsigned char *data;

    size = sec->data_allocated;
    if (size == 0)
        size = 1;
    while (size < new_size)
        size = size * 2;
    data = tcc_realloc(sec->data, size);
    if (!data)
        error("memory full");
    memset(data + sec->data_allocated, 0, size - sec->data_allocated);
    sec->data = data;
    sec->data_allocated = size;
}



static void *section_ptr_add(Section *sec, unsigned long size)
{
    unsigned long offset, offset1;

    offset = sec->data_offset;
    offset1 = offset + size;
    if (offset1 > sec->data_allocated)
        section_realloc(sec, offset1);
    sec->data_offset = offset1;
    return sec->data + offset;
}



Section *find_section(TCCState *s1, const char *name)
{
    Section *sec;
    int i;
    for(i = 1; i < s1->nb_sections; i++) {
        sec = s1->sections[i];
        if (!strcmp(name, sec->name))
            return sec;
    }

    return new_section(s1, name, 1, (1 << 1));
}



static void put_extern_sym2(Sym *sym, Section *section,
                            unsigned long value, unsigned long size,
                            int can_add_underscore)
{
    int sym_type, sym_bind, sh_num, info, other, attr;
    Elf32_Sym *esym;
    const char *name;
    char buf1[256];

    if (section == ((void *)0))
        sh_num = 0;
    else if (section == ((void *)1))
        sh_num = 0xfff1;
    else
        sh_num = section->sh_num;

    other = attr = 0;

    if ((sym->type.t & 0x000f) == 6) {
        sym_type = 2;
# 665 "libtcc.c"
    } else {
        sym_type = 1;
    }

    if (sym->type.t & 0x00000100)
        sym_bind = 0;
    else
        sym_bind = 1;

    if (!sym->c) {
        name = get_tok_str(sym->v, ((void *)0));

        if (tcc_state->do_bounds_check) {
            char buf[32];




            switch(sym->v) {
# 692 "libtcc.c"
            case TOK_memcpy:
            case TOK_memmove:
            case TOK_memset:
            case TOK_strlen:
            case TOK_strcpy:
            case TOK_alloca:
                strcpy(buf, "__bound_");
                strcat(buf, name);
                name = buf;
                break;
            }
        }
# 712 "libtcc.c"
        if (tcc_state->leading_underscore && can_add_underscore) {
            buf1[0] = '_';
            pstrcpy(buf1 + 1, sizeof(buf1) - 1, name);
            name = buf1;
        }
        info = (((sym_bind) << 4) + ((sym_type) & 0xf));
        sym->c = add_elf_sym(symtab_section, value, size, info, other, sh_num, name);
    } else {
        esym = &((Elf32_Sym *)symtab_section->data)[sym->c];
        esym->st_value = value;
        esym->st_size = size;
        esym->st_shndx = sh_num;
        esym->st_other |= other;
    }
}

static void put_extern_sym(Sym *sym, Section *section,
                           unsigned long value, unsigned long size)
{
    put_extern_sym2(sym, section, value, size, 1);
}


static void greloc(Section *s, Sym *sym, unsigned long offset, int type)
{
    if (!sym->c)
        put_extern_sym(sym, ((void *)0), 0, 0);

    put_elf_reloc(symtab_section, s, offset, type, sym->c);
}

static inline int isid(int c)
{
    return (c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        c == '_';
}

static inline int isnum(int c)
{
    return c >= '0' && c <= '9';
}

static inline int isoct(int c)
{
    return c >= '0' && c <= '7';
}

static inline int toup(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

static void strcat_vprintf(char *buf, int buf_size, const char *fmt, va_list ap)
{
    int len;
    len = strlen(buf);
    vsnprintf(buf + len, buf_size - len, fmt, ap);
}

static void strcat_printf(char *buf, int buf_size, const char *fmt, ...)
{
    va_list ap;
    __builtin_va_start(ap, fmt);
    strcat_vprintf(buf, buf_size, fmt, ap);
    __builtin_va_end(ap);
}

void error1(TCCState *s1, int is_warning, const char *fmt, va_list ap)
{
    char buf[2048];
    BufferedFile **f;

    buf[0] = '\0';
    if (file) {
        for(f = s1->include_stack; f < s1->include_stack_ptr; f++)
            strcat_printf(buf, sizeof(buf), "In file included from %s:%d:\n",
                          (*f)->filename, (*f)->line_num);
        if (file->line_num > 0) {
            strcat_printf(buf, sizeof(buf),
                          "%s:%d: ", file->filename, file->line_num);
        } else {
            strcat_printf(buf, sizeof(buf),
                          "%s: ", file->filename);
        }
    } else {
        strcat_printf(buf, sizeof(buf),
                      "tcc: ");
    }
    if (is_warning)
        strcat_printf(buf, sizeof(buf), "warning: ");
    strcat_vprintf(buf, sizeof(buf), fmt, ap);

    if (!s1->error_func) {

        fprintf(__stderrp, "%s\n", buf);
    } else {
        s1->error_func(s1->error_opaque, buf);
    }
    if (!is_warning || s1->warn_error)
        s1->nb_errors++;
}

void tcc_set_error_func(TCCState *s, void *error_opaque,
                        void (*error_func)(void *opaque, const char *msg))
{
    s->error_opaque = error_opaque;
    s->error_func = error_func;
}


void error_noabort(const char *fmt, ...)
{
    TCCState *s1 = tcc_state;
    va_list ap;

    __builtin_va_start(ap, fmt);
    error1(s1, 0, fmt, ap);
    __builtin_va_end(ap);
}

void error(const char *fmt, ...)
{
    TCCState *s1 = tcc_state;
    va_list ap;

    __builtin_va_start(ap, fmt);
    error1(s1, 0, fmt, ap);
    __builtin_va_end(ap);

    if (s1->error_set_jmp_enabled) {
        longjmp(s1->error_jmp_buf, 1);
    } else {

        exit(1);
    }
}

void expect(const char *msg)
{
    error("%s expected", msg);
}

void warning(const char *fmt, ...)
{
    TCCState *s1 = tcc_state;
    va_list ap;

    if (s1->warn_none)
        return;

    __builtin_va_start(ap, fmt);
    error1(s1, 1, fmt, ap);
    __builtin_va_end(ap);
}

void skip(int c)
{
    if (tok != c)
        error("'%c' expected", c);
    next();
}

static void test_lvalue(void)
{
    if (!(vtop->r & 0x0100))
        expect("lvalue");
}



static void cstr_realloc(CString *cstr, int new_size)
{
    int size;
    void *data;

    size = cstr->size_allocated;
    if (size == 0)
        size = 8;
    while (size < new_size)
        size = size * 2;
    data = tcc_realloc(cstr->data_allocated, size);
    if (!data)
        error("memory full");
    cstr->data_allocated = data;
    cstr->size_allocated = size;
    cstr->data = data;
}


static inline void cstr_ccat(CString *cstr, int ch)
{
    int size;
    size = cstr->size + 1;
    if (size > cstr->size_allocated)
        cstr_realloc(cstr, size);
    ((unsigned char *)cstr->data)[size - 1] = ch;
    cstr->size = size;
}

static void cstr_cat(CString *cstr, const char *str)
{
    int c;
    for(;;) {
        c = *str;
        if (c == '\0')
            break;
        cstr_ccat(cstr, c);
        str++;
    }
}


static void cstr_wccat(CString *cstr, int ch)
{
    int size;
    size = cstr->size + sizeof(nwchar_t);
    if (size > cstr->size_allocated)
        cstr_realloc(cstr, size);
    *(nwchar_t *)(((unsigned char *)cstr->data) + size - sizeof(nwchar_t)) = ch;
    cstr->size = size;
}

static void cstr_new(CString *cstr)
{
    memset(cstr, 0, sizeof(CString));
}


static void cstr_free(CString *cstr)
{
    tcc_free(cstr->data_allocated);
    cstr_new(cstr);
}




static void add_char(CString *cstr, int c)
{
    if (c == '\'' || c == '\"' || c == '\\') {

        cstr_ccat(cstr, '\\');
    }
    if (c >= 32 && c <= 126) {
        cstr_ccat(cstr, c);
    } else {
        cstr_ccat(cstr, '\\');
        if (c == '\n') {
            cstr_ccat(cstr, 'n');
        } else {
            cstr_ccat(cstr, '0' + ((c >> 6) & 7));
            cstr_ccat(cstr, '0' + ((c >> 3) & 7));
            cstr_ccat(cstr, '0' + (c & 7));
        }
    }
}


static Sym *sym_push2(Sym **ps, int v, int t, long c)
{
    Sym *s;
    s = sym_malloc();
    s->v = v;
    s->type.t = t;
    s->c = c;
    s->next = ((void *)0);

    s->prev = *ps;
    *ps = s;
    return s;
}



static Sym *sym_find2(Sym *s, int v)
{
    while (s) {
        if (s->v == v)
            return s;
        s = s->prev;
    }
    return ((void *)0);
}


static inline Sym *struct_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return ((void *)0);
    return table_ident[v]->sym_struct;
}


static inline Sym *sym_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return ((void *)0);
    return table_ident[v]->sym_identifier;
}


static Sym *sym_push(int v, CType *type, int r, int c)
{
    Sym *s, **ps;
    TokenSym *ts;

    if (local_stack)
        ps = &local_stack;
    else
        ps = &global_stack;
    s = sym_push2(ps, v, type->t, c);
    s->type.ref = type->ref;
    s->r = r;


    if (!(v & 0x20000000) && (v & ~0x40000000) < 0x10000000) {

        ts = table_ident[(v & ~0x40000000) - 256];
        if (v & 0x40000000)
            ps = &ts->sym_struct;
        else
            ps = &ts->sym_identifier;
        s->prev_tok = *ps;
        *ps = s;
    }
    return s;
}


static Sym *global_identifier_push(int v, int t, int c)
{
    Sym *s, **ps;
    s = sym_push2(&global_stack, v, t, c);

    if (v < 0x10000000) {
        ps = &table_ident[v - 256]->sym_identifier;


        while (*ps != ((void *)0))
            ps = &(*ps)->prev_tok;
        s->prev_tok = ((void *)0);
        *ps = s;
    }
    return s;
}


static void sym_pop(Sym **ptop, Sym *b)
{
    Sym *s, *ss, **ps;
    TokenSym *ts;
    int v;

    s = *ptop;
    while(s != b) {
        ss = s->prev;
        v = s->v;


        if (!(v & 0x20000000) && (v & ~0x40000000) < 0x10000000) {
            ts = table_ident[(v & ~0x40000000) - 256];
            if (v & 0x40000000)
                ps = &ts->sym_struct;
            else
                ps = &ts->sym_identifier;
            *ps = s->prev_tok;
        }
        sym_free(s);
        s = ss;
    }
    *ptop = b;
}



BufferedFile *tcc_open(TCCState *s1, const char *filename)
{
    int fd;
    BufferedFile *bf;

    if (strcmp(filename, "-") == 0)
        fd = 0, filename = "stdin";
    else
        fd = open(filename, 0x0000 | 0);
    if ((s1->verbose == 2 && fd >= 0) || s1->verbose == 3)
        printf("%s %*s%s\n", fd < 0 ? "nf":"->",
               (s1->include_stack_ptr - s1->include_stack), "", filename);
    if (fd < 0)
        return ((void *)0);
    bf = tcc_malloc(sizeof(BufferedFile));
    bf->fd = fd;
    bf->buf_ptr = bf->buffer;
    bf->buf_end = bf->buffer;
    bf->buffer[0] = '\\';
    pstrcpy(bf->filename, sizeof(bf->filename), filename);



    bf->line_num = 1;
    bf->ifndef_macro = 0;
    bf->ifdef_stack_ptr = s1->ifdef_stack_ptr;

    return bf;
}

void tcc_close(BufferedFile *bf)
{
    total_lines += bf->line_num;
    close(bf->fd);
    tcc_free(bf);
}

# 1 "./tccpp.c" 1
# 22 "./tccpp.c"
static const char tcc_keywords[] =

# 1 "./tcctok.h" 1

     "int" "\0"
     "void" "\0"
     "char" "\0"
     "if" "\0"
     "else" "\0"
     "while" "\0"
     "break" "\0"
     "return" "\0"
     "for" "\0"
     "extern" "\0"
     "static" "\0"
     "unsigned" "\0"
     "goto" "\0"
     "do" "\0"
     "continue" "\0"
     "switch" "\0"
     "case" "\0"

     "const" "\0"
     "__const" "\0"
     "__const__" "\0"
     "volatile" "\0"
     "__volatile" "\0"
     "__volatile__" "\0"
     "long" "\0"
     "register" "\0"
     "signed" "\0"
     "__signed" "\0"
     "__signed__" "\0"
     "auto" "\0"
     "inline" "\0"
     "__inline" "\0"
     "__inline__" "\0"
     "restrict" "\0"
     "__restrict" "\0"
     "__restrict__" "\0"
     "__extension__" "\0"

     "float" "\0"
     "double" "\0"
     "_Bool" "\0"
     "short" "\0"
     "struct" "\0"
     "union" "\0"
     "typedef" "\0"
     "default" "\0"
     "enum" "\0"
     "sizeof" "\0"
     "__attribute" "\0"
     "__attribute__" "\0"
     "__alignof" "\0"
     "__alignof__" "\0"
     "typeof" "\0"
     "__typeof" "\0"
     "__typeof__" "\0"
     "__label__" "\0"
     "asm" "\0"
     "__asm" "\0"
     "__asm__" "\0"




     "define" "\0"
     "include" "\0"
     "include_next" "\0"
     "ifdef" "\0"
     "ifndef" "\0"
     "elif" "\0"
     "endif" "\0"
     "defined" "\0"
     "undef" "\0"
     "error" "\0"
     "warning" "\0"
     "line" "\0"
     "pragma" "\0"
     "__LINE__" "\0"
     "__FILE__" "\0"
     "__DATE__" "\0"
     "__TIME__" "\0"
     "__FUNCTION__" "\0"
     "__VA_ARGS__" "\0"


     "__func__" "\0"



     "section" "\0"
     "__section__" "\0"
     "aligned" "\0"
     "__aligned__" "\0"
     "packed" "\0"
     "__packed__" "\0"
     "unused" "\0"
     "__unused__" "\0"
     "cdecl" "\0"
     "__cdecl" "\0"
     "__cdecl__" "\0"
     "stdcall" "\0"
     "__stdcall" "\0"
     "__stdcall__" "\0"
     "fastcall" "\0"
     "__fastcall" "\0"
     "__fastcall__" "\0"
     "dllexport" "\0"
     "noreturn" "\0"
     "__noreturn__" "\0"
     "__builtin_types_compatible_p" "\0"
     "__builtin_constant_p" "\0"
     "__builtin_frame_address" "\0"






     "regparm" "\0"
     "__regparm__" "\0"


     "pack" "\0"
# 139 "./tcctok.h"
     "memcpy" "\0"
     "memset" "\0"
     "__divdi3" "\0"
     "__moddi3" "\0"
     "__udivdi3" "\0"
     "__umoddi3" "\0"
# 182 "./tcctok.h"
     "__tcc_int_fpu_control" "\0"
     "__tcc_fpu_control" "\0"
# 194 "./tcctok.h"
     "__ashrdi3" "\0"
     "__lshrdi3" "\0"
     "__ashldi3" "\0"
     "__floatundisf" "\0"
     "__floatundidf" "\0"

     "__floatundixf" "\0"
     "__fixunsxfdi" "\0"

     "__fixunssfdi" "\0"
     "__fixunsdfdi" "\0"







     "__bound_ptr_add" "\0"
     "__bound_ptr_indir1" "\0"
     "__bound_ptr_indir2" "\0"
     "__bound_ptr_indir4" "\0"
     "__bound_ptr_indir8" "\0"
     "__bound_ptr_indir12" "\0"
     "__bound_ptr_indir16" "\0"
     "__bound_local_new" "\0"
     "__bound_local_delete" "\0"







     "memmove" "\0"
     "strlen" "\0"
     "strcpy" "\0"
     "alloca" "\0"




 "byte" "\0"
 "align" "\0"
 "skip" "\0"
 "space" "\0"
 "string" "\0"
 "asciz" "\0"
 "ascii" "\0"
 "globl" "\0"
 "global" "\0"
 "text" "\0"
 "data" "\0"
 "bss" "\0"
 "previous" "\0"
 "fill" "\0"
 "org" "\0"
 "quad" "\0"




 "al" "\0"
 "cl" "\0"
 "dl" "\0"
 "bl" "\0"
 "ah" "\0"
 "ch" "\0"
 "dh" "\0"
 "bh" "\0"
 "ax" "\0"
 "cx" "\0"
 "dx" "\0"
 "bx" "\0"
 "sp" "\0"
 "bp" "\0"
 "si" "\0"
 "di" "\0"
 "eax" "\0"
 "ecx" "\0"
 "edx" "\0"
 "ebx" "\0"
 "esp" "\0"
 "ebp" "\0"
 "esi" "\0"
 "edi" "\0"
 "mm0" "\0"
 "mm1" "\0"
 "mm2" "\0"
 "mm3" "\0"
 "mm4" "\0"
 "mm5" "\0"
 "mm6" "\0"
 "mm7" "\0"
 "xmm0" "\0"
 "xmm1" "\0"
 "xmm2" "\0"
 "xmm3" "\0"
 "xmm4" "\0"
 "xmm5" "\0"
 "xmm6" "\0"
 "xmm7" "\0"
 "cr0" "\0"
 "cr1" "\0"
 "cr2" "\0"
 "cr3" "\0"
 "cr4" "\0"
 "cr5" "\0"
 "cr6" "\0"
 "cr7" "\0"
 "tr0" "\0"
 "tr1" "\0"
 "tr2" "\0"
 "tr3" "\0"
 "tr4" "\0"
 "tr5" "\0"
 "tr6" "\0"
 "tr7" "\0"
 "db0" "\0"
 "db1" "\0"
 "db2" "\0"
 "db3" "\0"
 "db4" "\0"
 "db5" "\0"
 "db6" "\0"
 "db7" "\0"
 "dr0" "\0"
 "dr1" "\0"
 "dr2" "\0"
 "dr3" "\0"
 "dr4" "\0"
 "dr5" "\0"
 "dr6" "\0"
 "dr7" "\0"
 "es" "\0"
 "cs" "\0"
 "ss" "\0"
 "ds" "\0"
 "fs" "\0"
 "gs" "\0"
 "st" "\0"

 "mov" "b" "\0" "mov" "w" "\0" "mov" "l" "\0" "mov" "\0"


 "add" "b" "\0" "add" "w" "\0" "add" "l" "\0" "add" "\0"
 "or" "b" "\0" "or" "w" "\0" "or" "l" "\0" "or" "\0"
 "adc" "b" "\0" "adc" "w" "\0" "adc" "l" "\0" "adc" "\0"
 "sbb" "b" "\0" "sbb" "w" "\0" "sbb" "l" "\0" "sbb" "\0"
 "and" "b" "\0" "and" "w" "\0" "and" "l" "\0" "and" "\0"
 "sub" "b" "\0" "sub" "w" "\0" "sub" "l" "\0" "sub" "\0"
 "xor" "b" "\0" "xor" "w" "\0" "xor" "l" "\0" "xor" "\0"
 "cmp" "b" "\0" "cmp" "w" "\0" "cmp" "l" "\0" "cmp" "\0"


 "inc" "b" "\0" "inc" "w" "\0" "inc" "l" "\0" "inc" "\0"
 "dec" "b" "\0" "dec" "w" "\0" "dec" "l" "\0" "dec" "\0"
 "not" "b" "\0" "not" "w" "\0" "not" "l" "\0" "not" "\0"
 "neg" "b" "\0" "neg" "w" "\0" "neg" "l" "\0" "neg" "\0"
 "mul" "b" "\0" "mul" "w" "\0" "mul" "l" "\0" "mul" "\0"
 "imul" "b" "\0" "imul" "w" "\0" "imul" "l" "\0" "imul" "\0"
 "div" "b" "\0" "div" "w" "\0" "div" "l" "\0" "div" "\0"
 "idiv" "b" "\0" "idiv" "w" "\0" "idiv" "l" "\0" "idiv" "\0"

 "xchg" "b" "\0" "xchg" "w" "\0" "xchg" "l" "\0" "xchg" "\0"
 "test" "b" "\0" "test" "w" "\0" "test" "l" "\0" "test" "\0"


 "rol" "b" "\0" "rol" "w" "\0" "rol" "l" "\0" "rol" "\0"
 "ror" "b" "\0" "ror" "w" "\0" "ror" "l" "\0" "ror" "\0"
 "rcl" "b" "\0" "rcl" "w" "\0" "rcl" "l" "\0" "rcl" "\0"
 "rcr" "b" "\0" "rcr" "w" "\0" "rcr" "l" "\0" "rcr" "\0"
 "shl" "b" "\0" "shl" "w" "\0" "shl" "l" "\0" "shl" "\0"
 "shr" "b" "\0" "shr" "w" "\0" "shr" "l" "\0" "shr" "\0"
 "sar" "b" "\0" "sar" "w" "\0" "sar" "l" "\0" "sar" "\0"

 "shldw" "\0"
 "shldl" "\0"
 "shld" "\0"
 "shrdw" "\0"
 "shrdl" "\0"
 "shrd" "\0"

 "pushw" "\0"
 "pushl" "\0"
 "push" "\0"
 "popw" "\0"
 "popl" "\0"
 "pop" "\0"
 "in" "b" "\0" "in" "w" "\0" "in" "l" "\0" "in" "\0"
 "out" "b" "\0" "out" "w" "\0" "out" "l" "\0" "out" "\0"

 "movzb" "w" "\0" "movzb" "l" "\0" "movzb" "\0"

 "movzwl" "\0"
 "movsbw" "\0"
 "movsbl" "\0"
 "movswl" "\0"

 "lea" "w" "\0" "lea" "l" "\0" "lea" "\0"

 "les" "\0"
 "lds" "\0"
 "lss" "\0"
 "lfs" "\0"
 "lgs" "\0"

 "call" "\0"
 "jmp" "\0"
 "lcall" "\0"
 "ljmp" "\0"

 "jo" "\0" "jno" "\0" "jb" "\0" "jc" "\0" "jnae" "\0" "jnb" "\0" "jnc" "\0" "jae" "\0" "je" "\0" "jz" "\0" "jne" "\0" "jnz" "\0" "jbe" "\0" "jna" "\0" "jnbe" "\0" "ja" "\0" "js" "\0" "jns" "\0" "jp" "\0" "jpe" "\0" "jnp" "\0" "jpo" "\0" "jl" "\0" "jnge" "\0" "jnl" "\0" "jge" "\0" "jle" "\0" "jng" "\0" "jnle" "\0" "jg" "\0"

 "seto" "\0" "setno" "\0" "setb" "\0" "setc" "\0" "setnae" "\0" "setnb" "\0" "setnc" "\0" "setae" "\0" "sete" "\0" "setz" "\0" "setne" "\0" "setnz" "\0" "setbe" "\0" "setna" "\0" "setnbe" "\0" "seta" "\0" "sets" "\0" "setns" "\0" "setp" "\0" "setpe" "\0" "setnp" "\0" "setpo" "\0" "setl" "\0" "setnge" "\0" "setnl" "\0" "setge" "\0" "setle" "\0" "setng" "\0" "setnle" "\0" "setg" "\0"
 "cmovo" "\0" "cmovno" "\0" "cmovb" "\0" "cmovc" "\0" "cmovnae" "\0" "cmovnb" "\0" "cmovnc" "\0" "cmovae" "\0" "cmove" "\0" "cmovz" "\0" "cmovne" "\0" "cmovnz" "\0" "cmovbe" "\0" "cmovna" "\0" "cmovnbe" "\0" "cmova" "\0" "cmovs" "\0" "cmovns" "\0" "cmovp" "\0" "cmovpe" "\0" "cmovnp" "\0" "cmovpo" "\0" "cmovl" "\0" "cmovnge" "\0" "cmovnl" "\0" "cmovge" "\0" "cmovle" "\0" "cmovng" "\0" "cmovnle" "\0" "cmovg" "\0"

 "bsf" "w" "\0" "bsf" "l" "\0" "bsf" "\0"
 "bsr" "w" "\0" "bsr" "l" "\0" "bsr" "\0"
 "bt" "w" "\0" "bt" "l" "\0" "bt" "\0"
 "bts" "w" "\0" "bts" "l" "\0" "bts" "\0"
 "btr" "w" "\0" "btr" "l" "\0" "btr" "\0"
 "btc" "w" "\0" "btc" "l" "\0" "btc" "\0"

 "lsl" "w" "\0" "lsl" "l" "\0" "lsl" "\0"


 "f" "add" "\0" "f" "add" "p" "\0" "f" "add" "s" "\0" "fi" "add" "l" "\0" "f" "add" "l" "\0" "fi" "add" "s" "\0"
 "f" "mul" "\0" "f" "mul" "p" "\0" "f" "mul" "s" "\0" "fi" "mul" "l" "\0" "f" "mul" "l" "\0" "fi" "mul" "s" "\0"

 "fcom" "\0"
 "fcom_1" "\0"
 "f" "com" "s" "\0" "fi" "com" "l" "\0" "f" "com" "l" "\0" "fi" "com" "s" "\0"

 "f" "comp" "\0" "f" "comp" "p" "\0" "f" "comp" "s" "\0" "fi" "comp" "l" "\0" "f" "comp" "l" "\0" "fi" "comp" "s" "\0"
 "f" "sub" "\0" "f" "sub" "p" "\0" "f" "sub" "s" "\0" "fi" "sub" "l" "\0" "f" "sub" "l" "\0" "fi" "sub" "s" "\0"
 "f" "subr" "\0" "f" "subr" "p" "\0" "f" "subr" "s" "\0" "fi" "subr" "l" "\0" "f" "subr" "l" "\0" "fi" "subr" "s" "\0"
 "f" "div" "\0" "f" "div" "p" "\0" "f" "div" "s" "\0" "fi" "div" "l" "\0" "f" "div" "l" "\0" "fi" "div" "s" "\0"
 "f" "divr" "\0" "f" "divr" "p" "\0" "f" "divr" "s" "\0" "fi" "divr" "l" "\0" "f" "divr" "l" "\0" "fi" "divr" "s" "\0"

 "xadd" "b" "\0" "xadd" "w" "\0" "xadd" "l" "\0" "xadd" "\0"
 "cmpxchg" "b" "\0" "cmpxchg" "w" "\0" "cmpxchg" "l" "\0" "cmpxchg" "\0"


 "cmps" "b" "\0" "cmps" "w" "\0" "cmps" "l" "\0" "cmps" "\0"
 "scmp" "b" "\0" "scmp" "w" "\0" "scmp" "l" "\0" "scmp" "\0"
 "ins" "b" "\0" "ins" "w" "\0" "ins" "l" "\0" "ins" "\0"
 "outs" "b" "\0" "outs" "w" "\0" "outs" "l" "\0" "outs" "\0"
 "lods" "b" "\0" "lods" "w" "\0" "lods" "l" "\0" "lods" "\0"
 "slod" "b" "\0" "slod" "w" "\0" "slod" "l" "\0" "slod" "\0"
 "movs" "b" "\0" "movs" "w" "\0" "movs" "l" "\0" "movs" "\0"
 "smov" "b" "\0" "smov" "w" "\0" "smov" "l" "\0" "smov" "\0"
 "scas" "b" "\0" "scas" "w" "\0" "scas" "l" "\0" "scas" "\0"
 "ssca" "b" "\0" "ssca" "w" "\0" "ssca" "l" "\0" "ssca" "\0"
 "stos" "b" "\0" "stos" "w" "\0" "stos" "l" "\0" "stos" "\0"
 "ssto" "b" "\0" "ssto" "w" "\0" "ssto" "l" "\0" "ssto" "\0"
# 459 "./tcctok.h"
# 1 "./i386-asm.h" 1
     "pusha" "\0"
     "popa" "\0"
     "clc" "\0"
     "cld" "\0"
     "cli" "\0"
     "clts" "\0"
     "cmc" "\0"
     "lahf" "\0"
     "sahf" "\0"
     "pushfl" "\0"
     "popfl" "\0"
     "pushf" "\0"
     "popf" "\0"
     "stc" "\0"
     "std" "\0"
     "sti" "\0"
     "aaa" "\0"
     "aas" "\0"
     "daa" "\0"
     "das" "\0"
     "aad" "\0"
     "aam" "\0"
     "cbw" "\0"
     "cwd" "\0"
     "cwde" "\0"
     "cdq" "\0"
     "cbtw" "\0"
     "cwtl" "\0"
     "cwtd" "\0"
     "cltd" "\0"
     "int3" "\0"
     "into" "\0"
     "iret" "\0"
     "rsm" "\0"
     "hlt" "\0"
     "wait" "\0"
     "nop" "\0"
     "xlat" "\0"
# 77 "./i386-asm.h"
     "aword" "\0"
     "addr16" "\0"
     "word" "\0"
     "data16" "\0"
     "lock" "\0"
     "rep" "\0"
     "repe" "\0"
     "repz" "\0"
     "repne" "\0"
     "repnz" "\0"

     "invd" "\0"
     "wbinvd" "\0"
     "cpuid" "\0"
     "wrmsr" "\0"
     "rdtsc" "\0"
     "rdmsr" "\0"
     "rdpmc" "\0"
     "ud2" "\0"
# 213 "./i386-asm.h"
    "leave" "\0"
    "ret" "\0"

    "lret" "\0"
# 243 "./i386-asm.h"
     "fucompp" "\0"
     "ftst" "\0"
     "fxam" "\0"
     "fld1" "\0"
     "fldl2t" "\0"
     "fldl2e" "\0"
     "fldpi" "\0"
     "fldlg2" "\0"
     "fldln2" "\0"
     "fldz" "\0"

     "f2xm1" "\0"
     "fyl2x" "\0"
     "fptan" "\0"
     "fpatan" "\0"
     "fxtract" "\0"
     "fprem1" "\0"
     "fdecstp" "\0"
     "fincstp" "\0"
     "fprem" "\0"
     "fyl2xp1" "\0"
     "fsqrt" "\0"
     "fsincos" "\0"
     "frndint" "\0"
     "fscale" "\0"
     "fsin" "\0"
     "fcos" "\0"
     "fchs" "\0"
     "fabs" "\0"
     "fninit" "\0"
     "fnclex" "\0"
     "fnop" "\0"
     "fwait" "\0"
# 307 "./i386-asm.h"
    "fxch" "\0"
# 318 "./i386-asm.h"
    "fnstsw" "\0"
# 383 "./i386-asm.h"
    "emms" "\0"
# 460 "./tcctok.h" 2







# 1 "./i386-asm.h" 1
# 212 "./i386-asm.h"
    "enter" "\0"







    "loopne" "\0"
    "loopnz" "\0"
    "loope" "\0"
    "loopz" "\0"
    "loop" "\0"
    "jecxz" "\0"
# 278 "./i386-asm.h"
    "fld" "\0"
    "fldl" "\0"
    "flds" "\0"

    "fildl" "\0"
    "fildq" "\0"
    "fildll" "\0"
    "fldt" "\0"
    "fbld" "\0"


    "fst" "\0"
    "fstl" "\0"
    "fsts" "\0"
    "fstps" "\0"

    "fstpl" "\0"
    "fist" "\0"
    "fistp" "\0"
    "fistl" "\0"
    "fistpl" "\0"

    "fstp" "\0"
    "fistpq" "\0"
    "fistpll" "\0"
    "fstpt" "\0"
    "fbstp" "\0"






    "fucom" "\0"
    "fucomp" "\0"

    "finit" "\0"
    "fldcw" "\0"
    "fnstcw" "\0"
    "fstcw" "\0"



    "fstsw" "\0"


    "fclex" "\0"
    "fnstenv" "\0"
    "fstenv" "\0"
    "fldenv" "\0"
    "fnsave" "\0"
    "fsave" "\0"
    "frstor" "\0"
    "ffree" "\0"
    "ffreep" "\0"
    "fxsave" "\0"
    "fxrstor" "\0"


    "arpl" "\0"
    "lar" "\0"
    "lgdt" "\0"
    "lidt" "\0"
    "lldt" "\0"
    "lmsw" "\0"

    "ltr" "\0"
    "sgdt" "\0"
    "sidt" "\0"
    "sldt" "\0"
    "smsw" "\0"
    "str" "\0"
    "verr" "\0"
    "verw" "\0"


    "bswap" "\0"


    "invlpg" "\0"

    "boundl" "\0"
    "boundw" "\0"


    "cmpxchg8b" "\0"




    "fcmovb" "\0"
    "fcmove" "\0"
    "fcmovbe" "\0"
    "fcmovu" "\0"
    "fcmovnb" "\0"
    "fcmovne" "\0"
    "fcmovnbe" "\0"
    "fcmovnu" "\0"

    "fucomi" "\0"
    "fcomi" "\0"
    "fucomip" "\0"
    "fcomip" "\0"



    "movd" "\0"

    "movq" "\0"

    "packssdw" "\0"
    "packsswb" "\0"
    "packuswb" "\0"
    "paddb" "\0"
    "paddw" "\0"
    "paddd" "\0"
    "paddsb" "\0"
    "paddsw" "\0"
    "paddusb" "\0"
    "paddusw" "\0"
    "pand" "\0"
    "pandn" "\0"
    "pcmpeqb" "\0"
    "pcmpeqw" "\0"
    "pcmpeqd" "\0"
    "pcmpgtb" "\0"
    "pcmpgtw" "\0"
    "pcmpgtd" "\0"
    "pmaddwd" "\0"
    "pmulhw" "\0"
    "pmullw" "\0"
    "por" "\0"
    "psllw" "\0"

    "pslld" "\0"

    "psllq" "\0"

    "psraw" "\0"

    "psrad" "\0"

    "psrlw" "\0"

    "psrld" "\0"

    "psrlq" "\0"

    "psubb" "\0"
    "psubw" "\0"
    "psubd" "\0"
    "psubsb" "\0"
    "psubsw" "\0"
    "psubusb" "\0"
    "psubusw" "\0"
    "punpckhbw" "\0"
    "punpckhwd" "\0"
    "punpckhdq" "\0"
    "punpcklbw" "\0"
    "punpcklwd" "\0"
    "punpckldq" "\0"
    "pxor" "\0"
# 468 "./tcctok.h" 2
# 25 "./tccpp.c" 2

;


static char tok_two_chars[] = "<=\236>=\235!=\225&&\240||\241++\244--\242==\224<<\1>>\2+=\253-=\255*=\252/=\257%=\245&=\246^=\336|=\374->\313..\250##\266";


static unsigned char isidnum_table[256-(-1)];


struct macro_level {
    struct macro_level *prev;
    int *p;
};

static void next_nomacro(void);
static void next_nomacro_spc(void);
static void macro_subst(TokenString *tok_str, Sym **nested_list,
                        const int *macro_str, struct macro_level **can_read_stream);



static TokenSym *tok_alloc_new(TokenSym **pts, const char *str, int len)
{
    TokenSym *ts, **ptable;
    int i;

    if (tok_ident >= 0x10000000)
        error("memory full");


    i = tok_ident - 256;
    if ((i % 512) == 0) {
        ptable = tcc_realloc(table_ident, (i + 512) * sizeof(TokenSym *));
        if (!ptable)
            error("memory full");
        table_ident = ptable;
    }

    ts = tcc_malloc(sizeof(TokenSym) + len);
    table_ident[i] = ts;
    ts->tok = tok_ident++;
    ts->sym_define = ((void *)0);
    ts->sym_label = ((void *)0);
    ts->sym_struct = ((void *)0);
    ts->sym_identifier = ((void *)0);
    ts->len = len;
    ts->hash_next = ((void *)0);
    memcpy(ts->str, str, len);
    ts->str[len] = '\0';
    *pts = ts;
    return ts;
}





static TokenSym *tok_alloc(const char *str, int len)
{
    TokenSym *ts, **pts;
    int i;
    unsigned int h;

    h = 1;
    for(i=0;i<len;i++)
        h = ((h) * 263 + (((unsigned char *)str)[i]));
    h &= (8192 - 1);

    pts = &hash_ident[h];
    for(;;) {
        ts = *pts;
        if (!ts)
            break;
        if (ts->len == len && !memcmp(ts->str, str, len))
            return ts;
        pts = &(ts->hash_next);
    }
    return tok_alloc_new(pts, str, len);
}



char *get_tok_str(int v, CValue *cv)
{
    static char buf[1024 + 1];
    static CString cstr_buf;
    CString *cstr;
    unsigned char *q;
    char *p;
    int i, len;


    cstr_free(&cstr_buf);
    cstr_buf.data = buf;
    cstr_buf.size_allocated = sizeof(buf);
    p = buf;

    switch(v) {
    case 0xb3:
    case 0xc8:

        sprintf(p, "%u", cv->ui);
        break;
    case 0xc9:
    case 0xca:

        sprintf(p, "%Lu", cv->ull);
        break;
    case 0xb7:
        cstr_ccat(&cstr_buf, 'L');
    case 0xb4:
        cstr_ccat(&cstr_buf, '\'');
        add_char(&cstr_buf, cv->i);
        cstr_ccat(&cstr_buf, '\'');
        cstr_ccat(&cstr_buf, '\0');
        break;
    case 0xce:
        cstr = cv->cstr;
        len = cstr->size - 1;
        for(i=0;i<len;i++)
            add_char(&cstr_buf, ((unsigned char *)cstr->data)[i]);
        cstr_ccat(&cstr_buf, '\0');
        break;
    case 0xb8:
        cstr_ccat(&cstr_buf, 'L');
    case 0xb5:
        cstr = cv->cstr;
        cstr_ccat(&cstr_buf, '\"');
        if (v == 0xb5) {
            len = cstr->size - 1;
            for(i=0;i<len;i++)
                add_char(&cstr_buf, ((unsigned char *)cstr->data)[i]);
        } else {
            len = (cstr->size / sizeof(nwchar_t)) - 1;
            for(i=0;i<len;i++)
                add_char(&cstr_buf, ((nwchar_t *)cstr->data)[i]);
        }
        cstr_ccat(&cstr_buf, '\"');
        cstr_ccat(&cstr_buf, '\0');
        break;
    case 0x9c:
        v = '<';
        goto addv;
    case 0x9f:
        v = '>';
        goto addv;
    case 0xcc:
        return strcpy(p, "...");
    case 0x81:
        return strcpy(p, "<<=");
    case 0x82:
        return strcpy(p, ">>=");
    default:
        if (v < 256) {

            q = tok_two_chars;
            while (*q) {
                if (q[2] == v) {
                    *p++ = q[0];
                    *p++ = q[1];
                    *p = '\0';
                    return buf;
                }
                q += 3;
            }
        addv:
            *p++ = v;
            *p = '\0';
        } else if (v < tok_ident) {
            return table_ident[v - 256]->str;
        } else if (v >= 0x10000000) {

            sprintf(p, "L.%u", v - 0x10000000);
        } else {

            return ((void *)0);
        }
        break;
    }
    return cstr_buf.data;
}


static int tcc_peekc_slow(BufferedFile *bf)
{
    int len;

    if (bf->buf_ptr >= bf->buf_end) {
        if (bf->fd != -1) {



            len = 8192;

            len = read(bf->fd, bf->buffer, len);
            if (len < 0)
                len = 0;
        } else {
            len = 0;
        }
        total_bytes += len;
        bf->buf_ptr = bf->buffer;
        bf->buf_end = bf->buffer + len;
        *bf->buf_end = '\\';
    }
    if (bf->buf_ptr < bf->buf_end) {
        return bf->buf_ptr[0];
    } else {
        bf->buf_ptr = bf->buf_end;
        return (-1);
    }
}



static int handle_eob(void)
{
    return tcc_peekc_slow(file);
}


static inline void inp(void)
{
    ch = *(++(file->buf_ptr));

    if (ch == '\\')
        ch = handle_eob();
}


static int handle_stray_noerror(void)
{
    while (ch == '\\') {
        inp();
        if (ch == '\n') {
            file->line_num++;
            inp();
        } else if (ch == '\r') {
            inp();
            if (ch != '\n')
                goto fail;
            file->line_num++;
            inp();
        } else {
        fail:
            return 1;
        }
    }
    return 0;
}

static void handle_stray(void)
{
    if (handle_stray_noerror())
        error("stray '\\' in program");
}



static int handle_stray1(uint8_t *p)
{
    int c;

    if (p >= file->buf_end) {
        file->buf_ptr = p;
        c = handle_eob();
        p = file->buf_ptr;
        if (c == '\\')
            goto parse_stray;
    } else {
    parse_stray:
        file->buf_ptr = p;
        ch = *p;
        handle_stray();
        p = file->buf_ptr;
        c = *p;
    }
    return c;
}
# 332 "./tccpp.c"
static void minp(void)
{
    inp();
    if (ch == '\\')
        handle_stray();
}



static uint8_t *parse_line_comment(uint8_t *p)
{
    int c;

    p++;
    for(;;) {
        c = *p;
    redo:
        if (c == '\n' || c == (-1)) {
            break;
        } else if (c == '\\') {
            file->buf_ptr = p;
            c = handle_eob();
            p = file->buf_ptr;
            if (c == '\\') {
                { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                if (c == '\n') {
                    file->line_num++;
                    { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                } else if (c == '\r') {
                    { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                    if (c == '\n') {
                        file->line_num++;
                        { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                    }
                }
            } else {
                goto redo;
            }
        } else {
            p++;
        }
    }
    return p;
}


static uint8_t *parse_comment(uint8_t *p)
{
    int c;

    p++;
    for(;;) {

        for(;;) {
            c = *p;
            if (c == '\n' || c == '*' || c == '\\')
                break;
            p++;
            c = *p;
            if (c == '\n' || c == '*' || c == '\\')
                break;
            p++;
        }

        if (c == '\n') {
            file->line_num++;
            p++;
        } else if (c == '*') {
            p++;
            for(;;) {
                c = *p;
                if (c == '*') {
                    p++;
                } else if (c == '/') {
                    goto end_of_comment;
                } else if (c == '\\') {
                    file->buf_ptr = p;
                    c = handle_eob();
                    p = file->buf_ptr;
                    if (c == '\\') {

                        while (c == '\\') {
                            { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                            if (c == '\n') {
                                file->line_num++;
                                { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                            } else if (c == '\r') {
                                { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                                if (c == '\n') {
                                    file->line_num++;
                                    { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                                }
                            } else {
                                goto after_star;
                            }
                        }
                    }
                } else {
                    break;
                }
            }
        after_star: ;
        } else {

            file->buf_ptr = p;
            c = handle_eob();
            p = file->buf_ptr;
            if (c == (-1)) {
                error("unexpected end of file in comment");
            } else if (c == '\\') {
                p++;
            }
        }
    }
 end_of_comment:
    p++;
    return p;
}



static inline void skip_spaces(void)
{
    while (is_space(ch))
        minp();
}

static inline int check_space(int t, int *spc)
{
    if (is_space(t)) {
        if (*spc)
            return 1;
        *spc = 1;
    } else
        *spc = 0;
    return 0;
}


static uint8_t *parse_pp_string(uint8_t *p,
                                int sep, CString *str)
{
    int c;
    p++;
    for(;;) {
        c = *p;
        if (c == sep) {
            break;
        } else if (c == '\\') {
            file->buf_ptr = p;
            c = handle_eob();
            p = file->buf_ptr;
            if (c == (-1)) {
            unterminated_string:

                error("missing terminating %c character", sep);
            } else if (c == '\\') {

                { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                if (c == '\n') {
                    file->line_num++;
                    p++;
                } else if (c == '\r') {
                    { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
                    if (c != '\n')
                        expect("'\n' after '\r'");
                    file->line_num++;
                    p++;
                } else if (c == (-1)) {
                    goto unterminated_string;
                } else {
                    if (str) {
                        cstr_ccat(str, '\\');
                        cstr_ccat(str, c);
                    }
                    p++;
                }
            }
        } else if (c == '\n') {
            file->line_num++;
            goto add_char;
        } else if (c == '\r') {
            { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob(); p = file->buf_ptr; }};
            if (c != '\n') {
                if (str)
                    cstr_ccat(str, '\r');
            } else {
                file->line_num++;
                goto add_char;
            }
        } else {
        add_char:
            if (str)
                cstr_ccat(str, c);
            p++;
        }
    }
    p++;
    return p;
}



void preprocess_skip(void)
{
    int a, start_of_line, c, in_warn_or_error;
    uint8_t *p;

    p = file->buf_ptr;
    a = 0;
redo_start:
    start_of_line = 1;
    in_warn_or_error = 0;
    for(;;) {
    redo_no_start:
        c = *p;
        switch(c) {
        case ' ':
        case '\t':
        case '\f':
        case '\v':
        case '\r':
            p++;
            goto redo_no_start;
        case '\n':
            file->line_num++;
            p++;
            goto redo_start;
        case '\\':
            file->buf_ptr = p;
            c = handle_eob();
            if (c == (-1)) {
                expect("#endif");
            } else if (c == '\\') {
                ch = file->buf_ptr[0];
                handle_stray_noerror();
            }
            p = file->buf_ptr;
            goto redo_no_start;

        case '\"':
        case '\'':
            if (in_warn_or_error)
                goto _default;
            p = parse_pp_string(p, c, ((void *)0));
            break;

        case '/':
            if (in_warn_or_error)
                goto _default;
            file->buf_ptr = p;
            ch = *p;
            minp();
            p = file->buf_ptr;
            if (ch == '*') {
                p = parse_comment(p);
            } else if (ch == '/') {
                p = parse_line_comment(p);
            }
            break;
        case '#':
            p++;
            if (start_of_line) {
                file->buf_ptr = p;
                next_nomacro();
                p = file->buf_ptr;
                if (a == 0 &&
                    (tok == TOK_ELSE || tok == TOK_ELIF || tok == TOK_ENDIF))
                    goto the_end;
                if (tok == TOK_IF || tok == TOK_IFDEF || tok == TOK_IFNDEF)
                    a++;
                else if (tok == TOK_ENDIF)
                    a--;
                else if( tok == TOK_ERROR || tok == TOK_WARNING)
                    in_warn_or_error = 1;
            }
            break;
_default:
        default:
            p++;
            break;
        }
        start_of_line = 0;
    }
 the_end: ;
    file->buf_ptr = p;
}
# 627 "./tccpp.c"
void save_parse_state(ParseState *s)
{
    s->line_num = file->line_num;
    s->macro_ptr = macro_ptr;
    s->tok = tok;
    s->tokc = tokc;
}


void restore_parse_state(ParseState *s)
{
    file->line_num = s->line_num;
    macro_ptr = s->macro_ptr;
    tok = s->tok;
    tokc = s->tokc;
}



static inline int tok_ext_size(int t)
{
    switch(t) {

    case 0xb3:
    case 0xc8:
    case 0xb4:
    case 0xb7:
    case 0xb9:
    case 0xba:
        return 1;
    case 0xb5:
    case 0xb8:
    case 0xce:
        error("unsupported token");
        return 1;
    case 0xc0:
    case 0xc9:
    case 0xca:
        return 2;
    case 0xc1:
        return 12 / 4;
    default:
        return 0;
    }
}



static inline void tok_str_new(TokenString *s)
{
    s->str = ((void *)0);
    s->len = 0;
    s->allocated_len = 0;
    s->last_line_num = -1;
}

static void tok_str_free(int *str)
{
    tcc_free(str);
}

static int *tok_str_realloc(TokenString *s)
{
    int *str, len;

    if (s->allocated_len == 0) {
        len = 8;
    } else {
        len = s->allocated_len * 2;
    }
    str = tcc_realloc(s->str, len * sizeof(int));
    if (!str)
        error("memory full");
    s->allocated_len = len;
    s->str = str;
    return str;
}

static void tok_str_add(TokenString *s, int t)
{
    int len, *str;

    len = s->len;
    str = s->str;
    if (len >= s->allocated_len)
        str = tok_str_realloc(s);
    str[len++] = t;
    s->len = len;
}

static void tok_str_add2(TokenString *s, int t, CValue *cv)
{
    int len, *str;

    len = s->len;
    str = s->str;


    if (len + 4 > s->allocated_len)
        str = tok_str_realloc(s);
    str[len++] = t;
    switch(t) {
    case 0xb3:
    case 0xc8:
    case 0xb4:
    case 0xb7:
    case 0xb9:
    case 0xba:
        str[len++] = cv->tab[0];
        break;
    case 0xce:
    case 0xb5:
    case 0xb8:
        {
            int nb_words;
            CString *cstr;

            nb_words = (sizeof(CString) + cv->cstr->size + 3) >> 2;
            while ((len + nb_words) > s->allocated_len)
                str = tok_str_realloc(s);
            cstr = (CString *)(str + len);
            cstr->data = ((void *)0);
            cstr->size = cv->cstr->size;
            cstr->data_allocated = ((void *)0);
            cstr->size_allocated = cstr->size;
            memcpy((char *)cstr + sizeof(CString),
                   cv->cstr->data, cstr->size);
            len += nb_words;
        }
        break;
    case 0xc0:
    case 0xc9:
    case 0xca:



        str[len++] = cv->tab[0];
        str[len++] = cv->tab[1];
        break;

    case 0xc1:
        str[len++] = cv->tab[0];
        str[len++] = cv->tab[1];
        str[len++] = cv->tab[2];
# 780 "./tccpp.c"
        break;
    default:
        break;
    }
    s->len = len;
}


static void tok_str_add_tok(TokenString *s)
{
    CValue cval;


    if (file->line_num != s->last_line_num) {
        s->last_line_num = file->line_num;
        cval.i = s->last_line_num;
        tok_str_add2(s, 0xba, &cval);
    }
    tok_str_add2(s, tok, &tokc);
}
# 859 "./tccpp.c"
static inline void define_push(int v, int macro_type, int *str, Sym *first_arg)
{
    Sym *s;

    s = sym_push2(&define_stack, v, macro_type, (long)str);
    s->next = first_arg;
    table_ident[v - 256]->sym_define = s;
}


static void define_undef(Sym *s)
{
    int v;
    v = s->v;
    if (v >= 256 && v < tok_ident)
        table_ident[v - 256]->sym_define = ((void *)0);
    s->v = 0;
}

static inline Sym *define_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return ((void *)0);
    return table_ident[v]->sym_define;
}


static void free_defines(Sym *b)
{
    Sym *top, *top1;
    int v;

    top = define_stack;
    while (top != b) {
        top1 = top->prev;

        if (top->c)
            tok_str_free((int *)top->c);
        v = top->v;
        if (v >= 256 && v < tok_ident)
            table_ident[v - 256]->sym_define = ((void *)0);
        sym_free(top);
        top = top1;
    }
    define_stack = b;
}


static Sym *label_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return ((void *)0);
    return table_ident[v]->sym_label;
}

static Sym *label_push(Sym **ptop, int v, int flags)
{
    Sym *s, **ps;
    s = sym_push2(ptop, v, 0, 0);
    s->r = flags;
    ps = &table_ident[v - 256]->sym_label;
    if (ptop == &global_label_stack) {


        while (*ps != ((void *)0))
            ps = &(*ps)->prev_tok;
    }
    s->prev_tok = *ps;
    *ps = s;
    return s;
}



static void label_pop(Sym **ptop, Sym *slast)
{
    Sym *s, *s1;
    for(s = *ptop; s != slast; s = s1) {
        s1 = s->prev;
        if (s->r == 2) {
            warning("label '%s' declared but not used", get_tok_str(s->v, ((void *)0)));
        } else if (s->r == 1) {
                error("label '%s' used but not defined",
                      get_tok_str(s->v, ((void *)0)));
        } else {
            if (s->c) {


                put_extern_sym(s, cur_text_section, (long)s->next, 1);
            }
        }

        table_ident[s->v - 256]->sym_label = s->prev_tok;
        sym_free(s);
    }
    *ptop = slast;
}


static int expr_preprocess(void)
{
    int c, t;
    TokenString str;

    tok_str_new(&str);
    while (tok != 10 && tok != (-1)) {
        next();
        if (tok == TOK_DEFINED) {
            next_nomacro();
            t = tok;
            if (t == '(')
                next_nomacro();
            c = define_find(tok) != 0;
            if (t == '(')
                next_nomacro();
            tok = 0xb3;
            tokc.i = c;
        } else if (tok >= 256) {

            tok = 0xb3;
            tokc.i = 0;
        }
        tok_str_add_tok(&str);
    }
    tok_str_add(&str, -1);
    tok_str_add(&str, 0);

    macro_ptr = str.str;
    next();
    c = expr_const();
    macro_ptr = ((void *)0);
    tok_str_free(str.str);
    return c != 0;
}
# 1014 "./tccpp.c"
static void parse_define(void)
{
    Sym *s, *first, **ps;
    int v, t, varg, is_vaargs, spc;
    TokenString str;

    v = tok;
    if (v < 256)
        error("invalid macro name '%s'", get_tok_str(tok, &tokc));

    first = ((void *)0);
    t = 0;

    next_nomacro_spc();
    if (tok == '(') {
        next_nomacro();
        ps = &first;
        while (tok != ')') {
            varg = tok;
            next_nomacro();
            is_vaargs = 0;
            if (varg == 0xcc) {
                varg = TOK___VA_ARGS__;
                is_vaargs = 1;
            } else if (tok == 0xcc && gnu_ext) {
                is_vaargs = 1;
                next_nomacro();
            }
            if (varg < 256)
                error("badly punctuated parameter list");
            s = sym_push2(&define_stack, varg | 0x20000000, is_vaargs, 0);
            *ps = s;
            ps = &s->next;
            if (tok != ',')
                break;
            next_nomacro();
        }
        if (tok == ')')
            next_nomacro_spc();
        t = 1;
    }
    tok_str_new(&str);
    spc = 2;

    while (tok != 10 && tok != (-1)) {

        if (0xb6 == tok) {
            if (1 == spc)
                --str.len;
            spc = 2;
        } else if ('#' == tok) {
            spc = 2;
        } else if (check_space(tok, &spc)) {
            goto skip;
        }
        tok_str_add2(&str, tok, &tokc);
    skip:
        next_nomacro_spc();
    }
    if (spc == 1)
        --str.len;
    tok_str_add(&str, 0);




    define_push(v, t, str.str, first);
}

static inline int hash_cached_include(int type, const char *filename)
{
    const unsigned char *s;
    unsigned int h;

    h = 1;
    h = ((h) * 263 + (type));
    s = filename;
    while (*s) {
        h = ((h) * 263 + (*s));
        s++;
    }
    h &= (512 - 1);
    return h;
}


static CachedInclude *search_cached_include(TCCState *s1,
                                            int type, const char *filename)
{
    CachedInclude *e;
    int i, h;
    h = hash_cached_include(type, filename);
    i = s1->cached_includes_hash[h];
    for(;;) {
        if (i == 0)
            break;
        e = s1->cached_includes[i - 1];
        if (e->type == type && !strcmp(e->filename, filename))
            return e;
        i = e->hash_next;
    }
    return ((void *)0);
}

static inline void add_cached_include(TCCState *s1, int type,
                                      const char *filename, int ifndef_macro)
{
    CachedInclude *e;
    int h;

    if (search_cached_include(s1, type, filename))
        return;



    e = tcc_malloc(sizeof(CachedInclude) + strlen(filename));
    if (!e)
        return;
    e->type = type;
    strcpy(e->filename, filename);
    e->ifndef_macro = ifndef_macro;
    dynarray_add((void ***)&s1->cached_includes, &s1->nb_cached_includes, e);

    h = hash_cached_include(type, filename);
    e->hash_next = s1->cached_includes_hash[h];
    s1->cached_includes_hash[h] = s1->nb_cached_includes;
}

static void pragma_parse(TCCState *s1)
{
    int val;

    next();
    if (tok == TOK_pack) {







        next();
        skip('(');
        if (tok == TOK_ASM_pop) {
            next();
            if (s1->pack_stack_ptr <= s1->pack_stack) {
            stk_error:
                error("out of pack stack");
            }
            s1->pack_stack_ptr--;
        } else {
            val = 0;
            if (tok != ')') {
                if (tok == TOK_ASM_push) {
                    next();
                    if (s1->pack_stack_ptr >= s1->pack_stack + 8 - 1)
                        goto stk_error;
                    s1->pack_stack_ptr++;
                    skip(',');
                }
                if (tok != 0xb3) {
                pack_error:
                    error("invalid pack pragma");
                }
                val = tokc.i;
                if (val < 1 || val > 16 || (val & (val - 1)) != 0)
                    goto pack_error;
                next();
            }
            *s1->pack_stack_ptr = val;
            skip(')');
        }
    }
}


static void preprocess(int is_bof)
{
    TCCState *s1 = tcc_state;
    int i, c, n, saved_parse_flags;
    char buf[1024], *q;
    Sym *s;

    saved_parse_flags = parse_flags;
    parse_flags = 0x0001 | 0x0002 |
        0x0004;
    next_nomacro();
 redo:
    switch(tok) {
    case TOK_DEFINE:
        next_nomacro();
        parse_define();
        break;
    case TOK_UNDEF:
        next_nomacro();
        s = define_find(tok);

        if (s)
            define_undef(s);
        break;
    case TOK_INCLUDE:
    case TOK_INCLUDE_NEXT:
        ch = file->buf_ptr[0];

        skip_spaces();
        if (ch == '<') {
            c = '>';
            goto read_name;
        } else if (ch == '\"') {
            c = ch;
        read_name:
            inp();
            q = buf;
            while (ch != c && ch != '\n' && ch != (-1)) {
                if ((q - buf) < sizeof(buf) - 1)
                    *q++ = ch;
                if (ch == '\\') {
                    if (handle_stray_noerror() == 0)
                        --q;
                } else
                    inp();
            }
            *q = '\0';
            minp();






        } else {


            next();
            buf[0] = '\0';
            if (tok == 0xb5) {
                while (tok != 10) {
                    if (tok != 0xb5) {
                    include_syntax:
                        error("'#include' expects \"FILENAME\" or <FILENAME>");
                    }
                    pstrcat(buf, sizeof(buf), (char *)tokc.cstr->data);
                    next();
                }
                c = '\"';
            } else {
                int len;
                while (tok != 10) {
                    pstrcat(buf, sizeof(buf), get_tok_str(tok, &tokc));
                    next();
                }
                len = strlen(buf);

                if (len < 2 || buf[0] != '<' || buf[len - 1] != '>')
                    goto include_syntax;
                memmove(buf, buf + 1, len - 2);
                buf[len - 2] = '\0';
                c = '>';
            }
        }

        if (s1->include_stack_ptr >= s1->include_stack + 32)
            error("#include recursion too deep");

        n = s1->nb_include_paths + s1->nb_sysinclude_paths;
        for (i = -2; i < n; ++i) {
            char buf1[sizeof file->filename];
            BufferedFile *f;
            CachedInclude *e;
            const char *path;
            int size;

            if (i == -2) {

                if (!(buf[0] == '/'))
                    continue;
                buf1[0] = 0;

            } else if (i == -1) {

                if (c != '\"')
                    continue;
                size = tcc_basename(file->filename) - file->filename;
                memcpy(buf1, file->filename, size);
                buf1[size] = '\0';

            } else {

                if (i < s1->nb_include_paths)
                    path = s1->include_paths[i];
                else
                    path = s1->sysinclude_paths[i - s1->nb_include_paths];
                pstrcpy(buf1, sizeof(buf1), path);
                pstrcat(buf1, sizeof(buf1), "/");
            }

            pstrcat(buf1, sizeof(buf1), buf);

            e = search_cached_include(s1, c, buf1);
            if (e && define_find(e->ifndef_macro)) {





                f = ((void *)0);
            } else {
                f = tcc_open(s1, buf1);
                if (!f)
                    continue;
            }

            if (tok == TOK_INCLUDE_NEXT) {
                tok = TOK_INCLUDE;
                if (f)
                    tcc_close(f);
                continue;
            }

            if (!f)
                goto include_done;







            *s1->include_stack_ptr++ = file;
            f->inc_type = c;
            pstrcpy(f->inc_filename, sizeof(f->inc_filename), buf1);
            file = f;

            if (tcc_state->do_debug) {
                put_stabs(file->filename, N_BINCL, 0, 0, 0);
            }
            tok_flags |= 0x0002 | 0x0001;
            ch = file->buf_ptr[0];
            goto the_end;
        }
        error("include file '%s' not found", buf);
include_done:
        break;
    case TOK_IFNDEF:
        c = 1;
        goto do_ifdef;
    case TOK_IF:
        c = expr_preprocess();
        goto do_if;
    case TOK_IFDEF:
        c = 0;
    do_ifdef:
        next_nomacro();
        if (tok < 256)
            error("invalid argument for '#if%sdef'", c ? "n" : "");
        if (is_bof) {
            if (c) {



                file->ifndef_macro = tok;
            }
        }
        c = (define_find(tok) != 0) ^ c;
    do_if:
        if (s1->ifdef_stack_ptr >= s1->ifdef_stack + 64)
            error("memory full");
        *s1->ifdef_stack_ptr++ = c;
        goto test_skip;
    case TOK_ELSE:
        if (s1->ifdef_stack_ptr == s1->ifdef_stack)
            error("#else without matching #if");
        if (s1->ifdef_stack_ptr[-1] & 2)
            error("#else after #else");
        c = (s1->ifdef_stack_ptr[-1] ^= 3);
        goto test_skip;
    case TOK_ELIF:
        if (s1->ifdef_stack_ptr == s1->ifdef_stack)
            error("#elif without matching #if");
        c = s1->ifdef_stack_ptr[-1];
        if (c > 1)
            error("#elif after #else");

        if (c == 1)
            goto skip;
        c = expr_preprocess();
        s1->ifdef_stack_ptr[-1] = c;
    test_skip:
        if (!(c & 1)) {
        skip:
            preprocess_skip();
            is_bof = 0;
            goto redo;
        }
        break;
    case TOK_ENDIF:
        if (s1->ifdef_stack_ptr <= file->ifdef_stack_ptr)
            error("#endif without matching #if");
        s1->ifdef_stack_ptr--;


        if (file->ifndef_macro &&
            s1->ifdef_stack_ptr == file->ifdef_stack_ptr) {
            file->ifndef_macro_saved = file->ifndef_macro;


            file->ifndef_macro = 0;
            while (tok != 10)
                next_nomacro();
            tok_flags |= 0x0004;
            goto the_end;
        }
        break;
    case TOK_LINE:
        next();
        if (tok != 0xb3)
            error("#line");
        file->line_num = tokc.i - 1;
        next();
        if (tok != 10) {
            if (tok != 0xb5)
                error("#line");
            pstrcpy(file->filename, sizeof(file->filename),
                    (char *)tokc.cstr->data);
        }
        break;
    case TOK_ERROR:
    case TOK_WARNING:
        c = tok;
        ch = file->buf_ptr[0];
        skip_spaces();
        q = buf;
        while (ch != '\n' && ch != (-1)) {
            if ((q - buf) < sizeof(buf) - 1)
                *q++ = ch;
            if (ch == '\\') {
                if (handle_stray_noerror() == 0)
                    --q;
            } else
                inp();
        }
        *q = '\0';
        if (c == TOK_ERROR)
            error("#error %s", buf);
        else
            warning("#warning %s", buf);
        break;
    case TOK_PRAGMA:
        pragma_parse(s1);
        break;
    default:
        if (tok == 10 || tok == '!' || tok == 0xb3) {


        } else {
            if (!(saved_parse_flags & 0x0008))
                warning("Ignoring unknown preprocessing directive #%s", get_tok_str(tok, &tokc));
        }
        break;
    }

    while (tok != 10)
        next_nomacro();
 the_end:
    parse_flags = saved_parse_flags;
}


static void parse_escape_string(CString *outstr, const uint8_t *buf, int is_long)
{
    int c, n;
    const uint8_t *p;

    p = buf;
    for(;;) {
        c = *p;
        if (c == '\0')
            break;
        if (c == '\\') {
            p++;

            c = *p;
            switch(c) {
            case '0': case '1': case '2': case '3':
            case '4': case '5': case '6': case '7':

                n = c - '0';
                p++;
                c = *p;
                if (isoct(c)) {
                    n = n * 8 + c - '0';
                    p++;
                    c = *p;
                    if (isoct(c)) {
                        n = n * 8 + c - '0';
                        p++;
                    }
                }
                c = n;
                goto add_char_nonext;
            case 'x':
            case 'u':
            case 'U':
                p++;
                n = 0;
                for(;;) {
                    c = *p;
                    if (c >= 'a' && c <= 'f')
                        c = c - 'a' + 10;
                    else if (c >= 'A' && c <= 'F')
                        c = c - 'A' + 10;
                    else if (isnum(c))
                        c = c - '0';
                    else
                        break;
                    n = n * 16 + c;
                    p++;
                }
                c = n;
                goto add_char_nonext;
            case 'a':
                c = '\a';
                break;
            case 'b':
                c = '\b';
                break;
            case 'f':
                c = '\f';
                break;
            case 'n':
                c = '\n';
                break;
            case 'r':
                c = '\r';
                break;
            case 't':
                c = '\t';
                break;
            case 'v':
                c = '\v';
                break;
            case 'e':
                if (!gnu_ext)
                    goto invalid_escape;
                c = 27;
                break;
            case '\'':
            case '\"':
            case '\\':
            case '?':
                break;
            default:
            invalid_escape:
                if (c >= '!' && c <= '~')
                    warning("unknown escape sequence: \'\\%c\'", c);
                else
                    warning("unknown escape sequence: \'\\x%x\'", c);
                break;
            }
        }
        p++;
    add_char_nonext:
        if (!is_long)
            cstr_ccat(outstr, c);
        else
            cstr_wccat(outstr, c);
    }

    if (!is_long)
        cstr_ccat(outstr, '\0');
    else
        cstr_wccat(outstr, '\0');
}





void bn_lshift(unsigned int *bn, int shift, int or_val)
{
    int i;
    unsigned int v;
    for(i=0;i<2;i++) {
        v = bn[i];
        bn[i] = (v << shift) | or_val;
        or_val = v >> (32 - shift);
    }
}

void bn_zero(unsigned int *bn)
{
    int i;
    for(i=0;i<2;i++) {
        bn[i] = 0;
    }
}



void parse_number(const char *p)
{
    int b, t, shift, frac_bits, s, exp_val, ch;
    char *q;
    unsigned int bn[2];
    double d;


    q = token_buf;
    ch = *p++;
    t = ch;
    ch = *p++;
    *q++ = t;
    b = 10;
    if (t == '.') {
        goto float_frac_parse;
    } else if (t == '0') {
        if (ch == 'x' || ch == 'X') {
            q--;
            ch = *p++;
            b = 16;
        } else if (tcc_ext && (ch == 'b' || ch == 'B')) {
            q--;
            ch = *p++;
            b = 2;
        }
    }


    while (1) {
        if (ch >= 'a' && ch <= 'f')
            t = ch - 'a' + 10;
        else if (ch >= 'A' && ch <= 'F')
            t = ch - 'A' + 10;
        else if (isnum(ch))
            t = ch - '0';
        else
            break;
        if (t >= b)
            break;
        if (q >= token_buf + 1024) {
        num_too_long:
            error("number too long");
        }
        *q++ = ch;
        ch = *p++;
    }
    if (ch == '.' ||
        ((ch == 'e' || ch == 'E') && b == 10) ||
        ((ch == 'p' || ch == 'P') && (b == 16 || b == 2))) {
        if (b != 10) {





            *q = '\0';
            if (b == 16)
                shift = 4;
            else
                shift = 2;
            bn_zero(bn);
            q = token_buf;
            while (1) {
                t = *q++;
                if (t == '\0') {
                    break;
                } else if (t >= 'a') {
                    t = t - 'a' + 10;
                } else if (t >= 'A') {
                    t = t - 'A' + 10;
                } else {
                    t = t - '0';
                }
                bn_lshift(bn, shift, t);
            }
            frac_bits = 0;
            if (ch == '.') {
                ch = *p++;
                while (1) {
                    t = ch;
                    if (t >= 'a' && t <= 'f') {
                        t = t - 'a' + 10;
                    } else if (t >= 'A' && t <= 'F') {
                        t = t - 'A' + 10;
                    } else if (t >= '0' && t <= '9') {
                        t = t - '0';
                    } else {
                        break;
                    }
                    if (t >= b)
                        error("invalid digit");
                    bn_lshift(bn, shift, t);
                    frac_bits += shift;
                    ch = *p++;
                }
            }
            if (ch != 'p' && ch != 'P')
                expect("exponent");
            ch = *p++;
            s = 1;
            exp_val = 0;
            if (ch == '+') {
                ch = *p++;
            } else if (ch == '-') {
                s = -1;
                ch = *p++;
            }
            if (ch < '0' || ch > '9')
                expect("exponent digits");
            while (ch >= '0' && ch <= '9') {
                exp_val = exp_val * 10 + ch - '0';
                ch = *p++;
            }
            exp_val = exp_val * s;



            d = (double)bn[1] * 4294967296.0 + (double)bn[0];
            d = ldexp(d, exp_val - frac_bits);
            t = toup(ch);
            if (t == 'F') {
                ch = *p++;
                tok = 0xb9;

                tokc.f = (float)d;
            } else if (t == 'L') {
                ch = *p++;
                tok = 0xc1;

                tokc.ld = (long double)d;
            } else {
                tok = 0xc0;
                tokc.d = d;
            }
        } else {

            if (ch == '.') {
                if (q >= token_buf + 1024)
                    goto num_too_long;
                *q++ = ch;
                ch = *p++;
            float_frac_parse:
                while (ch >= '0' && ch <= '9') {
                    if (q >= token_buf + 1024)
                        goto num_too_long;
                    *q++ = ch;
                    ch = *p++;
                }
            }
            if (ch == 'e' || ch == 'E') {
                if (q >= token_buf + 1024)
                    goto num_too_long;
                *q++ = ch;
                ch = *p++;
                if (ch == '-' || ch == '+') {
                    if (q >= token_buf + 1024)
                        goto num_too_long;
                    *q++ = ch;
                    ch = *p++;
                }
                if (ch < '0' || ch > '9')
                    expect("exponent digits");
                while (ch >= '0' && ch <= '9') {
                    if (q >= token_buf + 1024)
                        goto num_too_long;
                    *q++ = ch;
                    ch = *p++;
                }
            }
            *q = '\0';
            t = toup(ch);
            (*__error()) = 0;
            if (t == 'F') {
                ch = *p++;
                tok = 0xb9;
                tokc.f = strtof(token_buf, ((void *)0));
            } else if (t == 'L') {
                ch = *p++;
                tok = 0xc1;
                tokc.ld = strtold(token_buf, ((void *)0));
            } else {
                tok = 0xc0;
                tokc.d = strtod(token_buf, ((void *)0));
            }
        }
    } else {
        unsigned long long n, n1;
        int lcount, ucount;


        *q = '\0';
        q = token_buf;
        if (b == 10 && *q == '0') {
            b = 8;
            q++;
        }
        n = 0;
        while(1) {
            t = *q++;

            if (t == '\0') {
                break;
            } else if (t >= 'a') {
                t = t - 'a' + 10;
            } else if (t >= 'A') {
                t = t - 'A' + 10;
            } else {
                t = t - '0';
                if (t >= b)
                    error("invalid digit");
            }
            n1 = n;
            n = n * b + t;


            if (n < n1)
                error("integer constant overflow");
        }


        if ((n & 0xffffffff00000000LL) != 0) {
            if ((n >> 63) != 0)
                tok = 0xca;
            else
                tok = 0xc9;
        } else if (n > 0x7fffffff) {
            tok = 0xc8;
        } else {
            tok = 0xb3;
        }
        lcount = 0;
        ucount = 0;
        for(;;) {
            t = toup(ch);
            if (t == 'L') {
                if (lcount >= 2)
                    error("three 'l's in integer constant");
                lcount++;
                if (lcount == 2) {
                    if (tok == 0xb3)
                        tok = 0xc9;
                    else if (tok == 0xc8)
                        tok = 0xca;
                }
                ch = *p++;
            } else if (t == 'U') {
                if (ucount >= 1)
                    error("two 'u's in integer constant");
                ucount++;
                if (tok == 0xb3)
                    tok = 0xc8;
                else if (tok == 0xc9)
                    tok = 0xca;
                ch = *p++;
            } else {
                break;
            }
        }
        if (tok == 0xb3 || tok == 0xc8)
            tokc.ui = n;
        else
            tokc.ull = n;
    }
    if (ch)
        error("invalid number\n");
}
# 1894 "./tccpp.c"
static inline void next_nomacro1(void)
{
    int t, c, is_long;
    TokenSym *ts;
    uint8_t *p, *p1;
    unsigned int h;

    p = file->buf_ptr;
 redo_no_start:
    c = *p;
    switch(c) {
    case ' ':
    case '\t':
        tok = c;
        p++;
        goto keep_tok_flags;
    case '\f':
    case '\v':
    case '\r':
        p++;
        goto redo_no_start;
    case '\\':

        if (p >= file->buf_end) {
            file->buf_ptr = p;
            handle_eob();
            p = file->buf_ptr;
            if (p >= file->buf_end)
                goto parse_eof;
            else
                goto redo_no_start;
        } else {
            file->buf_ptr = p;
            ch = *p;
            handle_stray();
            p = file->buf_ptr;
            goto redo_no_start;
        }
    parse_eof:
        {
            TCCState *s1 = tcc_state;
            if ((parse_flags & 0x0004)
                && !(tok_flags & 0x0008)) {
                tok_flags |= 0x0008;
                tok = 10;
                goto keep_tok_flags;
            } else if (s1->include_stack_ptr == s1->include_stack ||
                       !(parse_flags & 0x0001)) {

                tok = (-1);
            } else {
                tok_flags &= ~0x0008;




                if (tok_flags & 0x0004) {



                    add_cached_include(s1, file->inc_type, file->inc_filename,
                                       file->ifndef_macro_saved);
                }


                if (tcc_state->do_debug) {
                    put_stabd(N_EINCL, 0, 0);
                }

                tcc_close(file);
                s1->include_stack_ptr--;
                file = *s1->include_stack_ptr;
                p = file->buf_ptr;
                goto redo_no_start;
            }
        }
        break;

    case '\n':
        file->line_num++;
        tok_flags |= 0x0001;
        p++;
        if (0 == (parse_flags & 0x0004))
            goto redo_no_start;
        tok = 10;
        goto keep_tok_flags;

    case '#':

        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if ((tok_flags & 0x0001) &&
            (parse_flags & 0x0001)) {
            file->buf_ptr = p;
            preprocess(tok_flags & 0x0002);
            p = file->buf_ptr;
            goto redo_no_start;
        } else {
            if (c == '#') {
                p++;
                tok = 0xb6;
            } else {
                if (parse_flags & 0x0008) {
                    p = parse_line_comment(p - 1);
                    goto redo_no_start;
                } else {
                    tok = '#';
                }
            }
        }
        break;

    case 'a': case 'b': case 'c': case 'd':
    case 'e': case 'f': case 'g': case 'h':
    case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p':
    case 'q': case 'r': case 's': case 't':
    case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
    case 'A': case 'B': case 'C': case 'D':
    case 'E': case 'F': case 'G': case 'H':
    case 'I': case 'J': case 'K':
    case 'M': case 'N': case 'O': case 'P':
    case 'Q': case 'R': case 'S': case 'T':
    case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
    case '_':
    parse_ident_fast:
        p1 = p;
        h = 1;
        h = ((h) * 263 + (c));
        p++;
        for(;;) {
            c = *p;
            if (!isidnum_table[c-(-1)])
                break;
            h = ((h) * 263 + (c));
            p++;
        }
        if (c != '\\') {
            TokenSym **pts;
            int len;



            len = p - p1;
            h &= (8192 - 1);
            pts = &hash_ident[h];
            for(;;) {
                ts = *pts;
                if (!ts)
                    break;
                if (ts->len == len && !memcmp(ts->str, p1, len))
                    goto token_found;
                pts = &(ts->hash_next);
            }
            ts = tok_alloc_new(pts, p1, len);
        token_found: ;
        } else {

            cstr_free(&tokcstr);

            while (p1 < p) {
                cstr_ccat(&tokcstr, *p1);
                p1++;
            }
            p--;
            { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        parse_ident_slow:
            while (isidnum_table[c-(-1)]) {
                cstr_ccat(&tokcstr, c);
                { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
            }
            ts = tok_alloc(tokcstr.data, tokcstr.size);
        }
        tok = ts->tok;
        break;
    case 'L':
        t = p[1];
        if (t != '\\' && t != '\'' && t != '\"') {

            goto parse_ident_fast;
        } else {
            { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
            if (c == '\'' || c == '\"') {
                is_long = 1;
                goto str_const;
            } else {
                cstr_free(&tokcstr);
                cstr_ccat(&tokcstr, 'L');
                goto parse_ident_slow;
            }
        }
        break;
    case '0': case '1': case '2': case '3':
    case '4': case '5': case '6': case '7':
    case '8': case '9':

        cstr_free(&tokcstr);


    parse_num:
        for(;;) {
            t = c;
            cstr_ccat(&tokcstr, c);
            { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
            if (!(isnum(c) || isid(c) || c == '.' ||
                  ((c == '+' || c == '-') &&
                   (t == 'e' || t == 'E' || t == 'p' || t == 'P'))))
                break;
        }

        cstr_ccat(&tokcstr, '\0');
        tokc.cstr = &tokcstr;
        tok = 0xce;
        break;
    case '.':

        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (isnum(c)) {
            cstr_free(&tokcstr);
            cstr_ccat(&tokcstr, '.');
            goto parse_num;
        } else if (c == '.') {
            { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
            if (c != '.')
                expect("'.'");
            { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
            tok = 0xcc;
        } else {
            tok = '.';
        }
        break;
    case '\'':
    case '\"':
        is_long = 0;
    str_const:
        {
            CString str;
            int sep;

            sep = c;


            cstr_new(&str);
            p = parse_pp_string(p, sep, &str);
            cstr_ccat(&str, '\0');


            cstr_free(&tokcstr);
            parse_escape_string(&tokcstr, str.data, is_long);
            cstr_free(&str);

            if (sep == '\'') {
                int char_size;

                if (!is_long)
                    char_size = 1;
                else
                    char_size = sizeof(nwchar_t);
                if (tokcstr.size <= char_size)
                    error("empty character constant");
                if (tokcstr.size > 2 * char_size)
                    warning("multi-character character constant");
                if (!is_long) {
                    tokc.i = *(int8_t *)tokcstr.data;
                    tok = 0xb4;
                } else {
                    tokc.i = *(nwchar_t *)tokcstr.data;
                    tok = 0xb7;
                }
            } else {
                tokc.cstr = &tokcstr;
                if (!is_long)
                    tok = 0xb5;
                else
                    tok = 0xb8;
            }
        }
        break;

    case '<':
        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (c == '=') {
            p++;
            tok = 0x9e;
        } else if (c == '<') {
            { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
            if (c == '=') {
                p++;
                tok = 0x81;
            } else {
                tok = 0x01;
            }
        } else {
            tok = 0x9c;
        }
        break;

    case '>':
        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (c == '=') {
            p++;
            tok = 0x9d;
        } else if (c == '>') {
            { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
            if (c == '=') {
                p++;
                tok = 0x82;
            } else {
                tok = 0x02;
            }
        } else {
            tok = 0x9f;
        }
        break;

    case '&':
        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (c == '&') {
            p++;
            tok = 0xa0;
        } else if (c == '=') {
            p++;
            tok = 0xa6;
        } else {
            tok = '&';
        }
        break;

    case '|':
        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (c == '|') {
            p++;
            tok = 0xa1;
        } else if (c == '=') {
            p++;
            tok = 0xfc;
        } else {
            tok = '|';
        }
        break;

    case '+':
        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (c == '+') {
            p++;
            tok = 0xa4;
        } else if (c == '=') {
            p++;
            tok = 0xab;
        } else {
            tok = '+';
        }
        break;

    case '-':
        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (c == '-') {
            p++;
            tok = 0xa2;
        } else if (c == '=') {
            p++;
            tok = 0xad;
        } else if (c == '>') {
            p++;
            tok = 0xcb;
        } else {
            tok = '-';
        }
        break;

    case '!': { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }}; if (c == '=') { p++; tok = 0x95; } else { tok = '!'; } break;
    case '=': { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }}; if (c == '=') { p++; tok = 0x94; } else { tok = '='; } break;
    case '*': { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }}; if (c == '=') { p++; tok = 0xaa; } else { tok = '*'; } break;
    case '%': { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }}; if (c == '=') { p++; tok = 0xa5; } else { tok = '%'; } break;
    case '^': { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }}; if (c == '=') { p++; tok = 0xde; } else { tok = '^'; } break;


    case '/':
        { p++; c = *p; if (c == '\\') { c = handle_stray1(p); p = file->buf_ptr; }};
        if (c == '*') {
            p = parse_comment(p);
            goto redo_no_start;
        } else if (c == '/') {
            p = parse_line_comment(p);
            goto redo_no_start;
        } else if (c == '=') {
            p++;
            tok = 0xaf;
        } else {
            tok = '/';
        }
        break;


    case '(':
    case ')':
    case '[':
    case ']':
    case '{':
    case '}':
    case ',':
    case ';':
    case ':':
    case '?':
    case '~':
    case '$':
    case '@':
        tok = c;
        p++;
        break;
    default:
        error("unrecognized character \\x%02x", c);
        break;
    }
    tok_flags = 0;
keep_tok_flags:
    file->buf_ptr = p;



}



static void next_nomacro_spc(void)
{
    if (macro_ptr) {
    redo:
        tok = *macro_ptr;
        if (tok) {
            { tok = *macro_ptr++; switch(tok) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: tokc.tab[0] = *macro_ptr++; break; case 0xb5: case 0xb8: case 0xce: tokc.cstr = (CString *)macro_ptr; tokc.cstr->data = (char *)macro_ptr + sizeof(CString); macro_ptr += (sizeof(CString) + tokc.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: tokc.tab[0] = macro_ptr[0]; tokc.tab[1] = macro_ptr[1]; macro_ptr += 2; break; case 0xc1: tokc.tab[0] = macro_ptr[0]; tokc.tab[1] = macro_ptr[1]; tokc.tab[2] = macro_ptr[2];; macro_ptr += 12 / 4; break; default: break; } };
            if (tok == 0xba) {
                file->line_num = tokc.i;
                goto redo;
            }
        }
    } else {
        next_nomacro1();
    }
}

static void next_nomacro(void)
{
    do {
        next_nomacro_spc();
    } while (is_space(tok));
}


static int *macro_arg_subst(Sym **nested_list, int *macro_str, Sym *args)
{
    int *st, last_tok, t, spc;
    Sym *s;
    CValue cval;
    TokenString str;
    CString cstr;

    tok_str_new(&str);
    last_tok = 0;
    while(1) {
        { t = *macro_str++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *macro_str++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)macro_str; cval.cstr->data = (char *)macro_str + sizeof(CString); macro_str += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; macro_str += 2; break; case 0xc1: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; cval.tab[2] = macro_str[2];; macro_str += 12 / 4; break; default: break; } };
        if (!t)
            break;
        if (t == '#') {

            { t = *macro_str++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *macro_str++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)macro_str; cval.cstr->data = (char *)macro_str + sizeof(CString); macro_str += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; macro_str += 2; break; case 0xc1: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; cval.tab[2] = macro_str[2];; macro_str += 12 / 4; break; default: break; } };
            if (!t)
                break;
            s = sym_find2(args, t);
            if (s) {
                cstr_new(&cstr);
                st = (int *)s->c;
                spc = 0;
                while (*st) {
                    { t = *st++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *st++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)st; cval.cstr->data = (char *)st + sizeof(CString); st += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = st[0]; cval.tab[1] = st[1]; st += 2; break; case 0xc1: cval.tab[0] = st[0]; cval.tab[1] = st[1]; cval.tab[2] = st[2];; st += 12 / 4; break; default: break; } };
                    if (!check_space(t, &spc))
                        cstr_cat(&cstr, get_tok_str(t, &cval));
                }
                cstr.size -= spc;
                cstr_ccat(&cstr, '\0');




                cval.cstr = &cstr;
                tok_str_add2(&str, 0xb5, &cval);
                cstr_free(&cstr);
            } else {
                tok_str_add2(&str, t, &cval);
            }
        } else if (t >= 256) {
            s = sym_find2(args, t);
            if (s) {
                st = (int *)s->c;

                if (*macro_str == 0xb6 || last_tok == 0xb6) {





                    if (gnu_ext && s->type.t &&
                        last_tok == 0xb6 &&
                        str.len >= 2 && str.str[str.len - 2] == ',') {
                        if (*st == 0) {

                            str.len -= 2;
                        } else {

                            str.len--;
                            goto add_var;
                        }
                    } else {
                        int t1;
                    add_var:
                        for(;;) {
                            { t1 = *st++; switch(t1) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *st++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)st; cval.cstr->data = (char *)st + sizeof(CString); st += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = st[0]; cval.tab[1] = st[1]; st += 2; break; case 0xc1: cval.tab[0] = st[0]; cval.tab[1] = st[1]; cval.tab[2] = st[2];; st += 12 / 4; break; default: break; } };
                            if (!t1)
                                break;
                            tok_str_add2(&str, t1, &cval);
                        }
                    }
                } else {


                    macro_subst(&str, nested_list, st, ((void *)0));
                }
            } else {
                tok_str_add(&str, t);
            }
        } else {
            tok_str_add2(&str, t, &cval);
        }
        last_tok = t;
    }
    tok_str_add(&str, 0);
    return str.str;
}

static char const ab_month_name[12][4] =
{
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};





static int macro_subst_tok(TokenString *tok_str,
                           Sym **nested_list, Sym *s, struct macro_level **can_read_stream)
{
    Sym *args, *sa, *sa1;
    int mstr_allocated, parlevel, *mstr, t, t1, *p, spc;
    TokenString str;
    char *cstrval;
    CValue cval;
    CString cstr;
    char buf[32];



    if (tok == TOK___LINE__) {
        snprintf(buf, sizeof(buf), "%d", file->line_num);
        cstrval = buf;
        t1 = 0xce;
        goto add_cstr1;
    } else if (tok == TOK___FILE__) {
        cstrval = file->filename;
        goto add_cstr;
    } else if (tok == TOK___DATE__ || tok == TOK___TIME__) {
        time_t ti;
        struct tm *tm;

        time(&ti);
        tm = localtime(&ti);
        if (tok == TOK___DATE__) {
            snprintf(buf, sizeof(buf), "%s %2d %d",
                     ab_month_name[tm->tm_mon], tm->tm_mday, tm->tm_year + 1900);
        } else {
            snprintf(buf, sizeof(buf), "%02d:%02d:%02d",
                     tm->tm_hour, tm->tm_min, tm->tm_sec);
        }
        cstrval = buf;
    add_cstr:
        t1 = 0xb5;
    add_cstr1:
        cstr_new(&cstr);
        cstr_cat(&cstr, cstrval);
        cstr_ccat(&cstr, '\0');
        cval.cstr = &cstr;
        tok_str_add2(tok_str, t1, &cval);
        cstr_free(&cstr);
    } else {
        mstr = (int *)s->c;
        mstr_allocated = 0;
        if (s->type.t == 1) {


        redo:
            if (macro_ptr) {
                p = macro_ptr;
                while (is_space(t = *p) || 10 == t)
                    ++p;
                if (t == 0 && can_read_stream) {


                    struct macro_level *ml = *can_read_stream;
                    macro_ptr = ((void *)0);
                    if (ml)
                    {
                        macro_ptr = ml->p;
                        ml->p = ((void *)0);
                        *can_read_stream = ml -> prev;
                    }
                    goto redo;
                }
            } else {

                ch = file->buf_ptr[0];
                while (is_space(ch) || ch == '\n')
                    minp();
                t = ch;
            }
            if (t != '(')
                return -1;


            next_nomacro();
            next_nomacro();
            args = ((void *)0);
            sa = s->next;

            for(;;) {

                if (!args && !sa && tok == ')')
                    break;
                if (!sa)
                    error("macro '%s' used with too many args",
                          get_tok_str(s->v, 0));
                tok_str_new(&str);
                parlevel = spc = 0;

                while ((parlevel > 0 ||
                        (tok != ')' &&
                         (tok != ',' || sa->type.t))) &&
                       tok != -1) {
                    if (tok == '(')
                        parlevel++;
                    else if (tok == ')')
                        parlevel--;
                    if (tok == 10)
                        tok = ' ';
                    if (!check_space(tok, &spc))
                        tok_str_add2(&str, tok, &tokc);
                    next_nomacro_spc();
                }
                str.len -= spc;
                tok_str_add(&str, 0);
                sym_push2(&args, sa->v & ~0x20000000, sa->type.t, (long)str.str);
                sa = sa->next;
                if (tok == ')') {


                    if (sa && sa->type.t && gnu_ext)
                        continue;
                    else
                        break;
                }
                if (tok != ',')
                    expect(",");
                next_nomacro();
            }
            if (sa) {
                error("macro '%s' used with too few args",
                      get_tok_str(s->v, 0));
            }


            mstr = macro_arg_subst(nested_list, mstr, args);

            sa = args;
            while (sa) {
                sa1 = sa->prev;
                tok_str_free((int *)sa->c);
                sym_free(sa);
                sa = sa1;
            }
            mstr_allocated = 1;
        }
        sym_push2(nested_list, s->v, 0, 0);
        macro_subst(tok_str, nested_list, mstr, can_read_stream);

        sa1 = *nested_list;
        *nested_list = sa1->prev;
        sym_free(sa1);
        if (mstr_allocated)
            tok_str_free(mstr);
    }
    return 0;
}



static inline int *macro_twosharps(const int *macro_str)
{
    TokenSym *ts;
    const int *ptr, *saved_macro_ptr;
    int t;
    const char *p1, *p2;
    CValue cval;
    TokenString macro_str1;
    CString cstr;


    for(ptr = macro_str;;) {
        { t = *ptr++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *ptr++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)ptr; cval.cstr->data = (char *)ptr + sizeof(CString); ptr += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; ptr += 2; break; case 0xc1: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; cval.tab[2] = ptr[2];; ptr += 12 / 4; break; default: break; } };
        if (t == 0xb6)
            break;

        if (t == 0)
            return ((void *)0);
    }


    cstr_new(&cstr);
    tok_str_new(&macro_str1);
    saved_macro_ptr = macro_ptr;

    macro_ptr = (int *)macro_str;
    for(;;) {
        next_nomacro_spc();
        if (tok == 0)
            break;
        if (tok == 0xb6)
            continue;
        while (*macro_ptr == 0xb6) {
            t = *++macro_ptr;
            if (t && t != 0xb6) {
                { t = *macro_ptr++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *macro_ptr++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)macro_ptr; cval.cstr->data = (char *)macro_ptr + sizeof(CString); macro_ptr += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = macro_ptr[0]; cval.tab[1] = macro_ptr[1]; macro_ptr += 2; break; case 0xc1: cval.tab[0] = macro_ptr[0]; cval.tab[1] = macro_ptr[1]; cval.tab[2] = macro_ptr[2];; macro_ptr += 12 / 4; break; default: break; } };


                cstr_free(&cstr);
                p1 = get_tok_str(tok, &tokc);
                cstr_cat(&cstr, p1);
                p2 = get_tok_str(t, &cval);
                cstr_cat(&cstr, p2);
                cstr_ccat(&cstr, '\0');

                if ((tok >= 256 || tok == 0xce) &&
                    (t >= 256 || t == 0xce)) {
                    if (tok == 0xce) {



                        cstr_free(&tokcstr);
                        tokcstr = cstr;
                        cstr_new(&cstr);
                        tokc.cstr = &tokcstr;
                    } else {


                        if (t == 0xce) {
                            const char *p;
                            int c;

                            p = p2;
                            for(;;) {
                                c = *p;
                                if (c == '\0')
                                    break;
                                p++;
                                if (!isnum(c) && !isid(c))
                                    goto error_pasting;
                            }
                        }
                        ts = tok_alloc(cstr.data, strlen(cstr.data));
                        tok = ts->tok;
                    }
                } else {
                    const char *str = cstr.data;
                    const unsigned char *q;



                    if (!strcmp(str, ">>=")) {
                        tok = 0x82;
                    } else if (!strcmp(str, "<<=")) {
                        tok = 0x81;
                    } else if (strlen(str) == 2) {

                        q = tok_two_chars;
                        for(;;) {
                            if (!*q)
                                goto error_pasting;
                            if (q[0] == str[0] && q[1] == str[1])
                                break;
                            q += 3;
                        }
                        tok = q[2];
                    } else {
                    error_pasting:


                        cstr_free(&cstr);
                        p1 = get_tok_str(tok, &tokc);
                        cstr_cat(&cstr, p1);
                        cstr_ccat(&cstr, '\0');
                        p2 = get_tok_str(t, &cval);
                        warning("pasting \"%s\" and \"%s\" does not give a valid preprocessing token", cstr.data, p2);

                        tok_str_add2(&macro_str1, tok, &tokc);

                        tok = t;
                        tokc = cval;
                    }
                }
            }
        }
        tok_str_add2(&macro_str1, tok, &tokc);
    }
    macro_ptr = (int *)saved_macro_ptr;
    cstr_free(&cstr);
    tok_str_add(&macro_str1, 0);
    return macro_str1.str;
}





static void macro_subst(TokenString *tok_str, Sym **nested_list,
                        const int *macro_str, struct macro_level ** can_read_stream)
{
    Sym *s;
    int *macro_str1;
    const int *ptr;
    int t, ret, spc;
    CValue cval;
    struct macro_level ml;


    ptr = macro_str;
    macro_str1 = macro_twosharps(ptr);
    if (macro_str1)
        ptr = macro_str1;
    spc = 0;
    while (1) {


        if (ptr == ((void *)0))
            break;
        { t = *ptr++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *ptr++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)ptr; cval.cstr->data = (char *)ptr + sizeof(CString); ptr += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; ptr += 2; break; case 0xc1: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; cval.tab[2] = ptr[2];; ptr += 12 / 4; break; default: break; } };
        if (t == 0)
            break;
        s = define_find(t);
        if (s != ((void *)0)) {

            if (sym_find2(*nested_list, t))
                goto no_subst;
            ml.p = macro_ptr;
            if (can_read_stream)
                ml.prev = *can_read_stream, *can_read_stream = &ml;
            macro_ptr = (int *)ptr;
            tok = t;
            ret = macro_subst_tok(tok_str, nested_list, s, can_read_stream);
            ptr = (int *)macro_ptr;
            macro_ptr = ml.p;
            if (can_read_stream && *can_read_stream == &ml)
                *can_read_stream = ml.prev;
            if (ret != 0)
                goto no_subst;
        } else {
        no_subst:
            if (!check_space(t, &spc))
                tok_str_add2(tok_str, t, &cval);
        }
    }
    if (macro_str1)
        tok_str_free(macro_str1);
}


static void next(void)
{
    Sym *nested_list, *s;
    TokenString str;
    struct macro_level *ml;

 redo:
    if (parse_flags & 0x0010)
        next_nomacro_spc();
    else
        next_nomacro();
    if (!macro_ptr) {


        if (tok >= 256 &&
            (parse_flags & 0x0001)) {
            s = define_find(tok);
            if (s) {

                tok_str_new(&str);
                nested_list = ((void *)0);
                ml = ((void *)0);
                if (macro_subst_tok(&str, &nested_list, s, &ml) == 0) {

                    tok_str_add(&str, 0);
                    macro_ptr = str.str;
                    macro_ptr_allocated = str.str;
                    goto redo;
                }
            }
        }
    } else {
        if (tok == 0) {

            if (unget_buffer_enabled) {
                macro_ptr = unget_saved_macro_ptr;
                unget_buffer_enabled = 0;
            } else {

                tok_str_free(macro_ptr_allocated);
                macro_ptr = ((void *)0);
            }
            goto redo;
        }
    }


    if (tok == 0xce &&
        (parse_flags & 0x0002)) {
        parse_number((char *)tokc.cstr->data);
    }
}



static inline void unget_tok(int last_tok)
{
    int i, n;
    int *q;
    unget_saved_macro_ptr = macro_ptr;
    unget_buffer_enabled = 1;
    q = unget_saved_buffer;
    macro_ptr = q;
    *q++ = tok;
    n = tok_ext_size(tok) - 1;
    for(i=0;i<n;i++)
        *q++ = tokc.tab[i];
    *q = 0;
    tok = last_tok;
}




static void preprocess_init(TCCState *s1)
{
    s1->include_stack_ptr = s1->include_stack;


    s1->ifdef_stack_ptr = s1->ifdef_stack;
    file->ifdef_stack_ptr = s1->ifdef_stack_ptr;


    vtop = vstack - 1;
    s1->pack_stack[0] = 0;
    s1->pack_stack_ptr = s1->pack_stack;
}

void preprocess_new()
{
    int i, c;
    const char *p, *r;
    TokenSym *ts;


    for(i=(-1);i<256;i++)
        isidnum_table[i-(-1)] = isid(i) || isnum(i);


    table_ident = ((void *)0);
    memset(hash_ident, 0, 8192 * sizeof(TokenSym *));

    tok_ident = 256;
    p = tcc_keywords;
    while (*p) {
        r = p;
        for(;;) {
            c = *r++;
            if (c == '\0')
                break;
        }
        ts = tok_alloc(p, r - p - 1);
        p = r;
    }
}


static int tcc_preprocess(TCCState *s1)
{
    Sym *define_start;
    BufferedFile *file_ref;
    int token_seen, line_ref;

    preprocess_init(s1);
    define_start = define_stack;
    ch = file->buf_ptr[0];
    tok_flags = 0x0001 | 0x0002;
    parse_flags = 0x0008 | 0x0001 |
        0x0004 | 0x0010;
    token_seen = 0;
    line_ref = 0;
    file_ref = ((void *)0);

    for (;;) {
        next();
        if (tok == (-1)) {
            break;
        } else if (tok == 10) {
            if (!token_seen)
                continue;
            ++line_ref;
            token_seen = 0;
        } else if (!token_seen) {
            int d = file->line_num - line_ref;
            if (file != file_ref || d < 0 || d >= 8)
                fprintf(s1->outfile, "# %d \"%s\"\n", file->line_num, file->filename);
            else
                while (d)
                    fputs("\n", s1->outfile), --d;
            line_ref = (file_ref = file)->line_num;
            token_seen = 1;
        }
        fputs(get_tok_str(tok, &tokc), s1->outfile);
    }
    free_defines(define_start);
    return 0;
}
# 1131 "libtcc.c" 2
# 1 "./tccgen.c" 1
# 22 "./tccgen.c"
static inline CType *pointed_type(CType *type)
{
    return &type->ref->type;
}

void swap(int *p, int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}

void vsetc(CType *type, int r, CValue *vc)
{
    int v;

    if (vtop >= vstack + (256 - 1))
        error("memory full");



    if (vtop >= vstack) {
        v = vtop->r & 0x00ff;
        if (v == 0x00f3 || (v & ~1) == 0x00f4)
            gv(0x0001);
    }
    vtop++;
    vtop->type = *type;
    vtop->r = r;
    vtop->r2 = 0x00f0;
    vtop->c = *vc;
}


void vpushi(int v)
{
    CValue cval;
    cval.i = v;
    vsetc(&int_type, 0x00f0, &cval);
}


void vpushll(long long v)
{
    CValue cval;
    CType ctype;
    ctype.t = 12;
    cval.ull = v;
    vsetc(&ctype, 0x00f0, &cval);
}


static Sym *get_sym_ref(CType *type, Section *sec,
                        unsigned long offset, unsigned long size)
{
    int v;
    Sym *sym;

    v = anon_sym++;
    sym = global_identifier_push(v, type->t | 0x00000100, 0);
    sym->type.ref = type->ref;
    sym->r = 0x00f0 | 0x0200;
    put_extern_sym(sym, sec, offset, size);
    return sym;
}


static void vpush_ref(CType *type, Section *sec, unsigned long offset, unsigned long size)
{
    CValue cval;

    cval.ul = 0;
    vsetc(type, 0x00f0 | 0x0200, &cval);
    vtop->sym = get_sym_ref(type, sec, offset, size);
}


static Sym *external_global_sym(int v, CType *type, int r)
{
    Sym *s;

    s = sym_find(v);
    if (!s) {

        s = global_identifier_push(v, type->t | 0x00000080, 0);
        s->type.ref = type->ref;
        s->r = r | 0x00f0 | 0x0200;
    }
    return s;
}


static Sym *external_sym(int v, CType *type, int r)
{
    Sym *s;

    s = sym_find(v);
    if (!s) {

        s = sym_push(v, type, r | 0x00f0 | 0x0200, 0);
        s->type.t |= 0x00000080;
    } else {
        if (!is_compatible_types(&s->type, type))
            error("incompatible types for redefinition of '%s'",
                  get_tok_str(v, ((void *)0)));
    }
    return s;
}


static void vpush_global_sym(CType *type, int v)
{
    Sym *sym;
    CValue cval;

    sym = external_global_sym(v, type, 0);
    cval.ul = 0;
    vsetc(type, 0x00f0 | 0x0200, &cval);
    vtop->sym = sym;
}

void vset(CType *type, int r, int v)
{
    CValue cval;

    cval.i = v;
    vsetc(type, r, &cval);
}

void vseti(int r, int v)
{
    CType type;
    type.t = 0;
    vset(&type, r, v);
}

void vswap(void)
{
    SValue tmp;

    tmp = vtop[0];
    vtop[0] = vtop[-1];
    vtop[-1] = tmp;
}

void vpushv(SValue *v)
{
    if (vtop >= vstack + (256 - 1))
        error("memory full");
    vtop++;
    *vtop = *v;
}

void vdup(void)
{
    vpushv(vtop);
}


void save_reg(int r)
{
    int l, saved, size, align;
    SValue *p, sv;
    CType *type;


    saved = 0;
    l = 0;
    for(p=vstack;p<=vtop;p++) {
        if ((p->r & 0x00ff) == r ||
            ((p->type.t & 0x000f) == 12 && (p->r2 & 0x00ff) == r)) {

            if (!saved) {

                r = p->r & 0x00ff;

                type = &p->type;
                if ((p->r & 0x0100) ||
                    (!is_float(type->t) && (type->t & 0x000f) != 12))



                    type = &int_type;

                size = type_size(type, &align);
                loc = (loc - size) & -align;
                sv.type.t = type->t;
                sv.r = 0x00f2 | 0x0100;
                sv.c.ul = loc;
                store(r, &sv);


                if (r == TREG_ST0) {
                    o(0xd9dd);
                }



                if ((type->t & 0x000f) == 12) {
                    sv.c.ul += 4;
                    store(p->r2, &sv);
                }

                l = loc;
                saved = 1;
            }

            if (p->r & 0x0100) {



                p->r = (p->r & ~(0x00ff | 0x8000)) | 0x00f1;
            } else {
                p->r = lvalue_type(p->type.t) | 0x00f2;
            }
            p->r2 = 0x00f0;
            p->c.ul = l;
        }
    }
}



int get_reg_ex(int rc, int rc2)
{
    int r;
    SValue *p;

    for(r=0;r<4;r++) {
        if (reg_classes[r] & rc2) {
            int n;
            n=0;
            for(p = vstack; p <= vtop; p++) {
                if ((p->r & 0x00ff) == r ||
                    (p->r2 & 0x00ff) == r)
                    n++;
            }
            if (n <= 1)
                return r;
        }
    }
    return get_reg(rc);
}


int get_reg(int rc)
{
    int r;
    SValue *p;


    for(r=0;r<4;r++) {
        if (reg_classes[r] & rc) {
            for(p=vstack;p<=vtop;p++) {
                if ((p->r & 0x00ff) == r ||
                    (p->r2 & 0x00ff) == r)
                    goto notfound;
            }
            return r;
        }
    notfound: ;
    }




    for(p=vstack;p<=vtop;p++) {
        r = p->r & 0x00ff;
        if (r < 0x00f0 && (reg_classes[r] & rc))
            goto save_found;

        r = p->r2 & 0x00ff;
        if (r < 0x00f0 && (reg_classes[r] & rc)) {
        save_found:
            save_reg(r);
            return r;
        }
    }

    return -1;
}


void save_regs(int n)
{
    int r;
    SValue *p, *p1;
    p1 = vtop - n;
    for(p = vstack;p <= p1; p++) {
        r = p->r & 0x00ff;
        if (r < 0x00f0) {
            save_reg(r);
        }
    }
}



void move_reg(int r, int s)
{
    SValue sv;

    if (r != s) {
        save_reg(r);
        sv.type.t = 0;
        sv.r = s;
        sv.c.ul = 0;
        load(r, &sv);
    }
}


void gaddrof(void)
{
    vtop->r &= ~0x0100;

    if ((vtop->r & 0x00ff) == 0x00f1)
        vtop->r = (vtop->r & ~(0x00ff | (0x1000 | 0x2000 | 0x4000))) | 0x00f2 | 0x0100;
}



void gbound(void)
{
    int lval_type;
    CType type1;

    vtop->r &= ~0x0800;

    if (vtop->r & 0x0100) {

        if (!(vtop->r & 0x8000)) {
            lval_type = vtop->r & ((0x1000 | 0x2000 | 0x4000) | 0x0100);

            type1 = vtop->type;
            vtop->type.t = 0;
            gaddrof();
            vpushi(0);
            gen_bounded_ptr_add();
            vtop->r |= lval_type;
            vtop->type = type1;
        }

        gen_bounded_ptr_deref();
    }
}





int gv(int rc)
{
    int r, rc2, bit_pos, bit_size, size, align, i;


    if (vtop->type.t & 0x0040) {
        CType type;
        int bits = 32;
        bit_pos = (vtop->type.t >> 16) & 0x3f;
        bit_size = (vtop->type.t >> (16 + 6)) & 0x3f;

        vtop->type.t &= ~(0x0040 | (-1 << 16));

        if ((vtop->type.t & 0x000f) == 12) {
            type.t = 12;
            bits = 64;
        } else
            type.t = 0;
        if((vtop->type.t & 0x0010) ||
           (vtop->type.t & 0x000f) == 11)
            type.t |= 0x0010;
        gen_cast(&type);

        vpushi(bits - (bit_pos + bit_size));
        gen_op(0x01);
        vpushi(bits - bit_size);

        gen_op(0x02);
        r = gv(rc);
    } else {
        if (is_float(vtop->type.t) &&
            (vtop->r & (0x00ff | 0x0100)) == 0x00f0) {
            Sym *sym;
            int *ptr;
            unsigned long offset;







            size = type_size(&vtop->type, &align);
            offset = (data_section->data_offset + align - 1) & -align;
            data_section->data_offset = offset;






            ptr = section_ptr_add(data_section, size);
            size = size >> 2;







            for(i=0;i<size;i++)
                ptr[i] = vtop->c.tab[i];
            sym = get_sym_ref(&vtop->type, data_section, offset, size << 2);
            vtop->r |= 0x0100 | 0x0200;
            vtop->sym = sym;
            vtop->c.ul = 0;
        }

        if (vtop->r & 0x0800)
            gbound();


        r = vtop->r & 0x00ff;
        rc2 = 0x0001;
        if (rc == 0x0004)
            rc2 = 0x0020;




        if (r >= 0x00f0 ||
            (vtop->r & 0x0100) ||
            !(reg_classes[r] & rc) ||
            ((vtop->type.t & 0x000f) == 12 &&
             !(reg_classes[vtop->r2] & rc2))) {
            r = get_reg(rc);

            if ((vtop->type.t & 0x000f) == 12) {
                int r2;
                unsigned long long ll;


                if ((vtop->r & (0x00ff | 0x0100)) == 0x00f0) {

                    ll = vtop->c.ull;
                    vtop->c.ui = ll;
                    load(r, vtop);
                    vtop->r = r;
                    vpushi(ll >> 32);
                } else if (r >= 0x00f0 ||
                           (vtop->r & 0x0100)) {




                    save_regs(1);

                    load(r, vtop);
                    vdup();
                    vtop[-1].r = r;

                    vtop->type.t = 0;
                    gaddrof();
                    vpushi(4);
                    gen_op('+');
                    vtop->r |= 0x0100;
                } else {

                    load(r, vtop);
                    vdup();
                    vtop[-1].r = r;
                    vtop->r = vtop[-1].r2;
                }

                r2 = get_reg(rc2);
                load(r2, vtop);
                vpop();

                vtop->r2 = r2;
            } else

            if ((vtop->r & 0x0100) && !is_float(vtop->type.t)) {
                int t1, t;


                t = vtop->type.t;
                t1 = t;

                if (vtop->r & 0x1000)
                    t = 1;
                else if (vtop->r & 0x2000)
                    t = 2;
                if (vtop->r & 0x4000)
                    t |= 0x0010;
                vtop->type.t = t;
                load(r, vtop);

                vtop->type.t = t1;
            } else {

                load(r, vtop);
            }
        }
        vtop->r = r;





    }
    return r;
}


void gv2(int rc1, int rc2)
{
    int v;




    v = vtop[0].r & 0x00ff;
    if (v != 0x00f3 && (v & ~1) != 0x00f4 && rc1 <= rc2) {
        vswap();
        gv(rc1);
        vswap();
        gv(rc2);

        if ((vtop[-1].r & 0x00ff) >= 0x00f0) {
            vswap();
            gv(rc1);
            vswap();
        }
    } else {
        gv(rc2);
        vswap();
        gv(rc1);
        vswap();

        if ((vtop[0].r & 0x00ff) >= 0x00f0) {
            gv(rc2);
        }
    }
}


int rc_fret(int t)
{





    return 0x0008;
}


int reg_fret(int t)
{





    return TREG_ST0;
}


void lexpand(void)
{
    int u;

    u = vtop->type.t & 0x0010;
    gv(0x0001);
    vdup();
    vtop[0].r = vtop[-1].r2;
    vtop[0].r2 = 0x00f0;
    vtop[-1].r2 = 0x00f0;
    vtop[0].type.t = 0 | u;
    vtop[-1].type.t = 0 | u;
}
# 635 "./tccgen.c"
void lbuild(int t)
{
    gv2(0x0001, 0x0001);
    vtop[-1].r2 = vtop[0].r;
    vtop[-1].type.t = t;
    vpop();
}




void vrotb(int n)
{
    int i;
    SValue tmp;

    tmp = vtop[-n + 1];
    for(i=-n+1;i!=0;i++)
        vtop[i] = vtop[i+1];
    vtop[0] = tmp;
}




void vrott(int n)
{
    int i;
    SValue tmp;

    tmp = vtop[0];
    for(i = 0;i < n - 1; i++)
        vtop[-i] = vtop[-i - 1];
    vtop[-n + 1] = tmp;
}
# 688 "./tccgen.c"
void vpop(void)
{
    int v;
    v = vtop->r & 0x00ff;


    if (v == TREG_ST0 && !nocode_wanted) {
        o(0xd9dd);
    } else

    if (v == 0x00f4 || v == 0x00f5) {

        gsym(vtop->c.ul);
    }
    vtop--;
}



void gv_dup(void)
{
    int rc, t, r, r1;
    SValue sv;

    t = vtop->type.t;
    if ((t & 0x000f) == 12) {
        lexpand();
        gv_dup();
        vswap();
        vrotb(3);
        gv_dup();
        vrotb(4);

        lbuild(t);
        vrotb(3);
        vrotb(3);
        vswap();
        lbuild(t);
        vswap();
    } else {

        rc = 0x0001;
        sv.type.t = 0;
        if (is_float(t)) {
            rc = 0x0002;





            sv.type.t = t;
        }
        r = gv(rc);
        r1 = get_reg(rc);
        sv.r = r;
        sv.c.ul = 0;
        load(r1, &sv);
        vdup();

        vtop->r = r1;
    }
}



void gen_opl(int op)
{
    int t, a, b, op1, c, i;
    int func;
    unsigned short reg_iret = TREG_EAX;
    unsigned short reg_lret = TREG_EDX;
    SValue tmp;

    switch(op) {
    case '/':
    case 0xb2:
        func = TOK___divdi3;
        goto gen_func;
    case 0xb0:
        func = TOK___udivdi3;
        goto gen_func;
    case '%':
        func = TOK___moddi3;
        goto gen_mod_func;
    case 0xb1:
        func = TOK___umoddi3;
    gen_mod_func:




    gen_func:

        vpush_global_sym(&func_old_type, func);
        vrott(3);
        gfunc_call(2);
        vpushi(0);
        vtop->r = reg_iret;
        vtop->r2 = reg_lret;
        break;
    case '^':
    case '&':
    case '|':
    case '*':
    case '+':
    case '-':
        t = vtop->type.t;
        vswap();
        lexpand();
        vrotb(3);
        lexpand();

        tmp = vtop[0];
        vtop[0] = vtop[-3];
        vtop[-3] = tmp;
        tmp = vtop[-2];
        vtop[-2] = vtop[-3];
        vtop[-3] = tmp;
        vswap();

        if (op == '*') {
            vpushv(vtop - 1);
            vpushv(vtop - 1);
            gen_op(0xc2);
            lexpand();

            for(i=0;i<4;i++)
                vrotb(6);

            tmp = vtop[0];
            vtop[0] = vtop[-2];
            vtop[-2] = tmp;

            gen_op('*');
            vrotb(3);
            vrotb(3);
            gen_op('*');

            gen_op('+');
            gen_op('+');
        } else if (op == '+' || op == '-') {

            if (op == '+')
                op1 = 0xc3;
            else
                op1 = 0xc5;
            gen_op(op1);

            vrotb(3);
            vrotb(3);
            gen_op(op1 + 1);
        } else {
            gen_op(op);

            vrotb(3);
            vrotb(3);

            gen_op(op);

        }

        lbuild(t);
        break;
    case 0x02:
    case 0xcd:
    case 0x01:
        if ((vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0) {
            t = vtop[-1].type.t;
            vswap();
            lexpand();
            vrotb(3);

            c = (int)vtop->c.i;



            vpop();
            if (op != 0x01)
                vswap();
            if (c >= 32) {

                vpop();
                if (c > 32) {
                    vpushi(c - 32);
                    gen_op(op);
                }
                if (op != 0x02) {
                    vpushi(0);
                } else {
                    gv_dup();
                    vpushi(31);
                    gen_op(0x02);
                }
                vswap();
            } else {
                vswap();
                gv_dup();

                vpushi(c);
                gen_op(op);
                vswap();
                vpushi(32 - c);
                if (op == 0x01)
                    gen_op(0xcd);
                else
                    gen_op(0x01);
                vrotb(3);

                vpushi(c);
                if (op == 0x01)
                    gen_op(0x01);
                else
                    gen_op(0xcd);
                gen_op('|');
            }
            if (op != 0x01)
                vswap();
            lbuild(t);
        } else {

            switch(op) {
            case 0x02:
                func = TOK___ashrdi3;
                goto gen_func;
            case 0xcd:
                func = TOK___lshrdi3;
                goto gen_func;
            case 0x01:
                func = TOK___ashldi3;
                goto gen_func;
            }
        }
        break;
    default:

        t = vtop->type.t;
        vswap();
        lexpand();
        vrotb(3);
        lexpand();

        tmp = vtop[-1];
        vtop[-1] = vtop[-2];
        vtop[-2] = tmp;


        op1 = op;


        if (op1 == 0x9c)
            op1 = 0x9e;
        else if (op1 == 0x9f)
            op1 = 0x9d;
        else if (op1 == 0x92)
            op1 = 0x96;
        else if (op1 == 0x97)
            op1 = 0x93;
        a = 0;
        b = 0;
        gen_op(op1);
        if (op1 != 0x95) {
            a = gtst(1, 0);
        }
        if (op != 0x94) {


            if (a == 0) {
                b = gtst(0, 0);
            } else {

                b = oad(0x850f, 0);
# 967 "./tccgen.c"
            }
        }

        op1 = op;
        if (op1 == 0x9c)
            op1 = 0x92;
        else if (op1 == 0x9e)
            op1 = 0x96;
        else if (op1 == 0x9f)
            op1 = 0x97;
        else if (op1 == 0x9d)
            op1 = 0x93;
        gen_op(op1);
        a = gtst(1, a);
        gsym(b);
        vseti(0x00f5, a);
        break;
    }
}




void gen_opic(int op)
{
    int c1, c2, t1, t2, n;
    SValue *v1, *v2;
    long long l1, l2;
    typedef unsigned long long U;

    v1 = vtop - 1;
    v2 = vtop;
    t1 = v1->type.t & 0x000f;
    t2 = v2->type.t & 0x000f;

    if (t1 == 12)
        l1 = v1->c.ll;
    else if (v1->type.t & 0x0010)
        l1 = v1->c.ui;
    else
        l1 = v1->c.i;

    if (t2 == 12)
        l2 = v2->c.ll;
    else if (v2->type.t & 0x0010)
        l2 = v2->c.ui;
    else
        l2 = v2->c.i;


    c1 = (v1->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0;
    c2 = (v2->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0;
    if (c1 && c2) {
        switch(op) {
        case '+': l1 += l2; break;
        case '-': l1 -= l2; break;
        case '&': l1 &= l2; break;
        case '^': l1 ^= l2; break;
        case '|': l1 |= l2; break;
        case '*': l1 *= l2; break;

        case 0xb2:
        case '/':
        case '%':
        case 0xb0:
        case 0xb1:

            if (l2 == 0) {
                if (const_wanted)
                    error("division by zero in constant");
                goto general_case;
            }
            switch(op) {
            default: l1 /= l2; break;
            case '%': l1 %= l2; break;
            case 0xb0: l1 = (U)l1 / l2; break;
            case 0xb1: l1 = (U)l1 % l2; break;
            }
            break;
        case 0x01: l1 <<= l2; break;
        case 0xcd: l1 = (U)l1 >> l2; break;
        case 0x02: l1 >>= l2; break;

        case 0x92: l1 = (U)l1 < (U)l2; break;
        case 0x93: l1 = (U)l1 >= (U)l2; break;
        case 0x94: l1 = l1 == l2; break;
        case 0x95: l1 = l1 != l2; break;
        case 0x96: l1 = (U)l1 <= (U)l2; break;
        case 0x97: l1 = (U)l1 > (U)l2; break;
        case 0x9c: l1 = l1 < l2; break;
        case 0x9d: l1 = l1 >= l2; break;
        case 0x9e: l1 = l1 <= l2; break;
        case 0x9f: l1 = l1 > l2; break;

        case 0xa0: l1 = l1 && l2; break;
        case 0xa1: l1 = l1 || l2; break;
        default:
            goto general_case;
        }
        v1->c.ll = l1;
        vtop--;
    } else {

        if (c1 && (op == '+' || op == '&' || op == '^' ||
                   op == '|' || op == '*')) {
            vswap();
            c2 = c1;
            l2 = l1;
        }

        if (c2 && (((op == '*' || op == '/' || op == 0xb0 ||
                     op == 0xb2) &&
                    l2 == 1) ||
                   ((op == '+' || op == '-' || op == '|' || op == '^' ||
                     op == 0x01 || op == 0xcd || op == 0x02) &&
                    l2 == 0) ||
                   (op == '&' &&
                    l2 == -1))) {

            vtop--;
        } else if (c2 && (op == '*' || op == 0xb2 || op == 0xb0)) {

            if (l2 > 0 && (l2 & (l2 - 1)) == 0) {
                n = -1;
                while (l2) {
                    l2 >>= 1;
                    n++;
                }
                vtop->c.ll = n;
                if (op == '*')
                    op = 0x01;
                else if (op == 0xb2)
                    op = 0x02;
                else
                    op = 0xcd;
            }
            goto general_case;
        } else if (c2 && (op == '+' || op == '-') &&
                   ((vtop[-1].r & (0x00ff | 0x0100 | 0x0200)) ==
                   (0x00f0 | 0x0200) ||
                   (vtop[-1].r & (0x00ff | 0x0100)) == 0x00f2)) {

            if (op == '-')
                l2 = -l2;
            vtop--;
            vtop->c.ll += l2;
        } else {
        general_case:
            if (!nocode_wanted) {

                if (t1 == 12 || t2 == 12)
                    gen_opl(op);
                else
                    gen_opi(op);
            } else {
                vtop--;
            }
        }
    }
}


void gen_opif(int op)
{
    int c1, c2;
    SValue *v1, *v2;
    long double f1, f2;

    v1 = vtop - 1;
    v2 = vtop;

    c1 = (v1->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0;
    c2 = (v2->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0;
    if (c1 && c2) {
        if (v1->type.t == 8) {
            f1 = v1->c.f;
            f2 = v2->c.f;
        } else if (v1->type.t == 9) {
            f1 = v1->c.d;
            f2 = v2->c.d;
        } else {
            f1 = v1->c.ld;
            f2 = v2->c.ld;
        }



        if (!ieee_finite(f1) || !ieee_finite(f2))
            goto general_case;

        switch(op) {
        case '+': f1 += f2; break;
        case '-': f1 -= f2; break;
        case '*': f1 *= f2; break;
        case '/':
            if (f2 == 0.0) {
                if (const_wanted)
                    error("division by zero in constant");
                goto general_case;
            }
            f1 /= f2;
            break;

        default:
            goto general_case;
        }

        if (v1->type.t == 8) {
            v1->c.f = f1;
        } else if (v1->type.t == 9) {
            v1->c.d = f1;
        } else {
            v1->c.ld = f1;
        }
        vtop--;
    } else {
    general_case:
        if (!nocode_wanted) {
            gen_opf(op);
        } else {
            vtop--;
        }
    }
}

static int pointed_size(CType *type)
{
    int align;
    return type_size(pointed_type(type), &align);
}

static inline int is_null_pointer(SValue *p)
{
    if ((p->r & (0x00ff | 0x0100 | 0x0200)) != 0x00f0)
        return 0;
    return ((p->type.t & 0x000f) == 0 && p->c.i == 0) ||
        ((p->type.t & 0x000f) == 12 && p->c.ll == 0);
}

static inline int is_integer_btype(int bt)
{
    return (bt == 1 || bt == 2 ||
            bt == 0 || bt == 12);
}


static void check_comparison_pointer_types(SValue *p1, SValue *p2, int op)
{
    CType *type1, *type2, tmp_type1, tmp_type2;
    int bt1, bt2;


    if (is_null_pointer(p1) || is_null_pointer(p2))
        return;
    type1 = &p1->type;
    type2 = &p2->type;
    bt1 = type1->t & 0x000f;
    bt2 = type2->t & 0x000f;

    if ((is_integer_btype(bt1) || is_integer_btype(bt2)) && op != '-') {
        if (op != 0xa1 && op != 0xa0 )
            warning("comparison between pointer and integer");
        return;
    }


    if (bt1 == 4) {
        type1 = pointed_type(type1);
    } else if (bt1 != 6)
        goto invalid_operands;

    if (bt2 == 4) {
        type2 = pointed_type(type2);
    } else if (bt2 != 6) {
    invalid_operands:
        error("invalid operands to binary %s", get_tok_str(op, ((void *)0)));
    }
    if ((type1->t & 0x000f) == 3 ||
        (type2->t & 0x000f) == 3)
        return;
    tmp_type1 = *type1;
    tmp_type2 = *type2;
    tmp_type1.t &= ~(0x0010 | 0x0800 | 0x1000);
    tmp_type2.t &= ~(0x0010 | 0x0800 | 0x1000);
    if (!is_compatible_types(&tmp_type1, &tmp_type2)) {

        if (op == '-')
            goto invalid_operands;
        else
            warning("comparison of distinct pointer types lacks a cast");
    }
}


void gen_op(int op)
{
    int u, t1, t2, bt1, bt2, t;
    CType type1;

    t1 = vtop[-1].type.t;
    t2 = vtop[0].type.t;
    bt1 = t1 & 0x000f;
    bt2 = t2 & 0x000f;

    if (bt1 == 4 || bt2 == 4) {


        if (op >= 0x92 && op <= 0xa1) {
            check_comparison_pointer_types(vtop - 1, vtop, op);




            t = 0 | 0x0010;

            goto std_op;
        }

        if (bt1 == 4 && bt2 == 4) {
            if (op != '-')
                error("cannot use pointers here");
            check_comparison_pointer_types(vtop - 1, vtop, op);

            u = pointed_size(&vtop[-1].type);
            gen_opic(op);




            vtop->type.t = 0;

            vpushi(u);
            gen_op(0xb2);
        } else {

            if (op != '-' && op != '+')
                error("cannot use pointers here");

            if (bt2 == 4) {
                vswap();
                swap(&t1, &t2);
            }
            type1 = vtop[-1].type;




            vpushi(pointed_size(&vtop[-1].type));

            gen_op('*');



            if (tcc_state->do_bounds_check && !const_wanted) {


                if (op == '-') {
                    vpushi(0);
                    vswap();
                    gen_op('-');
                }
                gen_bounded_ptr_add();
            } else

            {
                gen_opic(op);
            }

            vtop->type = type1;
        }
    } else if (is_float(bt1) || is_float(bt2)) {

        if (bt1 == 10 || bt2 == 10) {
            t = 10;
        } else if (bt1 == 9 || bt2 == 9) {
            t = 9;
        } else {
            t = 8;
        }

        if (op != '+' && op != '-' && op != '*' && op != '/' &&
            (op < 0x92 || op > 0x9f))
            error("invalid operands for binary operation");
        goto std_op;
    } else if (bt1 == 12 || bt2 == 12) {

        t = 12;

        if ((t1 & (0x000f | 0x0010)) == (12 | 0x0010) ||
            (t2 & (0x000f | 0x0010)) == (12 | 0x0010))
            t |= 0x0010;
        goto std_op;
    } else {

        t = 0;

        if ((t1 & (0x000f | 0x0010)) == (0 | 0x0010) ||
            (t2 & (0x000f | 0x0010)) == (0 | 0x0010))
            t |= 0x0010;
    std_op:


        if (t & 0x0010) {
            if (op == 0x02)
                op = 0xcd;
            else if (op == '/')
                op = 0xb0;
            else if (op == '%')
                op = 0xb1;
            else if (op == 0x9c)
                op = 0x92;
            else if (op == 0x9f)
                op = 0x97;
            else if (op == 0x9e)
                op = 0x96;
            else if (op == 0x9d)
                op = 0x93;
        }
        vswap();
        type1.t = t;
        gen_cast(&type1);
        vswap();


        if (op == 0xcd || op == 0x02 || op == 0x01)
            type1.t = 0;
        gen_cast(&type1);
        if (is_float(t))
            gen_opif(op);
        else
            gen_opic(op);
        if (op >= 0x92 && op <= 0x9f) {

            vtop->type.t = 0;
        } else {
            vtop->type.t = t;
        }
    }
}



void gen_cvt_itof1(int t)
{
    if ((vtop->type.t & (0x000f | 0x0010)) ==
        (12 | 0x0010)) {

        if (t == 8)
            vpush_global_sym(&func_old_type, TOK___floatundisf);

        else if (t == 10)
            vpush_global_sym(&func_old_type, TOK___floatundixf);

        else
            vpush_global_sym(&func_old_type, TOK___floatundidf);
        vrott(2);
        gfunc_call(1);
        vpushi(0);
        vtop->r = reg_fret(t);
    } else {
        gen_cvt_itof(t);
    }
}



void gen_cvt_ftoi1(int t)
{
    int st;

    if (t == (12 | 0x0010)) {

        st = vtop->type.t & 0x000f;
        if (st == 8)
            vpush_global_sym(&func_old_type, TOK___fixunssfdi);

        else if (st == 10)
            vpush_global_sym(&func_old_type, TOK___fixunsxfdi);

        else
            vpush_global_sym(&func_old_type, TOK___fixunsdfdi);
        vrott(2);
        gfunc_call(1);
        vpushi(0);
        vtop->r = TREG_EAX;
        vtop->r2 = TREG_EDX;
    } else {
        gen_cvt_ftoi(t);
    }
}


void force_charshort_cast(int t)
{
    int bits, dbt;
    dbt = t & 0x000f;

    if (dbt == 1)
        bits = 8;
    else
        bits = 16;
    if (t & 0x0010) {
        vpushi((1 << bits) - 1);
        gen_op('&');
    } else {
        bits = 32 - bits;
        vpushi(bits);
        gen_op(0x01);



        vtop->type.t &= ~0x0010;
        vpushi(bits);
        gen_op(0x02);
    }
}


static void gen_cast(CType *type)
{
    int sbt, dbt, sf, df, c, p;




    if (vtop->r & 0x0400) {
        vtop->r &= ~0x0400;
        force_charshort_cast(vtop->type.t);
    }


    if (vtop->type.t & 0x0040) {
        gv(0x0001);
    }

    dbt = type->t & (0x000f | 0x0010);
    sbt = vtop->type.t & (0x000f | 0x0010);

    if (sbt != dbt) {
        sf = is_float(sbt);
        df = is_float(dbt);
        c = (vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0;
        p = (vtop->r & (0x00ff | 0x0100 | 0x0200)) == (0x00f0 | 0x0200);
        if (c) {


            if (sbt == 8)
                vtop->c.ld = vtop->c.f;
            else if (sbt == 9)
                vtop->c.ld = vtop->c.d;

            if (df) {
                if ((sbt & 0x000f) == 12) {
                    if (sbt & 0x0010)
                        vtop->c.ld = vtop->c.ull;
                    else
                        vtop->c.ld = vtop->c.ll;
                } else if(!sf) {
                    if (sbt & 0x0010)
                        vtop->c.ld = vtop->c.ui;
                    else
                        vtop->c.ld = vtop->c.i;
                }

                if (dbt == 8)
                    vtop->c.f = (float)vtop->c.ld;
                else if (dbt == 9)
                    vtop->c.d = (double)vtop->c.ld;
            } else if (sf && dbt == (12|0x0010)) {
                vtop->c.ull = (unsigned long long)vtop->c.ld;
            } else if (sf && dbt == 11) {
                vtop->c.i = (vtop->c.ld != 0);
            } else {
                if(sf)
                    vtop->c.ll = (long long)vtop->c.ld;
                else if (sbt == (12|0x0010))
                    vtop->c.ll = vtop->c.ull;
                else if (sbt & 0x0010)
                    vtop->c.ll = vtop->c.ui;
                else if (sbt != 12)
                    vtop->c.ll = vtop->c.i;

                if (dbt == (12|0x0010))
                    vtop->c.ull = vtop->c.ll;
                else if (dbt == 11)
                    vtop->c.i = (vtop->c.ll != 0);
                else if (dbt != 12) {
                    int s = 0;
                    if ((dbt & 0x000f) == 1)
                        s = 24;
                    else if ((dbt & 0x000f) == 2)
                        s = 16;

                    if(dbt & 0x0010)
                        vtop->c.ui = ((unsigned int)vtop->c.ll << s) >> s;
                    else
                        vtop->c.i = ((int)vtop->c.ll << s) >> s;
                }
            }
        } else if (p && dbt == 11) {
            vtop->r = 0x00f0;
            vtop->c.i = 1;
        } else if (!nocode_wanted) {

            if (sf && df) {

                gen_cvt_ftof(dbt);
            } else if (df) {

                gen_cvt_itof1(dbt);
            } else if (sf) {

                if (dbt == 11) {
                     vpushi(0);
                     gen_op(0x95);
                } else {

                    if (dbt != (0 | 0x0010) &&
                        dbt != (12 | 0x0010) &&
                        dbt != 12)
                        dbt = 0;
                    gen_cvt_ftoi1(dbt);
                    if (dbt == 0 && (type->t & (0x000f | 0x0010)) != dbt) {

                        vtop->type.t = dbt;
                        gen_cast(type);
                    }
                }

            } else if ((dbt & 0x000f) == 12) {
                if ((sbt & 0x000f) != 12) {


                    gv(0x0001);

                    if (sbt == (0 | 0x0010)) {
                        vpushi(0);
                        gv(0x0001);
                    } else {
                        if (sbt == 4) {


                            gen_cast(&int_type);
                        }
                        gv_dup();
                        vpushi(31);
                        gen_op(0x02);
                    }

                    vtop[-1].r2 = vtop->r;
                    vpop();
                }
# 1633 "./tccgen.c"
            } else if (dbt == 11) {

                vpushi(0);
                gen_op(0x95);
            } else if ((dbt & 0x000f) == 1 ||
                       (dbt & 0x000f) == 2) {
                if (sbt == 4) {
                    vtop->type.t = 0;
                    warning("nonportable conversion from pointer to char/short");
                }
                force_charshort_cast(dbt);
            } else if ((dbt & 0x000f) == 0) {

                if (sbt == 12) {

                    lexpand();
                    vpop();
                }



            }
        }
    } else if ((dbt & 0x000f) == 4 && !(vtop->r & 0x0100)) {


        vtop->r = (vtop->r & ~(0x1000 | 0x2000 | 0x4000))
                  | (lvalue_type(type->ref->type.t) & (0x1000 | 0x2000 | 0x4000));
    }
    vtop->type = *type;
}


static int type_size(CType *type, int *a)
{
    Sym *s;
    int bt;

    bt = type->t & 0x000f;
    if (bt == 7) {

        s = type->ref;
        *a = s->r;
        return s->c;
    } else if (bt == 4) {
        if (type->t & 0x0020) {
            int ts;

            s = type->ref;
            ts = type_size(&s->type, a);

            if (ts < 0 && s->c < 0)
                ts = -ts;

            return ts * s->c;
        } else {
            *a = 4;
            return 4;
        }
    } else if (bt == 10) {
        *a = 4;
        return 12;
    } else if (bt == 9 || bt == 12) {




        *a = 4;
# 1711 "./tccgen.c"
        return 8;
    } else if (bt == 0 || bt == 5 || bt == 8) {
        *a = 4;
        return 4;
    } else if (bt == 2) {
        *a = 2;
        return 2;
    } else {

        *a = 1;
        return 1;
    }
}



static void mk_pointer(CType *type)
{
    Sym *s;
    s = sym_push(0x20000000, type, 0, -1);
    type->t = 4 | (type->t & ~(~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400))));
    type->ref = s;
}


static int is_compatible_func(CType *type1, CType *type2)
{
    Sym *s1, *s2;

    s1 = type1->ref;
    s2 = type2->ref;
    if (!is_compatible_types(&s1->type, &s2->type))
        return 0;

    if ((((func_attr_t*)&(s1->r))->func_call) != (((func_attr_t*)&(s2->r))->func_call))
        return 0;

    if (s1->c == 2 || s2->c == 2)
        return 1;
    if (s1->c != s2->c)
        return 0;
    while (s1 != ((void *)0)) {
        if (s2 == ((void *)0))
            return 0;
        if (!is_compatible_parameter_types(&s1->type, &s2->type))
            return 0;
        s1 = s1->next;
        s2 = s2->next;
    }
    if (s2)
        return 0;
    return 1;
}






static int compare_types(CType *type1, CType *type2, int unqualified)
{
    int bt1, t1, t2;

    t1 = type1->t & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400)));
    t2 = type2->t & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400)));
    if (unqualified) {

        t1 &= ~(0x0800 | 0x1000);
        t2 &= ~(0x0800 | 0x1000);
    }

    if (t1 != t2)
        return 0;

    bt1 = t1 & 0x000f;
    if (bt1 == 4) {
        type1 = pointed_type(type1);
        type2 = pointed_type(type2);
        return is_compatible_types(type1, type2);
    } else if (bt1 == 7) {
        return (type1->ref == type2->ref);
    } else if (bt1 == 6) {
        return is_compatible_func(type1, type2);
    } else {
        return 1;
    }
}




static int is_compatible_types(CType *type1, CType *type2)
{
    return compare_types(type1,type2,0);
}



static int is_compatible_parameter_types(CType *type1, CType *type2)
{
    return compare_types(type1,type2,1);
}





void type_to_str(char *buf, int buf_size,
                 CType *type, const char *varstr)
{
    int bt, v, t;
    Sym *s, *sa;
    char buf1[256];
    const char *tstr;

    t = type->t & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400)));
    bt = t & 0x000f;
    buf[0] = '\0';
    if (t & 0x0800)
        pstrcat(buf, buf_size, "const ");
    if (t & 0x1000)
        pstrcat(buf, buf_size, "volatile ");
    if (t & 0x0010)
        pstrcat(buf, buf_size, "unsigned ");
    switch(bt) {
    case 3:
        tstr = "void";
        goto add_tstr;
    case 11:
        tstr = "_Bool";
        goto add_tstr;
    case 1:
        tstr = "char";
        goto add_tstr;
    case 2:
        tstr = "short";
        goto add_tstr;
    case 0:
        tstr = "int";
        goto add_tstr;
    case 13:
        tstr = "long";
        goto add_tstr;
    case 12:
        tstr = "long long";
        goto add_tstr;
    case 8:
        tstr = "float";
        goto add_tstr;
    case 9:
        tstr = "double";
        goto add_tstr;
    case 10:
        tstr = "long double";
    add_tstr:
        pstrcat(buf, buf_size, tstr);
        break;
    case 5:
    case 7:
        if (bt == 7)
            tstr = "struct ";
        else
            tstr = "enum ";
        pstrcat(buf, buf_size, tstr);
        v = type->ref->v & ~0x40000000;
        if (v >= 0x10000000)
            pstrcat(buf, buf_size, "<anonymous>");
        else
            pstrcat(buf, buf_size, get_tok_str(v, ((void *)0)));
        break;
    case 6:
        s = type->ref;
        type_to_str(buf, buf_size, &s->type, varstr);
        pstrcat(buf, buf_size, "(");
        sa = s->next;
        while (sa != ((void *)0)) {
            type_to_str(buf1, sizeof(buf1), &sa->type, ((void *)0));
            pstrcat(buf, buf_size, buf1);
            sa = sa->next;
            if (sa)
                pstrcat(buf, buf_size, ", ");
        }
        pstrcat(buf, buf_size, ")");
        goto no_var;
    case 4:
        s = type->ref;
        pstrcpy(buf1, sizeof(buf1), "*");
        if (varstr)
            pstrcat(buf1, sizeof(buf1), varstr);
        type_to_str(buf, buf_size, &s->type, buf1);
        goto no_var;
    }
    if (varstr) {
        pstrcat(buf, buf_size, " ");
        pstrcat(buf, buf_size, varstr);
    }
 no_var: ;
}



static void gen_assign_cast(CType *dt)
{
    CType *st, *type1, *type2, tmp_type1, tmp_type2;
    char buf1[256], buf2[256];
    int dbt, sbt;

    st = &vtop->type;
    dbt = dt->t & 0x000f;
    sbt = st->t & 0x000f;
    if (dt->t & 0x0800)
        warning("assignment of read-only location");
    switch(dbt) {
    case 4:


        if (is_null_pointer(vtop))
            goto type_ok;

        if (is_integer_btype(sbt)) {
            warning("assignment makes pointer from integer without a cast");
            goto type_ok;
        }
        type1 = pointed_type(dt);

        if (sbt == 6) {
            if ((type1->t & 0x000f) != 3 &&
                !is_compatible_types(pointed_type(dt), st))
                goto error;
            else
                goto type_ok;
        }
        if (sbt != 4)
            goto error;
        type2 = pointed_type(st);
        if ((type1->t & 0x000f) == 3 ||
            (type2->t & 0x000f) == 3) {

        } else {

            tmp_type1 = *type1;
            tmp_type2 = *type2;
            tmp_type1.t &= ~(0x0010 | 0x0800 | 0x1000);
            tmp_type2.t &= ~(0x0010 | 0x0800 | 0x1000);
            if (!is_compatible_types(&tmp_type1, &tmp_type2))
                warning("assignment from incompatible pointer type");
        }

        if ((!(type1->t & 0x0800) && (type2->t & 0x0800)) ||
            (!(type1->t & 0x1000) && (type2->t & 0x1000)))
            warning("assignment discards qualifiers from pointer target type");
        break;
    case 1:
    case 2:
    case 0:
    case 12:
        if (sbt == 4 || sbt == 6) {
            warning("assignment makes integer from pointer without a cast");
        }

        break;
    case 7:
        tmp_type1 = *dt;
        tmp_type2 = *st;
        tmp_type1.t &= ~(0x0800 | 0x1000);
        tmp_type2.t &= ~(0x0800 | 0x1000);
        if (!is_compatible_types(&tmp_type1, &tmp_type2)) {
        error:
            type_to_str(buf1, sizeof(buf1), st, ((void *)0));
            type_to_str(buf2, sizeof(buf2), dt, ((void *)0));
            error("cannot cast '%s' to '%s'", buf1, buf2);
        }
        break;
    }
 type_ok:
    gen_cast(dt);
}


void vstore(void)
{
    int sbt, dbt, ft, r, t, size, align, bit_size, bit_pos, rc, delayed_cast;

    ft = vtop[-1].type.t;
    sbt = vtop->type.t & 0x000f;
    dbt = ft & 0x000f;
    if (((sbt == 0 || sbt == 2) && dbt == 1) ||
        (sbt == 0 && dbt == 2)) {

        delayed_cast = 0x0400;
        vtop->type.t = ft & ((~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400))) & ~(0x0040 | (-1 << 16)));

        if (ft & 0x0800)
            warning("assignment of read-only location");
    } else {
        delayed_cast = 0;
        if (!(ft & 0x0040))
            gen_assign_cast(&vtop[-1].type);
    }

    if (sbt == 7) {



        if (!nocode_wanted) {
            size = type_size(&vtop->type, &align);
# 2025 "./tccgen.c"
            vpush_global_sym(&func_old_type, TOK_memcpy);


            vpushv(vtop - 2);
            vtop->type.t = 4;
            gaddrof();

            vpushv(vtop - 2);
            vtop->type.t = 4;
            gaddrof();

            vpushi(size);
            gfunc_call(3);

            vswap();
            vpop();
        } else {
            vswap();
            vpop();
        }

    } else if (ft & 0x0040) {

        bit_pos = (ft >> 16) & 0x3f;
        bit_size = (ft >> (16 + 6)) & 0x3f;

        vtop[-1].type.t = ft & ~(0x0040 | (-1 << 16));


        gv_dup();
        vswap();
        vrott(3);

        if((ft & 0x000f) == 11) {
            gen_cast(&vtop[-1].type);
            vtop[-1].type.t = (vtop[-1].type.t & ~0x000f) | (1 | 0x0010);
        }


        vdup();
        vtop[-1] = vtop[-2];


        if((ft & 0x000f) != 11) {
            if((ft & 0x000f) == 12) {
                vpushll((1ULL << bit_size) - 1ULL);
            } else {
                vpushi((1 << bit_size) - 1);
            }
            gen_op('&');
        }
        vpushi(bit_pos);
        gen_op(0x01);

        vswap();
        if((ft & 0x000f) == 12) {
            vpushll(~(((1ULL << bit_size) - 1ULL) << bit_pos));
        } else {
            vpushi(~(((1 << bit_size) - 1) << bit_pos));
        }
        gen_op('&');
        gen_op('|');

        vstore();


        vpop();

    } else {


        if (vtop[-1].r & 0x0800) {
            vswap();
            gbound();
            vswap();
        }

        if (!nocode_wanted) {
            rc = 0x0001;
            if (is_float(ft)) {
                rc = 0x0002;





            }
            r = gv(rc);

            if ((vtop[-1].r & 0x00ff) == 0x00f1) {
                SValue sv;
                t = get_reg(0x0001);



                sv.type.t = 0;

                sv.r = 0x00f2 | 0x0100;
                sv.c.ul = vtop[-1].c.ul;
                load(t, &sv);
                vtop[-1].r = t | 0x0100;
            }
            store(r, vtop - 1);


            if ((ft & 0x000f) == 12) {
                vswap();

                vtop->type.t = 0;
                gaddrof();
                vpushi(4);
                gen_op('+');
                vtop->r |= 0x0100;
                vswap();

                store(vtop->r2, vtop - 1);
            }

        }
        vswap();
        vtop--;
        vtop->r |= delayed_cast;
    }
}


void inc(int post, int c)
{
    test_lvalue();
    vdup();
    if (post) {
        gv_dup();
        vrotb(3);
        vrotb(3);
    }

    vpushi(c - 0xa3);
    gen_op('+');
    vstore();
    if (post)
        vpop();
}
# 2176 "./tccgen.c"
static void parse_attribute(AttributeDef *ad)
{
    int t, n;

    while (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
    next();
    skip('(');
    skip('(');
    while (tok != ')') {
        if (tok < 256)
            expect("attribute name");
        t = tok;
        next();
        switch(t) {
        case TOK_SECTION1:
        case TOK_SECTION2:
            skip('(');
            if (tok != 0xb5)
                expect("section name");
            ad->section = find_section(tcc_state, (char *)tokc.cstr->data);
            next();
            skip(')');
            break;
        case TOK_ALIGNED1:
        case TOK_ALIGNED2:
            if (tok == '(') {
                next();
                n = expr_const();
                if (n <= 0 || (n & (n - 1)) != 0)
                    error("alignment must be a positive power of two");
                skip(')');
            } else {
                n = 8;
            }
            ad->aligned = n;
            break;
        case TOK_PACKED1:
        case TOK_PACKED2:
            ad->packed = 1;
            break;
        case TOK_UNUSED1:
        case TOK_UNUSED2:


            break;
        case TOK_NORETURN1:
        case TOK_NORETURN2:


            break;
        case TOK_CDECL1:
        case TOK_CDECL2:
        case TOK_CDECL3:
            (((func_attr_t*)&(ad->func_attr))->func_call) = 0;
            break;
        case TOK_STDCALL1:
        case TOK_STDCALL2:
        case TOK_STDCALL3:
            (((func_attr_t*)&(ad->func_attr))->func_call) = 1;
            break;

        case TOK_REGPARM1:
        case TOK_REGPARM2:
            skip('(');
            n = expr_const();
            if (n > 3)
                n = 3;
            else if (n < 0)
                n = 0;
            if (n > 0)
                (((func_attr_t*)&(ad->func_attr))->func_call) = 2 + n - 1;
            skip(')');
            break;
        case TOK_FASTCALL1:
        case TOK_FASTCALL2:
        case TOK_FASTCALL3:
            (((func_attr_t*)&(ad->func_attr))->func_call) = 5;
            break;

        case TOK_DLLEXPORT:
            (((func_attr_t*)&(ad->func_attr))->func_export) = 1;
            break;
        default:
            if (tcc_state->warn_unsupported)
                warning("'%s' attribute ignored", get_tok_str(t, ((void *)0)));

            if (tok == '(') {
                int parenthesis = 0;
                do {
                    if (tok == '(')
                        parenthesis++;
                    else if (tok == ')')
                        parenthesis--;
                    next();
                } while (parenthesis && tok != -1);
            }
            break;
        }
        if (tok != ',')
            break;
        next();
    }
    skip(')');
    skip(')');
    }
}


static void struct_decl(CType *type, int u)
{
    int a, v, size, align, maxalign, c, offset;
    int bit_size, bit_pos, bsize, bt, lbit_pos, prevbt;
    Sym *s, *ss, *ass, **ps;
    AttributeDef ad;
    CType type1, btype;

    a = tok;
    next();
    if (tok != '{') {
        v = tok;
        next();

        if (v < 256)
            expect("struct/union/enum name");
        s = struct_find(v);
        if (s) {
            if (s->type.t != a)
                error("invalid type");
            goto do_decl;
        }
    } else {
        v = anon_sym++;
    }
    type1.t = a;

    s = sym_push(v | 0x40000000, &type1, 0, -1);
    s->r = 0;

 do_decl:
    type->t = u;
    type->ref = s;

    if (tok == '{') {
        next();
        if (s->c != -1)
            error("struct/union/enum already defined");

        c = 0;

        if (a == TOK_ENUM) {
            for(;;) {
                v = tok;
                if (v < TOK_DEFINE)
                    expect("identifier");
                next();
                if (tok == '=') {
                    next();
                    c = expr_const();
                }

                ss = sym_push(v, &int_type, 0x00f0, c);
                ss->type.t |= 0x00000100;
                if (tok != ',')
                    break;
                next();
                c++;

                if (tok == '}')
                    break;
            }
            skip('}');
        } else {
            maxalign = 1;
            ps = &s->next;
            prevbt = 0;
            bit_pos = 0;
            offset = 0;
            while (tok != '}') {
                parse_btype(&btype, &ad);
                while (1) {
                    bit_size = -1;
                    v = 0;
                    type1 = btype;
                    if (tok != ':') {
                        type_decl(&type1, &ad, &v, 2 | 1);
                        if (v == 0 && (type1.t & 0x000f) != 7)
                            expect("identifier");
                        if ((type1.t & 0x000f) == 6 ||
                            (type1.t & (0x00000200 | 0x00000100 | 0x00000080 | 0x00000400)))
                            error("invalid type for '%s'",
                                  get_tok_str(v, ((void *)0)));
                    }
                    if (tok == ':') {
                        next();
                        bit_size = expr_const();

                        if (bit_size < 0)
                            error("negative width in bit-field '%s'",
                                  get_tok_str(v, ((void *)0)));
                        if (v && bit_size == 0)
                            error("zero width for bit-field '%s'",
                                  get_tok_str(v, ((void *)0)));
                    }
                    size = type_size(&type1, &align);
                    if (ad.aligned) {
                        if (align < ad.aligned)
                            align = ad.aligned;
                    } else if (ad.packed) {
                        align = 1;
                    } else if (*tcc_state->pack_stack_ptr) {
                        if (align > *tcc_state->pack_stack_ptr)
                            align = *tcc_state->pack_stack_ptr;
                    }
                    lbit_pos = 0;
                    if (bit_size >= 0) {
                        bt = type1.t & 0x000f;
                        if (bt != 0 &&
                            bt != 1 &&
                            bt != 2 &&
                            bt != 11 &&
                            bt != 5 &&
                            bt != 12)
                            error("bitfields must have scalar type");
                        bsize = size * 8;
                        if (bit_size > bsize) {
                            error("width of '%s' exceeds its type",
                                  get_tok_str(v, ((void *)0)));
                        } else if (bit_size == bsize) {

                            bit_pos = 0;
                        } else if (bit_size == 0) {



                            bit_pos = 0;
                        } else {



                            if ((bit_pos + bit_size) > bsize ||
                                bt != prevbt || a == TOK_UNION)
                                bit_pos = 0;
                            lbit_pos = bit_pos;

                            type1.t |= 0x0040 |
                                (bit_pos << 16) |
                                (bit_size << (16 + 6));
                            bit_pos += bit_size;
                        }
                        prevbt = bt;
                    } else {
                        bit_pos = 0;
                    }
                    if (v != 0 || (type1.t & 0x000f) == 7) {


                        if (lbit_pos == 0) {
                            if (a == TOK_STRUCT) {
                                c = (c + align - 1) & -align;
                                offset = c;
                                if (size > 0)
                                    c += size;
                            } else {
                                offset = 0;
                                if (size > c)
                                    c = size;
                            }
                            if (align > maxalign)
                                maxalign = align;
                        }
# 2456 "./tccgen.c"
                    }
                    if (v == 0 && (type1.t & 0x000f) == 7) {
                        ass = type1.ref;
                        while ((ass = ass->next) != ((void *)0)) {
                           ss = sym_push(ass->v, &ass->type, 0, offset + ass->c);
                           *ps = ss;
                           ps = &ss->next;
                        }
                    } else if (v) {
                        ss = sym_push(v | 0x20000000, &type1, 0, offset);
                        *ps = ss;
                        ps = &ss->next;
                    }
                    if (tok == ';' || tok == (-1))
                        break;
                    skip(',');
                }
                skip(';');
            }
            skip('}');

            s->c = (c + maxalign - 1) & -maxalign;
            s->r = maxalign;
        }
    }
}




static int parse_btype(CType *type, AttributeDef *ad)
{
    int t, u, type_found, typespec_found, typedef_found;
    Sym *s;
    CType type1;

    memset(ad, 0, sizeof(AttributeDef));
    type_found = 0;
    typespec_found = 0;
    typedef_found = 0;
    t = 0;
    while(1) {
        switch(tok) {
        case TOK_EXTENSION:

            next();
            continue;


        case TOK_CHAR:
            u = 1;
        basic_type:
            next();
        basic_type1:
            if ((t & 0x000f) != 0)
                error("too many basic types");
            t |= u;
            typespec_found = 1;
            break;
        case TOK_VOID:
            u = 3;
            goto basic_type;
        case TOK_SHORT:
            u = 2;
            goto basic_type;
        case TOK_INT:
            next();
            typespec_found = 1;
            break;
        case TOK_LONG:
            next();
            if ((t & 0x000f) == 9) {
                t = (t & ~0x000f) | 10;
            } else if ((t & 0x000f) == 13) {
                t = (t & ~0x000f) | 12;
            } else {
                u = 13;
                goto basic_type1;
            }
            break;
        case TOK_BOOL:
            u = 11;
            goto basic_type;
        case TOK_FLOAT:
            u = 8;
            goto basic_type;
        case TOK_DOUBLE:
            next();
            if ((t & 0x000f) == 13) {
                t = (t & ~0x000f) | 10;
            } else {
                u = 9;
                goto basic_type1;
            }
            break;
        case TOK_ENUM:
            struct_decl(&type1, 5);
        basic_type2:
            u = type1.t;
            type->ref = type1.ref;
            goto basic_type1;
        case TOK_STRUCT:
        case TOK_UNION:
            struct_decl(&type1, 7);
            goto basic_type2;


        case TOK_CONST1:
        case TOK_CONST2:
        case TOK_CONST3:
            t |= 0x0800;
            next();
            break;
        case TOK_VOLATILE1:
        case TOK_VOLATILE2:
        case TOK_VOLATILE3:
            t |= 0x1000;
            next();
            break;
        case TOK_SIGNED1:
        case TOK_SIGNED2:
        case TOK_SIGNED3:
            typespec_found = 1;
            t |= 0x2000;
            next();
            break;
        case TOK_REGISTER:
        case TOK_AUTO:
        case TOK_RESTRICT1:
        case TOK_RESTRICT2:
        case TOK_RESTRICT3:
            next();
            break;
        case TOK_UNSIGNED:
            t |= 0x0010;
            next();
            typespec_found = 1;
            break;


        case TOK_EXTERN:
            t |= 0x00000080;
            next();
            break;
        case TOK_STATIC:
            t |= 0x00000100;
            next();
            break;
        case TOK_TYPEDEF:
            t |= 0x00000200;
            next();
            break;
        case TOK_INLINE1:
        case TOK_INLINE2:
        case TOK_INLINE3:
            t |= 0x00000400;
            next();
            break;


        case TOK_ATTRIBUTE1:
        case TOK_ATTRIBUTE2:
            parse_attribute(ad);
            break;

        case TOK_TYPEOF1:
        case TOK_TYPEOF2:
        case TOK_TYPEOF3:
            next();
            parse_expr_type(&type1);
            goto basic_type2;
        default:
            if (typespec_found || typedef_found)
                goto the_end;
            s = sym_find(tok);
            if (!s || !(s->type.t & 0x00000200))
                goto the_end;
            typedef_found = 1;
            t |= (s->type.t & ~0x00000200);
            type->ref = s->type.ref;
            next();
            typespec_found = 1;
            break;
        }
        type_found = 1;
    }
the_end:
    if ((t & (0x2000|0x0010)) == (0x2000|0x0010))
        error("signed and unsigned modifier");
    if (tcc_state->char_is_unsigned) {
        if ((t & (0x2000|0x0010|0x000f)) == 1)
            t |= 0x0010;
    }
    t &= ~0x2000;


    if ((t & 0x000f) == 13)

        t = (t & ~0x000f) | 0;



    type->t = t;
    return type_found;
}



static inline void convert_parameter_type(CType *pt)
{


    pt->t &= ~(0x0800 | 0x1000);

    pt->t &= ~0x0020;
    if ((pt->t & 0x000f) == 6) {
        mk_pointer(pt);
    }
}

static void post_type(CType *type, AttributeDef *ad)
{
    int n, l, t1, arg_size, align;
    Sym **plast, *s, *first;
    AttributeDef ad1;
    CType pt;

    if (tok == '(') {

        next();
        l = 0;
        first = ((void *)0);
        plast = &first;
        arg_size = 0;
        if (tok != ')') {
            for(;;) {

                if (l != 2) {
                    if (!parse_btype(&pt, &ad1)) {
                        if (l) {
                            error("invalid type");
                        } else {
                            l = 2;
                            goto old_proto;
                        }
                    }
                    l = 1;
                    if ((pt.t & 0x000f) == 3 && tok == ')')
                        break;
                    type_decl(&pt, &ad1, &n, 2 | 1);
                    if ((pt.t & 0x000f) == 3)
                        error("parameter declared as void");
                    arg_size += (type_size(&pt, &align) + 3) & ~3;
                } else {
                old_proto:
                    n = tok;
                    if (n < TOK_DEFINE)
                        expect("identifier");
                    pt.t = 0;
                    next();
                }
                convert_parameter_type(&pt);
                s = sym_push(n | 0x20000000, &pt, 0, 0);
                *plast = s;
                plast = &s->next;
                if (tok == ')')
                    break;
                skip(',');
                if (l == 1 && tok == 0xcc) {
                    l = 3;
                    next();
                    break;
                }
            }
        }

        if (l == 0)
            l = 2;
        skip(')');
        t1 = type->t & (0x00000080 | 0x00000100 | 0x00000200 | 0x00000400);


        type->t &= ~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400) | 0x0800);
        post_type(type, ad);

        (((func_attr_t*)&(ad->func_attr))->func_args) = arg_size;
        s = sym_push(0x20000000, type, ad->func_attr, l);
        s->next = first;
        type->t = t1 | 6;
        type->ref = s;
    } else if (tok == '[') {

        next();
        if (tok == TOK_RESTRICT1)
            next();
        n = -1;
        if (tok != ']') {
            n = expr_const();
            if (n < 0)
                error("invalid array size");
        }
        skip(']');

        t1 = type->t & (0x00000080 | 0x00000100 | 0x00000200 | 0x00000400);
        type->t &= ~(0x00000080 | 0x00000100 | 0x00000200 | 0x00000400);
        post_type(type, ad);



        s = sym_push(0x20000000, type, 0, n);
        type->t = t1 | 0x0020 | 4;
        type->ref = s;
    }
}







static void type_decl(CType *type, AttributeDef *ad, int *v, int td)
{
    Sym *s;
    CType type1, *type2;
    int qualifiers;

    while (tok == '*') {
        qualifiers = 0;
    redo:
        next();
        switch(tok) {
        case TOK_CONST1:
        case TOK_CONST2:
        case TOK_CONST3:
            qualifiers |= 0x0800;
            goto redo;
        case TOK_VOLATILE1:
        case TOK_VOLATILE2:
        case TOK_VOLATILE3:
            qualifiers |= 0x1000;
            goto redo;
        case TOK_RESTRICT1:
        case TOK_RESTRICT2:
        case TOK_RESTRICT3:
            goto redo;
        }
        mk_pointer(type);
        type->t |= qualifiers;
    }


    if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2)
        parse_attribute(ad);



    type1.t = 0;
    if (tok == '(') {
        next();


        if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2)
            parse_attribute(ad);
        type_decl(&type1, ad, v, td);
        skip(')');
    } else {

        if (tok >= 256 && (td & 2)) {
            *v = tok;
            next();
        } else {
            if (!(td & 1))
                expect("identifier");
            *v = 0;
        }
    }
    post_type(type, ad);
    if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2)
        parse_attribute(ad);
    if (!type1.t)
        return;

    type2 = &type1;
    for(;;) {
        s = type2->ref;
        type2 = &s->type;
        if (!type2->t) {
            *type2 = *type;
            break;
        }
    }
    *type = type1;
}


static int lvalue_type(int t)
{
    int bt, r;
    r = 0x0100;
    bt = t & 0x000f;
    if (bt == 1 || bt == 11)
        r |= 0x1000;
    else if (bt == 2)
        r |= 0x2000;
    else
        return r;
    if (t & 0x0010)
        r |= 0x4000;
    return r;
}


static void indir(void)
{
    if ((vtop->type.t & 0x000f) != 4) {
        if ((vtop->type.t & 0x000f) == 6)
            return;
        expect("pointer");
    }
    if ((vtop->r & 0x0100) && !nocode_wanted)
        gv(0x0001);
    vtop->type = *pointed_type(&vtop->type);

    if (!(vtop->type.t & 0x0020)
        && (vtop->type.t & 0x000f) != 6) {
        vtop->r |= lvalue_type(vtop->type.t);

        if (tcc_state->do_bounds_check)
            vtop->r |= 0x0800;
    }
}


static void gfunc_param_typed(Sym *func, Sym *arg)
{
    int func_type;
    CType type;

    func_type = func->c;
    if (func_type == 2 ||
        (func_type == 3 && arg == ((void *)0))) {

        if ((vtop->type.t & 0x000f) == 8) {
            type.t = 9;
            gen_cast(&type);
        }
    } else if (arg == ((void *)0)) {
        error("too many arguments to function");
    } else {
        type = arg->type;
        type.t &= ~0x0800;
        gen_assign_cast(&type);
    }
}



static void parse_expr_type(CType *type)
{
    int n;
    AttributeDef ad;

    skip('(');
    if (parse_btype(type, &ad)) {
        type_decl(type, &ad, &n, 1);
    } else {
        expr_type(type);
    }
    skip(')');
}

static void parse_type(CType *type)
{
    AttributeDef ad;
    int n;

    if (!parse_btype(type, &ad)) {
        expect("type");
    }
    type_decl(type, &ad, &n, 1);
}

static void vpush_tokc(int t)
{
    CType type;
    type.t = t;
    vsetc(&type, 0x00f0, &tokc);
}

static void unary(void)
{
    int n, t, align, size, r;
    CType type;
    Sym *s;
    AttributeDef ad;



 tok_next:
    switch(tok) {
    case TOK_EXTENSION:
        next();
        goto tok_next;
    case 0xb3:
    case 0xb4:
    case 0xb7:
        vpushi(tokc.i);
        next();
        break;
    case 0xc8:
        vpush_tokc(0 | 0x0010);
        next();
        break;
    case 0xc9:
        vpush_tokc(12);
        next();
        break;
    case 0xca:
        vpush_tokc(12 | 0x0010);
        next();
        break;
    case 0xb9:
        vpush_tokc(8);
        next();
        break;
    case 0xc0:
        vpush_tokc(9);
        next();
        break;
    case 0xc1:
        vpush_tokc(10);
        next();
        break;
    case TOK___FUNCTION__:
        if (!gnu_ext)
            goto tok_identifier;

    case TOK___FUNC__:
        {
            void *ptr;
            int len;

            len = strlen(funcname) + 1;

            type.t = 1;
            mk_pointer(&type);
            type.t |= 0x0020;
            type.ref->c = len;
            vpush_ref(&type, data_section, data_section->data_offset, len);
            ptr = section_ptr_add(data_section, len);
            memcpy(ptr, funcname, len);
            next();
        }
        break;
    case 0xb8:



        t = 0;

        goto str_init;
    case 0xb5:

        t = 1;
    str_init:
        if (tcc_state->warn_write_strings)
            t |= 0x0800;
        type.t = t;
        mk_pointer(&type);
        type.t |= 0x0020;
        memset(&ad, 0, sizeof(AttributeDef));
        decl_initializer_alloc(&type, &ad, 0x00f0, 2, 0, 0);
        break;
    case '(':
        next();

        if (parse_btype(&type, &ad)) {
            type_decl(&type, &ad, &n, 1);
            skip(')');

            if (tok == '{') {

                if (global_expr)
                    r = 0x00f0;
                else
                    r = 0x00f2;

                if (!(type.t & 0x0020))
                    r |= lvalue_type(type.t);
                memset(&ad, 0, sizeof(AttributeDef));
                decl_initializer_alloc(&type, &ad, r, 1, 0, 0);
            } else {
                unary();
                gen_cast(&type);
            }
        } else if (tok == '{') {

            save_regs(0);


            block(((void *)0), ((void *)0), ((void *)0), ((void *)0), 0, 1);
            skip(')');
        } else {
            gexpr();
            skip(')');
        }
        break;
    case '*':
        next();
        unary();
        indir();
        break;
    case '&':
        next();
        unary();





        if ((vtop->type.t & 0x000f) != 6 &&
            !(vtop->type.t & 0x0020) && !(vtop->type.t & 0x00f1))
            test_lvalue();
        mk_pointer(&vtop->type);
        gaddrof();
        break;
    case '!':
        next();
        unary();
        if ((vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0) {
            CType boolean;
            boolean.t = 11;
            gen_cast(&boolean);
            vtop->c.i = !vtop->c.i;
        } else if ((vtop->r & 0x00ff) == 0x00f3)
            vtop->c.i = vtop->c.i ^ 1;
        else {
            save_regs(1);
            vseti(0x00f4, gtst(1, 0));
        }
        break;
    case '~':
        next();
        unary();
        vpushi(-1);
        gen_op('^');
        break;
    case '+':
        next();

        unary();
        if ((vtop->type.t & 0x000f) == 4)
            error("pointer not accepted for unary plus");
        vpushi(0);
        gen_op('+');
        break;
    case TOK_SIZEOF:
    case TOK_ALIGNOF1:
    case TOK_ALIGNOF2:
        t = tok;
        next();
        if (tok == '(') {
            parse_expr_type(&type);
        } else {
            unary_type(&type);
        }
        size = type_size(&type, &align);
        if (t == TOK_SIZEOF) {
            if (size < 0)
                error("sizeof applied to an incomplete type");
            vpushi(size);
        } else {
            vpushi(align);
        }
        vtop->type.t |= 0x0010;
        break;

    case TOK_builtin_types_compatible_p:
        {
            CType type1, type2;
            next();
            skip('(');
            parse_type(&type1);
            skip(',');
            parse_type(&type2);
            skip(')');
            type1.t &= ~(0x0800 | 0x1000);
            type2.t &= ~(0x0800 | 0x1000);
            vpushi(is_compatible_types(&type1, &type2));
        }
        break;
    case TOK_builtin_constant_p:
        {
            int saved_nocode_wanted, res;
            next();
            skip('(');
            saved_nocode_wanted = nocode_wanted;
            nocode_wanted = 1;
            gexpr();
            res = (vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0;
            vpop();
            nocode_wanted = saved_nocode_wanted;
            skip(')');
            vpushi(res);
        }
        break;
    case TOK_builtin_frame_address:
        {
            CType type;
            next();
            skip('(');
            if (tok != 0xb3) {
                error("__builtin_frame_address only takes integers");
            }
            if (tokc.i != 0) {
                error("TCC only supports __builtin_frame_address(0)");
            }
            next();
            skip(')');
            type.t = 3;
            mk_pointer(&type);
            vset(&type, 0x00f2, 0);
        }
        break;
# 3189 "./tccgen.c"
    case 0xa4:
    case 0xa2:
        t = tok;
        next();
        unary();
        inc(0, t);
        break;
    case '-':
        next();
        vpushi(0);
        unary();
        gen_op('-');
        break;
    case 0xa0:
        if (!gnu_ext)
            goto tok_identifier;
        next();

        if (tok < TOK_DEFINE)
            expect("label identifier");
        s = label_find(tok);
        if (!s) {
            s = label_push(&global_label_stack, tok, 1);
        } else {
            if (s->r == 2)
                s->r = 1;
        }
        if (!s->type.t) {
            s->type.t = 3;
            mk_pointer(&s->type);
            s->type.t |= 0x00000100;
        }
        vset(&s->type, 0x00f0 | 0x0200, 0);
        vtop->sym = s;
        next();
        break;
    default:
    tok_identifier:
        t = tok;
        next();
        if (t < TOK_DEFINE)
            expect("identifier");
        s = sym_find(t);
        if (!s) {
            if (tok != '(')
                error("'%s' undeclared", get_tok_str(t, ((void *)0)));


            if (tcc_state->warn_implicit_function_declaration)
                warning("implicit declaration of function '%s'",
                        get_tok_str(t, ((void *)0)));
            s = external_global_sym(t, &func_old_type, 0);
        }
        if ((s->type.t & (0x00000100 | 0x00000400 | 0x000f)) ==
            (0x00000100 | 0x00000400 | 6)) {





            if (!s->c)
                put_extern_sym(s, text_section, 0, 0);
            r = 0x0200 | 0x00f0;
        } else {
            r = s->r;
        }
        vset(&s->type, r, s->c);

        if (vtop->r & 0x0200) {
            vtop->sym = s;
            vtop->c.ul = 0;
        }
        break;
    }


    while (1) {
        if (tok == 0xa4 || tok == 0xa2) {
            inc(1, tok);
            next();
        } else if (tok == '.' || tok == 0xcb) {

            if (tok == 0xcb)
                indir();
            test_lvalue();
            gaddrof();
            next();

            if ((vtop->type.t & 0x000f) != 7)
                expect("struct or union");
            s = vtop->type.ref;

            tok |= 0x20000000;
            while ((s = s->next) != ((void *)0)) {
                if (s->v == tok)
                    break;
            }
            if (!s)
                error("field not found: %s", get_tok_str(tok & ~0x20000000, ((void *)0)));

            vtop->type = char_pointer_type;
            vpushi(s->c);
            gen_op('+');

            vtop->type = s->type;

            if (!(vtop->type.t & 0x0020)) {
                vtop->r |= lvalue_type(vtop->type.t);

                if (tcc_state->do_bounds_check)
                    vtop->r |= 0x0800;
            }
            next();
        } else if (tok == '[') {
            next();
            gexpr();
            gen_op('+');
            indir();
            skip(']');
        } else if (tok == '(') {
            SValue ret;
            Sym *sa;
            int nb_args;


            if ((vtop->type.t & 0x000f) != 6) {

                if ((vtop->type.t & (0x000f | 0x0020)) == 4) {
                    vtop->type = *pointed_type(&vtop->type);
                    if ((vtop->type.t & 0x000f) != 6)
                        goto error_func;
                } else {
                error_func:
                    expect("function pointer");
                }
            } else {
                vtop->r &= ~0x0100;
            }

            s = vtop->type.ref;
            next();
            sa = s->next;
            nb_args = 0;
            ret.r2 = 0x00f0;

            if ((s->type.t & 0x000f) == 7) {

                size = type_size(&s->type, &align);
                loc = (loc - size) & -align;
                ret.type = s->type;
                ret.r = 0x00f2 | 0x0100;


                vseti(0x00f2, loc);
                ret.c = vtop->c;
                nb_args++;
            } else {
                ret.type = s->type;

                if (is_float(ret.type.t)) {
                    ret.r = reg_fret(ret.type.t);
                } else {
                    if ((ret.type.t & 0x000f) == 12)
                        ret.r2 = TREG_EDX;
                    ret.r = TREG_EAX;
                }
                ret.c.i = 0;
            }
            if (tok != ')') {
                for(;;) {
                    expr_eq();
                    gfunc_param_typed(s, sa);
                    nb_args++;
                    if (sa)
                        sa = sa->next;
                    if (tok == ')')
                        break;
                    skip(',');
                }
            }
            if (sa)
                error("too few arguments to function");
            skip(')');
            if (!nocode_wanted) {
                gfunc_call(nb_args);
            } else {
                vtop -= (nb_args + 1);
            }

            vsetc(&ret.type, ret.r, &ret.c);
            vtop->r2 = ret.r2;
        } else {
            break;
        }
    }
}

static void uneq(void)
{
    int t;

    unary();
    if (tok == '=' ||
        (tok >= 0xa5 && tok <= 0xaf) ||
        tok == 0xde || tok == 0xfc ||
        tok == 0x81 || tok == 0x82) {
        test_lvalue();
        t = tok;
        next();
        if (t == '=') {
            expr_eq();
        } else {
            vdup();
            expr_eq();
            gen_op(t & 0x7f);
        }
        vstore();
    }
}

static void expr_prod(void)
{
    int t;

    uneq();
    while (tok == '*' || tok == '/' || tok == '%') {
        t = tok;
        next();
        uneq();
        gen_op(t);
    }
}

static void expr_sum(void)
{
    int t;

    expr_prod();
    while (tok == '+' || tok == '-') {
        t = tok;
        next();
        expr_prod();
        gen_op(t);
    }
}

static void expr_shift(void)
{
    int t;

    expr_sum();
    while (tok == 0x01 || tok == 0x02) {
        t = tok;
        next();
        expr_sum();
        gen_op(t);
    }
}

static void expr_cmp(void)
{
    int t;

    expr_shift();
    while ((tok >= 0x96 && tok <= 0x9f) ||
           tok == 0x92 || tok == 0x93) {
        t = tok;
        next();
        expr_shift();
        gen_op(t);
    }
}

static void expr_cmpeq(void)
{
    int t;

    expr_cmp();
    while (tok == 0x94 || tok == 0x95) {
        t = tok;
        next();
        expr_cmp();
        gen_op(t);
    }
}

static void expr_and(void)
{
    expr_cmpeq();
    while (tok == '&') {
        next();
        expr_cmpeq();
        gen_op('&');
    }
}

static void expr_xor(void)
{
    expr_and();
    while (tok == '^') {
        next();
        expr_and();
        gen_op('^');
    }
}

static void expr_or(void)
{
    expr_xor();
    while (tok == '|') {
        next();
        expr_xor();
        gen_op('|');
    }
}


static void expr_land_const(void)
{
    expr_or();
    while (tok == 0xa0) {
        next();
        expr_or();
        gen_op(0xa0);
    }
}


static void expr_lor_const(void)
{
    expr_land_const();
    while (tok == 0xa1) {
        next();
        expr_land_const();
        gen_op(0xa1);
    }
}


static void expr_land(void)
{
    int t;

    expr_or();
    if (tok == 0xa0) {
        t = 0;
        save_regs(1);
        for(;;) {
            t = gtst(1, t);
            if (tok != 0xa0) {
                vseti(0x00f5, t);
                break;
            }
            next();
            expr_or();
        }
    }
}

static void expr_lor(void)
{
    int t;

    expr_land();
    if (tok == 0xa1) {
        t = 0;
        save_regs(1);
        for(;;) {
            t = gtst(0, t);
            if (tok != 0xa1) {
                vseti(0x00f4, t);
                break;
            }
            next();
            expr_land();
        }
    }
}


static void expr_eq(void)
{
    int tt, u, r1, r2, rc, t1, t2, bt1, bt2;
    SValue sv;
    CType type, type1, type2;

    if (const_wanted) {
        expr_lor_const();
        if (tok == '?') {
            CType boolean;
            int c;
            boolean.t = 11;
            vdup();
            gen_cast(&boolean);
            c = vtop->c.i;
            vpop();
            next();
            if (tok != ':' || !gnu_ext) {
                vpop();
                gexpr();
            }
            if (!c)
                vpop();
            skip(':');
            expr_eq();
            if (c)
                vpop();
        }
    } else {
        expr_lor();
        if (tok == '?') {
            next();
            if (vtop != vstack) {


                if (is_float(vtop->type.t)) {
                    rc = 0x0002;





                }
                else
                    rc = 0x0001;
                    gv(rc);
                    save_regs(1);
            }
            if (tok == ':' && gnu_ext) {
                gv_dup();
                tt = gtst(1, 0);
            } else {
                tt = gtst(1, 0);
                gexpr();
            }
            type1 = vtop->type;
            sv = *vtop;
            vtop--;
            skip(':');
            u = gjmp(0);
            gsym(tt);
            expr_eq();
            type2 = vtop->type;

            t1 = type1.t;
            bt1 = t1 & 0x000f;
            t2 = type2.t;
            bt2 = t2 & 0x000f;

            if (is_float(bt1) || is_float(bt2)) {
                if (bt1 == 10 || bt2 == 10) {
                    type.t = 10;
                } else if (bt1 == 9 || bt2 == 9) {
                    type.t = 9;
                } else {
                    type.t = 8;
                }
            } else if (bt1 == 12 || bt2 == 12) {

                type.t = 12;

                if ((t1 & (0x000f | 0x0010)) == (12 | 0x0010) ||
                    (t2 & (0x000f | 0x0010)) == (12 | 0x0010))
                    type.t |= 0x0010;
            } else if (bt1 == 4 || bt2 == 4) {

                type = type1;
            } else if (bt1 == 6 || bt2 == 6) {

                type = type1;
            } else if (bt1 == 7 || bt2 == 7) {

                type = type1;
            } else if (bt1 == 3 || bt2 == 3) {

                type.t = 3;
            } else {

                type.t = 0;

                if ((t1 & (0x000f | 0x0010)) == (0 | 0x0010) ||
                    (t2 & (0x000f | 0x0010)) == (0 | 0x0010))
                    type.t |= 0x0010;
            }


            gen_cast(&type);
            if (7 == (vtop->type.t & 0x000f))
                gaddrof();
            rc = 0x0001;
            if (is_float(type.t)) {
                rc = 0x0002;





            } else if ((type.t & 0x000f) == 12) {


                rc = 0x0004;
            }

            r2 = gv(rc);


            tt = gjmp(0);
            gsym(u);

            *vtop = sv;
            gen_cast(&type);
            if (7 == (vtop->type.t & 0x000f))
                gaddrof();
            r1 = gv(rc);
            move_reg(r2, r1);
            vtop->r = r2;
            gsym(tt);
        }
    }
}

static void gexpr(void)
{
    while (1) {
        expr_eq();
        if (tok != ',')
            break;
        vpop();
        next();
    }
}


static void expr_type(CType *type)
{
    int saved_nocode_wanted;

    saved_nocode_wanted = nocode_wanted;
    nocode_wanted = 1;
    gexpr();
    *type = vtop->type;
    vpop();
    nocode_wanted = saved_nocode_wanted;
}



static void unary_type(CType *type)
{
    int a;

    a = nocode_wanted;
    nocode_wanted = 1;
    unary();
    *type = vtop->type;
    vpop();
    nocode_wanted = a;
}


static void expr_const1(void)
{
    int a;
    a = const_wanted;
    const_wanted = 1;
    expr_eq();
    const_wanted = a;
}


static int expr_const(void)
{
    int c;
    expr_const1();
    if ((vtop->r & (0x00ff | 0x0100 | 0x0200)) != 0x00f0)
        expect("constant expression");
    c = vtop->c.i;
    vpop();
    return c;
}



static int is_label(void)
{
    int last_tok;


    if (tok < TOK_DEFINE)
        return 0;

    last_tok = tok;
    next();
    if (tok == ':') {
        next();
        return last_tok;
    } else {
        unget_tok(last_tok);
        return 0;
    }
}

static void block(int *bsym, int *csym, int *case_sym, int *def_sym,
                  int case_reg, int is_expr)
{
    int a, b, c, d;
    Sym *s;


    if (tcc_state->do_debug &&
        (last_line_num != file->line_num || last_ind != ind)) {
        put_stabn(N_SLINE, 0, file->line_num, ind - func_ind);
        last_ind = ind;
        last_line_num = file->line_num;
    }

    if (is_expr) {

        vpushi(0);
        vtop->type.t = 3;
    }

    if (tok == TOK_IF) {

        next();
        skip('(');
        gexpr();
        skip(')');
        a = gtst(1, 0);
        block(bsym, csym, case_sym, def_sym, case_reg, 0);
        c = tok;
        if (c == TOK_ELSE) {
            next();
            d = gjmp(0);
            gsym(a);
            block(bsym, csym, case_sym, def_sym, case_reg, 0);
            gsym(d);
        } else
            gsym(a);
    } else if (tok == TOK_WHILE) {
        next();
        d = ind;
        skip('(');
        gexpr();
        skip(')');
        a = gtst(1, 0);
        b = 0;
        block(&a, &b, case_sym, def_sym, case_reg, 0);
        gjmp_addr(d);
        gsym(a);
        gsym_addr(b, d);
    } else if (tok == '{') {
        Sym *llabel;

        next();

        s = local_stack;
        llabel = local_label_stack;

        if (tok == TOK_LABEL) {
            next();
            for(;;) {
                if (tok < TOK_DEFINE)
                    expect("label identifier");
                label_push(&local_label_stack, tok, 2);
                next();
                if (tok == ',') {
                    next();
                } else {
                    skip(';');
                    break;
                }
            }
        }
        while (tok != '}') {
            decl(0x00f2);
            if (tok != '}') {
                if (is_expr)
                    vpop();
                block(bsym, csym, case_sym, def_sym, case_reg, is_expr);
            }
        }

        label_pop(&local_label_stack, llabel);

        if(is_expr) {


            Sym *p;
            switch(vtop->type.t & 0x000f) {
            case 4:
            case 7:
            case 5:
            case 6:
                for(p=vtop->type.ref;p;p=p->prev)
                    if(p->prev==s)
                        error("unsupported expression type");
            }
        }
        sym_pop(&local_stack, s);
        next();
    } else if (tok == TOK_RETURN) {
        next();
        if (tok != ';') {
            gexpr();
            gen_assign_cast(&func_vt);
            if ((func_vt.t & 0x000f) == 7) {
                CType type;
# 3920 "./tccgen.c"
                type = func_vt;
                mk_pointer(&type);
                vset(&type, 0x00f2 | 0x0100, func_vc);
                indir();
                vswap();

                vstore();



            } else if (is_float(func_vt.t)) {
                gv(rc_fret(func_vt.t));
            } else {
                gv(0x0004);
            }
            vtop--;
        }
        skip(';');
        rsym = gjmp(rsym);
    } else if (tok == TOK_BREAK) {

        if (!bsym)
            error("cannot break");
        *bsym = gjmp(*bsym);
        next();
        skip(';');
    } else if (tok == TOK_CONTINUE) {

        if (!csym)
            error("cannot continue");
        *csym = gjmp(*csym);
        next();
        skip(';');
    } else if (tok == TOK_FOR) {
        int e;
        next();
        skip('(');
        if (tok != ';') {
            gexpr();
            vpop();
        }
        skip(';');
        d = ind;
        c = ind;
        a = 0;
        b = 0;
        if (tok != ';') {
            gexpr();
            a = gtst(1, 0);
        }
        skip(';');
        if (tok != ')') {
            e = gjmp(0);
            c = ind;
            gexpr();
            vpop();
            gjmp_addr(d);
            gsym(e);
        }
        skip(')');
        block(&a, &b, case_sym, def_sym, case_reg, 0);
        gjmp_addr(c);
        gsym(a);
        gsym_addr(b, c);
    } else
    if (tok == TOK_DO) {
        next();
        a = 0;
        b = 0;
        d = ind;
        block(&a, &b, case_sym, def_sym, case_reg, 0);
        skip(TOK_WHILE);
        skip('(');
        gsym(b);
        gexpr();
        c = gtst(0, 0);
        gsym_addr(c, d);
        skip(')');
        gsym(a);
        skip(';');
    } else
    if (tok == TOK_SWITCH) {
        next();
        skip('(');
        gexpr();

        case_reg = gv(0x0001);
        vpop();
        skip(')');
        a = 0;
        b = gjmp(0);
        c = 0;
        block(&a, csym, &b, &c, case_reg, 0);

        if (c == 0)
            c = ind;

        gsym_addr(b, c);

        gsym(a);
    } else
    if (tok == TOK_CASE) {
        int v1, v2;
        if (!case_sym)
            expect("switch");
        next();
        v1 = expr_const();
        v2 = v1;
        if (gnu_ext && tok == 0xcc) {
            next();
            v2 = expr_const();
            if (v2 < v1)
                warning("empty case range");
        }

        b = gjmp(0);
        gsym(*case_sym);
        vseti(case_reg, 0);
        vpushi(v1);
        if (v1 == v2) {
            gen_op(0x94);
            *case_sym = gtst(1, 0);
        } else {
            gen_op(0x9d);
            *case_sym = gtst(1, 0);
            vseti(case_reg, 0);
            vpushi(v2);
            gen_op(0x9e);
            *case_sym = gtst(1, *case_sym);
        }
        gsym(b);
        skip(':');
        is_expr = 0;
        goto block_after_label;
    } else
    if (tok == TOK_DEFAULT) {
        next();
        skip(':');
        if (!def_sym)
            expect("switch");
        if (*def_sym)
            error("too many 'default'");
        *def_sym = ind;
        is_expr = 0;
        goto block_after_label;
    } else
    if (tok == TOK_GOTO) {
        next();
        if (tok == '*' && gnu_ext) {

            next();
            gexpr();
            if ((vtop->type.t & 0x000f) != 4)
                expect("pointer");
            ggoto();
        } else if (tok >= TOK_DEFINE) {
            s = label_find(tok);

            if (!s) {
                s = label_push(&global_label_stack, tok, 1);
            } else {
                if (s->r == 2)
                    s->r = 1;
            }

            if (s->r & 1)
                s->next = (void *)gjmp((long)s->next);
            else
                gjmp_addr((long)s->next);
            next();
        } else {
            expect("label identifier");
        }
        skip(';');
    } else if (tok == TOK_ASM1 || tok == TOK_ASM2 || tok == TOK_ASM3) {
        asm_instr();
    } else {
        b = is_label();
        if (b) {

            s = label_find(b);
            if (s) {
                if (s->r == 0)
                    error("duplicate label '%s'", get_tok_str(s->v, ((void *)0)));
                gsym((long)s->next);
                s->r = 0;
            } else {
                s = label_push(&global_label_stack, b, 0);
            }
            s->next = (void *)ind;

        block_after_label:
            if (tok == '}') {
                warning("deprecated use of label at end of compound statement");
            } else {
                if (is_expr)
                    vpop();
                block(bsym, csym, case_sym, def_sym, case_reg, is_expr);
            }
        } else {

            if (tok != ';') {
                if (is_expr) {
                    vpop();
                    gexpr();
                } else {
                    gexpr();
                    vpop();
                }
            }
            skip(';');
        }
    }
}





static void decl_designator(CType *type, Section *sec, unsigned long c,
                            int *cur_index, Sym **cur_field,
                            int size_only)
{
    Sym *s, *f;
    int notfirst, index, index_last, align, l, nb_elems, elem_size;
    CType type1;

    notfirst = 0;
    elem_size = 0;
    nb_elems = 1;
    if (gnu_ext && (l = is_label()) != 0)
        goto struct_field;
    while (tok == '[' || tok == '.') {
        if (tok == '[') {
            if (!(type->t & 0x0020))
                expect("array type");
            s = type->ref;
            next();
            index = expr_const();
            if (index < 0 || (s->c >= 0 && index >= s->c))
                expect("invalid index");
            if (tok == 0xcc && gnu_ext) {
                next();
                index_last = expr_const();
                if (index_last < 0 ||
                    (s->c >= 0 && index_last >= s->c) ||
                    index_last < index)
                    expect("invalid index");
            } else {
                index_last = index;
            }
            skip(']');
            if (!notfirst)
                *cur_index = index_last;
            type = pointed_type(type);
            elem_size = type_size(type, &align);
            c += index * elem_size;

            nb_elems = index_last - index + 1;
            if (nb_elems != 1) {
                notfirst = 1;
                break;
            }
        } else {
            next();
            l = tok;
            next();
        struct_field:
            if ((type->t & 0x000f) != 7)
                expect("struct/union type");
            s = type->ref;
            l |= 0x20000000;
            f = s->next;
            while (f) {
                if (f->v == l)
                    break;
                f = f->next;
            }
            if (!f)
                expect("field");
            if (!notfirst)
                *cur_field = f;

            type1 = f->type;
            type1.t |= (type->t & ~(~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400))));
            type = &type1;
            c += f->c;
        }
        notfirst = 1;
    }
    if (notfirst) {
        if (tok == '=') {
            next();
        } else {
            if (!gnu_ext)
                expect("=");
        }
    } else {
        if (type->t & 0x0020) {
            index = *cur_index;
            type = pointed_type(type);
            c += index * type_size(type, &align);
        } else {
            f = *cur_field;
            if (!f)
                error("too many field init");

            type1 = f->type;
            type1.t |= (type->t & ~(~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400))));
            type = &type1;
            c += f->c;
        }
    }
    decl_initializer(type, sec, c, 0, size_only);


    if (!size_only && nb_elems > 1) {
        unsigned long c_end;
        uint8_t *src, *dst;
        int i;

        if (!sec)
            error("range init not supported yet for dynamic storage");
        c_end = c + nb_elems * elem_size;
        if (c_end > sec->data_allocated)
            section_realloc(sec, c_end);
        src = sec->data + c;
        dst = src;
        for(i = 1; i < nb_elems; i++) {
            dst += elem_size;
            memcpy(dst, src, elem_size);
        }
    }
}






static void init_putv(CType *type, Section *sec, unsigned long c,
                      int v, int expr_type)
{
    int saved_global_expr, bt, bit_pos, bit_size;
    void *ptr;
    unsigned long long bit_mask;
    CType dtype;

    switch(expr_type) {
    case 0:
        vpushi(v);
        break;
    case 1:

        saved_global_expr = global_expr;
        global_expr = 1;
        expr_const1();
        global_expr = saved_global_expr;

        if ((vtop->r & (0x00ff | 0x0100)) != 0x00f0)
            error("initializer element is not constant");
        break;
    case 2:
        expr_eq();
        break;
    }

    dtype = *type;
    dtype.t &= ~0x0800;

    if (sec) {


        gen_assign_cast(&dtype);
        bt = type->t & 0x000f;

        if (c + 12 > sec->data_allocated) {
            section_realloc(sec, c + 12);
        }
        ptr = sec->data + c;

        if (!(type->t & 0x0040)) {
            bit_pos = 0;
            bit_size = 32;
            bit_mask = -1LL;
        } else {
            bit_pos = (vtop->type.t >> 16) & 0x3f;
            bit_size = (vtop->type.t >> (16 + 6)) & 0x3f;
            bit_mask = (1LL << bit_size) - 1;
        }
        if ((vtop->r & 0x0200) &&
            (bt == 1 ||
             bt == 2 ||
             bt == 9 ||
             bt == 10 ||
             bt == 12 ||
             (bt == 0 && bit_size != 32)))
            error("initializer element is not computable at load time");
        switch(bt) {
        case 11:
            vtop->c.i = (vtop->c.i != 0);
        case 1:
            *(char *)ptr |= (vtop->c.i & bit_mask) << bit_pos;
            break;
        case 2:
            *(short *)ptr |= (vtop->c.i & bit_mask) << bit_pos;
            break;
        case 9:
            *(double *)ptr = vtop->c.d;
            break;
        case 10:
            *(long double *)ptr = vtop->c.ld;
            break;
        case 12:
            *(long long *)ptr |= (vtop->c.ll & bit_mask) << bit_pos;
            break;
        default:
            if (vtop->r & 0x0200) {
                greloc(sec, vtop->sym, c, 1);
            }
            *(int *)ptr |= (vtop->c.i & bit_mask) << bit_pos;
            break;
        }
        vtop--;
    } else {
        vset(&dtype, 0x00f2|0x0100, c);
        vswap();
        vstore();
        vpop();
    }
}


static void init_putz(CType *t, Section *sec, unsigned long c, int size)
{
    if (sec) {

    } else {
        vpush_global_sym(&func_old_type, TOK_memset);
        vseti(0x00f2, c);
        vpushi(0);
        vpushi(size);
        gfunc_call(3);
    }
}






static void decl_initializer(CType *type, Section *sec, unsigned long c,
                             int first, int size_only)
{
    int index, array_length, n, no_oblock, nb, parlevel, i;
    int size1, align1, expr_type;
    Sym *s, *f;
    CType *t1;

    if (type->t & 0x0020) {
        s = type->ref;
        n = s->c;
        array_length = 0;
        t1 = pointed_type(type);
        size1 = type_size(t1, &align1);

        no_oblock = 1;
        if ((first && tok != 0xb8 && tok != 0xb5) ||
            tok == '{') {
            skip('{');
            no_oblock = 0;
        }



        if ((tok == 0xb8 &&



             (t1->t & 0x000f) == 0

            ) || (tok == 0xb5 && (t1->t & 0x000f) == 1)) {
            while (tok == 0xb5 || tok == 0xb8) {
                int cstr_len, ch;
                CString *cstr;

                cstr = tokc.cstr;

                if (tok == 0xb5)
                    cstr_len = cstr->size;
                else
                    cstr_len = cstr->size / sizeof(nwchar_t);
                cstr_len--;
                nb = cstr_len;
                if (n >= 0 && nb > (n - array_length))
                    nb = n - array_length;
                if (!size_only) {
                    if (cstr_len > nb)
                        warning("initializer-string for array is too long");



                    if (sec && tok == 0xb5 && size1 == 1) {
                        memcpy(sec->data + c + array_length, cstr->data, nb);
                    } else {
                        for(i=0;i<nb;i++) {
                            if (tok == 0xb5)
                                ch = ((unsigned char *)cstr->data)[i];
                            else
                                ch = ((nwchar_t *)cstr->data)[i];
                            init_putv(t1, sec, c + (array_length + i) * size1,
                                      ch, 0);
                        }
                    }
                }
                array_length += nb;
                next();
            }


            if (n < 0 || array_length < n) {
                if (!size_only) {
                    init_putv(t1, sec, c + (array_length * size1), 0, 0);
                }
                array_length++;
            }
        } else {
            index = 0;
            while (tok != '}') {
                decl_designator(type, sec, c, &index, ((void *)0), size_only);
                if (n >= 0 && index >= n)
                    error("index too large");


                if (!size_only && array_length < index) {
                    init_putz(t1, sec, c + array_length * size1,
                              (index - array_length) * size1);
                }
                index++;
                if (index > array_length)
                    array_length = index;



                if (index >= n && no_oblock)
                    break;
                if (tok == '}')
                    break;
                skip(',');
            }
        }
        if (!no_oblock)
            skip('}');

        if (!size_only && n >= 0 && array_length < n) {
            init_putz(t1, sec, c + array_length * size1,
                      (n - array_length) * size1);
        }

        if (n < 0)
            s->c = array_length;
    } else if ((type->t & 0x000f) == 7 &&
               (sec || !first || tok == '{')) {
        int par_count;
# 4493 "./tccgen.c"
        par_count = 0;
        if (tok == '(') {
            AttributeDef ad1;
            CType type1;
            next();
            while (tok == '(') {
                par_count++;
                next();
            }
            if (!parse_btype(&type1, &ad1))
                expect("cast");
            type_decl(&type1, &ad1, &n, 1);




            skip(')');
        }
        no_oblock = 1;
        if (first || tok == '{') {
            skip('{');
            no_oblock = 0;
        }
        s = type->ref;
        f = s->next;
        array_length = 0;
        index = 0;
        n = s->c;
        while (tok != '}') {
            decl_designator(type, sec, c, ((void *)0), &f, size_only);
            index = f->c;
            if (!size_only && array_length < index) {
                init_putz(type, sec, c + array_length,
                          index - array_length);
            }
            index = index + type_size(&f->type, &align1);
            if (index > array_length)
                array_length = index;
            f = f->next;
            if (no_oblock && f == ((void *)0))
                break;
            if (tok == '}')
                break;
            skip(',');
        }

        if (!size_only && array_length < n) {
            init_putz(type, sec, c + array_length,
                      n - array_length);
        }
        if (!no_oblock)
            skip('}');
        while (par_count) {
            skip(')');
            par_count--;
        }
    } else if (tok == '{') {
        next();
        decl_initializer(type, sec, c, first, size_only);
        skip('}');
    } else if (size_only) {

        parlevel = 0;
        while ((parlevel > 0 || (tok != '}' && tok != ',')) &&
               tok != -1) {
            if (tok == '(')
                parlevel++;
            else if (tok == ')')
                parlevel--;
            next();
        }
    } else {


        expr_type = 1;
        if (!sec)
            expr_type = 2;
        init_putv(type, sec, c, 0, expr_type);
    }
}
# 4581 "./tccgen.c"
static void decl_initializer_alloc(CType *type, AttributeDef *ad, int r,
                                   int has_init, int v, int scope)
{
    int size, align, addr, data_offset;
    int level;
    ParseState saved_parse_state = {0};
    TokenString init_str;
    Section *sec;

    size = type_size(type, &align);






    tok_str_new(&init_str);
    if (size < 0) {
        if (!has_init)
            error("unknown type size");

        if (has_init == 2) {

            while (tok == 0xb5 || tok == 0xb8) {
                tok_str_add_tok(&init_str);
                next();
            }
        } else {
            level = 0;
            while (level > 0 || (tok != ',' && tok != ';')) {
                if (tok < 0)
                    error("unexpected end of file in initializer");
                tok_str_add_tok(&init_str);
                if (tok == '{')
                    level++;
                else if (tok == '}') {
                    level--;
                    if (level <= 0) {
                        next();
                        break;
                    }
                }
                next();
            }
        }
        tok_str_add(&init_str, -1);
        tok_str_add(&init_str, 0);


        save_parse_state(&saved_parse_state);

        macro_ptr = init_str.str;
        next();
        decl_initializer(type, ((void *)0), 0, 1, 1);

        macro_ptr = init_str.str;
        next();


        size = type_size(type, &align);
        if (size < 0)
            error("unknown type size");
    }

    if (ad->aligned) {
        if (ad->aligned > align)
            align = ad->aligned;
    } else if (ad->packed) {
        align = 1;
    }
    if ((r & 0x00ff) == 0x00f2) {
        sec = ((void *)0);
        if (tcc_state->do_bounds_check && (type->t & 0x0020))
            loc--;
        loc = (loc - size) & -align;
        addr = loc;



        if (tcc_state->do_bounds_check && (type->t & 0x0020)) {
            unsigned long *bounds_ptr;

            loc--;

            bounds_ptr = section_ptr_add(lbounds_section, 2 * sizeof(unsigned long));
            bounds_ptr[0] = addr;
            bounds_ptr[1] = size;
        }
        if (v) {

            sym_push(v, type, r, addr);
        } else {

            vset(type, r, addr);
        }
    } else {
        Sym *sym;

        sym = ((void *)0);
        if (v && scope == 0x00f0) {

            sym = sym_find(v);
            if (sym) {
                if (!is_compatible_types(&sym->type, type))
                    error("incompatible types for redefinition of '%s'",
                          get_tok_str(v, ((void *)0)));
                if (sym->type.t & 0x00000080) {

                    sym->type.t &= ~0x00000080;


                    if ((sym->type.t & 0x0020) &&
                        sym->type.ref->c < 0 &&
                        type->ref->c >= 0)
                        sym->type.ref->c = type->ref->c;
                } else {







                    if (!has_init)
                        goto no_alloc;
                }
            }
        }


        sec = ad->section;
        if (!sec) {
            if (has_init)
                sec = data_section;
            else if (tcc_state->nocommon)
                sec = bss_section;
        }
        if (sec) {
            data_offset = sec->data_offset;
            data_offset = (data_offset + align - 1) & -align;
            addr = data_offset;


            data_offset += size;

            if (tcc_state->do_bounds_check)
                data_offset++;
            sec->data_offset = data_offset;

            if (sec->sh_type != 8 &&
                data_offset > sec->data_allocated)
                section_realloc(sec, data_offset);

            if (align > sec->sh_addralign)
                sec->sh_addralign = align;
        } else {
            addr = 0;
        }

        if (v) {
            if (scope != 0x00f0 || !sym) {
                sym = sym_push(v, type, r | 0x0200, 0);
            }

            if (sec) {
                put_extern_sym(sym, sec, addr, size);
            } else {
                Elf32_Sym *esym;

                put_extern_sym(sym, ((void *)0), align, size);

                esym = &((Elf32_Sym *)symtab_section->data)[sym->c];
                esym->st_shndx = 0xfff2;
            }
        } else {
            CValue cval;


            sym = get_sym_ref(type, sec, addr, size);
            cval.ul = 0;
            vsetc(type, 0x00f0 | 0x0200, &cval);
            vtop->sym = sym;
        }



        if (tcc_state->do_bounds_check) {
            unsigned long *bounds_ptr;

            greloc(bounds_section, sym, bounds_section->data_offset, 1);

            bounds_ptr = section_ptr_add(bounds_section, 2 * sizeof(long));
            bounds_ptr[0] = 0;
            bounds_ptr[1] = size;
        }
    }
    if (has_init) {
        decl_initializer(type, sec, addr, 1, 0);

        if (init_str.str) {
            tok_str_free(init_str.str);
            restore_parse_state(&saved_parse_state);
        }
    }
 no_alloc: ;
}

void put_func_debug(Sym *sym)
{
    char buf[512];



    snprintf(buf, sizeof(buf), "%s:%c1",
             funcname, sym->type.t & 0x00000100 ? 'f' : 'F');
    put_stabs_r(buf, N_FUN, 0, file->line_num, 0,
                cur_text_section, sym->c);

    put_stabn(N_SLINE, 0, file->line_num, 0);
    last_ind = 0;
    last_line_num = 0;
}



static void func_decl_list(Sym *func_sym)
{
    AttributeDef ad;
    int v;
    Sym *s;
    CType btype, type;


    while (tok != '{' && tok != ';' && tok != ',' && tok != (-1)) {
        if (!parse_btype(&btype, &ad))
            expect("declaration list");
        if (((btype.t & 0x000f) == 5 ||
             (btype.t & 0x000f) == 7) &&
            tok == ';') {

        } else {
            for(;;) {
                type = btype;
                type_decl(&type, &ad, &v, 2);

                s = func_sym->next;
                while (s != ((void *)0)) {
                    if ((s->v & ~0x20000000) == v)
                        goto found;
                    s = s->next;
                }
                error("declaration for parameter '%s' but no such parameter",
                      get_tok_str(v, ((void *)0)));
            found:

                if (type.t & (0x00000080 | 0x00000100 | 0x00000200 | 0x00000400))
                    error("storage class specified for '%s'", get_tok_str(v, ((void *)0)));
                convert_parameter_type(&type);

                s->type = type;

                if (tok == ',')
                    next();
                else
                    break;
            }
        }
        skip(';');
    }
}



static void gen_function(Sym *sym)
{
    int saved_nocode_wanted = nocode_wanted;
    nocode_wanted = 0;
    ind = cur_text_section->data_offset;

    put_extern_sym(sym, cur_text_section, ind, 0);
    funcname = get_tok_str(sym->v, ((void *)0));
    func_ind = ind;

    if (tcc_state->do_debug)
        put_func_debug(sym);

    sym_push2(&local_stack, 0x20000000, 0, 0);
    gfunc_prolog(&sym->type);
    rsym = 0;
    block(((void *)0), ((void *)0), ((void *)0), ((void *)0), 0, 0);
    gsym(rsym);
    gfunc_epilog();
    cur_text_section->data_offset = ind;
    label_pop(&global_label_stack, ((void *)0));
    sym_pop(&local_stack, ((void *)0));


    ((Elf32_Sym *)symtab_section->data)[sym->c].st_size =
        ind - func_ind;
    if (tcc_state->do_debug) {
        put_stabn(N_FUN, 0, 0, ind - func_ind);
    }

    cur_text_section = ((void *)0);
    funcname = "";
    func_vt.t = 3;
    ind = 0;
    nocode_wanted = saved_nocode_wanted;
}

static void gen_inline_functions(void)
{
    Sym *sym;
    CType *type;
    int *str, inline_generated;


    for(;;) {
        inline_generated = 0;
        for(sym = global_stack; sym != ((void *)0); sym = sym->prev) {
            type = &sym->type;
            if (((type->t & 0x000f) == 6) &&
                (type->t & (0x00000100 | 0x00000400)) ==
                (0x00000100 | 0x00000400) &&
                sym->c != 0) {


                str = (*(int **)&(sym->r));
                sym->r = 0x0200 | 0x00f0;
                sym->type.t &= ~0x00000400;

                macro_ptr = str;
                next();
                cur_text_section = text_section;
                gen_function(sym);
                macro_ptr = ((void *)0);

                tok_str_free(str);
                inline_generated = 1;
            }
        }
        if (!inline_generated)
            break;
    }


    for(sym = global_stack; sym != ((void *)0); sym = sym->prev) {
        type = &sym->type;
        if (((type->t & 0x000f) == 6) &&
            (type->t & (0x00000100 | 0x00000400)) ==
            (0x00000100 | 0x00000400)) {

            if (sym->r == (0x0200 | 0x00f0))
                continue;
            str = (*(int **)&(sym->r));
            tok_str_free(str);
            sym->r = 0;
        }
    }
}


static void decl(int l)
{
    int v, has_init, r;
    CType type, btype;
    Sym *sym;
    AttributeDef ad;

    while (1) {
        if (!parse_btype(&btype, &ad)) {


            if (tok == ';') {
                next();
                continue;
            }
            if (l == 0x00f0 &&
                (tok == TOK_ASM1 || tok == TOK_ASM2 || tok == TOK_ASM3)) {

                asm_global_instr();
                continue;
            }


            if (l == 0x00f2 || tok < TOK_DEFINE)
                break;
            btype.t = 0;
        }
        if (((btype.t & 0x000f) == 5 ||
             (btype.t & 0x000f) == 7) &&
            tok == ';') {

            next();
            continue;
        }
        while (1) {
            type = btype;
            type_decl(&type, &ad, &v, 2);







            if ((type.t & 0x000f) == 6) {


                sym = type.ref;
                if (sym->c == 2)
                    func_decl_list(sym);
            }

            if (tok == '{') {
                if (l == 0x00f2)
                    error("cannot use local functions");
                if ((type.t & 0x000f) != 6)
                    expect("function definition");


                sym = type.ref;
                while ((sym = sym->next) != ((void *)0))
                    if (!(sym->v & ~0x20000000))
                       expect("identifier");


                if ((type.t & (0x00000080 | 0x00000400)) == (0x00000080 | 0x00000400))
                    type.t = (type.t & ~0x00000080) | 0x00000100;

                sym = sym_find(v);
                if (sym) {
                    if ((sym->type.t & 0x000f) != 6)
                        goto func_error1;



                    r = sym->type.ref->r;
                    if ((((func_attr_t*)&(r))->func_call) != 0
                     && (((func_attr_t*)&(type.ref->r))->func_call) == 0)
                        (((func_attr_t*)&(type.ref->r))->func_call) = (((func_attr_t*)&(r))->func_call);
                    if ((((func_attr_t*)&(r))->func_export))
                        (((func_attr_t*)&(type.ref->r))->func_export) = 1;

                    if (!is_compatible_types(&sym->type, &type)) {
                    func_error1:
                        error("incompatible types for redefinition of '%s'",
                              get_tok_str(v, ((void *)0)));
                    }

                    sym->type = type;
                } else {

                    sym = global_identifier_push(v, type.t, 0);
                    sym->type.ref = type.ref;
                }




                if ((type.t & (0x00000400 | 0x00000100)) ==
                    (0x00000400 | 0x00000100)) {
                    TokenString func_str;
                    int block_level;

                    tok_str_new(&func_str);

                    block_level = 0;
                    for(;;) {
                        int t;
                        if (tok == (-1))
                            error("unexpected end of file");
                        tok_str_add_tok(&func_str);
                        t = tok;
                        next();
                        if (t == '{') {
                            block_level++;
                        } else if (t == '}') {
                            block_level--;
                            if (block_level == 0)
                                break;
                        }
                    }
                    tok_str_add(&func_str, -1);
                    tok_str_add(&func_str, 0);
                    (*(int **)&(sym->r)) = func_str.str;
                } else {

                    cur_text_section = ad.section;
                    if (!cur_text_section)
                        cur_text_section = text_section;
                    sym->r = 0x0200 | 0x00f0;
                    gen_function(sym);
                }
                break;
            } else {
                if (btype.t & 0x00000200) {


                    sym = sym_push(v, &type, 0, 0);
                    sym->type.t |= 0x00000200;
                } else if ((type.t & 0x000f) == 6) {


                    if (ad.func_attr)
                        type.ref->r = ad.func_attr;
                    external_sym(v, &type, 0);
                } else {

                    r = 0;
                    if (!(type.t & 0x0020))
                        r |= lvalue_type(type.t);
                    has_init = (tok == '=');
                    if ((btype.t & 0x00000080) ||
                        ((type.t & 0x0020) && (type.t & 0x00000100) &&
                         !has_init && l == 0x00f0 && type.ref->c < 0)) {




                        external_sym(v, &type, r);
                    } else {
                        type.t |= (btype.t & 0x00000100);
                        if (type.t & 0x00000100)
                            r |= 0x00f0;
                        else
                            r |= l;
                        if (has_init)
                            next();
                        decl_initializer_alloc(&type, &ad, r,
                                               has_init, v, l);
                    }
                }
                if (tok != ',') {
                    skip(';');
                    break;
                }
                next();
            }
        }
    }
}
# 1132 "libtcc.c" 2



static int tcc_compile(TCCState *s1)
{
    Sym *define_start;
    char buf[512];
    volatile int section_sym;




    preprocess_init(s1);

    cur_text_section = ((void *)0);
    funcname = "";
    anon_sym = 0x10000000;


    section_sym = 0;
    if (s1->do_debug) {
        section_sym = put_elf_sym(symtab_section, 0, 0,
                                  (((0) << 4) + ((3) & 0xf)), 0,
                                  text_section->sh_num, ((void *)0));
        getcwd(buf, sizeof(buf));



        pstrcat(buf, sizeof(buf), "/");
        put_stabs_r(buf, N_SO, 0, 0,
                    text_section->data_offset, text_section, section_sym);
        put_stabs_r(file->filename, N_SO, 0, 0,
                    text_section->data_offset, text_section, section_sym);
    }


    put_elf_sym(symtab_section, 0, 0,
                (((0) << 4) + ((4) & 0xf)), 0,
                0xfff1, file->filename);


    int_type.t = 0;

    char_pointer_type.t = 1;
    mk_pointer(&char_pointer_type);

    func_old_type.t = 6;
    func_old_type.ref = sym_push(0x20000000, &int_type, 0, 2);
# 1205 "libtcc.c"
    define_start = define_stack;
    nocode_wanted = 1;

    if (setjmp(s1->error_jmp_buf) == 0) {
        s1->nb_errors = 0;
        s1->error_set_jmp_enabled = 1;

        ch = file->buf_ptr[0];
        tok_flags = 0x0001 | 0x0002;
        parse_flags = 0x0001 | 0x0002;
        next();
        decl(0x00f0);
        if (tok != (-1))
            expect("declaration");


        if (s1->do_debug) {
            put_stabs_r(((void *)0), N_SO, 0, 0,
                        text_section->data_offset, text_section, section_sym);
        }
    }
    s1->error_set_jmp_enabled = 0;



    free_defines(define_start);

    gen_inline_functions();

    sym_pop(&global_stack, ((void *)0));
    sym_pop(&local_stack, ((void *)0));

    return s1->nb_errors != 0 ? -1 : 0;
}

int tcc_compile_string(TCCState *s, const char *str)
{
    BufferedFile bf1, *bf = &bf1;
    int ret, len;
    char *buf;


    bf->fd = -1;

    len = strlen(str);
    buf = tcc_malloc(len + 1);
    if (!buf)
        return -1;
    memcpy(buf, str, len);
    buf[len] = '\\';
    bf->buf_ptr = buf;
    bf->buf_end = buf + len;
    pstrcpy(bf->filename, sizeof(bf->filename), "<string>");
    bf->line_num = 1;
    file = bf;
    ret = tcc_compile(s);
    file = ((void *)0);
    tcc_free(buf);


    return ret;
}


void tcc_define_symbol(TCCState *s1, const char *sym, const char *value)
{
    BufferedFile bf1, *bf = &bf1;

    pstrcpy(bf->buffer, 8192, sym);
    pstrcat(bf->buffer, 8192, " ");

    if (!value)
        value = "1";
    pstrcat(bf->buffer, 8192, value);


    bf->fd = -1;
    bf->buf_ptr = bf->buffer;
    bf->buf_end = bf->buffer + strlen(bf->buffer);
    *bf->buf_end = '\\';
    bf->filename[0] = '\0';
    bf->line_num = 1;
    file = bf;

    s1->include_stack_ptr = s1->include_stack;


    ch = file->buf_ptr[0];
    next_nomacro();
    parse_define();
    file = ((void *)0);
}


void tcc_undefine_symbol(TCCState *s1, const char *sym)
{
    TokenSym *ts;
    Sym *s;
    ts = tok_alloc(sym, strlen(sym));
    s = define_find(ts->tok);

    if (s)
        define_undef(s);
}




# 1 "./i386-asm.c" 1
# 23 "./i386-asm.c"
typedef struct ASMInstr {
    uint16_t sym;
    uint16_t opcode;
    uint16_t instr_type;
# 75 "./i386-asm.c"
    uint8_t nb_ops;
    uint8_t op_type[3];
} ASMInstr;

typedef struct Operand {
    uint32_t type;
# 105 "./i386-asm.c"
    int8_t reg;
    int8_t reg2;
    uint8_t shift;
    ExprValue e;
} Operand;

static const uint8_t reg_to_size[5] = {





    0, 0, 1, 0, 2
};





static const uint8_t test_bits[30] = {
 0x00,
 0x01,
 0x02,
 0x02,
 0x02,
 0x03,
 0x03,
 0x03,
 0x04,
 0x04,
 0x05,
 0x05,
 0x06,
 0x06,
 0x07,
 0x07,
 0x08,
 0x09,
 0x0a,
 0x0a,
 0x0b,
 0x0b,
 0x0c,
 0x0c,
 0x0d,
 0x0d,
 0x0e,
 0x0e,
 0x0f,
 0x0f,
};

static const uint8_t segment_prefixes[] = {
 0x26,
 0x2e,
 0x36,
 0x3e,
 0x64,
 0x65
};

static const ASMInstr asm_instrs[] = {






# 1 "./i386-asm.h" 1
# 41 "./i386-asm.h"
{ TOK_ASM_cmpsb, 0xa6, ((0x02 | 0x04) | 0 << 13), 0 },
{ TOK_ASM_scmpb, 0xa6, ((0x02 | 0x04) | 0 << 13), 0 },

{ TOK_ASM_insb, 0x6c, ((0x02 | 0x04) | 0 << 13), 0 },
{ TOK_ASM_outsb, 0x6e, ((0x02 | 0x04) | 0 << 13), 0 },

{ TOK_ASM_lodsb, 0xac, ((0x02 | 0x04) | 0 << 13), 0 },
{ TOK_ASM_slodb, 0xac, ((0x02 | 0x04) | 0 << 13), 0 },

{ TOK_ASM_movsb, 0xa4, ((0x02 | 0x04) | 0 << 13), 0 },
{ TOK_ASM_smovb, 0xa4, ((0x02 | 0x04) | 0 << 13), 0 },

{ TOK_ASM_scasb, 0xae, ((0x02 | 0x04) | 0 << 13), 0 },
{ TOK_ASM_sscab, 0xae, ((0x02 | 0x04) | 0 << 13), 0 },

{ TOK_ASM_stosb, 0xaa, ((0x02 | 0x04) | 0 << 13), 0 },
{ TOK_ASM_sstob, 0xaa, ((0x02 | 0x04) | 0 << 13), 0 },



{ TOK_ASM_bsfw, 0x0fbc, (0x10 | 0x04 | 0 << 13), 2, { 22 | 0x80, 22 }},
{ TOK_ASM_bsrw, 0x0fbd, (0x10 | 0x04 | 0 << 13), 2, { 22 | 0x80, 22 }},

{ TOK_ASM_btw, 0x0fa3, (0x10 | 0x04 | 0 << 13), 2, { 22, 22 | 0x80 }},
{ TOK_ASM_btw, 0x0fba, (0x10 | 0x04 | 4 << 13), 2, { 10, 22 | 0x80 }},

{ TOK_ASM_btsw, 0x0fab, (0x10 | 0x04 | 0 << 13), 2, { 22, 22 | 0x80 }},
{ TOK_ASM_btsw, 0x0fba, (0x10 | 0x04 | 5 << 13), 2, { 10, 22 | 0x80 }},

{ TOK_ASM_btrw, 0x0fb3, (0x10 | 0x04 | 0 << 13), 2, { 22, 22 | 0x80 }},
{ TOK_ASM_btrw, 0x0fba, (0x10 | 0x04 | 6 << 13), 2, { 10, 22 | 0x80 }},

{ TOK_ASM_btcw, 0x0fbb, (0x10 | 0x04 | 0 << 13), 2, { 22, 22 | 0x80 }},
{ TOK_ASM_btcw, 0x0fba, (0x10 | 0x04 | 7 << 13), 2, { 10, 22 | 0x80 }},
# 98 "./i386-asm.h"
{ TOK_ASM_movb, 0xa0, ((0x02 | 0x04) | 0 << 13), 2, { 18, 14 }},
{ TOK_ASM_movb, 0xa2, ((0x02 | 0x04) | 0 << 13), 2, { 14, 18 }},
{ TOK_ASM_movb, 0x88, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 21, 0x80 | 21 }},
{ TOK_ASM_movb, 0x8a, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 0x80 | 21, 21 }},
{ TOK_ASM_movb, 0xb0, (0x08 | (0x02 | 0x04) | 0 << 13), 2, { 20, 21 }},
{ TOK_ASM_movb, 0xc6, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 20, 21 | 0x80 }},

{ TOK_ASM_movw, 0x8c, (0x10 | 0x04 | 0 << 13), 2, { 8, 0x80 | 21 }},
{ TOK_ASM_movw, 0x8e, (0x10 | 0x04 | 0 << 13), 2, { 0x80 | 21, 8 }},

{ TOK_ASM_movw, 0x0f20, (0x10 | 0x04 | 0 << 13), 2, { 5, 2 }},
{ TOK_ASM_movw, 0x0f21, (0x10 | 0x04 | 0 << 13), 2, { 7, 2 }},
{ TOK_ASM_movw, 0x0f24, (0x10 | 0x04 | 0 << 13), 2, { 6, 2 }},
{ TOK_ASM_movw, 0x0f22, (0x10 | 0x04 | 0 << 13), 2, { 2, 5 }},
{ TOK_ASM_movw, 0x0f23, (0x10 | 0x04 | 0 << 13), 2, { 2, 7 }},
{ TOK_ASM_movw, 0x0f26, (0x10 | 0x04 | 0 << 13), 2, { 2, 6 }},

{ TOK_ASM_movsbl, 0x0fbe, (0x10 | 0 << 13), 2, { 0 | 0x80, 2 }},
{ TOK_ASM_movsbw, 0x0fbe, (0x10 | 0x0100 | 0 << 13), 2, { 0 | 0x80, 1 }},
{ TOK_ASM_movswl, 0x0fbf, (0x10 | 0 << 13), 2, { 1 | 0x80, 2 }},
{ TOK_ASM_movzbw, 0x0fb6, (0x10 | 0x04 | 0 << 13), 2, { 0 | 0x80, 22 }},
{ TOK_ASM_movzwl, 0x0fb7, (0x10 | 0 << 13), 2, { 1 | 0x80, 2 }},

{ TOK_ASM_pushw, 0x50, (0x08 | 0x04 | 0 << 13), 1, { 22 }},
{ TOK_ASM_pushw, 0xff, (0x10 | 0x04 | 6 << 13), 1, { 22 | 0x80 }},
{ TOK_ASM_pushw, 0x6a, (0x04 | 0 << 13), 1, { 11 }},
{ TOK_ASM_pushw, 0x68, (0x04 | 0 << 13), 1, { 13 }},
{ TOK_ASM_pushw, 0x06, (0x04 | 0 << 13), 1, { 8 }},

{ TOK_ASM_popw, 0x58, (0x08 | 0x04 | 0 << 13), 1, { 22 }},
{ TOK_ASM_popw, 0x8f, (0x10 | 0x04 | 0 << 13), 1, { 22 | 0x80 }},
{ TOK_ASM_popw, 0x07, (0x04 | 0 << 13), 1, { 8 }},

{ TOK_ASM_xchgw, 0x90, (0x08 | 0x04 | 0 << 13), 2, { 21, 14 }},
{ TOK_ASM_xchgw, 0x90, (0x08 | 0x04 | 0 << 13), 2, { 14, 21 }},
{ TOK_ASM_xchgb, 0x86, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 21, 0x80 | 21 }},
{ TOK_ASM_xchgb, 0x86, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 0x80 | 21, 21 }},

{ TOK_ASM_inb, 0xe4, ((0x02 | 0x04) | 0 << 13), 2, { 10, 14 }},
{ TOK_ASM_inb, 0xe4, ((0x02 | 0x04) | 0 << 13), 1, { 10 }},
{ TOK_ASM_inb, 0xec, ((0x02 | 0x04) | 0 << 13), 2, { 17, 14 }},
{ TOK_ASM_inb, 0xec, ((0x02 | 0x04) | 0 << 13), 1, { 17 }},

{ TOK_ASM_outb, 0xe6, ((0x02 | 0x04) | 0 << 13), 2, { 14, 10 }},
{ TOK_ASM_outb, 0xe6, ((0x02 | 0x04) | 0 << 13), 1, { 10 }},
{ TOK_ASM_outb, 0xee, ((0x02 | 0x04) | 0 << 13), 2, { 14, 17 }},
{ TOK_ASM_outb, 0xee, ((0x02 | 0x04) | 0 << 13), 1, { 17 }},

{ TOK_ASM_leaw, 0x8d, (0x10 | 0x04 | 0 << 13), 2, { 0x80, 21 }},

{ TOK_ASM_les, 0xc4, (0x10 | 0 << 13), 2, { 0x80, 2 }},
{ TOK_ASM_lds, 0xc5, (0x10 | 0 << 13), 2, { 0x80, 2 }},
{ TOK_ASM_lss, 0x0fb2, (0x10 | 0 << 13), 2, { 0x80, 2 }},
{ TOK_ASM_lfs, 0x0fb4, (0x10 | 0 << 13), 2, { 0x80, 2 }},
{ TOK_ASM_lgs, 0x0fb5, (0x10 | 0 << 13), 2, { 0x80, 2 }},


{ TOK_ASM_addb, 0x00, (0x0200 | 0x10 | (0x02 | 0x04) | 0 << 13), 2, { 21, 0x80 | 21 }},
{ TOK_ASM_addb, 0x02, (0x0200 | 0x10 | (0x02 | 0x04) | 0 << 13), 2, { 0x80 | 21, 21 }},
{ TOK_ASM_addb, 0x04, (0x0200 | (0x02 | 0x04) | 0 << 13), 2, { 20, 14 }},
{ TOK_ASM_addb, 0x80, (0x0200 | 0x10 | (0x02 | 0x04) | 0 << 13), 2, { 20, 0x80 | 21 }},
{ TOK_ASM_addw, 0x83, (0x0200 | 0x10 | 0x04 | 0 << 13), 2, { 11, 0x80 | 21 }},

{ TOK_ASM_testb, 0x84, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 0x80 | 21, 21 }},
{ TOK_ASM_testb, 0x84, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 21, 0x80 | 21 }},
{ TOK_ASM_testb, 0xa8, ((0x02 | 0x04) | 0 << 13), 2, { 20, 14 }},
{ TOK_ASM_testb, 0xf6, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 20, 0x80 | 21 }},

{ TOK_ASM_incw, 0x40, (0x08 | 0x04 | 0 << 13), 1, { 22 }},
{ TOK_ASM_incb, 0xfe, (0x10 | (0x02 | 0x04) | 0 << 13), 1, { 21 | 0x80 }},
{ TOK_ASM_decw, 0x48, (0x08 | 0x04 | 0 << 13), 1, { 22 }},
{ TOK_ASM_decb, 0xfe, (0x10 | (0x02 | 0x04) | 1 << 13), 1, { 21 | 0x80 }},

{ TOK_ASM_notb, 0xf6, (0x10 | (0x02 | 0x04) | 2 << 13), 1, { 21 | 0x80 }},
{ TOK_ASM_negb, 0xf6, (0x10 | (0x02 | 0x04) | 3 << 13), 1, { 21 | 0x80 }},

{ TOK_ASM_mulb, 0xf6, (0x10 | (0x02 | 0x04) | 4 << 13), 1, { 21 | 0x80 }},
{ TOK_ASM_imulb, 0xf6, (0x10 | (0x02 | 0x04) | 5 << 13), 1, { 21 | 0x80 }},

{ TOK_ASM_imulw, 0x0faf, (0x10 | 0x04 | 0 << 13), 2, { 21 | 0x80, 21 }},
{ TOK_ASM_imulw, 0x6b, (0x10 | 0x04 | 0 << 13), 3, { 11, 22 | 0x80, 22 }},
{ TOK_ASM_imulw, 0x6b, (0x10 | 0x04 | 0 << 13), 2, { 11, 22 }},
{ TOK_ASM_imulw, 0x69, (0x10 | 0x04 | 0 << 13), 3, { 23, 22 | 0x80, 22 }},
{ TOK_ASM_imulw, 0x69, (0x10 | 0x04 | 0 << 13), 2, { 23, 22 }},

{ TOK_ASM_divb, 0xf6, (0x10 | (0x02 | 0x04) | 6 << 13), 1, { 21 | 0x80 }},
{ TOK_ASM_divb, 0xf6, (0x10 | (0x02 | 0x04) | 6 << 13), 2, { 21 | 0x80, 14 }},
{ TOK_ASM_idivb, 0xf6, (0x10 | (0x02 | 0x04) | 7 << 13), 1, { 21 | 0x80 }},
{ TOK_ASM_idivb, 0xf6, (0x10 | (0x02 | 0x04) | 7 << 13), 2, { 21 | 0x80, 14 }},


{ TOK_ASM_rolb, 0xc0, (0x10 | (0x02 | 0x04) | 0x80 | 0 << 13), 2, { 10, 0x80 | 21 }},
{ TOK_ASM_rolb, 0xd2, (0x10 | (0x02 | 0x04) | 0x80 | 0 << 13), 2, { 16, 0x80 | 21 }},
{ TOK_ASM_rolb, 0xd0, (0x10 | (0x02 | 0x04) | 0x80 | 0 << 13), 1, { 0x80 | 21 }},

{ TOK_ASM_shldw, 0x0fa4, (0x10 | 0x04 | 0 << 13), 3, { 10, 22, 0x80 | 22 }},
{ TOK_ASM_shldw, 0x0fa5, (0x10 | 0x04 | 0 << 13), 3, { 16, 22, 0x80 | 22 }},
{ TOK_ASM_shldw, 0x0fa5, (0x10 | 0x04 | 0 << 13), 2, { 22, 0x80 | 22 }},
{ TOK_ASM_shrdw, 0x0fac, (0x10 | 0x04 | 0 << 13), 3, { 10, 22, 0x80 | 22 }},
{ TOK_ASM_shrdw, 0x0fad, (0x10 | 0x04 | 0 << 13), 3, { 16, 22, 0x80 | 22 }},
{ TOK_ASM_shrdw, 0x0fad, (0x10 | 0x04 | 0 << 13), 2, { 22, 0x80 | 22 }},

{ TOK_ASM_call, 0xff, (0x10 | 2 << 13), 1, { 19 }},
{ TOK_ASM_call, 0xe8, (0x01 | 0 << 13), 1, { 18 }},
{ TOK_ASM_jmp, 0xff, (0x10 | 4 << 13), 1, { 19 }},
{ TOK_ASM_jmp, 0xeb, (0x0400 | 0x01 | 0 << 13), 1, { 18 }},

{ TOK_ASM_lcall, 0x9a, (0 | 0 << 13), 2, { 12, 13 }},
{ TOK_ASM_lcall, 0xff, (0 | 3 << 13), 1, { 0x80 }},
{ TOK_ASM_ljmp, 0xea, (0 | 0 << 13), 2, { 12, 13 }},
{ TOK_ASM_ljmp, 0xff, (0 | 5 << 13), 1, { 0x80 }},

{ TOK_INT, 0xcd, (0 | 0 << 13), 1, { 10 }},
{ TOK_ASM_seto, 0x0f90, (0x10 | 0x40 | 0 << 13), 1, { 0 | 0x80 }},
    { TOK_ASM_enter, 0xc8, (0 | 0 << 13), 2, { 12, 10 }},


{ TOK_ASM_ret, 0xc2, (0 | 0 << 13), 1, { 12 }},

{ TOK_ASM_lret, 0xca, (0 | 0 << 13), 1, { 12 }},

{ TOK_ASM_jo, 0x70, (0x0400 | 0x01 | 0x40 | 0 << 13), 1, { 18 }},
    { TOK_ASM_loopne, 0xe0, (0x0400 | 0 << 13), 1, { 18 }},
    { TOK_ASM_loopnz, 0xe0, (0x0400 | 0 << 13), 1, { 18 }},
    { TOK_ASM_loope, 0xe1, (0x0400 | 0 << 13), 1, { 18 }},
    { TOK_ASM_loopz, 0xe1, (0x0400 | 0 << 13), 1, { 18 }},
    { TOK_ASM_loop, 0xe2, (0x0400 | 0 << 13), 1, { 18 }},
    { TOK_ASM_jecxz, 0xe3, (0x0400 | 0 << 13), 1, { 18 }},



{ TOK_ASM_fcomp, 0xd8d9, (0 | 0 << 13), 0 },

{ TOK_ASM_fadd, 0xd8c0, (0x0800 | 0x08 | 0 << 13), 1, { 9 }},
{ TOK_ASM_fadd, 0xd8c0, (0x0800 | 0x08 | 0 << 13), 2, { 9, 15 }},
{ TOK_ASM_fadd, 0xdec1, (0x0800 | 0 << 13), 0 },
{ TOK_ASM_faddp, 0xdec0, (0x0800 | 0x08 | 0 << 13), 1, { 9 }},
{ TOK_ASM_faddp, 0xdec0, (0x0800 | 0x08 | 0 << 13), 2, { 9, 15 }},
{ TOK_ASM_faddp, 0xdec0, (0x0800 | 0x08 | 0 << 13), 2, { 15, 9 }},
{ TOK_ASM_faddp, 0xdec1, (0x0800 | 0 << 13), 0 },
{ TOK_ASM_fadds, 0xd8, (0x0800 | 0x10 | 0 << 13), 1, { 0x80 }},
{ TOK_ASM_fiaddl, 0xda, (0x0800 | 0x10 | 0 << 13), 1, { 0x80 }},
{ TOK_ASM_faddl, 0xdc, (0x0800 | 0x10 | 0 << 13), 1, { 0x80 }},
{ TOK_ASM_fiadds, 0xde, (0x0800 | 0x10 | 0 << 13), 1, { 0x80 }},
# 278 "./i386-asm.h"
    { TOK_ASM_fld, 0xd9c0, (0x08 | 0 << 13), 1, { 9 }},
    { TOK_ASM_fldl, 0xd9c0, (0x08 | 0 << 13), 1, { 9 }},
    { TOK_ASM_flds, 0xd9, (0x10 | 0 << 13), 1, { 0x80 }},
{ TOK_ASM_fldl, 0xdd, (0x10 | 0 << 13), 1, { 0x80 }},
    { TOK_ASM_fildl, 0xdb, (0x10 | 0 << 13), 1, { 0x80 }},
    { TOK_ASM_fildq, 0xdf, (0x10 | 5 << 13), 1, { 0x80 }},
    { TOK_ASM_fildll, 0xdf, (0x10 | 5 << 13), 1, { 0x80 }},
    { TOK_ASM_fldt, 0xdb, (0x10 | 5 << 13), 1, { 0x80 }},
    { TOK_ASM_fbld, 0xdf, (0x10 | 4 << 13), 1, { 0x80 }},


    { TOK_ASM_fst, 0xddd0, (0x08 | 0 << 13), 1, { 9 }},
    { TOK_ASM_fstl, 0xddd0, (0x08 | 0 << 13), 1, { 9 }},
    { TOK_ASM_fsts, 0xd9, (0x10 | 2 << 13), 1, { 0x80 }},
    { TOK_ASM_fstps, 0xd9, (0x10 | 3 << 13), 1, { 0x80 }},
{ TOK_ASM_fstl, 0xdd, (0x10 | 2 << 13), 1, { 0x80 }},
    { TOK_ASM_fstpl, 0xdd, (0x10 | 3 << 13), 1, { 0x80 }},
    { TOK_ASM_fist, 0xdf, (0x10 | 2 << 13), 1, { 0x80 }},
    { TOK_ASM_fistp, 0xdf, (0x10 | 3 << 13), 1, { 0x80 }},
    { TOK_ASM_fistl, 0xdb, (0x10 | 2 << 13), 1, { 0x80 }},
    { TOK_ASM_fistpl, 0xdb, (0x10 | 3 << 13), 1, { 0x80 }},

    { TOK_ASM_fstp, 0xddd8, (0x08 | 0 << 13), 1, { 9 }},
    { TOK_ASM_fistpq, 0xdf, (0x10 | 7 << 13), 1, { 0x80 }},
    { TOK_ASM_fistpll, 0xdf, (0x10 | 7 << 13), 1, { 0x80 }},
    { TOK_ASM_fstpt, 0xdb, (0x10 | 7 << 13), 1, { 0x80 }},
    { TOK_ASM_fbstp, 0xdf, (0x10 | 6 << 13), 1, { 0x80 }},



{ TOK_ASM_fxch, 0xd9c8, (0x08 | 0 << 13), 1, { 9 }},


    { TOK_ASM_fucom, 0xdde0, (0x08 | 0 << 13), 1, { 9 }},
    { TOK_ASM_fucomp, 0xdde8, (0x08 | 0 << 13), 1, { 9 }},

    { TOK_ASM_finit, 0xdbe3, (0x20 | 0 << 13), 0 },
    { TOK_ASM_fldcw, 0xd9, (0x10 | 5 << 13), 1, { 0x80 }},
    { TOK_ASM_fnstcw, 0xd9, (0x10 | 7 << 13), 1, { 0x80 }},
    { TOK_ASM_fstcw, 0xd9, (0x10 | 0x20 | 7 << 13), 1, { 0x80 }},

{ TOK_ASM_fnstsw, 0xdfe0, (0 | 0 << 13), 1, { 14 }},
{ TOK_ASM_fnstsw, 0xdd, (0x10 | 7 << 13), 1, { 0x80 }},
    { TOK_ASM_fstsw, 0xdfe0, (0x20 | 0 << 13), 1, { 14 }},
{ TOK_ASM_fstsw, 0xdfe0, (0x20 | 0 << 13), 0 },
{ TOK_ASM_fstsw, 0xdd, (0x10 | 0x20 | 7 << 13), 1, { 0x80 }},
    { TOK_ASM_fclex, 0xdbe2, (0x20 | 0 << 13), 0 },
    { TOK_ASM_fnstenv, 0xd9, (0x10 | 6 << 13), 1, { 0x80 }},
    { TOK_ASM_fstenv, 0xd9, (0x10 | 0x20 | 6 << 13), 1, { 0x80 }},
    { TOK_ASM_fldenv, 0xd9, (0x10 | 4 << 13), 1, { 0x80 }},
    { TOK_ASM_fnsave, 0xdd, (0x10 | 6 << 13), 1, { 0x80 }},
    { TOK_ASM_fsave, 0xdd, (0x10 | 0x20 | 6 << 13), 1, { 0x80 }},
    { TOK_ASM_frstor, 0xdd, (0x10 | 4 << 13), 1, { 0x80 }},
    { TOK_ASM_ffree, 0xddc0, (0x08 | 4 << 13), 1, { 9 }},
    { TOK_ASM_ffreep, 0xdfc0, (0x08 | 4 << 13), 1, { 9 }},
    { TOK_ASM_fxsave, 0x0fae, (0x10 | 0 << 13), 1, { 0x80 }},
    { TOK_ASM_fxrstor, 0x0fae, (0x10 | 1 << 13), 1, { 0x80 }},


    { TOK_ASM_arpl, 0x63, (0x10 | 0 << 13), 2, { 1, 1 | 0x80 }},
    { TOK_ASM_lar, 0x0f02, (0x10 | 0 << 13), 2, { 2 | 0x80, 2 }},
    { TOK_ASM_lgdt, 0x0f01, (0x10 | 2 << 13), 1, { 0x80 }},
    { TOK_ASM_lidt, 0x0f01, (0x10 | 3 << 13), 1, { 0x80 }},
    { TOK_ASM_lldt, 0x0f00, (0x10 | 2 << 13), 1, { 0x80 | 21 }},
    { TOK_ASM_lmsw, 0x0f01, (0x10 | 6 << 13), 1, { 0x80 | 21 }},
{ TOK_ASM_lslw, 0x0f03, (0x10 | 0x04 | 0 << 13), 2, { 0x80 | 21, 21 }},
    { TOK_ASM_ltr, 0x0f00, (0x10 | 3 << 13), 1, { 0x80 | 21 }},
    { TOK_ASM_sgdt, 0x0f01, (0x10 | 0 << 13), 1, { 0x80 }},
    { TOK_ASM_sidt, 0x0f01, (0x10 | 1 << 13), 1, { 0x80 }},
    { TOK_ASM_sldt, 0x0f00, (0x10 | 0 << 13), 1, { 21 | 0x80 }},
    { TOK_ASM_smsw, 0x0f01, (0x10 | 4 << 13), 1, { 21 | 0x80 }},
    { TOK_ASM_str, 0x0f00, (0x10 | 1 << 13), 1, { 1| 0x80 }},
    { TOK_ASM_verr, 0x0f00, (0x10 | 4 << 13), 1, { 21 | 0x80 }},
    { TOK_ASM_verw, 0x0f00, (0x10 | 5 << 13), 1, { 21 | 0x80 }},


    { TOK_ASM_bswap, 0x0fc8, (0x08 | 0 << 13), 1, { 2 }},
{ TOK_ASM_xaddb, 0x0fc0, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 21, 21 | 0x80 }},
{ TOK_ASM_cmpxchgb, 0x0fb0, (0x10 | (0x02 | 0x04) | 0 << 13), 2, { 21, 21 | 0x80 }},
    { TOK_ASM_invlpg, 0x0f01, (0x10 | 7 << 13), 1, { 0x80 }},

    { TOK_ASM_boundl, 0x62, (0x10 | 0 << 13), 2, { 2, 0x80 }},
    { TOK_ASM_boundw, 0x62, (0x10 | 0x0100 | 0 << 13), 2, { 1, 0x80 }},


    { TOK_ASM_cmpxchg8b, 0x0fc7, (0x10 | 1 << 13), 1, { 0x80 }},


    { TOK_ASM_cmovo, 0x0f40, (0x10 | 0x40 | 0 << 13), 2, { 2 | 0x80, 2 }},

    { TOK_ASM_fcmovb, 0xdac0, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcmove, 0xdac8, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcmovbe, 0xdad0, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcmovu, 0xdad8, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcmovnb, 0xdbc0, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcmovne, 0xdbc8, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcmovnbe, 0xdbd0, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcmovnu, 0xdbd8, (0x08 | 0 << 13), 2, { 9, 15 }},

    { TOK_ASM_fucomi, 0xdbe8, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcomi, 0xdbf0, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fucomip, 0xdfe8, (0x08 | 0 << 13), 2, { 9, 15 }},
    { TOK_ASM_fcomip, 0xdff0, (0x08 | 0 << 13), 2, { 9, 15 }},



    { TOK_ASM_movd, 0x0f6e, (0x10 | 0 << 13), 2, { 0x80 | 2, 3 }},
{ TOK_ASM_movd, 0x0f7e, (0x10 | 0 << 13), 2, { 3, 0x80 | 2 }},
    { TOK_ASM_movq, 0x0f6f, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_movq, 0x0f7f, (0x10 | 0 << 13), 2, { 3, 0x80 | 3 }},
    { TOK_ASM_packssdw, 0x0f6b, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_packsswb, 0x0f63, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_packuswb, 0x0f67, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_paddb, 0x0ffc, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_paddw, 0x0ffd, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_paddd, 0x0ffe, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_paddsb, 0x0fec, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_paddsw, 0x0fed, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_paddusb, 0x0fdc, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_paddusw, 0x0fdd, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pand, 0x0fdb, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pandn, 0x0fdf, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pcmpeqb, 0x0f74, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pcmpeqw, 0x0f75, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pcmpeqd, 0x0f76, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pcmpgtb, 0x0f64, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pcmpgtw, 0x0f65, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pcmpgtd, 0x0f66, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pmaddwd, 0x0ff5, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pmulhw, 0x0fe5, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pmullw, 0x0fd5, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_por, 0x0feb, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_psllw, 0x0ff1, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_psllw, 0x0f71, (0x10 | 6 << 13), 2, { 10, 3 }},
    { TOK_ASM_pslld, 0x0ff2, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_pslld, 0x0f72, (0x10 | 6 << 13), 2, { 10, 3 }},
    { TOK_ASM_psllq, 0x0ff3, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_psllq, 0x0f73, (0x10 | 6 << 13), 2, { 10, 3 }},
    { TOK_ASM_psraw, 0x0fe1, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_psraw, 0x0f71, (0x10 | 4 << 13), 2, { 10, 3 }},
    { TOK_ASM_psrad, 0x0fe2, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_psrad, 0x0f72, (0x10 | 4 << 13), 2, { 10, 3 }},
    { TOK_ASM_psrlw, 0x0fd1, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_psrlw, 0x0f71, (0x10 | 2 << 13), 2, { 10, 3 }},
    { TOK_ASM_psrld, 0x0fd2, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_psrld, 0x0f72, (0x10 | 2 << 13), 2, { 10, 3 }},
    { TOK_ASM_psrlq, 0x0fd3, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
{ TOK_ASM_psrlq, 0x0f73, (0x10 | 2 << 13), 2, { 10, 3 }},
    { TOK_ASM_psubb, 0x0ff8, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_psubw, 0x0ff9, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_psubd, 0x0ffa, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_psubsb, 0x0fe8, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_psubsw, 0x0fe9, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_psubusb, 0x0fd8, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_psubusw, 0x0fd9, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_punpckhbw, 0x0f68, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_punpckhwd, 0x0f69, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_punpckhdq, 0x0f6a, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_punpcklbw, 0x0f60, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_punpcklwd, 0x0f61, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_punpckldq, 0x0f62, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
    { TOK_ASM_pxor, 0x0fef, (0x10 | 0 << 13), 2, { 0x80 | 3, 3 }},
# 174 "./i386-asm.c" 2


    { 0, },
};

static const uint16_t op0_codes[] = {






# 1 "./i386-asm.h" 1
     0x60,
     0x61,
     0xf8,
     0xfc,
     0xfa,
     0x0f06,
     0xf5,
     0x9f,
     0x9e,
     0x9c,
     0x9d,
     0x9c,
     0x9d,
     0xf9,
     0xfd,
     0xfb,
     0x37,
     0x3f,
     0x27,
     0x2f,
     0xd50a,
     0xd40a,
     0x6698,
     0x6699,
     0x98,
     0x99,
     0x6698,
     0x98,
     0x6699,
     0x99,
     0xcc,
     0xce,
     0xcf,
     0x0faa,
     0xf4,
     0x9b,
     0x90,
     0xd7,
# 77 "./i386-asm.h"
     0x67,
     0x67,
     0x66,
     0x66,
     0xf0,
     0xf3,
     0xf3,
     0xf3,
     0xf2,
     0xf2,

     0x0f08,
     0x0f09,
     0x0fa2,
     0x0f30,
     0x0f31,
     0x0f32,
     0x0f33,
     0x0f0b,
# 213 "./i386-asm.h"
    0xc9,
    0xc3,

    0xcb,
# 243 "./i386-asm.h"
     0xdae9,
     0xd9e4,
     0xd9e5,
     0xd9e8,
     0xd9e9,
     0xd9ea,
     0xd9eb,
     0xd9ec,
     0xd9ed,
     0xd9ee,

     0xd9f0,
     0xd9f1,
     0xd9f2,
     0xd9f3,
     0xd9f4,
     0xd9f5,
     0xd9f6,
     0xd9f7,
     0xd9f8,
     0xd9f9,
     0xd9fa,
     0xd9fb,
     0xd9fc,
     0xd9fd,
     0xd9fe,
     0xd9ff,
     0xd9e0,
     0xd9e1,
     0xdbe3,
     0xdbe2,
     0xd9d0,
     0x9b,
# 307 "./i386-asm.h"
    0xd9c9,
# 318 "./i386-asm.h"
    0xdfe0,
# 383 "./i386-asm.h"
    0x0f77,
# 187 "./i386-asm.c" 2
};

static inline int get_reg_shift(TCCState *s1)
{
    int shift, v;

    v = asm_int_expr(s1);
    switch(v) {
    case 1:
        shift = 0;
        break;
    case 2:
        shift = 1;
        break;
    case 4:
        shift = 2;
        break;
    case 8:
        shift = 3;
        break;
    default:
        expect("1, 2, 4 or 8 constant");
        shift = 0;
        break;
    }
    return shift;
}

static int asm_parse_reg(void)
{
    int reg;
    if (tok != '%')
        goto error_32;
    next();
    if (tok >= TOK_ASM_eax && tok <= TOK_ASM_edi) {
        reg = tok - TOK_ASM_eax;
        next();
        return reg;
    } else {
    error_32:
        expect("32 bit register");
        return 0;
    }
}

static void parse_operand(TCCState *s1, Operand *op)
{
    ExprValue e;
    int reg, indir;
    const char *p;

    indir = 0;
    if (tok == '*') {
        next();
        indir = (1 << 19);
    }

    if (tok == '%') {
        next();
        if (tok >= TOK_ASM_al && tok <= TOK_ASM_db7) {
            reg = tok - TOK_ASM_al;
            op->type = 1 << (reg >> 3);
            op->reg = reg & 7;
            if ((op->type & ((1 << 0) | (1 << 1) | (1 << 2))) && op->reg == TREG_EAX)
                op->type |= (1 << 14);
            else if (op->type == (1 << 0) && op->reg == TREG_ECX)
                op->type |= (1 << 16);
            else if (op->type == (1 << 1) && op->reg == TREG_EDX)
                op->type |= (1 << 17);
        } else if (tok >= TOK_ASM_dr0 && tok <= TOK_ASM_dr7) {
            op->type = (1 << 7);
            op->reg = tok - TOK_ASM_dr0;
        } else if (tok >= TOK_ASM_es && tok <= TOK_ASM_gs) {
            op->type = (1 << 8);
            op->reg = tok - TOK_ASM_es;
        } else if (tok == TOK_ASM_st) {
            op->type = (1 << 9);
            op->reg = 0;
            next();
            if (tok == '(') {
                next();
                if (tok != 0xce)
                    goto reg_error;
                p = tokc.cstr->data;
                reg = p[0] - '0';
                if ((unsigned)reg >= 8 || p[1] != '\0')
                    goto reg_error;
                op->reg = reg;
                next();
                skip(')');
            }
            if (op->reg == 0)
                op->type |= (1 << 15);
            goto no_skip;
        } else {
        reg_error:
            error("unknown register");
        }
        next();
    no_skip: ;
    } else if (tok == '$') {

        next();
        asm_expr(s1, &e);
        op->type = (1 << 13);
        op->e.v = e.v;
        op->e.sym = e.sym;
        if (!op->e.sym) {
            if (op->e.v == (uint8_t)op->e.v)
                op->type |= (1 << 10);
            if (op->e.v == (int8_t)op->e.v)
                op->type |= (1 << 11);
            if (op->e.v == (uint16_t)op->e.v)
                op->type |= (1 << 12);
        }
    } else {

        op->type = 0x40000000;
        op->reg = -1;
        op->reg2 = -1;
        op->shift = 0;
        if (tok != '(') {
            asm_expr(s1, &e);
            op->e.v = e.v;
            op->e.sym = e.sym;
        } else {
            op->e.v = 0;
            op->e.sym = ((void *)0);
        }
        if (tok == '(') {
            next();
            if (tok != ',') {
                op->reg = asm_parse_reg();
            }
            if (tok == ',') {
                next();
                if (tok != ',') {
                    op->reg2 = asm_parse_reg();
                }
                if (tok == ',') {
                    next();
                    op->shift = get_reg_shift(s1);
                }
            }
            skip(')');
        }
        if (op->reg == -1 && op->reg2 == -1)
            op->type |= (1 << 18);
    }
    op->type |= indir;
}


static void gen_expr32(ExprValue *pe)
{
    if (pe->sym)
        greloc(cur_text_section, pe->sym, ind, 1);
    gen_le32(pe->v);
}


static void gen_disp32(ExprValue *pe)
{
    Sym *sym;
    sym = pe->sym;
    if (sym) {
        if (sym->r == cur_text_section->sh_num) {




            gen_le32(pe->v + (long)sym->next - ind - 4);
        } else {
            greloc(cur_text_section, sym, ind, 2);
            gen_le32(pe->v - 4);
        }
    } else {

        put_elf_reloc(symtab_section, cur_text_section,
                      ind, 2, 0);
        gen_le32(pe->v - 4);
    }
}


static void gen_le16(int v)
{
    g(v);
    g(v >> 8);
}


static inline void asm_modrm(int reg, Operand *op)
{
    int mod, reg1, reg2, sib_reg1;

    if (op->type & (((1 << 0) | (1 << 1) | (1 << 2)) | (1 << 3) | (1 << 4))) {
        g(0xc0 + (reg << 3) + op->reg);
    } else if (op->reg == -1 && op->reg2 == -1) {

        g(0x05 + (reg << 3));
        gen_expr32(&op->e);
    } else {
        sib_reg1 = op->reg;

        if (sib_reg1 == -1) {
            sib_reg1 = 5;
            mod = 0x00;
        } else if (op->e.v == 0 && !op->e.sym && op->reg != 5) {
            mod = 0x00;
        } else if (op->e.v == (int8_t)op->e.v && !op->e.sym) {
            mod = 0x40;
        } else {
            mod = 0x80;
        }

        reg1 = op->reg;
        if (op->reg2 != -1)
            reg1 = 4;
        g(mod + (reg << 3) + reg1);
        if (reg1 == 4) {

            reg2 = op->reg2;
            if (reg2 == -1)
                reg2 = 4;
            g((op->shift << 6) + (reg2 << 3) + sib_reg1);
        }


        if (mod == 0x40) {
            g(op->e.v);
        } else if (mod == 0x80 || op->reg == -1) {
            gen_expr32(&op->e);
        }
    }
}

static void asm_opcode(TCCState *s1, int opcode)
{
    const ASMInstr *pa;
    int i, modrm_index, reg, v, op1, is_short_jmp, seg_prefix;
    int nb_ops, s, ss;
    Operand ops[3], *pop;
    int op_type[3];


    pop = ops;
    nb_ops = 0;
    seg_prefix = 0;
    for(;;) {
        if (tok == ';' || tok == 10)
            break;
        if (nb_ops >= 3) {
            error("incorrect number of operands");
        }
        parse_operand(s1, pop);
        if (tok == ':') {
           if (pop->type != (1 << 8) || seg_prefix) {
               error("incorrect prefix");
           }
           seg_prefix = segment_prefixes[pop->reg];
           next();
           parse_operand(s1, pop);
           if (!(pop->type & 0x40000000)) {
               error("segment prefix must be followed by memory reference");
           }
        }
        pop++;
        nb_ops++;
        if (tok != ',')
            break;
        next();
    }

    is_short_jmp = 0;
    s = 0;



    for(pa = asm_instrs; pa->sym != 0; pa++) {
        s = 0;
        if (pa->instr_type & 0x0800) {
            v = opcode - pa->sym;
            if (!((unsigned)v < 8 * 6 && (v % 6) == 0))
                continue;
        } else if (pa->instr_type & 0x0200) {
            if (!(opcode >= pa->sym && opcode < pa->sym + 8 * 4))
                continue;
            goto compute_size;
        } else if (pa->instr_type & 0x80) {
            if (!(opcode >= pa->sym && opcode < pa->sym + 7 * 4))
                continue;
            goto compute_size;
        } else if (pa->instr_type & 0x40) {
            if (!(opcode >= pa->sym && opcode < pa->sym + 30))
                continue;
        } else if (pa->instr_type & 0x02) {
            if (!(opcode >= pa->sym && opcode <= pa->sym + 3))
                continue;
        compute_size:
            s = (opcode - pa->sym) & 3;
        } else if (pa->instr_type & 0x04) {
            if (!(opcode >= pa->sym && opcode <= pa->sym + 2))
                continue;
            s = opcode - pa->sym + 1;
        } else {
            if (pa->sym != opcode)
                continue;
        }
        if (pa->nb_ops != nb_ops)
            continue;

        for(i = 0; i < nb_ops; i++) {
            int op1, op2;
            op1 = pa->op_type[i];
            op2 = op1 & 0x1f;
            switch(op2) {
            case 20:
                v = (1 << 10) | (1 << 12) | (1 << 13);
                break;
            case 21:
                v = (1 << 0) | (1 << 1) | (1 << 2);
                break;
            case 22:
                v = (1 << 1) | (1 << 2);
                break;
            case 23:
                v = (1 << 12) | (1 << 13);
                break;
            default:
                v = 1 << op2;
                break;
            }
            if (op1 & 0x80)
                v |= 0x40000000;
            op_type[i] = v;
            if ((ops[i].type & v) == 0)
                goto next;
        }

        break;
    next: ;
    }
    if (pa->sym == 0) {
        if (opcode >= TOK_ASM_pusha && opcode <= TOK_ASM_emms) {
            int b;
            b = op0_codes[opcode - TOK_ASM_pusha];
            if (b & 0xff00)
                g(b >> 8);
            g(b);
            return;
        } else {
            error("unknown opcode '%s'",
                  get_tok_str(opcode, ((void *)0)));
        }
    }

    if (s == 3) {
        for(i = 0; s == 3 && i < nb_ops; i++) {
            if ((ops[i].type & ((1 << 0) | (1 << 1) | (1 << 2))) && !(op_type[i] & ((1 << 16) | (1 << 17))))
                s = reg_to_size[ops[i].type & ((1 << 0) | (1 << 1) | (1 << 2))];
        }
        if (s == 3) {
            if ((opcode == TOK_ASM_push || opcode == TOK_ASM_pop) &&
                (ops[0].type & ((1 << 8) | (1 << 11) | (1 << 13))))
                s = 2;
            else
                error("cannot infer opcode suffix");
        }
    }


    ss = s;
    if (s == 1 || (pa->instr_type & 0x0100))
        g(0x66);
    else if (s == 2)
        s = 1;

    if (pa->instr_type & 0x20)
        g(0x9b);
    if (seg_prefix)
        g(seg_prefix);

    v = pa->opcode;
    if (v == 0x69 || v == 0x69) {

        nb_ops = 3;
        ops[2] = ops[1];
    } else if (v == 0xcd && ops[0].e.v == 3 && !ops[0].e.sym) {
        v--;
        nb_ops = 0;
    } else if ((v == 0x06 || v == 0x07)) {
        if (ops[0].reg >= 4) {

            v = 0x0fa0 + (v - 0x06) + ((ops[0].reg - 4) << 3);
        } else {
            v += ops[0].reg << 3;
        }
        nb_ops = 0;
    } else if (v <= 0x05) {

        v += ((opcode - TOK_ASM_addb) >> 2) << 3;
    } else if ((pa->instr_type & (0x0800 | 0x10)) == 0x0800) {

        v += ((opcode - pa->sym) / 6) << 3;
    }
    if (pa->instr_type & 0x08) {
        for(i = 0; i < nb_ops; i++) {
            if (op_type[i] & (((1 << 0) | (1 << 1) | (1 << 2)) | (1 << 9))) {
                v += ops[i].reg;
                break;
            }
        }

        if (pa->opcode == 0xb0 && s >= 1)
            v += 7;
    }
    if (pa->instr_type & 0x02)
        v += s;
    if (pa->instr_type & 0x40)
        v += test_bits[opcode - pa->sym];
    if (pa->instr_type & 0x0400) {
        Sym *sym;
        int jmp_disp;


        sym = ops[0].e.sym;
        if (!sym)
            goto no_short_jump;
        if (sym->r != cur_text_section->sh_num)
            goto no_short_jump;
        jmp_disp = ops[0].e.v + (long)sym->next - ind - 2;
        if (jmp_disp == (int8_t)jmp_disp) {

            is_short_jmp = 1;
            ops[0].e.v = jmp_disp;
        } else {
        no_short_jump:
            if (pa->instr_type & 0x01) {


                if (v == 0xeb)
                    v = 0xe9;
                else
                    v += 0x0f10;
            } else {
                error("invalid displacement");
            }
        }
    }
    op1 = v >> 8;
    if (op1)
        g(op1);
    g(v);


    modrm_index = 0;
    if (pa->instr_type & 0x80) {
        reg = (opcode - pa->sym) >> 2;
        if (reg == 6)
            reg = 7;
    } else if (pa->instr_type & 0x0200) {
        reg = (opcode - pa->sym) >> 2;
    } else if (pa->instr_type & 0x0800) {
        reg = (opcode - pa->sym) / 6;
    } else {
        reg = (pa->instr_type >> 13) & 7;
    }
    if (pa->instr_type & 0x10) {

        for(i = 0;i < nb_ops; i++) {
            if (op_type[i] & 0x40000000)
                goto modrm_found;
        }

        for(i = 0;i < nb_ops; i++) {
            if (op_type[i] & (((1 << 0) | (1 << 1) | (1 << 2)) | (1 << 3) | (1 << 4) | (1 << 19)))
                goto modrm_found;
        }



    modrm_found:
        modrm_index = i;


        for(i = 0;i < nb_ops; i++) {
            v = op_type[i];
            if (i != modrm_index &&
                (v & (((1 << 0) | (1 << 1) | (1 << 2)) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7) | (1 << 8)))) {
                reg = ops[i].reg;
                break;
            }
        }

        asm_modrm(reg, &ops[modrm_index]);
    }


    if (pa->opcode == 0x9a || pa->opcode == 0xea) {

        gen_expr32(&ops[1].e);
        if (ops[0].e.sym)
            error("cannot relocate");
        gen_le16(ops[0].e.v);
    } else {
        for(i = 0;i < nb_ops; i++) {
            v = op_type[i];
            if (v & ((1 << 10) | (1 << 12) | (1 << 13) | (1 << 11) | (1 << 18))) {


                if (v == ((1 << 10) | (1 << 12) | (1 << 13)) ||
                    v == ((1 << 12) | (1 << 13))) {
                    if (ss == 0)
                        v = (1 << 10);
                    else if (ss == 1)
                        v = (1 << 12);
                    else
                        v = (1 << 13);
                }
                if (v & ((1 << 10) | (1 << 11))) {
                    if (ops[i].e.sym)
                        goto error_relocate;
                    g(ops[i].e.v);
                } else if (v & (1 << 12)) {
                    if (ops[i].e.sym) {
                    error_relocate:
                        error("cannot relocate");
                    }
                    gen_le16(ops[i].e.v);
                } else {
                    if (pa->instr_type & (0x01 | 0x0400)) {
                        if (is_short_jmp)
                            g(ops[i].e.v);
                        else
                            gen_disp32(&ops[i].e);
                    } else {
                        gen_expr32(&ops[i].e);
                    }
                }
            }
        }
    }
}






static inline int constraint_priority(const char *str)
{
    int priority, c, pr;


    priority = 0;
    for(;;) {
        c = *str;
        if (c == '\0')
            break;
        str++;
        switch(c) {
        case 'A':
            pr = 0;
            break;
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'S':
        case 'D':
            pr = 1;
            break;
        case 'q':
            pr = 2;
            break;
        case 'r':
            pr = 3;
            break;
        case 'N':
        case 'M':
        case 'I':
        case 'i':
        case 'm':
        case 'g':
            pr = 4;
            break;
        default:
            error("unknown constraint '%c'", c);
            pr = 0;
        }
        if (pr > priority)
            priority = pr;
    }
    return priority;
}

static const char *skip_constraint_modifiers(const char *p)
{
    while (*p == '=' || *p == '&' || *p == '+' || *p == '%')
        p++;
    return p;
}






static void asm_compute_constraints(ASMOperand *operands,
                                    int nb_operands, int nb_outputs,
                                    const uint8_t *clobber_regs,
                                    int *pout_reg)
{
    ASMOperand *op;
    int sorted_op[30];
    int i, j, k, p1, p2, tmp, reg, c, reg_mask;
    const char *str;
    uint8_t regs_allocated[8];


    for(i=0;i<nb_operands;i++) {
        op = &operands[i];
        op->input_index = -1;
        op->ref_index = -1;
        op->reg = -1;
        op->is_memory = 0;
        op->is_rw = 0;
    }


    for(i=0;i<nb_operands;i++) {
        op = &operands[i];
        str = op->constraint;
        str = skip_constraint_modifiers(str);
        if (isnum(*str) || *str == '[') {

            k = find_constraint(operands, nb_operands, str, ((void *)0));
            if ((unsigned)k >= i || i < nb_outputs)
                error("invalid reference in constraint %d ('%s')",
                      i, str);
            op->ref_index = k;
            if (operands[k].input_index >= 0)
                error("cannot reference twice the same operand");
            operands[k].input_index = i;
            op->priority = 5;
        } else {
            op->priority = constraint_priority(str);
        }
    }


    for(i=0;i<nb_operands;i++)
        sorted_op[i] = i;
    for(i=0;i<nb_operands - 1;i++) {
        for(j=i+1;j<nb_operands;j++) {
            p1 = operands[sorted_op[i]].priority;
            p2 = operands[sorted_op[j]].priority;
            if (p2 < p1) {
                tmp = sorted_op[i];
                sorted_op[i] = sorted_op[j];
                sorted_op[j] = tmp;
            }
        }
    }

    for(i = 0;i < 8; i++) {
        if (clobber_regs[i])
            regs_allocated[i] = 0x02 | 0x01;
        else
            regs_allocated[i] = 0;
    }

    regs_allocated[4] = 0x02 | 0x01;

    regs_allocated[5] = 0x02 | 0x01;


    for(i=0;i<nb_operands;i++) {
        j = sorted_op[i];
        op = &operands[j];
        str = op->constraint;

        if (op->ref_index >= 0)
            continue;

        if (op->input_index >= 0) {
            reg_mask = 0x02 | 0x01;
        } else if (j < nb_outputs) {
            reg_mask = 0x01;
        } else {
            reg_mask = 0x02;
        }
    try_next:
        c = *str++;
        switch(c) {
        case '=':
            goto try_next;
        case '+':
            op->is_rw = 1;

        case '&':
            if (j >= nb_outputs)
                error("'%c' modifier can only be applied to outputs", c);
            reg_mask = 0x02 | 0x01;
            goto try_next;
        case 'A':

            if ((regs_allocated[TREG_EAX] & reg_mask) ||
                (regs_allocated[TREG_EDX] & reg_mask))
                goto try_next;
            op->is_llong = 1;
            op->reg = TREG_EAX;
            regs_allocated[TREG_EAX] |= reg_mask;
            regs_allocated[TREG_EDX] |= reg_mask;
            break;
        case 'a':
            reg = TREG_EAX;
            goto alloc_reg;
        case 'b':
            reg = 3;
            goto alloc_reg;
        case 'c':
            reg = TREG_ECX;
            goto alloc_reg;
        case 'd':
            reg = TREG_EDX;
            goto alloc_reg;
        case 'S':
            reg = 6;
            goto alloc_reg;
        case 'D':
            reg = 7;
        alloc_reg:
            if ((regs_allocated[reg] & reg_mask))
                goto try_next;
            goto reg_found;
        case 'q':

            for(reg = 0; reg < 4; reg++) {
                if (!(regs_allocated[reg] & reg_mask))
                    goto reg_found;
            }
            goto try_next;
        case 'r':

            for(reg = 0; reg < 8; reg++) {
                if (!(regs_allocated[reg] & reg_mask))
                    goto reg_found;
            }
            goto try_next;
        reg_found:

            op->is_llong = 0;
            op->reg = reg;
            regs_allocated[reg] |= reg_mask;
            break;
        case 'i':
            if (!((op->vt->r & (0x00ff | 0x0100)) == 0x00f0))
                goto try_next;
            break;
        case 'I':
        case 'N':
        case 'M':
            if (!((op->vt->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0))
                goto try_next;
            break;
        case 'm':
        case 'g':
# 964 "./i386-asm.c"
            if (j < nb_outputs || c == 'm') {
                if ((op->vt->r & 0x00ff) == 0x00f1) {

                    for(reg = 0; reg < 8; reg++) {
                        if (!(regs_allocated[reg] & 0x02))
                            goto reg_found1;
                    }
                    goto try_next;
                reg_found1:

                    regs_allocated[reg] |= 0x02;
                    op->reg = reg;
                    op->is_memory = 1;
                }
            }
            break;
        default:
            error("asm constraint %d ('%s') could not be satisfied",
                  j, op->constraint);
            break;
        }

        if (op->input_index >= 0) {
            operands[op->input_index].reg = op->reg;
            operands[op->input_index].is_llong = op->is_llong;
        }
    }



    *pout_reg = -1;
    for(i=0;i<nb_operands;i++) {
        op = &operands[i];
        if (op->reg >= 0 &&
            (op->vt->r & 0x00ff) == 0x00f1 &&
            !op->is_memory) {
            for(reg = 0; reg < 8; reg++) {
                if (!(regs_allocated[reg] & 0x01))
                    goto reg_found2;
            }
            error("could not find free output register for reloading");
        reg_found2:
            *pout_reg = reg;
            break;
        }
    }
# 1026 "./i386-asm.c"
}

static void subst_asm_operand(CString *add_str,
                              SValue *sv, int modifier)
{
    int r, reg, size, val;
    char buf[64];

    r = sv->r;
    if ((r & 0x00ff) == 0x00f0) {
        if (!(r & 0x0100) && modifier != 'c' && modifier != 'n')
            cstr_ccat(add_str, '$');
        if (r & 0x0200) {
            cstr_cat(add_str, get_tok_str(sv->sym->v, ((void *)0)));
            if (sv->c.i != 0) {
                cstr_ccat(add_str, '+');
            } else {
                return;
            }
        }
        val = sv->c.i;
        if (modifier == 'n')
            val = -val;
        snprintf(buf, sizeof(buf), "%d", sv->c.i);
        cstr_cat(add_str, buf);
    } else if ((r & 0x00ff) == 0x00f2) {
        snprintf(buf, sizeof(buf), "%d(%%ebp)", sv->c.i);
        cstr_cat(add_str, buf);
    } else if (r & 0x0100) {
        reg = r & 0x00ff;
        if (reg >= 0x00f0)
            error("internal compiler error");
        snprintf(buf, sizeof(buf), "(%%%s)",
                 get_tok_str(TOK_ASM_eax + reg, ((void *)0)));
        cstr_cat(add_str, buf);
    } else {

        reg = r & 0x00ff;
        if (reg >= 0x00f0)
            error("internal compiler error");


        if ((sv->type.t & 0x000f) == 1)
            size = 1;
        else if ((sv->type.t & 0x000f) == 2)
            size = 2;
        else
            size = 4;
        if (size == 1 && reg >= 4)
            size = 4;

        if (modifier == 'b') {
            if (reg >= 4)
                error("cannot use byte register");
            size = 1;
        } else if (modifier == 'h') {
            if (reg >= 4)
                error("cannot use byte register");
            size = -1;
        } else if (modifier == 'w') {
            size = 2;
        }

        switch(size) {
        case -1:
            reg = TOK_ASM_ah + reg;
            break;
        case 1:
            reg = TOK_ASM_al + reg;
            break;
        case 2:
            reg = TOK_ASM_ax + reg;
            break;
        default:
            reg = TOK_ASM_eax + reg;
            break;
        }
        snprintf(buf, sizeof(buf), "%%%s", get_tok_str(reg, ((void *)0)));
        cstr_cat(add_str, buf);
    }
}


static void asm_gen_code(ASMOperand *operands, int nb_operands,
                         int nb_outputs, int is_output,
                         uint8_t *clobber_regs,
                         int out_reg)
{
    uint8_t regs_allocated[8];
    ASMOperand *op;
    int i, reg;
    static uint8_t reg_saved[3] = { 3, 6, 7 };


    memcpy(regs_allocated, clobber_regs, sizeof(regs_allocated));
    for(i = 0; i < nb_operands;i++) {
        op = &operands[i];
        if (op->reg >= 0)
            regs_allocated[op->reg] = 1;
    }
    if (!is_output) {

        for(i = 0; i < 3; i++) {
            reg = reg_saved[i];
            if (regs_allocated[reg])
                g(0x50 + reg);
        }


        for(i = 0; i < nb_operands; i++) {
            op = &operands[i];
            if (op->reg >= 0) {
                if ((op->vt->r & 0x00ff) == 0x00f1 &&
                    op->is_memory) {


                    SValue sv;
                    sv = *op->vt;
                    sv.r = (sv.r & ~0x00ff) | 0x00f2;
                    load(op->reg, &sv);
                } else if (i >= nb_outputs || op->is_rw) {

                    load(op->reg, op->vt);
                    if (op->is_llong) {
                        SValue sv;
                        sv = *op->vt;
                        sv.c.ul += 4;
                        load(TREG_EDX, &sv);
                    }
                }
            }
        }
    } else {

        for(i = 0 ; i < nb_outputs; i++) {
            op = &operands[i];
            if (op->reg >= 0) {
                if ((op->vt->r & 0x00ff) == 0x00f1) {
                    if (!op->is_memory) {
                        SValue sv;
                        sv = *op->vt;
                        sv.r = (sv.r & ~0x00ff) | 0x00f2;
                        load(out_reg, &sv);

                        sv.r = (sv.r & ~0x00ff) | out_reg;
                        store(op->reg, &sv);
                    }
                } else {
                    store(op->reg, op->vt);
                    if (op->is_llong) {
                        SValue sv;
                        sv = *op->vt;
                        sv.c.ul += 4;
                        store(TREG_EDX, &sv);
                    }
                }
            }
        }

        for(i = 3 - 1; i >= 0; i--) {
            reg = reg_saved[i];
            if (regs_allocated[reg])
                g(0x58 + reg);
        }
    }
}

static void asm_clobber(uint8_t *clobber_regs, const char *str)
{
    int reg;
    TokenSym *ts;

    if (!strcmp(str, "memory") ||
        !strcmp(str, "cc"))
        return;
    ts = tok_alloc(str, strlen(str));
    reg = ts->tok;
    if (reg >= TOK_ASM_eax && reg <= TOK_ASM_edi) {
        reg -= TOK_ASM_eax;
    } else if (reg >= TOK_ASM_ax && reg <= TOK_ASM_di) {
        reg -= TOK_ASM_ax;
    } else {
        error("invalid clobber register '%s'", str);
    }
    clobber_regs[reg] = 1;
}
# 1314 "libtcc.c" 2

# 1 "./tccasm.c" 1
# 21 "./tccasm.c"
static int asm_get_local_label_name(TCCState *s1, unsigned int n)
{
    char buf[64];
    TokenSym *ts;

    snprintf(buf, sizeof(buf), "L..%u", n);
    ts = tok_alloc(buf, strlen(buf));
    return ts->tok;
}

static void asm_expr(TCCState *s1, ExprValue *pe);




static void asm_expr_unary(TCCState *s1, ExprValue *pe)
{
    Sym *sym;
    int op, n, label;
    const char *p;

    switch(tok) {
    case 0xce:
        p = tokc.cstr->data;
        n = strtoul(p, (char **)&p, 0);
        if (*p == 'b' || *p == 'f') {

            label = asm_get_local_label_name(s1, n);
            sym = label_find(label);
            if (*p == 'b') {

                if (sym && sym->r == 0)
                    sym = sym->prev_tok;
                if (!sym)
                    error("local label '%d' not found backward", n);
            } else {

                if (!sym || sym->r) {

                    sym = label_push(&s1->asm_labels, label, 0);
                    sym->type.t = 0x00000100 | 3;
                }
            }
            pe->v = 0;
            pe->sym = sym;
        } else if (*p == '\0') {
            pe->v = n;
            pe->sym = ((void *)0);
        } else {
            error("invalid number syntax");
        }
        next();
        break;
    case '+':
        next();
        asm_expr_unary(s1, pe);
        break;
    case '-':
    case '~':
        op = tok;
        next();
        asm_expr_unary(s1, pe);
        if (pe->sym)
            error("invalid operation with label");
        if (op == '-')
            pe->v = -pe->v;
        else
            pe->v = ~pe->v;
        break;
    case 0xb4:
    case 0xb7:
 pe->v = tokc.i;
 pe->sym = ((void *)0);
 next();
 break;
    case '(':
        next();
        asm_expr(s1, pe);
        skip(')');
        break;
    default:
        if (tok >= 256) {

            sym = label_find(tok);
            if (!sym) {
                sym = label_push(&s1->asm_labels, tok, 0);

                sym->type.t = 3;
            }
            if (sym->r == 0xfff1) {

                pe->v = (long)sym->next;
                pe->sym = ((void *)0);
            } else {
                pe->v = 0;
                pe->sym = sym;
            }
            next();
        } else {
            error("bad expression syntax [%s]", get_tok_str(tok, &tokc));
        }
        break;
    }
}

static void asm_expr_prod(TCCState *s1, ExprValue *pe)
{
    int op;
    ExprValue e2;

    asm_expr_unary(s1, pe);
    for(;;) {
        op = tok;
        if (op != '*' && op != '/' && op != '%' &&
            op != 0x01 && op != 0x02)
            break;
        next();
        asm_expr_unary(s1, &e2);
        if (pe->sym || e2.sym)
            error("invalid operation with label");
        switch(op) {
        case '*':
            pe->v *= e2.v;
            break;
        case '/':
            if (e2.v == 0) {
            div_error:
                error("division by zero");
            }
            pe->v /= e2.v;
            break;
        case '%':
            if (e2.v == 0)
                goto div_error;
            pe->v %= e2.v;
            break;
        case 0x01:
            pe->v <<= e2.v;
            break;
        default:
        case 0x02:
            pe->v >>= e2.v;
            break;
        }
    }
}

static void asm_expr_logic(TCCState *s1, ExprValue *pe)
{
    int op;
    ExprValue e2;

    asm_expr_prod(s1, pe);
    for(;;) {
        op = tok;
        if (op != '&' && op != '|' && op != '^')
            break;
        next();
        asm_expr_prod(s1, &e2);
        if (pe->sym || e2.sym)
            error("invalid operation with label");
        switch(op) {
        case '&':
            pe->v &= e2.v;
            break;
        case '|':
            pe->v |= e2.v;
            break;
        default:
        case '^':
            pe->v ^= e2.v;
            break;
        }
    }
}

static inline void asm_expr_sum(TCCState *s1, ExprValue *pe)
{
    int op;
    ExprValue e2;

    asm_expr_logic(s1, pe);
    for(;;) {
        op = tok;
        if (op != '+' && op != '-')
            break;
        next();
        asm_expr_logic(s1, &e2);
        if (op == '+') {
            if (pe->sym != ((void *)0) && e2.sym != ((void *)0))
                goto cannot_relocate;
            pe->v += e2.v;
            if (pe->sym == ((void *)0) && e2.sym != ((void *)0))
                pe->sym = e2.sym;
        } else {
            pe->v -= e2.v;


            if (!pe->sym && !e2.sym) {

            } else if (pe->sym && !e2.sym) {

            } else if (pe->sym && e2.sym) {
                if (pe->sym == e2.sym) {

                } else if (pe->sym->r == e2.sym->r && pe->sym->r != 0) {

                    pe->v += (long)pe->sym->next - (long)e2.sym->next;
                } else {
                    goto cannot_relocate;
                }
                pe->sym = ((void *)0);
            } else {
            cannot_relocate:
                error("invalid operation with label");
            }
        }
    }
}

static void asm_expr(TCCState *s1, ExprValue *pe)
{
    asm_expr_sum(s1, pe);
}

static int asm_int_expr(TCCState *s1)
{
    ExprValue e;
    asm_expr(s1, &e);
    if (e.sym)
        expect("constant");
    return e.v;
}



static void asm_new_label1(TCCState *s1, int label, int is_local,
                           int sh_num, int value)
{
    Sym *sym;

    sym = label_find(label);
    if (sym) {
        if (sym->r) {

            if (!is_local) {
                error("assembler label '%s' already defined",
                      get_tok_str(label, ((void *)0)));
            } else {

                goto new_label;
            }
        }
    } else {
    new_label:
        sym = label_push(&s1->asm_labels, label, 0);
        sym->type.t = 0x00000100 | 3;
    }
    sym->r = sh_num;
    sym->next = (void *)value;
}

static void asm_new_label(TCCState *s1, int label, int is_local)
{
    asm_new_label1(s1, label, is_local, cur_text_section->sh_num, ind);
}

static void asm_free_labels(TCCState *st)
{
    Sym *s, *s1;
    Section *sec;

    for(s = st->asm_labels; s != ((void *)0); s = s1) {
        s1 = s->prev;

        if (s->r) {
            if (s->r == 0xfff1)
                sec = ((void *)1);
            else
                sec = st->sections[s->r];
            put_extern_sym2(s, sec, (long)s->next, 0, 0);
        }

        table_ident[s->v - 256]->sym_label = ((void *)0);
        sym_free(s);
    }
    st->asm_labels = ((void *)0);
}

static void use_section1(TCCState *s1, Section *sec)
{
    cur_text_section->data_offset = ind;
    cur_text_section = sec;
    ind = cur_text_section->data_offset;
}

static void use_section(TCCState *s1, const char *name)
{
    Section *sec;
    sec = find_section(s1, name);
    use_section1(s1, sec);
}

static void asm_parse_directive(TCCState *s1)
{
    int n, offset, v, size, tok1;
    Section *sec;
    uint8_t *ptr;


    next();
    sec = cur_text_section;
    switch(tok) {
    case TOK_ASM_align:
    case TOK_ASM_skip:
    case TOK_ASM_space:
        tok1 = tok;
        next();
        n = asm_int_expr(s1);
        if (tok1 == TOK_ASM_align) {
            if (n < 0 || (n & (n-1)) != 0)
                error("alignment must be a positive power of two");
            offset = (ind + n - 1) & -n;
            size = offset - ind;

            if (sec->sh_addralign < n)
                sec->sh_addralign = n;
        } else {
            size = n;
        }
        v = 0;
        if (tok == ',') {
            next();
            v = asm_int_expr(s1);
        }
    zero_pad:
        if (sec->sh_type != 8) {
            sec->data_offset = ind;
            ptr = section_ptr_add(sec, size);
            memset(ptr, v, size);
        }
        ind += size;
        break;
    case TOK_ASM_quad:
        next();
        for(;;) {
            uint64_t vl;
            const char *p;

            p = tokc.cstr->data;
            if (tok != 0xce) {
            error_constant:
                error("64 bit constant");
            }
            vl = strtoll(p, (char **)&p, 0);
            if (*p != '\0')
                goto error_constant;
            next();
            if (sec->sh_type != 8) {

                gen_le32(vl);
                gen_le32(vl >> 32);
            } else {
                ind += 8;
            }
            if (tok != ',')
                break;
            next();
        }
        break;
    case TOK_ASM_byte:
        size = 1;
        goto asm_data;
    case TOK_ASM_word:
    case TOK_SHORT:
        size = 2;
        goto asm_data;
    case TOK_LONG:
    case TOK_INT:
        size = 4;
    asm_data:
        next();
        for(;;) {
            ExprValue e;
            asm_expr(s1, &e);
            if (sec->sh_type != 8) {
                if (size == 4) {
                    gen_expr32(&e);
                } else {
                    if (e.sym)
                        expect("constant");
                    if (size == 1)
                        g(e.v);
                    else
                        gen_le16(e.v);
                }
            } else {
                ind += size;
            }
            if (tok != ',')
                break;
            next();
        }
        break;
    case TOK_ASM_fill:
        {
            int repeat, size, val, i, j;
            uint8_t repeat_buf[8];
            next();
            repeat = asm_int_expr(s1);
            if (repeat < 0) {
                error("repeat < 0; .fill ignored");
                break;
            }
            size = 1;
            val = 0;
            if (tok == ',') {
                next();
                size = asm_int_expr(s1);
                if (size < 0) {
                    error("size < 0; .fill ignored");
                    break;
                }
                if (size > 8)
                    size = 8;
                if (tok == ',') {
                    next();
                    val = asm_int_expr(s1);
                }
            }

            repeat_buf[0] = val;
            repeat_buf[1] = val >> 8;
            repeat_buf[2] = val >> 16;
            repeat_buf[3] = val >> 24;
            repeat_buf[4] = 0;
            repeat_buf[5] = 0;
            repeat_buf[6] = 0;
            repeat_buf[7] = 0;
            for(i = 0; i < repeat; i++) {
                for(j = 0; j < size; j++) {
                    g(repeat_buf[j]);
                }
            }
        }
        break;
    case TOK_ASM_org:
        {
            unsigned long n;
            next();

            n = asm_int_expr(s1);
            if (n < ind)
                error("attempt to .org backwards");
            v = 0;
            size = n - ind;
            goto zero_pad;
        }
        break;
    case TOK_ASM_globl:
    case TOK_ASM_global:
 {
            Sym *sym;

            next();
            sym = label_find(tok);
            if (!sym) {
                sym = label_push(&s1->asm_labels, tok, 0);
                sym->type.t = 3;
            }
            sym->type.t &= ~0x00000100;
            next();
 }
 break;
    case TOK_ASM_string:
    case TOK_ASM_ascii:
    case TOK_ASM_asciz:
        {
            const uint8_t *p;
            int i, size, t;

            t = tok;
            next();
            for(;;) {
                if (tok != 0xb5)
                    expect("string constant");
                p = tokc.cstr->data;
                size = tokc.cstr->size;
                if (t == TOK_ASM_ascii && size > 0)
                    size--;
                for(i = 0; i < size; i++)
                    g(p[i]);
                next();
                if (tok == ',') {
                    next();
                } else if (tok != 0xb5) {
                    break;
                }
            }
 }
 break;
    case TOK_ASM_text:
    case TOK_ASM_data:
    case TOK_ASM_bss:
 {
            char sname[64];
            tok1 = tok;
            n = 0;
            next();
            if (tok != ';' && tok != 10) {
  n = asm_int_expr(s1);
  next();
            }
            sprintf(sname, (n?".%s%d":".%s"), get_tok_str(tok1, ((void *)0)), n);
            use_section(s1, sname);
 }
 break;
    case TOK_SECTION1:
        {
            char sname[256];


            next();
            sname[0] = '\0';
            while (tok != ';' && tok != 10 && tok != ',') {
                if (tok == 0xb5)
                    pstrcat(sname, sizeof(sname), tokc.cstr->data);
                else
                    pstrcat(sname, sizeof(sname), get_tok_str(tok, ((void *)0)));
                next();
            }
            if (tok == ',') {

                next();
                if (tok != 0xb5)
                    expect("string constant");
                next();
            }
            last_text_section = cur_text_section;
            use_section(s1, sname);
        }
        break;
    case TOK_ASM_previous:
        {
            Section *sec;
            next();
            if (!last_text_section)
                error("no previous section referenced");
            sec = cur_text_section;
            use_section1(s1, last_text_section);
            last_text_section = sec;
        }
        break;
    default:
        error("unknown assembler directive '.%s'", get_tok_str(tok, ((void *)0)));
        break;
    }
}



static int tcc_assemble_internal(TCCState *s1, int do_preprocess)
{
    int opcode;
# 620 "./tccasm.c"
    ch = file->buf_ptr[0];
    tok_flags = 0x0001 | 0x0002;
    parse_flags = 0x0008;
    if (do_preprocess)
        parse_flags |= 0x0001;
    next();
    for(;;) {
        if (tok == (-1))
            break;
        parse_flags |= 0x0004;
    redo:
        if (tok == '#') {

            while (tok != 10)
                next();
        } else if (tok == '.') {
            asm_parse_directive(s1);
        } else if (tok == 0xce) {
            const char *p;
            int n;
            p = tokc.cstr->data;
            n = strtoul(p, (char **)&p, 10);
            if (*p != '\0')
                expect("':'");

            asm_new_label(s1, asm_get_local_label_name(s1, n), 1);
            next();
            skip(':');
            goto redo;
        } else if (tok >= 256) {

            opcode = tok;
            next();
            if (tok == ':') {

                asm_new_label(s1, opcode, 0);
                next();
                goto redo;
            } else if (tok == '=') {
                int n;
                next();
                n = asm_int_expr(s1);
                asm_new_label1(s1, opcode, 0, 0xfff1, n);
                goto redo;
            } else {
                asm_opcode(s1, opcode);
            }
        }

        if (tok != ';' && tok != 10){
            expect("end of line");
        }
        parse_flags &= ~0x0004;
        next();
    }

    asm_free_labels(s1);

    return 0;
}


static int tcc_assemble(TCCState *s1, int do_preprocess)
{
    Sym *define_start;
    int ret;

    preprocess_init(s1);


    cur_text_section = text_section;
    ind = cur_text_section->data_offset;

    define_start = define_stack;

    ret = tcc_assemble_internal(s1, do_preprocess);

    cur_text_section->data_offset = ind;

    free_defines(define_start);

    return ret;
}







static void tcc_assemble_inline(TCCState *s1, char *str, int len)
{
    BufferedFile *bf, *saved_file;
    int saved_parse_flags, *saved_macro_ptr;

    bf = tcc_malloc(sizeof(BufferedFile));
    memset(bf, 0, sizeof(BufferedFile));
    bf->fd = -1;
    bf->buf_ptr = str;
    bf->buf_end = str + len;
    str[len] = '\\';


    pstrcpy(bf->filename, sizeof(bf->filename), file->filename);
    bf->line_num = file->line_num;
    saved_file = file;
    file = bf;
    saved_parse_flags = parse_flags;
    saved_macro_ptr = macro_ptr;
    macro_ptr = ((void *)0);

    tcc_assemble_internal(s1, 0);

    parse_flags = saved_parse_flags;
    macro_ptr = saved_macro_ptr;
    file = saved_file;
    tcc_free(bf);
}




static int find_constraint(ASMOperand *operands, int nb_operands,
                           const char *name, const char **pp)
{
    int index;
    TokenSym *ts;
    const char *p;

    if (isnum(*name)) {
        index = 0;
        while (isnum(*name)) {
            index = (index * 10) + (*name) - '0';
            name++;
        }
        if ((unsigned)index >= nb_operands)
            index = -1;
    } else if (*name == '[') {
        name++;
        p = strchr(name, ']');
        if (p) {
            ts = tok_alloc(name, p - name);
            for(index = 0; index < nb_operands; index++) {
                if (operands[index].id == ts->tok)
                    goto found;
            }
            index = -1;
        found:
            name = p + 1;
        } else {
            index = -1;
        }
    } else {
        index = -1;
    }
    if (pp)
        *pp = name;
    return index;
}

static void subst_asm_operands(ASMOperand *operands, int nb_operands,
                               int nb_outputs,
                               CString *out_str, CString *in_str)
{
    int c, index, modifier;
    const char *str;
    ASMOperand *op;
    SValue sv;

    cstr_new(out_str);
    str = in_str->data;
    for(;;) {
        c = *str++;
        if (c == '%') {
            if (*str == '%') {
                str++;
                goto add_char;
            }
            modifier = 0;
            if (*str == 'c' || *str == 'n' ||
                *str == 'b' || *str == 'w' || *str == 'h')
                modifier = *str++;
            index = find_constraint(operands, nb_operands, str, &str);
            if (index < 0)
                error("invalid operand reference after %%");
            op = &operands[index];
            sv = *op->vt;
            if (op->reg >= 0) {
                sv.r = op->reg;
                if ((op->vt->r & 0x00ff) == 0x00f1 && op->is_memory)
                    sv.r |= 0x0100;
            }
            subst_asm_operand(out_str, &sv, modifier);
        } else {
        add_char:
            cstr_ccat(out_str, c);
            if (c == '\0')
                break;
        }
    }
}


static void parse_asm_operands(ASMOperand *operands, int *nb_operands_ptr,
                               int is_output)
{
    ASMOperand *op;
    int nb_operands;

    if (tok != ':') {
        nb_operands = *nb_operands_ptr;
        for(;;) {
            if (nb_operands >= 30)
                error("too many asm operands");
            op = &operands[nb_operands++];
            op->id = 0;
            if (tok == '[') {
                next();
                if (tok < 256)
                    expect("identifier");
                op->id = tok;
                next();
                skip(']');
            }
            if (tok != 0xb5)
                expect("string constant");
            op->constraint = tcc_malloc(tokc.cstr->size);
            strcpy(op->constraint, tokc.cstr->data);
            next();
            skip('(');
            gexpr();
            if (is_output) {
                test_lvalue();
            } else {




                if ((vtop->r & 0x0100) &&
                    ((vtop->r & 0x00ff) == 0x00f1 ||
                     (vtop->r & 0x00ff) < 0x00f0) &&
                    !strchr(op->constraint, 'm')) {
                    gv(0x0001);
                }
            }
            op->vt = vtop;
            skip(')');
            if (tok == ',') {
                next();
            } else {
                break;
            }
        }
        *nb_operands_ptr = nb_operands;
    }
}

static void parse_asm_str(CString *astr)
{
    skip('(');

    if (tok != 0xb5)
        expect("string constant");
    cstr_new(astr);
    while (tok == 0xb5) {

        cstr_cat(astr, tokc.cstr->data);
        next();
    }
    cstr_ccat(astr, '\0');
}


static void asm_instr(void)
{
    CString astr, astr1;
    ASMOperand operands[30];
    int nb_inputs, nb_outputs, nb_operands, i, must_subst, out_reg;
    uint8_t clobber_regs[8];

    next();


    if (tok == TOK_VOLATILE1 || tok == TOK_VOLATILE2 || tok == TOK_VOLATILE3) {
        next();
    }
    parse_asm_str(&astr);
    nb_operands = 0;
    nb_outputs = 0;
    must_subst = 0;
    memset(clobber_regs, 0, sizeof(clobber_regs));
    if (tok == ':') {
        next();
        must_subst = 1;

        parse_asm_operands(operands, &nb_operands, 1);
        nb_outputs = nb_operands;
        if (tok == ':') {
            next();
            if (tok != ')') {

                parse_asm_operands(operands, &nb_operands, 0);
                if (tok == ':') {


                    next();
                    for(;;) {
                        if (tok != 0xb5)
                            expect("string constant");
                        asm_clobber(clobber_regs, tokc.cstr->data);
                        next();
                        if (tok == ',') {
                            next();
                        } else {
                            break;
                        }
                    }
                }
            }
        }
    }
    skip(')');


    if (tok != ';')
        expect("';'");
    nb_inputs = nb_operands - nb_outputs;


    save_regs(0);


    asm_compute_constraints(operands, nb_operands, nb_outputs,
                            clobber_regs, &out_reg);






    if (must_subst) {
        subst_asm_operands(operands, nb_operands, nb_outputs, &astr1, &astr);
        cstr_free(&astr);
    } else {
        astr1 = astr;
    }





    asm_gen_code(operands, nb_operands, nb_outputs, 0,
                 clobber_regs, out_reg);


    tcc_assemble_inline(tcc_state, astr1.data, astr1.size - 1);


    next();


    asm_gen_code(operands, nb_operands, nb_outputs, 1,
                 clobber_regs, out_reg);


    for(i=0;i<nb_operands;i++) {
        ASMOperand *op;
        op = &operands[i];
        tcc_free(op->constraint);
        vpop();
    }
    cstr_free(&astr1);
}

static void asm_global_instr(void)
{
    CString astr;

    next();
    parse_asm_str(&astr);
    skip(')');


    if (tok != ';')
        expect("';'");




    cur_text_section = text_section;
    ind = cur_text_section->data_offset;


    tcc_assemble_inline(tcc_state, astr.data, astr.size - 1);

    cur_text_section->data_offset = ind;


    next();

    cstr_free(&astr);
}
# 1316 "libtcc.c" 2
# 1328 "libtcc.c"
# 1 "./tccelf.c" 1
# 36 "./tccelf.c"
static int put_elf_str(Section *s, const char *sym)
{
    int offset, len;
    char *ptr;

    len = strlen(sym) + 1;
    offset = s->data_offset;
    ptr = section_ptr_add(s, len);
    memcpy(ptr, sym, len);
    return offset;
}


static unsigned long elf_hash(const unsigned char *name)
{
    unsigned long h = 0, g;

    while (*name) {
        h = (h << 4) + *name++;
        g = h & 0xf0000000;
        if (g)
            h ^= g >> 24;
        h &= ~g;
    }
    return h;
}



static void rebuild_hash(Section *s, unsigned int nb_buckets)
{
    Elf32_Sym *sym;
    int *ptr, *hash, nb_syms, sym_index, h;
    char *strtab;

    strtab = s->link->data;
    nb_syms = s->data_offset / sizeof(Elf32_Sym);

    s->hash->data_offset = 0;
    ptr = section_ptr_add(s->hash, (2 + nb_buckets + nb_syms) * sizeof(int));
    ptr[0] = nb_buckets;
    ptr[1] = nb_syms;
    ptr += 2;
    hash = ptr;
    memset(hash, 0, (nb_buckets + 1) * sizeof(int));
    ptr += nb_buckets + 1;

    sym = (Elf32_Sym *)s->data + 1;
    for(sym_index = 1; sym_index < nb_syms; sym_index++) {
        if ((((unsigned char) (sym->st_info)) >> 4) != 0) {
            h = elf_hash(strtab + sym->st_name) % nb_buckets;
            *ptr = hash[h];
            hash[h] = sym_index;
        } else {
            *ptr = 0;
        }
        ptr++;
        sym++;
    }
}


static int put_elf_sym(Section *s,
                       unsigned long value, unsigned long size,
                       int info, int other, int shndx, const char *name)
{
    int name_offset, sym_index;
    int nbuckets, h;
    Elf32_Sym *sym;
    Section *hs;

    sym = section_ptr_add(s, sizeof(Elf32_Sym));
    if (name)
        name_offset = put_elf_str(s->link, name);
    else
        name_offset = 0;

    sym->st_name = name_offset;
    sym->st_value = value;
    sym->st_size = size;
    sym->st_info = info;
    sym->st_other = other;
    sym->st_shndx = shndx;
    sym_index = sym - (Elf32_Sym *)s->data;
    hs = s->hash;
    if (hs) {
        int *ptr, *base;
        ptr = section_ptr_add(hs, sizeof(int));
        base = (int *)hs->data;

        if ((((unsigned char) (info)) >> 4) != 0) {

            nbuckets = base[0];
            h = elf_hash(name) % nbuckets;
            *ptr = base[2 + h];
            base[2 + h] = sym_index;
            base[1]++;

            hs->nb_hashed_syms++;
            if (hs->nb_hashed_syms > 2 * nbuckets) {
                rebuild_hash(s, 2 * nbuckets);
            }
        } else {
            *ptr = 0;
            base[1]++;
        }
    }
    return sym_index;
}



static int find_elf_sym(Section *s, const char *name)
{
    Elf32_Sym *sym;
    Section *hs;
    int nbuckets, sym_index, h;
    const char *name1;

    hs = s->hash;
    if (!hs)
        return 0;
    nbuckets = ((int *)hs->data)[0];
    h = elf_hash(name) % nbuckets;
    sym_index = ((int *)hs->data)[2 + h];
    while (sym_index != 0) {
        sym = &((Elf32_Sym *)s->data)[sym_index];
        name1 = s->link->data + sym->st_name;
        if (!strcmp(name, name1))
            return sym_index;
        sym_index = ((int *)hs->data)[2 + nbuckets + sym_index];
    }
    return 0;
}


void *tcc_get_symbol(TCCState *s, const char *name)
{
    int sym_index;
    Elf32_Sym *sym;
    sym_index = find_elf_sym(symtab_section, name);
    if (!sym_index)
        return ((void *)0);
    sym = &((Elf32_Sym *)symtab_section->data)[sym_index];
    return (void*)(long)sym->st_value;
}

void *tcc_get_symbol_err(TCCState *s, const char *name)
{
    void *sym;
    sym = tcc_get_symbol(s, name);
    if (!sym)
        error("%s not defined", name);
    return sym;
}



static int add_elf_sym(Section *s, unsigned long value, unsigned long size,
                       int info, int other, int sh_num, const char *name)
{
    Elf32_Sym *esym;
    int sym_bind, sym_index, sym_type, esym_bind;
    unsigned char sym_vis, esym_vis, new_vis;

    sym_bind = (((unsigned char) (info)) >> 4);
    sym_type = ((info) & 0xf);
    sym_vis = ((other) & 0x03);

    if (sym_bind != 0) {

        sym_index = find_elf_sym(s, name);
        if (!sym_index)
            goto do_def;
        esym = &((Elf32_Sym *)s->data)[sym_index];
        if (esym->st_shndx != 0) {
            esym_bind = (((unsigned char) (esym->st_info)) >> 4);


            esym_vis = ((esym->st_other) & 0x03);
            if (esym_vis == 0) {
                new_vis = sym_vis;
            } else if (sym_vis == 0) {
                new_vis = esym_vis;
            } else {
                new_vis = (esym_vis < sym_vis) ? esym_vis : sym_vis;
            }
            esym->st_other = (esym->st_other & ~((-1) & 0x03))
                             | new_vis;
            other = esym->st_other;
            if (sh_num == 0) {


            } else if (sym_bind == 1 && esym_bind == 2) {

                goto do_patch;
            } else if (sym_bind == 2 && esym_bind == 1) {

            } else if (sym_vis == 2 || sym_vis == 1) {

            } else if (esym->st_shndx == 0xfff2 && sh_num < 0xff00) {


                goto do_patch;
            } else if (s == tcc_state->dynsymtab_section) {

            } else {

                printf("new_bind=%x new_shndx=%x new_vis=%x old_bind=%x old_shndx=%x old_vis=%x\n",
                       sym_bind, sh_num, new_vis, esym_bind, esym->st_shndx, esym_vis);

                error_noabort("'%s' defined twice", name);
            }
        } else {
        do_patch:
            esym->st_info = (((sym_bind) << 4) + ((sym_type) & 0xf));
            esym->st_shndx = sh_num;
            esym->st_value = value;
            esym->st_size = size;
            esym->st_other = other;
        }
    } else {
    do_def:
        sym_index = put_elf_sym(s, value, size,
                                (((sym_bind) << 4) + ((sym_type) & 0xf)), other,
                                sh_num, name);
    }
    return sym_index;
}


static void put_elf_reloc(Section *symtab, Section *s, unsigned long offset,
                          int type, int symbol)
{
    char buf[256];
    Section *sr;
    Elf32_Rel *rel;

    sr = s->reloc;
    if (!sr) {

        snprintf(buf, sizeof(buf), ".rel%s", s->name);


        sr = new_section(tcc_state, buf, 9, symtab->sh_flags);
        sr->sh_entsize = sizeof(Elf32_Rel);
        sr->link = symtab;
        sr->sh_info = s->sh_num;
        s->reloc = sr;
    }
    rel = section_ptr_add(sr, sizeof(Elf32_Rel));
    rel->r_offset = offset;
    rel->r_info = (((symbol) << 8) + ((type) & 0xff));



}



typedef struct {
    unsigned int n_strx;
    unsigned char n_type;
    unsigned char n_other;
    unsigned short n_desc;
    unsigned int n_value;
} Stab_Sym;

static void put_stabs(const char *str, int type, int other, int desc,
                      unsigned long value)
{
    Stab_Sym *sym;

    sym = section_ptr_add(stab_section, sizeof(Stab_Sym));
    if (str) {
        sym->n_strx = put_elf_str(stabstr_section, str);
    } else {
        sym->n_strx = 0;
    }
    sym->n_type = type;
    sym->n_other = other;
    sym->n_desc = desc;
    sym->n_value = value;
}

static void put_stabs_r(const char *str, int type, int other, int desc,
                        unsigned long value, Section *sec, int sym_index)
{
    put_stabs(str, type, other, desc, value);
    put_elf_reloc(symtab_section, stab_section,
                  stab_section->data_offset - sizeof(unsigned int),
                  1, sym_index);
}

static void put_stabn(int type, int other, int desc, int value)
{
    put_stabs(((void *)0), type, other, desc, value);
}

static void put_stabd(int type, int other, int desc)
{
    put_stabs(((void *)0), type, other, desc, 0);
}





static void sort_syms(TCCState *s1, Section *s)
{
    int *old_to_new_syms;
    Elf32_Sym *new_syms;
    int nb_syms, i;
    Elf32_Sym *p, *q;
    Elf32_Rel *rel, *rel_end;
    Section *sr;
    int type, sym_index;

    nb_syms = s->data_offset / sizeof(Elf32_Sym);
    new_syms = tcc_malloc(nb_syms * sizeof(Elf32_Sym));
    old_to_new_syms = tcc_malloc(nb_syms * sizeof(int));


    p = (Elf32_Sym *)s->data;
    q = new_syms;
    for(i = 0; i < nb_syms; i++) {
        if ((((unsigned char) (p->st_info)) >> 4) == 0) {
            old_to_new_syms[i] = q - new_syms;
            *q++ = *p;
        }
        p++;
    }

    s->sh_info = q - new_syms;


    p = (Elf32_Sym *)s->data;
    for(i = 0; i < nb_syms; i++) {
        if ((((unsigned char) (p->st_info)) >> 4) != 0) {
            old_to_new_syms[i] = q - new_syms;
            *q++ = *p;
        }
        p++;
    }


    memcpy(s->data, new_syms, nb_syms * sizeof(Elf32_Sym));
    tcc_free(new_syms);


    for(i = 1; i < s1->nb_sections; i++) {
        sr = s1->sections[i];
        if (sr->sh_type == 9 && sr->link == s) {
            rel_end = (Elf32_Rel *)(sr->data + sr->data_offset);
            for(rel = (Elf32_Rel *)sr->data;
                rel < rel_end;
                rel++) {
                sym_index = ((rel->r_info) >> 8);
                type = ((rel->r_info) & 0xff);
                sym_index = old_to_new_syms[sym_index];
                rel->r_info = (((sym_index) << 8) + ((type) & 0xff));
            }
        }
    }

    tcc_free(old_to_new_syms);
}


static void relocate_common_syms(void)
{
    Elf32_Sym *sym, *sym_end;
    unsigned long offset, align;

    sym_end = (Elf32_Sym *)(symtab_section->data + symtab_section->data_offset);
    for(sym = (Elf32_Sym *)symtab_section->data + 1;
        sym < sym_end;
        sym++) {
        if (sym->st_shndx == 0xfff2) {

            align = sym->st_value;
            offset = bss_section->data_offset;
            offset = (offset + align - 1) & -align;
            sym->st_value = offset;
            sym->st_shndx = bss_section->sh_num;
            offset += sym->st_size;
            bss_section->data_offset = offset;
        }
    }
}



static void relocate_syms(TCCState *s1, int do_resolve)
{
    Elf32_Sym *sym, *esym, *sym_end;
    int sym_bind, sh_num, sym_index;
    const char *name;
    unsigned long addr;

    sym_end = (Elf32_Sym *)(symtab_section->data + symtab_section->data_offset);
    for(sym = (Elf32_Sym *)symtab_section->data + 1;
        sym < sym_end;
        sym++) {
        sh_num = sym->st_shndx;
        if (sh_num == 0) {
            name = strtab_section->data + sym->st_name;
            if (do_resolve) {
                name = symtab_section->link->data + sym->st_name;
                addr = (unsigned long)resolve_sym(s1, name, ((sym->st_info) & 0xf));
                if (addr) {
                    sym->st_value = addr;
                    goto found;
                }
            } else if (s1->dynsym) {

                sym_index = find_elf_sym(s1->dynsym, name);
                if (sym_index) {
                    esym = &((Elf32_Sym *)s1->dynsym->data)[sym_index];
                    sym->st_value = esym->st_value;
                    goto found;
                }
            }


            if (!strcmp(name, "_fp_hw"))
                goto found;


            sym_bind = (((unsigned char) (sym->st_info)) >> 4);
            if (sym_bind == 2) {
                sym->st_value = 0;
            } else {
                error_noabort("undefined symbol '%s'", name);
            }
        } else if (sh_num < 0xff00) {

            sym->st_value += s1->sections[sym->st_shndx]->sh_addr;
        }
    found: ;
    }
}
# 504 "./tccelf.c"
static void relocate_section(TCCState *s1, Section *s)
{
    Section *sr;
    Elf32_Rel *rel, *rel_end, *qrel;
    Elf32_Sym *sym;
    int type, sym_index;
    unsigned char *ptr;
    unsigned long val, addr;

    int esym_index;


    sr = s->reloc;
    rel_end = (Elf32_Rel *)(sr->data + sr->data_offset);
    qrel = (Elf32_Rel *)sr->data;
    for(rel = qrel;
        rel < rel_end;
        rel++) {
        ptr = s->data + rel->r_offset;

        sym_index = ((rel->r_info) >> 8);
        sym = &((Elf32_Sym *)symtab_section->data)[sym_index];
        val = sym->st_value;




        type = ((rel->r_info) & 0xff);
        addr = s->sh_addr + rel->r_offset;


        switch(type) {

        case 1:
            if (s1->output_type == 2) {
                esym_index = s1->symtab_to_dynsym[sym_index];
                qrel->r_offset = rel->r_offset;
                if (esym_index) {
                    qrel->r_info = (((esym_index) << 8) + ((1) & 0xff));
                    qrel++;
                    break;
                } else {
                    qrel->r_info = (((0) << 8) + ((8) & 0xff));
                    qrel++;
                }
            }
            *(int *)ptr += val;
            break;
        case 2:
            if (s1->output_type == 2) {

                esym_index = s1->symtab_to_dynsym[sym_index];
                if (esym_index) {
                    qrel->r_offset = rel->r_offset;
                    qrel->r_info = (((esym_index) << 8) + ((2) & 0xff));
                    qrel++;
                    break;
                }
            }
            *(int *)ptr += val - addr;
            break;
        case 4:
            *(int *)ptr += val - addr;
            break;
        case 6:
        case 7:
            *(int *)ptr = val;
            break;
        case 10:
            *(int *)ptr += s1->got->sh_addr - addr;
            break;
        case 9:
            *(int *)ptr += val - s1->got->sh_addr;
            break;
        case 3:

            *(int *)ptr += s1->got_offsets[sym_index];
            break;
# 730 "./tccelf.c"
        }
    }

    if (sr->sh_flags & (1 << 1))
        sr->link = s1->dynsym;
}


static void relocate_rel(TCCState *s1, Section *sr)
{
    Section *s;
    Elf32_Rel *rel, *rel_end;

    s = s1->sections[sr->sh_info];
    rel_end = (Elf32_Rel *)(sr->data + sr->data_offset);
    for(rel = (Elf32_Rel *)sr->data;
        rel < rel_end;
        rel++) {
        rel->r_offset += s->sh_addr;
    }
}



static int prepare_dynamic_rel(TCCState *s1, Section *sr)
{
    Elf32_Rel *rel, *rel_end;
    int sym_index, esym_index, type, count;

    count = 0;
    rel_end = (Elf32_Rel *)(sr->data + sr->data_offset);
    for(rel = (Elf32_Rel *)sr->data; rel < rel_end; rel++) {
        sym_index = ((rel->r_info) >> 8);
        type = ((rel->r_info) & 0xff);
        switch(type) {

        case 1:





            count++;
            break;

        case 2:



            esym_index = s1->symtab_to_dynsym[sym_index];
            if (esym_index)
                count++;
            break;
        default:
            break;
        }
    }
    if (count) {

        sr->sh_flags |= (1 << 1);
        sr->sh_size = count * sizeof(Elf32_Rel);
    }
    return count;
}

static void put_got_offset(TCCState *s1, int index, unsigned long val)
{
    int n;
    unsigned long *tab;

    if (index >= s1->nb_got_offsets) {

        n = 1;
        while (index >= n)
            n *= 2;
        tab = tcc_realloc(s1->got_offsets, n * sizeof(unsigned long));
        if (!tab)
            error("memory full");
        s1->got_offsets = tab;
        memset(s1->got_offsets + s1->nb_got_offsets, 0,
               (n - s1->nb_got_offsets) * sizeof(unsigned long));
        s1->nb_got_offsets = n;
    }
    s1->got_offsets[index] = val;
}


static void put32(unsigned char *p, uint32_t val)
{
    p[0] = val;
    p[1] = val >> 8;
    p[2] = val >> 16;
    p[3] = val >> 24;
}



static uint32_t get32(unsigned char *p)
{
    return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
}


static void build_got(TCCState *s1)
{
    unsigned char *ptr;


    s1->got = new_section(s1, ".got", 1, (1 << 1) | (1 << 0));
    s1->got->sh_entsize = 4;
    add_elf_sym(symtab_section, 0, 4, (((1) << 4) + ((1) & 0xf)),
                0, s1->got->sh_num, "_GLOBAL_OFFSET_TABLE_");
    ptr = section_ptr_add(s1->got, 3 * 4);


    put32(ptr, 0);

    put32(ptr + 4, 0);
    put32(ptr + 8, 0);
# 859 "./tccelf.c"
}



static void put_got_entry(TCCState *s1,
                          int reloc_type, unsigned long size, int info,
                          int sym_index)
{
    int index;
    const char *name;
    Elf32_Sym *sym;
    unsigned long offset;
    int *ptr;

    if (!s1->got)
        build_got(s1);


    if (sym_index < s1->nb_got_offsets &&
        s1->got_offsets[sym_index] != 0)
        return;

    put_got_offset(s1, sym_index, s1->got->data_offset);

    if (s1->dynsym) {
        sym = &((Elf32_Sym *)symtab_section->data)[sym_index];
        name = symtab_section->link->data + sym->st_name;
        offset = sym->st_value;

        if (reloc_type ==



            7

            ) {
            Section *plt;
            uint8_t *p;
            int modrm;





            if (s1->output_type == 2)
                modrm = 0xa3;
            else
                modrm = 0x25;



            plt = s1->plt;
            if (plt->data_offset == 0) {

                p = section_ptr_add(plt, 16);
                p[0] = 0xff;
                p[1] = modrm + 0x10;
                put32(p + 2, 4);
                p[6] = 0xff;
                p[7] = modrm;
                put32(p + 8, 4 * 2);
            }

            p = section_ptr_add(plt, 16);
            p[0] = 0xff;
            p[1] = modrm;
            put32(p + 2, s1->got->data_offset);
            p[6] = 0x68;
            put32(p + 7, (plt->data_offset - 32) >> 1);
            p[11] = 0xe9;
            put32(p + 12, -(plt->data_offset));




            if (s1->output_type == 1)

                offset = plt->data_offset - 16;
        }
# 974 "./tccelf.c"
        index = put_elf_sym(s1->dynsym, offset,
                            size, info, 0, sym->st_shndx, name);

        put_elf_reloc(s1->dynsym, s1->got,
                      s1->got->data_offset,
                      reloc_type, index);
    }
    ptr = section_ptr_add(s1->got, 4);
    *ptr = 0;
}


static void build_got_entries(TCCState *s1)
{
    Section *s, *symtab;
    Elf32_Rel *rel, *rel_end;
    Elf32_Sym *sym;
    int i, type, reloc_type, sym_index;

    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        if (s->sh_type != 9)
            continue;

        if (s->link != symtab_section)
            continue;
        symtab = s->link;
        rel_end = (Elf32_Rel *)(s->data + s->data_offset);
        for(rel = (Elf32_Rel *)s->data;
            rel < rel_end;
            rel++) {
            type = ((rel->r_info) & 0xff);
            switch(type) {

            case 3:
            case 9:
            case 10:
            case 4:
                if (!s1->got)
                    build_got(s1);
                if (type == 3 || type == 4) {
                    sym_index = ((rel->r_info) >> 8);
                    sym = &((Elf32_Sym *)symtab_section->data)[sym_index];

                    if (type == 3)
                        reloc_type = 6;
                    else
                        reloc_type = 7;
                    put_got_entry(s1, reloc_type, sym->st_size, sym->st_info,
                                  sym_index);
                }
                break;
# 1087 "./tccelf.c"
            default:
                break;
            }
        }
    }
}

static Section *new_symtab(TCCState *s1,
                           const char *symtab_name, int sh_type, int sh_flags,
                           const char *strtab_name,
                           const char *hash_name, int hash_sh_flags)
{
    Section *symtab, *strtab, *hash;
    int *ptr, nb_buckets;

    symtab = new_section(s1, symtab_name, sh_type, sh_flags);
    symtab->sh_entsize = sizeof(Elf32_Sym);
    strtab = new_section(s1, strtab_name, 3, sh_flags);
    put_elf_str(strtab, "");
    symtab->link = strtab;
    put_elf_sym(symtab, 0, 0, 0, 0, 0, ((void *)0));

    nb_buckets = 1;

    hash = new_section(s1, hash_name, 5, hash_sh_flags);
    hash->sh_entsize = sizeof(int);
    symtab->hash = hash;
    hash->link = symtab;

    ptr = section_ptr_add(hash, (2 + nb_buckets + 1) * sizeof(int));
    ptr[0] = nb_buckets;
    ptr[1] = 1;
    memset(ptr + 2, 0, (nb_buckets + 1) * sizeof(int));
    return symtab;
}


static void put_dt(Section *dynamic, int dt, unsigned long val)
{
    Elf32_Dyn *dyn;
    dyn = section_ptr_add(dynamic, sizeof(Elf32_Dyn));
    dyn->d_tag = dt;
    dyn->d_un.d_val = val;
}

static void add_init_array_defines(TCCState *s1, const char *section_name)
{
    Section *s;
    long end_offset;
    char sym_start[1024];
    char sym_end[1024];

    snprintf(sym_start, sizeof(sym_start), "__%s_start", section_name + 1);
    snprintf(sym_end, sizeof(sym_end), "__%s_end", section_name + 1);

    s = find_section(s1, section_name);
    if (!s) {
        end_offset = 0;
        s = data_section;
    } else {
        end_offset = s->data_offset;
    }

    add_elf_sym(symtab_section,
                0, 0,
                (((1) << 4) + ((0) & 0xf)), 0,
                s->sh_num, sym_start);
    add_elf_sym(symtab_section,
                end_offset, 0,
                (((1) << 4) + ((0) & 0xf)), 0,
                s->sh_num, sym_end);
}


static void tcc_add_runtime(TCCState *s1)
{

    char buf[1024];



    if (s1->do_bounds_check) {
        unsigned long *ptr;
        Section *init_section;
        unsigned char *pinit;
        int sym_index;


        ptr = section_ptr_add(bounds_section, sizeof(unsigned long));
        *ptr = 0;
        add_elf_sym(symtab_section, 0, 0,
                    (((1) << 4) + ((0) & 0xf)), 0,
                    bounds_section->sh_num, "__bounds_start");

        snprintf(buf, sizeof(buf), "%s/%s", s1->tcc_lib_path, "bcheck.o");
        tcc_add_file(s1, buf);

        if (s1->output_type != 0) {

            init_section = find_section(s1, ".init");
            pinit = section_ptr_add(init_section, 5);
            pinit[0] = 0xe8;
            put32(pinit + 1, -4);
            sym_index = find_elf_sym(symtab_section, "__bound_init");
            put_elf_reloc(symtab_section, init_section,
                          init_section->data_offset - 4, 2, sym_index);
        }

    }


    if (!s1->nostdlib) {
        tcc_add_library(s1, "c");




        snprintf(buf, sizeof(buf), "%s/%s", s1->tcc_lib_path, "libtcc1.a");
        tcc_add_file(s1, buf);

    }

    if (s1->output_type != 0 && !s1->nostdlib) {
        tcc_add_file(s1, "" "/usr/lib" "/crtn.o");
    }
}




static void tcc_add_linker_symbols(TCCState *s1)
{
    char buf[1024];
    int i;
    Section *s;

    add_elf_sym(symtab_section,
                text_section->data_offset, 0,
                (((1) << 4) + ((0) & 0xf)), 0,
                text_section->sh_num, "_etext");
    add_elf_sym(symtab_section,
                data_section->data_offset, 0,
                (((1) << 4) + ((0) & 0xf)), 0,
                data_section->sh_num, "_edata");
    add_elf_sym(symtab_section,
                bss_section->data_offset, 0,
                (((1) << 4) + ((0) & 0xf)), 0,
                bss_section->sh_num, "_end");

    add_init_array_defines(s1, ".preinit_array");
    add_init_array_defines(s1, ".init_array");
    add_init_array_defines(s1, ".fini_array");



    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        if (s->sh_type == 1 &&
            (s->sh_flags & (1 << 1))) {
            const char *p;
            int ch;


            p = s->name;
            for(;;) {
                ch = *p;
                if (!ch)
                    break;
                if (!isid(ch) && !isnum(ch))
                    goto next_sec;
                p++;
            }
            snprintf(buf, sizeof(buf), "__start_%s", s->name);
            add_elf_sym(symtab_section,
                        0, 0,
                        (((1) << 4) + ((0) & 0xf)), 0,
                        s->sh_num, buf);
            snprintf(buf, sizeof(buf), "__stop_%s", s->name);
            add_elf_sym(symtab_section,
                        s->data_offset, 0,
                        (((1) << 4) + ((0) & 0xf)), 0,
                        s->sh_num, buf);
        }
    next_sec: ;
    }
}
# 1284 "./tccelf.c"
static char elf_interp[] = "/lib/ld-linux.so.2";


static void tcc_output_binary(TCCState *s1, FILE *f,
                              const int *section_order)
{
    Section *s;
    int i, offset, size;

    offset = 0;
    for(i=1;i<s1->nb_sections;i++) {
        s = s1->sections[section_order[i]];
        if (s->sh_type != 8 &&
            (s->sh_flags & (1 << 1))) {
            while (offset < s->sh_offset) {
                fputc(0, f);
                offset++;
            }
            size = s->sh_size;
            fwrite(s->data, 1, size, f);
            offset += size;
        }
    }
}



int elf_output_file(TCCState *s1, const char *filename)
{
    Elf32_Ehdr ehdr;
    FILE *f;
    int fd, mode, ret;
    int *section_order;
    int shnum, i, phnum, file_offset, offset, size, j, tmp, sh_order_index, k;
    unsigned long addr;
    Section *strsec, *s;
    Elf32_Shdr shdr, *sh;
    Elf32_Phdr *phdr, *ph;
    Section *interp, *dynamic, *dynstr;
    unsigned long saved_dynamic_data_offset;
    Elf32_Sym *sym;
    int type, file_type;
    unsigned long rel_addr, rel_size;

    file_type = s1->output_type;
    s1->nb_errors = 0;

    if (file_type != 3) {
        tcc_add_runtime(s1);
    }

    phdr = ((void *)0);
    section_order = ((void *)0);
    interp = ((void *)0);
    dynamic = ((void *)0);
    dynstr = ((void *)0);
    saved_dynamic_data_offset = 0;

    if (file_type != 3) {
        relocate_common_syms();

        tcc_add_linker_symbols(s1);

        if (!s1->static_link) {
            const char *name;
            int sym_index, index;
            Elf32_Sym *esym, *sym_end;

            if (file_type == 1) {
                char *ptr;

                interp = new_section(s1, ".interp", 1, (1 << 1));
                interp->sh_addralign = 1;
                ptr = section_ptr_add(interp, sizeof(elf_interp));
                strcpy(ptr, elf_interp);
            }


            s1->dynsym = new_symtab(s1, ".dynsym", 11, (1 << 1),
                                    ".dynstr",
                                    ".hash", (1 << 1));
            dynstr = s1->dynsym->link;


            dynamic = new_section(s1, ".dynamic", 6,
                                  (1 << 1) | (1 << 0));
            dynamic->link = dynstr;
            dynamic->sh_entsize = sizeof(Elf32_Dyn);


            s1->plt = new_section(s1, ".plt", 1,
                                  (1 << 1) | (1 << 2));
            s1->plt->sh_entsize = 4;

            build_got(s1);





            sym_end = (Elf32_Sym *)(symtab_section->data +
                                    symtab_section->data_offset);
            if (file_type == 1) {
                for(sym = (Elf32_Sym *)symtab_section->data + 1;
                    sym < sym_end;
                    sym++) {
                    if (sym->st_shndx == 0) {
                        name = symtab_section->link->data + sym->st_name;
                        sym_index = find_elf_sym(s1->dynsymtab_section, name);
                        if (sym_index) {
                            esym = &((Elf32_Sym *)s1->dynsymtab_section->data)[sym_index];
                            type = ((esym->st_info) & 0xf);
                            if (type == 2) {
                                put_got_entry(s1, 7, esym->st_size,
                                              esym->st_info,
                                              sym - (Elf32_Sym *)symtab_section->data);
                            } else if (type == 1) {
                                unsigned long offset;
                                offset = bss_section->data_offset;

                                offset = (offset + 16 - 1) & -16;
                                index = put_elf_sym(s1->dynsym, offset, esym->st_size,
                                                    esym->st_info, 0,
                                                    bss_section->sh_num, name);
                                put_elf_reloc(s1->dynsym, bss_section,
                                              offset, 5, index);
                                offset += esym->st_size;
                                bss_section->data_offset = offset;
                            }
                        } else {



                            if ((((unsigned char) (sym->st_info)) >> 4) == 2 ||
                                !strcmp(name, "_fp_hw")) {
                            } else {
                                error_noabort("undefined symbol '%s'", name);
                            }
                        }
                    } else if (s1->rdynamic &&
                               (((unsigned char) (sym->st_info)) >> 4) != 0) {


                        name = symtab_section->link->data + sym->st_name;
                        put_elf_sym(s1->dynsym, sym->st_value, sym->st_size,
                                    sym->st_info, 0,
                                    sym->st_shndx, name);
                    }
                }

                if (s1->nb_errors)
                    goto fail;



                sym_end = (Elf32_Sym *)(s1->dynsymtab_section->data +
                                        s1->dynsymtab_section->data_offset);
                for(esym = (Elf32_Sym *)s1->dynsymtab_section->data + 1;
                    esym < sym_end;
                    esym++) {
                    if (esym->st_shndx == 0) {
                        name = s1->dynsymtab_section->link->data + esym->st_name;
                        sym_index = find_elf_sym(symtab_section, name);
                        if (sym_index) {


                            sym = &((Elf32_Sym *)symtab_section->data)[sym_index];
                            put_elf_sym(s1->dynsym, sym->st_value, sym->st_size,
                                        sym->st_info, 0,
                                        sym->st_shndx, name);
                        } else {
                            if ((((unsigned char) (esym->st_info)) >> 4) == 2) {

                            } else {
                                warning("undefined dynamic symbol '%s'", name);
                            }
                        }
                    }
                }
            } else {
                int nb_syms;

                nb_syms = symtab_section->data_offset / sizeof(Elf32_Sym);
                s1->symtab_to_dynsym = tcc_mallocz(sizeof(int) * nb_syms);
                for(sym = (Elf32_Sym *)symtab_section->data + 1;
                    sym < sym_end;
                    sym++) {
                    if ((((unsigned char) (sym->st_info)) >> 4) != 0) {
# 1486 "./tccelf.c"
                        {
                            name = symtab_section->link->data + sym->st_name;
                            index = put_elf_sym(s1->dynsym, sym->st_value, sym->st_size,
                                                sym->st_info, 0,
                                                sym->st_shndx, name);
                            s1->symtab_to_dynsym[sym -
                                                 (Elf32_Sym *)symtab_section->data] =
                                index;
                        }
                    }
                }
            }

            build_got_entries(s1);


            for(i = 0; i < s1->nb_loaded_dlls; i++) {
                DLLReference *dllref = s1->loaded_dlls[i];
                if (dllref->level == 0)
                    put_dt(dynamic, 1, put_elf_str(dynstr, dllref->name));
            }


            if (file_type == 2) {
                if (s1->soname)
                    put_dt(dynamic, 14, put_elf_str(dynstr, s1->soname));
                put_dt(dynamic, 22, 0);
            }


            saved_dynamic_data_offset = dynamic->data_offset;
            dynamic->data_offset += sizeof(Elf32_Dyn) * 9;
        } else {

            build_got_entries(s1);
        }
    }

    memset(&ehdr, 0, sizeof(ehdr));


    strsec = new_section(s1, ".shstrtab", 3, 0);
    put_elf_str(strsec, "");


    shnum = s1->nb_sections;


    section_order = tcc_malloc(sizeof(int) * shnum);
    section_order[0] = 0;
    sh_order_index = 1;


    switch(file_type) {
    default:
    case 3:
        phnum = 0;
        break;
    case 1:
        if (!s1->static_link)
            phnum = 4;
        else
            phnum = 2;
        break;
    case 2:
        phnum = 3;
        break;
    }





    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        s->sh_name = put_elf_str(strsec, s->name);
# 1573 "./tccelf.c"
        if (file_type == 2 &&
            s->sh_type == 9 &&
            !(s->sh_flags & (1 << 1))) {

            if (s1->sections[s->sh_info]->sh_flags & (1 << 1))
                prepare_dynamic_rel(s1, s);
            else if (s1->do_debug)
                s->sh_size = s->data_offset;
        } else if (s1->do_debug ||
            file_type == 3 ||
            (s->sh_flags & (1 << 1)) ||
            i == (s1->nb_sections - 1)) {

            s->sh_size = s->data_offset;
        }
    }


    phdr = tcc_mallocz(phnum * sizeof(Elf32_Phdr));

    if (s1->output_format == 0) {
        file_offset = sizeof(Elf32_Ehdr) + phnum * sizeof(Elf32_Phdr);
    } else {
        file_offset = 0;
    }
    if (phnum > 0) {

        if (s1->has_text_addr) {
            int a_offset, p_offset;
            addr = s1->text_addr;


            a_offset = addr & (0x1000 - 1);
            p_offset = file_offset & (0x1000 - 1);
            if (a_offset < p_offset)
                a_offset += 0x1000;
            file_offset += (a_offset - p_offset);
        } else {
            if (file_type == 2)
                addr = 0;
            else
                addr = 0x08048000;

            addr += (file_offset & (0x1000 - 1));
        }


        rel_size = 0;
        rel_addr = 0;


        ph = &phdr[0];
        if (interp)
            ph++;

        for(j = 0; j < 2; j++) {
            ph->p_type = 1;
            if (j == 0)
                ph->p_flags = (1 << 2) | (1 << 0);
            else
                ph->p_flags = (1 << 2) | (1 << 1);
            ph->p_align = 0x1000;




            for(k = 0; k < 5; k++) {
                for(i = 1; i < s1->nb_sections; i++) {
                    s = s1->sections[i];

                    if (j == 0) {
                        if ((s->sh_flags & ((1 << 1) | (1 << 0))) !=
                            (1 << 1))
                            continue;
                    } else {
                        if ((s->sh_flags & ((1 << 1) | (1 << 0))) !=
                            ((1 << 1) | (1 << 0)))
                            continue;
                    }
                    if (s == interp) {
                        if (k != 0)
                            continue;
                    } else if (s->sh_type == 11 ||
                               s->sh_type == 3 ||
                               s->sh_type == 5) {
                        if (k != 1)
                            continue;
                    } else if (s->sh_type == 9) {
                        if (k != 2)
                            continue;
                    } else if (s->sh_type == 8) {
                        if (k != 4)
                            continue;
                    } else {
                        if (k != 3)
                            continue;
                    }
                    section_order[sh_order_index++] = i;


                    tmp = addr;
                    addr = (addr + s->sh_addralign - 1) &
                        ~(s->sh_addralign - 1);
                    file_offset += addr - tmp;
                    s->sh_offset = file_offset;
                    s->sh_addr = addr;


                    if (ph->p_offset == 0) {
                        ph->p_offset = file_offset;
                        ph->p_vaddr = addr;
                        ph->p_paddr = ph->p_vaddr;
                    }

                    if (s->sh_type == 9) {
                        if (rel_size == 0)
                            rel_addr = addr;
                        rel_size += s->sh_size;
                    }
                    addr += s->sh_size;
                    if (s->sh_type != 8)
                        file_offset += s->sh_size;
                }
            }
            ph->p_filesz = file_offset - ph->p_offset;
            ph->p_memsz = addr - ph->p_vaddr;
            ph++;
            if (j == 0) {
                if (s1->output_format == 0) {


                    if ((addr & (0x1000 - 1)) != 0)
                        addr += 0x1000;
                } else {
                    addr = (addr + 0x1000 - 1) & ~(0x1000 - 1);
                    file_offset = (file_offset + 0x1000 - 1) &
                        ~(0x1000 - 1);
                }
            }
        }


        if (interp) {
            ph = &phdr[0];

            ph->p_type = 3;
            ph->p_offset = interp->sh_offset;
            ph->p_vaddr = interp->sh_addr;
            ph->p_paddr = ph->p_vaddr;
            ph->p_filesz = interp->sh_size;
            ph->p_memsz = interp->sh_size;
            ph->p_flags = (1 << 2);
            ph->p_align = interp->sh_addralign;
        }


        if (dynamic) {
            Elf32_Sym *sym_end;

            ph = &phdr[phnum - 1];

            ph->p_type = 2;
            ph->p_offset = dynamic->sh_offset;
            ph->p_vaddr = dynamic->sh_addr;
            ph->p_paddr = ph->p_vaddr;
            ph->p_filesz = dynamic->sh_size;
            ph->p_memsz = dynamic->sh_size;
            ph->p_flags = (1 << 2) | (1 << 1);
            ph->p_align = dynamic->sh_addralign;


            put32(s1->got->data, dynamic->sh_addr);


            if (file_type == 1



                ) {
                uint8_t *p, *p_end;

                p = s1->plt->data;
                p_end = p + s1->plt->data_offset;
                if (p < p_end) {

                    put32(p + 2, get32(p + 2) + s1->got->sh_addr);
                    put32(p + 8, get32(p + 8) + s1->got->sh_addr);
                    p += 16;
                    while (p < p_end) {
                        put32(p + 2, get32(p + 2) + s1->got->sh_addr);
                        p += 16;
                    }
# 1787 "./tccelf.c"
                }
            }


            sym_end = (Elf32_Sym *)(s1->dynsym->data + s1->dynsym->data_offset);
            for(sym = (Elf32_Sym *)s1->dynsym->data + 1;
                sym < sym_end;
                sym++) {
                if (sym->st_shndx == 0) {


                    if (sym->st_value)
                        sym->st_value += s1->plt->sh_addr;
                } else if (sym->st_shndx < 0xff00) {

                    sym->st_value += s1->sections[sym->st_shndx]->sh_addr;
                }
            }


            dynamic->data_offset = saved_dynamic_data_offset;
            put_dt(dynamic, 4, s1->dynsym->hash->sh_addr);
            put_dt(dynamic, 5, dynstr->sh_addr);
            put_dt(dynamic, 6, s1->dynsym->sh_addr);
            put_dt(dynamic, 10, dynstr->data_offset);
            put_dt(dynamic, 11, sizeof(Elf32_Sym));





            put_dt(dynamic, 17, rel_addr);
            put_dt(dynamic, 18, rel_size);
            put_dt(dynamic, 19, sizeof(Elf32_Rel));

            if (s1->do_debug)
                put_dt(dynamic, 21, 0);
            put_dt(dynamic, 0, 0);
        }

        ehdr.e_phentsize = sizeof(Elf32_Phdr);
        ehdr.e_phnum = phnum;
        ehdr.e_phoff = sizeof(Elf32_Ehdr);
    }


    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        if (phnum > 0 && (s->sh_flags & (1 << 1)))
            continue;
        section_order[sh_order_index++] = i;

        file_offset = (file_offset + s->sh_addralign - 1) &
            ~(s->sh_addralign - 1);
        s->sh_offset = file_offset;
        if (s->sh_type != 8)
            file_offset += s->sh_size;
    }



    if (file_type != 3) {
        relocate_syms(s1, 0);

        if (s1->nb_errors != 0) {
        fail:
            ret = -1;
            goto the_end;
        }



        for(i = 1; i < s1->nb_sections; i++) {
            s = s1->sections[i];
            if (s->reloc && s != s1->got && (s->sh_flags & (1 << 1)))
                relocate_section(s1, s);
        }



        for(i = 1; i < s1->nb_sections; i++) {
            s = s1->sections[i];
            if ((s->sh_flags & (1 << 1)) &&
                s->sh_type == 9) {
                relocate_rel(s1, s);
            }
        }


        if (file_type == 1)
            ehdr.e_entry = (unsigned long)tcc_get_symbol_err(s1, "_start");
        else
            ehdr.e_entry = text_section->sh_addr;
    }


    if (file_type == 3)
        mode = 0666;
    else
        mode = 0777;
    fd = open(filename, 0x0001 | 0x00000200 | 0x00000400 | 0, mode);
    if (fd < 0) {
        error_noabort("could not write '%s'", filename);
        goto fail;
    }
    f = fdopen(fd, "wb");
    if (s1->verbose)
        printf("<- %s\n", filename);






    if (s1->output_format == 0) {
        sort_syms(s1, symtab_section);


        file_offset = (file_offset + 3) & -4;


        ehdr.e_ident[0] = 0x7f;
        ehdr.e_ident[1] = 'E';
        ehdr.e_ident[2] = 'L';
        ehdr.e_ident[3] = 'F';
        ehdr.e_ident[4] = 1;
        ehdr.e_ident[5] = 1;
        ehdr.e_ident[6] = 1;
# 1926 "./tccelf.c"
        switch(file_type) {
        default:
        case 1:
            ehdr.e_type = 2;
            break;
        case 2:
            ehdr.e_type = 3;
            break;
        case 3:
            ehdr.e_type = 1;
            break;
        }
        ehdr.e_machine = 3;
        ehdr.e_version = 1;
        ehdr.e_shoff = file_offset;
        ehdr.e_ehsize = sizeof(Elf32_Ehdr);
        ehdr.e_shentsize = sizeof(Elf32_Shdr);
        ehdr.e_shnum = shnum;
        ehdr.e_shstrndx = shnum - 1;

        fwrite(&ehdr, 1, sizeof(Elf32_Ehdr), f);
        fwrite(phdr, 1, phnum * sizeof(Elf32_Phdr), f);
        offset = sizeof(Elf32_Ehdr) + phnum * sizeof(Elf32_Phdr);

        for(i=1;i<s1->nb_sections;i++) {
            s = s1->sections[section_order[i]];
            if (s->sh_type != 8) {
                while (offset < s->sh_offset) {
                    fputc(0, f);
                    offset++;
                }
                size = s->sh_size;
                fwrite(s->data, 1, size, f);
                offset += size;
            }
        }


        while (offset < ehdr.e_shoff) {
            fputc(0, f);
            offset++;
        }

        for(i=0;i<s1->nb_sections;i++) {
            sh = &shdr;
            memset(sh, 0, sizeof(Elf32_Shdr));
            s = s1->sections[i];
            if (s) {
                sh->sh_name = s->sh_name;
                sh->sh_type = s->sh_type;
                sh->sh_flags = s->sh_flags;
                sh->sh_entsize = s->sh_entsize;
                sh->sh_info = s->sh_info;
                if (s->link)
                    sh->sh_link = s->link->sh_num;
                sh->sh_addralign = s->sh_addralign;
                sh->sh_addr = s->sh_addr;
                sh->sh_offset = s->sh_offset;
                sh->sh_size = s->sh_size;
            }
            fwrite(sh, 1, sizeof(Elf32_Shdr), f);
        }
    } else {
        tcc_output_binary(s1, f, section_order);
    }
    fclose(f);

    ret = 0;
 the_end:
    tcc_free(s1->symtab_to_dynsym);
    tcc_free(section_order);
    tcc_free(phdr);
    tcc_free(s1->got_offsets);
    return ret;
}

int tcc_output_file(TCCState *s, const char *filename)
{
    int ret;





    {
        ret = elf_output_file(s, filename);
    }
    return ret;
}

static void *load_data(int fd, unsigned long file_offset, unsigned long size)
{
    void *data;

    data = tcc_malloc(size);
    lseek(fd, file_offset, 0);
    read(fd, data, size);
    return data;
}

typedef struct SectionMergeInfo {
    Section *s;
    unsigned long offset;
    uint8_t new_section;
    uint8_t link_once;
} SectionMergeInfo;



static int tcc_load_object_file(TCCState *s1,
                                int fd, unsigned long file_offset)
{
    Elf32_Ehdr ehdr;
    Elf32_Shdr *shdr, *sh;
    int size, i, j, offset, offseti, nb_syms, sym_index, ret;
    unsigned char *strsec, *strtab;
    int *old_to_new_syms;
    char *sh_name, *name;
    SectionMergeInfo *sm_table, *sm;
    Elf32_Sym *sym, *symtab;
    Elf32_Rel *rel, *rel_end;
    Section *s;

    int stab_index;
    int stabstr_index;

    stab_index = stabstr_index = 0;

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
        goto fail1;
    if (ehdr.e_ident[0] != 0x7f ||
        ehdr.e_ident[1] != 'E' ||
        ehdr.e_ident[2] != 'L' ||
        ehdr.e_ident[3] != 'F')
        goto fail1;

    if (ehdr.e_type != 1)
        goto fail1;

    if (ehdr.e_ident[5] != 1 ||
        ehdr.e_machine != 3) {
    fail1:
        error_noabort("invalid object file");
        return -1;
    }

    shdr = load_data(fd, file_offset + ehdr.e_shoff,
                     sizeof(Elf32_Shdr) * ehdr.e_shnum);
    sm_table = tcc_mallocz(sizeof(SectionMergeInfo) * ehdr.e_shnum);


    sh = &shdr[ehdr.e_shstrndx];
    strsec = load_data(fd, file_offset + sh->sh_offset, sh->sh_size);


    old_to_new_syms = ((void *)0);
    symtab = ((void *)0);
    strtab = ((void *)0);
    nb_syms = 0;
    for(i = 1; i < ehdr.e_shnum; i++) {
        sh = &shdr[i];
        if (sh->sh_type == 2) {
            if (symtab) {
                error_noabort("object must contain only one symtab");
            fail:
                ret = -1;
                goto the_end;
            }
            nb_syms = sh->sh_size / sizeof(Elf32_Sym);
            symtab = load_data(fd, file_offset + sh->sh_offset, sh->sh_size);
            sm_table[i].s = symtab_section;


            sh = &shdr[sh->sh_link];
            strtab = load_data(fd, file_offset + sh->sh_offset, sh->sh_size);
        }
    }



    for(i = 1; i < ehdr.e_shnum; i++) {

        if (i == ehdr.e_shstrndx)
            continue;
        sh = &shdr[i];
        sh_name = strsec + sh->sh_name;

        if (sh->sh_type != 1 &&
            sh->sh_type != 9 &&



            sh->sh_type != 8 &&
            strcmp(sh_name, ".stabstr")
            )
            continue;
        if (sh->sh_addralign < 1)
            sh->sh_addralign = 1;

        for(j = 1; j < s1->nb_sections;j++) {
            s = s1->sections[j];
            if (!strcmp(s->name, sh_name)) {
                if (!strncmp(sh_name, ".gnu.linkonce",
                             sizeof(".gnu.linkonce") - 1)) {




                    sm_table[i].link_once = 1;
                    goto next;
                } else {
                    goto found;
                }
            }
        }

        s = new_section(s1, sh_name, sh->sh_type, sh->sh_flags);


        s->sh_addralign = sh->sh_addralign;
        s->sh_entsize = sh->sh_entsize;
        sm_table[i].new_section = 1;
    found:
        if (sh->sh_type != s->sh_type) {
            error_noabort("invalid section type");
            goto fail;
        }


        offset = s->data_offset;

        if (0 == strcmp(sh_name, ".stab")) {
            stab_index = i;
            goto no_align;
        }
        if (0 == strcmp(sh_name, ".stabstr")) {
            stabstr_index = i;
            goto no_align;
        }

        size = sh->sh_addralign - 1;
        offset = (offset + size) & ~size;
        if (sh->sh_addralign > s->sh_addralign)
            s->sh_addralign = sh->sh_addralign;
        s->data_offset = offset;
    no_align:
        sm_table[i].offset = offset;
        sm_table[i].s = s;

        size = sh->sh_size;
        if (sh->sh_type != 8) {
            unsigned char *ptr;
            lseek(fd, file_offset + sh->sh_offset, 0);
            ptr = section_ptr_add(s, size);
            read(fd, ptr, size);
        } else {
            s->data_offset += size;
        }
    next: ;
    }


    if (stab_index && stabstr_index) {
        Stab_Sym *a, *b;
        unsigned o;
        s = sm_table[stab_index].s;
        a = (Stab_Sym *)(s->data + sm_table[stab_index].offset);
        b = (Stab_Sym *)(s->data + s->data_offset);
        o = sm_table[stabstr_index].offset;
        while (a < b)
            a->n_strx += o, a++;
    }



    for(i = 1; i < ehdr.e_shnum; i++) {
        s = sm_table[i].s;
        if (!s || !sm_table[i].new_section)
            continue;
        sh = &shdr[i];
        if (sh->sh_link > 0)
            s->link = sm_table[sh->sh_link].s;
        if (sh->sh_type == 9) {
            s->sh_info = sm_table[sh->sh_info].s->sh_num;

            s1->sections[s->sh_info]->reloc = s;
        }
    }
    sm = sm_table;


    old_to_new_syms = tcc_mallocz(nb_syms * sizeof(int));

    sym = symtab + 1;
    for(i = 1; i < nb_syms; i++, sym++) {
        if (sym->st_shndx != 0 &&
            sym->st_shndx < 0xff00) {
            sm = &sm_table[sym->st_shndx];
            if (sm->link_once) {



                if ((((unsigned char) (sym->st_info)) >> 4) != 0) {
                    name = strtab + sym->st_name;
                    sym_index = find_elf_sym(symtab_section, name);
                    if (sym_index)
                        old_to_new_syms[i] = sym_index;
                }
                continue;
            }

            if (!sm->s)
                continue;

            sym->st_shndx = sm->s->sh_num;

            sym->st_value += sm->offset;
        }

        name = strtab + sym->st_name;
        sym_index = add_elf_sym(symtab_section, sym->st_value, sym->st_size,
                                sym->st_info, sym->st_other,
                                sym->st_shndx, name);
        old_to_new_syms[i] = sym_index;
    }


    for(i = 1; i < ehdr.e_shnum; i++) {
        s = sm_table[i].s;
        if (!s)
            continue;
        sh = &shdr[i];
        offset = sm_table[i].offset;
        switch(s->sh_type) {
        case 9:

            offseti = sm_table[sh->sh_info].offset;
            rel_end = (Elf32_Rel *)(s->data + s->data_offset);
            for(rel = (Elf32_Rel *)(s->data + offset);
                rel < rel_end;
                rel++) {
                int type;
                unsigned sym_index;

                type = ((rel->r_info) & 0xff);
                sym_index = ((rel->r_info) >> 8);

                if (sym_index >= nb_syms)
                    goto invalid_reloc;
                sym_index = old_to_new_syms[sym_index];

                if (!sym_index && !sm->link_once) {
                invalid_reloc:
                    error_noabort("Invalid relocation entry [%2d] '%s' @ %.8x",
                        i, strsec + sh->sh_name, rel->r_offset);
                    goto fail;
                }
                rel->r_info = (((sym_index) << 8) + ((type) & 0xff));

                rel->r_offset += offseti;
            }
            break;
        default:
            break;
        }
    }

    ret = 0;
 the_end:
    tcc_free(symtab);
    tcc_free(strtab);
    tcc_free(old_to_new_syms);
    tcc_free(sm_table);
    tcc_free(strsec);
    tcc_free(shdr);
    return ret;
}



typedef struct ArchiveHeader {
    char ar_name[16];
    char ar_date[12];
    char ar_uid[6];
    char ar_gid[6];
    char ar_mode[8];
    char ar_size[10];
    char ar_fmag[2];
} ArchiveHeader;

static int get_be32(const uint8_t *b)
{
    return b[3] | (b[2] << 8) | (b[1] << 16) | (b[0] << 24);
}


static int tcc_load_alacarte(TCCState *s1, int fd, int size)
{
    int i, bound, nsyms, sym_index, off, ret;
    uint8_t *data;
    const char *ar_names, *p;
    const uint8_t *ar_index;
    Elf32_Sym *sym;

    data = tcc_malloc(size);
    if (read(fd, data, size) != size)
        goto fail;
    nsyms = get_be32(data);
    ar_index = data + 4;
    ar_names = ar_index + nsyms * 4;

    do {
        bound = 0;
        for(p = ar_names, i = 0; i < nsyms; i++, p += strlen(p)+1) {
            sym_index = find_elf_sym(symtab_section, p);
            if(sym_index) {
                sym = &((Elf32_Sym *)symtab_section->data)[sym_index];
                if(sym->st_shndx == 0) {
                    off = get_be32(ar_index + i * 4) + sizeof(ArchiveHeader);



                    ++bound;
                    lseek(fd, off, 0);
                    if(tcc_load_object_file(s1, fd, off) < 0) {
                    fail:
                        ret = -1;
                        goto the_end;
                    }
                }
            }
        }
    } while(bound);
    ret = 0;
 the_end:
    tcc_free(data);
    return ret;
}


static int tcc_load_archive(TCCState *s1, int fd)
{
    ArchiveHeader hdr;
    char ar_size[11];
    char ar_name[17];
    char magic[8];
    int size, len, i;
    unsigned long file_offset;


    read(fd, magic, sizeof(magic));

    for(;;) {
        len = read(fd, &hdr, sizeof(hdr));
        if (len == 0)
            break;
        if (len != sizeof(hdr)) {
            error_noabort("invalid archive");
            return -1;
        }
        memcpy(ar_size, hdr.ar_size, sizeof(hdr.ar_size));
        ar_size[sizeof(hdr.ar_size)] = '\0';
        size = strtol(ar_size, ((void *)0), 0);
        memcpy(ar_name, hdr.ar_name, sizeof(hdr.ar_name));
        for(i = sizeof(hdr.ar_name) - 1; i >= 0; i--) {
            if (ar_name[i] != ' ')
                break;
        }
        ar_name[i + 1] = '\0';

        file_offset = lseek(fd, 0, 1);

        size = (size + 1) & ~1;
        if (!strcmp(ar_name, "/")) {

            if(s1->alacarte_link)
                return tcc_load_alacarte(s1, fd, size);
        } else if (!strcmp(ar_name, "//") ||
                   !strcmp(ar_name, "__.SYMDEF") ||
                   !strcmp(ar_name, "__.SYMDEF/") ||
                   !strcmp(ar_name, "ARFILENAMES/")) {

        } else {
            if (tcc_load_object_file(s1, fd, file_offset) < 0)
                return -1;
        }
        lseek(fd, file_offset + size, 0);
    }
    return 0;
}




static int tcc_load_dll(TCCState *s1, int fd, const char *filename, int level)
{
    Elf32_Ehdr ehdr;
    Elf32_Shdr *shdr, *sh, *sh1;
    int i, j, nb_syms, nb_dts, sym_bind, ret;
    Elf32_Sym *sym, *dynsym;
    Elf32_Dyn *dt, *dynamic;
    unsigned char *dynstr;
    const char *name, *soname;
    DLLReference *dllref;

    read(fd, &ehdr, sizeof(ehdr));


    if (ehdr.e_ident[5] != 1 ||
        ehdr.e_machine != 3) {
        error_noabort("bad architecture");
        return -1;
    }


    shdr = load_data(fd, ehdr.e_shoff, sizeof(Elf32_Shdr) * ehdr.e_shnum);


    nb_syms = 0;
    nb_dts = 0;
    dynamic = ((void *)0);
    dynsym = ((void *)0);
    dynstr = ((void *)0);
    for(i = 0, sh = shdr; i < ehdr.e_shnum; i++, sh++) {
        switch(sh->sh_type) {
        case 6:
            nb_dts = sh->sh_size / sizeof(Elf32_Dyn);
            dynamic = load_data(fd, sh->sh_offset, sh->sh_size);
            break;
        case 11:
            nb_syms = sh->sh_size / sizeof(Elf32_Sym);
            dynsym = load_data(fd, sh->sh_offset, sh->sh_size);
            sh1 = &shdr[sh->sh_link];
            dynstr = load_data(fd, sh1->sh_offset, sh1->sh_size);
            break;
        default:
            break;
        }
    }


    soname = tcc_basename(filename);

    for(i = 0, dt = dynamic; i < nb_dts; i++, dt++) {
        if (dt->d_tag == 14) {
            soname = dynstr + dt->d_un.d_val;
        }
    }


    for(i = 0; i < s1->nb_loaded_dlls; i++) {
        dllref = s1->loaded_dlls[i];
        if (!strcmp(soname, dllref->name)) {

            if (level < dllref->level)
                dllref->level = level;
            ret = 0;
            goto the_end;
        }
    }




    dllref = tcc_mallocz(sizeof(DLLReference) + strlen(soname));
    dllref->level = level;
    strcpy(dllref->name, soname);
    dynarray_add((void ***)&s1->loaded_dlls, &s1->nb_loaded_dlls, dllref);


    for(i = 1, sym = dynsym + 1; i < nb_syms; i++, sym++) {
        sym_bind = (((unsigned char) (sym->st_info)) >> 4);
        if (sym_bind == 0)
            continue;
        name = dynstr + sym->st_name;
        add_elf_sym(s1->dynsymtab_section, sym->st_value, sym->st_size,
                    sym->st_info, sym->st_other, sym->st_shndx, name);
    }


    for(i = 0, dt = dynamic; i < nb_dts; i++, dt++) {
        switch(dt->d_tag) {
        case 1:
            name = dynstr + dt->d_un.d_val;
            for(j = 0; j < s1->nb_loaded_dlls; j++) {
                dllref = s1->loaded_dlls[j];
                if (!strcmp(name, dllref->name))
                    goto already_loaded;
            }
            if (tcc_add_dll(s1, name, 0x0002) < 0) {
                error_noabort("referenced dll '%s' not found", name);
                ret = -1;
                goto the_end;
            }
        already_loaded:
            break;
        }
    }
    ret = 0;
 the_end:
    tcc_free(dynstr);
    tcc_free(dynsym);
    tcc_free(dynamic);
    tcc_free(shdr);
    return ret;
}





static int ld_next(TCCState *s1, char *name, int name_size)
{
    int c;
    char *q;

 redo:
    switch(ch) {
    case ' ':
    case '\t':
    case '\f':
    case '\v':
    case '\r':
    case '\n':
        inp();
        goto redo;
    case '/':
        minp();
        if (ch == '*') {
            file->buf_ptr = parse_comment(file->buf_ptr);
            ch = file->buf_ptr[0];
            goto redo;
        } else {
            q = name;
            *q++ = '/';
            goto parse_name;
        }
        break;

    case 'a':
       case 'b':
       case 'c':
       case 'd':
       case 'e':
       case 'f':
       case 'g':
       case 'h':
       case 'i':
       case 'j':
       case 'k':
       case 'l':
       case 'm':
       case 'n':
       case 'o':
       case 'p':
       case 'q':
       case 'r':
       case 's':
       case 't':
       case 'u':
       case 'v':
       case 'w':
       case 'x':
       case 'y':
       case 'z':

    case 'A':
       case 'B':
       case 'C':
       case 'D':
       case 'E':
       case 'F':
       case 'G':
       case 'H':
       case 'I':
       case 'J':
       case 'K':
       case 'L':
       case 'M':
       case 'N':
       case 'O':
       case 'P':
       case 'Q':
       case 'R':
       case 'S':
       case 'T':
       case 'U':
       case 'V':
       case 'W':
       case 'X':
       case 'Y':
       case 'Z':
    case '_':
    case '\\':
    case '.':
    case '$':
    case '~':
        q = name;
    parse_name:
        for(;;) {
            if (!((ch >= 'a' && ch <= 'z') ||
                  (ch >= 'A' && ch <= 'Z') ||
                  (ch >= '0' && ch <= '9') ||
                  strchr("/.-_+=$:\\,~", ch)))
                break;
            if ((q - name) < name_size - 1) {
                *q++ = ch;
            }
            minp();
        }
        *q = '\0';
        c = 256;
        break;
    case (-1):
        c = (-1);
        break;
    default:
        c = ch;
        inp();
        break;
    }





    return c;
}

static int ld_add_file_list(TCCState *s1, int as_needed)
{
    char filename[1024];
    int t, ret;

    t = ld_next(s1, filename, sizeof(filename));
    if (t != '(')
        expect("(");
    t = ld_next(s1, filename, sizeof(filename));
    for(;;) {
        if (t == (-1)) {
            error_noabort("unexpected end of file");
            return -1;
        } else if (t == ')') {
            break;
        } else if (t != 256) {
            error_noabort("filename expected");
            return -1;
        }
        if (!strcmp(filename, "AS_NEEDED")) {
            ret = ld_add_file_list(s1, 1);
            if (ret)
                return ret;
        } else {

            if (!as_needed)
                tcc_add_file(s1, filename);
        }
        t = ld_next(s1, filename, sizeof(filename));
        if (t == ',') {
            t = ld_next(s1, filename, sizeof(filename));
        }
    }
    return 0;
}



static int tcc_load_ldscript(TCCState *s1)
{
    char cmd[64];
    char filename[1024];
    int t, ret;

    ch = file->buf_ptr[0];
    ch = handle_eob();
    for(;;) {
        t = ld_next(s1, cmd, sizeof(cmd));
        if (t == (-1))
            return 0;
        else if (t != 256)
            return -1;
        if (!strcmp(cmd, "INPUT") ||
            !strcmp(cmd, "GROUP")) {
            ret = ld_add_file_list(s1, 0);
            if (ret)
                return ret;
        } else if (!strcmp(cmd, "OUTPUT_FORMAT") ||
                   !strcmp(cmd, "TARGET")) {

            t = ld_next(s1, cmd, sizeof(cmd));
            if (t != '(')
                expect("(");
            for(;;) {
                t = ld_next(s1, filename, sizeof(filename));
                if (t == (-1)) {
                    error_noabort("unexpected end of file");
                    return -1;
                } else if (t == ')') {
                    break;
                }
            }
        } else {
            return -1;
        }
    }
    return 0;
}
# 1329 "libtcc.c" 2
# 1341 "libtcc.c"
static void rt_printline(unsigned long wanted_pc)
{
    Stab_Sym *sym, *sym_end;
    char func_name[128], last_func_name[128];
    unsigned long func_addr, last_pc, pc;
    const char *incl_files[32];
    int incl_index, len, last_line_num, i;
    const char *str, *p;

    fprintf(__stderrp, "0x%08lx:", wanted_pc);

    func_name[0] = '\0';
    func_addr = 0;
    incl_index = 0;
    last_func_name[0] = '\0';
    last_pc = 0xffffffff;
    last_line_num = 1;
    sym = (Stab_Sym *)stab_section->data + 1;
    sym_end = (Stab_Sym *)(stab_section->data + stab_section->data_offset);
    while (sym < sym_end) {
        switch(sym->n_type) {

        case N_FUN:
            if (sym->n_strx == 0) {

                pc = sym->n_value + func_addr;
                if (wanted_pc >= last_pc && wanted_pc < pc)
                    goto found;
                func_name[0] = '\0';
                func_addr = 0;
            } else {
                str = stabstr_section->data + sym->n_strx;
                p = strchr(str, ':');
                if (!p) {
                    pstrcpy(func_name, sizeof(func_name), str);
                } else {
                    len = p - str;
                    if (len > sizeof(func_name) - 1)
                        len = sizeof(func_name) - 1;
                    memcpy(func_name, str, len);
                    func_name[len] = '\0';
                }
                func_addr = sym->n_value;
            }
            break;

        case N_SLINE:
            pc = sym->n_value + func_addr;
            if (wanted_pc >= last_pc && wanted_pc < pc)
                goto found;
            last_pc = pc;
            last_line_num = sym->n_desc;

            strcpy(last_func_name, func_name);
            break;

        case N_BINCL:
            str = stabstr_section->data + sym->n_strx;
        add_incl:
            if (incl_index < 32) {
                incl_files[incl_index++] = str;
            }
            break;
        case N_EINCL:
            if (incl_index > 1)
                incl_index--;
            break;
        case N_SO:
            if (sym->n_strx == 0) {
                incl_index = 0;
            } else {
                str = stabstr_section->data + sym->n_strx;

                len = strlen(str);
                if (len > 0 && str[len - 1] != '/')
                    goto add_incl;
            }
            break;
        }
        sym++;
    }


    incl_index = 0;
    {
        Elf32_Sym *sym, *sym_end;
        int type;

        sym_end = (Elf32_Sym *)(symtab_section->data + symtab_section->data_offset);
        for(sym = (Elf32_Sym *)symtab_section->data + 1;
            sym < sym_end;
            sym++) {
            type = ((sym->st_info) & 0xf);
            if (type == 2) {
                if (wanted_pc >= sym->st_value &&
                    wanted_pc < sym->st_value + sym->st_size) {
                    pstrcpy(last_func_name, sizeof(last_func_name),
                            strtab_section->data + sym->st_name);
                    goto found;
                }
            }
        }
    }

    fprintf(__stderrp, " ???\n");
    return;
 found:
    if (last_func_name[0] != '\0') {
        fprintf(__stderrp, " %s()", last_func_name);
    }
    if (incl_index > 0) {
        fprintf(__stderrp, " (%s:%d",
                incl_files[incl_index - 1], last_line_num);
        for(i = incl_index - 2; i >= 0; i--)
            fprintf(__stderrp, ", included from %s", incl_files[i]);
        fprintf(__stderrp, ")");
    }
    fprintf(__stderrp, "\n");
}
# 1528 "libtcc.c"
static int rt_get_caller_pc(unsigned long *paddr,
                            ucontext_t *uc, int level)
{
    return -1;
}



void rt_error(ucontext_t *uc, const char *fmt, ...)
{
    va_list ap;
    unsigned long pc;
    int i;

    __builtin_va_start(ap, fmt);
    fprintf(__stderrp, "Runtime error: ");
    vfprintf(__stderrp, fmt, ap);
    fprintf(__stderrp, "\n");
    for(i=0;i<num_callers;i++) {
        if (rt_get_caller_pc(&pc, uc, i) < 0)
            break;
        if (i == 0)
            fprintf(__stderrp, "at ");
        else
            fprintf(__stderrp, "by ");
        rt_printline(pc);
    }
    exit(255);
    __builtin_va_end(ap);
}


static void sig_error(int signum, siginfo_t *siginf, void *puc)
{
    ucontext_t *uc = puc;

    switch(signum) {
    case 8:
        switch(siginf->si_code) {
        case 7:
        case 1:
            rt_error(uc, "division by zero");
            break;
        default:
            rt_error(uc, "floating point exception");
            break;
        }
        break;
    case 10:
    case 11:
        if (rt_bound_error_msg && *rt_bound_error_msg)
            rt_error(uc, *rt_bound_error_msg);
        else
            rt_error(uc, "dereferencing invalid pointer");
        break;
    case 4:
        rt_error(uc, "illegal instruction");
        break;
    case 6:
        rt_error(uc, "abort() called");
        break;
    default:
        rt_error(uc, "caught signal %d", signum);
        break;
    }
    exit(255);
}






int tcc_relocate(TCCState *s1, void *ptr)
{
    Section *s;
    unsigned long offset, length, mem;
    int i;

    if (0 == s1->runtime_added) {
        s1->runtime_added = 1;
        s1->nb_errors = 0;





        tcc_add_runtime(s1);
        relocate_common_syms();
        tcc_add_linker_symbols(s1);
        build_got_entries(s1);

    }

    offset = 0, mem = (unsigned long)ptr;
    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        if (0 == (s->sh_flags & (1 << 1)))
            continue;
        length = s->data_offset;
        s->sh_addr = mem ? (mem + offset + 15) & ~15 : 0;
        offset = (offset + length + 15) & ~15;
    }


    relocate_syms(s1, 1);
    if (s1->nb_errors)
        return -1;
# 1645 "libtcc.c"
    if (0 == mem)
        return offset + 15;


    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        if (s->reloc)
            relocate_section(s1, s);
    }

    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        if (0 == (s->sh_flags & (1 << 1)))
            continue;
        length = s->data_offset;

        ptr = (void*)s->sh_addr;
        if (((void *)0) == s->data || s->sh_type == 8)
            memset(ptr, 0, length);
        else
            memcpy(ptr, s->data, length);

        if (s->sh_flags & (1 << 2))
            set_pages_executable(ptr, length);
    }




    return 0;
}


int tcc_run(TCCState *s1, int argc, char **argv)
{
    int (*prog_main)(int, char **);
    void *ptr;
    int ret;

    ret = tcc_relocate(s1, ((void *)0));
    if (ret < 0)
        return -1;
    ptr = tcc_malloc(ret);
    tcc_relocate(s1, ptr);

    prog_main = tcc_get_symbol_err(s1, "main");

    if (s1->do_debug) {

        struct sigaction sigact;


        sigact.sa_flags = 0x0040 | 0x0004;
        sigact.__sigaction_u.__sa_sigaction = sig_error;
        (*(&sigact.sa_mask) = 0, 0);
        sigaction(8, &sigact, ((void *)0));
        sigaction(4, &sigact, ((void *)0));
        sigaction(11, &sigact, ((void *)0));
        sigaction(10, &sigact, ((void *)0));
        sigaction(6, &sigact, ((void *)0));



    }


    if (s1->do_bounds_check) {
        void (*bound_init)(void);


        rt_bound_error_msg = tcc_get_symbol_err(s1, "__bound_error_msg");


        bound_init = (void *)tcc_get_symbol_err(s1, "__bound_init");
        bound_init();
    }

    ret = (*prog_main)(argc, argv);
    tcc_free(ptr);
    return ret;
}

void tcc_memstats(void)
{



}

static void tcc_cleanup(void)
{
    int i, n;

    if (((void *)0) == tcc_state)
        return;
    tcc_state = ((void *)0);


    free_defines(((void *)0));


    n = tok_ident - 256;
    for(i = 0; i < n; i++)
        tcc_free(table_ident[i]);
    tcc_free(table_ident);


    dynarray_reset(&sym_pools, &nb_sym_pools);

    cstr_free(&tokcstr);

    sym_free_first = ((void *)0);

    macro_ptr = ((void *)0);
}

TCCState *tcc_new(void)
{
    TCCState *s;

    tcc_cleanup();

    s = tcc_mallocz(sizeof(TCCState));
    if (!s)
        return ((void *)0);
    tcc_state = s;
    s->output_type = 0;
    s->tcc_lib_path = "/usr/local/lib/tcc";

    preprocess_new();



    define_push(TOK___LINE__, 0, ((void *)0), ((void *)0));
    define_push(TOK___FILE__, 0, ((void *)0), ((void *)0));
    define_push(TOK___DATE__, 0, ((void *)0), ((void *)0));
    define_push(TOK___TIME__, 0, ((void *)0), ((void *)0));


    tcc_define_symbol(s, "__STDC__", ((void *)0));
    tcc_define_symbol(s, "__STDC_VERSION__", "199901L");

    tcc_define_symbol(s, "__i386__", ((void *)0));
# 1805 "libtcc.c"
    tcc_define_symbol(s, "__unix__", ((void *)0));
    tcc_define_symbol(s, "__unix", ((void *)0));






    tcc_define_symbol(s, "__TINYC__", ((void *)0));


    tcc_define_symbol(s, "__SIZE_TYPE__", "unsigned int");
    tcc_define_symbol(s, "__PTRDIFF_TYPE__", "int");



    tcc_define_symbol(s, "__WCHAR_TYPE__", "int");




    tcc_add_library_path(s, "" "/usr/local/lib");
    tcc_add_library_path(s, "" "/usr/lib");
    tcc_add_library_path(s, "" "/lib");



    dynarray_add((void ***)&s->sections, &s->nb_sections, ((void *)0));


    text_section = new_section(s, ".text", 1, (1 << 1) | (1 << 2));
    data_section = new_section(s, ".data", 1, (1 << 1) | (1 << 0));
    bss_section = new_section(s, ".bss", 8, (1 << 1) | (1 << 0));


    symtab_section = new_symtab(s, ".symtab", 2, 0,
                                ".strtab",
                                ".hashtab", 0x80000000);
    strtab_section = symtab_section->link;


    s->dynsymtab_section = new_symtab(s, ".dynsymtab", 2, 0x80000000,
                                      ".dynstrtab",
                                      ".dynhashtab", 0x80000000);
    s->alacarte_link = 1;
# 1858 "libtcc.c"
    return s;
}

void tcc_delete(TCCState *s1)
{
    int i;

    tcc_cleanup();


    for(i = 1; i < s1->nb_sections; i++)
        free_section(s1->sections[i]);
    dynarray_reset(&s1->sections, &s1->nb_sections);

    for(i = 0; i < s1->nb_priv_sections; i++)
        free_section(s1->priv_sections[i]);
    dynarray_reset(&s1->priv_sections, &s1->nb_priv_sections);


    for ( i = 0; i < s1->nb_loaded_dlls; i++) {
        DLLReference *ref = s1->loaded_dlls[i];
        if ( ref->handle )
            dlclose(ref->handle);
    }


    dynarray_reset(&s1->loaded_dlls, &s1->nb_loaded_dlls);


    dynarray_reset(&s1->library_paths, &s1->nb_library_paths);


    dynarray_reset(&s1->cached_includes, &s1->nb_cached_includes);
    dynarray_reset(&s1->include_paths, &s1->nb_include_paths);
    dynarray_reset(&s1->sysinclude_paths, &s1->nb_sysinclude_paths);

    tcc_free(s1);
}

int tcc_add_include_path(TCCState *s1, const char *pathname)
{
    char *pathname1;

    pathname1 = tcc_strdup(pathname);
    dynarray_add((void ***)&s1->include_paths, &s1->nb_include_paths, pathname1);
    return 0;
}

int tcc_add_sysinclude_path(TCCState *s1, const char *pathname)
{
    char *pathname1;

    pathname1 = tcc_strdup(pathname);
    dynarray_add((void ***)&s1->sysinclude_paths, &s1->nb_sysinclude_paths, pathname1);
    return 0;
}

static int tcc_add_file_internal(TCCState *s1, const char *filename, int flags)
{
    const char *ext;
    Elf32_Ehdr ehdr;
    int fd, ret;
    BufferedFile *saved_file;


    ext = tcc_fileextension(filename);
    if (ext[0])
        ext++;


    saved_file = file;
    file = tcc_open(s1, filename);
    if (!file) {
        if (flags & 0x0001) {
            error_noabort("file '%s' not found", filename);
        }
        ret = -1;
        goto fail1;
    }

    if (flags & 0x0004) {
        ret = tcc_preprocess(s1);
    } else if (!ext[0] || !strcmp(ext, "c")) {

        ret = tcc_compile(s1);
    } else

    if (!strcmp(ext, "S")) {

        ret = tcc_assemble(s1, 1);
    } else if (!strcmp(ext, "s")) {

        ret = tcc_assemble(s1, 0);
    } else






    {
        fd = file->fd;

        ret = read(fd, &ehdr, sizeof(ehdr));
        lseek(fd, 0, 0);
        if (ret <= 0) {
            error_noabort("could not read header");
            goto fail;
        } else if (ret != sizeof(ehdr)) {
            goto try_load_script;
        }

        if (ehdr.e_ident[0] == 0x7f &&
            ehdr.e_ident[1] == 'E' &&
            ehdr.e_ident[2] == 'L' &&
            ehdr.e_ident[3] == 'F') {
            file->line_num = 0;
            if (ehdr.e_type == 1) {
                ret = tcc_load_object_file(s1, fd, 0);
            } else if (ehdr.e_type == 3) {
                if (s1->output_type == 0) {



                    void *h;
                    h = dlopen(filename, 0x8 | 0x1);
                    if (h)
                        ret = 0;
                    else
                        ret = -1;

                } else {
                    ret = tcc_load_dll(s1, fd, filename,
                                       (flags & 0x0002) != 0);
                }
            } else {
                error_noabort("unrecognized ELF file");
                goto fail;
            }
        } else if (memcmp((char *)&ehdr, "!<arch>\012", 8) == 0) {
            file->line_num = 0;
            ret = tcc_load_archive(s1, fd);
        } else
# 2011 "libtcc.c"
        {

        try_load_script:
            ret = tcc_load_ldscript(s1);
            if (ret < 0) {
                error_noabort("unrecognized file type");
                goto fail;
            }
        }
    }
 the_end:
    tcc_close(file);
 fail1:
    file = saved_file;
    return ret;
 fail:
    ret = -1;
    goto the_end;
}

int tcc_add_file(TCCState *s, const char *filename)
{
    if (s->output_type == 4)
        return tcc_add_file_internal(s, filename, 0x0001 | 0x0004);
    else
        return tcc_add_file_internal(s, filename, 0x0001);
}

int tcc_add_library_path(TCCState *s, const char *pathname)
{
    char *pathname1;

    pathname1 = tcc_strdup(pathname);
    dynarray_add((void ***)&s->library_paths, &s->nb_library_paths, pathname1);
    return 0;
}



static int tcc_add_dll(TCCState *s, const char *filename, int flags)
{
    char buf[1024];
    int i;

    for(i = 0; i < s->nb_library_paths; i++) {
        snprintf(buf, sizeof(buf), "%s/%s",
                 s->library_paths[i], filename);
        if (tcc_add_file_internal(s, buf, flags) == 0)
            return 0;
    }
    return -1;
}


int tcc_add_library(TCCState *s, const char *libraryname)
{
    char buf[1024];
    int i;


    if (!s->static_link) {



        snprintf(buf, sizeof(buf), "lib%s.so", libraryname);

        if (tcc_add_dll(s, buf, 0) == 0)
            return 0;
    }


    for(i = 0; i < s->nb_library_paths; i++) {
        snprintf(buf, sizeof(buf), "%s/lib%s.a",
                 s->library_paths[i], libraryname);
        if (tcc_add_file_internal(s, buf, 0) == 0)
            return 0;
    }
    return -1;
}

int tcc_add_symbol(TCCState *s, const char *name, void *val)
{
    add_elf_sym(symtab_section, (unsigned long)val, 0,
                (((1) << 4) + ((0) & 0xf)), 0,
                0xfff1, name);
    return 0;
}

int tcc_set_output_type(TCCState *s, int output_type)
{
    char buf[1024];

    s->output_type = output_type;

    if (!s->nostdinc) {



        tcc_add_sysinclude_path(s, "" "/usr/local/include");
        tcc_add_sysinclude_path(s, "" "/usr/include");

        snprintf(buf, sizeof(buf), "%s/include", s->tcc_lib_path);
        tcc_add_sysinclude_path(s, buf);




    }



    if (s->do_bounds_check) {

        tcc_define_symbol(s, "__BOUNDS_CHECKING_ON", ((void *)0));

        bounds_section = new_section(s, ".bounds",
                                     1, (1 << 1));
        lbounds_section = new_section(s, ".lbounds",
                                      1, (1 << 1));
    }


    if (s->char_is_unsigned) {
        tcc_define_symbol(s, "__CHAR_UNSIGNED__", ((void *)0));
    }


    if (s->do_debug) {

        stab_section = new_section(s, ".stab", 1, 0);
        stab_section->sh_entsize = sizeof(Stab_Sym);
        stabstr_section = new_section(s, ".stabstr", 3, 0);
        put_elf_str(stabstr_section, "");
        stab_section->link = stabstr_section;

        put_stabs("", 0, 0, 0, 0);
    }



    if ((output_type == 1 || output_type == 2) &&
        !s->nostdlib) {
        if (output_type != 2)
            tcc_add_file(s, "" "/usr/lib" "/crt1.o");
        tcc_add_file(s, "" "/usr/lib" "/crti.o");
    }







    return 0;
}




typedef struct FlagDef {
    uint16_t offset;
    uint16_t flags;
    const char *name;
} FlagDef;

static const FlagDef warning_defs[] = {
    { ((size_t) &((TCCState *)0)->warn_unsupported), 0, "unsupported" },
    { ((size_t) &((TCCState *)0)->warn_write_strings), 0, "write-strings" },
    { ((size_t) &((TCCState *)0)->warn_error), 0, "error" },
    { ((size_t) &((TCCState *)0)->warn_implicit_function_declaration), 0x0001,
      "implicit-function-declaration" },
};

static int set_flag(TCCState *s, const FlagDef *flags, int nb_flags,
                    const char *name, int value)
{
    int i;
    const FlagDef *p;
    const char *r;

    r = name;
    if (r[0] == 'n' && r[1] == 'o' && r[2] == '-') {
        r += 3;
        value = !value;
    }
    for(i = 0, p = flags; i < nb_flags; i++, p++) {
        if (!strcmp(r, p->name))
            goto found;
    }
    return -1;
 found:
    if (p->flags & 0x0002)
        value = !value;
    *(int *)((uint8_t *)s + p->offset) = value;
    return 0;
}



int tcc_set_warning(TCCState *s, const char *warning_name, int value)
{
    int i;
    const FlagDef *p;

    if (!strcmp(warning_name, "all")) {
        for(i = 0, p = warning_defs; i < (sizeof(warning_defs) / sizeof((warning_defs)[0])); i++, p++) {
            if (p->flags & 0x0001)
                *(int *)((uint8_t *)s + p->offset) = 1;
        }
        return 0;
    } else {
        return set_flag(s, warning_defs, (sizeof(warning_defs) / sizeof((warning_defs)[0])),
                        warning_name, value);
    }
}

static const FlagDef flag_defs[] = {
    { ((size_t) &((TCCState *)0)->char_is_unsigned), 0, "unsigned-char" },
    { ((size_t) &((TCCState *)0)->char_is_unsigned), 0x0002, "signed-char" },
    { ((size_t) &((TCCState *)0)->nocommon), 0x0002, "common" },
    { ((size_t) &((TCCState *)0)->leading_underscore), 0, "leading-underscore" },
};


int tcc_set_flag(TCCState *s, const char *flag_name, int value)
{
    return set_flag(s, flag_defs, (sizeof(flag_defs) / sizeof((flag_defs)[0])),
                    flag_name, value);
}


void tcc_set_lib_path(TCCState *s, const char *path)
{
    s->tcc_lib_path = tcc_strdup(path);
}

void tcc_print_stats(TCCState *s, int64_t total_time)
{
    double tt;
    tt = (double)total_time / 1000000.0;
    if (tt < 0.001)
        tt = 0.001;
    if (total_bytes < 1)
        total_bytes = 1;
    printf("%d idents, %d lines, %d bytes, %0.3f s, %d lines/s, %0.1f MB/s\n",
           tok_ident - 256, total_lines, total_bytes,
           tt, (int)(total_lines / tt),
           total_bytes / tt / 1000000.0);
}
