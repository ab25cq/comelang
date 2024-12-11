/// previous struct definition ///
struct _reent;

struct __locale_t;

/// struct definition ///
typedef int wint_t;

typedef long ptrdiff_t;

typedef unsigned short int wchar_t;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long int __int64_t;

typedef unsigned long long int __uint64_t;

typedef char __int_least8_t;

typedef unsigned char __uint_least8_t;

typedef short __int_least16_t;

typedef unsigned short int __uint_least16_t;

typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;

typedef long long int __int_least64_t;

typedef unsigned long long int __uint_least64_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef long  int __intptr_t;

typedef unsigned long  int __uintptr_t;

typedef long __blkcnt_t;

typedef long __blksize_t;

typedef unsigned long long int __fsblkcnt_t;

typedef unsigned int __fsfilcnt_t;

typedef long _off_t;

typedef int __pid_t;

typedef short __dev_t;

typedef unsigned short int __uid_t;

typedef unsigned short int __gid_t;

typedef unsigned int __id_t;

typedef unsigned short int __ino_t;

typedef unsigned int __mode_t;

typedef long  long _off64_t;

typedef long __off_t;

typedef long  long __loff_t;

typedef long __key_t;

typedef long _fpos_t;

typedef unsigned long  int __size_t;

typedef long  int _ssize_t;

typedef long  int __ssize_t;

union anonymous_typeZ2
{
int __wch;
unsigned char __wchb[4];
};

union anonymous_typeZ3
{
int __wch;
unsigned char __wchb[4];
};

struct anonymous_typeX1
{
    int __count;
    union anonymous_typeZ3 __value;
};

typedef struct anonymous_typeX1 _mbstate_t;

typedef void* _iconv_t;

typedef unsigned long  int __clock_t;

typedef long __time_t;

typedef unsigned long  int __clockid_t;

typedef long __daddr_t;

typedef unsigned long  int __timer_t;

typedef unsigned char __sa_family_t;

typedef unsigned int __socklen_t;

typedef int __nl_item;

typedef unsigned short int __nlink_t;

typedef long __suseconds_t;

typedef unsigned long  int __useconds_t;

typedef __builtin_va_list __va_list;

typedef unsigned int __ULong;

typedef int _LOCK_T;

typedef int _LOCK_RECURSIVE_T;

typedef int _flock_t;

struct _Bigint
{
    struct _Bigint* _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
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

struct _on_exit_args
{
    void* _fnargs[32];
    void* _dso_handle[32];
    unsigned int _fntypes;
    unsigned int _is_cxa;
};

struct _atexit
{
    struct _atexit* _next;
    int _ind;
    void (*_fns[32])();
    struct _on_exit_args _on_exit_args;
};

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
    int (*_read)(struct _reent*,void*,char*,int);
    int (*_write)(struct _reent*,void*,const char*,int);
    long (*_seek)(struct _reent*,void*,long,int);
    int (*_close)(struct _reent*,void*);
    struct __sbuf _ub;
    unsigned char* _up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long _offset;
    struct _reent* _data;
    int _lock;
    struct anonymous_typeX1 _mbstate;
    int _flags2;
};

typedef struct __sFILE __FILE;

extern struct __sFILE __sf[3];
struct _glue
{
    struct _glue* _next;
    int _niobs;
    struct __sFILE* _iobs;
};

extern struct _glue __sglue;
struct _rand48
{
    unsigned short int _seed[3];
    unsigned short int _mult[3];
    unsigned short int _add;
};

struct anonymous_typeX5
{
    char* _strtok_last;
    char _asctime_buf[26];
    struct __tm _localtime_buf;
    int _gamma_signgam;
    unsigned long  long _rand_next;
    struct _rand48 _r48;
    struct anonymous_typeX1 _mblen_state;
    struct anonymous_typeX1 _mbtowc_state;
    struct anonymous_typeX1 _wctomb_state;
    char _l64a_buf[8];
    char _signal_buf[24];
    int _getdate_err;
    struct anonymous_typeX1 _mbrlen_state;
    struct anonymous_typeX1 _mbrtowc_state;
    struct anonymous_typeX1 _mbsrtowcs_state;
    struct anonymous_typeX1 _wcrtomb_state;
    struct anonymous_typeX1 _wcsrtombs_state;
    int _h_errno;
    char _getlocalename_l_buf[32];
};

union anonymous_typeZ4
{
struct anonymous_typeX5 _reent;
};

struct anonymous_typeX7
{
    char* _strtok_last;
    char _asctime_buf[26];
    struct __tm _localtime_buf;
    int _gamma_signgam;
    unsigned long  long _rand_next;
    struct _rand48 _r48;
    struct anonymous_typeX1 _mblen_state;
    struct anonymous_typeX1 _mbtowc_state;
    struct anonymous_typeX1 _wctomb_state;
    char _l64a_buf[8];
    char _signal_buf[24];
    int _getdate_err;
    struct anonymous_typeX1 _mbrlen_state;
    struct anonymous_typeX1 _mbrtowc_state;
    struct anonymous_typeX1 _mbsrtowcs_state;
    struct anonymous_typeX1 _wcrtomb_state;
    struct anonymous_typeX1 _wcsrtombs_state;
    int _h_errno;
    char _getlocalename_l_buf[32];
};

union anonymous_typeZ6
{
struct anonymous_typeX7 _reent;
};

struct _reent
{
    int _errno;
    struct __sFILE* _stdin;
    struct __sFILE* _stdout;
    struct __sFILE* _stderr;
    int _inc;
    char _emergency[25];
    struct __locale_t* _locale;
    void (*__cleanup)(struct _reent*);
    struct _Bigint* _result;
    int _result_k;
    struct _Bigint* _p5s;
    struct _Bigint** _freelist;
    int _cvtlen;
    char* _cvtbuf;
    union anonymous_typeZ6 _new;
    void (**_sig_func)(int);
};

extern struct _reent* _impure_ptr;
extern struct _reent _impure_data;
extern struct _atexit* __atexit;
extern struct _atexit __atexit0;
extern void (*__stdio_exit_handler)();
typedef struct __locale_t* locale_t;

struct anonymous_typeX8
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX8 div_t;

struct anonymous_typeX9
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX9 ldiv_t;

struct anonymous_typeX10
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX10 lldiv_t;

typedef int (*__compar_fn_t)(const void*,const void*);

extern char* suboptarg;
typedef unsigned long  int size_t;

typedef char int8_t;

typedef unsigned char uint8_t;

typedef short int16_t;

typedef unsigned short int uint16_t;

typedef int int32_t;

typedef unsigned int uint32_t;

typedef long long int int64_t;

typedef unsigned long long int uint64_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef char int_least8_t;

typedef unsigned char uint_least8_t;

typedef short int_least16_t;

typedef unsigned short int uint_least16_t;

typedef int int_least32_t;

typedef unsigned int uint_least32_t;

typedef long long int int_least64_t;

typedef unsigned long long int uint_least64_t;

typedef char int_fast8_t;

typedef unsigned char uint_fast8_t;

typedef short int_fast16_t;

typedef unsigned short int uint_fast16_t;

typedef int int_fast32_t;

typedef unsigned int uint_fast32_t;

typedef long long int int_fast64_t;

typedef unsigned long long int uint_fast64_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef struct __sFILE FILE;

typedef long fpos_t;

typedef long off_t;

typedef long  int ssize_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long*,int);

typedef int (*cookie_close_function_t)(void*);

