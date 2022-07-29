# 1 "tcc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "tcc.c"
# 21 "tcc.c"
# 1 "libtcc.c" 1
# 21 "libtcc.c"
# 1 "tcc.h" 1
# 22 "tcc.h"
# 1 "config.h" 1
# 23 "tcc.h" 2
# 31 "tcc.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 442 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 443 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 444 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 214 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
# 251 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





 typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) ;



extern double atof (const char *__nptr)
     ;

extern int atoi (const char *__nptr)
     ;

extern long int atol (const char *__nptr)
     ;



 extern long long int atoll (const char *__nptr)
     ;



extern double strtod (const char *restrict __nptr,
        char **restrict __endptr)
     ;



extern float strtof (const char *restrict __nptr,
       char **restrict __endptr) ;

extern long double strtold (const char *restrict __nptr,
       char **restrict __endptr)
     ;
# 140 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *restrict __nptr,
     char **restrict __endptr)
     ;



extern _Float64 strtof64 (const char *restrict __nptr,
     char **restrict __endptr)
     ;
# 158 "/usr/include/stdlib.h" 3 4
extern _Float32x strtof32x (const char *restrict __nptr,
       char **restrict __endptr)
     ;



extern _Float64x strtof64x (const char *restrict __nptr,
       char **restrict __endptr)
     ;
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *restrict __nptr,
   char **restrict __endptr, int __base)
     ;

extern unsigned long int strtoul (const char *restrict __nptr,
      char **restrict __endptr, int __base)
     ;




extern long long int strtoq (const char *restrict __nptr,
        char **restrict __endptr, int __base)
     ;


extern unsigned long long int strtouq (const char *restrict __nptr,
           char **restrict __endptr, int __base)
     ;





extern long long int strtoll (const char *restrict __nptr,
         char **restrict __endptr, int __base)
     ;


extern unsigned long long int strtoull (const char *restrict __nptr,
     char **restrict __endptr, int __base)
     ;




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     ;

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     ;

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     ;
# 232 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     ;



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     ;
# 250 "/usr/include/stdlib.h" 3 4
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     ;



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     ;
# 272 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 273 "/usr/include/stdlib.h" 2 3 4

extern long int strtol_l (const char *restrict __nptr,
     char **restrict __endptr, int __base,
     locale_t __loc) ;

extern unsigned long int strtoul_l (const char *restrict __nptr,
        char **restrict __endptr,
        int __base, locale_t __loc)
     ;


extern long long int strtoll_l (const char *restrict __nptr,
    char **restrict __endptr, int __base,
    locale_t __loc)
     ;


extern unsigned long long int strtoull_l (const char *restrict __nptr,
       char **restrict __endptr,
       int __base, locale_t __loc)
     ;

extern double strtod_l (const char *restrict __nptr,
   char **restrict __endptr, locale_t __loc)
     ;

extern float strtof_l (const char *restrict __nptr,
         char **restrict __endptr, locale_t __loc)
     ;

extern long double strtold_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;
# 316 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
     ;



extern _Float64 strtof64_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
     ;
# 337 "/usr/include/stdlib.h" 3 4
extern _Float32x strtof32x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;



extern _Float64x strtof64x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 140 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4




typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;

typedef unsigned long int u_int64_t;




typedef int register_t;
# 193 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
 static inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56));

}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 9 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *restrict __readfds,
     fd_set *restrict __writefds,
     fd_set *restrict __exceptfds,
     struct timeval *restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *restrict __readfds,
      fd_set *restrict __writefds,
      fd_set *restrict __exceptfds,
      const struct timespec *restrict __timeout,
      const __sigset_t *restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 197 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 236 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
};
# 78 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 118 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 148 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  int __kind;
 




  short __spins; short __elision;
  __pthread_list_t __list;
# 165 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  union
  {
    unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  union
  {
    unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 245 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *restrict __buf,
       int32_t *restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *restrict __statebuf,
   size_t __statelen,
   struct random_data *restrict __buf)
     ;

extern int setstate_r (char *restrict __statebuf,
         struct random_data *restrict __buf)
     ;





extern int rand (void) ;

extern void srand (unsigned int __seed) ;



extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *restrict __buffer,
        double *restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        double *restrict __result) ;


extern int lrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;


extern int mrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;




extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;






extern void *realloc (void *__ptr, size_t __size)
     ;







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     ;



extern void free (void *__ptr) ;


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) ;






# 567 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     ;



extern void abort (void) ;



extern int atexit (void (*__func) (void)) ;







extern int at_quick_exit (void (*__func) (void)) ;






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;





extern void exit (int __status) ;





extern void quick_exit (int __status) ;





extern void _Exit (int __status) ;




extern char *getenv (const char *__name) ;




extern char *secure_getenv (const char *__name)
     ;






extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     ;


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
# 672 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) ;
# 685 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) ;
# 695 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) ;
# 707 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     ;
# 728 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) ;
# 739 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) ;
# 749 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) ;
# 759 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     ;
# 771 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     ;
# 781 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
     ;
# 797 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *restrict __name,
         char *restrict __resolved) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  ;




extern int abs (int __x) ;
extern long int labs (long int __x) ;


 extern long long int llabs (long long int __x)
     ;






extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;


 extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;
# 869 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign) ;




extern char *fcvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
     ;





extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *restrict __pwc,
     const char *restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *restrict __pwcs,
   const char *restrict __s, size_t __n) ;

extern size_t wcstombs (char *restrict __s,
   const wchar_t *restrict __pwcs, size_t __n)
     ;







extern int rpmatch (const char *__response) ;
# 954 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **restrict __optionp,
        char *const *restrict __tokens,
        char **restrict __valuep)
     ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) ;



extern int unlockpt (int __fd) ;




extern char *ptsname (int __fd) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     ;


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     ;
# 1010 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1011 "/usr/include/stdlib.h" 2 3 4
# 1020 "/usr/include/stdlib.h" 3 4

# 32 "tcc.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4
# 56 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h" 1 3 4
# 99 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 2 3 4
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;
# 164 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) ;







extern FILE *tmpfile (void) ;
# 183 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) ;




extern char *tmpnam_r (char *__s) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 237 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *restrict __filename,
      const char *restrict __modes) ;




extern FILE *freopen (const char *restrict __filename,
        const char *restrict __modes,
        FILE *restrict __stream) ;
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *restrict __filename,
        const char *restrict __modes) ;
extern FILE *freopen64 (const char *restrict __filename,
   const char *restrict __modes,
   FILE *restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) ;





extern FILE *fopencookie (void *restrict __magic_cookie,
     const char *restrict __modes,
     cookie_io_functions_t __io_funcs) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) ;





extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
      int __modes, size_t __n) ;




extern void setbuffer (FILE *restrict __stream, char *restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;







extern int fprintf (FILE *restrict __stream,
      const char *restrict __format, ...);




extern int printf (const char *restrict __format, ...);

extern int sprintf (char *restrict __s,
      const char *restrict __format, ...) ;





extern int vfprintf (FILE *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg) ;



extern int snprintf (char *restrict __s, size_t __maxlen,
       const char *restrict __format, ...)
     ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
        const char *restrict __format, __gnuc_va_list __arg)
     ;





extern int vasprintf (char **restrict __ptr, const char *restrict __f,
        __gnuc_va_list __arg)
     ;
extern int __asprintf (char **restrict __ptr,
         const char *restrict __fmt, ...)
     ;
extern int asprintf (char **restrict __ptr,
       const char *restrict __fmt, ...)
     ;




extern int vdprintf (int __fd, const char *restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *restrict __fmt, ...)
     ;







extern int fscanf (FILE *restrict __stream,
     const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
     const char *restrict __format, ...) ;
# 434 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
      __gnuc_va_list __arg)
     ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
     ;


extern int vsscanf (const char *restrict __s,
      const char *restrict __format, __gnuc_va_list __arg)
     ;
# 491 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 516 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 527 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 543 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
     ;
# 593 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *restrict __s, int __n,
        FILE *restrict __stream) ;
# 609 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **restrict __lineptr,
                             size_t *restrict __n, int __delimiter,
                             FILE *restrict __stream) ;
extern __ssize_t getdelim (char **restrict __lineptr,
                           size_t *restrict __n, int __delimiter,
                           FILE *restrict __stream) ;







extern __ssize_t getline (char **restrict __lineptr,
                          size_t *restrict __n,
                          FILE *restrict __stream) ;







extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
       size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
        size_t __n, FILE *restrict __s);
# 668 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *restrict __s,
      FILE *restrict __stream);
# 679 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *restrict __ptr, size_t __size,
         size_t __n, FILE *restrict __stream) ;
extern size_t fwrite_unlocked (const void *restrict __ptr, size_t __size,
          size_t __n, FILE *restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 713 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 737 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 756 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *restrict __stream, fpos64_t *restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;



extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 788 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
# 806 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *restrict __obstack,
      const char *restrict __format, ...)
     ;
extern int obstack_vprintf (struct obstack *restrict __obstack,
       const char *restrict __format,
       __gnuc_va_list __args)
     ;







extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream) ;
# 864 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 879 "/usr/include/stdio.h" 3 4

# 33 "tcc.h" 2

# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 42 "/usr/include/string.h" 3 4
extern void *memcpy (void *restrict __dest, const void *restrict __src,
       size_t __n) ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;





extern void *memccpy (void *restrict __dest, const void *restrict __src,
        int __c, size_t __n)
     ;




extern void *memset (void *__s, int __c, size_t __n) ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
# 90 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      ;
# 103 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     ;
# 114 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      ;





extern char *strcpy (char *restrict __dest, const char *restrict __src)
     ;

extern char *strncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
     ;


extern char *strcat (char *restrict __dest, const char *restrict __src)
     ;

extern char *strncat (char *restrict __dest, const char *restrict __src,
        size_t __n) ;


extern int strcmp (const char *__s1, const char *__s2)
     ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;


extern int strcoll (const char *__s1, const char *__s2)
     ;

extern size_t strxfrm (char *restrict __dest,
         const char *restrict __src, size_t __n)
     ;






extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     ;


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) ;





extern char *strdup (const char *__s)
     ;






extern char *strndup (const char *__string, size_t __n)
     ;
# 225 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     ;
# 252 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     ;
# 265 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     ;





extern size_t strcspn (const char *__s, const char *__reject)
     ;


extern size_t strspn (const char *__s, const char *__accept)
     ;
# 302 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     ;
# 329 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     ;




extern char *strtok (char *restrict __s, const char *restrict __delim)
     ;



extern char *__strtok_r (char *restrict __s,
    const char *restrict __delim,
    char **restrict __save_ptr)
     ;

extern char *strtok_r (char *restrict __s, const char *restrict __delim,
         char **restrict __save_ptr)
     ;
# 359 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     ;







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     ;



extern void *__mempcpy (void *restrict __dest,
   const void *restrict __src, size_t __n)
     ;
extern void *mempcpy (void *restrict __dest,
        const void *restrict __src, size_t __n)
     ;




extern size_t strlen (const char *__s)
     ;




extern size_t strnlen (const char *__string, size_t __maxlen)
     ;




extern char *strerror (int __errnum) ;
# 420 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     ;





extern char *strerror_l (int __errnum, locale_t __l) ;



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;


extern void bcopy (const void *__src, void *__dest, size_t __n)
  ;


extern void bzero (void *__s, size_t __n) ;
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     ;
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     ;






extern int ffs (int __i) ;





extern int ffsl (long int __l) ;
 extern int ffsll (long long int __ll)
     ;



extern int strcasecmp (const char *__s1, const char *__s2)
     ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     ;



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     ;



# 432 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) ;



extern char *strsep (char **restrict __stringp,
       const char *restrict __delim)
     ;




extern char *strsignal (int __sig) ;


extern char *__stpcpy (char *restrict __dest, const char *restrict __src)
     ;
extern char *stpcpy (char *restrict __dest, const char *restrict __src)
     ;



extern char *__stpncpy (char *restrict __dest,
   const char *restrict __src, size_t __n)
     ;
extern char *stpncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
     ;




extern int strverscmp (const char *__s1, const char *__s2)
     ;


extern char *strfry (char *__string) ;


extern void *memfrob (void *__s, size_t __n) ;
# 486 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) ;
# 498 "/usr/include/string.h" 3 4

# 35 "tcc.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4








extern int *__errno_location (void) ;







extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 3 4
typedef int error_t;
# 49 "/usr/include/errno.h" 2 3 4




# 36 "tcc.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/math.h" 2 3 4












# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 41 "/usr/include/math.h" 2 3 4
# 138 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 1 3 4
# 139 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
typedef float float_t;
typedef double double_t;
# 190 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-logb.h" 1 3 4
# 191 "/usr/include/math.h" 2 3 4
# 233 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 1 3 4
# 234 "/usr/include/math.h" 2 3 4



enum
  {
    FP_INT_UPWARD =

      0,
    FP_INT_DOWNWARD =

      1,
    FP_INT_TOWARDZERO =

      2,
    FP_INT_TONEARESTFROMZERO =

      3,
    FP_INT_TONEAREST =

      4,
  };
# 289 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassify (double __value)
     ;


extern int __signbit (double __value)
     ;



extern int __isinf (double __value) ;


extern int __finite (double __value) ;


extern int __isnan (double __value) ;


extern int __iseqsig (double __x, double __y) ;


extern int __issignaling (double __value)
     ;
# 290 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos (double __x) ; extern double __acos (double __x) ;

extern double asin (double __x) ; extern double __asin (double __x) ;

extern double atan (double __x) ; extern double __atan (double __x) ;

extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;


 extern double cos (double __x) ; extern double __cos (double __x) ;

 extern double sin (double __x) ; extern double __sin (double __x) ;

extern double tan (double __x) ; extern double __tan (double __x) ;




extern double cosh (double __x) ; extern double __cosh (double __x) ;

extern double sinh (double __x) ; extern double __sinh (double __x) ;

extern double tanh (double __x) ; extern double __tanh (double __x) ;



 extern void sincos (double __x, double *__sinx, double *__cosx) ; extern void __sincos (double __x, double *__sinx, double *__cosx)
                                                        ;




extern double acosh (double __x) ; extern double __acosh (double __x) ;

extern double asinh (double __x) ; extern double __asinh (double __x) ;

extern double atanh (double __x) ; extern double __atanh (double __x) ;





 extern double exp (double __x) ; extern double __exp (double __x) ;


extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;


extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;


 extern double log (double __x) ; extern double __log (double __x) ;


extern double log10 (double __x) ; extern double __log10 (double __x) ;


extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr) ;



extern double exp10 (double __x) ; extern double __exp10 (double __x) ;




extern double expm1 (double __x) ; extern double __expm1 (double __x) ;


extern double log1p (double __x) ; extern double __log1p (double __x) ;


extern double logb (double __x) ; extern double __logb (double __x) ;




extern double exp2 (double __x) ; extern double __exp2 (double __x) ;


extern double log2 (double __x) ; extern double __log2 (double __x) ;






 extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;


extern double sqrt (double __x) ; extern double __sqrt (double __x) ;



extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;




extern double cbrt (double __x) ; extern double __cbrt (double __x) ;






extern double ceil (double __x) ; extern double __ceil (double __x) ;


extern double fabs (double __x) ; extern double __fabs (double __x) ;


extern double floor (double __x) ; extern double __floor (double __x) ;


extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinf (double __value) ;




extern int finite (double __value) ;


extern double drem (double __x, double __y) ; extern double __drem (double __x, double __y) ;



extern double significand (double __x) ; extern double __significand (double __x) ;






extern double copysign (double __x, double __y) ; extern double __copysign (double __x, double __y) ;




extern double nan (const char *__tagb) ; extern double __nan (const char *__tagb) ;
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnan (double __value) ;





extern double j0 (double) ; extern double __j0 (double) ;
extern double j1 (double) ; extern double __j1 (double) ;
extern double jn (int, double) ; extern double __jn (int, double) ;
extern double y0 (double) ; extern double __y0 (double) ;
extern double y1 (double) ; extern double __y1 (double) ;
extern double yn (int, double) ; extern double __yn (int, double) ;





extern double erf (double) ; extern double __erf (double) ;
extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;




extern double tgamma (double) ; extern double __tgamma (double) ;





extern double gamma (double) ; extern double __gamma (double) ;







extern double lgamma_r (double, int *__signgamp) ; extern double __lgamma_r (double, int *__signgamp) ;






extern double rint (double __x) ; extern double __rint (double __x) ;


extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;

extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;




extern double nextdown (double __x) ; extern double __nextdown (double __x) ;

extern double nextup (double __x) ; extern double __nextup (double __x) ;



extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;



extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;



extern int ilogb (double __x) ; extern int __ilogb (double __x) ;




extern long int llogb (double __x) ; extern long int __llogb (double __x) ;




extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;



extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;



extern double round (double __x) ; extern double __round (double __x) ;



extern double trunc (double __x) ; extern double __trunc (double __x) ;




extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;






extern long int lrint (double __x) ; extern long int __lrint (double __x) ;

extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;



extern long int lround (double __x) ; extern long int __lround (double __x) ;

extern long long int llround (double __x) ; extern long long int __llround (double __x) ;



extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;


extern double fmax (double __x, double __y) ; extern double __fmax (double __x, double __y) ;


extern double fmin (double __x, double __y) ; extern double __fmin (double __x, double __y) ;


extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;




extern double roundeven (double __x) ; extern double __roundeven (double __x) ;



extern __intmax_t fromfp (double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfp (double __x, int __round, unsigned int __width)
                            ;



extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width)
                              ;




extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width)
                             ;




extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width)
                               ;


extern double fmaxmag (double __x, double __y) ; extern double __fmaxmag (double __x, double __y) ;


extern double fminmag (double __x, double __y) ; extern double __fminmag (double __x, double __y) ;


extern int totalorder (double __x, double __y)
     ;


extern int totalordermag (double __x, double __y)
     ;


extern int canonicalize (double *__cx, const double *__x) ;


extern double getpayload (const double *__x) ; extern double __getpayload (const double *__x) ;


extern int setpayload (double *__x, double __payload) ;


extern int setpayloadsig (double *__x, double __payload) ;







extern double scalb (double __x, double __n) ; extern double __scalb (double __x, double __n) ;
# 291 "/usr/include/math.h" 2 3 4
# 306 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf (float __value)
     ;


extern int __signbitf (float __value)
     ;



extern int __isinff (float __value) ;


extern int __finitef (float __value) ;


extern int __isnanf (float __value) ;


extern int __iseqsigf (float __x, float __y) ;


extern int __issignalingf (float __value)
     ;
# 307 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf (float __x) ; extern float __acosf (float __x) ;

extern float asinf (float __x) ; extern float __asinf (float __x) ;

extern float atanf (float __x) ; extern float __atanf (float __x) ;

extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;


 extern float cosf (float __x) ; extern float __cosf (float __x) ;

 extern float sinf (float __x) ; extern float __sinf (float __x) ;

extern float tanf (float __x) ; extern float __tanf (float __x) ;




extern float coshf (float __x) ; extern float __coshf (float __x) ;

extern float sinhf (float __x) ; extern float __sinhf (float __x) ;

extern float tanhf (float __x) ; extern float __tanhf (float __x) ;



 extern void sincosf (float __x, float *__sinx, float *__cosx) ; extern void __sincosf (float __x, float *__sinx, float *__cosx)
                                                        ;




extern float acoshf (float __x) ; extern float __acoshf (float __x) ;

extern float asinhf (float __x) ; extern float __asinhf (float __x) ;

extern float atanhf (float __x) ; extern float __atanhf (float __x) ;





 extern float expf (float __x) ; extern float __expf (float __x) ;


extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;


extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;


 extern float logf (float __x) ; extern float __logf (float __x) ;


extern float log10f (float __x) ; extern float __log10f (float __x) ;


extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr) ;



extern float exp10f (float __x) ; extern float __exp10f (float __x) ;




extern float expm1f (float __x) ; extern float __expm1f (float __x) ;


extern float log1pf (float __x) ; extern float __log1pf (float __x) ;


extern float logbf (float __x) ; extern float __logbf (float __x) ;




extern float exp2f (float __x) ; extern float __exp2f (float __x) ;


extern float log2f (float __x) ; extern float __log2f (float __x) ;






 extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;


extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;



extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;




extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;






extern float ceilf (float __x) ; extern float __ceilf (float __x) ;


extern float fabsf (float __x) ; extern float __fabsf (float __x) ;


extern float floorf (float __x) ; extern float __floorf (float __x) ;


extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinff (float __value) ;




extern int finitef (float __value) ;


extern float dremf (float __x, float __y) ; extern float __dremf (float __x, float __y) ;



extern float significandf (float __x) ; extern float __significandf (float __x) ;






extern float copysignf (float __x, float __y) ; extern float __copysignf (float __x, float __y) ;




extern float nanf (const char *__tagb) ; extern float __nanf (const char *__tagb) ;
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanf (float __value) ;





extern float j0f (float) ; extern float __j0f (float) ;
extern float j1f (float) ; extern float __j1f (float) ;
extern float jnf (int, float) ; extern float __jnf (int, float) ;
extern float y0f (float) ; extern float __y0f (float) ;
extern float y1f (float) ; extern float __y1f (float) ;
extern float ynf (int, float) ; extern float __ynf (int, float) ;





extern float erff (float) ; extern float __erff (float) ;
extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;




extern float tgammaf (float) ; extern float __tgammaf (float) ;





extern float gammaf (float) ; extern float __gammaf (float) ;







extern float lgammaf_r (float, int *__signgamp) ; extern float __lgammaf_r (float, int *__signgamp) ;






extern float rintf (float __x) ; extern float __rintf (float __x) ;


extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;

extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;




extern float nextdownf (float __x) ; extern float __nextdownf (float __x) ;

extern float nextupf (float __x) ; extern float __nextupf (float __x) ;



extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;



extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;



extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;




extern long int llogbf (float __x) ; extern long int __llogbf (float __x) ;




extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;



extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;



extern float roundf (float __x) ; extern float __roundf (float __x) ;



extern float truncf (float __x) ; extern float __truncf (float __x) ;




extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;






extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;

extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;



extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;

extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;



extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;


extern float fmaxf (float __x, float __y) ; extern float __fmaxf (float __x, float __y) ;


extern float fminf (float __x, float __y) ; extern float __fminf (float __x, float __y) ;


extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;




extern float roundevenf (float __x) ; extern float __roundevenf (float __x) ;



extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width)
                            ;



extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width)
                              ;




extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width)
                             ;




extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width)
                               ;


extern float fmaxmagf (float __x, float __y) ; extern float __fmaxmagf (float __x, float __y) ;


extern float fminmagf (float __x, float __y) ; extern float __fminmagf (float __x, float __y) ;


extern int totalorderf (float __x, float __y)
     ;


extern int totalordermagf (float __x, float __y)
     ;


extern int canonicalizef (float *__cx, const float *__x) ;


extern float getpayloadf (const float *__x) ; extern float __getpayloadf (const float *__x) ;


extern int setpayloadf (float *__x, float __payload) ;


extern int setpayloadsigf (float *__x, float __payload) ;







extern float scalbf (float __x, float __n) ; extern float __scalbf (float __x, float __n) ;
# 308 "/usr/include/math.h" 2 3 4
# 349 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyl (long double __value)
     ;


extern int __signbitl (long double __value)
     ;



extern int __isinfl (long double __value) ;


extern int __finitel (long double __value) ;


extern int __isnanl (long double __value) ;


extern int __iseqsigl (long double __x, long double __y) ;


extern int __issignalingl (long double __value)
     ;
# 350 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;

extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;

extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;

extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;


 extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;

 extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;

extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;




extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;

extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;

extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;



 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) ; extern void __sincosl (long double __x, long double *__sinx, long double *__cosx)
                                                        ;




extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;

extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;

extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;





 extern long double expl (long double __x) ; extern long double __expl (long double __x) ;


extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;


extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;


 extern long double logl (long double __x) ; extern long double __logl (long double __x) ;


extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;


extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr) ;



extern long double exp10l (long double __x) ; extern long double __exp10l (long double __x) ;




extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;


extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;


extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;




extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;


extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;






 extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;


extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;



extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;




extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;






extern long double ceill (long double __x) ; extern long double __ceill (long double __x) ;


extern long double fabsl (long double __x) ; extern long double __fabsl (long double __x) ;


