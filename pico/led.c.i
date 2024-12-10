# 1 "led.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 424 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "led.c" 2
# 1 "/usr/local/include/comelang-pico.h" 1






using comelang;



typedef int wint_t;

using C
{
# 1 "/usr/local/include/pico/stdlib.h" 1
# 10 "/usr/local/include/pico/stdlib.h"
# 1 "/usr/local//include/pico/machine/ieeefp.h" 1
# 11 "/usr/local/include/pico/stdlib.h" 2
# 1 "/usr/local/include/pico/_ansi.h" 1
# 10 "/usr/local/include/pico/_ansi.h"
# 1 "/usr/local//include/pico/newlib.h" 1
# 11 "/usr/local/include/pico/_ansi.h" 2
# 1 "/usr/local//include/pico/sys/config.h" 1



# 1 "/usr/local//include/pico/machine/ieeefp.h" 1
# 5 "/usr/local//include/pico/sys/config.h" 2
# 1 "/usr/local//include/pico/sys/features.h" 1
# 28 "/usr/local//include/pico/sys/features.h"
# 1 "/usr/local//include/pico/_newlib_version.h" 1
# 29 "/usr/local//include/pico/sys/features.h" 2
# 6 "/usr/local//include/pico/sys/config.h" 2
# 12 "/usr/local/include/pico/_ansi.h" 2
# 12 "/usr/local/include/pico/stdlib.h" 2




# 1 "/usr/local//include/pico/stddef.h" 1
# 10 "/usr/local//include/pico/stddef.h"
typedef unsigned long size_t;


typedef long ptrdiff_t;



typedef unsigned short wchar_t;
# 17 "/usr/local/include/pico/stdlib.h" 2

# 1 "/usr/local//include/pico/sys/reent.h" 1
# 15 "/usr/local//include/pico/sys/reent.h"
# 1 "/usr/local//include/pico/sys/cdefs.h" 1
# 16 "/usr/local//include/pico/sys/reent.h" 2
# 1 "/usr/local//include/pico/sys/_types.h" 1
# 25 "/usr/local//include/pico/sys/_types.h"
# 1 "/usr/local//include/pico/newlib.h" 1
# 26 "/usr/local//include/pico/sys/_types.h" 2

# 1 "/usr/local//include/pico/machine/_types.h" 1






# 1 "/usr/local//include/pico/machine/_default_types.h" 1
# 41 "/usr/local//include/pico/machine/_default_types.h"
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/local//include/pico/machine/_default_types.h"
typedef short __int16_t;

typedef unsigned short __uint16_t;
# 77 "/usr/local//include/pico/machine/_default_types.h"
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 103 "/usr/local//include/pico/machine/_default_types.h"
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/local//include/pico/machine/_default_types.h"
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/local//include/pico/machine/_default_types.h"
typedef short __int_least16_t;

typedef unsigned short __uint_least16_t;
# 182 "/usr/local//include/pico/machine/_default_types.h"
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 200 "/usr/local//include/pico/machine/_default_types.h"
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/local//include/pico/machine/_default_types.h"
typedef long int __intmax_t;







typedef long unsigned int __uintmax_t;







typedef long int __intptr_t;

typedef long unsigned int __uintptr_t;
# 8 "/usr/local//include/pico/machine/_types.h" 2
# 28 "/usr/local//include/pico/sys/_types.h" 2


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/usr/local//include/pico/sys/_types.h"
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/usr/local//include/pico/sys/_types.h"
typedef long unsigned int __size_t;
# 147 "/usr/local//include/pico/sys/_types.h"
typedef long signed int _ssize_t;
# 158 "/usr/local//include/pico/sys/_types.h"
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef long __time_t;





typedef unsigned long __clockid_t;


typedef long __daddr_t;



typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 17 "/usr/local//include/pico/sys/reent.h" 2
# 26 "/usr/local//include/pico/sys/reent.h"
typedef unsigned int __ULong;
# 35 "/usr/local//include/pico/sys/reent.h"
# 1 "/usr/local//include/pico/sys/lock.h" 1





# 1 "/usr/local//include/pico/newlib.h" 1
# 7 "/usr/local//include/pico/sys/lock.h" 2




typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 36 "/usr/local//include/pico/sys/reent.h" 2
typedef _LOCK_RECURSIVE_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 99 "/usr/local//include/pico/sys/reent.h"
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 116 "/usr/local//include/pico/sys/reent.h"
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 153 "/usr/local//include/pico/sys/reent.h"
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 270 "/usr/local//include/pico/sys/reent.h"
typedef struct __sFILE __FILE;



extern __FILE __sf[3];

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

extern struct _glue __sglue;
# 306 "/usr/local//include/pico/sys/reent.h"
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 578 "/usr/local//include/pico/sys/reent.h"
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];




  struct __locale_t *_locale;





  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {



          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
# 647 "/usr/local//include/pico/sys/reent.h"
   char _getlocalename_l_buf[32 ];
        } _reent;







    } _new;







  void (**_sig_func)(int);
};
# 797 "/usr/local//include/pico/sys/reent.h"
extern struct _reent *_impure_ptr ;





extern struct _reent _impure_data ;
# 917 "/usr/local//include/pico/sys/reent.h"
extern struct _atexit *__atexit;
extern struct _atexit __atexit0;

extern void (*__stdio_exit_handler) (void);

void _reclaim_reent (struct _reent *);

extern int _fwalk_sglue (struct _reent *, int (*)(struct _reent *, __FILE *),
    struct _glue *);
# 19 "/usr/local/include/pico/stdlib.h" 2

# 1 "/usr/local//include/pico/machine/stdlib.h" 1
# 21 "/usr/local/include/pico/stdlib.h" 2

# 1 "/usr/local//include/pico/alloca.h" 1
# 23 "/usr/local/include/pico/stdlib.h" 2







# 1 "/usr/local//include/pico/sys/_locale.h" 1





# 1 "/usr/local//include/pico/newlib.h" 1
# 7 "/usr/local//include/pico/sys/_locale.h" 2


struct __locale_t;
typedef struct __locale_t *locale_t;
# 31 "/usr/local/include/pico/stdlib.h" 2




typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((__noreturn__));
int abs (int);

__uint32_t arc4random (void);
__uint32_t arc4random_uniform (__uint32_t);
void arc4random_buf (void *, size_t);

int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void *calloc(size_t, size_t) __malloc_like __result_use_check
      __alloc_size2(1, 2) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);

char * secure_getenv (const char *__string);

char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg;
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void *malloc(size_t) __malloc_like __result_use_check __alloc_size(1) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *__restrict, const char *__restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *__restrict, const char *__restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
size_t wcstombs (char *__restrict, const wchar_t *__restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *__restrict, const wchar_t *__restrict, size_t, _mbstate_t *);


char * mkdtemp (char *);


int mkostemp (char *, int);
int mkostemps (char *, int, int);


int mkstemp (char *);


int mkstemps (char *, int);


char * mktemp (char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));


char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void *realloc(void *, size_t) __result_use_check __alloc_size(2) ;

void *reallocarray(void *, size_t, size_t) __result_use_check __alloc_size2(2, 3);
void *reallocf(void *, size_t) __result_use_check __alloc_size(2);


char * realpath (const char *__restrict path, char *__restrict resolved_path);


int rpmatch (const char *response);


void setkey (const char *__key);

void srand (unsigned __seed);
double strtod (const char *__restrict __n, char **__restrict __end_PTR);
double _strtod_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR);

float strtof (const char *__restrict __n, char **__restrict __end_PTR);







long strtol (const char *__restrict __n, char **__restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long strtoul (const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);


double strtod_l (const char *__restrict, char **__restrict, locale_t);
float strtof_l (const char *__restrict, char **__restrict, locale_t);




long strtol_l (const char *__restrict, char **__restrict, int, locale_t);
unsigned long strtoul_l (const char *__restrict, char **__restrict, int,
    locale_t __loc);
long long strtoll_l (const char *__restrict, char **__restrict, int, locale_t);
unsigned long long strtoull_l (const char *__restrict, char **__restrict, int,
          locale_t __loc);


int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);


int on_exit (void (*__func)(int, void *),void *__arg);


void _Exit (int __status) __attribute__ ((__noreturn__));


int putenv (char *__string);

int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);

int setenv (const char *__string, const char *__value, int __overwrite);

int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 225 "/usr/local/include/pico/stdlib.h"
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);

char * itoa (int, char *, int);
char * utoa (unsigned, char *, int);



int rand_r (unsigned *__seed);



double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);


char * initstate (unsigned, char *, size_t);
long random (void);
char * setstate (char *);
void srandom (unsigned);


long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *__restrict __n, char **__restrict __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);

unsigned long long strtoull (const char *__restrict __n, char **__restrict __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);



void cfree (void *);


int unsetenv (const char *__string);

int _unsetenv_r (struct _reent *, const char *__string);



int posix_memalign (void **, size_t, size_t) _Nonnull((1))
     __result_use_check;


char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) ;
void * _calloc_r (struct _reent *, size_t, size_t) ;
void _free_r (struct _reent *, void *) ;
void * _realloc_r (struct _reent *, void *, size_t) ;
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);






void qsort_r (void *__base, size_t __nmemb, size_t __size, int (*_compar)(const void *, const void *, void *), void *__thunk);
# 334 "/usr/local/include/pico/stdlib.h"
void * aligned_alloc(size_t, size_t) __malloc_like __alloc_align(1)
     __alloc_size(2) __result_use_check;