struct anonymous_typeX11
{
    long  int (*read)(void*,char*,unsigned long  int);
    long  int (*write)(void*,const char*,unsigned long  int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};

typedef struct anonymous_typeX11 cookie_io_functions_t;

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
void _reclaim_reent(struct _reent* anonymous_var_nameX33);
int _fwalk_sglue(struct _reent* anonymous_var_nameX34, int (*anonymous_lambda_var_nameZ1)(struct _reent*,struct __sFILE*), struct _glue* anonymous_var_nameX37);
int __locale_mb_cur_max();
void abort();
int abs(int anonymous_var_nameX40);
unsigned int arc4random();
unsigned int arc4random_uniform(unsigned int anonymous_var_nameX41);
void arc4random_buf(void* anonymous_var_nameX42, unsigned long  int anonymous_var_nameX43);
int atexit(void (*__func)());
double atof(const char* __nptr);
float atoff(const char* __nptr);
int atoi(const char* __nptr);
int _atoi_r(struct _reent* anonymous_var_nameX44, const char* __nptr);
long atol(const char* __nptr);
long _atol_r(struct _reent* anonymous_var_nameX45, const char* __nptr);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*_compar)(const void*,const void*));
void* calloc(unsigned long  int anonymous_var_nameX46, unsigned long  int anonymous_var_nameX47);
struct anonymous_typeX8 div(int __numer, int __denom);
void exit(int __status);
void free(void* anonymous_var_nameX48);
char* getenv(const char* __string);
char* _getenv_r(struct _reent* anonymous_var_nameX49, const char* __string);
char* secure_getenv(const char* __string);
char* _findenv(const char* anonymous_var_nameX50, int* anonymous_var_nameX51);
char* _findenv_r(struct _reent* anonymous_var_nameX52, const char* anonymous_var_nameX53, int* anonymous_var_nameX54);
int getsubopt(char** anonymous_var_nameX55, char** anonymous_var_nameX56, char** anonymous_var_nameX57);
long labs(long anonymous_var_nameX58);
struct anonymous_typeX9 ldiv(long __numer, long __denom);
void* malloc(unsigned long  int anonymous_var_nameX59);
int mblen(const char* anonymous_var_nameX60, unsigned long  int anonymous_var_nameX61);
int _mblen_r(struct _reent* anonymous_var_nameX62, const char* anonymous_var_nameX63, unsigned long  int anonymous_var_nameX64, struct anonymous_typeX1* anonymous_var_nameX65);
int mbtowc(unsigned short int* anonymous_var_nameX66, const char* anonymous_var_nameX67, unsigned long  int anonymous_var_nameX68);
int _mbtowc_r(struct _reent* anonymous_var_nameX69, unsigned short int* anonymous_var_nameX70, const char* anonymous_var_nameX71, unsigned long  int anonymous_var_nameX72, struct anonymous_typeX1* anonymous_var_nameX73);
int wctomb(char* anonymous_var_nameX74, unsigned short int anonymous_var_nameX75);
int _wctomb_r(struct _reent* anonymous_var_nameX76, char* anonymous_var_nameX77, unsigned short int anonymous_var_nameX78, struct anonymous_typeX1* anonymous_var_nameX79);
unsigned long  int mbstowcs(unsigned short int* anonymous_var_nameX80, const char* anonymous_var_nameX81, unsigned long  int anonymous_var_nameX82);
unsigned long  int _mbstowcs_r(struct _reent* anonymous_var_nameX83, unsigned short int* anonymous_var_nameX84, const char* anonymous_var_nameX85, unsigned long  int anonymous_var_nameX86, struct anonymous_typeX1* anonymous_var_nameX87);
unsigned long  int wcstombs(char* anonymous_var_nameX88, const unsigned short int* anonymous_var_nameX89, unsigned long  int anonymous_var_nameX90);
unsigned long  int _wcstombs_r(struct _reent* anonymous_var_nameX91, char* anonymous_var_nameX92, const unsigned short int* anonymous_var_nameX93, unsigned long  int anonymous_var_nameX94, struct anonymous_typeX1* anonymous_var_nameX95);
char* mkdtemp(char* anonymous_var_nameX96);
int mkostemp(char* anonymous_var_nameX97, int anonymous_var_nameX98);
int mkostemps(char* anonymous_var_nameX99, int anonymous_var_nameX100, int anonymous_var_nameX101);
int mkstemp(char* anonymous_var_nameX102);
int mkstemps(char* anonymous_var_nameX103, int anonymous_var_nameX104);
char* mktemp(char* anonymous_var_nameX105);
char* _mkdtemp_r(struct _reent* anonymous_var_nameX106, char* anonymous_var_nameX107);
int _mkostemp_r(struct _reent* anonymous_var_nameX108, char* anonymous_var_nameX109, int anonymous_var_nameX110);
int _mkostemps_r(struct _reent* anonymous_var_nameX111, char* anonymous_var_nameX112, int anonymous_var_nameX113, int anonymous_var_nameX114);
int _mkstemp_r(struct _reent* anonymous_var_nameX115, char* anonymous_var_nameX116);
int _mkstemps_r(struct _reent* anonymous_var_nameX117, char* anonymous_var_nameX118, int anonymous_var_nameX119);
char* _mktemp_r(struct _reent* anonymous_var_nameX120, char* anonymous_var_nameX121);
void qsort(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*_compar)(const void*,const void*));
int rand();
void* realloc(void* anonymous_var_nameX122, unsigned long  int anonymous_var_nameX123);
void* reallocarray(void* anonymous_var_nameX124, unsigned long  int anonymous_var_nameX125, unsigned long  int anonymous_var_nameX126);
void* reallocf(void* anonymous_var_nameX127, unsigned long  int anonymous_var_nameX128);
char* realpath(const char* path, char* resolved_path);
int rpmatch(const char* response);
void setkey(const char* __key);
void srand(unsigned int __seed);
double strtod(const char* __n, char** __end_PTR);
double _strtod_r(struct _reent* anonymous_var_nameX129, const char* __n, char** __end_PTR);
float strtof(const char* __n, char** __end_PTR);
long strtol(const char* __n, char** __end_PTR, int __base);
long _strtol_r(struct _reent* anonymous_var_nameX130, const char* __n, char** __end_PTR, int __base);
unsigned long  int strtoul(const char* __n, char** __end_PTR, int __base);
unsigned long  int _strtoul_r(struct _reent* anonymous_var_nameX131, const char* __n, char** __end_PTR, int __base);
double strtod_l(const char* anonymous_var_nameX132, char** anonymous_var_nameX133, struct __locale_t* anonymous_var_nameX134);
float strtof_l(const char* anonymous_var_nameX135, char** anonymous_var_nameX136, struct __locale_t* anonymous_var_nameX137);
long strtol_l(const char* anonymous_var_nameX138, char** anonymous_var_nameX139, int anonymous_var_nameX140, struct __locale_t* anonymous_var_nameX141);
unsigned long  int strtoul_l(const char* anonymous_var_nameX142, char** anonymous_var_nameX143, int anonymous_var_nameX144, struct __locale_t* __loc);
long long strtoll_l(const char* anonymous_var_nameX145, char** anonymous_var_nameX146, int anonymous_var_nameX147, struct __locale_t* anonymous_var_nameX148);
unsigned long  long strtoull_l(const char* anonymous_var_nameX149, char** anonymous_var_nameX150, int anonymous_var_nameX151, struct __locale_t* __loc);
int system(const char* __string);
long a64l(const char* __input);
char* l64a(long __input);
char* _l64a_r(struct _reent* anonymous_var_nameX152, long __input);
int on_exit(void (*__func)(int,void*), void* __arg);
void _Exit(int __status);
int putenv(char* __string);
int _putenv_r(struct _reent* anonymous_var_nameX155, char* __string);
void* _reallocf_r(struct _reent* anonymous_var_nameX156, void* anonymous_var_nameX157, unsigned long  int anonymous_var_nameX158);
int setenv(const char* __string, const char* __value, int __overwrite);
int _setenv_r(struct _reent* anonymous_var_nameX159, const char* __string, const char* __value, int __overwrite);
char* __itoa(int anonymous_var_nameX160, char* anonymous_var_nameX161, int anonymous_var_nameX162);
char* __utoa(unsigned int anonymous_var_nameX163, char* anonymous_var_nameX164, int anonymous_var_nameX165);
char* itoa(int anonymous_var_nameX166, char* anonymous_var_nameX167, int anonymous_var_nameX168);
char* utoa(unsigned int anonymous_var_nameX169, char* anonymous_var_nameX170, int anonymous_var_nameX171);
int rand_r(unsigned int* __seed);
double drand48();
double _drand48_r(struct _reent* anonymous_var_nameX172);
double erand48(unsigned short int anonymous_var_nameX173[3]);
double _erand48_r(struct _reent* anonymous_var_nameX174, unsigned short int anonymous_var_nameX175[3]);
long jrand48(unsigned short int anonymous_var_nameX176[3]);
long _jrand48_r(struct _reent* anonymous_var_nameX177, unsigned short int anonymous_var_nameX178[3]);
void lcong48(unsigned short int anonymous_var_nameX179[7]);
void _lcong48_r(struct _reent* anonymous_var_nameX180, unsigned short int anonymous_var_nameX181[7]);
long lrand48();
long _lrand48_r(struct _reent* anonymous_var_nameX182);
long mrand48();
long _mrand48_r(struct _reent* anonymous_var_nameX183);
long nrand48(unsigned short int anonymous_var_nameX184[3]);
long _nrand48_r(struct _reent* anonymous_var_nameX185, unsigned short int anonymous_var_nameX186[3]);
unsigned short int* seed48(unsigned short int anonymous_var_nameX187[3]);
unsigned short int* _seed48_r(struct _reent* anonymous_var_nameX188, unsigned short int anonymous_var_nameX189[3]);
void srand48(long anonymous_var_nameX190);
void _srand48_r(struct _reent* anonymous_var_nameX191, long anonymous_var_nameX192);
char* initstate(unsigned int anonymous_var_nameX193, char* anonymous_var_nameX194, unsigned long  int anonymous_var_nameX195);
long random();
char* setstate(char* anonymous_var_nameX196);
void srandom(unsigned int anonymous_var_nameX197);
long long atoll(const char* __nptr);
long  long _atoll_r(struct _reent* anonymous_var_nameX198, const char* __nptr);
long long llabs(long  long anonymous_var_nameX199);
struct anonymous_typeX10 lldiv(long  long __numer, long  long __denom);
long long strtoll(const char* __n, char** __end_PTR, int __base);
long  long _strtoll_r(struct _reent* anonymous_var_nameX200, const char* __n, char** __end_PTR, int __base);
unsigned long  long strtoull(const char* __n, char** __end_PTR, int __base);
unsigned long  long _strtoull_r(struct _reent* anonymous_var_nameX201, const char* __n, char** __end_PTR, int __base);
void cfree(void* anonymous_var_nameX202);
int unsetenv(const char* __string);
int _unsetenv_r(struct _reent* anonymous_var_nameX203, const char* __string);
int posix_memalign(void** anonymous_var_nameX204, unsigned long  int anonymous_var_nameX205, unsigned long  int anonymous_var_nameX206);
char* _dtoa_r(struct _reent* anonymous_var_nameX207, double anonymous_var_nameX208, int anonymous_var_nameX209, int anonymous_var_nameX210, int* anonymous_var_nameX211, int* anonymous_var_nameX212, char** anonymous_var_nameX213);
void* _malloc_r(struct _reent* anonymous_var_nameX214, unsigned long  int anonymous_var_nameX215);
void* _calloc_r(struct _reent* anonymous_var_nameX216, unsigned long  int anonymous_var_nameX217, unsigned long  int anonymous_var_nameX218);
void _free_r(struct _reent* anonymous_var_nameX219, void* anonymous_var_nameX220);
void* _realloc_r(struct _reent* anonymous_var_nameX221, void* anonymous_var_nameX222, unsigned long  int anonymous_var_nameX223);
void _mstats_r(struct _reent* anonymous_var_nameX224, char* anonymous_var_nameX225);
int _system_r(struct _reent* anonymous_var_nameX226, const char* anonymous_var_nameX227);
void __eprintf(const char* anonymous_var_nameX228, const char* anonymous_var_nameX229, unsigned int anonymous_var_nameX230, const char* anonymous_var_nameX231);
void qsort_r(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*_compar)(const void*,const void*,void*), void* __thunk);
void* aligned_alloc(unsigned long  int anonymous_var_nameX235, unsigned long  int anonymous_var_nameX236);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX237);
int bcmp(const void* anonymous_var_nameX238, const void* anonymous_var_nameX239, unsigned long  int anonymous_var_nameX240);
void bcopy(const void* anonymous_var_nameX241, void* anonymous_var_nameX242, unsigned long  int anonymous_var_nameX243);
void bzero(void* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
void explicit_bzero(void* anonymous_var_nameX246, unsigned long  int anonymous_var_nameX247);
int ffs(int anonymous_var_nameX248);
int ffsl(long anonymous_var_nameX249);
int ffsll(long  long anonymous_var_nameX250);
int fls(int anonymous_var_nameX251);
int flsl(long anonymous_var_nameX252);
int flsll(long  long anonymous_var_nameX253);
char* index(const char* anonymous_var_nameX254, int anonymous_var_nameX255);
char* rindex(const char* anonymous_var_nameX256, int anonymous_var_nameX257);
int strcasecmp(const char* anonymous_var_nameX258, const char* anonymous_var_nameX259);
int strncasecmp(const char* anonymous_var_nameX260, const char* anonymous_var_nameX261, unsigned long  int anonymous_var_nameX262);
int strcasecmp_l(const char* anonymous_var_nameX263, const char* anonymous_var_nameX264, struct __locale_t* anonymous_var_nameX265);
int strncasecmp_l(const char* anonymous_var_nameX266, const char* anonymous_var_nameX267, unsigned long  int anonymous_var_nameX268, struct __locale_t* anonymous_var_nameX269);
void* memchr(const void* anonymous_var_nameX270, int anonymous_var_nameX271, unsigned long  int anonymous_var_nameX272);
int memcmp(const void* anonymous_var_nameX273, const void* anonymous_var_nameX274, unsigned long  int anonymous_var_nameX275);
void* memcpy(void* anonymous_var_nameX276, const void* anonymous_var_nameX277, unsigned long  int anonymous_var_nameX278);
void* memmove(void* anonymous_var_nameX279, const void* anonymous_var_nameX280, unsigned long  int anonymous_var_nameX281);
void* memset(void* anonymous_var_nameX282, int anonymous_var_nameX283, unsigned long  int anonymous_var_nameX284);
char* strcat(char* anonymous_var_nameX285, const char* anonymous_var_nameX286);
char* strchr(const char* anonymous_var_nameX287, int anonymous_var_nameX288);
int strcmp(const char* anonymous_var_nameX289, const char* anonymous_var_nameX290);
int strcoll(const char* anonymous_var_nameX291, const char* anonymous_var_nameX292);
char* strcpy(char* anonymous_var_nameX293, const char* anonymous_var_nameX294);
unsigned long  int strcspn(const char* anonymous_var_nameX295, const char* anonymous_var_nameX296);
char* strerror(int anonymous_var_nameX297);
unsigned long  int strlen(const char* anonymous_var_nameX298);
char* strncat(char* anonymous_var_nameX299, const char* anonymous_var_nameX300, unsigned long  int anonymous_var_nameX301);
int strncmp(const char* anonymous_var_nameX302, const char* anonymous_var_nameX303, unsigned long  int anonymous_var_nameX304);
char* strncpy(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, unsigned long  int anonymous_var_nameX307);
char* strpbrk(const char* anonymous_var_nameX308, const char* anonymous_var_nameX309);
char* strrchr(const char* anonymous_var_nameX310, int anonymous_var_nameX311);
unsigned long  int strspn(const char* anonymous_var_nameX312, const char* anonymous_var_nameX313);
char* strstr(const char* anonymous_var_nameX314, const char* anonymous_var_nameX315);
char* strtok(char* anonymous_var_nameX316, const char* anonymous_var_nameX317);
unsigned long  int strxfrm(char* anonymous_var_nameX318, const char* anonymous_var_nameX319, unsigned long  int anonymous_var_nameX320);
int strcoll_l(const char* anonymous_var_nameX321, const char* anonymous_var_nameX322, struct __locale_t* anonymous_var_nameX323);
char* strerror_l(int anonymous_var_nameX324, struct __locale_t* anonymous_var_nameX325);
unsigned long  int strxfrm_l(char* anonymous_var_nameX326, const char* anonymous_var_nameX327, unsigned long  int anonymous_var_nameX328, struct __locale_t* anonymous_var_nameX329);
char* strtok_r(char* anonymous_var_nameX330, const char* anonymous_var_nameX331, char** anonymous_var_nameX332);
int timingsafe_bcmp(const void* anonymous_var_nameX333, const void* anonymous_var_nameX334, unsigned long  int anonymous_var_nameX335);
int timingsafe_memcmp(const void* anonymous_var_nameX336, const void* anonymous_var_nameX337, unsigned long  int anonymous_var_nameX338);
void* memccpy(void* anonymous_var_nameX339, const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long  int anonymous_var_nameX342);
void* mempcpy(void* anonymous_var_nameX343, const void* anonymous_var_nameX344, unsigned long  int anonymous_var_nameX345);
void* memmem(const void* anonymous_var_nameX346, unsigned long  int anonymous_var_nameX347, const void* anonymous_var_nameX348, unsigned long  int anonymous_var_nameX349);
void* memrchr(const void* anonymous_var_nameX350, int anonymous_var_nameX351, unsigned long  int anonymous_var_nameX352);
void* rawmemchr(const void* anonymous_var_nameX353, int anonymous_var_nameX354);
char* stpcpy(char* anonymous_var_nameX355, const char* anonymous_var_nameX356);
char* stpncpy(char* anonymous_var_nameX357, const char* anonymous_var_nameX358, unsigned long  int anonymous_var_nameX359);
char* strcasestr(const char* anonymous_var_nameX360, const char* anonymous_var_nameX361);
char* strchrnul(const char* anonymous_var_nameX362, int anonymous_var_nameX363);
char* strdup(const char* anonymous_var_nameX364);
char* _strdup_r(struct _reent* anonymous_var_nameX365, const char* anonymous_var_nameX366);
char* strndup(const char* anonymous_var_nameX367, unsigned long  int anonymous_var_nameX368);
char* _strndup_r(struct _reent* anonymous_var_nameX369, const char* anonymous_var_nameX370, unsigned long  int anonymous_var_nameX371);
char* strerror_r(int anonymous_var_nameX372, char* anonymous_var_nameX373, unsigned long  int anonymous_var_nameX374);
char* _strerror_r(struct _reent* anonymous_var_nameX375, int anonymous_var_nameX376, int anonymous_var_nameX377, int* anonymous_var_nameX378);
unsigned long  int strlcat(char* anonymous_var_nameX379, const char* anonymous_var_nameX380, unsigned long  int anonymous_var_nameX381);
unsigned long  int strlcpy(char* anonymous_var_nameX382, const char* anonymous_var_nameX383, unsigned long  int anonymous_var_nameX384);
unsigned long  int strnlen(const char* anonymous_var_nameX385, unsigned long  int anonymous_var_nameX386);
char* strsep(char** anonymous_var_nameX387, const char* anonymous_var_nameX388);
char* strnstr(const char* anonymous_var_nameX389, const char* anonymous_var_nameX390, unsigned long  int anonymous_var_nameX391);
char* strlwr(char* anonymous_var_nameX392);
char* strupr(char* anonymous_var_nameX393);
char* strsignal(int __signo);
int strverscmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
char* __gnu_basename(const char* anonymous_var_nameX396);
char* ctermid(char* anonymous_var_nameX397);
char* cuserid(char* anonymous_var_nameX398);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX399);
char* tempnam(const char* anonymous_var_nameX400, const char* anonymous_var_nameX401);
int fclose(struct __sFILE* anonymous_var_nameX402);
int fflush(struct __sFILE* anonymous_var_nameX403);
struct __sFILE* freopen(const char* anonymous_var_nameX404, const char* anonymous_var_nameX405, struct __sFILE* anonymous_var_nameX406);
void setbuf(struct __sFILE* anonymous_var_nameX407, char* anonymous_var_nameX408);
int setvbuf(struct __sFILE* anonymous_var_nameX409, char* anonymous_var_nameX410, int anonymous_var_nameX411, unsigned long  int anonymous_var_nameX412);
int fprintf(struct __sFILE* anonymous_var_nameX413, const char* anonymous_var_nameX414, ...);
int fscanf(struct __sFILE* anonymous_var_nameX415, const char* anonymous_var_nameX416, ...);
int printf(const char* anonymous_var_nameX417, ...);
int scanf(const char* anonymous_var_nameX418, ...);
int sscanf(const char* anonymous_var_nameX419, const char* anonymous_var_nameX420, ...);
int vfprintf(struct __sFILE* anonymous_var_nameX421, const char* anonymous_var_nameX422, va_list anonymous_var_nameX423);
int vprintf(const char* anonymous_var_nameX424, va_list anonymous_var_nameX425);
int vsprintf(char* anonymous_var_nameX426, const char* anonymous_var_nameX427, va_list anonymous_var_nameX428);
int fgetc(struct __sFILE* anonymous_var_nameX429);
char* fgets(char* anonymous_var_nameX430, int anonymous_var_nameX431, struct __sFILE* anonymous_var_nameX432);
int fputc(int anonymous_var_nameX433, struct __sFILE* anonymous_var_nameX434);
int fputs(const char* anonymous_var_nameX435, struct __sFILE* anonymous_var_nameX436);
int getc(struct __sFILE* anonymous_var_nameX437);
int getchar();
char* gets(char* anonymous_var_nameX438);
int putc(int anonymous_var_nameX439, struct __sFILE* anonymous_var_nameX440);
int putchar(int anonymous_var_nameX441);
int puts(const char* anonymous_var_nameX442);
int ungetc(int anonymous_var_nameX443, struct __sFILE* anonymous_var_nameX444);
unsigned long  int fread(void* anonymous_var_nameX445, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX446);
unsigned long  int fwrite(const void* anonymous_var_nameX447, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX448);
int fgetpos(struct __sFILE* anonymous_var_nameX449, long* anonymous_var_nameX450);
int fseek(struct __sFILE* anonymous_var_nameX451, long anonymous_var_nameX452, int anonymous_var_nameX453);
int fsetpos(struct __sFILE* anonymous_var_nameX454, const long* anonymous_var_nameX455);
long ftell(struct __sFILE* anonymous_var_nameX456);
void rewind(struct __sFILE* anonymous_var_nameX457);
void clearerr(struct __sFILE* anonymous_var_nameX458);
int feof(struct __sFILE* anonymous_var_nameX459);
int ferror(struct __sFILE* anonymous_var_nameX460);
void perror(const char* anonymous_var_nameX461);
struct __sFILE* fopen(const char* _name, const char* _type);
int sprintf(char* anonymous_var_nameX462, const char* anonymous_var_nameX463, ...);
int remove(const char* anonymous_var_nameX464);
int rename(const char* anonymous_var_nameX465, const char* anonymous_var_nameX466);
int fseeko(struct __sFILE* anonymous_var_nameX467, long anonymous_var_nameX468, int anonymous_var_nameX469);
long ftello(struct __sFILE* anonymous_var_nameX470);
int fcloseall();
int snprintf(char* anonymous_var_nameX471, unsigned long  int anonymous_var_nameX472, const char* anonymous_var_nameX473, ...);
int vsnprintf(char* anonymous_var_nameX474, unsigned long  int anonymous_var_nameX475, const char* anonymous_var_nameX476, va_list anonymous_var_nameX477);
int vfscanf(struct __sFILE* anonymous_var_nameX478, const char* anonymous_var_nameX479, va_list anonymous_var_nameX480);
int vscanf(const char* anonymous_var_nameX481, va_list anonymous_var_nameX482);
int vsscanf(const char* anonymous_var_nameX483, const char* anonymous_var_nameX484, va_list anonymous_var_nameX485);
int asprintf(char** anonymous_var_nameX486, const char* anonymous_var_nameX487, ...);
int vasprintf(char** anonymous_var_nameX488, const char* anonymous_var_nameX489, va_list anonymous_var_nameX490);
int asiprintf(char** anonymous_var_nameX491, const char* anonymous_var_nameX492, ...);
char* asniprintf(char* anonymous_var_nameX493, unsigned long  int* anonymous_var_nameX494, const char* anonymous_var_nameX495, ...);
char* asnprintf(char* anonymous_var_nameX496, unsigned long  int* anonymous_var_nameX497, const char* anonymous_var_nameX498, ...);
int diprintf(int anonymous_var_nameX499, const char* anonymous_var_nameX500, ...);
int fiprintf(struct __sFILE* anonymous_var_nameX501, const char* anonymous_var_nameX502, ...);
int fiscanf(struct __sFILE* anonymous_var_nameX503, const char* anonymous_var_nameX504, ...);
int iprintf(const char* anonymous_var_nameX505, ...);
int iscanf(const char* anonymous_var_nameX506, ...);
int siprintf(char* anonymous_var_nameX507, const char* anonymous_var_nameX508, ...);
int siscanf(const char* anonymous_var_nameX509, const char* anonymous_var_nameX510, ...);
int sniprintf(char* anonymous_var_nameX511, unsigned long  int anonymous_var_nameX512, const char* anonymous_var_nameX513, ...);
int vasiprintf(char** anonymous_var_nameX514, const char* anonymous_var_nameX515, va_list anonymous_var_nameX516);
char* vasniprintf(char* anonymous_var_nameX517, unsigned long  int* anonymous_var_nameX518, const char* anonymous_var_nameX519, va_list anonymous_var_nameX520);
char* vasnprintf(char* anonymous_var_nameX521, unsigned long  int* anonymous_var_nameX522, const char* anonymous_var_nameX523, va_list anonymous_var_nameX524);
int vdiprintf(int anonymous_var_nameX525, const char* anonymous_var_nameX526, va_list anonymous_var_nameX527);
int vfiprintf(struct __sFILE* anonymous_var_nameX528, const char* anonymous_var_nameX529, va_list anonymous_var_nameX530);
int vfiscanf(struct __sFILE* anonymous_var_nameX531, const char* anonymous_var_nameX532, va_list anonymous_var_nameX533);
int viprintf(const char* anonymous_var_nameX534, va_list anonymous_var_nameX535);
int viscanf(const char* anonymous_var_nameX536, va_list anonymous_var_nameX537);
int vsiprintf(char* anonymous_var_nameX538, const char* anonymous_var_nameX539, va_list anonymous_var_nameX540);
int vsiscanf(const char* anonymous_var_nameX541, const char* anonymous_var_nameX542, va_list anonymous_var_nameX543);
int vsniprintf(char* anonymous_var_nameX544, unsigned long  int anonymous_var_nameX545, const char* anonymous_var_nameX546, va_list anonymous_var_nameX547);
struct __sFILE* fdopen(int anonymous_var_nameX548, const char* anonymous_var_nameX549);
int fileno(struct __sFILE* anonymous_var_nameX550);
int pclose(struct __sFILE* anonymous_var_nameX551);
struct __sFILE* popen(const char* anonymous_var_nameX552, const char* anonymous_var_nameX553);
void setbuffer(struct __sFILE* anonymous_var_nameX554, char* anonymous_var_nameX555, int anonymous_var_nameX556);
int setlinebuf(struct __sFILE* anonymous_var_nameX557);
int getw(struct __sFILE* anonymous_var_nameX558);
int putw(int anonymous_var_nameX559, struct __sFILE* anonymous_var_nameX560);
int getc_unlocked(struct __sFILE* anonymous_var_nameX561);
int getchar_unlocked();
void flockfile(struct __sFILE* anonymous_var_nameX562);
int ftrylockfile(struct __sFILE* anonymous_var_nameX563);
void funlockfile(struct __sFILE* anonymous_var_nameX564);
int putc_unlocked(int anonymous_var_nameX565, struct __sFILE* anonymous_var_nameX566);
int putchar_unlocked(int anonymous_var_nameX567);
int dprintf(int anonymous_var_nameX568, const char* anonymous_var_nameX569, ...);
struct __sFILE* fmemopen(void* anonymous_var_nameX570, unsigned long  int anonymous_var_nameX571, const char* anonymous_var_nameX572);
struct __sFILE* open_memstream(char** anonymous_var_nameX573, unsigned long  int* anonymous_var_nameX574);
int vdprintf(int anonymous_var_nameX575, const char* anonymous_var_nameX576, va_list anonymous_var_nameX577);
int renameat(int anonymous_var_nameX578, const char* anonymous_var_nameX579, int anonymous_var_nameX580, const char* anonymous_var_nameX581);
int _asiprintf_r(struct _reent* anonymous_var_nameX582, char** anonymous_var_nameX583, const char* anonymous_var_nameX584, ...);
char* _asniprintf_r(struct _reent* anonymous_var_nameX585, char* anonymous_var_nameX586, unsigned long  int* anonymous_var_nameX587, const char* anonymous_var_nameX588, ...);
char* _asnprintf_r(struct _reent* anonymous_var_nameX589, char* anonymous_var_nameX590, unsigned long  int* anonymous_var_nameX591, const char* anonymous_var_nameX592, ...);
int _asprintf_r(struct _reent* anonymous_var_nameX593, char** anonymous_var_nameX594, const char* anonymous_var_nameX595, ...);
int _diprintf_r(struct _reent* anonymous_var_nameX596, int anonymous_var_nameX597, const char* anonymous_var_nameX598, ...);
int _dprintf_r(struct _reent* anonymous_var_nameX599, int anonymous_var_nameX600, const char* anonymous_var_nameX601, ...);
int _fclose_r(struct _reent* anonymous_var_nameX602, struct __sFILE* anonymous_var_nameX603);
int _fcloseall_r(struct _reent* anonymous_var_nameX604);
struct __sFILE* _fdopen_r(struct _reent* anonymous_var_nameX605, int anonymous_var_nameX606, const char* anonymous_var_nameX607);
int _fflush_r(struct _reent* anonymous_var_nameX608, struct __sFILE* anonymous_var_nameX609);
int _fgetc_r(struct _reent* anonymous_var_nameX610, struct __sFILE* anonymous_var_nameX611);
int _fgetc_unlocked_r(struct _reent* anonymous_var_nameX612, struct __sFILE* anonymous_var_nameX613);
char* _fgets_r(struct _reent* anonymous_var_nameX614, char* anonymous_var_nameX615, int anonymous_var_nameX616, struct __sFILE* anonymous_var_nameX617);
char* _fgets_unlocked_r(struct _reent* anonymous_var_nameX618, char* anonymous_var_nameX619, int anonymous_var_nameX620, struct __sFILE* anonymous_var_nameX621);
int _fgetpos_r(struct _reent* anonymous_var_nameX622, struct __sFILE* anonymous_var_nameX623, long* anonymous_var_nameX624);
int _fsetpos_r(struct _reent* anonymous_var_nameX625, struct __sFILE* anonymous_var_nameX626, const long* anonymous_var_nameX627);
int _fiprintf_r(struct _reent* anonymous_var_nameX628, struct __sFILE* anonymous_var_nameX629, const char* anonymous_var_nameX630, ...);
int _fiscanf_r(struct _reent* anonymous_var_nameX631, struct __sFILE* anonymous_var_nameX632, const char* anonymous_var_nameX633, ...);
struct __sFILE* _fmemopen_r(struct _reent* anonymous_var_nameX634, void* anonymous_var_nameX635, unsigned long  int anonymous_var_nameX636, const char* anonymous_var_nameX637);
struct __sFILE* _fopen_r(struct _reent* anonymous_var_nameX638, const char* anonymous_var_nameX639, const char* anonymous_var_nameX640);
struct __sFILE* _freopen_r(struct _reent* anonymous_var_nameX641, const char* anonymous_var_nameX642, const char* anonymous_var_nameX643, struct __sFILE* anonymous_var_nameX644);
int _fprintf_r(struct _reent* anonymous_var_nameX645, struct __sFILE* anonymous_var_nameX646, const char* anonymous_var_nameX647, ...);
int _fpurge_r(struct _reent* anonymous_var_nameX648, struct __sFILE* anonymous_var_nameX649);
int _fputc_r(struct _reent* anonymous_var_nameX650, int anonymous_var_nameX651, struct __sFILE* anonymous_var_nameX652);
int _fputc_unlocked_r(struct _reent* anonymous_var_nameX653, int anonymous_var_nameX654, struct __sFILE* anonymous_var_nameX655);
int _fputs_r(struct _reent* anonymous_var_nameX656, const char* anonymous_var_nameX657, struct __sFILE* anonymous_var_nameX658);
int _fputs_unlocked_r(struct _reent* anonymous_var_nameX659, const char* anonymous_var_nameX660, struct __sFILE* anonymous_var_nameX661);
unsigned long  int _fread_r(struct _reent* anonymous_var_nameX662, void* anonymous_var_nameX663, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX664);
unsigned long  int _fread_unlocked_r(struct _reent* anonymous_var_nameX665, void* anonymous_var_nameX666, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX667);
int _fscanf_r(struct _reent* anonymous_var_nameX668, struct __sFILE* anonymous_var_nameX669, const char* anonymous_var_nameX670, ...);
int _fseek_r(struct _reent* anonymous_var_nameX671, struct __sFILE* anonymous_var_nameX672, long anonymous_var_nameX673, int anonymous_var_nameX674);
int _fseeko_r(struct _reent* anonymous_var_nameX675, struct __sFILE* anonymous_var_nameX676, long anonymous_var_nameX677, int anonymous_var_nameX678);
long _ftell_r(struct _reent* anonymous_var_nameX679, struct __sFILE* anonymous_var_nameX680);
long _ftello_r(struct _reent* anonymous_var_nameX681, struct __sFILE* anonymous_var_nameX682);
void _rewind_r(struct _reent* anonymous_var_nameX683, struct __sFILE* anonymous_var_nameX684);
unsigned long  int _fwrite_r(struct _reent* anonymous_var_nameX685, const void* anonymous_var_nameX686, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX687);
unsigned long  int _fwrite_unlocked_r(struct _reent* anonymous_var_nameX688, const void* anonymous_var_nameX689, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX690);
int _getc_r(struct _reent* anonymous_var_nameX691, struct __sFILE* anonymous_var_nameX692);
int _getc_unlocked_r(struct _reent* anonymous_var_nameX693, struct __sFILE* anonymous_var_nameX694);
int _getchar_r(struct _reent* anonymous_var_nameX695);
int _getchar_unlocked_r(struct _reent* anonymous_var_nameX696);
char* _gets_r(struct _reent* anonymous_var_nameX697, char* anonymous_var_nameX698);
int _iprintf_r(struct _reent* anonymous_var_nameX699, const char* anonymous_var_nameX700, ...);
int _iscanf_r(struct _reent* anonymous_var_nameX701, const char* anonymous_var_nameX702, ...);
struct __sFILE* _open_memstream_r(struct _reent* anonymous_var_nameX703, char** anonymous_var_nameX704, unsigned long  int* anonymous_var_nameX705);
void _perror_r(struct _reent* anonymous_var_nameX706, const char* anonymous_var_nameX707);
int _printf_r(struct _reent* anonymous_var_nameX708, const char* anonymous_var_nameX709, ...);
int _putc_r(struct _reent* anonymous_var_nameX710, int anonymous_var_nameX711, struct __sFILE* anonymous_var_nameX712);
int _putc_unlocked_r(struct _reent* anonymous_var_nameX713, int anonymous_var_nameX714, struct __sFILE* anonymous_var_nameX715);
int _putchar_unlocked_r(struct _reent* anonymous_var_nameX716, int anonymous_var_nameX717);
int _putchar_r(struct _reent* anonymous_var_nameX718, int anonymous_var_nameX719);
int _puts_r(struct _reent* anonymous_var_nameX720, const char* anonymous_var_nameX721);
int _remove_r(struct _reent* anonymous_var_nameX722, const char* anonymous_var_nameX723);
int _rename_r(struct _reent* anonymous_var_nameX724, const char* _old, const char* _new);
int _scanf_r(struct _reent* anonymous_var_nameX725, const char* anonymous_var_nameX726, ...);
int _siprintf_r(struct _reent* anonymous_var_nameX727, char* anonymous_var_nameX728, const char* anonymous_var_nameX729, ...);
int _siscanf_r(struct _reent* anonymous_var_nameX730, const char* anonymous_var_nameX731, const char* anonymous_var_nameX732, ...);
int _sniprintf_r(struct _reent* anonymous_var_nameX733, char* anonymous_var_nameX734, unsigned long  int anonymous_var_nameX735, const char* anonymous_var_nameX736, ...);
int _snprintf_r(struct _reent* anonymous_var_nameX737, char* anonymous_var_nameX738, unsigned long  int anonymous_var_nameX739, const char* anonymous_var_nameX740, ...);
int _sprintf_r(struct _reent* anonymous_var_nameX741, char* anonymous_var_nameX742, const char* anonymous_var_nameX743, ...);
int _sscanf_r(struct _reent* anonymous_var_nameX744, const char* anonymous_var_nameX745, const char* anonymous_var_nameX746, ...);
char* _tempnam_r(struct _reent* anonymous_var_nameX747, const char* anonymous_var_nameX748, const char* anonymous_var_nameX749);
struct __sFILE* _tmpfile_r(struct _reent* anonymous_var_nameX750);
char* _tmpnam_r(struct _reent* anonymous_var_nameX751, char* anonymous_var_nameX752);
int _ungetc_r(struct _reent* anonymous_var_nameX753, int anonymous_var_nameX754, struct __sFILE* anonymous_var_nameX755);
int _vasiprintf_r(struct _reent* anonymous_var_nameX756, char** anonymous_var_nameX757, const char* anonymous_var_nameX758, va_list anonymous_var_nameX759);
char* _vasniprintf_r(struct _reent* anonymous_var_nameX760, char* anonymous_var_nameX761, unsigned long  int* anonymous_var_nameX762, const char* anonymous_var_nameX763, va_list anonymous_var_nameX764);
char* _vasnprintf_r(struct _reent* anonymous_var_nameX765, char* anonymous_var_nameX766, unsigned long  int* anonymous_var_nameX767, const char* anonymous_var_nameX768, va_list anonymous_var_nameX769);
int _vasprintf_r(struct _reent* anonymous_var_nameX770, char** anonymous_var_nameX771, const char* anonymous_var_nameX772, va_list anonymous_var_nameX773);
int _vdiprintf_r(struct _reent* anonymous_var_nameX774, int anonymous_var_nameX775, const char* anonymous_var_nameX776, va_list anonymous_var_nameX777);
int _vdprintf_r(struct _reent* anonymous_var_nameX778, int anonymous_var_nameX779, const char* anonymous_var_nameX780, va_list anonymous_var_nameX781);
int _vfiprintf_r(struct _reent* anonymous_var_nameX782, struct __sFILE* anonymous_var_nameX783, const char* anonymous_var_nameX784, va_list anonymous_var_nameX785);
int _vfiscanf_r(struct _reent* anonymous_var_nameX786, struct __sFILE* anonymous_var_nameX787, const char* anonymous_var_nameX788, va_list anonymous_var_nameX789);
int _vfprintf_r(struct _reent* anonymous_var_nameX790, struct __sFILE* anonymous_var_nameX791, const char* anonymous_var_nameX792, va_list anonymous_var_nameX793);
int _vfscanf_r(struct _reent* anonymous_var_nameX794, struct __sFILE* anonymous_var_nameX795, const char* anonymous_var_nameX796, va_list anonymous_var_nameX797);
int _viprintf_r(struct _reent* anonymous_var_nameX798, const char* anonymous_var_nameX799, va_list anonymous_var_nameX800);
int _viscanf_r(struct _reent* anonymous_var_nameX801, const char* anonymous_var_nameX802, va_list anonymous_var_nameX803);
int _vprintf_r(struct _reent* anonymous_var_nameX804, const char* anonymous_var_nameX805, va_list anonymous_var_nameX806);
int _vscanf_r(struct _reent* anonymous_var_nameX807, const char* anonymous_var_nameX808, va_list anonymous_var_nameX809);
int _vsiprintf_r(struct _reent* anonymous_var_nameX810, char* anonymous_var_nameX811, const char* anonymous_var_nameX812, va_list anonymous_var_nameX813);
int _vsiscanf_r(struct _reent* anonymous_var_nameX814, const char* anonymous_var_nameX815, const char* anonymous_var_nameX816, va_list anonymous_var_nameX817);
int _vsniprintf_r(struct _reent* anonymous_var_nameX818, char* anonymous_var_nameX819, unsigned long  int anonymous_var_nameX820, const char* anonymous_var_nameX821, va_list anonymous_var_nameX822);
int _vsnprintf_r(struct _reent* anonymous_var_nameX823, char* anonymous_var_nameX824, unsigned long  int anonymous_var_nameX825, const char* anonymous_var_nameX826, va_list anonymous_var_nameX827);
int _vsprintf_r(struct _reent* anonymous_var_nameX828, char* anonymous_var_nameX829, const char* anonymous_var_nameX830, va_list anonymous_var_nameX831);
int _vsscanf_r(struct _reent* anonymous_var_nameX832, const char* anonymous_var_nameX833, const char* anonymous_var_nameX834, va_list anonymous_var_nameX835);
int fpurge(struct __sFILE* anonymous_var_nameX836);
long  int __getdelim(char** anonymous_var_nameX837, unsigned long  int* anonymous_var_nameX838, int anonymous_var_nameX839, struct __sFILE* anonymous_var_nameX840);
long  int __getline(char** anonymous_var_nameX841, unsigned long  int* anonymous_var_nameX842, struct __sFILE* anonymous_var_nameX843);
void clearerr_unlocked(struct __sFILE* anonymous_var_nameX844);
int feof_unlocked(struct __sFILE* anonymous_var_nameX845);
int ferror_unlocked(struct __sFILE* anonymous_var_nameX846);
int fileno_unlocked(struct __sFILE* anonymous_var_nameX847);
int fflush_unlocked(struct __sFILE* anonymous_var_nameX848);
int fgetc_unlocked(struct __sFILE* anonymous_var_nameX849);
int fputc_unlocked(int anonymous_var_nameX850, struct __sFILE* anonymous_var_nameX851);
unsigned long  int fread_unlocked(void* anonymous_var_nameX852, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX853);
unsigned long  int fwrite_unlocked(const void* anonymous_var_nameX854, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX855);
char* fgets_unlocked(char* anonymous_var_nameX856, int anonymous_var_nameX857, struct __sFILE* anonymous_var_nameX858);
int fputs_unlocked(const char* anonymous_var_nameX859, struct __sFILE* anonymous_var_nameX860);
int __srget_r(struct _reent* anonymous_var_nameX861, struct __sFILE* anonymous_var_nameX862);
int __swbuf_r(struct _reent* anonymous_var_nameX863, int anonymous_var_nameX864, struct __sFILE* anonymous_var_nameX865);
struct __sFILE* funopen(const void* __cookie, int (*__readfn)(void*,char*,int), int (*__writefn)(void*,const char*,int), long (*__seekfn)(void*,long,int), int (*__closefn)(void*));
struct __sFILE* _funopen_r(struct _reent* anonymous_var_nameX866, const void* __cookie, int (*__readfn)(void*,char*,int), int (*__writefn)(void*,const char*,int), long (*__seekfn)(void*,long,int), int (*__closefn)(void*));
struct __sFILE* fopencookie(void* __cookie, const char* __mode, struct anonymous_typeX11 __functions);
struct __sFILE* _fopencookie_r(struct _reent* anonymous_var_nameX867, void* __cookie, const char* __mode, struct anonymous_typeX11 __functions);
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
_Bool xiswalpha(unsigned short int c);
_Bool xiswblank(unsigned short int c);
_Bool xiswdigit(unsigned short int c);
_Bool xiswalnum(unsigned short int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(unsigned short int c);
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
struct integer* integer_initialize(struct integer* self, long value);
static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);
struct integer* bool_to_integer(long self);
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

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sMemHeader* gAllocMem;