extern long double floorl (long double __x) ; extern long double __floorl (long double __x) ;


extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinfl (long double __value) ;




extern int finitel (long double __value) ;


extern long double dreml (long double __x, long double __y) ; extern long double __dreml (long double __x, long double __y) ;



extern long double significandl (long double __x) ; extern long double __significandl (long double __x) ;






extern long double copysignl (long double __x, long double __y) ; extern long double __copysignl (long double __x, long double __y) ;




extern long double nanl (const char *__tagb) ; extern long double __nanl (const char *__tagb) ;
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanl (long double __value) ;





extern long double j0l (long double) ; extern long double __j0l (long double) ;
extern long double j1l (long double) ; extern long double __j1l (long double) ;
extern long double jnl (int, long double) ; extern long double __jnl (int, long double) ;
extern long double y0l (long double) ; extern long double __y0l (long double) ;
extern long double y1l (long double) ; extern long double __y1l (long double) ;
extern long double ynl (int, long double) ; extern long double __ynl (int, long double) ;





extern long double erfl (long double) ; extern long double __erfl (long double) ;
extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;




extern long double tgammal (long double) ; extern long double __tgammal (long double) ;





extern long double gammal (long double) ; extern long double __gammal (long double) ;







extern long double lgammal_r (long double, int *__signgamp) ; extern long double __lgammal_r (long double, int *__signgamp) ;






extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;


extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;

extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;




extern long double nextdownl (long double __x) ; extern long double __nextdownl (long double __x) ;

extern long double nextupl (long double __x) ; extern long double __nextupl (long double __x) ;



extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;



extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;



extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;




extern long int llogbl (long double __x) ; extern long int __llogbl (long double __x) ;




extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;



extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;



extern long double roundl (long double __x) ; extern long double __roundl (long double __x) ;



extern long double truncl (long double __x) ; extern long double __truncl (long double __x) ;




extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;






extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;

extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;



extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;

extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;



extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;


extern long double fmaxl (long double __x, long double __y) ; extern long double __fmaxl (long double __x, long double __y) ;


extern long double fminl (long double __x, long double __y) ; extern long double __fminl (long double __x, long double __y) ;


extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;




extern long double roundevenl (long double __x) ; extern long double __roundevenl (long double __x) ;



extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width)
                            ;



extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width)
                              ;




extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width)
                             ;




extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width)
                               ;


extern long double fmaxmagl (long double __x, long double __y) ; extern long double __fmaxmagl (long double __x, long double __y) ;


extern long double fminmagl (long double __x, long double __y) ; extern long double __fminmagl (long double __x, long double __y) ;


extern int totalorderl (long double __x, long double __y)
     ;


extern int totalordermagl (long double __x, long double __y)
     ;


extern int canonicalizel (long double *__cx, const long double *__x) ;


extern long double getpayloadl (const long double *__x) ; extern long double __getpayloadl (const long double *__x) ;


extern int setpayloadl (long double *__x, long double __payload) ;


extern int setpayloadsigl (long double *__x, long double __payload) ;







extern long double scalbl (long double __x, long double __n) ; extern long double __scalbl (long double __x, long double __n) ;
# 351 "/usr/include/math.h" 2 3 4
# 389 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 acosf32 (_Float32 __x) ; extern _Float32 __acosf32 (_Float32 __x) ;

extern _Float32 asinf32 (_Float32 __x) ; extern _Float32 __asinf32 (_Float32 __x) ;

extern _Float32 atanf32 (_Float32 __x) ; extern _Float32 __atanf32 (_Float32 __x) ;

extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) ; extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) ;


 extern _Float32 cosf32 (_Float32 __x) ; extern _Float32 __cosf32 (_Float32 __x) ;

 extern _Float32 sinf32 (_Float32 __x) ; extern _Float32 __sinf32 (_Float32 __x) ;

extern _Float32 tanf32 (_Float32 __x) ; extern _Float32 __tanf32 (_Float32 __x) ;




extern _Float32 coshf32 (_Float32 __x) ; extern _Float32 __coshf32 (_Float32 __x) ;

extern _Float32 sinhf32 (_Float32 __x) ; extern _Float32 __sinhf32 (_Float32 __x) ;

extern _Float32 tanhf32 (_Float32 __x) ; extern _Float32 __tanhf32 (_Float32 __x) ;



 extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ; extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx)
                                                        ;




extern _Float32 acoshf32 (_Float32 __x) ; extern _Float32 __acoshf32 (_Float32 __x) ;

extern _Float32 asinhf32 (_Float32 __x) ; extern _Float32 __asinhf32 (_Float32 __x) ;

extern _Float32 atanhf32 (_Float32 __x) ; extern _Float32 __atanhf32 (_Float32 __x) ;





 extern _Float32 expf32 (_Float32 __x) ; extern _Float32 __expf32 (_Float32 __x) ;


extern _Float32 frexpf32 (_Float32 __x, int *__exponent) ; extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) ;


extern _Float32 ldexpf32 (_Float32 __x, int __exponent) ; extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) ;


 extern _Float32 logf32 (_Float32 __x) ; extern _Float32 __logf32 (_Float32 __x) ;


extern _Float32 log10f32 (_Float32 __x) ; extern _Float32 __log10f32 (_Float32 __x) ;


extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) ; extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr) ;



extern _Float32 exp10f32 (_Float32 __x) ; extern _Float32 __exp10f32 (_Float32 __x) ;




extern _Float32 expm1f32 (_Float32 __x) ; extern _Float32 __expm1f32 (_Float32 __x) ;


extern _Float32 log1pf32 (_Float32 __x) ; extern _Float32 __log1pf32 (_Float32 __x) ;


extern _Float32 logbf32 (_Float32 __x) ; extern _Float32 __logbf32 (_Float32 __x) ;




extern _Float32 exp2f32 (_Float32 __x) ; extern _Float32 __exp2f32 (_Float32 __x) ;


extern _Float32 log2f32 (_Float32 __x) ; extern _Float32 __log2f32 (_Float32 __x) ;






 extern _Float32 powf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __powf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 sqrtf32 (_Float32 __x) ; extern _Float32 __sqrtf32 (_Float32 __x) ;



extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) ;




extern _Float32 cbrtf32 (_Float32 __x) ; extern _Float32 __cbrtf32 (_Float32 __x) ;






extern _Float32 ceilf32 (_Float32 __x) ; extern _Float32 __ceilf32 (_Float32 __x) ;


extern _Float32 fabsf32 (_Float32 __x) ; extern _Float32 __fabsf32 (_Float32 __x) ;


extern _Float32 floorf32 (_Float32 __x) ; extern _Float32 __floorf32 (_Float32 __x) ;


extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) ;
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y) ;




extern _Float32 nanf32 (const char *__tagb) ; extern _Float32 __nanf32 (const char *__tagb) ;
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 j0f32 (_Float32) ; extern _Float32 __j0f32 (_Float32) ;
extern _Float32 j1f32 (_Float32) ; extern _Float32 __j1f32 (_Float32) ;
extern _Float32 jnf32 (int, _Float32) ; extern _Float32 __jnf32 (int, _Float32) ;
extern _Float32 y0f32 (_Float32) ; extern _Float32 __y0f32 (_Float32) ;
extern _Float32 y1f32 (_Float32) ; extern _Float32 __y1f32 (_Float32) ;
extern _Float32 ynf32 (int, _Float32) ; extern _Float32 __ynf32 (int, _Float32) ;





extern _Float32 erff32 (_Float32) ; extern _Float32 __erff32 (_Float32) ;
extern _Float32 erfcf32 (_Float32) ; extern _Float32 __erfcf32 (_Float32) ;
extern _Float32 lgammaf32 (_Float32) ; extern _Float32 __lgammaf32 (_Float32) ;




extern _Float32 tgammaf32 (_Float32) ; extern _Float32 __tgammaf32 (_Float32) ;
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) ; extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) ;






extern _Float32 rintf32 (_Float32 __x) ; extern _Float32 __rintf32 (_Float32 __x) ;


extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) ;






extern _Float32 nextdownf32 (_Float32 __x) ; extern _Float32 __nextdownf32 (_Float32 __x) ;

extern _Float32 nextupf32 (_Float32 __x) ; extern _Float32 __nextupf32 (_Float32 __x) ;



extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) ;



extern _Float32 scalbnf32 (_Float32 __x, int __n) ; extern _Float32 __scalbnf32 (_Float32 __x, int __n) ;



extern int ilogbf32 (_Float32 __x) ; extern int __ilogbf32 (_Float32 __x) ;




extern long int llogbf32 (_Float32 __x) ; extern long int __llogbf32 (_Float32 __x) ;




extern _Float32 scalblnf32 (_Float32 __x, long int __n) ; extern _Float32 __scalblnf32 (_Float32 __x, long int __n) ;



extern _Float32 nearbyintf32 (_Float32 __x) ; extern _Float32 __nearbyintf32 (_Float32 __x) ;



extern _Float32 roundf32 (_Float32 __x) ; extern _Float32 __roundf32 (_Float32 __x) ;



extern _Float32 truncf32 (_Float32 __x) ; extern _Float32 __truncf32 (_Float32 __x) ;




extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) ; extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) ;






extern long int lrintf32 (_Float32 __x) ; extern long int __lrintf32 (_Float32 __x) ;

extern long long int llrintf32 (_Float32 __x) ; extern long long int __llrintf32 (_Float32 __x) ;



extern long int lroundf32 (_Float32 __x) ; extern long int __lroundf32 (_Float32 __x) ;

extern long long int llroundf32 (_Float32 __x) ; extern long long int __llroundf32 (_Float32 __x) ;



extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 fminf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fminf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) ; extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) ;




extern _Float32 roundevenf32 (_Float32 __x) ; extern _Float32 __roundevenf32 (_Float32 __x) ;



extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width)
                            ;



extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width)
                              ;




extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width)
                             ;




extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width)
                               ;


extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y) ;


extern int totalorderf32 (_Float32 __x, _Float32 __y)
     ;


extern int totalordermagf32 (_Float32 __x, _Float32 __y)
     ;


extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) ;


extern _Float32 getpayloadf32 (const _Float32 *__x) ; extern _Float32 __getpayloadf32 (const _Float32 *__x) ;


extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) ;


extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) ;
# 390 "/usr/include/math.h" 2 3 4
# 406 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 acosf64 (_Float64 __x) ; extern _Float64 __acosf64 (_Float64 __x) ;

extern _Float64 asinf64 (_Float64 __x) ; extern _Float64 __asinf64 (_Float64 __x) ;

extern _Float64 atanf64 (_Float64 __x) ; extern _Float64 __atanf64 (_Float64 __x) ;

extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) ; extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) ;


 extern _Float64 cosf64 (_Float64 __x) ; extern _Float64 __cosf64 (_Float64 __x) ;

 extern _Float64 sinf64 (_Float64 __x) ; extern _Float64 __sinf64 (_Float64 __x) ;

extern _Float64 tanf64 (_Float64 __x) ; extern _Float64 __tanf64 (_Float64 __x) ;




extern _Float64 coshf64 (_Float64 __x) ; extern _Float64 __coshf64 (_Float64 __x) ;

extern _Float64 sinhf64 (_Float64 __x) ; extern _Float64 __sinhf64 (_Float64 __x) ;

extern _Float64 tanhf64 (_Float64 __x) ; extern _Float64 __tanhf64 (_Float64 __x) ;



 extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ; extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx)
                                                        ;




extern _Float64 acoshf64 (_Float64 __x) ; extern _Float64 __acoshf64 (_Float64 __x) ;

extern _Float64 asinhf64 (_Float64 __x) ; extern _Float64 __asinhf64 (_Float64 __x) ;

extern _Float64 atanhf64 (_Float64 __x) ; extern _Float64 __atanhf64 (_Float64 __x) ;





 extern _Float64 expf64 (_Float64 __x) ; extern _Float64 __expf64 (_Float64 __x) ;


extern _Float64 frexpf64 (_Float64 __x, int *__exponent) ; extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) ;


extern _Float64 ldexpf64 (_Float64 __x, int __exponent) ; extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) ;


 extern _Float64 logf64 (_Float64 __x) ; extern _Float64 __logf64 (_Float64 __x) ;


extern _Float64 log10f64 (_Float64 __x) ; extern _Float64 __log10f64 (_Float64 __x) ;


extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) ; extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr) ;



extern _Float64 exp10f64 (_Float64 __x) ; extern _Float64 __exp10f64 (_Float64 __x) ;




extern _Float64 expm1f64 (_Float64 __x) ; extern _Float64 __expm1f64 (_Float64 __x) ;


extern _Float64 log1pf64 (_Float64 __x) ; extern _Float64 __log1pf64 (_Float64 __x) ;


extern _Float64 logbf64 (_Float64 __x) ; extern _Float64 __logbf64 (_Float64 __x) ;




extern _Float64 exp2f64 (_Float64 __x) ; extern _Float64 __exp2f64 (_Float64 __x) ;


extern _Float64 log2f64 (_Float64 __x) ; extern _Float64 __log2f64 (_Float64 __x) ;






 extern _Float64 powf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __powf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 sqrtf64 (_Float64 __x) ; extern _Float64 __sqrtf64 (_Float64 __x) ;



extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) ;




extern _Float64 cbrtf64 (_Float64 __x) ; extern _Float64 __cbrtf64 (_Float64 __x) ;






extern _Float64 ceilf64 (_Float64 __x) ; extern _Float64 __ceilf64 (_Float64 __x) ;


extern _Float64 fabsf64 (_Float64 __x) ; extern _Float64 __fabsf64 (_Float64 __x) ;


extern _Float64 floorf64 (_Float64 __x) ; extern _Float64 __floorf64 (_Float64 __x) ;


extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) ;
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y) ;




extern _Float64 nanf64 (const char *__tagb) ; extern _Float64 __nanf64 (const char *__tagb) ;
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 j0f64 (_Float64) ; extern _Float64 __j0f64 (_Float64) ;
extern _Float64 j1f64 (_Float64) ; extern _Float64 __j1f64 (_Float64) ;
extern _Float64 jnf64 (int, _Float64) ; extern _Float64 __jnf64 (int, _Float64) ;
extern _Float64 y0f64 (_Float64) ; extern _Float64 __y0f64 (_Float64) ;
extern _Float64 y1f64 (_Float64) ; extern _Float64 __y1f64 (_Float64) ;
extern _Float64 ynf64 (int, _Float64) ; extern _Float64 __ynf64 (int, _Float64) ;





extern _Float64 erff64 (_Float64) ; extern _Float64 __erff64 (_Float64) ;
extern _Float64 erfcf64 (_Float64) ; extern _Float64 __erfcf64 (_Float64) ;
extern _Float64 lgammaf64 (_Float64) ; extern _Float64 __lgammaf64 (_Float64) ;




extern _Float64 tgammaf64 (_Float64) ; extern _Float64 __tgammaf64 (_Float64) ;
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) ; extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) ;






extern _Float64 rintf64 (_Float64 __x) ; extern _Float64 __rintf64 (_Float64 __x) ;


extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) ;






extern _Float64 nextdownf64 (_Float64 __x) ; extern _Float64 __nextdownf64 (_Float64 __x) ;

extern _Float64 nextupf64 (_Float64 __x) ; extern _Float64 __nextupf64 (_Float64 __x) ;



extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) ;



extern _Float64 scalbnf64 (_Float64 __x, int __n) ; extern _Float64 __scalbnf64 (_Float64 __x, int __n) ;



extern int ilogbf64 (_Float64 __x) ; extern int __ilogbf64 (_Float64 __x) ;




extern long int llogbf64 (_Float64 __x) ; extern long int __llogbf64 (_Float64 __x) ;




extern _Float64 scalblnf64 (_Float64 __x, long int __n) ; extern _Float64 __scalblnf64 (_Float64 __x, long int __n) ;



extern _Float64 nearbyintf64 (_Float64 __x) ; extern _Float64 __nearbyintf64 (_Float64 __x) ;



extern _Float64 roundf64 (_Float64 __x) ; extern _Float64 __roundf64 (_Float64 __x) ;



extern _Float64 truncf64 (_Float64 __x) ; extern _Float64 __truncf64 (_Float64 __x) ;




extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) ; extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) ;






extern long int lrintf64 (_Float64 __x) ; extern long int __lrintf64 (_Float64 __x) ;

extern long long int llrintf64 (_Float64 __x) ; extern long long int __llrintf64 (_Float64 __x) ;



extern long int lroundf64 (_Float64 __x) ; extern long int __lroundf64 (_Float64 __x) ;

extern long long int llroundf64 (_Float64 __x) ; extern long long int __llroundf64 (_Float64 __x) ;



extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 fminf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fminf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ; extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ;




extern _Float64 roundevenf64 (_Float64 __x) ; extern _Float64 __roundevenf64 (_Float64 __x) ;



extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width)
                            ;



extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width)
                              ;




extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width)
                             ;




extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width)
                               ;


extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y) ;


extern int totalorderf64 (_Float64 __x, _Float64 __y)
     ;


extern int totalordermagf64 (_Float64 __x, _Float64 __y)
     ;


extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) ;


extern _Float64 getpayloadf64 (const _Float64 *__x) ; extern _Float64 __getpayloadf64 (const _Float64 *__x) ;


extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) ;


extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) ;
# 407 "/usr/include/math.h" 2 3 4
# 440 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x acosf32x (_Float32x __x) ; extern _Float32x __acosf32x (_Float32x __x) ;

extern _Float32x asinf32x (_Float32x __x) ; extern _Float32x __asinf32x (_Float32x __x) ;

extern _Float32x atanf32x (_Float32x __x) ; extern _Float32x __atanf32x (_Float32x __x) ;

extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) ; extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) ;


 extern _Float32x cosf32x (_Float32x __x) ; extern _Float32x __cosf32x (_Float32x __x) ;

 extern _Float32x sinf32x (_Float32x __x) ; extern _Float32x __sinf32x (_Float32x __x) ;

extern _Float32x tanf32x (_Float32x __x) ; extern _Float32x __tanf32x (_Float32x __x) ;




extern _Float32x coshf32x (_Float32x __x) ; extern _Float32x __coshf32x (_Float32x __x) ;

extern _Float32x sinhf32x (_Float32x __x) ; extern _Float32x __sinhf32x (_Float32x __x) ;

extern _Float32x tanhf32x (_Float32x __x) ; extern _Float32x __tanhf32x (_Float32x __x) ;



 extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ; extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx)
                                                        ;




extern _Float32x acoshf32x (_Float32x __x) ; extern _Float32x __acoshf32x (_Float32x __x) ;

extern _Float32x asinhf32x (_Float32x __x) ; extern _Float32x __asinhf32x (_Float32x __x) ;

extern _Float32x atanhf32x (_Float32x __x) ; extern _Float32x __atanhf32x (_Float32x __x) ;





 extern _Float32x expf32x (_Float32x __x) ; extern _Float32x __expf32x (_Float32x __x) ;


extern _Float32x frexpf32x (_Float32x __x, int *__exponent) ; extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) ;


extern _Float32x ldexpf32x (_Float32x __x, int __exponent) ; extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) ;


 extern _Float32x logf32x (_Float32x __x) ; extern _Float32x __logf32x (_Float32x __x) ;


extern _Float32x log10f32x (_Float32x __x) ; extern _Float32x __log10f32x (_Float32x __x) ;


extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) ; extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr) ;



extern _Float32x exp10f32x (_Float32x __x) ; extern _Float32x __exp10f32x (_Float32x __x) ;




extern _Float32x expm1f32x (_Float32x __x) ; extern _Float32x __expm1f32x (_Float32x __x) ;


extern _Float32x log1pf32x (_Float32x __x) ; extern _Float32x __log1pf32x (_Float32x __x) ;


extern _Float32x logbf32x (_Float32x __x) ; extern _Float32x __logbf32x (_Float32x __x) ;




extern _Float32x exp2f32x (_Float32x __x) ; extern _Float32x __exp2f32x (_Float32x __x) ;


extern _Float32x log2f32x (_Float32x __x) ; extern _Float32x __log2f32x (_Float32x __x) ;






 extern _Float32x powf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __powf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x sqrtf32x (_Float32x __x) ; extern _Float32x __sqrtf32x (_Float32x __x) ;



extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) ;




extern _Float32x cbrtf32x (_Float32x __x) ; extern _Float32x __cbrtf32x (_Float32x __x) ;






extern _Float32x ceilf32x (_Float32x __x) ; extern _Float32x __ceilf32x (_Float32x __x) ;


extern _Float32x fabsf32x (_Float32x __x) ; extern _Float32x __fabsf32x (_Float32x __x) ;


extern _Float32x floorf32x (_Float32x __x) ; extern _Float32x __floorf32x (_Float32x __x) ;


extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) ;
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y) ;




extern _Float32x nanf32x (const char *__tagb) ; extern _Float32x __nanf32x (const char *__tagb) ;
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x j0f32x (_Float32x) ; extern _Float32x __j0f32x (_Float32x) ;
extern _Float32x j1f32x (_Float32x) ; extern _Float32x __j1f32x (_Float32x) ;
extern _Float32x jnf32x (int, _Float32x) ; extern _Float32x __jnf32x (int, _Float32x) ;
extern _Float32x y0f32x (_Float32x) ; extern _Float32x __y0f32x (_Float32x) ;
extern _Float32x y1f32x (_Float32x) ; extern _Float32x __y1f32x (_Float32x) ;
extern _Float32x ynf32x (int, _Float32x) ; extern _Float32x __ynf32x (int, _Float32x) ;





extern _Float32x erff32x (_Float32x) ; extern _Float32x __erff32x (_Float32x) ;
extern _Float32x erfcf32x (_Float32x) ; extern _Float32x __erfcf32x (_Float32x) ;
extern _Float32x lgammaf32x (_Float32x) ; extern _Float32x __lgammaf32x (_Float32x) ;




extern _Float32x tgammaf32x (_Float32x) ; extern _Float32x __tgammaf32x (_Float32x) ;
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) ; extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) ;






extern _Float32x rintf32x (_Float32x __x) ; extern _Float32x __rintf32x (_Float32x __x) ;


extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) ;






extern _Float32x nextdownf32x (_Float32x __x) ; extern _Float32x __nextdownf32x (_Float32x __x) ;

extern _Float32x nextupf32x (_Float32x __x) ; extern _Float32x __nextupf32x (_Float32x __x) ;



extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) ;



extern _Float32x scalbnf32x (_Float32x __x, int __n) ; extern _Float32x __scalbnf32x (_Float32x __x, int __n) ;



extern int ilogbf32x (_Float32x __x) ; extern int __ilogbf32x (_Float32x __x) ;




extern long int llogbf32x (_Float32x __x) ; extern long int __llogbf32x (_Float32x __x) ;




extern _Float32x scalblnf32x (_Float32x __x, long int __n) ; extern _Float32x __scalblnf32x (_Float32x __x, long int __n) ;



extern _Float32x nearbyintf32x (_Float32x __x) ; extern _Float32x __nearbyintf32x (_Float32x __x) ;



extern _Float32x roundf32x (_Float32x __x) ; extern _Float32x __roundf32x (_Float32x __x) ;



extern _Float32x truncf32x (_Float32x __x) ; extern _Float32x __truncf32x (_Float32x __x) ;




extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) ; extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) ;






extern long int lrintf32x (_Float32x __x) ; extern long int __lrintf32x (_Float32x __x) ;

extern long long int llrintf32x (_Float32x __x) ; extern long long int __llrintf32x (_Float32x __x) ;



extern long int lroundf32x (_Float32x __x) ; extern long int __lroundf32x (_Float32x __x) ;

extern long long int llroundf32x (_Float32x __x) ; extern long long int __llroundf32x (_Float32x __x) ;



extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x fminf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fminf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) ; extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) ;




extern _Float32x roundevenf32x (_Float32x __x) ; extern _Float32x __roundevenf32x (_Float32x __x) ;



extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width)
                            ;



extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width)
                              ;




extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width)
                             ;




extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width)
                               ;


extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y) ;


extern int totalorderf32x (_Float32x __x, _Float32x __y)
     ;


extern int totalordermagf32x (_Float32x __x, _Float32x __y)
     ;


extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) ;


extern _Float32x getpayloadf32x (const _Float32x *__x) ; extern _Float32x __getpayloadf32x (const _Float32x *__x) ;


extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) ;


extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) ;
# 441 "/usr/include/math.h" 2 3 4
# 457 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x acosf64x (_Float64x __x) ; extern _Float64x __acosf64x (_Float64x __x) ;

extern _Float64x asinf64x (_Float64x __x) ; extern _Float64x __asinf64x (_Float64x __x) ;

extern _Float64x atanf64x (_Float64x __x) ; extern _Float64x __atanf64x (_Float64x __x) ;

extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) ; extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) ;


 extern _Float64x cosf64x (_Float64x __x) ; extern _Float64x __cosf64x (_Float64x __x) ;

 extern _Float64x sinf64x (_Float64x __x) ; extern _Float64x __sinf64x (_Float64x __x) ;

extern _Float64x tanf64x (_Float64x __x) ; extern _Float64x __tanf64x (_Float64x __x) ;




extern _Float64x coshf64x (_Float64x __x) ; extern _Float64x __coshf64x (_Float64x __x) ;

extern _Float64x sinhf64x (_Float64x __x) ; extern _Float64x __sinhf64x (_Float64x __x) ;

extern _Float64x tanhf64x (_Float64x __x) ; extern _Float64x __tanhf64x (_Float64x __x) ;



 extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ; extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx)
                                                        ;




extern _Float64x acoshf64x (_Float64x __x) ; extern _Float64x __acoshf64x (_Float64x __x) ;

extern _Float64x asinhf64x (_Float64x __x) ; extern _Float64x __asinhf64x (_Float64x __x) ;

extern _Float64x atanhf64x (_Float64x __x) ; extern _Float64x __atanhf64x (_Float64x __x) ;





 extern _Float64x expf64x (_Float64x __x) ; extern _Float64x __expf64x (_Float64x __x) ;


extern _Float64x frexpf64x (_Float64x __x, int *__exponent) ; extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) ;


extern _Float64x ldexpf64x (_Float64x __x, int __exponent) ; extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) ;


 extern _Float64x logf64x (_Float64x __x) ; extern _Float64x __logf64x (_Float64x __x) ;


extern _Float64x log10f64x (_Float64x __x) ; extern _Float64x __log10f64x (_Float64x __x) ;


extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) ; extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr) ;



extern _Float64x exp10f64x (_Float64x __x) ; extern _Float64x __exp10f64x (_Float64x __x) ;




extern _Float64x expm1f64x (_Float64x __x) ; extern _Float64x __expm1f64x (_Float64x __x) ;


extern _Float64x log1pf64x (_Float64x __x) ; extern _Float64x __log1pf64x (_Float64x __x) ;


extern _Float64x logbf64x (_Float64x __x) ; extern _Float64x __logbf64x (_Float64x __x) ;




extern _Float64x exp2f64x (_Float64x __x) ; extern _Float64x __exp2f64x (_Float64x __x) ;


extern _Float64x log2f64x (_Float64x __x) ; extern _Float64x __log2f64x (_Float64x __x) ;






 extern _Float64x powf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __powf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x sqrtf64x (_Float64x __x) ; extern _Float64x __sqrtf64x (_Float64x __x) ;



extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) ;




extern _Float64x cbrtf64x (_Float64x __x) ; extern _Float64x __cbrtf64x (_Float64x __x) ;






extern _Float64x ceilf64x (_Float64x __x) ; extern _Float64x __ceilf64x (_Float64x __x) ;


extern _Float64x fabsf64x (_Float64x __x) ; extern _Float64x __fabsf64x (_Float64x __x) ;


extern _Float64x floorf64x (_Float64x __x) ; extern _Float64x __floorf64x (_Float64x __x) ;


extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) ;
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y) ;




extern _Float64x nanf64x (const char *__tagb) ; extern _Float64x __nanf64x (const char *__tagb) ;
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x j0f64x (_Float64x) ; extern _Float64x __j0f64x (_Float64x) ;
extern _Float64x j1f64x (_Float64x) ; extern _Float64x __j1f64x (_Float64x) ;
extern _Float64x jnf64x (int, _Float64x) ; extern _Float64x __jnf64x (int, _Float64x) ;
extern _Float64x y0f64x (_Float64x) ; extern _Float64x __y0f64x (_Float64x) ;
extern _Float64x y1f64x (_Float64x) ; extern _Float64x __y1f64x (_Float64x) ;
extern _Float64x ynf64x (int, _Float64x) ; extern _Float64x __ynf64x (int, _Float64x) ;





extern _Float64x erff64x (_Float64x) ; extern _Float64x __erff64x (_Float64x) ;
extern _Float64x erfcf64x (_Float64x) ; extern _Float64x __erfcf64x (_Float64x) ;
extern _Float64x lgammaf64x (_Float64x) ; extern _Float64x __lgammaf64x (_Float64x) ;




extern _Float64x tgammaf64x (_Float64x) ; extern _Float64x __tgammaf64x (_Float64x) ;
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) ; extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) ;






extern _Float64x rintf64x (_Float64x __x) ; extern _Float64x __rintf64x (_Float64x __x) ;


extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) ;






extern _Float64x nextdownf64x (_Float64x __x) ; extern _Float64x __nextdownf64x (_Float64x __x) ;

extern _Float64x nextupf64x (_Float64x __x) ; extern _Float64x __nextupf64x (_Float64x __x) ;



extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) ;



extern _Float64x scalbnf64x (_Float64x __x, int __n) ; extern _Float64x __scalbnf64x (_Float64x __x, int __n) ;



extern int ilogbf64x (_Float64x __x) ; extern int __ilogbf64x (_Float64x __x) ;




extern long int llogbf64x (_Float64x __x) ; extern long int __llogbf64x (_Float64x __x) ;




extern _Float64x scalblnf64x (_Float64x __x, long int __n) ; extern _Float64x __scalblnf64x (_Float64x __x, long int __n) ;



extern _Float64x nearbyintf64x (_Float64x __x) ; extern _Float64x __nearbyintf64x (_Float64x __x) ;



extern _Float64x roundf64x (_Float64x __x) ; extern _Float64x __roundf64x (_Float64x __x) ;



extern _Float64x truncf64x (_Float64x __x) ; extern _Float64x __truncf64x (_Float64x __x) ;




extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) ; extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) ;






extern long int lrintf64x (_Float64x __x) ; extern long int __lrintf64x (_Float64x __x) ;

extern long long int llrintf64x (_Float64x __x) ; extern long long int __llrintf64x (_Float64x __x) ;



extern long int lroundf64x (_Float64x __x) ; extern long int __lroundf64x (_Float64x __x) ;

extern long long int llroundf64x (_Float64x __x) ; extern long long int __llroundf64x (_Float64x __x) ;



extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x fminf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fminf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ; extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ;




extern _Float64x roundevenf64x (_Float64x __x) ; extern _Float64x __roundevenf64x (_Float64x __x) ;



extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width)
                            ;



extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width)
                              ;




extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width)
                             ;




extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width)
                               ;


extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y) ;


extern int totalorderf64x (_Float64x __x, _Float64x __y)
     ;


extern int totalordermagf64x (_Float64x __x, _Float64x __y)
     ;


extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) ;


extern _Float64x getpayloadf64x (const _Float64x *__x) ; extern _Float64x __getpayloadf64x (const _Float64x *__x) ;


extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) ;


extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) ;
# 458 "/usr/include/math.h" 2 3 4
# 503 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern float fadd (double __x, double __y) ;


extern float fdiv (double __x, double __y) ;


extern float fmul (double __x, double __y) ;


extern float fsub (double __x, double __y) ;
# 504 "/usr/include/math.h" 2 3 4
# 517 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern float faddl (long double __x, long double __y) ;


extern float fdivl (long double __x, long double __y) ;


extern float fmull (long double __x, long double __y) ;


extern float fsubl (long double __x, long double __y) ;
# 518 "/usr/include/math.h" 2 3 4
# 537 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern double daddl (long double __x, long double __y) ;


extern double ddivl (long double __x, long double __y) ;


extern double dmull (long double __x, long double __y) ;


extern double dsubl (long double __x, long double __y) ;
# 538 "/usr/include/math.h" 2 3 4
# 616 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf32x (_Float32x __x, _Float32x __y) ;


extern _Float32 f32divf32x (_Float32x __x, _Float32x __y) ;


extern _Float32 f32mulf32x (_Float32x __x, _Float32x __y) ;


extern _Float32 f32subf32x (_Float32x __x, _Float32x __y) ;
# 617 "/usr/include/math.h" 2 3 4
# 626 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf64 (_Float64 __x, _Float64 __y) ;


extern _Float32 f32divf64 (_Float64 __x, _Float64 __y) ;


extern _Float32 f32mulf64 (_Float64 __x, _Float64 __y) ;


extern _Float32 f32subf64 (_Float64 __x, _Float64 __y) ;
# 627 "/usr/include/math.h" 2 3 4
# 636 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf64x (_Float64x __x, _Float64x __y) ;


extern _Float32 f32divf64x (_Float64x __x, _Float64x __y) ;


extern _Float32 f32mulf64x (_Float64x __x, _Float64x __y) ;


extern _Float32 f32subf64x (_Float64x __x, _Float64x __y) ;
# 637 "/usr/include/math.h" 2 3 4
# 666 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32x f32xaddf64 (_Float64 __x, _Float64 __y) ;


extern _Float32x f32xdivf64 (_Float64 __x, _Float64 __y) ;


extern _Float32x f32xmulf64 (_Float64 __x, _Float64 __y) ;


extern _Float32x f32xsubf64 (_Float64 __x, _Float64 __y) ;
# 667 "/usr/include/math.h" 2 3 4
# 676 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32x f32xaddf64x (_Float64x __x, _Float64x __y) ;


extern _Float32x f32xdivf64x (_Float64x __x, _Float64x __y) ;


extern _Float32x f32xmulf64x (_Float64x __x, _Float64x __y) ;


extern _Float32x f32xsubf64x (_Float64x __x, _Float64x __y) ;
# 677 "/usr/include/math.h" 2 3 4
# 706 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float64 f64addf64x (_Float64x __x, _Float64x __y) ;


extern _Float64 f64divf64x (_Float64x __x, _Float64x __y) ;


extern _Float64 f64mulf64x (_Float64x __x, _Float64x __y) ;


extern _Float64 f64subf64x (_Float64x __x, _Float64x __y) ;
# 707 "/usr/include/math.h" 2 3 4
# 773 "/usr/include/math.h" 3 4
extern int signgam;
# 853 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 968 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3 4
extern int __iscanonicall (long double __x)
     ;
# 969 "/usr/include/math.h" 2 3 4
# 1553 "/usr/include/math.h" 3 4

# 37 "tcc.h" 2
# 1 "/usr/include/signal.h" 1 3 4
# 27 "/usr/include/signal.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/signum.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/signum.h" 2 3 4
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4







typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-arch.h" 1 3 4
# 17 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
typedef struct
  {
    int si_signo;

    int si_errno;

    int si_code;





    int __pad0;


    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {

  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;

  __uint32_t _pkey;
       } _bounds;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;



 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;

      } _sifields;
  } siginfo_t ;
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  SI_ASYNCNL = -60,
  SI_TKILL = -6,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,





  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
# 63 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};




enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};




enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};





# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts-arch.h" 1 3 4
# 189 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 2 3 4
# 59 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 1 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 3 4
typedef __sigval_t sigval_t;
# 63 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 3 4
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
# 67 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 3 4
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4


};
# 68 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     ;

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     ;






extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     ;
# 112 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) ;






extern int killpg (__pid_t __pgrp, int __sig) ;



extern int raise (int __sig) ;



extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     ;
extern int gsignal (int __sig) ;




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 153 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);
# 170 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) ;


extern int sigsetmask (int __mask) ;


extern int siggetmask (void) ;
# 185 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) ;


extern int sigfillset (sigset_t *__set) ;


extern int sigaddset (sigset_t *__set, int __signo) ;


extern int sigdelset (sigset_t *__set, int __signo) ;


extern int sigismember (const sigset_t *__set, int __signo)
     ;



extern int sigisemptyset (const sigset_t *__set) ;


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) ;


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) ;




# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 227 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *restrict __set,
   sigset_t *restrict __oset) ;






extern int sigsuspend (const sigset_t *__set) ;


extern int sigaction (int __sig, const struct sigaction *restrict __act,
        struct sigaction *restrict __oact) ;


extern int sigpending (sigset_t *__set) ;







extern int sigwait (const sigset_t *restrict __set, int *restrict __sig)
     ;







extern int sigwaitinfo (const sigset_t *restrict __set,
   siginfo_t *restrict __info) ;






extern int sigtimedwait (const sigset_t *restrict __set,
    siginfo_t *restrict __info,
    const struct timespec *restrict __timeout)
     ;



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     ;
# 286 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[(64 + 1)];
extern const char *const sys_siglist[(64 + 1)];



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 123 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 292 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) ;






# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 302 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 2 3 4


typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 304 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
 typedef long long int greg_t;
# 46 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    unsigned long long int __ssp[4];
  } ucontext_t;
# 307 "/usr/include/signal.h" 2 3 4







extern int siginterrupt (int __sig, int __interrupt) ;

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 3 4
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 318 "/usr/include/signal.h" 2 3 4



extern int sigaltstack (const stack_t *restrict __ss,
   stack_t *restrict __oss) ;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
# 328 "/usr/include/signal.h" 2 3 4







extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     ;






extern int sighold (int __sig) ;


extern int sigrelse (int __sig) ;


extern int sigignore (int __sig) ;


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) ;






# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *restrict __newmask,
       __sigset_t *restrict __oldmask);


extern int pthread_kill (pthread_t __threadid, int __signo) ;



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) ;
# 360 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) ;

extern int __libc_current_sigrtmax (void) ;





# 38 "tcc.h" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };



# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 2 3 4


struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 39 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4
# 265 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 346 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/linux/falloc.h" 1 3 4
# 347 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4



struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
# 384 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4





extern __ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    ;






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern __ssize_t vmsplice (int __fdout, const struct iovec *__iov,
      size_t __count, unsigned int __flags);





extern __ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
    __off64_t *__offout, size_t __len,
    unsigned int __flags);





extern __ssize_t tee (int __fdin, int __fdout, size_t __len,
        unsigned int __flags);






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 439 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) ;





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);




# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 78 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 79 "/usr/include/fcntl.h" 2 3 4
# 148 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 157 "/usr/include/fcntl.h" 3 4
extern int fcntl64 (int __fd, int __cmd, ...);
# 168 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) ;
# 178 "/usr/include/fcntl.h" 3 4
extern int open64 (const char *__file, int __oflag, ...) ;
# 192 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
# 203 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     ;
# 214 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) ;
# 224 "/usr/include/fcntl.h" 3 4
extern int creat64 (const char *__file, mode_t __mode) ;
# 243 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 252 "/usr/include/fcntl.h" 3 4
extern int lockf64 (int __fd, int __cmd, off64_t __len);







extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
# 272 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) ;
# 282 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 293 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);
# 304 "/usr/include/fcntl.h" 3 4

# 39 "tcc.h" 2
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };


typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) ;




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) ;



extern int _setjmp (struct __jmp_buf_tag __env[1]) ;
# 67 "/usr/include/setjmp.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     ;





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     ;







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 93 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     ;
# 103 "/usr/include/setjmp.h" 3 4

# 40 "tcc.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 73 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 74 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) ;


# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 1 3 4






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


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) ;


extern time_t time (time_t *__timer) ;


extern double difftime (time_t __time1, time_t __time0)
     ;


extern time_t mktime (struct tm *__tp) ;





extern size_t strftime (char *restrict __s, size_t __maxsize,
   const char *restrict __format,
   const struct tm *restrict __tp) ;




extern char *strptime (const char *restrict __s,
         const char *restrict __fmt, struct tm *__tp)
     ;






extern size_t strftime_l (char *restrict __s, size_t __maxsize,
     const char *restrict __format,
     const struct tm *restrict __tp,
     locale_t __loc) ;



extern char *strptime_l (const char *restrict __s,
    const char *restrict __fmt, struct tm *__tp,
    locale_t __loc) ;





extern struct tm *gmtime (const time_t *__timer) ;



extern struct tm *localtime (const time_t *__timer) ;




extern struct tm *gmtime_r (const time_t *restrict __timer,
       struct tm *restrict __tp) ;



extern struct tm *localtime_r (const time_t *restrict __timer,
          struct tm *restrict __tp) ;




extern char *asctime (const struct tm *__tp) ;


extern char *ctime (const time_t *__timer) ;






extern char *asctime_r (const struct tm *restrict __tp,
   char *restrict __buf) ;


extern char *ctime_r (const time_t *restrict __timer,
        char *restrict __buf) ;




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) ;



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) ;
# 196 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) ;


extern time_t timelocal (struct tm *__tp) ;


extern int dysize (int __year) ;
# 211 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent *restrict __evp,
    timer_t *restrict __timerid) ;


extern int timer_delete (timer_t __timerid) ;


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *restrict __value,
     struct itimerspec *restrict __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;


extern int timer_getoverrun (timer_t __timerid) ;





extern int timespec_get (struct timespec *__ts, int __base)
     ;
# 280 "/usr/include/time.h" 3 4
extern int getdate_err;
# 289 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 303 "/usr/include/time.h" 3 4
extern int getdate_r (const char *restrict __string,
        struct tm *restrict __resbufp);



# 41 "tcc.h" 2
# 52 "tcc.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) ;




extern int euidaccess (const char *__name, int __type)
     ;


extern int eaccess (const char *__name, int __type)
     ;






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     ;






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) ;




extern int pipe2 (int __pipedes[2], int __flags) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) ;
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     ;



extern int chdir (const char *__path) ;



extern int fchdir (int __fd) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) ;





extern char *get_current_dir_name (void) ;







extern char *getwd (char *__buf)
     ;




extern int dup (int __fd) ;


extern int dup2 (int __fd, int __fd2) ;




extern int dup3 (int __fd, int __fd2, int __flags) ;



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     ;




extern int execv (const char *__path, char *const __argv[])
     ;



extern int execle (const char *__path, const char *__arg, ...)
     ;



extern int execl (const char *__path, const char *__arg, ...)
     ;



extern int execvp (const char *__file, char *const __argv[])
     ;




extern int execlp (const char *__file, const char *__arg, ...)
     ;




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     ;





extern int nice (int __inc) ;




extern void _exit (int __status) ;





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     ;


extern long int fpathconf (int __fd, int __name) ;


extern long int sysconf (int __name) ;



extern size_t confstr (int __name, char *__buf, size_t __len) ;




extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;

extern __pid_t getpgid (__pid_t __pid) ;






extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) ;






extern __pid_t setsid (void) ;



extern __pid_t getsid (__pid_t __pid) ;



extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[]) ;



extern int group_member (__gid_t __gid) ;






extern int setuid (__uid_t __uid) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) ;




extern int seteuid (__uid_t __uid) ;






extern int setgid (__gid_t __gid) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) ;




extern int setegid (__gid_t __gid) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     ;



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     ;



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     ;






extern __pid_t fork (void) ;







extern __pid_t vfork (void) ;





extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     ;



extern int isatty (int __fd) ;




extern int ttyslot (void) ;




extern int link (const char *__from, const char *__to)
     ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     ;




extern int symlink (const char *__from, const char *__to)
     ;




extern ssize_t readlink (const char *restrict __path,
    char *restrict __buf, size_t __len)
     ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) ;


extern ssize_t readlinkat (int __fd, const char *restrict __path,
      char *restrict __buf, size_t __len)
     ;



extern int unlink (const char *__name) ;



extern int unlinkat (int __fd, const char *__name, int __flag)
     ;



extern int rmdir (const char *__path) ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) ;




extern int setlogin (const char *__name) ;







# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       ;


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 870 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) ;






extern int sethostname (const char *__name, size_t __len)
     ;



extern int sethostid (long int __id) ;





extern int getdomainname (char *__name, size_t __len)
     ;
extern int setdomainname (const char *__name, size_t __len)
     ;





extern int vhangup (void) ;


extern int revoke (const char *__file) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     ;





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ;
extern void setusershell (void) ;





extern int daemon (int __nochdir, int __noclose) ;






extern int chroot (const char *__path) ;



extern char *getpass (const char *__prompt) ;







extern int fsync (int __fd);





extern int syncfs (int __fd) ;






extern long int gethostid (void);


extern void sync (void) ;





extern int getpagesize (void) ;




extern int getdtablesize (void) ;
# 991 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     ;
# 1003 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     ;
# 1014 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) ;
# 1024 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) ;
# 1035 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) ;





extern void *sbrk (intptr_t __delta) ;
# 1056 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) ;
# 1107 "/usr/include/unistd.h" 3 4
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);





extern int fdatasync (int __fildes);
# 1124 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     ;







extern void swab (const void *restrict __from, void *restrict __to,
    ssize_t __n) ;
# 1161 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length) ;








# 53 "tcc.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 52 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *restrict __timezone_ptr_t;
# 68 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *restrict __tv,
    __timezone_ptr_t __tz) ;




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     ;





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) ;




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) ;




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *restrict __new,
        struct itimerval *restrict __old) ;




extern int utimes (const char *__file, const struct timeval __tvp[2])
     ;



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     ;


extern int futimes (int __fd, const struct timeval __tvp[2]) ;






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) ;
# 186 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 54 "tcc.h" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/mman.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman.h" 1 3 4
# 49 "/usr/include/x86_64-linux-gnu/bits/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 1 3 4
# 117 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-shared.h" 1 3 4
# 42 "/usr/include/x86_64-linux-gnu/bits/mman-shared.h" 3 4




int memfd_create (const char *__name, unsigned int __flags) ;



int mlock2 (const void *__addr, size_t __length, unsigned int __flags) ;





int pkey_alloc (unsigned int __flags, unsigned int __access_rights) ;



int pkey_set (int __key, unsigned int __access_rights) ;



int pkey_get (int __key) ;



int pkey_free (int __key) ;



int pkey_mprotect (void *__addr, size_t __len, int __prot, int __pkey) ;


# 117 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 2 3 4
# 49 "/usr/include/x86_64-linux-gnu/bits/mman.h" 2 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4





# 57 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) ;
# 70 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) ;




extern int munmap (void *__addr, size_t __len) ;




extern int mprotect (void *__addr, size_t __len, int __prot) ;







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) ;



extern int posix_madvise (void *__addr, size_t __len, int __advice) ;




extern int mlock (const void *__addr, size_t __len) ;


extern int munlock (const void *__addr, size_t __len) ;




extern int mlockall (int __flags) ;



extern int munlockall (void) ;







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     ;
# 133 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) ;



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) ;




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 56 "tcc.h" 2
# 64 "tcc.h"
# 1 "elf.h" 1
# 25 "elf.h"
# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) ;


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      ;


extern intmax_t strtoimax (const char *restrict __nptr,
      char **restrict __endptr, int __base) ;


extern uintmax_t strtoumax (const char *restrict __nptr,
       char ** restrict __endptr, int __base) ;


extern intmax_t wcstoimax (const __gwchar_t *restrict __nptr,
      __gwchar_t **restrict __endptr, int __base)
     ;


extern uintmax_t wcstoumax (const __gwchar_t *restrict __nptr,
       __gwchar_t ** restrict __endptr, int __base)
     ;
# 432 "/usr/include/inttypes.h" 3 4

# 26 "elf.h" 2
# 44 "elf.h"

# 44 "elf.h"
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
# 269 "elf.h"
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
# 348 "elf.h"
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
# 463 "elf.h"
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
# 508 "elf.h"
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
# 577 "elf.h"
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
# 688 "elf.h"
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
# 724 "elf.h"
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
# 771 "elf.h"
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
# 805 "elf.h"
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
# 858 "elf.h"
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
# 1177 "elf.h"
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
# 1253 "elf.h"
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1392 "elf.h"
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
# 1423 "elf.h"
typedef Elf32_Addr Elf32_Conflict;
# 65 "tcc.h" 2
# 1 "stab.h" 1
# 9 "stab.h"
enum __stab_debug_code
{
# 1 "stab.def" 1
# 24 "stab.def"
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
# 12 "stab.h" 2
LAST_UNUSED_STAB_CODE
};
# 66 "tcc.h" 2





# 1 "libtcc.h" 1
# 14 "libtcc.h"
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
# 70 "libtcc.h"
 int tcc_set_output_type(TCCState *s, int output_type);






 int tcc_add_library_path(TCCState *s, const char *pathname);


 int tcc_add_library(TCCState *s, const char *libraryname);


 int tcc_add_symbol(TCCState *s, const char *name, void *val);



 int tcc_output_file(TCCState *s, const char *filename);



 int tcc_run(TCCState *s, int argc, char **argv);




 int tcc_relocate(TCCState *s1, void *ptr);


 void *tcc_get_symbol(TCCState *s, const char *name);


 void tcc_set_lib_path(TCCState *s, const char *path);