int at_quick_exit(void (*)(void));
_Noreturn void
 quick_exit(int);
# 16 "/usr/local/include/comelang-pico.h" 2
# 1 "/usr/local//include/pico/string.h" 1
# 24 "/usr/local//include/pico/string.h"
# 1 "/usr/local//include/pico/strings.h" 1
# 40 "/usr/local//include/pico/strings.h"
typedef __size_t size_t;



using C {

int bcmp(const void *, const void *, size_t) __pure;
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);


void explicit_bzero(void *, size_t);


int ffs(int) __pure2;


int ffsl(long) __pure2;
int ffsll(long long) __pure2;
int fls(int) __pure2;
int flsl(long) __pure2;
int flsll(long long) __pure2;


char *index(const char *, int) __pure;
char *rindex(const char *, int) __pure;

int strcasecmp(const char *, const char *) __pure;
int strncasecmp(const char *, const char *, size_t) __pure;


int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);

}
# 25 "/usr/local//include/pico/string.h" 2




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *__restrict, const void *__restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *__restrict, const char *__restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *__restrict, const char *__restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *__restrict, const char *__restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *__restrict, const char *__restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *__restrict, const char *__restrict);

size_t strxfrm (char *__restrict, const char *__restrict, size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *__restrict, const char *__restrict, size_t, locale_t);


char *strtok_r (char *__restrict, const char *__restrict, char **__restrict);


int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


void * memccpy (void *__restrict, const void *__restrict, int, size_t);


void * mempcpy (void *, const void *, size_t);
void * memmem (const void *, size_t, const void *, size_t);
void * memrchr (const void *, int, size_t);
void * rawmemchr (const void *, int);


char *stpcpy (char *__restrict, const char *__restrict);
char *stpncpy (char *__restrict, const char *__restrict, size_t);


char *strcasestr (const char *, const char *);
char *strchrnul (const char *, int);


char *strdup (const char *) __malloc_like __result_use_check;

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t) __malloc_like __result_use_check;

char *_strndup_r (struct _reent *, const char *, size_t);






char *strerror_r (int, char *, size_t);
# 112 "/usr/local//include/pico/string.h"
char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __pure;



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);







int strverscmp (const char *, const char *);
# 172 "/usr/local//include/pico/string.h"
char *_Nonnull ((1)) basename (const char *) __asm__(__ASMNAME("__gnu_basename"));


# 1 "/usr/local//include/pico/sys/string.h" 1
# 176 "/usr/local//include/pico/string.h" 2
# 17 "/usr/local/include/comelang-pico.h" 2
# 1 "/usr/local//include/pico/stdio.h" 1
# 40 "/usr/local//include/pico/stdio.h"
# 1 "/Applications/ArmGNUToolchain/13.3.rel1/arm-none-eabi/bin//../lib/gcc/arm-none-eabi/13.3.1/include/stdarg.h" 1
# 40 "/Applications/ArmGNUToolchain/13.3.rel1/arm-none-eabi/bin//../lib/gcc/arm-none-eabi/13.3.1/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 41 "/usr/local//include/pico/stdio.h" 2





typedef __gnuc_va_list va_list;
# 66 "/usr/local//include/pico/stdio.h"
typedef __FILE FILE;



typedef _fpos_t fpos_t;





typedef __off_t off_t;




typedef _ssize_t ssize_t;



# 1 "/usr/local//include/pico/sys/stdio.h" 1
# 86 "/usr/local//include/pico/stdio.h" 2
# 187 "/usr/local//include/pico/stdio.h"
char * ctermid (char *);


char * cuserid (char *);

FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *) __malloc_like __result_use_check;

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *__restrict, const char *__restrict, FILE *__restrict);
void setbuf (FILE *__restrict, char *__restrict);
int setvbuf (FILE *__restrict, char *__restrict, int, size_t);
int fprintf (FILE *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf (const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *__restrict, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int sscanf (const char *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int vfprintf (FILE *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *__restrict, int, FILE *__restrict);
int fputc (int, FILE *);
int fputs (const char *__restrict, FILE *__restrict);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t fwrite (const void *__restrict , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *__restrict, fpos_t *__restrict);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *__restrict _name, const char *__restrict _type);
int sprintf (char *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);
# 263 "/usr/local//include/pico/stdio.h"
int fseeko (FILE *, off_t, int);
off_t ftello (FILE *);



int fcloseall (void);



int snprintf (char *__restrict, size_t, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *__restrict, size_t, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vfscanf (FILE *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf (const char *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));


int asprintf (char **__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int vasprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));


int asiprintf (char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
char * asniprintf (char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * asnprintf (char *__restrict, size_t *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));

int diprintf (int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

int fiprintf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fiscanf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int iprintf (const char *, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int iscanf (const char *, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int siprintf (char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int siscanf (const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int sniprintf (char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vasiprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vdiprintf (int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiprintf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiscanf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int viprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int viscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsiprintf (char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vsiscanf (const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vsniprintf (char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
# 345 "/usr/local//include/pico/stdio.h"
FILE * fdopen (int, const char *);

int fileno (FILE *);


int pclose (FILE *);
FILE * popen (const char *, const char *);



void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);



int getw (FILE *);
int putw (int, FILE *);


int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);
# 380 "/usr/local//include/pico/stdio.h"
int dprintf (int, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

FILE * fmemopen (void *__restrict, size_t, const char *__restrict);


FILE * open_memstream (char **, size_t *);
int vdprintf (int, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));



int renameat (int, const char *, int, const char *);
# 402 "/usr/local//include/pico/stdio.h"
int _asiprintf_r (struct _reent *, char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *__restrict, size_t *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *__restrict, int, FILE *__restrict);
char * _fgets_unlocked_r (struct _reent *, char *__restrict, int, FILE *__restrict);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
FILE * _fmemopen_r (struct _reent *, void *__restrict, size_t, const char *__restrict);
FILE * _fopen_r (struct _reent *, const char *__restrict, const char *__restrict);
FILE * _freopen_r (struct _reent *, const char *__restrict, const char *__restrict, FILE *__restrict);
int _fprintf_r (struct _reent *, FILE *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *__restrict, FILE *__restrict);
int _fputs_unlocked_r (struct _reent *, const char *__restrict, FILE *__restrict);
size_t _fread_r (struct _reent *, void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t _fread_unlocked_r (struct _reent *, void *__restrict, size_t _size, size_t _n, FILE *__restrict);
int _fscanf_r (struct _reent *, FILE *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t _fwrite_unlocked_r (struct _reent *, const void *__restrict, size_t _size, size_t _n, FILE *__restrict);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *,
      const char *_old, const char *_new);
int _scanf_r (struct _reent *, const char *__restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int _siprintf_r (struct _reent *, char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *__restrict, size_t, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *__restrict, const char *__restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vfprintf_r (struct _reent *, FILE *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vprintf_r (struct _reent *, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *__restrict, size_t, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *__restrict, const char *__restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t fwrite_unlocked (const void *__restrict , size_t _size, size_t _n, FILE *);



char * fgets_unlocked (char *__restrict, int, FILE *__restrict);
int fputs_unlocked (const char *__restrict, FILE *__restrict);
# 583 "/usr/local//include/pico/stdio.h"
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);
# 607 "/usr/local//include/pico/stdio.h"
FILE *funopen (const void *__cookie,
  int (*__readfn)(void *__cookie, char *__buf,
    int __n),
  int (*__writefn)(void *__cookie, const char *__buf,
     int __n),
  fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
  int (*__closefn)(void *__cookie));
FILE *_funopen_r (struct _reent *, const void *__cookie,
  int (*__readfn)(void *__cookie, char *__buf,
    int __n),
  int (*__writefn)(void *__cookie, const char *__buf,
     int __n),
  fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
  int (*__closefn)(void *__cookie));







typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
     size_t __n);




typedef int cookie_seek_function_t(void *__cookie, off_t *__off, int __whence);

typedef int cookie_close_function_t(void *__cookie);
typedef struct
{


  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
FILE *fopencookie (void *__cookie,
  const char *__mode, cookie_io_functions_t __functions);
FILE *_fopencookie_r (struct _reent *, void *__cookie,
  const char *__mode, cookie_io_functions_t __functions);
# 691 "/usr/local//include/pico/stdio.h"
static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {




 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
# 745 "/usr/local//include/pico/stdio.h"
static __inline int
_getchar_unlocked(void)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return ((--(((_ptr)->_stdin))->_r < 0 ? __srget_r(_ptr, ((_ptr)->_stdin)) : (int)(*(((_ptr)->_stdin))->_p++)));
}

static __inline int
_putchar_unlocked(int _c)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return (__sputc_r(_ptr, _c, ((_ptr)->_stdout)));
}
# 18 "/usr/local/include/comelang-pico.h" 2

}

typedef void* any;
typedef char*% string;
uniq void* gComeFunResultObject = ((void *)0);




struct buffer
{
    char*% buf;
    int len;
    int size;
};

buffer*% buffer*::initialize(buffer*% self);
buffer* buffer*::append_str(buffer* self, char* mem);
buffer* buffer*::append(buffer* self, char* mem, size_t size);
string xsprintf(char* msg, ...);
string char*::to_string(char* self);
string int::to_string(int self);
unsigned int int::get_hash_key(int value);
string char*::substring(char* str, int head, int tail);

struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};
impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values)
    {
        self.head = null;
        self.tail = null;
        self.len = 0;

        for(int i=0; i<num_value; i++) {
            self.push_back(values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }
    list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            result.add(clone it.item);

            it = it.next;
        }

        return result;
    }
    list<T>* add(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;

        return self;
    }
    void pop_front(list<T>* self) {
        if(self.len == 1) {
            list_item<T>* litem = self.head;
            self.head = null;
            self.tail = null;

            delete borrow litem;

            self.len--;
        }
        else if(self.len == 2) {
            list_item<T>* litem = self.head;

            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            self.tail = self.head;

            delete borrow litem;

            self.len--;
        }
        else if(self.len >= 3) {
            list_item<T>* litem = self.head;

            self.head = litem.next;
            self.head.prev = null;

            delete borrow litem;

            self.len--;
        }
    }
    list<T>* push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;

        return self;
    }

    string to_string(list<T>* self)
    {
        buffer*% result = new buffer();

        result.append_str("[");
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            result.append_str(it.item.to_string());
            it = it.next;

            i++;

            if(i != self.length()) {
                result.append_str(",");
            }
        }

        result.append_str("]");

        return result.to_string();
    }

    T& begin(list<T>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        if(self == null || self.it == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }

        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self == null || self.it == null;
    }
    list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*))
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }

        return self;
    }
    T& item(list<T>* self, int position, T default_value)
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return default_value;
    }

    int length(list<T>* self)
    {
        if(self == null) {
            return 0;
        }
        return self.len;
    }

    list<T>* insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        if(position == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;

            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;

            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow gc_inc(new list_item<T>);

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }

        return self;
    }
    list<T>* reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;

        return self;
    }
    list<T>* remove(list<T>* self, T item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;

            it = it.next;
        }

        return self;
    }
    list<T>* delete(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return self;
        }

        if(head == 0 && tail == self.len)
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail)
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }

        return self;
    }
    list<T>* replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }
        if(position < 0) {
            position = 0;
        }

        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }

        return self;
    }

    int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;

            it = it.next;
        }

        return default_value;
    }
    bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    T& operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);

        return item;
    }
    T&?? operator_load_element(list<T>* self, int position) {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        T` default_value;
        memset(&default_value, 0, sizeof(T));
        return default_value;
    }
    list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    bool operator_equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!(it.item === it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.operator_equals(right);
    }
    bool contained(list<T>* self, T& item) {
        for(var it = self.begin(); !self.end(); it = self.next())
        {
            if(it.equals(item)) {
                return true;
            }
        }

        return false;
    }
    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0)
                {
                    result.push_back(dupe it.item);

                    it = it.next;
                }
                else {
                    result.push_back(dupe it2.item);


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        result.push_back(dupe it2.item);

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        result.push_back(dupe it.item);

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                list1.push_back(dupe it.item);
                break;
            }
        }

        auto left_list = list1.merge_sort_with_lambda(compare);
        auto right_list = list2.merge_sort_with_lambda(compare);

        return left_list.merge_list_with_lambda(right_list, compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort_with_lambda(int lambda(T& left, T& right) { return left.compare(right); });
    }
    template<R> list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    template<R> list<R>*% map2(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>();

        list_item<T>* it = self.tail;
        while(it != null) {
            result.push_back(dupe it.item);
            it = it.prev;
        };

        return result;
    }
    list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T item_before = self.head.item;

            result.push_back(dupe item_before);

            list_item<T>* it = self.head;
            it = it.next;
            while(it != null) {
                if(!it.item.equals(item_before)) {
                    result.push_back(dupe it.item);
                }

                item_before = it.item;

                it = it.next;
            }
        }

        return result;
    }
    list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
    {
        list<T>*% result = new list<T>();

        list_item<T>* it = self.head;
        while(it != null) {
            if(block(parent, it.item)) {
                result.push_back(dupe it.item);
            }

            it = it.next;
        }

        return result;
    }

    list<T>*% operator_add(list<T>*% left, list<T>*% right) {
        list<T>*% result = new list<T>();

        list_item<T>* it = left.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        it = right.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        return result;
    }
    list<T>*% operator_mult(list<T>* left, int right) {
        list<T>*% result = new list<T>();

        for(int i=0; i<right; i++) {
            list_item<T>* it = left.head;
            while(it != null) {
                result.push_back(dupe it.item);

                it = it.next;
            }
        }

        return result;
    }
    string join(list<T>* self, char* sep=" ") {
        buffer*% buf = new buffer();

        int n = 0;
        for(var it = self.begin(); !self.end(); it = self.next()) {
            buf.append_str(it);

            if(n < self.length()-1) {
                buf.append_str(sep);
            }

            n++;
        }

        return buf.to_string();
    }
}



struct vector<T>
{
    T&* items;
    int len;
    int size;

    int it;
};

impl vector<T>
{
    vector<T>*% initialize(vector<T>*% self)
    {
        self.size = 16;
        self.len = 0;
        self.items = borrow new T[self.size];

        return self;
    }
    vector<T>*% initialize_with_values(vector<T>*% self, int num_value, T&* values)
    {
        self.size = num_value + 1;
        self.len = num_value;
        self.items = borrow new T[self.size];

        memcpy(self.items, values, sizeof(T)*self.len);

        return self;
    }

    vector<T>*% clone(vector<T>* self)
    {
        if(self == null) {
            return null;
        }
        vector<T>*% result = new vector<T>;

        result.len = self.len;
        result.size = self.size;
        result.it = 0;
        result.items = borrow new T[result.size];

        for(int i=0; i<self.len; i++)
        {
            result.items[i] = borrow dupe self.items[i];
        }

        return result;
    }

    void finalize(vector<T>* self)
    {
        if(isheap(T)) {
            for(int i=0; i<self.len; i++)
            {
                delete borrow self.items[i];
            }
        }
        if(self && self.items) {
            come_free((char*)self.items);
        }
    }

    vector<T>*% operator_add(vector<T>* left, vector<T>* right) {
        vector<T>*% result = new vector<T>.initialize();

        for(var o2_saved = (left), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            result.push_back(dupe it);
        }

        for(var o2_saved = (right), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            result.push_back(dupe it);
        }

        return result;
    }
    vector<T>*% operator_mult(vector<T>* left, int n) {
        vector<T>*% result = new vector<T>.initialize();

        for(int i=0; i<n; i++) {
            for(var o2_saved = (left), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
                result.push_back(dupe it);
            }
        }

        return result;
    }
    bool operator_equals(vector<T>* left, vector<T>* right) {
        if(left.len != right.len) {
            return false;
        }

        for(int i=0; i<left.len; i++) {
            if(!(left.items[i] === right.items[i]))
            {
                return false;
            }
        }

        return true;
        return left.equals(right);
    }
    bool operator_not_equals(vector<T>* left, vector<T>* right) {
        return !left.operator_equals(right);
    }
    void operator_store_element(vector<T>* self, int index, T item) {
        self.replace(index, item);
    }

    T&?? operator_load_element(vector<T>* self, int index) {
        T` default_value;
        memset(&default_value, 0, sizeof(T));

        return self.item(index, default_value)??;
    }

    vector<T>* push_back(vector<T>* self, T item) {
        if(self.len == self.size) {
            auto new_size = self.size * 2;
            auto items = self.items;

            self.items = new T[new_size];

            int i;
            for(i=0; i<self.size; i++) {
                self.items[i] = items[i];
            }

            self.size = new_size;

            come_free(items);
        }

        self.items[self.len] = item;
        self.len++;

        return self;
    }

    vector<T>* add(vector<T>* self, T item) {
        if(self.len == self.size) {
            auto new_size = self.size * 2;
            auto items = self.items;

            self.items = new T[new_size];

            int i;
            for(i=0; i<self.size; i++) {
                self.items[i] = items[i];
            }

            self.size = new_size;

            come_free(items);
        }

        self.items[self.len] = item;
        self.len++;

        return self;
    }

    T& item(vector<T>* self, int index, T default_value)
    {
        if(index < 0) {
            index += self.len;
        }

        if(index >= 0 && index < self.len)
        {
            return self.items[index];
        }

        return default_value;
    }


    bool equals(vector<T>* left, vector<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        for(int i=0; i<left.len; i++) {
            if(!(left.items[i].equals(right.items[i])))
            {
                return false;
            }
        }

        return true;
    }

    vector<T>* replace(vector<T>* self, int index, T value)
    {
        if(index < 0) {
            index += self.len;
        }
        if(index < 0) {
            index = 0;
        }

        if(self.len == 0 || index >= self.len) {
            int len = self.len;
            for(int i=0; i<index-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.add(default_value);
            }
            self.add(value);
            return self;
        }

        if(index >= 0 && index < self.len)
        {
            if(isheap(T)) {
                delete borrow self.items[index];
            }

            self.items[index] = value;
        }

        return self;
    }

    int find(vector<T>* self, T& item, int default_value) {
        int it2 = 0;
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            if(it.equals(item)) {
                return it2;
            }
            it2++;
        }

        return default_value;
    }

    int length(vector<T>* self)
    {
        return self.len;
    }

    vector<T>* reset(vector<T>* self) {
        if(isheap(T)) {
            for(int i=0; i<self.len; i++)
            {
                delete borrow self.items[i];
            }
        }
        come_free((char*)self.items);

        self.size = 16;
        self.len = 0;
        self.items = borrow new T[self.size];

        self.len = 0;

        return self;
    }

    T& begin(vector<T>* self) {
        self.it = 0;

        T` default_value;
        return self.item(0, default_value);
    }

    T& next(vector<T>* self) {
        self.it++;

        T` default_value
        return self.item(self.it, default_value);
    }

    bool end(vector<T>* self) {
        return self.it >= self.len;
    }

    vector<T>* delete_back(vector<T>* self) {
        if(self.len > 0) {
            if(isheap(T)) {
                delete borrow self.items[self.len-1];
                self.items[self.len-1] = null;
            }

            self.len--;
        }

        return self;
    }
    vector<T>*% quick_sort(vector<T>* self, int left, int right, int (*compare_)(T&, T&)) {
        int l_hold = left;
        int r_hold = right;

        T& pivot = self.items[left];
        int pivot_num = left;

        while(left < right) {
            while((compare_(self.items[right], pivot) >= 0) && (left < right)) {
                right--;
            }

            if(left != right) {
                self.items[left] = self.items[right];
                left++;
            }

            while((compare_(self.items[left], pivot) <= 0) && (left < right)) {
                left++;
            }

            if(left != right) {
                self.items[right] = self.items[left];
                right--;
            }
        }

        self.items[left] = pivot;

        pivot_num = left;

        int left2 = l_hold;
        int right2 = r_hold;

        if(left2 < pivot_num) {
            self.quick_sort(left2, pivot_num-1, compare_);
        }

        if(right2 > pivot_num) {
            self.quick_sort(pivot_num+1, right2, compare_);
        }

        return self;
    }

    vector<T>*% sort_with_lambda(vector<T>* self, int (*compare_)(T&, T&)) {
        return self.quick_sort(0, self.length()-1, compare_);
    }
    vector<T>*% sort(vector<T>* self) {
        return self.quick_sort(0, self.length()-1, int lambda(T& left, T& right) { return left.compare(right); });
    }
    string to_string(vector<T>* self)
    {
        buffer*% result = new buffer();

        result.append_str("v[");
        for(int i=0; i<self.len; i++) {
            result.append_str(self.items[i].to_string());

            if(i != self.length()-1) {
                result.append_str(",");
            }
        }

        result.append_str("]");

        return result.to_string();
    }

    list<T>*% to_list(vector<T>* self) {
        var result = new list<T>();

        for(int i=0; i<self.len; i++) {
            result.add(self.items[i]);
        }

        return result;
    }
}