struct sHeapPage gHeapPages;

// inline function
static inline int __sputc_r(struct _reent* _ptr, int _c, struct __sFILE* _p){
    if(    --_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
        return (*_p->_p++=_c);
    }
    else {
        return (__swbuf_r(_ptr,_c,_p));
    }
}
static inline int _getchar_unlocked(){
struct _reent* _ptr_0;
_ptr_0 = (void*)0;
    _ptr_0=_impure_ptr;
    return ((((--(((_ptr_0)->_stdin))->_r<0)?(__srget_r(_ptr_0,((_ptr_0)->_stdin))):((int)(*(((_ptr_0)->_stdin))->_p++)))));
}
static inline int _putchar_unlocked(int _c){
struct _reent* _ptr_1;
_ptr_1 = (void*)0;
    _ptr_1=_impure_ptr;
    return (__sputc_r(_ptr_1,_c,((_ptr_1)->_stdout)));
}

// body function



struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_2;
struct buffer* __result1__;
    result_2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2324, "buffer"))));
    buffer_append(result_2,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_2;
    /*i*/come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
struct buffer* result_3;
int i_4;
struct buffer* __result2__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2331, "buffer"))));
    for(    i_4=0;    i_4<len;    i_4++    ){
        buffer_append(result_3,self[i_4],strlen(self[i_4]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_5;
struct buffer* __result3__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2340, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_6;
struct buffer* __result4__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2347, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_7;
struct buffer* __result5__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2354, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_8;
struct buffer* __result6__;
    result_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2361, "buffer"))));
    buffer_append(result_8,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_8;
    /*i*/come_call_finalizer3(result_8,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_9;
struct buffer* __result7__;
    result_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2368, "buffer"))));
    buffer_append(result_9,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_9;
    /*i*/come_call_finalizer3(result_9,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}

struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value18=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 2668, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
struct buffer* result_10;
void* __right_value16 = (void*)0;
char* __dec_obj4;
struct buffer* __result10__;
    if(    self==(void*)0) {
        __result9__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result9__;
    }
    result_10=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "buffer_clone", 3, "buffer"));
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        __dec_obj4=result_10->buf;
        result_10->buf=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "buffer_clone", 4, "char*"));
        /*G*/ __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_10->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_10->size=self->size;
    }
    __result10__ = gComeFunResultObject = __result_obj__ = result_10;
    /*i*/come_call_finalizer3(result_10,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result10__;
}

struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct smart_pointer$1char* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value21=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 2673, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value24=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang-pico.h", 2678, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value27=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang-pico.h", 2683, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value30=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang-pico.h", 2688, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
struct buffer* buf_11;
void* __right_value33 = (void*)0;
int i_12;
void* __right_value34 = (void*)0;
void* __right_value41 = (void*)0;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2749, "buffer"))));
    buffer_append_str(buf_11,((char*)(__right_value33=xsprintf("%s %d\n",sname,sline))));
    /* U11 */__right_value33 = come_decrement_ref_count2(__right_value33, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    i_12=gNumComeStackFrame-2;    i_12>=0;    i_12--    ){
        buffer_append_str(buf_11,((char*)(__right_value34=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_12],gComeStackFrameSLine[i_12],gComeStackFrameID[i_12]))));
        /* U11 */__right_value34 = come_decrement_ref_count2(__right_value34, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value41=buffer_to_string(buf_11))));
    /* U11 */__right_value41 = come_decrement_ref_count2(__right_value41, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_13;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
char* __result19__;
    result_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "buffer_to_string", 2, "buffer"))));
    buffer_append_str(result_13,"buffer {");
    buffer_append_str(result_13,"buf:");
    buffer_append_str(result_13,((char*)(__right_value37=charp_to_string(self->buf))));
    /* U11 */__right_value37 = come_decrement_ref_count2(__right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_13,",");
    buffer_append_str(result_13,"len:");
    buffer_append_str(result_13,((char*)(__right_value38=int_to_string(self->len))));
    /* U11 */__right_value38 = come_decrement_ref_count2(__right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_13,",");
    buffer_append_str(result_13,"size:");
    buffer_append_str(result_13,((char*)(__right_value39=int_to_string(self->size))));
    /* U11 */__right_value39 = come_decrement_ref_count2(__right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_13,"}");
    __result19__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value40=buffer_to_string(result_13)));
    /*i*/come_call_finalizer3(result_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value40 = come_decrement_ref_count2(__right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}

void stackframe(){
int i_14;
    for(    i_14=gNumComeStackFrame-1;    i_14>=0;    i_14--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_14],gComeStackFrameSLine[i_14],gComeStackFrameID[i_14]);
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
int i_15;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_15=0;    i_15<gHeapPages.mSizePages;    i_15++    ){
        gHeapPages.mPages[i_15]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_16;
int n_17;
_Bool flag_18;
int i_19;
struct sMemHeaderTiny* it_20;
int n_21;
int i_22;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_16=gAllocMem;
        n_17=0;
        while(it_16) {
            n_17++;
            flag_18=(_Bool)0;
            printf("#%d ",n_17);
            if(            it_16->class_name) {
                printf("%p (%s): ",(char*)it_16+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_16->class_name);
            }
            for(            i_19=0;            i_19<16;            i_19++            ){
                if(                it_16->sname[i_19]) {
                    printf("%s %d #%d, ",it_16->sname[i_19],it_16->sline[i_19],it_16->id[i_19]);
                    flag_18=(_Bool)1;
                }
            }
            if(            flag_18) {
                puts("");
            }
            it_16=it_16->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_17,gNumAlloc,gNumFree);
    }
    else {
        it_20=(struct sMemHeaderTiny*)gAllocMem;
        n_21=0;
        while(it_20) {
            n_21++;
            it_20=it_20->next;
        }
        if(        n_21>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_21,gNumAlloc,gNumFree);
        }
    }
    for(    i_22=0;    i_22<gHeapPages.mSizePages;    i_22++    ){
        free(gHeapPages.mPages[i_22]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_23;
unsigned long  int free_area_24;
int new_size_pages_25;
void** new_pages_26;
int i_27;
void* __result22__;
    result_23=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_23=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_23,0,size);
        }
        if(        result_23==((void*)0)) {
            free_area_24=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_24) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_25=gHeapPages.mSizePages*2;
                    new_pages_26=calloc(1,sizeof(char*)*new_size_pages_25);
                    i_27=0;
                    for(                    ;                    i_27<gHeapPages.mSizePages;                    i_27++                    ){
                        new_pages_26[i_27]=gHeapPages.mPages[i_27];
                    }
                    for(                    ;                    i_27<new_size_pages_25;                    i_27++                    ){
                        new_pages_26[i_27]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_26;
                    gHeapPages.mSizePages=new_size_pages_25;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_23=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_23=calloc(1,size);
    }
    __result22__ = gComeFunResultObject = __result_obj__ = result_23;
    gComeFunResultObject = (void*)0;
    return __result22__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_28;