# 72 "tcc.h" 2
# 125 "tcc.h"
typedef int BOOL;
# 142 "tcc.h"
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
# 217 "tcc.h"
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
# 300 "tcc.h"
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
# 368 "tcc.h"
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



    char *runtime_plt_and_got;
    unsigned int runtime_plt_and_got_offset;

};
# 683 "tcc.h"
enum tcc_token {
    TOK_LAST = 256 - 1,

# 1 "tcctok.h" 1

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

     TOK_builtin_malloc,
     TOK_builtin_free,
     TOK_malloc,
     TOK_free,

     TOK_REGPARM1,
     TOK_REGPARM2,


     TOK_pack,


     TOK_ASM_push,
     TOK_ASM_pop,
# 139 "tcctok.h"
     TOK_memcpy,
     TOK_memset,
     TOK___divdi3,
     TOK___moddi3,
     TOK___udivdi3,
     TOK___umoddi3,
# 194 "tcctok.h"
     TOK___ashrdi3,
     TOK___lshrdi3,
     TOK___ashldi3,
     TOK___floatundisf,
     TOK___floatundidf,

     TOK___floatundixf,
     TOK___fixunsxfdi,

     TOK___fixunssfdi,
     TOK___fixunsdfdi,
# 236 "tcctok.h"
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
# 687 "tcc.h" 2

};
# 713 "tcc.h"
extern float strtof (const char *__nptr, char **__endptr);
extern long double strtold (const char *__nptr, char **__endptr);
# 727 "tcc.h"
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
# 232 "libtcc.c"
static void asm_instr(void);
static void asm_global_instr(void);
# 251 "libtcc.c"
# 1 "x86_64-gen.c" 1
# 23 "x86_64-gen.c"
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4




# 69 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;




extern void __assert (const char *__assertion, const char *__file, int __line)
     ;



# 24 "x86_64-gen.c" 2
# 43 "x86_64-gen.c"

# 43 "x86_64-gen.c"
enum {
    TREG_RAX = 0,
    TREG_RCX = 1,
    TREG_RDX = 2,
    TREG_RSI = 6,
    TREG_RDI = 7,
    TREG_R8 = 8,
    TREG_R9 = 9,
    TREG_R10 = 10,
    TREG_R11 = 11,

    TREG_XMM0 = 3,
    TREG_ST0 = 4,

    TREG_MEM = 0x10,
};




int reg_classes[5] = {
              0x0001 | 0x0004,
              0x0001 | 0x0008,
              0x0001 | 0x0010,
               0x0002 | 0x0020,
              0x0040,
};
# 103 "x86_64-gen.c"
static unsigned long func_sub_sp_offset;
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

void gen_le64(int64_t c)
{
    g(c);
    g(c >> 8);
    g(c >> 16);
    g(c >> 24);
    g(c >> 32);
    g(c >> 40);
    g(c >> 48);
    g(c >> 56);
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





static int is64_type(int t)
{
    return ((t & 0x000f) == 4 ||
            (t & 0x000f) == 6 ||
            (t & 0x000f) == 12);
}

static int is_sse_float(int t) {
    int bt;
    bt = t & 0x000f;
    return bt == 9 || bt == 8;
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


static void gen_addr64(int r, Sym *sym, int64_t c)
{
    if (r & 0x0200)
        greloc(cur_text_section, sym, ind, 1);
    gen_le64(c);
}


static void gen_addrpc32(int r, Sym *sym, int c)
{
    if (r & 0x0200)
        greloc(cur_text_section, sym, ind, 2);
    gen_le32(c-4);
}


static void gen_gotpcrel(int r, Sym *sym, int c)
{
    Section *sr;
    Elf64_Rela *rel;
    greloc(cur_text_section, sym, ind, 9);
    sr = cur_text_section->reloc;
    rel = (Elf64_Rela *)(sr->data + sr->data_offset - sizeof(Elf64_Rela));
    rel->r_addend = -4;
    gen_le32(0);

    if (c) {

        o(0x48 + (((r) >> 3) & 1));
        o(0x81);
        o(0xc0 + ((r) & 7));
        gen_le32(c);
    }
}

static void gen_modrm_impl(int op_reg, int r, Sym *sym, int c, int is_got)
{
    op_reg = ((op_reg) & 7) << 3;
    if ((r & 0x00ff) == 0x00f0) {

        o(0x05 | op_reg);
        if (is_got) {
            gen_gotpcrel(r, sym, c);
        } else {
            gen_addrpc32(r, sym, c);
        }
    } else if ((r & 0x00ff) == 0x00f2) {

        if (c == (char)c) {

            o(0x45 | op_reg);
            g(c);
        } else {
            oad(0x85 | op_reg, c);
        }
    } else if ((r & 0x00ff) >= TREG_MEM) {
        if (c) {
            g(0x80 | op_reg | ((r) & 7));
            gen_le32(c);
        } else {
            g(0x00 | op_reg | ((r) & 7));
        }
    } else {
        g(0x00 | op_reg | (r & 0x00ff));
    }
}



static void gen_modrm(int op_reg, int r, Sym *sym, int c)
{
    gen_modrm_impl(op_reg, r, sym, c, 0);
}



static void gen_modrm64(int opcode, int op_reg, int r, Sym *sym, int c)
{
    int is_got;
    int rex = 0x48 | ((((op_reg) >> 3) & 1) << 2);
    if ((r & 0x00ff) != 0x00f0 &&
        (r & 0x00ff) != 0x00f2) {
        rex |= (((0x00ff & r) >> 3) & 1);
    }
    o(rex);
    o(opcode);
    is_got = (op_reg & TREG_MEM) && !(sym->type.t & 0x00000100);
    gen_modrm_impl(op_reg, r, sym, c, is_got);
}



void load(int r, SValue *sv)
{
    int v, t, ft, fc, fr;
    SValue v1;

    fr = sv->r;
    ft = sv->type.t;
    fc = sv->c.ul;


    if ((fr & 0x00ff) == 0x00f0 && (fr & 0x0200) &&
        (fr & 0x0100) && !(sv->sym->type.t & 0x00000100)) {

        int tr = r | TREG_MEM;
        if (is_float(ft)) {

            tr = get_reg(0x0001) | TREG_MEM;
        }
        gen_modrm64(0x8b, tr, fr, sv->sym, 0);


        fr = tr | 0x0100;
    }

    v = fr & 0x00ff;
    if (fr & 0x0100) {
        if (v == 0x00f1) {
            v1.type.t = 4;
            v1.r = 0x00f2 | 0x0100;
            v1.c.ul = fc;
            load(r, &v1);
            fr = r;
        }
        if ((ft & 0x000f) == 8) {
            o(0x6e0f66);
            r = 0;
        } else if ((ft & 0x000f) == 9) {
            o(0x7e0ff3);
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
        } else if (is64_type(ft)) {
            gen_modrm64(0x8b, r, fr, sv->sym, fc);
            return;
        } else {
            o(0x8b);
        }
        gen_modrm(r, fr, sv->sym, fc);
    } else {
        if (v == 0x00f0) {
            if ((ft & 0x000f) == 12) {
                
# 347 "x86_64-gen.c" 3 4
               ((
# 347 "x86_64-gen.c"
               !(fr & 0x0200)
# 347 "x86_64-gen.c" 3 4
               ) ? (void) (0) : __assert_fail (
# 347 "x86_64-gen.c"
               "!(fr & VT_SYM)"
# 347 "x86_64-gen.c" 3 4
               , "x86_64-gen.c", 347, __func__))
# 347 "x86_64-gen.c"
                                     ;
                o(0x48);
                o(0xb8 + ((r) & 7));
                gen_addr64(fr, sv->sym, sv->c.ull);
            } else {
                if (fr & 0x0200) {
                    if (sv->sym->type.t & 0x00000100) {
                        o(0x8d48);
                        o(0x05 + ((r) & 7) * 8);
                        gen_addrpc32(fr, sv->sym, fc);
                    } else {
                        o(0x8b48);
                        o(0x05 + ((r) & 7) * 8);
                        gen_gotpcrel(r, sv->sym, fc);
                    }
                } else {
                    o(0xb8 + ((r) & 7));
                    gen_le32(fc);
                }
            }
        } else if (v == 0x00f2) {
            o(0x48 | (((r) >> 3) & 1));
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
            if (r == TREG_XMM0) {
                
# 384 "x86_64-gen.c" 3 4
               ((
# 384 "x86_64-gen.c"
               v == TREG_ST0
# 384 "x86_64-gen.c" 3 4
               ) ? (void) (0) : __assert_fail (
# 384 "x86_64-gen.c"
               "v == TREG_ST0"
# 384 "x86_64-gen.c" 3 4
               , "x86_64-gen.c", 384, __func__))
# 384 "x86_64-gen.c"
                                    ;

                o(0xf0245cdd);

                o(0x44100ff2);
                o(0xf024);
            } else if (r == TREG_ST0) {
                
# 391 "x86_64-gen.c" 3 4
               ((
# 391 "x86_64-gen.c"
               v == TREG_XMM0
# 391 "x86_64-gen.c" 3 4
               ) ? (void) (0) : __assert_fail (
# 391 "x86_64-gen.c"
               "v == TREG_XMM0"
# 391 "x86_64-gen.c" 3 4
               , "x86_64-gen.c", 391, __func__))
# 391 "x86_64-gen.c"
                                     ;


                o(0x44110ff2);
                o(0xf024);
                o(0xf02444dd);
            } else {
                o(0x48 | (((r) >> 3) & 1) | ((((v) >> 3) & 1) << 2));
                o(0x89);
                o(0xc0 + r + v * 8);
            }
        }
    }
}


void store(int r, SValue *v)
{
    int fr, bt, ft, fc;
    int op64 = 0;

    int pic = 0;

    ft = v->type.t;
    fc = v->c.ul;
    fr = v->r & 0x00ff;
    bt = ft & 0x000f;


    if (fr == 0x00f0 && (v->r & 0x0200)) {

        o(0x1d8b4c);
        gen_gotpcrel(TREG_R11, v->sym, v->c.ul);
        pic = is64_type(bt) ? 0x49 : 0x41;
    }


    if (bt == 8) {
        o(0x66);
        o(pic);
        o(0x7e0f);
        r = 0;
    } else if (bt == 9) {
        o(0x66);
        o(pic);
        o(0xd60f);
        r = 0;
    } else if (bt == 10) {
        o(0xc0d9);
        o(pic);
        o(0xdb);
        r = 7;
    } else {
        if (bt == 2)
            o(0x66);
        o(pic);
        if (bt == 1 || bt == 11)
            o(0x88);
        else if (is64_type(bt))
            op64 = 0x89;
        else
            o(0x89);
    }
    if (pic) {

        if (op64)
            o(op64);
        o(3 + (r << 3));
    } else if (op64) {
        if (fr == 0x00f0 ||
            fr == 0x00f2 ||
            (v->r & 0x0100)) {
            gen_modrm64(op64, r, v->r, v->sym, fc);
        } else if (fr != r) {

            abort();
            o(0xc0 + fr + r * 8);
        }
    } else {
        if (fr == 0x00f0 ||
            fr == 0x00f2 ||
            (v->r & 0x0100)) {
            gen_modrm(r, v->r, v->sym, fc);
        } else if (fr != r) {

            abort();
            o(0xc0 + fr + r * 8);
        }
    }
}

static void gadd_sp(int val)
{
    if (val == (char)val) {
        o(0xc48348);
        g(val);
    } else {
        oad(0xc48148, val);
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

        r = TREG_R11;
        load(r, vtop);
        o(0x41);
        o(0xff);
        o(0xd0 + ((r) & 7) + (is_jmp << 4));
    }
}

static uint8_t arg_regs[6] = {
    TREG_RDI, TREG_RSI, TREG_RDX, TREG_RCX, TREG_R8, TREG_R9
};



void gfunc_call(int nb_args)
{
    int size, align, r, args_size, i, func_call;
    Sym *func_sym;
    SValue *orig_vtop;
    int nb_reg_args = 0;
    int nb_sse_args = 0;
    int sse_reg, gen_reg;


    args_size = 0;
    for(i = 0; i < nb_args; i++) {
        if ((vtop[-i].type.t & 0x000f) == 7) {
            args_size += type_size(&vtop->type, &align);
        } else if ((vtop[-i].type.t & 0x000f) == 10) {
            args_size += 16;
        } else if (is_sse_float(vtop[-i].type.t)) {
            nb_sse_args++;
            if (nb_sse_args > 8) args_size += 8;
        } else {
            nb_reg_args++;
            if (nb_reg_args > 6) args_size += 8;
        }
    }




    orig_vtop = vtop;
    gen_reg = nb_reg_args;
    sse_reg = nb_sse_args;

    if (args_size &= 8) {
        o(0x50);
    }
    for(i = 0; i < nb_args; i++) {
        if ((vtop->type.t & 0x000f) == 7) {
            size = type_size(&vtop->type, &align);

            size = (size + 3) & ~3;

            o(0x48);
            oad(0xec81, size);

            r = get_reg(0x0001);
            o(0x48 + (((r) >> 3) & 1));
            o(0x89);
            o(0xe0 + r);
            {

                SValue tmp = vtop[1];
                vset(&vtop->type, r | 0x0100, 0);
                vswap();
                vstore();
                vtop[1] = tmp;
            }
            args_size += size;
        } else if ((vtop->type.t & 0x000f) == 10) {
            gv(0x0040);
            size = 16;
            oad(0xec8148, size);
            o(0x7cdb);
            g(0x24);
            g(0x00);
            args_size += size;
        } else if (is_sse_float(vtop->type.t)) {
            int j = --sse_reg;
            if (j >= 8) {
                gv(0x0002);
                o(0x50);

                o(0x04d60f66);
                o(0x24);
                args_size += 8;
            }
        } else {
            int j = --gen_reg;


            if (j >= 6) {
                r = gv(0x0001);
                o(0x50 + r);
                args_size += 8;
            }
        }
        vtop--;
    }
    vtop = orig_vtop;





    gen_reg = nb_reg_args;
    sse_reg = nb_sse_args;
    for(i = 0; i < nb_args; i++) {
        if ((vtop->type.t & 0x000f) == 7 ||
            (vtop->type.t & 0x000f) == 10) {
        } else if (is_sse_float(vtop->type.t)) {
            int j = --sse_reg;
            if (j < 8) {
                gv(0x0002);

                o(0x280f);
                o(0xc0 + (sse_reg << 3));
            }
        } else {
            int j = --gen_reg;


            if (j < 6) {
                r = gv(0x0001);
                if (j < 2) {
                    o(0x8948);
                    o(0xc0 + r * 8 + arg_regs[j]);
                } else if (j < 4) {
                    o(0x8949);

                    o(0xc0 + r * 8 + j);
                } else {
                    o(0x8949);

                    o(0xc0 + r * 8 + j - 4);
                }
            }
        }
        vtop--;
    }

    save_regs(0);


    if (nb_reg_args > 2) {
        o(0xd2894c);
        if (nb_reg_args > 3) {
            o(0xd9894c);
        }
    }

    func_sym = vtop->type.ref;
    func_call = (((func_attr_t*)&(func_sym->r))->func_call);
    oad(0xb8, nb_sse_args < 8 ? nb_sse_args : 8);
    gcall_or_jmp(0);
    if (args_size)
        gadd_sp(args_size);
    vtop--;
}
# 680 "x86_64-gen.c"
static void push_arg_reg(int i) {
    loc -= 8;
    gen_modrm64(0x89, arg_regs[i], 0x00f2, 
# 682 "x86_64-gen.c" 3 4
                                            ((void *)0)
# 682 "x86_64-gen.c"
                                                , loc);
}


void gfunc_prolog(CType *func_type)
{
    int i, addr, align, size, func_call;
    int param_index, param_addr, reg_param_index, sse_param_index;
    Sym *sym;
    CType *type;

    func_ret_sub = 0;

    sym = func_type->ref;
    func_call = (((func_attr_t*)&(sym->r))->func_call);
    addr = 8 * 2;
    loc = 0;
    ind += 11;
    func_sub_sp_offset = ind;

    if (func_type->ref->c == 3) {
        int seen_reg_num, seen_sse_num, seen_stack_size;
        seen_reg_num = seen_sse_num = 0;

        seen_stack_size = 8 * 2;

        sym = func_type->ref;
        while ((sym = sym->next) != 
# 709 "x86_64-gen.c" 3 4
                                   ((void *)0)
# 709 "x86_64-gen.c"
                                       ) {
            type = &sym->type;
            if (is_sse_float(type->t)) {
                if (seen_sse_num < 8) {
                    seen_sse_num++;
                } else {
                    seen_stack_size += 8;
                }
            } else if ((type->t & 0x000f) == 7) {
                size = type_size(type, &align);
                size = (size + 3) & ~3;
                seen_stack_size += size;
            } else if ((type->t & 0x000f) == 10) {
                seen_stack_size += 16;
            } else {
                if (seen_reg_num < 6) {
                    seen_reg_num++;
                } else {
                    seen_stack_size += 8;
                }
            }
        }

        loc -= 16;

        o(0xf045c7);
        gen_le32(seen_reg_num * 8);

        o(0xf445c7);
        gen_le32(seen_sse_num * 16 + 48);

        o(0xf845c7);
        gen_le32(seen_stack_size);


        for (i = 0; i < 8; i++) {
            loc -= 16;
            o(0xd60f66);
            gen_modrm(7 - i, 0x00f2, 
# 747 "x86_64-gen.c" 3 4
                                      ((void *)0)
# 747 "x86_64-gen.c"
                                          , loc);

            o(0x85c748);
            gen_le32(loc + 8);
            gen_le32(0);
        }
        for (i = 0; i < 6; i++) {
            push_arg_reg(5 - i);
        }
    }

    sym = func_type->ref;
    param_index = 0;
    reg_param_index = 0;
    sse_param_index = 0;



    func_vt = sym->type;
    if ((func_vt.t & 0x000f) == 7) {
        push_arg_reg(reg_param_index);
        param_addr = loc;

        func_vc = loc;
        param_index++;
        reg_param_index++;
    }

    while ((sym = sym->next) != 
# 775 "x86_64-gen.c" 3 4
                               ((void *)0)
# 775 "x86_64-gen.c"
                                   ) {
        type = &sym->type;
        size = type_size(type, &align);
        size = (size + 3) & ~3;
        if (is_sse_float(type->t)) {
            if (sse_param_index < 8) {

                loc -= 8;
                o(0xd60f66);
                gen_modrm(sse_param_index, 0x00f2, 
# 784 "x86_64-gen.c" 3 4
                                                    ((void *)0)
# 784 "x86_64-gen.c"
                                                        , loc);
                param_addr = loc;
            } else {
                param_addr = addr;
                addr += size;
            }
            sse_param_index++;
        } else if ((type->t & 0x000f) == 7 ||
                   (type->t & 0x000f) == 10) {
            param_addr = addr;
            addr += size;
        } else {
            if (reg_param_index < 6) {

                push_arg_reg(reg_param_index);
                param_addr = loc;
            } else {
                param_addr = addr;
                addr += 8;
            }
            reg_param_index++;
        }
        sym_push(sym->v & ~0x20000000, type,
                 0x00f2 | 0x0100, param_addr);
        param_index++;
    }
}


void gfunc_epilog(void)
{
    int v, saved_ind;

    o(0xc9);
    if (func_ret_sub == 0) {
        o(0xc3);
    } else {
        o(0xc2);
        g(func_ret_sub);
        g(func_ret_sub >> 8);
    }

    v = (-loc + 15) & -16;
    saved_ind = ind;
    ind = func_sub_sp_offset - 11;
# 837 "x86_64-gen.c"
    {
        o(0xe5894855);
        o(0xec8148);
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
        if ((vtop->r & (0x00ff | 0x0100 | 0x0200)) == 0x00f0 &&
            !is64_type(vtop->type.t)) {

            vswap();
            r = gv(0x0001);
            if (is64_type(vtop->type.t)) {
                o(0x48 | (((r) >> 3) & 1));
            }
            vswap();
            c = vtop->c.i;
            if (c == (char)c) {

                o(0x83);
                o(0xc0 | (opc << 3) | ((r) & 7));
                g(c);
            } else {
                o(0x81);
                oad(0xc0 | (opc << 3) | ((r) & 7), c);
            }
        } else {
            gv2(0x0001, 0x0001);
            r = vtop[-1].r;
            fr = vtop[0].r;
            if (opc != 7 ||
                is64_type(vtop[0].type.t) || (vtop[0].type.t & 0x0010) ||
                is64_type(vtop[-1].type.t) || (vtop[-1].type.t & 0x0010)) {
                o(0x48 | (((r) >> 3) & 1) | ((((fr) >> 3) & 1) << 2));
            }
            o((opc << 3) | 0x01);
            o(0xc0 + ((r) & 7) + ((fr) & 7) * 8);
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
        if (is64_type(vtop[0].type.t) || (vtop[0].type.t & 0x0010) ||
            is64_type(vtop[-1].type.t) || (vtop[-1].type.t & 0x0010)) {
            o(0x48 | (((fr) >> 3) & 1) | ((((r) >> 3) & 1) << 2));
        }
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
            if ((vtop->type.t & 0x000f) == 12) {
                o(0x48 | (((r) >> 3) & 1));
                c = 0x3f;
            } else {
                c = 0x1f;
            }
            vswap();
            c &= vtop->c.i;
            o(0xc1);
            o(opc | r);
            g(c);
        } else {

            gv2(0x0001, 0x0008);
            r = vtop[-1].r;
            if ((vtop[-1].type.t & 0x000f) == 12) {
                o(0x48 | (((r) >> 3) & 1));
            }
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


        gv2(0x0004, 0x0008);
        r = vtop[-1].r;
        fr = vtop[0].r;
        vtop--;
        save_reg(TREG_RDX);
        if (op == 0xc2) {
            o(0xf7);
            o(0xe0 + fr);
            vtop->r2 = TREG_RDX;
            r = TREG_RAX;
        } else {
            if (op == 0xb0 || op == 0xb1) {
                o(0xf7d231);
                o(0xf0 + fr);
            } else {
                if ((vtop->type.t & 0x000f) & 12) {
                    o(0x9948);
                    o(0x48 + (((fr) >> 3) & 1));
                } else {
                    o(0x99);
                }
                o(0xf7);
                o(0xf8 + fr);
            }
            if (op == '%' || op == 0xb1)
                r = TREG_RDX;
            else
                r = TREG_RAX;
        }
        vtop->r = r;
        break;
    default:
        opc = 7;
        goto gen_op8;
    }
}

void gen_opl(int op)
{
    gen_opi(op);
}




void gen_opf(int op)
{
    int a, ft, fc, swapped, r;
    int float_type =
        (vtop->type.t & 0x000f) == 10 ? 0x0040 : 0x0002;


    if ((vtop[-1].r & (0x00ff | 0x0100)) == 0x00f0) {
        vswap();
        gv(float_type);
        vswap();
    }
    if ((vtop[0].r & (0x00ff | 0x0100)) == 0x00f0)
        gv(float_type);


    if ((vtop[-1].r & 0x0100) &&
        (vtop[0].r & 0x0100)) {
        vswap();
        gv(float_type);
        vswap();
    }
    swapped = 0;


    if (vtop[-1].r & 0x0100) {
        vswap();
        swapped = 1;
    }
    if ((vtop->type.t & 0x000f) == 10) {
        if (op >= 0x92 && op <= 0x9f) {

            load(TREG_ST0, vtop);
            save_reg(TREG_RAX);
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

            load(TREG_ST0, vtop);
            swapped = !swapped;

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
            o(0xde);
            o(0xc1 + (a << 3));
            vtop--;
        }
    } else {
        if (op >= 0x92 && op <= 0x9f) {

            r = vtop->r;
            fc = vtop->c.ul;
            if ((r & 0x00ff) == 0x00f1) {
                SValue v1;
                r = get_reg(0x0001);
                v1.type.t = 0;
                v1.r = 0x00f2 | 0x0100;
                v1.c.ul = fc;
                load(r, &v1);
                fc = 0;
            }

            if (op == 0x94 || op == 0x95) {
                swapped = 0;
            } else {
                if (op == 0x9e || op == 0x9c)
                    swapped = !swapped;
                if (op == 0x9e || op == 0x9d) {
                    op = 0x93;
                } else {
                    op = 0x97;
                }
            }

            if (swapped) {
                o(0x7e0ff3);
                gen_modrm(1, r, vtop->sym, fc);

                if ((vtop->type.t & 0x000f) == 9) {
                    o(0x66);
                }
                o(0x2e0f);
                o(0xc8);
            } else {
                if ((vtop->type.t & 0x000f) == 9) {
                    o(0x66);
                }
                o(0x2e0f);
                gen_modrm(0, r, vtop->sym, fc);
            }

            vtop--;
            vtop->r = 0x00f3;
            vtop->c.i = op;
        } else {

            if ((vtop->type.t & 0x000f) == 10) {
                load(TREG_XMM0, vtop);
                swapped = !swapped;
            }
            switch(op) {
            default:
            case '+':
                a = 0;
                break;
            case '-':
                a = 4;
                break;
            case '*':
                a = 1;
                break;
            case '/':
                a = 6;
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
                if (swapped) {

                    o(0x7e0ff3);
                    o(0xc8);
                    load(TREG_XMM0, vtop);

                    if ((ft & 0x000f) == 9) {
                        o(0xf2);
                    } else {
                        o(0xf3);
                    }
                    o(0x0f);
                    o(0x58 + a);
                    o(0xc1);
                } else {
                    if ((ft & 0x000f) == 9) {
                        o(0xf2);
                    } else {
                        o(0xf3);
                    }
                    o(0x0f);
                    o(0x58 + a);
                    gen_modrm(0, r, vtop->sym, fc);
                }
            }
            vtop--;
        }
    }
}



void gen_cvt_itof(int t)
{
    if ((t & 0x000f) == 10) {
        save_reg(TREG_ST0);
        gv(0x0001);
        if ((vtop->type.t & 0x000f) == 12) {


            o(0x50 + (vtop->r & 0x00ff));
            o(0x242cdf);
            o(0x08c48348);
        } else if ((vtop->type.t & (0x000f | 0x0010)) ==
                   (0 | 0x0010)) {

            o(0x6a);
            g(0x00);
            o(0x50 + (vtop->r & 0x00ff));
            o(0x242cdf);
            o(0x10c48348);
        } else {

            o(0x50 + (vtop->r & 0x00ff));
            o(0x2404db);
            o(0x08c48348);
        }
        vtop->r = TREG_ST0;
    } else {
        save_reg(TREG_XMM0);
        gv(0x0001);
        o(0xf2 + ((t & 0x000f) == 8));
        if ((vtop->type.t & (0x000f | 0x0010)) ==
            (0 | 0x0010) ||
            (vtop->type.t & 0x000f) == 12) {
            o(0x48);
        }
        o(0x2a0f);
        o(0xc0 + (vtop->r & 0x00ff));
        vtop->r = TREG_XMM0;
    }
}


void gen_cvt_ftof(int t)
{
    int ft, bt, tbt;

    ft = vtop->type.t;
    bt = ft & 0x000f;
    tbt = t & 0x000f;

    if (bt == 8) {
        gv(0x0002);
        if (tbt == 9) {
            o(0xc0140f);
            o(0xc05a0f);
        } else if (tbt == 10) {

            o(0x44110ff3);
            o(0xf024);
            o(0xf02444d9);
            vtop->r = TREG_ST0;
        }
    } else if (bt == 9) {
        gv(0x0002);
        if (tbt == 8) {
            o(0xc0140f66);
            o(0xc05a0f66);
        } else if (tbt == 10) {

            o(0x44110ff2);
            o(0xf024);
            o(0xf02444dd);
            vtop->r = TREG_ST0;
        }
    } else {
        gv(0x0040);
        if (tbt == 9) {
            o(0xf0245cdd);

            o(0x44100ff2);
            o(0xf024);
            vtop->r = TREG_XMM0;
        } else if (tbt == 8) {
            o(0xf0245cd9);

            o(0x44100ff3);
            o(0xf024);
            vtop->r = TREG_XMM0;
        }
    }
}


void gen_cvt_ftoi(int t)
{
    int ft, bt, size, r;
    ft = vtop->type.t;
    bt = ft & 0x000f;
    if (bt == 10) {
        gen_cvt_ftof(9);
        bt = 9;
    }

    gv(0x0002);
    if (t != 0)
        size = 8;
    else
        size = 4;

    r = get_reg(0x0001);
    if (bt == 8) {
        o(0xf3);
    } else if (bt == 9) {
        o(0xf2);
    } else {
        
# 1401 "x86_64-gen.c" 3 4
       ((
# 1401 "x86_64-gen.c"
       0
# 1401 "x86_64-gen.c" 3 4
       ) ? (void) (0) : __assert_fail (
# 1401 "x86_64-gen.c"
       "0"
# 1401 "x86_64-gen.c" 3 4
       , "x86_64-gen.c", 1401, __func__))
# 1401 "x86_64-gen.c"
                ;
    }
    if (size == 8) {
        o(0x48 + (((r) >> 3) & 1));
    }
    o(0x2c0f);
    o(0xc0 + (((r) & 7) << 3));
    vtop->r = r;
}


void ggoto(void)
{
    gcall_or_jmp(1);
    vtop--;
}
# 252 "libtcc.c" 2
# 308 "libtcc.c"
# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 57 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 3 4




# 60 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 3 4
extern void _dl_mcount_wrapper_check (void *__selfpc) ;


# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;











extern void *dlopen (const char *__file, int __mode) ;



extern int dlclose (void *__handle) ;



extern void *dlsym (void *restrict __handle,
      const char *restrict __name) ;



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) ;



extern void *dlvsym (void *restrict __handle,
       const char *restrict __name,
       const char *restrict __version)
     ;





extern char *dlerror (void) ;





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     ;


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) ;




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *restrict __handle,
     int __request, void *restrict __arg)
     ;


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;