impl list <T>
{
    vector<T>*% to_vector(list<T>* self) {
        var result = new vector<T>();

        list_item<T>* it = self.head;
        while(it != null) {
            result.add(clone it.item);
            it = it.next;
        }

        return result;
    }
}




struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;

    list<T&>*% key_list;

    int it;
};



impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
        self.len = 0;

        self.key_list = new list<T&>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values)
    {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
        self.len = 0;

        self.it = 0;

        self.key_list = new list<T&>();

        for(int i=0; i<num_keys; i++) {
            self.insert(keys\[i], values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);

        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }

        var result = new map<T,T2>();

        result.key_list = new list<T&>();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));

            var it2 = self.at(it, default_value);

            result.put(dupe it, dupe it2);
        }

        return result;
    }

    string to_string(map<T,T2>* self)
    {
        buffer*% result = new buffer();

        result.append_str("[");

        list_item<T&>* it = self.key_list.head;
        while(it) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it.item, default_value);

            result.append_str(it.item.to_string());
            result.append_str(":");
            result.append_str(it2.to_string());

            it = it.next;

            if(it != null) {
                result.append_str(",");
            }
        }

        result.append_str("]");

        return result.to_string();
    }

    T2& at(map<T, T2>* self, T& key, T2 default_value) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    map<T,T2>* remove(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    self.key_list.remove(self.keys\[it]);

                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    self.items\[it] = null;

                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }

        return self;
    }
    int length(map<T, T2>* self) {
        return self.len;
    }

    T& begin(map<T, T2>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        if(self == null || self.key_list.it == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self == null || self.key_list == null || self.key_list.it == null;
    }

    void rehash(map<T,T2>* self) {
        int size = self.size * 10;
        T&* keys = borrow gc_inc(new T[size]);
        T2&* items = borrow gc_inc(new T2[size]);
        bool* item_existance = borrow gc_inc(new bool[size]);

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it, default_value);
            unsigned int hash = it.get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys\[n] = it;
                    T2& default_value;
                    items\[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free((char*)self.items);
        delete borrow self.item_existance;
        come_free((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }

    map<T,T2>* insert(map<T,T2>* self, T key, T2 item) {
        if(self.len*10 >= self.size) {
            self.rehash();
        }
        unsigned int hash = key.get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    if(isheap(T)) {
                        self.key_list.remove(self.keys\[it]);
                        delete self.keys\[it];
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }

        return self;
    }
    map<T,T2>* put(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        unsigned int hash = key.get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    if(isheap(T)) {
                        delete self.keys\[it];
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }

        return self;
    }
    T2&?? operator_load_element(map<T, T2>* self, T& key) {
        T2` default_value;
        memset(&default_value, 0, sizeof(T2));

        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }

    T2 operator_store_element(map<T, T2>* self, T key, T2 item) {
        self.insert(key, item);

        return item;
    }

    bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T&` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);

            if(it.equals(it2)) {
                T2&` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);

                if(!item.equals(item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }

            n++;
        }

        return result;
    }

    bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T&` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);

            if(it === it2) {
                T2&` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);

                if(!(item === item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }

            n++;
        }

        return result;
    }

    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !(left.operator_equals(right);
    }

    bool find(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }
    map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) {
        map<T,T2>*% result = new map<T,T2>();

        int n = 0;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);

            result.insert(dupe it, dupe it2);
            n++;
        }

        n=0;
        for(var it = right.key_list.begin(); !right.key_list.end(); it = right.key_list.next())
        {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);

            result.insert(dupe it, dupe it2);
            n++;
        }

        return result;
    }
    map<T,T2>*% operator_mult(map<T,T2>* left, int right) {
        map<T,T2>*% result = new map<T,T2>();

        for(int i=0; i<right; i++ ) {
            int n = 0;
            for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
            {
                T2&` default_value;
                memset(&default_value, 0, sizeof(T2));

                T2& it2 = left.at(it, default_value);

                result.insert(dupe it, dupe it2);
                n++;
            }
        }

        return result;
    }
    list<T>*% keys(map<T, T2>* self) {
        var result = new list<T>();

        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            result.push_back(dupe it);
        }

        return result;
    }

    list<T2>*% values(map<T, T2>* self) {
        var result = new list<T2>();

        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));

            var it2 = self.at(it, default_value);

            result.push_back(dupe it2);
        }

        return result;
    }
}




struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;

        return self;
    }

    void catch(tuple1<T>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v1) {
            block(parent);
        }
    }
    bool equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }

        return true;
    }
    bool operator_equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.operator_equals(right);
    }

    string to_string(tuple1<T>* self)
    {
        return "(" + self.v1.to_string() + ")";
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;

        return self;
    }

    T catch(tuple2<T, T2>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v2) {
            block(parent);
        }

        return clone self.v1;
    }

    string to_string(tuple2<T, T2>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + ")";
    }
    bool equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }

        return true;
    }
    bool operator_equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return !left.operator_equals(right);
    }
}


struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;

        return self;
    }

    tuple2<T,T2>*% catch(tuple3<T, T2, T3>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v3) {
            block(parent);
        }

        return new tuple2<T, T2>.initialize(self.v1, self.v2);
    }

    string to_string(tuple3<T, T2, T3>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + ")";
    }
    bool equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }

        return true;
    }
    bool operator_equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;

        return self;
    }

    tuple3<T,T2,T3>*% catch(tuple4<T, T2, T3, T4>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v4) {
            block(parent);
        }

        return new tuple3<T, T2, T3>.initialize(self.v1, self.v2, self.v3);
    }

    string to_string(tuple4<T, T2, T3, T4>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + ")";
    }
    bool equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }

        return true;
    }
    bool operator_equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;

        return self;
    }

    tuple4<T,T2,T3,T4>*% catch(tuple5<T, T2, T3, T4, T5>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v5) {
            block(parent);
        }

        return new tuple4<T, T2, T3, T4>.initialize(self.v1, self.v2, self.v3, self.v4);
    }

    string to_string(tuple5<T, T2, T3, T4, T5>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + "," + self.v5.to_string() + ")";
    }
    bool equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        if(!self.v5.equals(right.v5)) {
            return false;
        }

        return true;
    }
    bool operator_equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }
        if(!(self.v5 === right.v5)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.operator_equals(right);
    }
}




uniq buffer*% char[]::to_buffer(char* self, size_t len)
{
    var result = new buffer();
    result.append(self, sizeof(char)*len);
    return result;
}

uniq buffer*% char*[]::to_buffer(char** self, size_t len)
{
    var result = new buffer();
    for(int i=0; i<len; i++) {
        result.append(self[i], strlen(self[i]));
    }
    return result;
}

uniq buffer*% short[]::to_buffer(short* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(short)*len);
    return result;
}

uniq buffer*% int[]::to_buffer(int* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(int)*len);
    return result;
}

uniq buffer*% long[]::to_buffer(long* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(long)*len);
    return result;
}

uniq buffer*% float[]::to_buffer(float* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(float)*len);
    return result;
}