struct sMemHeader* it_29;
void* __result23__;
void* result_30;
struct sMemHeaderTiny* it_31;
void* __result24__;
    if(    gComeDebugLib) {
        result_28=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_29=result_28;
        it_29->allocated=177783;
        it_29->size=size+sizeof(struct sMemHeader);
        it_29->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_29->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_29->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_29->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_29->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_29->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_29->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_29->next=gAllocMem;
        it_29->prev=((void*)0);
        if(        class_name) {
            it_29->class_name=strdup(class_name);
        }
        else {
            it_29->class_name=((void*)0);
        }
        if(        gAllocMem) {
            gAllocMem->prev=it_29;
        }
        gAllocMem=it_29;
        gNumAlloc++;
        __result23__ = gComeFunResultObject = __result_obj__ = (char*)result_28+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result23__;
    }
    else {
        result_30=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_31=result_30;
        it_31->allocated=177783;
        it_31->size=size+sizeof(struct sMemHeaderTiny);
        it_31->free_next=((void*)0);
        it_31->next=(struct sMemHeaderTiny*)gAllocMem;
        it_31->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_31;
        }
        gAllocMem=(struct sMemHeader*)it_31;
        gNumAlloc++;
        __result24__ = gComeFunResultObject = __result_obj__ = (char*)result_30+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result24__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_32;
struct sMemHeader* prev_it_33;
struct sMemHeader* next_it_34;
unsigned long  int size_35;
struct sMemHeaderTiny* it_36;
struct sMemHeaderTiny* prev_it_37;
struct sMemHeaderTiny* next_it_38;
unsigned long  int size_39;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_32=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_32->allocated!=177783) {
                return;
            }
            it_32->allocated=0;
            prev_it_33=it_32->prev;
            next_it_34=it_32->next;
            if(            it_32->class_name) {
                free(it_32->class_name);
            }
            if(            gAllocMem==it_32) {
                gAllocMem=next_it_34;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_33) {
                    prev_it_33->next=next_it_34;
                }
                if(                next_it_34) {
                    next_it_34->prev=prev_it_33;
                }
            }
            size_35=it_32->size;
            if(            size_35<2048*2) {
                if(                gHeapPages.mFreeMem[size_35]==((void*)0)) {
                    it_32->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_35]=(struct sMemHeaderTiny*)it_32;
                }
                else {
                    it_32->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_35];
                    gHeapPages.mFreeMem[size_35]=(struct sMemHeaderTiny*)it_32;
                }
            }
            else {
                free(it_32);
            }
            gNumFree++;
        }
        else {
            it_36=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_36->allocated!=177783) {
                return;
            }
            it_36->allocated=0;
            prev_it_37=it_36->prev;
            next_it_38=it_36->next;
            if(            gAllocMem==it_36) {
                gAllocMem=(struct sMemHeader*)next_it_38;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_37) {
                    prev_it_37->next=next_it_38;
                }
                if(                next_it_38) {
                    next_it_38->prev=prev_it_37;
                }
            }
            size_39=it_36->size;
            if(            size_39<2048*2) {
                if(                gHeapPages.mFreeMem[size_39]==((void*)0)) {
                    it_36->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_39]=it_36;
                }
                else {
                    it_36->free_next=gHeapPages.mFreeMem[size_39];
                    gHeapPages.mFreeMem[size_39]=it_36;
                }
            }
            else {
                free(it_36);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_40;
char* __result25__;
    it_40=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
    if(    it_40->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_40);
        exit(2);
    }
    __result25__ = gComeFunResultObject = __result_obj__ = it_40->class_name;
    gComeFunResultObject = (void*)0;
    return __result25__;
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_41;
unsigned long  int* ref_count_42;
unsigned long  int* size2_43;
void* __result26__;
    mem_41=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_42=(unsigned long  int*)mem_41;
    *ref_count_42=0;
    size2_43=(unsigned long  int*)(mem_41+sizeof(unsigned long  int));
    *size2_43=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result26__ = gComeFunResultObject = __result_obj__ = mem_41+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result26__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_44;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_44=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_44);
}

void come_free(void* mem){
unsigned long  int* ref_count_45;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_45=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_45);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result27__;
char* mem_46;
unsigned long  int* size_p_47;
unsigned long  int size_48;
void* result_49;
void* __result28__;
    if(    !block) {
        __result27__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result27__;
    }
    mem_46=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_47=(unsigned long  int*)(mem_46+sizeof(unsigned long  int));
    size_48=*size_p_47-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_49=come_calloc(1,size_48,sname,sline,class_name);
    memcpy(result_49,block,size_48);
    __result28__ = gComeFunResultObject = __result_obj__ = result_49;
    gComeFunResultObject = (void*)0;
    return __result28__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result29__;
unsigned long  int* ref_count_50;
void* __result30__;
    if(    mem==((void*)0)) {
        __result29__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result29__;
    }
    ref_count_50=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_50)++;
    __result30__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result31__;
unsigned long  int* ref_count_51;
void* __result32__;
    if(    mem==((void*)0)) {
        __result31__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result31__;
    }
    ref_count_51=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_51);
    __result32__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result32__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result33__;
unsigned long  int* ref_count_52;
unsigned long  int count_53;
void (*finalizer_54)(void*);
void* __result34__;
void* __result35__;
memset(&finalizer_54, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result33__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result33__;
    }
    ref_count_52=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_52)--;
    }
    count_53=*ref_count_52;
    if(    !no_free&&(count_53<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_54=protocol_fun;
            finalizer_54(protocol_obj);
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
unsigned long  int* ref_count_55;
unsigned long  int count_56;
void (*finalizer_57)(void*);
void* __result38__;
void* __result39__;
memset(&finalizer_57, 0, sizeof(void (*)(void*)));
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
    ref_count_55=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_55)--;
    }
    count_56=*ref_count_55;
    if(    !no_free&&(count_56<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_57=protocol_fun;
            finalizer_57(protocol_obj);
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
void (*finalizer_58)(void*);
void (*finalizer_59)(void*);
unsigned long  int* ref_count_60;
unsigned long  int count_61;
void (*finalizer_62)(void*);
void (*finalizer_63)(void*);
memset(&finalizer_58, 0, sizeof(void (*)(void*)));
memset(&finalizer_59, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
memset(&finalizer_63, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_58=protocol_fun;
                finalizer_58(protocol_obj);
            }
            finalizer_59=fun;
            finalizer_59(mem);
        }
    }
    else {
        ref_count_60=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_60)--;
        }
        count_61=*ref_count_60;
        if(        !no_free&&(count_61<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_62=protocol_fun;
                    finalizer_62(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_63=fun;
                    finalizer_63(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_64)(void*);
void (*finalizer_65)(void*);
unsigned long  int* ref_count_66;
unsigned long  int count_67;
void (*finalizer_68)(void*);
void (*finalizer_69)(void*);
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
memset(&finalizer_69, 0, sizeof(void (*)(void*)));
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
                finalizer_64=protocol_fun;
                finalizer_64(protocol_obj);
            }
            finalizer_65=fun;
            finalizer_65(mem);
        }
    }
    else {
        ref_count_66=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_66)--;
        }
        count_67=*ref_count_66;
        if(        !no_free&&(count_67<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_68=protocol_fun;
                    finalizer_68(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_69=fun;
                    finalizer_69(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_70)(void*);
unsigned long  int* ref_count_71;
unsigned long  int count_72;
void (*finalizer_73)(void*);
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
memset(&finalizer_73, 0, sizeof(void (*)(void*)));
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
            finalizer_70=fun;
            finalizer_70(mem);
        }
    }
    else {
        ref_count_71=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_71)--;
        }
        count_72=*ref_count_71;
        if(        !no_free&&(count_72<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    finalizer_73=fun;
                    finalizer_73(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result40__;
int len_74;
void* __right_value42 = (void*)0;
char* result_75;
char* __result41__;
    if(    str==((void*)0)) {
        __result40__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result40__;
    }
    len_74=strlen(str)+1;
    result_75=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_74)), "/usr/local/include/comelang-pico.h", 3564, "char"));
    strncpy(result_75,str,len_74);
    __result41__ = gComeFunResultObject = __result_obj__ = result_75;
    /* U13 */result_75 = come_decrement_ref_count2(result_75, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result41__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_76;
int i_77;
    found_76=(_Bool)0;
    for(    i_77=0;    i_77<len;    i_77++    ){
        if(        array[i_77]==element) {
            found_76=(_Bool)1;
            break;
        }
    }
    return found_76;
}

char* bool_to_string(_Bool self){
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
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3653, "char"));
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
char* old_buf_79;
int old_len_80;
int new_size_81;
void* __right_value60 = (void*)0;
char* __dec_obj13;
struct buffer* __result59__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result58__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result58__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_79=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3713, "char"));
        memcpy(old_buf_79,self->buf,self->size);
        old_len_80=self->len;
        new_size_81=(self->size+size+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_81)), "/usr/local/include/comelang-pico.h", 3717, "char"));
        /*G*/ __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_79,old_len_80);
        self->buf[old_len_80]=0;
        self->size=new_size_81;
        /* U13 */old_buf_79 = come_decrement_ref_count2(old_buf_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
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
char* old_buf_82;
int old_len_83;
int new_size_84;
void* __right_value62 = (void*)0;
char* __dec_obj14;
struct buffer* __result61__;
    if(    self==((void*)0)) {
        __result60__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result60__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_82=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang-pico.h", 3736, "char*"));
        old_len_83=self->len;
        new_size_84=(self->size+10+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_84)), "/usr/local/include/comelang-pico.h", 3740, "char"));
        /*G*/ __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_82,old_len_83);
        self->buf[old_len_83]=0;
        self->size=new_size_84;
        /* U13 */old_buf_82 = come_decrement_ref_count2(old_buf_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
int size_85;
void* __right_value63 = (void*)0;
char* old_buf_86;
int old_len_87;
int new_size_88;
void* __right_value64 = (void*)0;
char* __dec_obj15;
struct buffer* __result63__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result62__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result62__;
    }
    size_85=strlen(mem);
    if(    self->len+size_85+1+1>=self->size) {
        old_buf_86=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3762, "char"));
        memcpy(old_buf_86,self->buf,self->size);
        old_len_87=self->len;
        new_size_88=(self->size+size_85+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_88)), "/usr/local/include/comelang-pico.h", 3766, "char"));
        /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_86,old_len_87);
        self->buf[old_len_87]=0;
        self->size=new_size_88;
        /* U13 */old_buf_86 = come_decrement_ref_count2(old_buf_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_85);
    self->len+=size_85;
    self->buf[self->len]=0;
    __result63__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result63__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result64__;
va_list args_89;
char* result_90;
int len_91;
struct buffer* __result65__;
void* __right_value65 = (void*)0;
char* mem_92;
int size_93;
void* __right_value66 = (void*)0;
char* old_buf_94;
int old_len_95;
int new_size_96;
void* __right_value67 = (void*)0;
char* __dec_obj16;
struct buffer* __result66__;
memset(&args_89, 0, sizeof(va_list));
result_90 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result64__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result64__;
    }
    __builtin_va_start(args_89,msg);
    len_91=vasprintf(&result_90,msg,args_89);
    __builtin_va_end(args_89);
    if(    len_91<0) {
        __result65__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    mem_92=(char*)come_increment_ref_count(__builtin_string(result_90));
    size_93=strlen(mem_92);
    if(    self->len+size_93+1+1>=self->size) {
        old_buf_94=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3799, "char"));
        memcpy(old_buf_94,self->buf,self->size);
        old_len_95=self->len;
        new_size_96=(self->size+size_93+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "/usr/local/include/comelang-pico.h", 3803, "char"));
        /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_94,old_len_95);
        self->buf[old_len_95]=0;
        self->size=new_size_96;
        /* U13 */old_buf_94 = come_decrement_ref_count2(old_buf_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_92,size_93);
    self->len+=size_93;
    self->buf[self->len]=0;
    free(result_90);
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */mem_92 = come_decrement_ref_count2(mem_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result67__;
int size_97;
void* __right_value68 = (void*)0;
char* old_buf_98;
int old_len_99;
int new_size_100;
void* __right_value69 = (void*)0;
char* __dec_obj17;
struct buffer* __result68__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result67__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    size_97=strlen(mem)+1;
    if(    self->len+size_97+1+1+1>=self->size) {
        old_buf_98=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3825, "char"));
        memcpy(old_buf_98,self->buf,self->size);
        old_len_99=self->len;
        new_size_100=(self->size+size_97+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_100)), "/usr/local/include/comelang-pico.h", 3829, "char"));
        /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_98,old_len_99);
        self->buf[old_len_99]=0;
        self->size=new_size_100;
        /* U13 */old_buf_98 = come_decrement_ref_count2(old_buf_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_97);
    self->len+=size_97;
    self->buf[self->len]=0;
    self->len++;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result68__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result69__;