# 309 "libtcc.c" 2


# 310 "libtcc.c"
void *resolve_sym(TCCState *s1, const char *sym, int type)
{
    return dlsym(
# 312 "libtcc.c" 3 4
                ((void *) 0)
# 312 "libtcc.c"
                            , sym);
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
    mprotect((void *)start, end - start, 
# 410 "libtcc.c" 3 4
                                        0x1 
# 410 "libtcc.c"
                                                  | 
# 410 "libtcc.c" 3 4
                                                    0x2 
# 410 "libtcc.c"
                                                               | 
# 410 "libtcc.c" 3 4
                                                                 0x4
# 410 "libtcc.c"
                                                                          );

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
    *(void**)pp = 
# 508 "libtcc.c" 3 4
                 ((void *)0)
# 508 "libtcc.c"
                     ;
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
    Elf64_Sym *esym;
    const char *name;
    char buf1[256];

    if (section == 
# 646 "libtcc.c" 3 4
                  ((void *)0)
# 646 "libtcc.c"
                      )
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
        name = get_tok_str(sym->v, 
# 675 "libtcc.c" 3 4
                                  ((void *)0)
# 675 "libtcc.c"
                                      );
# 712 "libtcc.c"
        if (tcc_state->leading_underscore && can_add_underscore) {
            buf1[0] = '_';
            pstrcpy(buf1 + 1, sizeof(buf1) - 1, name);
            name = buf1;
        }
        info = ((((sym_bind)) << 4) + (((sym_type)) & 0xf));
        sym->c = add_elf_sym(symtab_section, value, size, info, other, sh_num, name);
    } else {
        esym = &((Elf64_Sym *)symtab_section->data)[sym->c];
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
        put_extern_sym(sym, 
# 738 "libtcc.c" 3 4
                           ((void *)0)
# 738 "libtcc.c"
                               , 0, 0);

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
    
# 778 "libtcc.c" 3 4
   __builtin_va_start(
# 778 "libtcc.c"
   ap
# 778 "libtcc.c" 3 4
   ,
# 778 "libtcc.c"
   fmt
# 778 "libtcc.c" 3 4
   )
# 778 "libtcc.c"
                    ;
    strcat_vprintf(buf, buf_size, fmt, ap);
    
# 780 "libtcc.c" 3 4
   __builtin_va_end(
# 780 "libtcc.c"
   ap
# 780 "libtcc.c" 3 4
   )
# 780 "libtcc.c"
             ;
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

        fprintf(
# 810 "libtcc.c" 3 4
               stderr
# 810 "libtcc.c"
                     , "%s\n", buf);
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

    
# 831 "libtcc.c" 3 4
   __builtin_va_start(
# 831 "libtcc.c"
   ap
# 831 "libtcc.c" 3 4
   ,
# 831 "libtcc.c"
   fmt
# 831 "libtcc.c" 3 4
   )
# 831 "libtcc.c"
                    ;
    error1(s1, 0, fmt, ap);
    
# 833 "libtcc.c" 3 4
   __builtin_va_end(
# 833 "libtcc.c"
   ap
# 833 "libtcc.c" 3 4
   )
# 833 "libtcc.c"
             ;
}

void error(const char *fmt, ...)
{
    TCCState *s1 = tcc_state;
    va_list ap;

    
# 841 "libtcc.c" 3 4
   __builtin_va_start(
# 841 "libtcc.c"
   ap
# 841 "libtcc.c" 3 4
   ,
# 841 "libtcc.c"
   fmt
# 841 "libtcc.c" 3 4
   )
# 841 "libtcc.c"
                    ;
    error1(s1, 0, fmt, ap);
    
# 843 "libtcc.c" 3 4
   __builtin_va_end(
# 843 "libtcc.c"
   ap
# 843 "libtcc.c" 3 4
   )
# 843 "libtcc.c"
             ;

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

    
# 866 "libtcc.c" 3 4
   __builtin_va_start(
# 866 "libtcc.c"
   ap
# 866 "libtcc.c" 3 4
   ,
# 866 "libtcc.c"
   fmt
# 866 "libtcc.c" 3 4
   )
# 866 "libtcc.c"
                    ;
    error1(s1, 1, fmt, ap);
    
# 868 "libtcc.c" 3 4
   __builtin_va_end(
# 868 "libtcc.c"
   ap
# 868 "libtcc.c" 3 4
   )
# 868 "libtcc.c"
             ;
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
    s->next = 
# 981 "libtcc.c" 3 4
             ((void *)0)
# 981 "libtcc.c"
                 ;

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
    return 
# 997 "libtcc.c" 3 4
          ((void *)0)
# 997 "libtcc.c"
              ;
}


static inline Sym *struct_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return 
# 1005 "libtcc.c" 3 4
              ((void *)0)
# 1005 "libtcc.c"
                  ;
    return table_ident[v]->sym_struct;
}


static inline Sym *sym_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return 
# 1014 "libtcc.c" 3 4
              ((void *)0)
# 1014 "libtcc.c"
                  ;
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


        while (*ps != 
# 1056 "libtcc.c" 3 4
                     ((void *)0)
# 1056 "libtcc.c"
                         )
            ps = &(*ps)->prev_tok;
        s->prev_tok = 
# 1058 "libtcc.c" 3 4
                     ((void *)0)
# 1058 "libtcc.c"
                         ;
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
        fd = open(filename, 
# 1101 "libtcc.c" 3 4
                           00 
# 1101 "libtcc.c"
                                    | 0);
    if ((s1->verbose == 2 && fd >= 0) || s1->verbose == 3)
        printf("%s %*s%s\n", fd < 0 ? "nf":"->",
               (s1->include_stack_ptr - s1->include_stack), "", filename);
    if (fd < 0)
        return 
# 1106 "libtcc.c" 3 4
              ((void *)0)
# 1106 "libtcc.c"
                  ;
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

# 1 "tccpp.c" 1
# 22 "tccpp.c"
static const char tcc_keywords[] =

# 1 "tcctok.h" 1

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

     "__builtin_malloc" "\0"
     "__builtin_free" "\0"
     "malloc" "\0"
     "free" "\0"

     "regparm" "\0"
     "__regparm__" "\0"


     "pack" "\0"


     "push" "\0"
     "pop" "\0"
# 139 "tcctok.h"
     "memcpy" "\0"
     "memset" "\0"
     "__divdi3" "\0"
     "__moddi3" "\0"
     "__udivdi3" "\0"
     "__umoddi3" "\0"
# 194 "tcctok.h"
     "__ashrdi3" "\0"
     "__lshrdi3" "\0"
     "__ashldi3" "\0"
     "__floatundisf" "\0"
     "__floatundidf" "\0"

     "__floatundixf" "\0"
     "__fixunsxfdi" "\0"

     "__fixunssfdi" "\0"
     "__fixunsdfdi" "\0"
# 236 "tcctok.h"
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
# 25 "tccpp.c" 2

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
    ts->sym_define = 
# 67 "tccpp.c" 3 4
                    ((void *)0)
# 67 "tccpp.c"
                        ;
    ts->sym_label = 
# 68 "tccpp.c" 3 4
                   ((void *)0)
# 68 "tccpp.c"
                       ;
    ts->sym_struct = 
# 69 "tccpp.c" 3 4
                    ((void *)0)
# 69 "tccpp.c"
                        ;
    ts->sym_identifier = 
# 70 "tccpp.c" 3 4
                        ((void *)0)
# 70 "tccpp.c"
                            ;
    ts->len = len;
    ts->hash_next = 
# 72 "tccpp.c" 3 4
                   ((void *)0)
# 72 "tccpp.c"
                       ;
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

            return 
# 201 "tccpp.c" 3 4
                  ((void *)0)
# 201 "tccpp.c"
                      ;
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
# 332 "tccpp.c"
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
            p = parse_pp_string(p, c, 
# 576 "tccpp.c" 3 4
                                     ((void *)0)
# 576 "tccpp.c"
                                         );
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
# 627 "tccpp.c"
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
        return 16 / 4;
    default:
        return 0;
    }
}



static inline void tok_str_new(TokenString *s)
{
    s->str = 
# 677 "tccpp.c" 3 4
            ((void *)0)
# 677 "tccpp.c"
                ;
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
            cstr->data = 
# 748 "tccpp.c" 3 4
                        ((void *)0)
# 748 "tccpp.c"
                            ;
            cstr->size = cv->cstr->size;
            cstr->data_allocated = 
# 750 "tccpp.c" 3 4
                                  ((void *)0)
# 750 "tccpp.c"
                                      ;
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
        str[len++] = cv->tab[3];



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
# 859 "tccpp.c"
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
        table_ident[v - 256]->sym_define = 
# 874 "tccpp.c" 3 4
                                                ((void *)0)
# 874 "tccpp.c"
                                                    ;
    s->v = 0;
}

static inline Sym *define_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return 
# 882 "tccpp.c" 3 4
              ((void *)0)
# 882 "tccpp.c"
                  ;
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
            table_ident[v - 256]->sym_define = 
# 900 "tccpp.c" 3 4
                                                    ((void *)0)
# 900 "tccpp.c"
                                                        ;
        sym_free(top);
        top = top1;
    }
    define_stack = b;
}


static Sym *label_find(int v)
{
    v -= 256;
    if ((unsigned)v >= (unsigned)(tok_ident - 256))
        return 
# 912 "tccpp.c" 3 4
              ((void *)0)
# 912 "tccpp.c"
                  ;
    return table_ident[v]->sym_label;
}

static Sym *label_push(Sym **ptop, int v, int flags)
{
    Sym *s, **ps;
    s = sym_push2(ptop, v, 0, 0);
    s->r = flags;
    ps = &table_ident[v - 256]->sym_label;
    if (ptop == &global_label_stack) {


        while (*ps != 
# 925 "tccpp.c" 3 4
                     ((void *)0)
# 925 "tccpp.c"
                         )
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
            warning("label '%s' declared but not used", get_tok_str(s->v, 
# 941 "tccpp.c" 3 4
                                                                         ((void *)0)
# 941 "tccpp.c"
                                                                             ));
        } else if (s->r == 1) {
                error("label '%s' used but not defined",
                      get_tok_str(s->v, 
# 944 "tccpp.c" 3 4
                                       ((void *)0)
# 944 "tccpp.c"
                                           ));
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
    macro_ptr = 
# 991 "tccpp.c" 3 4
               ((void *)0)
# 991 "tccpp.c"
                   ;
    tok_str_free(str.str);
    return c != 0;
}
# 1014 "tccpp.c"
static void parse_define(void)
{
    Sym *s, *first, **ps;
    int v, t, varg, is_vaargs, spc;
    TokenString str;

    v = tok;
    if (v < 256)
        error("invalid macro name '%s'", get_tok_str(tok, &tokc));

    first = 
# 1024 "tccpp.c" 3 4
           ((void *)0)
# 1024 "tccpp.c"
               ;
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
    return 
# 1115 "tccpp.c" 3 4
          ((void *)0)
# 1115 "tccpp.c"
              ;
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





                f = 
# 1319 "tccpp.c" 3 4
                   ((void *)0)
# 1319 "tccpp.c"
                       ;
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
            
# 1785 "tccpp.c" 3 4
           (*__errno_location ()) 
# 1785 "tccpp.c"
                 = 0;
            if (t == 'F') {
                ch = *p++;
                tok = 0xb9;
                tokc.f = strtof(token_buf, 
# 1789 "tccpp.c" 3 4
                                          ((void *)0)
# 1789 "tccpp.c"
                                              );
            } else if (t == 'L') {
                ch = *p++;
                tok = 0xc1;
                tokc.ld = strtold(token_buf, 
# 1793 "tccpp.c" 3 4
                                            ((void *)0)
# 1793 "tccpp.c"
                                                );
            } else {
                tok = 0xc0;
                tokc.d = strtod(token_buf, 
# 1796 "tccpp.c" 3 4
                                          ((void *)0)
# 1796 "tccpp.c"
                                              );
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
# 1894 "tccpp.c"
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
            { tok = *macro_ptr++; switch(tok) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: tokc.tab[0] = *macro_ptr++; break; case 0xb5: case 0xb8: case 0xce: tokc.cstr = (CString *)macro_ptr; tokc.cstr->data = (char *)macro_ptr + sizeof(CString); macro_ptr += (sizeof(CString) + tokc.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: tokc.tab[0] = macro_ptr[0]; tokc.tab[1] = macro_ptr[1]; macro_ptr += 2; break; case 0xc1: tokc.tab[0] = macro_ptr[0]; tokc.tab[1] = macro_ptr[1]; tokc.tab[2] = macro_ptr[2]; tokc.tab[3] = macro_ptr[3];; macro_ptr += 16 / 4; break; default: break; } };
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
        { t = *macro_str++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *macro_str++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)macro_str; cval.cstr->data = (char *)macro_str + sizeof(CString); macro_str += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; macro_str += 2; break; case 0xc1: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; cval.tab[2] = macro_str[2]; cval.tab[3] = macro_str[3];; macro_str += 16 / 4; break; default: break; } };
        if (!t)
            break;
        if (t == '#') {

            { t = *macro_str++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *macro_str++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)macro_str; cval.cstr->data = (char *)macro_str + sizeof(CString); macro_str += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; macro_str += 2; break; case 0xc1: cval.tab[0] = macro_str[0]; cval.tab[1] = macro_str[1]; cval.tab[2] = macro_str[2]; cval.tab[3] = macro_str[3];; macro_str += 16 / 4; break; default: break; } };
            if (!t)
                break;
            s = sym_find2(args, t);
            if (s) {
                cstr_new(&cstr);
                st = (int *)s->c;
                spc = 0;
                while (*st) {
                    { t = *st++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *st++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)st; cval.cstr->data = (char *)st + sizeof(CString); st += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = st[0]; cval.tab[1] = st[1]; st += 2; break; case 0xc1: cval.tab[0] = st[0]; cval.tab[1] = st[1]; cval.tab[2] = st[2]; cval.tab[3] = st[3];; st += 16 / 4; break; default: break; } };
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
                            { t1 = *st++; switch(t1) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *st++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)st; cval.cstr->data = (char *)st + sizeof(CString); st += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = st[0]; cval.tab[1] = st[1]; st += 2; break; case 0xc1: cval.tab[0] = st[0]; cval.tab[1] = st[1]; cval.tab[2] = st[2]; cval.tab[3] = st[3];; st += 16 / 4; break; default: break; } };
                            if (!t1)
                                break;
                            tok_str_add2(&str, t1, &cval);
                        }
                    }
                } else {


                    macro_subst(&str, nested_list, st, 
# 2420 "tccpp.c" 3 4
                                                      ((void *)0)
# 2420 "tccpp.c"
                                                          );
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
                    macro_ptr = 
# 2503 "tccpp.c" 3 4
                               ((void *)0)
# 2503 "tccpp.c"
                                   ;
                    if (ml)
                    {
                        macro_ptr = ml->p;
                        ml->p = 
# 2507 "tccpp.c" 3 4
                               ((void *)0)
# 2507 "tccpp.c"
                                   ;
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
            args = 
# 2525 "tccpp.c" 3 4
                  ((void *)0)
# 2525 "tccpp.c"
                      ;
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
        { t = *ptr++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *ptr++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)ptr; cval.cstr->data = (char *)ptr + sizeof(CString); ptr += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; ptr += 2; break; case 0xc1: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; cval.tab[2] = ptr[2]; cval.tab[3] = ptr[3];; ptr += 16 / 4; break; default: break; } };
        if (t == 0xb6)
            break;

        if (t == 0)
            return 
# 2616 "tccpp.c" 3 4
                  ((void *)0)
# 2616 "tccpp.c"
                      ;
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
                { t = *macro_ptr++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *macro_ptr++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)macro_ptr; cval.cstr->data = (char *)macro_ptr + sizeof(CString); macro_ptr += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = macro_ptr[0]; cval.tab[1] = macro_ptr[1]; macro_ptr += 2; break; case 0xc1: cval.tab[0] = macro_ptr[0]; cval.tab[1] = macro_ptr[1]; cval.tab[2] = macro_ptr[2]; cval.tab[3] = macro_ptr[3];; macro_ptr += 16 / 4; break; default: break; } };


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


        if (ptr == 
# 2745 "tccpp.c" 3 4
                  ((void *)0)
# 2745 "tccpp.c"
                      )
            break;
        { t = *ptr++; switch(t) { case 0xb3: case 0xc8: case 0xb4: case 0xb7: case 0xb9: case 0xba: cval.tab[0] = *ptr++; break; case 0xb5: case 0xb8: case 0xce: cval.cstr = (CString *)ptr; cval.cstr->data = (char *)ptr + sizeof(CString); ptr += (sizeof(CString) + cval.cstr->size + 3) >> 2; break; case 0xc0: case 0xc9: case 0xca: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; ptr += 2; break; case 0xc1: cval.tab[0] = ptr[0]; cval.tab[1] = ptr[1]; cval.tab[2] = ptr[2]; cval.tab[3] = ptr[3];; ptr += 16 / 4; break; default: break; } };
        if (t == 0)
            break;
        s = define_find(t);
        if (s != 
# 2751 "tccpp.c" 3 4
                ((void *)0)
# 2751 "tccpp.c"
                    ) {

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
                nested_list = 
# 2798 "tccpp.c" 3 4
                             ((void *)0)
# 2798 "tccpp.c"
                                 ;
                ml = 
# 2799 "tccpp.c" 3 4
                    ((void *)0)
# 2799 "tccpp.c"
                        ;
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
                macro_ptr = 
# 2818 "tccpp.c" 3 4
                           ((void *)0)
# 2818 "tccpp.c"
                               ;
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


    table_ident = 
# 2877 "tccpp.c" 3 4
                 ((void *)0)
# 2877 "tccpp.c"
                     ;
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
    file_ref = 
# 2909 "tccpp.c" 3 4
              ((void *)0)
# 2909 "tccpp.c"
                  ;

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
# 1 "tccgen.c" 1
# 22 "tccgen.c"
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
                  get_tok_str(v, 
# 127 "tccgen.c" 3 4
                                ((void *)0)
# 127 "tccgen.c"
                                    ));
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

                    type = &char_pointer_type;



                size = type_size(type, &align);
                loc = (loc - size) & -align;
                sv.type.t = type->t;
                sv.r = 0x00f2 | 0x0100;
                sv.c.ul = loc;
                store(r, &sv);


                if (r == TREG_ST0) {
                    o(0xd9dd);
                }