uniq buffer*% double[]::to_buffer(double* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(double)*len);
    return result;
}

impl vector<T>
{
    buffer*% to_buffer(vector<T>* self) {
        var result = new buffer();
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}

impl list <T>
{
    buffer*% to_buffer(list<T>* self) {
        var result = new buffer();
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}




struct smart_pointer<T>
{
    buffer*% memory;
    T* p;
};

impl smart_pointer<T>
{
    smart_pointer<T>*% initialize(smart_pointer<T>*% self, void* memory, int size)
    {
        self.memory = new buffer();

        self.memory.append(memory, sizeof(T)*size);

        self.p = (T*)self.memory.buf;

        return self;
    }

    smart_pointer<T>*% initialize_with_value(smart_pointer<T>*% self, buffer*% value)
    {
        self.memory = value;

        self.p = (T*)value.buf;

        return self;
    }

    record smart_pointer<T>*% operator_add(smart_pointer<T>* self, int value)
    {
        var result = new smart_pointer<T>;

        result.memory = self.memory;
        int n = self.p - (T*)self.memory.buf;
        result.p = ((T*)result.memory.buf) + n + value;

        if((char*)result.p > result.memory.buf + result.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return result;
    }

    record smart_pointer<T>*% operator_sub(smart_pointer<T>* self, int value)
    {
        smart_pointer<T>*% result = new smart_pointer<T>;

        result.memory = self.memory;
        int n = self.p - (T*)self.memory.buf;
        result.p = ((T*)result.memory.buf) + n - value;

        if((char*)result.p < result.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return result;
    }

    record T operator_derefference(smart_pointer<T>* self)
    {
        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        T* p = self.p;
        return *p;
    }

    record smart_pointer<T>* operator_plus_plus(smart_pointer<T>* self)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n + 1;

        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    record smart_pointer<T>* operator_minus_minus(smart_pointer<T>* self)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n - 1;

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    record smart_pointer<T>* operator_plus_equal(smart_pointer<T>* self, int value)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n + value;

        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    record smart_pointer<T>* operator_minus_equal(smart_pointer<T>* self, int value)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n - value;

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        return self;
    }

    bool as_bool(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        bool p = *(bool*)self.p;
        return p;
    }

    char as_char(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        char p = *(char*)self.p;
        return p;
    }

    short as_short(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        short p = *(short*)self.p;
        return p;
    }

    int as_int(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        int p = *(int*)self.p;
        return p;
    }

    long as_long(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        long p = *(long*)self.p;
        return p;
    }

    float as_float(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        float p = *(float*)self.p;
        return p;
    }

    double as_double(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }

        double p = *(double*)self.p;
        return p;
    }

    string to_string(smart_pointer<T>* self)
    {
        return self.memory.to_string();
    }
}

uniq smart_pointer<char>*% buffer*::to_pointer(buffer* self)
{
    return new smart_pointer<char>.initialize_with_value(clone self);
}

uniq smart_pointer<char>*% buffer*::to_char_pointer(buffer* self)
{
    return new smart_pointer<char>.initialize_with_value(clone self);
}

uniq smart_pointer<short>*% buffer*::to_short_pointer(buffer* self)
{
    return new smart_pointer<short>.initialize_with_value(clone self);
}

uniq smart_pointer<int>*% buffer*::to_int_pointer(buffer* self)
{
    return new smart_pointer<int>.initialize_with_value(clone self);
}

uniq smart_pointer<long>*% buffer*::to_long_pointer(buffer* self)
{
    return new smart_pointer<long>.initialize_with_value(clone self);
}

impl vector<T>
{
    smart_pointer<T>*% to_pointer(vector<T>* self) {
        var buf = new buffer();
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            buf.append((char*)&it, sizeof(T));
        }
        return new smart_pointer<T>.initialize_with_value(buf);
    }
}

impl list <T>
{
    smart_pointer<T>*% to_pointer(list<T>* self) {
        var buf = new buffer();

        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            buf.append((char*)&it, sizeof(T));
        }

        return new smart_pointer<T>.initialize_with_value(buf);
    }

}






uniq char* gComeStackFrameSName[128];
uniq int gComeStackFrameSLine[128];
uniq int gComeStackFrameID[128];
uniq int gNumComeStackFrame = 0;


uniq char* gComeStackFrameBuffer = ((void *)0);

uniq void come_push_stackframe(char* sname, int sline, int id)
{
    if(gNumComeStackFrame < 128) {
        gComeStackFrameSName[gNumComeStackFrame] = sname;
        gComeStackFrameSLine[gNumComeStackFrame] = sline;
        gComeStackFrameID[gNumComeStackFrame] = id;

        gNumComeStackFrame++;
    }
}

uniq void come_pop_stackframe()
{
    if(gNumComeStackFrame > 0) {
        gNumComeStackFrame--;
    }
}

uniq void come_save_stackframe(char* sname, int sline)
{
    buffer*% buf = new buffer();
    buf.append_str(xsprintf("%s %d\n", sname, sline));
    for(int i=gNumComeStackFrame-2; i>=0; i--) {
        buf.append_str(xsprintf("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]));
    }

    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer = strdup(buf.to_string());
}

uniq void stackframe()
{
    for(int i=gNumComeStackFrame-1; i>=0; i--) {
        printf("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }
}
# 2773 "/usr/local/include/comelang-pico.h"
uniq void* come_null_check(void* mem, char* sname, int sline, int id)
{
    if(mem == null) {
        printf("%s %d #%d: null check error\n", sname, sline, id);
        stackframe();
        exit(2);
    }

    return mem;
}

uniq void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline)
{
    if(mem == null) {
        printf("%s %d: null check error\n", sname, sline);
        stackframe();
        exit(2);
    }

    if(mem < begin) {
        printf("%s %d: range check error\n", sname, sline);
        stackframe();
        exit(2);
    }

    if(mem >= end) {
        printf("%s %d: range check error\n", sname, sline);
        stackframe();
        exit(2);
    }

    return mem;
}

uniq bool bool::expect(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
        stackframe();
        exit(1);
    }

    return self;
}

uniq bool bool::value(bool self)
{
    return self;
}

uniq int int::catch(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
    }

    return self;
}

uniq int int::expect(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
        stackframe();
        exit(1);
    }

    return self;
}

uniq int int::value(int self)
{
    return self;
}

uniq int int::except(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
    }

    return self;
}

uniq bool bool::except(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }

    return self;
}

uniq bool bool::catch(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }

    return self;
}

uniq void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}




uniq any gComeResultObject = ((void *)0);


uniq bool gComeMallocLib = false;
uniq bool gComeDebugLib = false;
uniq bool gComeGCLib = false;

uniq int gNumAlloc = 0;
uniq int gNumFree = 0;



struct sMemHeaderTiny
{
    size_t size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;

};

struct sMemHeader
{
    size_t size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;

    char* sname[16];
    int sline[16];
    int id[16];
};

uniq sMemHeader* gAllocMem;





struct sHeapPage
{
    char** mPages;
    int mSizePages;

    char* mTop;
    int mCurrentPages;

    sMemHeaderTiny* mFreeMem[2048*2];
};

uniq struct sHeapPage gHeapPages;

uniq void come_heap_init(int come_malloc, int come_debug, int come_gc)
{
    gComeMallocLib = come_malloc;
    gComeDebugLib = come_debug
    gComeGCLib = come_gc;
# 2957 "/usr/local/include/comelang-pico.h"
    gComeStackFrameBuffer = ((void *)0);
    memset(gComeStackFrameSName, 0, sizeof(char*)*128);
    memset(gComeStackFrameSLine, 0, sizeof(int)*128);
    memset(gComeStackFrameID, 0, sizeof(int)*128);

    gHeapPages.mSizePages = 4;

    gHeapPages.mPages = calloc(1, sizeof(char**)*gHeapPages.mSizePages);
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        gHeapPages.mPages[i] = calloc(1, sizeof(char)*2048*2);
    }

    gHeapPages.mTop = gHeapPages.mPages[0];
    gHeapPages.mCurrentPages = 0;

    memset(gHeapPages.mFreeMem, 0, sizeof(sMemHeaderTiny*)*2048*2);

    gAllocMem = ((void *)0);
}

uniq void come_heap_final()
{
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }

    if(gComeGCLib) {



    }
    else if(gComeDebugLib) {
        sMemHeader* it = gAllocMem;
        int n = 0;
        while(it) {
            n++;

            bool flag = false;
            printf("#%d ", n);
            if(it->class_name) {
                printf("%p (%s): ", (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name);
            }
            for(int i=0; i<16; i++) {
                if(it->sname[i]) {
                    printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
                    flag = true;
                }
            }
            if(flag) {
                puts("");
            }
            it = it->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n", n, gNumAlloc, gNumFree);
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)gAllocMem;
        int n = 0;
        while(it) {
            n++;
            it = it->next;
        }
        if(n > 0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n", n, gNumAlloc, gNumFree);
        }
    }
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        free(gHeapPages.mPages[i]);
    }
    free(gHeapPages.mPages);
}