int* mem_101;
int size_102;
void* __right_value70 = (void*)0;
char* old_buf_103;
int old_len_104;
int new_size_105;
void* __right_value71 = (void*)0;
char* __dec_obj18;
struct buffer* __result70__;
    if(    self==((void*)0)) {
        __result69__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    mem_101=&value;
    size_102=sizeof(int);
    if(    self->len+size_102+1+1>=self->size) {
        old_buf_103=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3852, "char"));
        memcpy(old_buf_103,self->buf,self->size);
        old_len_104=self->len;
        new_size_105=(self->size+size_102+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_105)), "/usr/local/include/comelang-pico.h", 3856, "char"));
        /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_103,old_len_104);
        self->buf[old_len_104]=0;
        self->size=new_size_105;
        /* U13 */old_buf_103 = come_decrement_ref_count2(old_buf_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_101,size_102);
    self->len+=size_102;
    self->buf[self->len]=0;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result70__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_106;
int size_107;
void* __right_value72 = (void*)0;
char* old_buf_108;
int old_len_109;
int new_size_110;
void* __right_value73 = (void*)0;
char* __dec_obj19;
struct buffer* __result71__;
    mem_106=&value;
    size_107=sizeof(long);
    if(    self->len+size_107+1+1>=self->size) {
        old_buf_108=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3875, "char"));
        memcpy(old_buf_108,self->buf,self->size);
        old_len_109=self->len;
        new_size_110=(self->size+size_107+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_110)), "/usr/local/include/comelang-pico.h", 3879, "char"));
        /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_108,old_len_109);
        self->buf[old_len_109]=0;
        self->size=new_size_110;
        /* U13 */old_buf_108 = come_decrement_ref_count2(old_buf_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_106,size_107);
    self->len+=size_107;
    self->buf[self->len]=0;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result71__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result72__;
short* mem_111;
int size_112;
void* __right_value74 = (void*)0;
char* old_buf_113;
int old_len_114;
int new_size_115;
void* __right_value75 = (void*)0;
char* __dec_obj20;
struct buffer* __result73__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    mem_111=&value;
    size_112=sizeof(short);
    if(    self->len+size_112+1+1>=self->size) {
        old_buf_113=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3902, "char"));
        memcpy(old_buf_113,self->buf,self->size);
        old_len_114=self->len;
        new_size_115=(self->size+size_112+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_115)), "/usr/local/include/comelang-pico.h", 3906, "char"));
        /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_113,old_len_114);
        self->buf[old_len_114]=0;
        self->size=new_size_115;
        /* U13 */old_buf_113 = come_decrement_ref_count2(old_buf_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_111,size_112);
    self->len+=size_112;
    self->buf[self->len]=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result73__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result74__;
int len_116;
int new_size_117;
void* __right_value76 = (void*)0;
char* __dec_obj21;
int i_118;
struct buffer* __result75__;
    if(    self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    len_116=self->len;
    len_116=(len_116+3)&~3;
    if(    len_116>=self->size) {
        new_size_117=(self->size+1+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_117)), "/usr/local/include/comelang-pico.h", 3930, "char"));
        /*G*/ __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_117;
    }
    for(    i_118=self->len;    i_118<len_116;    i_118++    ){
        self->buf[i_118]=0;
    }
    self->len=len_116;
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
struct buffer* result_119;
struct buffer* __result76__;
struct buffer* __result77__;
    result_119=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 3960, "buffer"))));
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = result_119;
        /*i*/come_call_finalizer3(result_119,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    buffer_append_str(result_119,self);
    __result77__ = gComeFunResultObject = __result_obj__ = result_119;
    /*i*/come_call_finalizer3(result_119,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* result_120;
struct buffer* __result78__;
struct buffer* __result79__;
    result_120=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 3973, "buffer"))));
    if(    self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = result_120;
        /*i*/come_call_finalizer3(result_120,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    buffer_append_str(result_120,self);
    __result79__ = gComeFunResultObject = __result_obj__ = result_120;
    /*i*/come_call_finalizer3(result_120,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
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
void* __right_value83 = (void*)0;
char* __result82__;
int len_121;
void* __right_value84 = (void*)0;
char* result_122;
char* __result83__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value83=__builtin_string("")));
        /* U11 */__right_value83 = come_decrement_ref_count2(__right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    len_121=strlen(self)+strlen(right);
    result_122=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_121+1)), "/usr/local/include/comelang-pico.h", 4200, "char"));
    strncpy(result_122,self,len_121+1);
    strncat(result_122,right,len_121+1);
    __result83__ = gComeFunResultObject = __result_obj__ = result_122;
    /* U13 */result_122 = come_decrement_ref_count2(result_122, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
char* __result84__;
int len_123;
void* __right_value86 = (void*)0;
char* result_124;
char* __result85__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result84__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value85=__builtin_string("")));
        /* U11 */__right_value85 = come_decrement_ref_count2(__right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    len_123=strlen(self)+strlen(right);
    result_124=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_123+1)), "/usr/local/include/comelang-pico.h", 4215, "char"));
    strncpy(result_124,self,len_123+1);
    strncat(result_124,right,len_123+1);
    __result85__ = gComeFunResultObject = __result_obj__ = result_124;
    /* U13 */result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
char* __result86__;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct buffer* buf_125;
int i_126;
void* __right_value90 = (void*)0;
char* __result87__;
    if(    self==((void*)0)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value87=__builtin_string("")));
        /* U11 */__right_value87 = come_decrement_ref_count2(__right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4228, "buffer"))));
    for(    i_126=0;    i_126<right;    i_126++    ){
        buffer_append_str(buf_125,self);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value90=buffer_to_string(buf_125)));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct buffer* buf_127;
int i_128;
void* __right_value94 = (void*)0;
char* __result89__;
    if(    self==((void*)0)) {
        __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value91=__builtin_string("")));
        /* U11 */__right_value91 = come_decrement_ref_count2(__right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4242, "buffer"))));
    for(    i_128=0;    i_128<right;    i_128++    ){
        buffer_append_str(buf_127,self);
    }
    __result89__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value94=buffer_to_string(buf_127)));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value94 = come_decrement_ref_count2(__right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
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
int result_129;
char* p_130;
    if(    value==((void*)0)) {
        return 0;
    }
    result_129=0;
    p_130=value;
    while(*p_130) {
        result_129+=(*p_130);
        p_130++;
    }
    return result_129;
}