# 226 "tccgen.c"
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

    for(r=0;r<5;r++) {
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


    for(r=0;r<5;r++) {
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
# 374 "tccgen.c"
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



            if (size == 16)
                vtop->c.tab[2] &= 0xffff;

            ptr = section_ptr_add(data_section, size);
            size = size >> 2;







            for(i=0;i<size;i++)
                ptr[i] = vtop->c.tab[i];
            sym = get_sym_ref(&vtop->type, data_section, offset, size << 2);
            vtop->r |= 0x0100 | 0x0200;
            vtop->sym = sym;
            vtop->c.ul = 0;
        }





        r = vtop->r & 0x00ff;
        rc2 = 0x0001;
        if (rc == 0x0004)
            rc2 = 0x0010;




        if (r >= 0x00f0 ||
            (vtop->r & 0x0100) ||
            !(reg_classes[r] & rc) ||
            ((vtop->type.t & 0x000f) == 12 &&
             !(reg_classes[vtop->r2] & rc2))) {
            r = get_reg(rc);
# 505 "tccgen.c"
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

    if (t == 10) {
        return 0x0040;
    }

    return 0x0020;
}


int reg_fret(int t)
{

    if (t == 10) {
        return TREG_ST0;
    }

    return TREG_XMM0;
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
# 635 "tccgen.c"
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
# 688 "tccgen.c"
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

            if ((t & 0x000f) == 10) {
                rc = 0x0040;
            }

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
# 990 "tccgen.c"
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
        error("invalid operands to binary %s", get_tok_str(op, 
# 1242 "tccgen.c" 3 4
                                                              ((void *)0)
# 1242 "tccgen.c"
                                                                  ));
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


            t = 12 | 0x0010;



            goto std_op;
        }

        if (bt1 == 4 && bt2 == 4) {
            if (op != '-')
                error("cannot use pointers here");
            check_comparison_pointer_types(vtop - 1, vtop, op);

            u = pointed_size(&vtop[-1].type);
            gen_opic(op);


            vtop->type.t = 12;



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

            vpushll(pointed_size(&vtop[-1].type));




            gen_op('*');
# 1331 "tccgen.c"
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
        vtop->r = TREG_RAX;
        vtop->r2 = TREG_RDX;
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
# 1620 "tccgen.c"
            } else if ((dbt & 0x000f) == 12 ||
                       (dbt & 0x000f) == 4) {

                if ((sbt & 0x000f) != 12) {
                    int r = gv(0x0001);
                    if (sbt != (0 | 0x0010) &&
                        sbt != 4 && sbt != 6) {

                        o(0x6348);
                        o(0xc0 + (((r) & 7) << 3) + ((r) & 7));
                    }
                }

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
            *a = 8;
            return 8;
        }
    } else if (bt == 10) {
        *a = 8;
        return 16;
    } else if (bt == 9 || bt == 12) {
# 1709 "tccgen.c"
        *a = 8;

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
    while (s1 != 
# 1752 "tccgen.c" 3 4
                ((void *)0)
# 1752 "tccgen.c"
                    ) {
        if (s2 == 
# 1753 "tccgen.c" 3 4
                 ((void *)0)
# 1753 "tccgen.c"
                     )
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
            pstrcat(buf, buf_size, get_tok_str(v, 
# 1879 "tccgen.c" 3 4
                                                 ((void *)0)
# 1879 "tccgen.c"
                                                     ));
        break;
    case 6:
        s = type->ref;
        type_to_str(buf, buf_size, &s->type, varstr);
        pstrcat(buf, buf_size, "(");
        sa = s->next;
        while (sa != 
# 1886 "tccgen.c" 3 4
                    ((void *)0)
# 1886 "tccgen.c"
                        ) {
            type_to_str(buf1, sizeof(buf1), &sa->type, 
# 1887 "tccgen.c" 3 4
                                                      ((void *)0)
# 1887 "tccgen.c"
                                                          );
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
            type_to_str(buf1, sizeof(buf1), st, 
# 1979 "tccgen.c" 3 4
                                               ((void *)0)
# 1979 "tccgen.c"
                                                   );
            type_to_str(buf2, sizeof(buf2), dt, 
# 1980 "tccgen.c" 3 4
                                               ((void *)0)
# 1980 "tccgen.c"
                                                   );
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
# 2025 "tccgen.c"
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
# 2102 "tccgen.c"
        if (!nocode_wanted) {
            rc = 0x0001;
            if (is_float(ft)) {
                rc = 0x0002;

                if ((ft & 0x000f) == 10) {
                    rc = 0x0040;
                }

            }
            r = gv(rc);

            if ((vtop[-1].r & 0x00ff) == 0x00f1) {
                SValue sv;
                t = get_reg(0x0001);

                sv.type.t = 4;



                sv.r = 0x00f2 | 0x0100;
                sv.c.ul = vtop[-1].c.ul;
                load(t, &sv);
                vtop[-1].r = t | 0x0100;
            }
            store(r, vtop - 1);
# 2143 "tccgen.c"
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
# 2176 "tccgen.c"
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
# 2255 "tccgen.c"
        case TOK_DLLEXPORT:
            (((func_attr_t*)&(ad->func_attr))->func_export) = 1;
            break;
        default:
            if (tcc_state->warn_unsupported)
                warning("'%s' attribute ignored", get_tok_str(t, 
# 2260 "tccgen.c" 3 4
                                                                ((void *)0)
# 2260 "tccgen.c"
                                                                    ));

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
                                  get_tok_str(v, 
# 2366 "tccgen.c" 3 4
                                                ((void *)0)
# 2366 "tccgen.c"
                                                    ));
                    }
                    if (tok == ':') {
                        next();
                        bit_size = expr_const();

                        if (bit_size < 0)
                            error("negative width in bit-field '%s'",
                                  get_tok_str(v, 
# 2374 "tccgen.c" 3 4
                                                ((void *)0)
# 2374 "tccgen.c"
                                                    ));
                        if (v && bit_size == 0)
                            error("zero width for bit-field '%s'",
                                  get_tok_str(v, 
# 2377 "tccgen.c" 3 4
                                                ((void *)0)
# 2377 "tccgen.c"
                                                    ));
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
                                  get_tok_str(v, 
# 2402 "tccgen.c" 3 4
                                                ((void *)0)
# 2402 "tccgen.c"
                                                    ));
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
# 2456 "tccgen.c"
                    }
                    if (v == 0 && (type1.t & 0x000f) == 7) {
                        ass = type1.ref;
                        while ((ass = ass->next) != 
# 2459 "tccgen.c" 3 4
                                                   ((void *)0)
# 2459 "tccgen.c"
                                                       ) {
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



        t = (t & ~0x000f) | 12;

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
        first = 
# 2687 "tccgen.c" 3 4
               ((void *)0)
# 2687 "tccgen.c"
                   ;
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
        (func_type == 3 && arg == 
# 2897 "tccgen.c" 3 4
                                             ((void *)0)
# 2897 "tccgen.c"
                                                 )) {

        if ((vtop->type.t & 0x000f) == 8) {
            type.t = 9;
            gen_cast(&type);
        }
    } else if (arg == 
# 2903 "tccgen.c" 3 4
                     ((void *)0)
# 2903 "tccgen.c"
                         ) {
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


            block(
# 3057 "tccgen.c" 3 4
                 ((void *)0)
# 3057 "tccgen.c"
                     , 
# 3057 "tccgen.c" 3 4
                       ((void *)0)
# 3057 "tccgen.c"
                           , 
# 3057 "tccgen.c" 3 4
                             ((void *)0)
# 3057 "tccgen.c"
                                 , 
# 3057 "tccgen.c" 3 4
                                   ((void *)0)
# 3057 "tccgen.c"
                                       , 0, 1);
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

    case TOK_builtin_malloc:
        tok = TOK_malloc;
        goto tok_identifier;
    case TOK_builtin_free:
        tok = TOK_free;
        goto tok_identifier;

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
                error("'%s' undeclared", get_tok_str(t, 
# 3234 "tccgen.c" 3 4
                                                       ((void *)0)
# 3234 "tccgen.c"
                                                           ));


            if (tcc_state->warn_implicit_function_declaration)
                warning("implicit declaration of function '%s'",
                        get_tok_str(t, 
# 3239 "tccgen.c" 3 4
                                      ((void *)0)
# 3239 "tccgen.c"
                                          ));
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
            while ((s = s->next) != 
# 3282 "tccgen.c" 3 4
                                   ((void *)0)
# 3282 "tccgen.c"
                                       ) {
                if (s->v == tok)
                    break;
            }
            if (!s)
                error("field not found: %s", get_tok_str(tok & ~0x20000000, 
# 3287 "tccgen.c" 3 4
                                                                           ((void *)0)
# 3287 "tccgen.c"
                                                                               ));

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
                        ret.r2 = TREG_RDX;
                    ret.r = TREG_RAX;
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

                    if ((vtop->type.t & 0x000f) == 10) {
                        rc = 0x0040;
                    }

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

                if ((type.t & 0x000f) == 10) {
                    rc = 0x0040;
                }

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
# 3920 "tccgen.c"
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
                    error("duplicate label '%s'", get_tok_str(s->v, 
# 4103 "tccgen.c" 3 4
                                                                   ((void *)0)
# 4103 "tccgen.c"
                                                                       ));
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
                decl_designator(type, sec, c, &index, 
# 4449 "tccgen.c" 3 4
                                                     ((void *)0)
# 4449 "tccgen.c"
                                                         , size_only);
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
# 4493 "tccgen.c"
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
            decl_designator(type, sec, c, 
# 4522 "tccgen.c" 3 4
                                         ((void *)0)
# 4522 "tccgen.c"
                                             , &f, size_only);
            index = f->c;
            if (!size_only && array_length < index) {
                init_putz(type, sec, c + array_length,
                          index - array_length);
            }
            index = index + type_size(&f->type, &align1);
            if (index > array_length)
                array_length = index;
            f = f->next;
            if (no_oblock && f == 
# 4532 "tccgen.c" 3 4
                                 ((void *)0)
# 4532 "tccgen.c"
                                     )
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
# 4581 "tccgen.c"
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
        decl_initializer(type, 
# 4634 "tccgen.c" 3 4
                              ((void *)0)
# 4634 "tccgen.c"
                                  , 0, 1, 1);

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
        sec = 
# 4652 "tccgen.c" 3 4
             ((void *)0)
# 4652 "tccgen.c"
                 ;
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

        sym = 
# 4679 "tccgen.c" 3 4
             ((void *)0)
# 4679 "tccgen.c"
                 ;
        if (v && scope == 0x00f0) {

            sym = sym_find(v);
            if (sym) {
                if (!is_compatible_types(&sym->type, type))
                    error("incompatible types for redefinition of '%s'",
                          get_tok_str(v, 
# 4686 "tccgen.c" 3 4
                                        ((void *)0)
# 4686 "tccgen.c"
                                            ));
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
                Elf64_Sym *esym;

                put_extern_sym(sym, 
# 4750 "tccgen.c" 3 4
                                   ((void *)0)
# 4750 "tccgen.c"
                                       , align, size);

                esym = &((Elf64_Sym *)symtab_section->data)[sym->c];
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
                while (s != 
# 4827 "tccgen.c" 3 4
                           ((void *)0)
# 4827 "tccgen.c"
                               ) {
                    if ((s->v & ~0x20000000) == v)
                        goto found;
                    s = s->next;
                }
                error("declaration for parameter '%s' but no such parameter",
                      get_tok_str(v, 
# 4833 "tccgen.c" 3 4
                                    ((void *)0)
# 4833 "tccgen.c"
                                        ));
            found:

                if (type.t & (0x00000080 | 0x00000100 | 0x00000200 | 0x00000400))
                    error("storage class specified for '%s'", get_tok_str(v, 
# 4837 "tccgen.c" 3 4
                                                                            ((void *)0)
# 4837 "tccgen.c"
                                                                                ));
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
    funcname = get_tok_str(sym->v, 
# 4861 "tccgen.c" 3 4
                                  ((void *)0)
# 4861 "tccgen.c"
                                      );
    func_ind = ind;

    if (tcc_state->do_debug)
        put_func_debug(sym);

    sym_push2(&local_stack, 0x20000000, 0, 0);
    gfunc_prolog(&sym->type);
    rsym = 0;
    block(
# 4870 "tccgen.c" 3 4
         ((void *)0)
# 4870 "tccgen.c"
             , 
# 4870 "tccgen.c" 3 4
               ((void *)0)
# 4870 "tccgen.c"
                   , 
# 4870 "tccgen.c" 3 4
                     ((void *)0)
# 4870 "tccgen.c"
                         , 
# 4870 "tccgen.c" 3 4
                           ((void *)0)
# 4870 "tccgen.c"
                               , 0, 0);
    gsym(rsym);
    gfunc_epilog();
    cur_text_section->data_offset = ind;
    label_pop(&global_label_stack, 
# 4874 "tccgen.c" 3 4
                                  ((void *)0)
# 4874 "tccgen.c"
                                      );
    sym_pop(&local_stack, 
# 4875 "tccgen.c" 3 4
                         ((void *)0)
# 4875 "tccgen.c"
                             );


    ((Elf64_Sym *)symtab_section->data)[sym->c].st_size =
        ind - func_ind;
    if (tcc_state->do_debug) {
        put_stabn(N_FUN, 0, 0, ind - func_ind);
    }

    cur_text_section = 
# 4884 "tccgen.c" 3 4
                      ((void *)0)
# 4884 "tccgen.c"
                          ;
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
        for(sym = global_stack; sym != 
# 4900 "tccgen.c" 3 4
                                      ((void *)0)
# 4900 "tccgen.c"
                                          ; sym = sym->prev) {
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
                macro_ptr = 
# 4916 "tccgen.c" 3 4
                           ((void *)0)
# 4916 "tccgen.c"
                               ;

                tok_str_free(str);
                inline_generated = 1;
            }
        }
        if (!inline_generated)
            break;
    }


    for(sym = global_stack; sym != 
# 4927 "tccgen.c" 3 4
                                  ((void *)0)
# 4927 "tccgen.c"
                                      ; sym = sym->prev) {
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
                while ((sym = sym->next) != 
# 5003 "tccgen.c" 3 4
                                           ((void *)0)
# 5003 "tccgen.c"
                                               )
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
                              get_tok_str(v, 
# 5028 "tccgen.c" 3 4
                                            ((void *)0)
# 5028 "tccgen.c"
                                                ));
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

    cur_text_section = 
# 1146 "libtcc.c" 3 4
                      ((void *)0)
# 1146 "libtcc.c"
                          ;
    funcname = "";
    anon_sym = 0x10000000;


    section_sym = 0;
    if (s1->do_debug) {
        section_sym = put_elf_sym(symtab_section, 0, 0,
                                  ((((0)) << 4) + (((3)) & 0xf)), 0,
                                  text_section->sh_num, 
# 1155 "libtcc.c" 3 4
                                                       ((void *)0)
# 1155 "libtcc.c"
                                                           );
        getcwd(buf, sizeof(buf));



        pstrcat(buf, sizeof(buf), "/");
        put_stabs_r(buf, N_SO, 0, 0,
                    text_section->data_offset, text_section, section_sym);
        put_stabs_r(file->filename, N_SO, 0, 0,
                    text_section->data_offset, text_section, section_sym);
    }


    put_elf_sym(symtab_section, 0, 0,
                ((((0)) << 4) + (((4)) & 0xf)), 0,
                0xfff1, file->filename);


    int_type.t = 0;

    char_pointer_type.t = 1;
    mk_pointer(&char_pointer_type);

    func_old_type.t = 6;
    func_old_type.ref = sym_push(0x20000000, &int_type, 0, 2);
# 1205 "libtcc.c"
    define_start = define_stack;
    nocode_wanted = 1;

    if (
# 1208 "libtcc.c" 3 4
       _setjmp (
# 1208 "libtcc.c"
       s1->error_jmp_buf
# 1208 "libtcc.c" 3 4
       ) 
# 1208 "libtcc.c"
                                 == 0) {
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
            put_stabs_r(
# 1222 "libtcc.c" 3 4
                       ((void *)0)
# 1222 "libtcc.c"
                           , N_SO, 0, 0,
                        text_section->data_offset, text_section, section_sym);
        }
    }
    s1->error_set_jmp_enabled = 0;



    free_defines(define_start);

    gen_inline_functions();

    sym_pop(&global_stack, 
# 1234 "libtcc.c" 3 4
                          ((void *)0)
# 1234 "libtcc.c"
                              );
    sym_pop(&local_stack, 
# 1235 "libtcc.c" 3 4
                         ((void *)0)
# 1235 "libtcc.c"
                             );

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
    file = 
# 1261 "libtcc.c" 3 4
          ((void *)0)
# 1261 "libtcc.c"
              ;
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
    file = 
# 1295 "libtcc.c" 3 4
          ((void *)0)
# 1295 "libtcc.c"
              ;
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
# 1318 "libtcc.c"
static void asm_instr(void)
{
    error("inline asm() not supported");
}
static void asm_global_instr(void)
{
    error("inline asm() not supported");
}


# 1 "tccelf.c" 1
# 36 "tccelf.c"
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
    Elf64_Sym *sym;
    int *ptr, *hash, nb_syms, sym_index, h;
    char *strtab;

    strtab = s->link->data;
    nb_syms = s->data_offset / sizeof(Elf64_Sym);

    s->hash->data_offset = 0;
    ptr = section_ptr_add(s->hash, (2 + nb_buckets + nb_syms) * sizeof(int));
    ptr[0] = nb_buckets;
    ptr[1] = nb_syms;
    ptr += 2;
    hash = ptr;
    memset(hash, 0, (nb_buckets + 1) * sizeof(int));
    ptr += nb_buckets + 1;

    sym = (Elf64_Sym *)s->data + 1;
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
    Elf64_Sym *sym;
    Section *hs;

    sym = section_ptr_add(s, sizeof(Elf64_Sym));
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
    sym_index = sym - (Elf64_Sym *)s->data;
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
    Elf64_Sym *sym;
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
        sym = &((Elf64_Sym *)s->data)[sym_index];
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
    Elf64_Sym *sym;
    sym_index = find_elf_sym(symtab_section, name);
    if (!sym_index)
        return 
# 178 "tccelf.c" 3 4
              ((void *)0)
# 178 "tccelf.c"
                  ;
    sym = &((Elf64_Sym *)symtab_section->data)[sym_index];
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
    Elf64_Sym *esym;
    int sym_bind, sym_index, sym_type, esym_bind;
    unsigned char sym_vis, esym_vis, new_vis;

    sym_bind = (((unsigned char) (info)) >> 4);
    sym_type = ((info) & 0xf);
    sym_vis = ((other) & 0x03);

    if (sym_bind != 0) {

        sym_index = find_elf_sym(s, name);
        if (!sym_index)
            goto do_def;
        esym = &((Elf64_Sym *)s->data)[sym_index];
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
            esym->st_info = ((((sym_bind)) << 4) + (((sym_type)) & 0xf));
            esym->st_shndx = sh_num;
            esym->st_value = value;
            esym->st_size = size;
            esym->st_other = other;
        }
    } else {
    do_def:
        sym_index = put_elf_sym(s, value, size,
                                ((((sym_bind)) << 4) + (((sym_type)) & 0xf)), other,
                                sh_num, name);
    }
    return sym_index;
}


static void put_elf_reloc(Section *symtab, Section *s, unsigned long offset,
                          int type, int symbol)
{
    char buf[256];
    Section *sr;
    Elf64_Rela *rel;

    sr = s->reloc;
    if (!sr) {

        snprintf(buf, sizeof(buf), ".rela%s", s->name);


        sr = new_section(tcc_state, buf, 4, symtab->sh_flags);
        sr->sh_entsize = sizeof(Elf64_Rela);
        sr->link = symtab;
        sr->sh_info = s->sh_num;
        s->reloc = sr;
    }
    rel = section_ptr_add(sr, sizeof(Elf64_Rela));
    rel->r_offset = offset;
    rel->r_info = ((((Elf64_Xword)(symbol)) << 32) + (type));

    rel->r_addend = 0;

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
    put_stabs(
# 332 "tccelf.c" 3 4
             ((void *)0)
# 332 "tccelf.c"
                 , type, other, desc, value);
}

static void put_stabd(int type, int other, int desc)
{
    put_stabs(
# 337 "tccelf.c" 3 4
             ((void *)0)
# 337 "tccelf.c"
                 , type, other, desc, 0);
}





static void sort_syms(TCCState *s1, Section *s)
{
    int *old_to_new_syms;
    Elf64_Sym *new_syms;
    int nb_syms, i;
    Elf64_Sym *p, *q;
    Elf64_Rela *rel, *rel_end;
    Section *sr;
    int type, sym_index;

    nb_syms = s->data_offset / sizeof(Elf64_Sym);
    new_syms = tcc_malloc(nb_syms * sizeof(Elf64_Sym));
    old_to_new_syms = tcc_malloc(nb_syms * sizeof(int));


    p = (Elf64_Sym *)s->data;
    q = new_syms;
    for(i = 0; i < nb_syms; i++) {
        if ((((unsigned char) (p->st_info)) >> 4) == 0) {
            old_to_new_syms[i] = q - new_syms;
            *q++ = *p;
        }
        p++;
    }

    s->sh_info = q - new_syms;


    p = (Elf64_Sym *)s->data;
    for(i = 0; i < nb_syms; i++) {
        if ((((unsigned char) (p->st_info)) >> 4) != 0) {
            old_to_new_syms[i] = q - new_syms;
            *q++ = *p;
        }
        p++;
    }


    memcpy(s->data, new_syms, nb_syms * sizeof(Elf64_Sym));
    tcc_free(new_syms);


    for(i = 1; i < s1->nb_sections; i++) {
        sr = s1->sections[i];
        if (sr->sh_type == 4 && sr->link == s) {
            rel_end = (Elf64_Rela *)(sr->data + sr->data_offset);
            for(rel = (Elf64_Rela *)sr->data;
                rel < rel_end;
                rel++) {
                sym_index = ((rel->r_info) >> 32);
                type = ((rel->r_info) & 0xffffffff);
                sym_index = old_to_new_syms[sym_index];
                rel->r_info = ((((Elf64_Xword)(sym_index)) << 32) + (type));
            }
        }
    }

    tcc_free(old_to_new_syms);
}