uniq void* alloc_from_pages(size_t size)
{
    void* result = null;
    if(size < 2048*2) {
        if(gHeapPages.mFreeMem[size]) {
            result = gHeapPages.mFreeMem[size];

            gHeapPages.mFreeMem[size] = gHeapPages.mFreeMem[size]->free_next;
            memset(result, 0, size);
        }

        if(result == null) {
            size_t free_area = gHeapPages.mPages[gHeapPages.mCurrentPages] + 2048*2 - gHeapPages.mTop;

            if(size >= free_area) {
                gHeapPages.mCurrentPages++;

                if(gHeapPages.mCurrentPages == gHeapPages.mSizePages) {
                    int new_size_pages = gHeapPages.mSizePages * 2;
                    void** new_pages = calloc(1, sizeof(char*)*new_size_pages);

                    int i=0;
                    for(; i<gHeapPages.mSizePages; i++) {
                        new_pages[i] = gHeapPages.mPages[i];
                    }

                    for(; i<new_size_pages; i++) {
                        new_pages[i] = calloc(1, sizeof(char)*2048*2);
                    }

                    free(gHeapPages.mPages);

                    gHeapPages.mPages = new_pages;
                    gHeapPages.mSizePages = new_size_pages;
                }

                gHeapPages.mTop = gHeapPages.mPages[gHeapPages.mCurrentPages];
            }

            result = gHeapPages.mTop;
            gHeapPages.mTop += size;
        }
    }
    else {
        result = calloc(1, size);
    }

    return result;
}

uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name=null)
{
    if(gComeDebugLib) {




        void* result = alloc_from_pages(size + sizeof(sMemHeader));


        sMemHeader* it = result;

        it->allocated = 177783;

        it->size = size + sizeof(sMemHeader);
        it->free_next = ((void *)0);

        come_push_stackframe(sname, sline, 0);


        if(gNumComeStackFrame < 16) {
            memcpy(it.sname, gComeStackFrameSName, sizeof(char*)*gNumComeStackFrame);
            memcpy(it.sline, gComeStackFrameSLine, sizeof(int)*gNumComeStackFrame);
            memcpy(it.id, gComeStackFrameID, sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it.sname, gComeStackFrameSName + gNumComeStackFrame - 16 -1, sizeof(char*)*16);
            memcpy(it.sline, gComeStackFrameSLine + gNumComeStackFrame - 16 -1, sizeof(int)*16);
            memcpy(it.id, gComeStackFrameID + gNumComeStackFrame - 16 -1, sizeof(int)*16);
        }

        come_pop_stackframe();

        it->next = gAllocMem;
        it->prev = null;

        if(class_name) {
            it->class_name = strdup(class_name);
        }
        else {
            it->class_name = null;
        }

        if(gAllocMem) {
            gAllocMem->prev = it;
        }

        gAllocMem = it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeader);
    }
    else {




        void* result = alloc_from_pages(size + sizeof(sMemHeaderTiny));


        sMemHeaderTiny* it = result;

        it->allocated = 177783;
# 3153 "/usr/local/include/comelang-pico.h"
        it->size = size + sizeof(sMemHeaderTiny);
        it->free_next = ((void *)0);

        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;

        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }

        gAllocMem = (sMemHeader*)it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeaderTiny);
    }
}

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeGCLib) {
        }
        else if(gComeDebugLib) {
            sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(sMemHeader));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;

            sMemHeader* prev_it = it->prev;
            sMemHeader* next_it = it->next;

            if(it->class_name) {
                free(it->class_name);
            }

            if(gAllocMem == it) {
                gAllocMem = next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            size_t size = it->size;

            if(size < 2048*2) {
                if(gHeapPages.mFreeMem[size] == ((void *)0)) {
                    it->free_next = ((void *)0);
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
                else {
                    it->free_next = (sMemHeader*)gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
            }
            else {
                free(it);
            }

            gNumFree++;
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;







            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;

            if(gAllocMem == it) {
                gAllocMem = (sMemHeader*)next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            size_t size = it->size;

            if(size < 2048*2) {
                if(gHeapPages.mFreeMem[size] == ((void *)0)) {
                    it->free_next = ((void *)0);
                    gHeapPages.mFreeMem[size] = it;
                }
                else {
                    it->free_next = gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = it;
                }
            }
            else {
                free(it);
            }

            gNumFree++;
        }
    }
}

uniq char* come_dynamic_typeof(void* mem)
{
    sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));

    if(it->allocated != 177783) {
        printf("invalid heap object(%p)\n", it);
        exit(2);
    }

    return it->class_name;
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name=null)
{

    char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline, class_name);

    size_t* ref_count = (size_t*)mem;

    *ref_count = 0;

    size_t* size2 = (size_t*)(mem + sizeof(size_t));

    *size2 = size*count + sizeof(size_t) + sizeof(size_t);

    return mem + sizeof(size_t) + sizeof(size_t);
}

uniq void come_free_object(void* mem)
{
    if(mem == ((void *)0)) {
        return;
    }
# 3322 "/usr/local/include/comelang-pico.h"
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void come_free(void* mem)
{
    if(mem == ((void *)0)) {
        return;
    }
# 3340 "/usr/local/include/comelang-pico.h"
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null)
{
    if(!block) {
        return null;
    }
# 3358 "/usr/local/include/comelang-pico.h"
    char* mem = (char*)block - sizeof(size_t) - sizeof(size_t);

    size_t* size_p = (size_t*)(mem + sizeof(size_t));

    size_t size = *size_p - sizeof(size_t) - sizeof(size_t);


    void* result = come_calloc(1, size, sname, sline, class_name);

    memcpy(result, block, size);

    return result;
}

uniq void* come_increment_ref_count(void* mem)
{
    if(mem == ((void *)0)) {
        return mem;
    }
# 3385 "/usr/local/include/comelang-pico.h"
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    (*ref_count)++;

    return mem;
}

uniq void* come_print_ref_count(void* mem)
{
    if(mem == ((void *)0)) {
        return mem;
    }
# 3405 "/usr/local/include/comelang-pico.h"
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    printf("ref_count %ld\n", *ref_count);

    return mem;
}

uniq void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_)
{
    if(mem == ((void *)0)) {
        return ((void *)0);
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    if(!no_decrement) {
        (*ref_count)--;
    }

    size_t count = *ref_count;
    if(!no_free && (count <= 0 || force_delete_)) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);

            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        return ((void *)0);
    }

    return mem;
}

uniq void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return mem;
        }
    }
    if(mem == ((void *)0)) {
        return ((void *)0);
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    if(!no_decrement) {
        (*ref_count)--;
    }

    size_t count = *ref_count;
    if(!no_free && (count <= 0 || force_delete_)) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);

            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        return ((void *)0);
    }

    return mem;
}

uniq void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_)
{
    if(mem == ((void *)0)) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

        if(!no_decrement) {
            (*ref_count)--;
        }

        size_t count = *ref_count;
        if(!no_free && (count <= 0 || force_delete_)) {
            if(mem) {
                if(protocol_obj && protocol_fun) {
                    void (*finalizer)(void*) = protocol_fun;
                    finalizer(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

uniq void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == ((void *)0)) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

        if(!no_decrement) {
            (*ref_count)--;
        }

        size_t count = *ref_count;
        if(!no_free && (count <= 0 || force_delete_)) {
            if(mem) {
                if(protocol_obj && protocol_fun) {
                    void (*finalizer)(void*) = protocol_fun;
                    finalizer(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

uniq void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == ((void *)0)) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

        if(!no_decrement) {
            (*ref_count)--;
        }

        size_t count = *ref_count;
        if(!no_free && (count <= 0 || force_delete_)) {
            if(mem) {
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

uniq string __builtin_string(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str) + 1;

    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

uniq bool come_is_contained_element(void** array, int len, void* element)
{
    bool found = false;
    for(int i=0; i<len; i++) {
        if(array[i] == element) {
            found = true;
            break;
        }
    }
    return found;
}




uniq string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string char::to_string(char self)
{
    return xsprintf("%c", self);
}

uniq string short::to_string(short self)
{
    return xsprintf("%d", self);
}

uniq string int::to_string(int self)
{
    return xsprintf("%d", self);
}

uniq string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

uniq string size_t::to_string(size_t self)
{
    return xsprintf("%ld", self);
}

uniq string float::to_string(float self)
{
    return xsprintf("%f", self);
}

uniq string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

uniq string string::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

uniq string char*::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}




uniq buffer*% buffer*::initialize(buffer*% self)
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

uniq void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

uniq buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }

    var result = new buffer;

    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);

    return result;
}

uniq int buffer*::length(buffer* self)
{
    if(self == null) {
        return 0;
    }
    return self.len;
}

uniq void buffer*::reset(buffer* self)
{
    if(self == null) {
        return;
    }
    self.buf[0] = '\0';
    self.len = 0;
}

uniq void buffer*::trim(buffer* self, int len)
{
    if(self == null) {
        return;
    }
    self.len -= len;
    self.buf[self.len] = '\0';
}

uniq buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self == null || mem == null) {
        return self;
    }
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_char(buffer* self, char c)
{
    if(self == null) {
        return null;
    }
    if(self.len + 1 + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;

        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }

    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_format(buffer* self, char* msg, ...)
{
    if(self == null || msg == null) {
        return self;
    }

    va_list args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);

    if(len < 0) {
        return self;
    }

    string mem = string(result);

    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    free(result);

    return self;
}

uniq buffer* buffer*::append_nullterminated_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    int size = strlen(mem) + 1;
    if(self.len + size + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    self.len++;

    return self;
}

uniq buffer* buffer*::append_int(buffer* self, int value)
{
    if(self == null) {
        return null;
    }
    int* mem = &value;
    int size = sizeof(int);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_long(buffer* self, long value)
{
    long* mem = &value;
    int size = sizeof(long);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_short(buffer* self, short value)
{
    if(self == null) {
        return null;
    }

    short* mem = &value;
    int size = sizeof(short);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::alignment(buffer* self)
{
    if(self == null) {
        return null;
    }

    int len = self.len;
    len = (len + 3) & ~3;

    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }

    self.len = len;

    return self;
}

uniq int buffer*::compare(buffer* left, buffer* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left.buf, right.buf);
}

uniq buffer*% string::to_buffer(char* self)
{
    var result = new buffer.initialize();

    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq buffer*% char*::to_buffer(char* self)
{
    var result = new buffer.initialize();

    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq string buffer*::to_string(buffer* self)
{
    if(self == null) {
        return string("");
    }

    return string(self.buf);
}





uniq bool bool::equals(bool self, bool right)
{
    return self == right;
}

uniq bool char::equals(char self, char right)
{
    return self == right;
}

uniq bool short::equals(short self, short right)
{
    return self == right;
}

uniq bool int::equals(int self, int right)
{
    return self == right;
}

uniq bool long::equals(long self, long right)
{
    return self == right;
}

uniq bool size_t::equals(size_t self, size_t right)
{
    return self == right;
}

uniq bool float::equals(float self, float right)
{
    return self == right;
}

uniq bool double::equals(double self, double right)
{
    return self == right;
}

uniq bool bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq bool char::operator_equals(char self, char right)
{
    return self == right;
}

uniq bool short::operator_equals(short self, short right)
{
    return self == right;
}

uniq bool int::operator_equals(int self, int right)
{
    return self == right;
}

uniq bool long::operator_equals(long self, long right)
{
    return self == right;
}

uniq bool bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool char::operator_not_equals(char self, char right)
{
    return !(self == right);
}

uniq bool short::operator_not_equals(short self, short right)
{
    return !(self == right);
}

uniq bool int::operator_not_equals(int self, int right)
{
    return !(self == right);
}

uniq bool long::operator_not_equals(long self, long right)
{
    return !(self == right);
}

uniq bool string::equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool char*::equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool void*::equals(void* self, void* right)
{
    return self == right;
}

uniq bool string::operator_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool char*::operator_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool void*::operator_equals(char* self, char* right)
{
    return self == right;
}

uniq bool void*::operator_not_equals(char* self, char* right)
{
    return !self.operator_equals(right);
}

uniq bool string::operator_not_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }

    return strcmp(self, right) != 0;
}

uniq bool char*::operator_not_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }

    return strcmp(self, right) != 0;
}


uniq string char*::operator_add(char* self, char* right)
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

uniq string string::operator_add(char* self, char* right)
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

uniq string char*::operator_mult(char* self, int right)
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();

    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }

    return buf.to_string();
}

uniq string string::operator_mult(char* self, int right)
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();

    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }

    return buf.to_string();
}