unsigned int charp_get_hash_key(char* value){
int result_131;
char* p_132;
    if(    value==((void*)0)) {
        return 0;
    }
    result_131=0;
    p_132=value;
    while(*p_132) {
        result_131+=(*p_132);
        p_132++;
    }
    return result_131;
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

_Bool xiswalpha(unsigned short int c){
_Bool result_133;
    result_133=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_133;
}

_Bool xiswblank(unsigned short int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned short int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned short int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_134;
    result_134=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_134;
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
_Bool result_135;
    result_135=(c>=32&&c<=126);
    return result_135;
}

_Bool xiswascii(unsigned short int c){
_Bool result_136;
    result_136=(c>=32&&c<=126);
    return result_136;
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
int len_137;
void* __right_value98 = (void*)0;
char* result_138;
int i_139;
char* __result95__;
    if(    str==((void*)0)) {
        __result94__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value97=__builtin_string("")));
        /* U11 */__right_value97 = come_decrement_ref_count2(__right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    len_137=strlen(str);
    result_138=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_137+1)), "/usr/local/include/comelang-pico.h", 4459, "char"));
    for(    i_139=0;    i_139<len_137;    i_139++    ){
        result_138[i_139]=str[len_137-i_139-1];
    }
    result_138[len_137]=0;
    __result95__ = gComeFunResultObject = __result_obj__ = result_138;
    /* U13 */result_138 = come_decrement_ref_count2(result_138, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
char* __result96__;
int len_140;
void* __right_value100 = (void*)0;
char* result_141;
int i_142;
char* __result97__;
    if(    str==((void*)0)) {
        __result96__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value99=__builtin_string("")));
        /* U11 */__right_value99 = come_decrement_ref_count2(__right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    len_140=strlen(str);
    result_141=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_140+1)), "/usr/local/include/comelang-pico.h", 4476, "char"));
    for(    i_142=0;    i_142<len_140;    i_142++    ){
        result_141[i_142]=str[len_140-i_142-1];
    }
    result_141[len_140]=0;
    __result97__ = gComeFunResultObject = __result_obj__ = result_141;
    /* U13 */result_141 = come_decrement_ref_count2(result_141, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
char* __result98__;
int len_143;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result99__;
void* __right_value104 = (void*)0;
char* __result100__;
void* __right_value105 = (void*)0;
char* __result101__;
void* __right_value106 = (void*)0;
char* result_144;
char* __result102__;
    if(    str==((void*)0)) {
        __result98__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value101=__builtin_string("")));
        /* U11 */__right_value101 = come_decrement_ref_count2(__right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    len_143=strlen(str);
    if(    head<0) {
        head+=len_143;
    }
    if(    tail<0) {
        tail+=len_143+1;
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
    if(    tail>=len_143) {
        tail=len_143;
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
    result_144=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4521, "char"));
    memcpy(result_144,str+head,tail-head);
    result_144[tail-head]=0;
    __result102__ = gComeFunResultObject = __result_obj__ = result_144;
    /* U13 */result_144 = come_decrement_ref_count2(result_144, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
char* __result103__;
int len_145;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result104__;
void* __right_value110 = (void*)0;
char* __result105__;
void* __right_value111 = (void*)0;
char* __result106__;
void* __right_value112 = (void*)0;
char* result_146;
char* __result107__;
    if(    str==((void*)0)) {
        __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value107=__builtin_string("")));
        /* U11 */__right_value107 = come_decrement_ref_count2(__right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    len_145=strlen(str);
    if(    head<0) {
        head+=len_145;
    }
    if(    tail<0) {
        tail+=len_145+1;
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
    if(    tail>=len_145) {
        tail=len_145;
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
    result_146=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4564, "char"));
    memcpy(result_146,str+head,tail-head);
    result_146[tail-head]=0;
    __result107__ = gComeFunResultObject = __result_obj__ = result_146;
    /* U13 */result_146 = come_decrement_ref_count2(result_146, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result108__;
int len_147;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
char* __result109__;
void* __right_value116 = (void*)0;
char* __result110__;
void* __right_value117 = (void*)0;
char* __result111__;
void* __right_value118 = (void*)0;
char* result_148;
char* __result112__;
    if(    str==((void*)0)) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=__builtin_string("")));
        /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    len_147=strlen(str);
    if(    head<0) {
        head+=len_147;
    }
    if(    tail<0) {
        tail+=len_147+1;
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
    if(    tail>=len_147) {
        tail=len_147;
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
    result_148=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4607, "char"));
    memcpy(result_148,str+head,tail-head);
    result_148[tail-head]=0;
    __result112__ = gComeFunResultObject = __result_obj__ = result_148;
    /* U13 */result_148 = come_decrement_ref_count2(result_148, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result113__;
int len_149;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
char* __result114__;
void* __right_value122 = (void*)0;
char* __result115__;
void* __right_value123 = (void*)0;
char* __result116__;
void* __right_value124 = (void*)0;
char* result_150;
char* __result117__;
    if(    str==((void*)0)) {
        __result113__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("")));
        /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    len_149=strlen(str);
    if(    head<0) {
        head+=len_149;
    }
    if(    tail<0) {
        tail+=len_149+1;
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
    if(    tail>=len_149) {
        tail=len_149;
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
    result_150=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4650, "char"));
    memcpy(result_150,str+head,tail-head);
    result_150[tail-head]=0;
    __result117__ = gComeFunResultObject = __result_obj__ = result_150;
    /* U13 */result_150 = come_decrement_ref_count2(result_150, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result118__;
va_list args_151;
char* result_152;
int len_153;
void* __right_value126 = (void*)0;
char* __result119__;
void* __right_value127 = (void*)0;
char* result2_154;
char* __result120__;
memset(&args_151, 0, sizeof(va_list));
result_152 = (void*)0;
    if(    msg==((void*)0)) {
        __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=__builtin_string("")));
        /* U11 */__right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    __builtin_va_start(args_151,msg);
    len_153=vasprintf(&result_152,msg,args_151);
    __builtin_va_end(args_151);
    if(    len_153<0) {
        __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value126=__builtin_string("")));
        /* U11 */__right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    result2_154=(char*)come_increment_ref_count(__builtin_string(result_152));
    free(result_152);
    __result120__ = gComeFunResultObject = __result_obj__ = result2_154;
    /* U13 */result2_154 = come_decrement_ref_count2(result2_154, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
char* __result121__;
int len_155;
void* __right_value129 = (void*)0;
char* __result122__;
void* __right_value130 = (void*)0;
char* __result123__;
void* __right_value131 = (void*)0;
char* sub_str_156;
void* __right_value132 = (void*)0;
char* __result124__;
    if(    str==((void*)0)) {
        __result121__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value128=__builtin_string("")));
        /* U11 */__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    len_155=strlen(str);
    if(    strcmp(str,"")==0) {
        __result122__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value129=__builtin_string(str)));
        /* U11 */__right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    if(    head<0) {
        head+=len_155;
    }
    if(    tail<0) {
        tail+=len_155+1;
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
    if(    tail>=len_155) {
        tail=len_155;
    }
    sub_str_156=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    memcpy(str+head,sub_str_156,string_length(sub_str_156)+1);
    __result124__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=__builtin_string(str)));
    /* U13 */sub_str_156 = come_decrement_ref_count2(sub_str_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
char* __result125__;
int len_157;
void* __right_value134 = (void*)0;
char* __result126__;
void* __right_value135 = (void*)0;
char* __result127__;
void* __right_value136 = (void*)0;
char* sub_str_158;
void* __right_value137 = (void*)0;
char* __result128__;
    if(    str==((void*)0)) {
        __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value133=__builtin_string("")));
        /* U11 */__right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    len_157=strlen(str);
    if(    strcmp(str,"")==0) {
        __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=__builtin_string(str)));
        /* U11 */__right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    if(    head<0) {
        head+=len_157;
    }
    if(    tail<0) {
        tail+=len_157+1;
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
    if(    tail>=len_157) {
        tail=len_157;
    }
    sub_str_158=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    memcpy(str+head,sub_str_158,string_length(sub_str_158)+1);
    __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value137=__builtin_string(str)));
    /* U13 */sub_str_158 = come_decrement_ref_count2(sub_str_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list$1charph* result_161;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* str_162;
int i_163;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct list$1charph* __result132__;
    if(    self==((void*)0)) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value139=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4761, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    result_161=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4764, "list$1charph"))));
    str_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4766, "buffer"))));
    for(    i_163=0;    i_163<charp_length(self);    i_163++    ){
        if(        self[i_163]==c) {
            list$1charph_push_back(result_161,(char*)come_increment_ref_count(__builtin_string(str_162->buf)));
            buffer_reset(str_162);
        }
        else {
            buffer_append_char(str_162,self[i_163]);
        }
    }
    if(    buffer_length(str_162)!=0) {
        list$1charph_push_back(result_161,(char*)come_increment_ref_count(__builtin_string(str_162->buf)));
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_161;
    /*i*/come_call_finalizer3(result_161,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_162,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_159;
struct list_item$1charph* prev_it_160;
    it_159=self->head;
    while(it_159!=((void*)0)) {
        prev_it_160=it_159;
        it_159=it_159->next;
        /*i*/come_call_finalizer3(prev_it_160,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_164;
char* __dec_obj23;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_165;
char* __dec_obj24;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_166;
char* __dec_obj25;
struct list$1charph* __result131__;
    if(    self->len==0) {
        litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1charph"))));
        litem_164->prev=((void*)0);
        litem_164->next=((void*)0);
        __dec_obj23=litem_164->item;
        litem_164->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_164;
        self->head=litem_164;
    }
    else if(    self->len==1) {
        litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1charph"))));
        litem_165->prev=self->head;
        litem_165->next=((void*)0);
        __dec_obj24=litem_165->item;
        litem_165->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_165;
        self->head->next=litem_165;
    }
    else {
        litem_166=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1charph"))));
        litem_166->prev=self->tail;
        litem_166->next=((void*)0);
        __dec_obj25=litem_166->item;
        litem_166->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_166;
        self->tail=litem_166;
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
struct list$1charph* result_167;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* str_168;
int i_169;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct list$1charph* __result134__;
    if(    self==((void*)0)) {
        __result133__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4787, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value150,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    result_167=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4790, "list$1charph"))));
    str_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4792, "buffer"))));
    for(    i_169=0;    i_169<charp_length(self);    i_169++    ){
        if(        self[i_169]==c) {
            list$1charph_push_back(result_167,(char*)come_increment_ref_count(__builtin_string(str_168->buf)));
            buffer_reset(str_168);
        }
        else {
            buffer_append_char(str_168,self[i_169]);
        }
    }
    if(    buffer_length(str_168)!=0) {
        list$1charph_push_back(result_167,(char*)come_increment_ref_count(__builtin_string(str_168->buf)));
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_167;
    /*i*/come_call_finalizer3(result_167,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value157 = (void*)0;
char* __result135__;
char* p_170;
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
    p_170=path+strlen(path);
    while(p_170>=path) {
        if(        *p_170==47) {
            break;
        }
        else {
            p_170--;
        }
    }
    if(    p_170<path) {
        __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=__builtin_string(path)));
        /* U11 */__right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    else {
        __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value159=__builtin_string(p_170+1)));
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
char* path2_171;
char* p_172;
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
    path2_171=(char*)come_increment_ref_count(xbasename(path));
    p_172=path2_171+strlen(path2_171);
    while(p_172>=path2_171) {
        if(        *p_172==46) {
            break;
        }
        else {
            p_172--;
        }
    }
    if(    p_172<path2_171) {
        __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=__builtin_string(path2_171)));
        /* U13 */path2_171 = come_decrement_ref_count2(path2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    else {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value164=string_substring(path2_171,0,p_172-path2_171)));
        /* U13 */path2_171 = come_decrement_ref_count2(path2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
    /* U13 */path2_171 = come_decrement_ref_count2(path2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
char* __result143__;
char* p_173;
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
    p_173=path+strlen(path);
    while(p_173>=path) {
        if(        *p_173==46) {
            break;
        }
        else {
            p_173--;
        }
    }
    if(    p_173<path) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string(path)));
        /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    else {
        __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string(p_173+1)));
        /* U11 */__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=__builtin_string("")));
    /* U11 */__right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
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
void* __right_value170 = (void*)0;
char* __result147__;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct buffer* buf_174;
int size_176;
void* __right_value173 = (void*)0;
char* __result148__;
    if(    f==((void*)0)) {
        __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value170=__builtin_string("")));
        /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    buf_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5059, "buffer"))));
    while(1) {
        char buf2_175[1024];
        memset(&buf2_175, 0, sizeof(char)        *(1024)        );
        size_176=fread(buf2_175,1,1024,f);
        buffer_append(buf_174,buf2_175,size_176);
        if(        size_176<1024) {
            break;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=buffer_to_string(buf_174)));
    /*i*/come_call_finalizer3(buf_174,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
int result_177;
    if(    f==((void*)0)) {
        return -1;
    }
    result_177=fclose(f);
    if(    result_177<0) {
        return result_177;
    }
    return result_177;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct __sFILE* __result149__;
va_list args_179;
int result_180;
struct __sFILE* __result150__;
struct __sFILE* __result151__;
memset(&args_179, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    char msg2_178[1024*2*2*2];
    memset(&msg2_178, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_179,msg);
    vsnprintf(msg2_178,1024*2*2*2,msg,args_179);
    __builtin_va_end(args_179);
    result_180=fprintf(f,"%s",msg2_178);
    if(    result_180<0) {
        __result150__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    __result151__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result151__;
}

int string_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_181;
int result_182;
int result2_183;
f_181 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_181=fopen(file_name,"a");
    }
    else {
        f_181=fopen(file_name,"w");
    }
    if(    f_181==((void*)0)) {
        return -1;
    }
    result_182=fwrite(self,strlen(self),1,f_181);
    if(    result_182<0) {
        return result_182;
    }
    result2_183=fclose(f_181);
    if(    result2_183<0) {
        return result2_183;
    }
    return result_182;
}

int charp_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_184;
int result_185;
int result2_186;
f_184 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_184=fopen(file_name,"a");
    }
    else {
        f_184=fopen(file_name,"w");
    }
    if(    f_184==((void*)0)) {
        return -1;
    }
    result_185=fwrite(self,strlen(self),1,f_184);
    if(    result_185<0) {
        return result_185;
    }
    result2_186=fclose(f_184);
    if(    result2_186<0) {
        return result2_186;
    }
    return result_185;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value174 = (void*)0;
char* __result152__;
struct __sFILE* f_187;
void* __right_value175 = (void*)0;
char* __result153__;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct buffer* buf_188;
int size_190;
void* __right_value178 = (void*)0;
char* result_191;
int result2_192;
void* __right_value179 = (void*)0;
char* __result154__;
char* __result155__;
    if(    file_name==((void*)0)) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value174=__builtin_string("")));
        /* U11 */__right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    f_187=fopen(file_name,"r");
    if(    f_187==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value175=__builtin_string("")));
        /* U11 */__right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    buf_188=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5199, "buffer"))));
    while(1) {
        char buf2_189[1024];
        memset(&buf2_189, 0, sizeof(char)        *(1024)        );
        size_190=fread(buf2_189,1,1024,f_187);
        buffer_append(buf_188,buf2_189,size_190);
        if(        size_190<1024) {
            break;
        }
    }
    result_191=(char*)come_increment_ref_count(buffer_to_string(buf_188));
    result2_192=fclose(f_187);
    if(    result2_192<0) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    __result155__ = gComeFunResultObject = __result_obj__ = result_191;
    /*i*/come_call_finalizer3(buf_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
char* __result156__;
struct __sFILE* f_193;
void* __right_value181 = (void*)0;
char* __result157__;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct buffer* buf_194;
int size_196;
void* __right_value184 = (void*)0;
char* result_197;
int result2_198;
void* __right_value185 = (void*)0;
char* __result158__;
char* __result159__;
    if(    file_name==((void*)0)) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=__builtin_string("")));
        /* U11 */__right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    f_193=fopen(file_name,"r");
    if(    f_193==((void*)0)) {
        __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value181=__builtin_string("")));
        /* U11 */__right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    buf_194=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5236, "buffer"))));
    while(1) {
        char buf2_195[1024];
        memset(&buf2_195, 0, sizeof(char)        *(1024)        );
        size_196=fread(buf2_195,1,1024,f_193);
        buffer_append(buf_194,buf2_195,size_196);
        if(        size_196<1024) {
            break;
        }
    }
    result_197=(char*)come_increment_ref_count(buffer_to_string(buf_194));
    result2_198=fclose(f_193);
    if(    result2_198<0) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_194,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_197 = come_decrement_ref_count2(result_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    __result159__ = gComeFunResultObject = __result_obj__ = result_197;
    /*i*/come_call_finalizer3(buf_194,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_197 = come_decrement_ref_count2(result_197, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct list$1charph* result_199;
struct list$1charph* __result160__;
void* __right_value188 = (void*)0;
struct list$1charph* __result161__;
    result_199=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 5263, "list$1charph"))));
    if(    f==((void*)0)) {
        __result160__ = gComeFunResultObject = __result_obj__ = result_199;
        /*i*/come_call_finalizer3(result_199,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    while(1) {
        char buf_200[1024];
        memset(&buf_200, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_200,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_199,(char*)come_increment_ref_count(__builtin_string(buf_200)));
    }
    __result161__ = gComeFunResultObject = __result_obj__ = result_199;
    /*i*/come_call_finalizer3(result_199,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
struct __sFILE* f_201;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_201=fopen(path,mode);
    if(    f_201) {
        block(parent,f_201);
        fclose(f_201);
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
char* msg2_202;
va_list args_203;
void* __right_value194 = (void*)0;
char* __result167__;
msg2_202 = (void*)0;
memset(&args_203, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string("")));
        /* U11 */__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    __builtin_va_start(args_203,self);
    vasprintf(&msg2_202,self,args_203);
    __builtin_va_end(args_203);
    printf("%s",msg2_202);
    free(msg2_202);
    __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string(self)));
    /* U11 */__right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value195 = (void*)0;
char* __result168__;
char* msg2_204;
va_list args_205;
void* __right_value196 = (void*)0;
char* __result169__;
msg2_204 = (void*)0;
memset(&args_205, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value195=__builtin_string("")));
        /* U11 */__right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    __builtin_va_start(args_205,self);
    vasprintf(&msg2_204,self,args_205);
    __builtin_va_end(args_205);
    printf("%s",msg2_204);
    free(msg2_204);
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
int i_206;
    for(    i_206=0;    i_206<self;    i_206++    ){
        block(parent,i_206);
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

struct integer* bool_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct integer* __result173__;
    __result173__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value200=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5430, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value200,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct integer* char_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct integer* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value202=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5435, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value202,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

struct integer* short_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct integer* __result175__;
    __result175__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value204=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5440, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value204,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

struct integer* int_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct integer* __result176__;
    __result176__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value206=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5445, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value206,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct integer* __result177__;
    __result177__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value208=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5450, "integer")),self)));
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
    __result180__ = gComeFunResultObject = __result_obj__ = ((struct floating*)(__right_value211=floating_initialize((struct floating*)come_increment_ref_count((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "/usr/local/include/comelang-pico.h", 5590, "floating")),self)));
    /*g*/come_call_finalizer3(__right_value211,floating_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

struct floating* double_to_floating(double self){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct floating* __result181__;
    __result181__ = gComeFunResultObject = __result_obj__ = ((struct floating*)(__right_value213=floating_initialize((struct floating*)come_increment_ref_count((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "/usr/local/include/comelang-pico.h", 5595, "floating")),self)));
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
    return (_Bool)0;
}

struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct buffer* buf_207;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct smart_pointer$1char* __result183__;
    buf_207=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5722, "buffer"))));
    buffer_append(buf_207,(char*)self,sizeof(char)*len);
    __result183__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value218=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 5724, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_207))));
    /*i*/come_call_finalizer3(buf_207,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value218,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct buffer* buf_208;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct smart_pointer$1charp* __result185__;
    buf_208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5729, "buffer"))));
    buffer_append(buf_208,(char*)self,sizeof(char*)*len);
    __result185__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value222=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang-pico.h", 5731, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_208))));
    /*i*/come_call_finalizer3(buf_208,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct buffer* buf_209;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct smart_pointer$1short* __result186__;
    buf_209=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5736, "buffer"))));
    buffer_append(buf_209,(char*)self,sizeof(short)*len);
    __result186__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value226=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang-pico.h", 5738, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_209))));
    /*i*/come_call_finalizer3(buf_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value226,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct buffer* buf_210;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct smart_pointer$1int* __result187__;
    buf_210=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5743, "buffer"))));
    buffer_append(buf_210,(char*)self,sizeof(int)*len);
    __result187__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value230=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang-pico.h", 5745, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_210))));
    /*i*/come_call_finalizer3(buf_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value230,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_211;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct smart_pointer$1long* __result188__;
    buf_211=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5750, "buffer"))));
    buffer_append(buf_211,(char*)self,sizeof(long)*len);
    __result188__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value234=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang-pico.h", 5752, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_211))));
    /*i*/come_call_finalizer3(buf_211,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value234,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct buffer* buf_212;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct smart_pointer$1float* __result190__;
    buf_212=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5757, "buffer"))));
    buffer_append(buf_212,(char*)self,sizeof(float)*len);
    __result190__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value238=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang-pico.h", 5759, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_212))));
    /*i*/come_call_finalizer3(buf_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct buffer* buf_213;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct smart_pointer$1double* __result192__;
    buf_213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5764, "buffer"))));
    buffer_append(buf_213,(char*)self,sizeof(double)*len);
    __result192__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value242=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang-pico.h", 5766, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_213))));
    /*i*/come_call_finalizer3(buf_213,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    __result195__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value247=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang-pico.h", 5771, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value247,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_214;
struct list$1char* __result194__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_214=0;    i_214<num_value;    i_214++    ){
        list$1char_push_back(self,values[i_214]);
    }
    __result194__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