static void relocate_common_syms(void)
{
    Elf64_Sym *sym, *sym_end;
    unsigned long offset, align;

    sym_end = (Elf64_Sym *)(symtab_section->data + symtab_section->data_offset);
    for(sym = (Elf64_Sym *)symtab_section->data + 1;
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
    Elf64_Sym *sym, *esym, *sym_end;
    int sym_bind, sh_num, sym_index;
    const char *name;
    unsigned long addr;

    sym_end = (Elf64_Sym *)(symtab_section->data + symtab_section->data_offset);
    for(sym = (Elf64_Sym *)symtab_section->data + 1;
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
                    esym = &((Elf64_Sym *)s1->dynsym->data)[sym_index];
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



static unsigned long add_jmp_table(TCCState *s1, unsigned long val)
{
    char *p = s1->runtime_plt_and_got + s1->runtime_plt_and_got_offset;
    s1->runtime_plt_and_got_offset += 14;

    p[0] = 0xff;
    p[1] = 0x25;
    *(int *)(p + 2) = 0;
    *(unsigned long *)(p + 6) = val;
    return (unsigned long)p;
}

static unsigned long add_got_table(TCCState *s1, unsigned long val)
{
    unsigned long *p =(unsigned long *)(s1->runtime_plt_and_got +
                                        s1->runtime_plt_and_got_offset);
    s1->runtime_plt_and_got_offset += sizeof(void *);
    *p = val;
    return (unsigned long)p;
}



static void relocate_section(TCCState *s1, Section *s)
{
    Section *sr;
    Elf64_Rela *rel, *rel_end, *qrel;
    Elf64_Sym *sym;
    int type, sym_index;
    unsigned char *ptr;
    unsigned long val, addr;

    int esym_index;


    sr = s->reloc;
    rel_end = (Elf64_Rela *)(sr->data + sr->data_offset);
    qrel = (Elf64_Rela *)sr->data;
    for(rel = qrel;
        rel < rel_end;
        rel++) {
        ptr = s->data + rel->r_offset;

        sym_index = ((rel->r_info) >> 32);
        sym = &((Elf64_Sym *)symtab_section->data)[sym_index];
        val = sym->st_value;


        val += rel->r_addend;

        type = ((rel->r_info) & 0xffffffff);
        addr = s->sh_addr + rel->r_offset;


        switch(type) {
# 659 "tccelf.c"
        case 1:
            if (s1->output_type == 2) {
                qrel->r_info = ((((Elf64_Xword)(0)) << 32) + (8));
                qrel->r_addend = *(long long *)ptr + val;
                qrel++;
            }
            *(long long *)ptr += val;
            break;
        case 10:
        case 11:
            if (s1->output_type == 2) {


                qrel->r_info = ((((Elf64_Xword)(0)) << 32) + (8));
                qrel->r_addend = *(int *)ptr + val;
                qrel++;
            }
            *(int *)ptr += val;
            break;
        case 2: {
            if (s1->output_type == 2) {

                esym_index = s1->symtab_to_dynsym[sym_index];
                if (esym_index) {
                    qrel->r_offset = rel->r_offset;
                    qrel->r_info = ((((Elf64_Xword)(esym_index)) << 32) + (2));
                    qrel->r_addend = *(int *)ptr;
                    qrel++;
                    break;
                }
            }
            long diff = val - addr;
            if (diff <= -2147483647 || diff > 2147483647) {

                if (s1->output_type == 0) {
                    val = add_jmp_table(s1, val);
                    diff = val - addr;
                }
                if (diff <= -2147483647 || diff > 2147483647) {
                    error("internal error: relocation failed");
                }
            }
            *(int *)ptr += diff;
        }
            break;
        case 4:
            *(int *)ptr += val - addr;
            break;
        case 6:
        case 7:
            *(int *)ptr = val;
            break;
        case 9:
            if (s1->output_type == 0) {
                val = add_got_table(s1, val - rel->r_addend) + rel->r_addend;
                *(int *)ptr += val - addr;
                break;
            }
            *(int *)ptr += (s1->got->sh_addr - addr +
                            s1->got_offsets[sym_index] - 4);
            break;
        case 22:
            *(int *)ptr += val - s1->got->sh_addr;
            break;
        case 3:

            *(int *)ptr += s1->got_offsets[sym_index];
            break;



        }
    }

    if (sr->sh_flags & (1 << 1))
        sr->link = s1->dynsym;
}


static void relocate_rel(TCCState *s1, Section *sr)
{
    Section *s;
    Elf64_Rela *rel, *rel_end;

    s = s1->sections[sr->sh_info];
    rel_end = (Elf64_Rela *)(sr->data + sr->data_offset);
    for(rel = (Elf64_Rela *)sr->data;
        rel < rel_end;
        rel++) {
        rel->r_offset += s->sh_addr;
    }
}



static int prepare_dynamic_rel(TCCState *s1, Section *sr)
{
    Elf64_Rela *rel, *rel_end;
    int sym_index, esym_index, type, count;

    count = 0;
    rel_end = (Elf64_Rela *)(sr->data + sr->data_offset);
    for(rel = (Elf64_Rela *)sr->data; rel < rel_end; rel++) {
        sym_index = ((rel->r_info) >> 32);
        type = ((rel->r_info) & 0xffffffff);
        switch(type) {



        case 10:
        case 11:
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
        sr->sh_size = count * sizeof(Elf64_Rela);
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
    add_elf_sym(symtab_section, 0, 4, ((((1)) << 4) + (((1)) & 0xf)),
                0, s1->got->sh_num, "_GLOBAL_OFFSET_TABLE_");
    ptr = section_ptr_add(s1->got, 3 * 8);
# 851 "tccelf.c"
    put32(ptr, 0);
    put32(ptr + 4, 0);

    put32(ptr + 8, 0);
    put32(ptr + 12, 0);
    put32(ptr + 16, 0);
    put32(ptr + 20, 0);

}



static void put_got_entry(TCCState *s1,
                          int reloc_type, unsigned long size, int info,
                          int sym_index)
{
    int index;
    const char *name;
    Elf64_Sym *sym;
    unsigned long offset;
    int *ptr;

    if (!s1->got)
        build_got(s1);


    if (sym_index < s1->nb_got_offsets &&
        s1->got_offsets[sym_index] != 0)
        return;

    put_got_offset(s1, sym_index, s1->got->data_offset);

    if (s1->dynsym) {
        sym = &((Elf64_Sym *)symtab_section->data)[sym_index];
        name = symtab_section->link->data + sym->st_name;
        offset = sym->st_value;

        if (reloc_type ==

            7



            ) {
            Section *plt;
            uint8_t *p;
            int modrm;


            modrm = 0x25;
# 910 "tccelf.c"
            plt = s1->plt;
            if (plt->data_offset == 0) {

                p = section_ptr_add(plt, 16);
                p[0] = 0xff;
                p[1] = modrm + 0x10;
                put32(p + 2, 8);
                p[6] = 0xff;
                p[7] = modrm;
                put32(p + 8, 8 * 2);
            }

            p = section_ptr_add(plt, 16);
            p[0] = 0xff;
            p[1] = modrm;
            put32(p + 2, s1->got->data_offset);
            p[6] = 0x68;
            put32(p + 7, (plt->data_offset - 32) >> 1);
            p[11] = 0xe9;
            put32(p + 12, -(plt->data_offset));






                offset = plt->data_offset - 16;
        }
# 974 "tccelf.c"
        index = put_elf_sym(s1->dynsym, offset,
                            size, info, 0, sym->st_shndx, name);

        put_elf_reloc(s1->dynsym, s1->got,
                      s1->got->data_offset,
                      reloc_type, index);
    }
    ptr = section_ptr_add(s1->got, 8);
    *ptr = 0;
}


static void build_got_entries(TCCState *s1)
{
    Section *s, *symtab;
    Elf64_Rela *rel, *rel_end;
    Elf64_Sym *sym;
    int i, type, reloc_type, sym_index;

    for(i = 1; i < s1->nb_sections; i++) {
        s = s1->sections[i];
        if (s->sh_type != 4)
            continue;

        if (s->link != symtab_section)
            continue;
        symtab = s->link;
        rel_end = (Elf64_Rela *)(s->data + s->data_offset);
        for(rel = (Elf64_Rela *)s->data;
            rel < rel_end;
            rel++) {
            type = ((rel->r_info) & 0xffffffff);
            switch(type) {
# 1065 "tccelf.c"
            case 3:
            case 22:
            case 9:
            case 4:
                if (!s1->got)
                    build_got(s1);
                if (type == 3 || type == 9 ||
                    type == 4) {
                    sym_index = ((rel->r_info) >> 32);
                    sym = &((Elf64_Sym *)symtab_section->data)[sym_index];

                    if (type == 3 || type == 9)
                        reloc_type = 6;
                    else
                        reloc_type = 7;
                    put_got_entry(s1, reloc_type, sym->st_size, sym->st_info,
                                  sym_index);
                }
                break;



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
    symtab->sh_entsize = sizeof(Elf64_Sym);
    strtab = new_section(s1, strtab_name, 3, sh_flags);
    put_elf_str(strtab, "");
    symtab->link = strtab;
    put_elf_sym(symtab, 0, 0, 0, 0, 0, 
# 1107 "tccelf.c" 3 4
                                      ((void *)0)
# 1107 "tccelf.c"
                                          );

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
    Elf64_Dyn *dyn;
    dyn = section_ptr_add(dynamic, sizeof(Elf64_Dyn));
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
                ((((1)) << 4) + (((0)) & 0xf)), 0,
                s->sh_num, sym_start);
    add_elf_sym(symtab_section,
                end_offset, 0,
                ((((1)) << 4) + (((0)) & 0xf)), 0,
                s->sh_num, sym_end);
}


static void tcc_add_runtime(TCCState *s1)
{

    char buf[1024];
# 1198 "tccelf.c"
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
                ((((1)) << 4) + (((0)) & 0xf)), 0,
                text_section->sh_num, "_etext");
    add_elf_sym(symtab_section,
                data_section->data_offset, 0,
                ((((1)) << 4) + (((0)) & 0xf)), 0,
                data_section->sh_num, "_edata");
    add_elf_sym(symtab_section,
                bss_section->data_offset, 0,
                ((((1)) << 4) + (((0)) & 0xf)), 0,
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
                        ((((1)) << 4) + (((0)) & 0xf)), 0,
                        s->sh_num, buf);
            snprintf(buf, sizeof(buf), "__stop_%s", s->name);
            add_elf_sym(symtab_section,
                        s->data_offset, 0,
                        ((((1)) << 4) + (((0)) & 0xf)), 0,
                        s->sh_num, buf);
        }
    next_sec: ;
    }
}







static char elf_interp[] = "/lib/ld-linux-x86-64.so.2";






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
    Elf64_Ehdr ehdr;
    FILE *f;
    int fd, mode, ret;
    int *section_order;
    int shnum, i, phnum, file_offset, offset, size, j, tmp, sh_order_index, k;
    unsigned long addr;
    Section *strsec, *s;
    Elf64_Shdr shdr, *sh;
    Elf64_Phdr *phdr, *ph;
    Section *interp, *dynamic, *dynstr;
    unsigned long saved_dynamic_data_offset;
    Elf64_Sym *sym;
    int type, file_type;
    unsigned long rel_addr, rel_size;

    file_type = s1->output_type;
    s1->nb_errors = 0;

    if (file_type != 3) {
        tcc_add_runtime(s1);
    }

    phdr = 
# 1335 "tccelf.c" 3 4
          ((void *)0)
# 1335 "tccelf.c"
              ;
    section_order = 
# 1336 "tccelf.c" 3 4
                   ((void *)0)
# 1336 "tccelf.c"
                       ;
    interp = 
# 1337 "tccelf.c" 3 4
            ((void *)0)
# 1337 "tccelf.c"
                ;
    dynamic = 
# 1338 "tccelf.c" 3 4
             ((void *)0)
# 1338 "tccelf.c"
                 ;
    dynstr = 
# 1339 "tccelf.c" 3 4
            ((void *)0)
# 1339 "tccelf.c"
                ;
    saved_dynamic_data_offset = 0;

    if (file_type != 3) {
        relocate_common_syms();

        tcc_add_linker_symbols(s1);

        if (!s1->static_link) {
            const char *name;
            int sym_index, index;
            Elf64_Sym *esym, *sym_end;

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
            dynamic->sh_entsize = sizeof(Elf64_Dyn);


            s1->plt = new_section(s1, ".plt", 1,
                                  (1 << 1) | (1 << 2));
            s1->plt->sh_entsize = 4;

            build_got(s1);





            sym_end = (Elf64_Sym *)(symtab_section->data +
                                    symtab_section->data_offset);
            if (file_type == 1) {
                for(sym = (Elf64_Sym *)symtab_section->data + 1;
                    sym < sym_end;
                    sym++) {
                    if (sym->st_shndx == 0) {
                        name = symtab_section->link->data + sym->st_name;
                        sym_index = find_elf_sym(s1->dynsymtab_section, name);
                        if (sym_index) {
                            esym = &((Elf64_Sym *)s1->dynsymtab_section->data)[sym_index];
                            type = ((esym->st_info) & 0xf);
                            if (type == 2) {
                                put_got_entry(s1, 7, esym->st_size,
                                              esym->st_info,
                                              sym - (Elf64_Sym *)symtab_section->data);
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



                sym_end = (Elf64_Sym *)(s1->dynsymtab_section->data +
                                        s1->dynsymtab_section->data_offset);
                for(esym = (Elf64_Sym *)s1->dynsymtab_section->data + 1;
                    esym < sym_end;
                    esym++) {
                    if (esym->st_shndx == 0) {
                        name = s1->dynsymtab_section->link->data + esym->st_name;
                        sym_index = find_elf_sym(symtab_section, name);
                        if (sym_index) {


                            sym = &((Elf64_Sym *)symtab_section->data)[sym_index];
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

                nb_syms = symtab_section->data_offset / sizeof(Elf64_Sym);
                s1->symtab_to_dynsym = tcc_mallocz(sizeof(int) * nb_syms);
                for(sym = (Elf64_Sym *)symtab_section->data + 1;
                    sym < sym_end;
                    sym++) {
                    if ((((unsigned char) (sym->st_info)) >> 4) != 0) {

                        if (((sym->st_info) & 0xf) == 2 &&
                            sym->st_shndx == 0) {
                            put_got_entry(s1, 7, sym->st_size,
                                          sym->st_info,
                                          sym - (Elf64_Sym *)symtab_section->data);
                        }
                        else if (((sym->st_info) & 0xf) == 1) {
                            put_got_entry(s1, 6, sym->st_size,
                                          sym->st_info,
                                          sym - (Elf64_Sym *)symtab_section->data);
                        }
                        else

                        {
                            name = symtab_section->link->data + sym->st_name;
                            index = put_elf_sym(s1->dynsym, sym->st_value, sym->st_size,
                                                sym->st_info, 0,
                                                sym->st_shndx, name);
                            s1->symtab_to_dynsym[sym -
                                                 (Elf64_Sym *)symtab_section->data] =
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
            dynamic->data_offset += sizeof(Elf64_Dyn) * 9;
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
# 1573 "tccelf.c"
        if (file_type == 2 &&
            s->sh_type == 4 &&
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


    phdr = tcc_mallocz(phnum * sizeof(Elf64_Phdr));

    if (s1->output_format == 0) {
        file_offset = sizeof(Elf64_Ehdr) + phnum * sizeof(Elf64_Phdr);
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
                    } else if (s->sh_type == 4) {
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

                    if (s->sh_type == 4) {
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
            Elf64_Sym *sym_end;

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

                || file_type == 2

                ) {
                uint8_t *p, *p_end;

                p = s1->plt->data;
                p_end = p + s1->plt->data_offset;
                if (p < p_end) {
# 1766 "tccelf.c"
                    int x = s1->got->sh_addr - s1->plt->sh_addr - 6;
                    put32(p + 2, get32(p + 2) + x);
                    put32(p + 8, get32(p + 8) + x - 6);
                    p += 16;
                    while (p < p_end) {
                        put32(p + 2, get32(p + 2) + x + s1->plt->data - p);
                        p += 16;
                    }
# 1787 "tccelf.c"
                }
            }


            sym_end = (Elf64_Sym *)(s1->dynsym->data + s1->dynsym->data_offset);
            for(sym = (Elf64_Sym *)s1->dynsym->data + 1;
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
            put_dt(dynamic, 11, sizeof(Elf64_Sym));

            put_dt(dynamic, 7, rel_addr);
            put_dt(dynamic, 8, rel_size);
            put_dt(dynamic, 9, sizeof(Elf64_Rela));





            if (s1->do_debug)
                put_dt(dynamic, 21, 0);
            put_dt(dynamic, 0, 0);
        }

        ehdr.e_phentsize = sizeof(Elf64_Phdr);
        ehdr.e_phnum = phnum;
        ehdr.e_phoff = sizeof(Elf64_Ehdr);
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
                s->sh_type == 4) {
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
    fd = open(filename, 
# 1887 "tccelf.c" 3 4
                       01 
# 1887 "tccelf.c"
                                | 
# 1887 "tccelf.c" 3 4
                                  0100 
# 1887 "tccelf.c"
                                          | 
# 1887 "tccelf.c" 3 4
                                            01000 
# 1887 "tccelf.c"
                                                    | 0, mode);
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
        ehdr.e_ident[4] = 2;
        ehdr.e_ident[5] = 1;
        ehdr.e_ident[6] = 1;
# 1926 "tccelf.c"
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
        ehdr.e_machine = 62;
        ehdr.e_version = 1;
        ehdr.e_shoff = file_offset;
        ehdr.e_ehsize = sizeof(Elf64_Ehdr);
        ehdr.e_shentsize = sizeof(Elf64_Shdr);
        ehdr.e_shnum = shnum;
        ehdr.e_shstrndx = shnum - 1;

        fwrite(&ehdr, 1, sizeof(Elf64_Ehdr), f);
        fwrite(phdr, 1, phnum * sizeof(Elf64_Phdr), f);
        offset = sizeof(Elf64_Ehdr) + phnum * sizeof(Elf64_Phdr);

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
            memset(sh, 0, sizeof(Elf64_Shdr));
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
            fwrite(sh, 1, sizeof(Elf64_Shdr), f);
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
    lseek(fd, file_offset, 
# 2021 "tccelf.c" 3 4
                          0
# 2021 "tccelf.c"
                                  );
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
    Elf64_Ehdr ehdr;
    Elf64_Shdr *shdr, *sh;
    int size, i, j, offset, offseti, nb_syms, sym_index, ret;
    unsigned char *strsec, *strtab;
    int *old_to_new_syms;
    char *sh_name, *name;
    SectionMergeInfo *sm_table, *sm;
    Elf64_Sym *sym, *symtab;
    Elf64_Rela *rel, *rel_end;
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
        ehdr.e_machine != 62) {
    fail1:
        error_noabort("invalid object file");
        return -1;
    }

    shdr = load_data(fd, file_offset + ehdr.e_shoff,
                     sizeof(Elf64_Shdr) * ehdr.e_shnum);
    sm_table = tcc_mallocz(sizeof(SectionMergeInfo) * ehdr.e_shnum);


    sh = &shdr[ehdr.e_shstrndx];
    strsec = load_data(fd, file_offset + sh->sh_offset, sh->sh_size);


    old_to_new_syms = 
# 2081 "tccelf.c" 3 4
                     ((void *)0)
# 2081 "tccelf.c"
                         ;
    symtab = 
# 2082 "tccelf.c" 3 4
            ((void *)0)
# 2082 "tccelf.c"
                ;
    strtab = 
# 2083 "tccelf.c" 3 4
            ((void *)0)
# 2083 "tccelf.c"
                ;
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
            nb_syms = sh->sh_size / sizeof(Elf64_Sym);
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
            sh->sh_type != 4 &&



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
            lseek(fd, file_offset + sh->sh_offset, 
# 2178 "tccelf.c" 3 4
                                                  0
# 2178 "tccelf.c"
                                                          );
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
        if (sh->sh_type == 4) {
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
        case 4:

            offseti = sm_table[sh->sh_info].offset;
            rel_end = (Elf64_Rela *)(s->data + s->data_offset);
            for(rel = (Elf64_Rela *)(s->data + offset);
                rel < rel_end;
                rel++) {
                int type;
                unsigned sym_index;

                type = ((rel->r_info) & 0xffffffff);
                sym_index = ((rel->r_info) >> 32);

                if (sym_index >= nb_syms)
                    goto invalid_reloc;
                sym_index = old_to_new_syms[sym_index];

                if (!sym_index && !sm->link_once) {
                invalid_reloc:
                    error_noabort("Invalid relocation entry [%2d] '%s' @ %.8x",
                        i, strsec + sh->sh_name, rel->r_offset);
                    goto fail;
                }
                rel->r_info = ((((Elf64_Xword)(sym_index)) << 32) + (type));

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
    Elf64_Sym *sym;

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
                sym = &((Elf64_Sym *)symtab_section->data)[sym_index];
                if(sym->st_shndx == 0) {
                    off = get_be32(ar_index + i * 4) + sizeof(ArchiveHeader);



                    ++bound;
                    lseek(fd, off, 
# 2349 "tccelf.c" 3 4
                                  0
# 2349 "tccelf.c"
                                          );
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
        size = strtol(ar_size, 
# 2388 "tccelf.c" 3 4
                              ((void *)0)
# 2388 "tccelf.c"
                                  , 0);
        memcpy(ar_name, hdr.ar_name, sizeof(hdr.ar_name));
        for(i = sizeof(hdr.ar_name) - 1; i >= 0; i--) {
            if (ar_name[i] != ' ')
                break;
        }
        ar_name[i + 1] = '\0';

        file_offset = lseek(fd, 0, 
# 2396 "tccelf.c" 3 4
                                  1
# 2396 "tccelf.c"
                                          );

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
        lseek(fd, file_offset + size, 
# 2412 "tccelf.c" 3 4
                                     0
# 2412 "tccelf.c"
                                             );
    }
    return 0;
}




static int tcc_load_dll(TCCState *s1, int fd, const char *filename, int level)
{
    Elf64_Ehdr ehdr;
    Elf64_Shdr *shdr, *sh, *sh1;
    int i, j, nb_syms, nb_dts, sym_bind, ret;
    Elf64_Sym *sym, *dynsym;
    Elf64_Dyn *dt, *dynamic;
    unsigned char *dynstr;
    const char *name, *soname;
    DLLReference *dllref;

    read(fd, &ehdr, sizeof(ehdr));


    if (ehdr.e_ident[5] != 1 ||
        ehdr.e_machine != 62) {
        error_noabort("bad architecture");
        return -1;
    }


    shdr = load_data(fd, ehdr.e_shoff, sizeof(Elf64_Shdr) * ehdr.e_shnum);


    nb_syms = 0;
    nb_dts = 0;
    dynamic = 
# 2446 "tccelf.c" 3 4
             ((void *)0)
# 2446 "tccelf.c"
                 ;
    dynsym = 
# 2447 "tccelf.c" 3 4
            ((void *)0)
# 2447 "tccelf.c"
                ;
    dynstr = 
# 2448 "tccelf.c" 3 4
            ((void *)0)
# 2448 "tccelf.c"
                ;
    for(i = 0, sh = shdr; i < ehdr.e_shnum; i++, sh++) {
        switch(sh->sh_type) {
        case 6:
            nb_dts = sh->sh_size / sizeof(Elf64_Dyn);
            dynamic = load_data(fd, sh->sh_offset, sh->sh_size);
            break;
        case 11:
            nb_syms = sh->sh_size / sizeof(Elf64_Sym);
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

    fprintf(
# 1350 "libtcc.c" 3 4
           stderr
# 1350 "libtcc.c"
                 , "0x%08lx:", wanted_pc);

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
        Elf64_Sym *sym, *sym_end;
        int type;

        sym_end = (Elf64_Sym *)(symtab_section->data + symtab_section->data_offset);
        for(sym = (Elf64_Sym *)symtab_section->data + 1;
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

    fprintf(
# 1445 "libtcc.c" 3 4
           stderr
# 1445 "libtcc.c"
                 , " ???\n");
    return;
 found:
    if (last_func_name[0] != '\0') {
        fprintf(
# 1449 "libtcc.c" 3 4
               stderr
# 1449 "libtcc.c"
                     , " %s()", last_func_name);
    }
    if (incl_index > 0) {
        fprintf(
# 1452 "libtcc.c" 3 4
               stderr
# 1452 "libtcc.c"
                     , " (%s:%d",
                incl_files[incl_index - 1], last_line_num);
        for(i = incl_index - 2; i >= 0; i--)
            fprintf(
# 1455 "libtcc.c" 3 4
                   stderr
# 1455 "libtcc.c"
                         , ", included from %s", incl_files[i]);
        fprintf(
# 1456 "libtcc.c" 3 4
               stderr
# 1456 "libtcc.c"
                     , ")");
    }
    fprintf(
# 1458 "libtcc.c" 3 4
           stderr
# 1458 "libtcc.c"
                 , "\n");
}
# 1504 "libtcc.c"
static int rt_get_caller_pc(unsigned long *paddr,
                            ucontext_t *uc, int level)
{
    unsigned long fp;
    int i;

    if (level == 0) {

        *paddr = uc->uc_mcontext.gregs[
# 1512 "libtcc.c" 3 4
                                      REG_RIP
# 1512 "libtcc.c"
                                             ];
        return 0;
    } else {
        fp = uc->uc_mcontext.gregs[
# 1515 "libtcc.c" 3 4
                                  REG_RBP
# 1515 "libtcc.c"
                                         ];
        for(i=1;i<level;i++) {

            if (fp <= 0x1000)
                return -1;
            fp = ((unsigned long *)fp)[0];
        }
        *paddr = ((unsigned long *)fp)[1];
        return 0;
    }
}
# 1536 "libtcc.c"
void rt_error(ucontext_t *uc, const char *fmt, ...)
{
    va_list ap;
    unsigned long pc;
    int i;

    
# 1542 "libtcc.c" 3 4
   __builtin_va_start(
# 1542 "libtcc.c"
   ap
# 1542 "libtcc.c" 3 4
   ,
# 1542 "libtcc.c"
   fmt
# 1542 "libtcc.c" 3 4
   )
# 1542 "libtcc.c"
                    ;
    fprintf(
# 1543 "libtcc.c" 3 4
           stderr
# 1543 "libtcc.c"
                 , "Runtime error: ");
    vfprintf(
# 1544 "libtcc.c" 3 4
            stderr
# 1544 "libtcc.c"
                  , fmt, ap);
    fprintf(
# 1545 "libtcc.c" 3 4
           stderr
# 1545 "libtcc.c"
                 , "\n");
    for(i=0;i<num_callers;i++) {
        if (rt_get_caller_pc(&pc, uc, i) < 0)
            break;
        if (i == 0)
            fprintf(
# 1550 "libtcc.c" 3 4
                   stderr
# 1550 "libtcc.c"
                         , "at ");
        else
            fprintf(
# 1552 "libtcc.c" 3 4
                   stderr
# 1552 "libtcc.c"
                         , "by ");
        rt_printline(pc);
    }
    exit(255);
    
# 1556 "libtcc.c" 3 4
   __builtin_va_end(
# 1556 "libtcc.c"
   ap
# 1556 "libtcc.c" 3 4
   )
# 1556 "libtcc.c"
             ;
}


static void sig_error(int signum, siginfo_t *siginf, void *puc)
{
    ucontext_t *uc = puc;

    switch(signum) {
    case 
# 1565 "libtcc.c" 3 4
        8
# 1565 "libtcc.c"
              :
        switch(siginf->si_code) {
        case 
# 1567 "libtcc.c" 3 4
            FPE_INTDIV
# 1567 "libtcc.c"
                      :
        case 
# 1568 "libtcc.c" 3 4
            FPE_FLTDIV
# 1568 "libtcc.c"
                      :
            rt_error(uc, "division by zero");
            break;
        default:
            rt_error(uc, "floating point exception");
            break;
        }
        break;
    case 
# 1576 "libtcc.c" 3 4
        7
# 1576 "libtcc.c"
              :
    case 
# 1577 "libtcc.c" 3 4
        11
# 1577 "libtcc.c"
               :
        if (rt_bound_error_msg && *rt_bound_error_msg)
            rt_error(uc, *rt_bound_error_msg);
        else
            rt_error(uc, "dereferencing invalid pointer");
        break;
    case 
# 1583 "libtcc.c" 3 4
        4
# 1583 "libtcc.c"
              :
        rt_error(uc, "illegal instruction");
        break;
    case 
# 1586 "libtcc.c" 3 4
        6
# 1586 "libtcc.c"
               :
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


    s1->runtime_plt_and_got_offset = 0;
    s1->runtime_plt_and_got = (char *)(mem + offset);


    offset *= 2;


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
        if (
# 1662 "libtcc.c" 3 4
           ((void *)0) 
# 1662 "libtcc.c"
                == s->data || s->sh_type == 8)
            memset(ptr, 0, length);
        else
            memcpy(ptr, s->data, length);

        if (s->sh_flags & (1 << 2))
            set_pages_executable(ptr, length);
    }

    set_pages_executable(s1->runtime_plt_and_got,
                         s1->runtime_plt_and_got_offset);

    return 0;
}


int tcc_run(TCCState *s1, int argc, char **argv)
{
    int (*prog_main)(int, char **);
    void *ptr;
    int ret;

    ret = tcc_relocate(s1, 
# 1684 "libtcc.c" 3 4
                          ((void *)0)
# 1684 "libtcc.c"
                              );
    if (ret < 0)
        return -1;
    ptr = tcc_malloc(ret);
    tcc_relocate(s1, ptr);

    prog_main = tcc_get_symbol_err(s1, "main");

    if (s1->do_debug) {

        struct sigaction sigact;


        sigact.sa_flags = 
# 1697 "libtcc.c" 3 4
                         4 
# 1697 "libtcc.c"
                                    | 
# 1697 "libtcc.c" 3 4
                                      0x80000000
# 1697 "libtcc.c"
                                                  ;
        sigact.
# 1698 "libtcc.c" 3 4
              __sigaction_handler.sa_sigaction 
# 1698 "libtcc.c"
                           = sig_error;
        sigemptyset(&sigact.sa_mask);
        sigaction(
# 1700 "libtcc.c" 3 4
                 8
# 1700 "libtcc.c"
                       , &sigact, 
# 1700 "libtcc.c" 3 4
                                  ((void *)0)
# 1700 "libtcc.c"
                                      );
        sigaction(
# 1701 "libtcc.c" 3 4
                 4
# 1701 "libtcc.c"
                       , &sigact, 
# 1701 "libtcc.c" 3 4
                                  ((void *)0)
# 1701 "libtcc.c"
                                      );
        sigaction(
# 1702 "libtcc.c" 3 4
                 11
# 1702 "libtcc.c"
                        , &sigact, 
# 1702 "libtcc.c" 3 4
                                   ((void *)0)
# 1702 "libtcc.c"
                                       );
        sigaction(
# 1703 "libtcc.c" 3 4
                 7
# 1703 "libtcc.c"
                       , &sigact, 
# 1703 "libtcc.c" 3 4
                                  ((void *)0)
# 1703 "libtcc.c"
                                      );
        sigaction(
# 1704 "libtcc.c" 3 4
                 6
# 1704 "libtcc.c"
                        , &sigact, 
# 1704 "libtcc.c" 3 4
                                   ((void *)0)
# 1704 "libtcc.c"
                                       );



    }
# 1722 "libtcc.c"
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

    if (
# 1738 "libtcc.c" 3 4
       ((void *)0) 
# 1738 "libtcc.c"
            == tcc_state)
        return;
    tcc_state = 
# 1740 "libtcc.c" 3 4
               ((void *)0)
# 1740 "libtcc.c"
                   ;


    free_defines(
# 1743 "libtcc.c" 3 4
                ((void *)0)
# 1743 "libtcc.c"
                    );


    n = tok_ident - 256;
    for(i = 0; i < n; i++)
        tcc_free(table_ident[i]);
    tcc_free(table_ident);


    dynarray_reset(&sym_pools, &nb_sym_pools);

    cstr_free(&tokcstr);

    sym_free_first = 
# 1756 "libtcc.c" 3 4
                    ((void *)0)
# 1756 "libtcc.c"
                        ;

    macro_ptr = 
# 1758 "libtcc.c" 3 4
               ((void *)0)
# 1758 "libtcc.c"
                   ;
}

TCCState *tcc_new(void)
{
    TCCState *s;

    tcc_cleanup();

    s = tcc_mallocz(sizeof(TCCState));
    if (!s)
        return 
# 1769 "libtcc.c" 3 4
              ((void *)0)
# 1769 "libtcc.c"
                  ;
    tcc_state = s;
    s->output_type = 0;
    s->tcc_lib_path = "/usr/local/lib/tcc";

    preprocess_new();



    define_push(TOK___LINE__, 0, 
# 1778 "libtcc.c" 3 4
                                        ((void *)0)
# 1778 "libtcc.c"
                                            , 
# 1778 "libtcc.c" 3 4
                                              ((void *)0)
# 1778 "libtcc.c"
                                                  );
    define_push(TOK___FILE__, 0, 
# 1779 "libtcc.c" 3 4
                                        ((void *)0)
# 1779 "libtcc.c"
                                            , 
# 1779 "libtcc.c" 3 4
                                              ((void *)0)
# 1779 "libtcc.c"
                                                  );
    define_push(TOK___DATE__, 0, 
# 1780 "libtcc.c" 3 4
                                        ((void *)0)
# 1780 "libtcc.c"
                                            , 
# 1780 "libtcc.c" 3 4
                                              ((void *)0)
# 1780 "libtcc.c"
                                                  );
    define_push(TOK___TIME__, 0, 
# 1781 "libtcc.c" 3 4
                                        ((void *)0)
# 1781 "libtcc.c"
                                            , 
# 1781 "libtcc.c" 3 4
                                              ((void *)0)
# 1781 "libtcc.c"
                                                  );


    tcc_define_symbol(s, "__STDC__", 
# 1784 "libtcc.c" 3 4
                                    ((void *)0)
# 1784 "libtcc.c"
                                        );
    tcc_define_symbol(s, "__STDC_VERSION__", "199901L");




    tcc_define_symbol(s, "__x86_64__", 
# 1790 "libtcc.c" 3 4
                                      ((void *)0)
# 1790 "libtcc.c"
                                          );
# 1805 "libtcc.c"
    tcc_define_symbol(s, "__unix__", 
# 1805 "libtcc.c" 3 4
                                    ((void *)0)
# 1805 "libtcc.c"
                                        );
    tcc_define_symbol(s, "__unix", 
# 1806 "libtcc.c" 3 4
                                  ((void *)0)
# 1806 "libtcc.c"
                                      );

    tcc_define_symbol(s, "__linux__", 
# 1808 "libtcc.c" 3 4
                                     ((void *)0)
# 1808 "libtcc.c"
                                         );
    tcc_define_symbol(s, "__linux", 
# 1809 "libtcc.c" 3 4
                                   ((void *)0)
# 1809 "libtcc.c"
                                       );



    tcc_define_symbol(s, "__TINYC__", 
# 1813 "libtcc.c" 3 4
                                     ((void *)0)
# 1813 "libtcc.c"
                                         );


    tcc_define_symbol(s, "__SIZE_TYPE__", "unsigned int");
    tcc_define_symbol(s, "__PTRDIFF_TYPE__", "int");



    tcc_define_symbol(s, "__WCHAR_TYPE__", "int");




    tcc_add_library_path(s, "" "/usr/local/lib");
    tcc_add_library_path(s, "" "/usr/lib");
    tcc_add_library_path(s, "" "/lib");



    dynarray_add((void ***)&s->sections, &s->nb_sections, 
# 1832 "libtcc.c" 3 4
                                                         ((void *)0)
# 1832 "libtcc.c"
                                                             );


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
    Elf64_Ehdr ehdr;
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
# 1958 "libtcc.c"
    {
        fd = file->fd;

        ret = read(fd, &ehdr, sizeof(ehdr));
        lseek(fd, 0, 
# 1962 "libtcc.c" 3 4
                    0
# 1962 "libtcc.c"
                            );
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
                    h = dlopen(filename, 
# 1983 "libtcc.c" 3 4
                                        0x00100 
# 1983 "libtcc.c"
                                                    | 
# 1983 "libtcc.c" 3 4
                                                      0x00001
# 1983 "libtcc.c"
                                                               );
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
                ((((1)) << 4) + (((0)) & 0xf)), 0,
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
# 2133 "libtcc.c"
    if (s->char_is_unsigned) {
        tcc_define_symbol(s, "__CHAR_UNSIGNED__", 
# 2134 "libtcc.c" 3 4
                                                 ((void *)0)
# 2134 "libtcc.c"
                                                     );
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
# 22 "tcc.c" 2

void help(void)
{
    printf("tcc version " "0.9.25" " - Tiny C Compiler - Copyright (C) 2001-2006 Fabrice Bellard\n"
           "usage: tcc [-v] [-c] [-o outfile] [-Bdir] [-bench] [-Idir] [-Dsym[=val]] [-Usym]\n"
           "           [-Wwarn] [-g] [-b] [-bt N] [-Ldir] [-llib] [-shared] [-soname name]\n"
           "           [-static] [infile1 infile2...] [-run infile args...]\n"
           "\n"
           "General options:\n"
           "  -v          display current version, increase verbosity\n"
           "  -c          compile only - generate an object file\n"
           "  -o outfile  set output filename\n"
           "  -Bdir       set tcc internal library path\n"
           "  -bench      output compilation statistics\n"
           "  -run        run compiled source\n"
           "  -fflag      set or reset (with 'no-' prefix) 'flag' (see man page)\n"
           "  -Wwarning   set or reset (with 'no-' prefix) 'warning' (see man page)\n"
           "  -w          disable all warnings\n"
           "Preprocessor options:\n"
           "  -E          preprocess only\n"
           "  -Idir       add include path 'dir'\n"
           "  -Dsym[=val] define 'sym' with value 'val'\n"
           "  -Usym       undefine 'sym'\n"
           "Linker options:\n"
           "  -Ldir       add library path 'dir'\n"
           "  -llib       link with dynamic or static library 'lib'\n"
           "  -shared     generate a shared library\n"
           "  -soname     set name for shared library to be used at runtime\n"
           "  -static     static linking\n"
           "  -rdynamic   export all global symbols to dynamic linker\n"
           "  -r          generate (relocatable) object file\n"
           "Debugger options:\n"
           "  -g          generate runtime debug info\n"




           "  -bt N       show N callers in stack traces\n"

           );
}

static char **files;
static int nb_files, nb_libraries;
static int multiple_files;
static int print_search_dirs;
static int output_type;
static int reloc_output;
static const char *outfile;
static int do_bench = 0;




typedef struct TCCOption {
    const char *name;
    uint16_t index;
    uint16_t flags;
} TCCOption;

enum {
    TCC_OPTION_HELP,
    TCC_OPTION_I,
    TCC_OPTION_D,
    TCC_OPTION_U,
    TCC_OPTION_L,
    TCC_OPTION_B,
    TCC_OPTION_l,
    TCC_OPTION_bench,
    TCC_OPTION_bt,
    TCC_OPTION_b,
    TCC_OPTION_g,
    TCC_OPTION_c,
    TCC_OPTION_static,
    TCC_OPTION_shared,
    TCC_OPTION_soname,
    TCC_OPTION_o,
    TCC_OPTION_r,
    TCC_OPTION_Wl,
    TCC_OPTION_W,
    TCC_OPTION_O,
    TCC_OPTION_m,
    TCC_OPTION_f,
    TCC_OPTION_nostdinc,
    TCC_OPTION_nostdlib,
    TCC_OPTION_print_search_dirs,
    TCC_OPTION_rdynamic,
    TCC_OPTION_run,
    TCC_OPTION_v,
    TCC_OPTION_w,
    TCC_OPTION_pipe,
    TCC_OPTION_E,
};

static const TCCOption tcc_options[] = {
    { "h", TCC_OPTION_HELP, 0 },
    { "?", TCC_OPTION_HELP, 0 },
    { "I", TCC_OPTION_I, 0x0001 },
    { "D", TCC_OPTION_D, 0x0001 },
    { "U", TCC_OPTION_U, 0x0001 },
    { "L", TCC_OPTION_L, 0x0001 },
    { "B", TCC_OPTION_B, 0x0001 },
    { "l", TCC_OPTION_l, 0x0001 | 0x0002 },
    { "bench", TCC_OPTION_bench, 0 },
    { "bt", TCC_OPTION_bt, 0x0001 },



    { "g", TCC_OPTION_g, 0x0001 | 0x0002 },
    { "c", TCC_OPTION_c, 0 },
    { "static", TCC_OPTION_static, 0 },
    { "shared", TCC_OPTION_shared, 0 },
    { "soname", TCC_OPTION_soname, 0x0001 },
    { "o", TCC_OPTION_o, 0x0001 },
    { "run", TCC_OPTION_run, 0x0001 | 0x0002 },
    { "rdynamic", TCC_OPTION_rdynamic, 0 },
    { "r", TCC_OPTION_r, 0 },
    { "Wl,", TCC_OPTION_Wl, 0x0001 | 0x0002 },
    { "W", TCC_OPTION_W, 0x0001 | 0x0002 },
    { "O", TCC_OPTION_O, 0x0001 | 0x0002 },
    { "m", TCC_OPTION_m, 0x0001 },
    { "f", TCC_OPTION_f, 0x0001 | 0x0002 },
    { "nostdinc", TCC_OPTION_nostdinc, 0 },
    { "nostdlib", TCC_OPTION_nostdlib, 0 },
    { "print-search-dirs", TCC_OPTION_print_search_dirs, 0 },
    { "v", TCC_OPTION_v, 0x0001 | 0x0002 },
    { "w", TCC_OPTION_w, 0 },
    { "pipe", TCC_OPTION_pipe, 0},
    { "E", TCC_OPTION_E, 0},
    { 
# 151 "tcc.c" 3 4
     ((void *)0) 
# 151 "tcc.c"
          },
};

static int64_t getclock_us(void)
{





    struct timeval tv;
    gettimeofday(&tv, 
# 162 "tcc.c" 3 4
                     ((void *)0)
# 162 "tcc.c"
                         );
    return tv.tv_sec * 1000000LL + tv.tv_usec;

}

static int strstart(const char *str, const char *val, const char **ptr)
{
    const char *p, *q;
    p = str;
    q = val;
    while (*q != '\0') {
        if (*p != *q)
            return 0;
        p++;
        q++;
    }
    if (ptr)
        *ptr = p;
    return 1;
}


static int expand_args(char ***pargv, const char *str)
{
    const char *s1;
    char **argv, *arg;
    int argc, len;

    argc = 0;
    argv = 
# 191 "tcc.c" 3 4
          ((void *)0)
# 191 "tcc.c"
              ;
    for(;;) {
        while (is_space(*str))
            str++;
        if (*str == '\0')
            break;
        s1 = str;
        while (*str != '\0' && !is_space(*str))
            str++;
        len = str - s1;
        arg = tcc_malloc(len + 1);
        memcpy(arg, s1, len);
        arg[len] = '\0';
        dynarray_add((void ***)&argv, &argc, arg);
    }
    *pargv = argv;
    return argc;
}

int parse_args(TCCState *s, int argc, char **argv)
{
    int optind;
    const TCCOption *popt;
    const char *optarg, *p1, *r1;
    char *r;

    optind = 0;
    while (optind < argc) {

        r = argv[optind++];
        if (r[0] != '-' || r[1] == '\0') {

            dynarray_add((void ***)&files, &nb_files, r);
            if (!multiple_files) {
                optind--;

                break;
            }
        } else {

            popt = tcc_options;
            for(;;) {
                p1 = popt->name;
                if (p1 == 
# 234 "tcc.c" 3 4
                         ((void *)0)
# 234 "tcc.c"
                             )
                    error("invalid option -- '%s'", r);
                r1 = r + 1;
                for(;;) {
                    if (*p1 == '\0')
                        goto option_found;
                    if (*r1 != *p1)
                        break;
                    p1++;
                    r1++;
                }
                popt++;
            }
        option_found:
            if (popt->flags & 0x0001) {
                if (*r1 != '\0' || (popt->flags & 0x0002)) {
                    optarg = r1;
                } else {
                    if (optind >= argc)
                        error("argument to '%s' is missing", r);
                    optarg = argv[optind++];
                }
            } else {
                if (*r1 != '\0')
                    return 0;
                optarg = 
# 259 "tcc.c" 3 4
                        ((void *)0)
# 259 "tcc.c"
                            ;
            }

            switch(popt->index) {
            case TCC_OPTION_HELP:
                return 0;

            case TCC_OPTION_I:
                if (tcc_add_include_path(s, optarg) < 0)
                    error("too many include paths");
                break;
            case TCC_OPTION_D:
                {
                    char *sym, *value;
                    sym = (char *)optarg;
                    value = strchr(sym, '=');
                    if (value) {
                        *value = '\0';
                        value++;
                    }
                    tcc_define_symbol(s, sym, value);
                }
                break;
            case TCC_OPTION_U:
                tcc_undefine_symbol(s, optarg);
                break;
            case TCC_OPTION_L:
                tcc_add_library_path(s, optarg);
                break;
            case TCC_OPTION_B:

                tcc_set_lib_path(s, optarg);
                break;
            case TCC_OPTION_l:
                dynarray_add((void ***)&files, &nb_files, r);
                nb_libraries++;
                break;
            case TCC_OPTION_bench:
                do_bench = 1;
                break;

            case TCC_OPTION_bt:
                num_callers = atoi(optarg);
                break;







            case TCC_OPTION_g:
                s->do_debug = 1;
                break;
            case TCC_OPTION_c:
                multiple_files = 1;
                output_type = 3;
                break;
            case TCC_OPTION_static:
                s->static_link = 1;
                break;
            case TCC_OPTION_shared:
                output_type = 2;
                break;
            case TCC_OPTION_soname:
                s->soname = optarg;
                break;
            case TCC_OPTION_o:
                multiple_files = 1;
                outfile = optarg;
                break;
            case TCC_OPTION_r:

                reloc_output = 1;
                output_type = 3;
                break;
            case TCC_OPTION_nostdinc:
                s->nostdinc = 1;
                break;
            case TCC_OPTION_nostdlib:
                s->nostdlib = 1;
                break;
            case TCC_OPTION_print_search_dirs:
                print_search_dirs = 1;
                break;
            case TCC_OPTION_run:
                {
                    int argc1;
                    char **argv1;
                    argc1 = expand_args(&argv1, optarg);
                    if (argc1 > 0) {
                        parse_args(s, argc1, argv1);
                    }
                    multiple_files = 0;
                    output_type = 0;
                }
                break;
            case TCC_OPTION_v:
                do {
                    if (0 == s->verbose++)
                        printf("tcc version %s\n", "0.9.25");
                } while (*optarg++ == 'v');
                break;
            case TCC_OPTION_f:
                if (tcc_set_flag(s, optarg, 1) < 0 && s->warn_unsupported)
                    goto unsupported_option;
                break;
            case TCC_OPTION_W:
                if (tcc_set_warning(s, optarg, 1) < 0 &&
                    s->warn_unsupported)
                    goto unsupported_option;
                break;
            case TCC_OPTION_w:
                s->warn_none = 1;
                break;
            case TCC_OPTION_rdynamic:
                s->rdynamic = 1;
                break;
            case TCC_OPTION_Wl:
                {
                    const char *p;
                    if (strstart(optarg, "-Ttext,", &p)) {
                        s->text_addr = strtoul(p, 
# 381 "tcc.c" 3 4
                                                 ((void *)0)
# 381 "tcc.c"
                                                     , 16);
                        s->has_text_addr = 1;
                    } else if (strstart(optarg, "--oformat,", &p)) {
                        if (strstart(p, "elf32-", 
# 384 "tcc.c" 3 4
                                                 ((void *)0)
# 384 "tcc.c"
                                                     )) {
                            s->output_format = 0;
                        } else if (!strcmp(p, "binary")) {
                            s->output_format = 1;
                        } else





                        {
                            error("target %s not found", p);
                        }
                    } else {
                        error("unsupported linker option '%s'", optarg);
                    }
                }
                break;
            case TCC_OPTION_E:
                output_type = 4;
                break;
            default:
                if (s->warn_unsupported) {
                unsupported_option:
                    warning("unsupported option '%s'", r);
                }
                break;
            }
        }
    }
    return optind + 1;
}

int main(int argc, char **argv)
{
    int i;
    TCCState *s;
    int nb_objfiles, ret, optind;
    char objfilename[1024];
    int64_t start_time = 0;

    s = tcc_new();



    output_type = 1;
    outfile = 
# 430 "tcc.c" 3 4
             ((void *)0)
# 430 "tcc.c"
                 ;
    multiple_files = 1;
    files = 
# 432 "tcc.c" 3 4
           ((void *)0)
# 432 "tcc.c"
               ;
    nb_files = 0;
    nb_libraries = 0;
    reloc_output = 0;
    print_search_dirs = 0;
    ret = 0;

    optind = parse_args(s, argc - 1, argv + 1);
    if (print_search_dirs) {

        printf("install: %s/\n", s->tcc_lib_path);
        return 0;
    }
    if (optind == 0 || nb_files == 0) {
        if (optind && s->verbose)
            return 0;
        help();
        return 1;
    }

    nb_objfiles = nb_files - nb_libraries;



    if (outfile && output_type == 0)
        output_type = 1;


    if (output_type == 3 && !reloc_output) {

        if (nb_objfiles != 1)
            error("cannot specify multiple files with -c");
        if (nb_libraries != 0)
            error("cannot specify libraries with -c");
    }


    if (output_type == 4) {
        if (!outfile) {
            s->outfile = 
# 471 "tcc.c" 3 4
                        stdout
# 471 "tcc.c"
                              ;
        } else {
            s->outfile = fopen(outfile, "w");
            if (!s->outfile)
                error("could not open '%s", outfile);
        }
    } else if (output_type != 0) {
        if (!outfile) {

            char *ext;
            const char *name =
                strcmp(files[0], "-") == 0 ? "a" : tcc_basename(files[0]);
            pstrcpy(objfilename, sizeof(objfilename), name);
            ext = tcc_fileextension(objfilename);
# 493 "tcc.c"
            if (output_type == 3 && !reloc_output && *ext)
                strcpy(ext, ".o");
            else
                pstrcpy(objfilename, sizeof(objfilename), "a.out");
            outfile = objfilename;
        }
    }

    if (do_bench) {
        start_time = getclock_us();
    }

    tcc_set_output_type(s, output_type);


    for(i = 0; i < nb_files && ret == 0; i++) {
        const char *filename;

        filename = files[i];
        if (filename[0] == '-' && filename[1]) {
            if (tcc_add_library(s, filename + 2) < 0) {
                error_noabort("cannot find %s", filename);
                ret = 1;
            }
        } else {
            if (1 == s->verbose)
                printf("-> %s\n", filename);
            if (tcc_add_file(s, filename) < 0)
                ret = 1;
        }
    }


    tcc_free(files);

    if (ret)
        goto the_end;

    if (do_bench)
        tcc_print_stats(s, getclock_us() - start_time);

    if (s->output_type == 4) {
        if (outfile)
            fclose(s->outfile);
    } else if (s->output_type == 0) {
        ret = tcc_run(s, argc - optind, argv + optind);
    } else
        ret = tcc_output_file(s, outfile) ? 1 : 0;
 the_end:

    if (!s->do_bounds_check)
        tcc_delete(s);






    return ret;
}