uniq unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int char::get_hash_key(char value)
{
    return value;
}

uniq unsigned int short::get_hash_key(short int value)
{
    return value;
}

uniq unsigned int int::get_hash_key(int value)
{
    return value;
}

uniq unsigned int long::get_hash_key(long value)
{
    return value;
}

uniq unsigned int size_t::get_hash_key(size_t value)
{
    return value;
}

uniq unsigned int float::get_hash_key(float value)
{
    return (unsigned int)value;
}

uniq unsigned int double::get_hash_key(double value)
{
    return (unsigned int)value;
}

uniq unsigned int string::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int char*::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}




uniq bool bool::clone(bool self)
{
    return self;
}

uniq char char::clone(char self)
{
    return self;
}

uniq short int short::clone(short self)
{
    return self;
}

uniq int int::clone(int self)
{
    return self;
}

uniq long int long::clone(long self)
{
    return self;
}

uniq size_t size_t::clone(size_t self)
{
    return self;
}

uniq double double::clone(double self)
{
    return self;
}

uniq float float::clone(float self)
{
    return self;
}

uniq string char*::clone(char* self)
{
    if(self == null) { return null; }
    return string(self);
}

uniq string string::clone(char* self)
{
    if(self == null) { return null; }

    return string(self);
}




uniq bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

uniq bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

uniq bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

uniq bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

uniq bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

uniq bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}




uniq int string::length(char* str)
{
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq int char*::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq string string::reverse(char* str)
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq string char*::reverse(char* str)
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}
uniq string string::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string string::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string xsprintf(char* msg, ...)
{
    if(msg == null) {
        return string("");
    }
    va_list args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);

    if(len < 0) {
        return string("");
    }

    string result2 = string(result);

    free(result);

    return result2;
}

uniq string char*::delete(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }

    if(head < 0) {
       head += len;
    }

    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }

    string sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sub_str.length()+1);

    return string(str);
}

uniq string string::delete(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }

    if(head < 0) {
       head += len;
    }

    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }

    string sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sub_str.length()+1);

    return string(str);
}

uniq list<string>*% char*::split_char(char* self, char c)
{
    if(self == null) {
        return new list<string>();
    }

    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

uniq list<string>*% string::split_char(char* self, char c)
{
    if(self == null) {
        return new list<string>();
    }

    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}




uniq string xbasename(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);

    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);
    }

    return string("");
}

uniq string xnoextname(char* path)
{
    if(path == null) {
        return string("");
    }
    string path2 = xbasename(path);

    char* p = path2 + strlen(path2);

    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }

    return string("");
}

uniq string xextname(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);

    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);
    }

    return string("");
}






uniq int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }

    return 0;
}

uniq int char::compare(char left, char right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int short::compare(short left, short right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int int::compare(int left, int right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int long::compare(long left, long right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int size_t::compare(size_t left, size_t right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int float::compare(float left, float right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int double::compare(double left, double right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int string::compare(char* left, char* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left,right);
}

uniq int char*::compare(char* left, char* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left,right);
}




uniq string FILE*::read(FILE* f)
{
    if(f == null) {
        return string("");
    }
    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[1024];

        int size = fread(buf2, 1, 1024, f);

        buf.append(buf2, size);

        if(size < 1024) {
            break;
        }
    }

    return buf.to_string();
}

uniq int FILE*::write(FILE* f, char* str)
{
    if(f == null || str == null) {
        return -1;
    }

    return fwrite(str, strlen(str), 1, f);
}

uniq int FILE*::fclose(FILE* f)
{
    if(f == null) {
        return -1;
    }

    int result = fclose(f);

    if(result < 0) {
        return result;
    }

    return result;
}

uniq FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    if(f == null || msg == null) {
        return f;
    }
    char msg2[1024*2*2*2];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024*2*2*2, msg, args);
    va_end(args);

    int result = fprintf(f, "%s", msg2);

    if(result < 0) {
        return f;
    }

    return f;
}

uniq int string::write(char* self, char* file_name, bool append=false)
{
    if(self == null || file_name == null) {
        return -1;
    }

    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }

    if(f == ((void *)0)) {
        return -1;
    }

    int result = fwrite(self, strlen(self), 1, f);

    if(result < 0) {
        return result;
    }

    int result2 = fclose(f)

    if(result2 < 0) {
        return result2;
    }

    return result;
}

uniq int char*::write(char* self, char* file_name, bool append=false)
{
    if(self == null || file_name == null) {
        return -1;
    }

    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }

    if(f == ((void *)0)) {
        return -1;
    }

    int result = fwrite(self, strlen(self), 1, f);

    if(result < 0) {
        return result;
    }

    int result2 = fclose(f)

    if(result2 < 0) {
        return result2;
    }

    return result;
}

uniq string string::read(char* file_name)
{
    if(file_name == null) {
        return string("");
    }

    FILE* f = fopen(file_name, "r");

    if(f == ((void *)0)) {
        return string("");
    }

    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[1024];

        int size = fread(buf2, 1, 1024, f);

        buf.append(buf2, size);

        if(size < 1024) {
            break;
        }
    }

    string result = buf.to_string();

    int result2 = fclose(f)

    if(result2 < 0) {
        return string("");
    }

    return result;
}

uniq string char*::read(char* file_name)
{
    if(file_name == null) {
        return string("");
    }

    FILE* f = fopen(file_name, "r");

    if(f == ((void *)0)) {
        return string("");
    }

    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[1024];

        int size = fread(buf2, 1, 1024, f);

        buf.append(buf2, size);

        if(size < 1024) {
            break;
        }
    }

    string result = buf.to_string();

    int result2 = fclose(f)

    if(result2 < 0) {
        return string("");
    }

    return result;
}

uniq list<string>*% FILE*::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();

    if(f == null) {
        return result;
    }

    while(1) {
        char buf[1024];

        if(fgets(buf, 1024, f) == ((void *)0)) {
            break;
        }

        result.push_back(string(buf));
    }

    return result;
}

uniq int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f))
{
    if(path == null || mode == null) {
        return -1;
    }
    FILE* f = fopen(path, mode);

    if(f) {
        block(parent, f);

        fclose(f);

        return 0;
    }

    return -1;
}




uniq string char*::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);

    return string(self);
}

uniq string char*::print(char* self)
{
    if(self == null) {
        return string("");
    }
    printf("%s", self);

    return string(self);
}


uniq string string::printf(char* self, ...)
{
    if(self == null) {
        return string("");
    }
    char* msg2;

    va_list args;
    va_start(args, self);
    vasprintf(&msg2,self,args);
    va_end(args);

    printf("%s", msg2);

    free(msg2);

    return string(self);
}