struct list_item$1char* litem_215;
void* __right_value245 = (void*)0;
struct list_item$1char* litem_216;
void* __right_value246 = (void*)0;
struct list_item$1char* litem_217;
struct list$1char* __result193__;
    if(    self->len==0) {
        litem_215=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value244=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1char"))));
        litem_215->prev=((void*)0);
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head=litem_215;
    }
    else if(    self->len==1) {
        litem_216=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value245=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1char"))));
        litem_216->prev=self->head;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head->next=litem_216;
    }
    else {
        litem_217=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value246=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1char"))));
        litem_217->prev=self->tail;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail->next=litem_217;
        self->tail=litem_217;
    }
    self->len++;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_218;
struct list_item$1char* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        /*i*/come_call_finalizer3(prev_it_219,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1charp* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value252=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang-pico.h", 5776, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value252,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_220;
struct list$1charp* __result197__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_220=0;    i_220<num_value;    i_220++    ){
        list$1charp_push_back(self,values[i_220]);
    }
    __result197__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct list_item$1charp* litem_221;
void* __right_value250 = (void*)0;
struct list_item$1charp* litem_222;
void* __right_value251 = (void*)0;
struct list_item$1charp* litem_223;
struct list$1charp* __result196__;
    if(    self->len==0) {
        litem_221=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value249=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1charp"))));
        litem_221->prev=((void*)0);
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail=litem_221;
        self->head=litem_221;
    }
    else if(    self->len==1) {
        litem_222=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value250=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1charp"))));
        litem_222->prev=self->head;
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail=litem_222;
        self->head->next=litem_222;
    }
    else {
        litem_223=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value251=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1charp"))));
        litem_223->prev=self->tail;
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail->next=litem_223;
        self->tail=litem_223;
    }
    self->len++;
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_224;
struct list_item$1charp* prev_it_225;
    it_224=self->head;
    while(it_224!=((void*)0)) {
        prev_it_225=it_224;
        it_224=it_224->next;
        /*i*/come_call_finalizer3(prev_it_225,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1short* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value257=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang-pico.h", 5781, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value257,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_226;
struct list$1short* __result200__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_226=0;    i_226<num_value;    i_226++    ){
        list$1short_push_back(self,values[i_226]);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
struct list_item$1short* litem_227;
void* __right_value255 = (void*)0;
struct list_item$1short* litem_228;
void* __right_value256 = (void*)0;
struct list_item$1short* litem_229;
struct list$1short* __result199__;
    if(    self->len==0) {
        litem_227=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value254=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1short"))));
        litem_227->prev=((void*)0);
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail=litem_227;
        self->head=litem_227;
    }
    else if(    self->len==1) {
        litem_228=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value255=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1short"))));
        litem_228->prev=self->head;
        litem_228->next=((void*)0);
        litem_228->item=item;
        self->tail=litem_228;
        self->head->next=litem_228;
    }
    else {
        litem_229=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value256=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1short"))));
        litem_229->prev=self->tail;
        litem_229->next=((void*)0);
        litem_229->item=item;
        self->tail->next=litem_229;
        self->tail=litem_229;
    }
    self->len++;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_230;
struct list_item$1short* prev_it_231;
    it_230=self->head;
    while(it_230!=((void*)0)) {
        prev_it_231=it_230;
        it_230=it_230->next;
        /*i*/come_call_finalizer3(prev_it_231,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1int* __result204__;
    __result204__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value262=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang-pico.h", 5786, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value262,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_232;
struct list$1int* __result203__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        list$1int_push_back(self,values[i_232]);
    }
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1int* litem_233;
void* __right_value260 = (void*)0;
struct list_item$1int* litem_234;
void* __right_value261 = (void*)0;
struct list_item$1int* litem_235;
struct list$1int* __result202__;
    if(    self->len==0) {
        litem_233=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value259=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1int"))));
        litem_233->prev=((void*)0);
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail=litem_233;
        self->head=litem_233;
    }
    else if(    self->len==1) {
        litem_234=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value260=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1int"))));
        litem_234->prev=self->head;
        litem_234->next=((void*)0);
        litem_234->item=item;
        self->tail=litem_234;
        self->head->next=litem_234;
    }
    else {
        litem_235=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value261=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1int"))));
        litem_235->prev=self->tail;
        litem_235->next=((void*)0);
        litem_235->item=item;
        self->tail->next=litem_235;
        self->tail=litem_235;
    }
    self->len++;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_236;
struct list_item$1int* prev_it_237;
    it_236=self->head;
    while(it_236!=((void*)0)) {
        prev_it_237=it_236;
        it_236=it_236->next;
        /*i*/come_call_finalizer3(prev_it_237,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1long* __result207__;
    __result207__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value267=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang-pico.h", 5791, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value267,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_238;
struct list$1long* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_238=0;    i_238<num_value;    i_238++    ){
        list$1long_push_back(self,values[i_238]);
    }
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1long* litem_239;
void* __right_value265 = (void*)0;
struct list_item$1long* litem_240;
void* __right_value266 = (void*)0;
struct list_item$1long* litem_241;
struct list$1long* __result205__;
    if(    self->len==0) {
        litem_239=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value264=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1long"))));
        litem_239->prev=((void*)0);
        litem_239->next=((void*)0);
        litem_239->item=item;
        self->tail=litem_239;
        self->head=litem_239;
    }
    else if(    self->len==1) {
        litem_240=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value265=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1long"))));
        litem_240->prev=self->head;
        litem_240->next=((void*)0);
        litem_240->item=item;
        self->tail=litem_240;
        self->head->next=litem_240;
    }
    else {
        litem_241=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value266=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1long"))));
        litem_241->prev=self->tail;
        litem_241->next=((void*)0);
        litem_241->item=item;
        self->tail->next=litem_241;
        self->tail=litem_241;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_242;
struct list_item$1long* prev_it_243;
    it_242=self->head;
    while(it_242!=((void*)0)) {
        prev_it_243=it_242;
        it_242=it_242->next;
        /*i*/come_call_finalizer3(prev_it_243,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1float* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value272=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang-pico.h", 5796, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value272,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_244;
struct list$1float* __result209__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_244=0;    i_244<num_value;    i_244++    ){
        list$1float_push_back(self,values[i_244]);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1float* litem_245;
void* __right_value270 = (void*)0;
struct list_item$1float* litem_246;
void* __right_value271 = (void*)0;
struct list_item$1float* litem_247;
struct list$1float* __result208__;
    if(    self->len==0) {
        litem_245=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value269=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1float"))));
        litem_245->prev=((void*)0);
        litem_245->next=((void*)0);
        litem_245->item=item;
        self->tail=litem_245;
        self->head=litem_245;
    }
    else if(    self->len==1) {
        litem_246=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value270=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1float"))));
        litem_246->prev=self->head;
        litem_246->next=((void*)0);
        litem_246->item=item;
        self->tail=litem_246;
        self->head->next=litem_246;
    }
    else {
        litem_247=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value271=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1float"))));
        litem_247->prev=self->tail;
        litem_247->next=((void*)0);
        litem_247->item=item;
        self->tail->next=litem_247;
        self->tail=litem_247;
    }
    self->len++;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_248;
struct list_item$1float* prev_it_249;
    it_248=self->head;
    while(it_248!=((void*)0)) {
        prev_it_249=it_248;
        it_248=it_248->next;
        /*i*/come_call_finalizer3(prev_it_249,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1double* __result213__;
    __result213__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value277=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang-pico.h", 5801, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value277,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_250;
struct list$1double* __result212__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_250=0;    i_250<num_value;    i_250++    ){
        list$1double_push_back(self,values[i_250]);
    }
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1double* litem_251;
void* __right_value275 = (void*)0;
struct list_item$1double* litem_252;
void* __right_value276 = (void*)0;
struct list_item$1double* litem_253;
struct list$1double* __result211__;
    if(    self->len==0) {
        litem_251=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value274=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 178, "list_item$1double"))));
        litem_251->prev=((void*)0);
        litem_251->next=((void*)0);
        litem_251->item=item;
        self->tail=litem_251;
        self->head=litem_251;
    }
    else if(    self->len==1) {
        litem_252=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value275=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 188, "list_item$1double"))));
        litem_252->prev=self->head;
        litem_252->next=((void*)0);
        litem_252->item=item;
        self->tail=litem_252;
        self->head->next=litem_252;
    }
    else {
        litem_253=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value276=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 198, "list_item$1double"))));
        litem_253->prev=self->tail;
        litem_253->next=((void*)0);
        litem_253->item=item;
        self->tail->next=litem_253;
        self->tail=litem_253;
    }
    self->len++;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_254;
struct list_item$1double* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        /*i*/come_call_finalizer3(prev_it_255,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
void* __right_value280 = (void*)0;
struct vector$1char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value280=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang-pico.h", 5806, "vector$1char")),len,self)));
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
    self->items=((char*)(__right_value279=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 972, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
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
    __result217__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value283=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang-pico.h", 5811, "vector$1charp")),len,self)));
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
    self->items=((char**)(__right_value282=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 972, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_257;
    if(    0) {
        for(        i_257=0;        i_257<self->len;        i_257++        ){
            /* U13 */self->items[i_257] = come_decrement_ref_count2(self->items[i_257], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    __result219__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value286=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang-pico.h", 5816, "vector$1short")),len,self)));
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
    self->items=((short*)(__right_value285=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 972, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_258;
    if(    0) {
        for(        i_258=0;        i_258<self->len;        i_258++        ){
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
    __result221__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value289=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang-pico.h", 5821, "vector$1int")),len,self)));
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
    self->items=((int*)(__right_value288=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 972, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_259;
    if(    0) {
        for(        i_259=0;        i_259<self->len;        i_259++        ){
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
    __result223__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value292=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang-pico.h", 5826, "vector$1long")),len,self)));
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
    self->items=((long*)(__right_value291=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 972, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_260;
    if(    0) {
        for(        i_260=0;        i_260<self->len;        i_260++        ){
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
    __result225__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value295=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang-pico.h", 5831, "vector$1float")),len,self)));
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
    self->items=((float*)(__right_value294=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 972, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_261;
    if(    0) {
        for(        i_261=0;        i_261<self->len;        i_261++        ){
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
    __result227__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value298=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang-pico.h", 5836, "vector$1double")),len,self)));
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
    self->items=((double*)(__right_value297=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 972, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_262;
    if(    0) {
        for(        i_262=0;        i_262<self->len;        i_262++        ){
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
_Bool result_263;
int i_264;
    result_263=(_Bool)0;
    for(    i_264=0;    i_264<len;    i_264++    ){
        if(        strncmp(self[i_264],str,strlen(self[i_264]))==0) {
            result_263=(_Bool)1;
            break;
        }
    }
    return result_263;
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
int __list_values1___266[10];
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1int* li_267;
struct list$1int* o2_saved_268;
int it_271;
int i_274;
int __result231__;
    come_heap_init(0, 0, 0);
    const uint LED_PIN_265=25;
    li_267=(struct list$1int*)come_increment_ref_count((__list_values1___266[0]=1,
__list_values1___266[1]=2,
__list_values1___266[2]=3,
__list_values1___266[3]=4,
__list_values1___266[4]=5,
__list_values1___266[5]=6,
__list_values1___266[6]=7,
__list_values1___266[7]=8,
__list_values1___266[8]=9,
__list_values1___266[9]=10,
list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "led.c", 15, "struct list$1int")),10,__list_values1___266)));
    for(    o2_saved_268=(struct list$1int*)come_increment_ref_count((li_267)),it_271=list$1int_begin((o2_saved_268));    !list$1int_end((o2_saved_268));    it_271=list$1int_next((o2_saved_268))    ){
        for(        i_274=0;        i_274<5;        i_274++        ){
        }
    }
    /*i*/come_call_finalizer3(o2_saved_268,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    while((_Bool)1) {
    }
    __result231__ = 0;
    /*i*/come_call_finalizer3(li_267,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result231__;
}

static int list$1int_begin(struct list$1int* self){
int result_269;
int result_270;
memset(&result_269, 0, sizeof(int));
memset(&result_270, 0, sizeof(int));
    if(    self==((void*)0)) {
        memset(&result_269,0,sizeof(int));
        return result_269;
    }
    self->it=self->head;
    if(    self->it) {
        return self->it->item;
    }
    memset(&result_270,0,sizeof(int));
    return result_270;
}

static _Bool list$1int_end(struct list$1int* self){
    return self==((void*)0)||self->it==((void*)0);
}

static int list$1int_next(struct list$1int* self){
int result_272;
int result_273;
memset(&result_272, 0, sizeof(int));
memset(&result_273, 0, sizeof(int));
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_272,0,sizeof(int));
        return result_272;
    }
    self->it=self->it->next;
    if(    self->it) {
        return self->it->item;
    }
    memset(&result_273,0,sizeof(int));
    return result_273;
}