uniq string char*::printf(char* self, ...)
{
    if(self == null) {
        return string("");
    }
    char* msg2;

    va_list args;
    va_start(args, self);
    vasprintf(&msg2,self,args);
    va_end(args);

    printf("%s", msg2);

    free(msg2);

    return string(self);
}

uniq int int::printf(int self, char* msg)
{
    printf(msg, self);

    return self;
}

uniq string string::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);

    return string(self);
}




uniq void int::times(int self, void* parent, void (*block)(void* parent, int it))
{
    for(int i = 0; i < self; i++) {
        block(parent, i);
    }
}



uniq record int assert(int exp) version 2
{
    if(exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}





struct integer
{
    long value;
};

struct floating
{
    double value;
};

uniq integer*% integer*::initialize(integer*% self, long value)
{
    self.value = value;

    return self;
}

uniq int integer*::to_int(integer* self)
{
    return self.value;
}

uniq integer*% bool::to_integer(long self)
{
    return new integer(self);
}

uniq integer*% char::to_integer(long self)
{
    return new integer(self);
}

uniq integer*% short::to_integer(long self)
{
    return new integer(self);
}

uniq integer*% int::to_integer(long self)
{
    return new integer(self);
}

uniq integer*% long::to_integer(long self)
{
    return new integer(self);
}

uniq int integer::compare(integer* left, integer* right)
{
    if(left.value < right.value) {
        return -1;
    }
    else if(left.value > right.value) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq bool integer::equals(integer* self, integer* right)
{
    return self.value == right.value;
}

uniq bool integer::operator_equals(integer* self, integer* right)
{
    return self.value == right.value;
}

uniq bool integer::operator_not_equals(integer* self, integer* right)
{
    return !self.operator_equals(right);
}

uniq int integer::operator_add(integer* left, integer* right)
{
    return left.value + right.value;
}

uniq int integer::operator_sub(integer* left, integer* right)
{
    return left.value - right.value;
}

uniq int integer::operator_mult(integer* left, integer* right)
{
    return left.value * right.value;
}

uniq int integer::operator_div(integer* left, integer* right)
{
    return left.value / right.value;
}

uniq int integer::operator_mod(integer* left, integer* right)
{
    return left.value % right.value;
}

uniq int integer::operator_lshift(integer* left, integer* right)
{
    return left.value << right.value;
}

uniq int integer::operator_rshift(integer* left, integer* right)
{
    return left.value >> right.value;
}

uniq int integer::operator_gteq(integer* left, integer* right)
{
    return left.value >= right.value;
}

uniq int integer::operator_lteq(integer* left, integer* right)
{
    return left.value <= right.value;
}

uniq int integer::operator_lt(integer* left, integer* right)
{
    return left.value < right.value;
}

uniq int integer::operator_gt(integer* left, integer* right)
{
    return left.value > right.value;
}

uniq int integer::operator_and(integer* left, integer* right)
{
    return left.value & right.value;
}

uniq int integer::operator_xor(integer* left, integer* right)
{
    return left.value ^ right.value;
}

uniq int integer::operator_or(integer* left, integer* right)
{
    return left.value | right.value;
}

uniq string integer::to_string(integer* self)
{
    return self.value.to_string();
}




uniq floating*% floating*::initialize(floating*% self, double value)
{
    self.value = value;

    return self;
}

uniq double floating*::to_double(floating* self)
{
    return self.value;
}


uniq int floating::compare(floating* left, floating* right)
{
    if(left.value < right.value) {
        return -1;
    }
    else if(left.value > right.value) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}
uniq floating*% float::to_floating(float self)
{
    return new floating(self);
}

uniq floating*% double::to_floating(double self)
{
    return new floating(self);
}

uniq bool floating::equals(floating* self, floating* right)
{
    return self.value == right.value;
}

uniq bool floating::operator_equals(floating* self, floating* right)
{
    return self.value == right.value;
}

uniq bool floating::operator_not_equals(floating* self, floating* right)
{
    return !self.operator_equals(right);
}

uniq int floating::operator_add(floating* left, floating* right)
{
    return left.value + right.value;
}

uniq int floating::operator_sub(floating* left, floating* right)
{
    return left.value - right.value;
}

uniq int floating::operator_mult(floating* left, floating* right)
{
    return left.value * right.value;
}

uniq int floating::operator_div(floating* left, floating* right)
{
    return left.value / right.value;
}

uniq int floating::operator_gteq(floating* left, floating* right)
{
    return left.value >= right.value;
}

uniq int floating::operator_lteq(floating* left, floating* right)
{
    return left.value <= right.value;
}

uniq int floating::operator_lt(floating* left, floating* right)
{
    return left.value < right.value;
}

uniq int floating::operator_gt(floating* left, floating* right)
{
    return left.value > right.value;
}

uniq string floating::to_string(floating* self)
{
    return self.value.to_string();
}


record uniq bool die(char* msg)
{
    perror(msg);
    stackframe();
    exit(4);

    return false;
}
# 5718 "/usr/local/include/comelang-pico.h"
uniq smart_pointer<char>*% char[]::to_pointer(char* self, size_t len)
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(char)*len);
    return new smart_pointer<char>.initialize_with_value(buf);
}

uniq smart_pointer<char*>*% char*[]::to_pointer(char** self, size_t len)
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(char*)*len);
    return new smart_pointer<char*>.initialize_with_value(buf);
}

uniq smart_pointer<short>*% short[]::to_pointer(short* self, size_t len)
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(short)*len);
    return new smart_pointer<short>.initialize_with_value(buf);
}

uniq smart_pointer<int>*% int[]::to_pointer(int* self, size_t len)
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(int)*len);
    return new smart_pointer<int>.initialize_with_value(buf);
}

uniq smart_pointer<long>*% long[]::to_pointer(long* self, size_t len)
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(long)*len);
    return new smart_pointer<long>.initialize_with_value(buf);
}

uniq smart_pointer<float>*% float[]::to_pointer(float* self, size_t len)
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(float)*len);
    return new smart_pointer<float>.initialize_with_value(buf);
}

uniq smart_pointer<double>*% double[]::to_pointer(double* self, size_t len)
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(double)*len);
    return new smart_pointer<double>.initialize_with_value(buf);
}

uniq list<char>*% char[]::to_list(char* self, size_t len)
{
    return new list<char>.initialize_with_values(len, self);
}

uniq list<char*>*% char*[]::to_list(char** self, size_t len)
{
    return new list<char*>.initialize_with_values(len, self);
}

uniq list<short>*% short[]::to_list(short* self, size_t len)
{
    return new list<short>.initialize_with_values(len, self);
}

uniq list<int>*% int[]::to_list(int* self, size_t len)
{
    return new list<int>.initialize_with_values(len, self);
}

uniq list<long>*% long[]::to_list(long* self, size_t len)
{
    return new list<long>.initialize_with_values(len, self);
}

uniq list<float>*% float[]::to_list(float* self, size_t len)
{
    return new list<float>.initialize_with_values(len, self);
}

uniq list<double>*% double[]::to_list(double* self, size_t len)
{
    return new list<double>.initialize_with_values(len, self);
}

uniq vector<char>*% char[]::to_vector(char* self, size_t len)
{
    return new vector<char>.initialize_with_values(len, self);
}

uniq vector<char*>*% char*[]::to_vector(char** self, size_t len)
{
    return new vector<char*>.initialize_with_values(len, self);
}

uniq vector<short>*% short[]::to_vector(short* self, size_t len)
{
    return new vector<short>.initialize_with_values(len, self);
}

uniq vector<int>*% int[]::to_vector(int* self, size_t len)
{
    return new vector<int>.initialize_with_values(len, self);
}

uniq vector<long>*% long[]::to_vector(long* self, size_t len)
{
    return new vector<long>.initialize_with_values(len, self);
}

uniq vector<float>*% float[]::to_vector(float* self, size_t len)
{
    return new vector<float>.initialize_with_values(len, self);
}

uniq vector<double>*% double[]::to_vector(double* self, size_t len)
{
    return new vector<double>.initialize_with_values(len, self);
}




uniq size_t char[]::length(char* self, size_t len)
{
    return len;
}

uniq bool char*[]::contained(char** self, size_t len, char* str)
{
    bool result = false;
    for(int i=0; i<len; i++) {
        if(strncmp(self[i], str, strlen(self[i])) == 0) {
            result = true;
            break;
        }
    }
    return result;
}

uniq size_t short[]::length(short* self, size_t len)
{
    return len;
}

uniq size_t int[]::length(int* self, size_t len)
{
    return len;
}

uniq size_t long[]::length(long* self, size_t len)
{
    return len;
}

uniq size_t float[]::length(float* self, size_t len)
{
    return len;
}

uniq size_t double[]::length(double* self, size_t len)
{
    return len;
}

uniq string string::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

uniq string char*::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

uniq string int::xsprintf(int self, char* msg, ...)
{
    return xsprintf(msg, self);
}
# 2 "led.c" 2

int fun()
{
    return 3;
}

int main() {

    const uint LED_PIN = 25;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    var li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    for(var o2_saved = (li), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
        for(int i=0; i<5; i++) {
            gpio_put(LED_PIN, 1);
            sleep_ms(50*it);
            gpio_put(LED_PIN, 0);
            sleep_ms(50*it);
        }
    }

    while(true) {
        gpio_put(LED_PIN, 0);
    }

    return 0;
}
