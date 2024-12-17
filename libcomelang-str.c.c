/// previous struct definition ///
struct __locale_struct;

struct real_pcre8_or_16;

struct real_pcre32;

struct real_pcre_jit_stack;

struct real_pcre16_jit_stack;

struct real_pcre32_jit_stack;

struct tm;

/// struct definition ///
typedef unsigned long  int size_t;

typedef long ssize_t;

typedef long off_t;

typedef struct _IO_FILE FILE;

typedef __builtin_va_list va_list;

typedef __builtin_va_list __isoc_va_list;

union _G_fpos64_t
{
char __opaque[16];
long  long __lldata;
double __align;
};

typedef union _G_fpos64_t fpos_t;

extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long*,int);

typedef int (*cookie_close_function_t)(void*);

struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long  int);
    long (*write)(void*,const char*,unsigned long  int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX1 div_t;

struct anonymous_typeX2
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX2 ldiv_t;

struct anonymous_typeX3
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX3 lldiv_t;

typedef struct __locale_struct* locale_t;

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
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

extern char* program_invocation_short_name;
extern char* program_invocation_name;
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

typedef unsigned int wint_t;

typedef unsigned long  int wctype_t;

struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};

typedef struct __mbstate_t mbstate_t;

typedef unsigned int* wstring;

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

struct tuple2$2come_regexphvoidp
{
    struct come_regex* v1;
    void* v2;
};

// source head

// header function
struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);
struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);
int fclose(struct _IO_FILE* anonymous_var_nameX6);
int remove(const char* anonymous_var_nameX7);
int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);
int feof(struct _IO_FILE* anonymous_var_nameX10);
int ferror(struct _IO_FILE* anonymous_var_nameX11);
int fflush(struct _IO_FILE* anonymous_var_nameX12);
void clearerr(struct _IO_FILE* anonymous_var_nameX13);
int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);
long ftell(struct _IO_FILE* anonymous_var_nameX17);
void rewind(struct _IO_FILE* anonymous_var_nameX18);
int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);
int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);
unsigned long  int fread(void* anonymous_var_nameX23, unsigned long  int anonymous_var_nameX24, unsigned long  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long  int fwrite(const void* anonymous_var_nameX27, unsigned long  int anonymous_var_nameX28, unsigned long  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
int fgetc(struct _IO_FILE* anonymous_var_nameX31);
int getc(struct _IO_FILE* anonymous_var_nameX32);
int getchar();
int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);
int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);
int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);
int putchar(int anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);
int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);
int puts(const char* anonymous_var_nameX45);
int printf(const char* anonymous_var_nameX46, ...);
int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);
int snprintf(char* anonymous_var_nameX51, unsigned long  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long  int* anonymous_var_nameX91);
struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);
struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int pclose(struct _IO_FILE* anonymous_var_nameX96);
int fileno(struct _IO_FILE* anonymous_var_nameX97);
int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);
long ftello(struct _IO_FILE* anonymous_var_nameX101);
int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);
int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);
void flockfile(struct _IO_FILE* anonymous_var_nameX107);
int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);
void funlockfile(struct _IO_FILE* anonymous_var_nameX109);
int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);
int putchar_unlocked(int anonymous_var_nameX113);
long getdelim(char** anonymous_var_nameX114, unsigned long  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long  int fread_unlocked(void* anonymous_var_nameX137, unsigned long  int anonymous_var_nameX138, unsigned long  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long  int anonymous_var_nameX142, unsigned long  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long  int* anonymous_var_nameX153);
int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);
int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);
char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);
int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);
struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);
int atoi(const char* anonymous_var_nameX177);
long atol(const char* anonymous_var_nameX178);
long long atoll(const char* anonymous_var_nameX179);
double atof(const char* anonymous_var_nameX180);
float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);
double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);
long  double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);
long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);
unsigned long  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long  int anonymous_var_nameX200);
void* calloc(unsigned long  int anonymous_var_nameX201, unsigned long  int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long  int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long  int anonymous_var_nameX206, unsigned long  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long  int anonymous_var_nameX215, unsigned long  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long  int anonymous_var_nameX220, unsigned long  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
unsigned long  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long  int anonymous_var_nameX247, unsigned long  int anonymous_var_nameX248);
int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);
int unsetenv(const char* anonymous_var_nameX252);
int mkstemp(char* anonymous_var_nameX253);
int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);
char* mkdtemp(char* anonymous_var_nameX256);
int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
long  int random();
void srandom(unsigned int anonymous_var_nameX263);
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long  int anonymous_var_nameX266);
char* setstate(char* anonymous_var_nameX267);
int putenv(char* anonymous_var_nameX268);
int posix_openpt(int anonymous_var_nameX269);
int grantpt(int anonymous_var_nameX270);
int unlockpt(int anonymous_var_nameX271);
char* ptsname(int anonymous_var_nameX272);
char* l64a(long anonymous_var_nameX273);
long a64l(const char* anonymous_var_nameX274);
void setkey(const char* anonymous_var_nameX275);
double drand48();
double erand48(unsigned short int anonymous_var_nameX276[3]);
long  int lrand48();
long  int nrand48(unsigned short int anonymous_var_nameX277[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX278[3]);
void srand48(long anonymous_var_nameX279);
unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);
void lcong48(unsigned short int anonymous_var_nameX281[7]);
void* alloca(unsigned long  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long  int anonymous_var_nameX289);
void* memalign(unsigned long  int anonymous_var_nameX290, unsigned long  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long  int anonymous_var_nameX295, unsigned long  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long  int anonymous_var_nameX298, unsigned long  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long  int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long  int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long  int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long  int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long  int anonymous_var_nameX416);
unsigned long  int strnlen(const char* anonymous_var_nameX417, unsigned long  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long  int anonymous_var_nameX444);
unsigned long  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
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
static void va_list_finalize(va_list self);
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
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(unsigned int c);
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
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX843, int anonymous_var_nameX844, const char** anonymous_var_nameX845, int* anonymous_var_nameX846, const unsigned char* anonymous_var_nameX847);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX848, int anonymous_var_nameX849, const char** anonymous_var_nameX850, int* anonymous_var_nameX851, const unsigned char* anonymous_var_nameX852);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX853, int anonymous_var_nameX854, const char** anonymous_var_nameX855, int* anonymous_var_nameX856, const unsigned char* anonymous_var_nameX857);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX858, int anonymous_var_nameX859, int* anonymous_var_nameX860, const char** anonymous_var_nameX861, int* anonymous_var_nameX862, const unsigned char* anonymous_var_nameX863);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX864, int anonymous_var_nameX865, int* anonymous_var_nameX866, const char** anonymous_var_nameX867, int* anonymous_var_nameX868, const unsigned char* anonymous_var_nameX869);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX870, int anonymous_var_nameX871, int* anonymous_var_nameX872, const char** anonymous_var_nameX873, int* anonymous_var_nameX874, const unsigned char* anonymous_var_nameX875);
int pcre_config(int anonymous_var_nameX876, void* anonymous_var_nameX877);
int pcre16_config(int anonymous_var_nameX878, void* anonymous_var_nameX879);
int pcre32_config(int anonymous_var_nameX880, void* anonymous_var_nameX881);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX882, const char* anonymous_var_nameX883, int* anonymous_var_nameX884, int anonymous_var_nameX885, const char* anonymous_var_nameX886, char* anonymous_var_nameX887, int anonymous_var_nameX888);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX889, const unsigned short int* anonymous_var_nameX890, int* anonymous_var_nameX891, int anonymous_var_nameX892, const unsigned short int* anonymous_var_nameX893, unsigned short int* anonymous_var_nameX894, int anonymous_var_nameX895);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX896, const unsigned int* anonymous_var_nameX897, int* anonymous_var_nameX898, int anonymous_var_nameX899, const unsigned int* anonymous_var_nameX900, unsigned int* anonymous_var_nameX901, int anonymous_var_nameX902);
int pcre_copy_substring(const char* anonymous_var_nameX903, int* anonymous_var_nameX904, int anonymous_var_nameX905, int anonymous_var_nameX906, char* anonymous_var_nameX907, int anonymous_var_nameX908);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX909, int* anonymous_var_nameX910, int anonymous_var_nameX911, int anonymous_var_nameX912, unsigned short int* anonymous_var_nameX913, int anonymous_var_nameX914);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX915, int* anonymous_var_nameX916, int anonymous_var_nameX917, int anonymous_var_nameX918, unsigned int* anonymous_var_nameX919, int anonymous_var_nameX920);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX921, const struct pcre_extra* anonymous_var_nameX922, const char* anonymous_var_nameX923, int anonymous_var_nameX924, int anonymous_var_nameX925, int anonymous_var_nameX926, int* anonymous_var_nameX927, int anonymous_var_nameX928, int* anonymous_var_nameX929, int anonymous_var_nameX930);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX931, const struct pcre16_extra* anonymous_var_nameX932, const unsigned short int* anonymous_var_nameX933, int anonymous_var_nameX934, int anonymous_var_nameX935, int anonymous_var_nameX936, int* anonymous_var_nameX937, int anonymous_var_nameX938, int* anonymous_var_nameX939, int anonymous_var_nameX940);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX941, const struct pcre32_extra* anonymous_var_nameX942, const unsigned int* anonymous_var_nameX943, int anonymous_var_nameX944, int anonymous_var_nameX945, int anonymous_var_nameX946, int* anonymous_var_nameX947, int anonymous_var_nameX948, int* anonymous_var_nameX949, int anonymous_var_nameX950);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX951, const struct pcre_extra* anonymous_var_nameX952, const char* anonymous_var_nameX953, int anonymous_var_nameX954, int anonymous_var_nameX955, int anonymous_var_nameX956, int* anonymous_var_nameX957, int anonymous_var_nameX958);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX959, const struct pcre16_extra* anonymous_var_nameX960, const unsigned short int* anonymous_var_nameX961, int anonymous_var_nameX962, int anonymous_var_nameX963, int anonymous_var_nameX964, int* anonymous_var_nameX965, int anonymous_var_nameX966);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX967, const struct pcre32_extra* anonymous_var_nameX968, const unsigned int* anonymous_var_nameX969, int anonymous_var_nameX970, int anonymous_var_nameX971, int anonymous_var_nameX972, int* anonymous_var_nameX973, int anonymous_var_nameX974);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX975, const struct pcre_extra* anonymous_var_nameX976, const char* anonymous_var_nameX977, int anonymous_var_nameX978, int anonymous_var_nameX979, int anonymous_var_nameX980, int* anonymous_var_nameX981, int anonymous_var_nameX982, struct real_pcre_jit_stack* anonymous_var_nameX983);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX984, const struct pcre16_extra* anonymous_var_nameX985, const unsigned short int* anonymous_var_nameX986, int anonymous_var_nameX987, int anonymous_var_nameX988, int anonymous_var_nameX989, int* anonymous_var_nameX990, int anonymous_var_nameX991, struct real_pcre16_jit_stack* anonymous_var_nameX992);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX993, const struct pcre32_extra* anonymous_var_nameX994, const unsigned int* anonymous_var_nameX995, int anonymous_var_nameX996, int anonymous_var_nameX997, int anonymous_var_nameX998, int* anonymous_var_nameX999, int anonymous_var_nameX1000, struct real_pcre32_jit_stack* anonymous_var_nameX1001);
void pcre_free_substring(const char* anonymous_var_nameX1002);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX1003);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX1004);
void pcre_free_substring_list(const char** anonymous_var_nameX1005);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX1006);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX1007);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX1008, const struct pcre_extra* anonymous_var_nameX1009, int anonymous_var_nameX1010, void* anonymous_var_nameX1011);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX1012, const struct pcre16_extra* anonymous_var_nameX1013, int anonymous_var_nameX1014, void* anonymous_var_nameX1015);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX1016, const struct pcre32_extra* anonymous_var_nameX1017, int anonymous_var_nameX1018, void* anonymous_var_nameX1019);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX1020, const char* anonymous_var_nameX1021, int* anonymous_var_nameX1022, int anonymous_var_nameX1023, const char* anonymous_var_nameX1024, const char** anonymous_var_nameX1025);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX1026, const unsigned short int* anonymous_var_nameX1027, int* anonymous_var_nameX1028, int anonymous_var_nameX1029, const unsigned short int* anonymous_var_nameX1030, const unsigned short int** anonymous_var_nameX1031);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX1032, const unsigned int* anonymous_var_nameX1033, int* anonymous_var_nameX1034, int anonymous_var_nameX1035, const unsigned int* anonymous_var_nameX1036, const unsigned int** anonymous_var_nameX1037);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX1038, const char* anonymous_var_nameX1039);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX1040, const unsigned short int* anonymous_var_nameX1041);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX1042, const unsigned int* anonymous_var_nameX1043);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX1044, const char* anonymous_var_nameX1045, char** anonymous_var_nameX1046, char** anonymous_var_nameX1047);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX1048, const unsigned short int* anonymous_var_nameX1049, unsigned short int** anonymous_var_nameX1050, unsigned short int** anonymous_var_nameX1051);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX1052, const unsigned int* anonymous_var_nameX1053, unsigned int** anonymous_var_nameX1054, unsigned int** anonymous_var_nameX1055);
int pcre_get_substring(const char* anonymous_var_nameX1056, int* anonymous_var_nameX1057, int anonymous_var_nameX1058, int anonymous_var_nameX1059, const char** anonymous_var_nameX1060);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX1061, int* anonymous_var_nameX1062, int anonymous_var_nameX1063, int anonymous_var_nameX1064, const unsigned short int** anonymous_var_nameX1065);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX1066, int* anonymous_var_nameX1067, int anonymous_var_nameX1068, int anonymous_var_nameX1069, const unsigned int** anonymous_var_nameX1070);
int pcre_get_substring_list(const char* anonymous_var_nameX1071, int* anonymous_var_nameX1072, int anonymous_var_nameX1073, const char*** anonymous_var_nameX1074);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX1075, int* anonymous_var_nameX1076, int anonymous_var_nameX1077, const unsigned short int*** anonymous_var_nameX1078);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX1079, int* anonymous_var_nameX1080, int anonymous_var_nameX1081, const unsigned int*** anonymous_var_nameX1082);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX1083, int anonymous_var_nameX1084);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX1085, int anonymous_var_nameX1086);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX1087, int anonymous_var_nameX1088);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX1089, int anonymous_var_nameX1090, const char** anonymous_var_nameX1091);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX1092, int anonymous_var_nameX1093, const char** anonymous_var_nameX1094);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX1095, int anonymous_var_nameX1096, const char** anonymous_var_nameX1097);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX1098);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX1099);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX1100);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1101, struct pcre_extra* anonymous_var_nameX1102, const unsigned char* anonymous_var_nameX1103);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1104, struct pcre16_extra* anonymous_var_nameX1105, const unsigned char* anonymous_var_nameX1106);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX1107, struct pcre32_extra* anonymous_var_nameX1108, const unsigned char* anonymous_var_nameX1109);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX1110, const unsigned short int* anonymous_var_nameX1111, int anonymous_var_nameX1112, int* anonymous_var_nameX1113, int anonymous_var_nameX1114);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX1115, const unsigned int* anonymous_var_nameX1116, int anonymous_var_nameX1117, int* anonymous_var_nameX1118, int anonymous_var_nameX1119);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX1120, int anonymous_var_nameX1121);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX1122, int anonymous_var_nameX1123);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX1124, int anonymous_var_nameX1125);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX1126);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX1127);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX1128);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX1129, struct real_pcre_jit_stack* (*anonymous_var_nameX1130)(void*), void* anonymous_var_nameX1131);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX1132, struct real_pcre16_jit_stack* (*anonymous_var_nameX1133)(void*), void* anonymous_var_nameX1134);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX1135, struct real_pcre32_jit_stack* (*anonymous_var_nameX1136)(void*), void* anonymous_var_nameX1137);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
unsigned int* wcscpy(unsigned int* anonymous_var_nameX1138, const unsigned int* anonymous_var_nameX1139);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX1140, const unsigned int* anonymous_var_nameX1141, unsigned long  int anonymous_var_nameX1142);
unsigned int* wcscat(unsigned int* anonymous_var_nameX1143, const unsigned int* anonymous_var_nameX1144);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX1145, const unsigned int* anonymous_var_nameX1146, unsigned long  int anonymous_var_nameX1147);
int wcscmp(const unsigned int* anonymous_var_nameX1148, const unsigned int* anonymous_var_nameX1149);
int wcsncmp(const unsigned int* anonymous_var_nameX1150, const unsigned int* anonymous_var_nameX1151, unsigned long  int anonymous_var_nameX1152);
int wcscoll(const unsigned int* anonymous_var_nameX1153, const unsigned int* anonymous_var_nameX1154);
unsigned long  int wcsxfrm(unsigned int* anonymous_var_nameX1155, const unsigned int* anonymous_var_nameX1156, unsigned long  int anonymous_var_nameX1157);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX1158, unsigned int anonymous_var_nameX1159);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX1160, unsigned int anonymous_var_nameX1161);
unsigned long  int wcscspn(const unsigned int* anonymous_var_nameX1162, const unsigned int* anonymous_var_nameX1163);
unsigned long  int wcsspn(const unsigned int* anonymous_var_nameX1164, const unsigned int* anonymous_var_nameX1165);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX1166, const unsigned int* anonymous_var_nameX1167);
unsigned int* wcstok(unsigned int* anonymous_var_nameX1168, const unsigned int* anonymous_var_nameX1169, unsigned int** anonymous_var_nameX1170);
unsigned long  int wcslen(const unsigned int* anonymous_var_nameX1171);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX1172, const unsigned int* anonymous_var_nameX1173);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX1174, const unsigned int* anonymous_var_nameX1175);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX1176, unsigned int anonymous_var_nameX1177, unsigned long  int anonymous_var_nameX1178);
int wmemcmp(const unsigned int* anonymous_var_nameX1179, const unsigned int* anonymous_var_nameX1180, unsigned long  int anonymous_var_nameX1181);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX1182, const unsigned int* anonymous_var_nameX1183, unsigned long  int anonymous_var_nameX1184);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX1185, const unsigned int* anonymous_var_nameX1186, unsigned long  int anonymous_var_nameX1187);
unsigned int* wmemset(unsigned int* anonymous_var_nameX1188, unsigned int anonymous_var_nameX1189, unsigned long  int anonymous_var_nameX1190);
unsigned int btowc(int anonymous_var_nameX1191);
int wctob(unsigned int anonymous_var_nameX1192);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX1193);
unsigned long  int mbrtowc(unsigned int* anonymous_var_nameX1194, const char* anonymous_var_nameX1195, unsigned long  int anonymous_var_nameX1196, struct __mbstate_t* anonymous_var_nameX1197);
unsigned long  int wcrtomb(char* anonymous_var_nameX1198, unsigned int anonymous_var_nameX1199, struct __mbstate_t* anonymous_var_nameX1200);
unsigned long  int mbrlen(const char* anonymous_var_nameX1201, unsigned long  int anonymous_var_nameX1202, struct __mbstate_t* anonymous_var_nameX1203);
unsigned long  int mbsrtowcs(unsigned int* anonymous_var_nameX1204, const char** anonymous_var_nameX1205, unsigned long  int anonymous_var_nameX1206, struct __mbstate_t* anonymous_var_nameX1207);
unsigned long  int wcsrtombs(char* anonymous_var_nameX1208, const unsigned int** anonymous_var_nameX1209, unsigned long  int anonymous_var_nameX1210, struct __mbstate_t* anonymous_var_nameX1211);
float wcstof(const unsigned int* anonymous_var_nameX1212, unsigned int** anonymous_var_nameX1213);
double wcstod(const unsigned int* anonymous_var_nameX1214, unsigned int** anonymous_var_nameX1215);
long  double wcstold(const unsigned int* anonymous_var_nameX1216, unsigned int** anonymous_var_nameX1217);
long wcstol(const unsigned int* anonymous_var_nameX1218, unsigned int** anonymous_var_nameX1219, int anonymous_var_nameX1220);
unsigned long  int wcstoul(const unsigned int* anonymous_var_nameX1221, unsigned int** anonymous_var_nameX1222, int anonymous_var_nameX1223);
long long wcstoll(const unsigned int* anonymous_var_nameX1224, unsigned int** anonymous_var_nameX1225, int anonymous_var_nameX1226);
unsigned long  long wcstoull(const unsigned int* anonymous_var_nameX1227, unsigned int** anonymous_var_nameX1228, int anonymous_var_nameX1229);
int fwide(struct _IO_FILE* anonymous_var_nameX1230, int anonymous_var_nameX1231);
int wprintf(const unsigned int* anonymous_var_nameX1232, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX1233, const unsigned int* anonymous_var_nameX1234, ...);
int swprintf(unsigned int* anonymous_var_nameX1235, unsigned long  int anonymous_var_nameX1236, const unsigned int* anonymous_var_nameX1237, ...);
int vwprintf(const unsigned int* anonymous_var_nameX1238, va_list anonymous_var_nameX1239);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX1240, const unsigned int* anonymous_var_nameX1241, va_list anonymous_var_nameX1242);
int vswprintf(unsigned int* anonymous_var_nameX1243, unsigned long  int anonymous_var_nameX1244, const unsigned int* anonymous_var_nameX1245, va_list anonymous_var_nameX1246);
int wscanf(const unsigned int* anonymous_var_nameX1247, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX1248, const unsigned int* anonymous_var_nameX1249, ...);
int swscanf(const unsigned int* anonymous_var_nameX1250, const unsigned int* anonymous_var_nameX1251, ...);
int vwscanf(const unsigned int* anonymous_var_nameX1252, va_list anonymous_var_nameX1253);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX1254, const unsigned int* anonymous_var_nameX1255, va_list anonymous_var_nameX1256);
int vswscanf(const unsigned int* anonymous_var_nameX1257, const unsigned int* anonymous_var_nameX1258, va_list anonymous_var_nameX1259);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1260);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1261);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX1262, struct _IO_FILE* anonymous_var_nameX1263);
unsigned int putwc(unsigned int anonymous_var_nameX1264, struct _IO_FILE* anonymous_var_nameX1265);
unsigned int putwchar(unsigned int anonymous_var_nameX1266);
unsigned int* fgetws(unsigned int* anonymous_var_nameX1267, int anonymous_var_nameX1268, struct _IO_FILE* anonymous_var_nameX1269);
int fputws(const unsigned int* anonymous_var_nameX1270, struct _IO_FILE* anonymous_var_nameX1271);
unsigned int ungetwc(unsigned int anonymous_var_nameX1272, struct _IO_FILE* anonymous_var_nameX1273);
unsigned long  int wcsftime(unsigned int* anonymous_var_nameX1274, unsigned long  int anonymous_var_nameX1275, const unsigned int* anonymous_var_nameX1276, const struct tm* anonymous_var_nameX1277);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1278);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1279);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1280, struct _IO_FILE* anonymous_var_nameX1281);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1282, struct _IO_FILE* anonymous_var_nameX1283);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1284);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1285, int anonymous_var_nameX1286, struct _IO_FILE* anonymous_var_nameX1287);
int fputws_unlocked(const unsigned int* anonymous_var_nameX1288, struct _IO_FILE* anonymous_var_nameX1289);
unsigned long  int wcsftime_l(unsigned int* anonymous_var_nameX1290, unsigned long  int anonymous_var_nameX1291, const unsigned int* anonymous_var_nameX1292, const struct tm* anonymous_var_nameX1293, struct __locale_struct* anonymous_var_nameX1294);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1295, unsigned long  int* anonymous_var_nameX1296);
unsigned long  int mbsnrtowcs(unsigned int* anonymous_var_nameX1297, const char** anonymous_var_nameX1298, unsigned long  int anonymous_var_nameX1299, unsigned long  int anonymous_var_nameX1300, struct __mbstate_t* anonymous_var_nameX1301);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX1302, const unsigned int** anonymous_var_nameX1303, unsigned long  int anonymous_var_nameX1304, unsigned long  int anonymous_var_nameX1305, struct __mbstate_t* anonymous_var_nameX1306);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1307);
unsigned long  int wcsnlen(const unsigned int* anonymous_var_nameX1308, unsigned long  int anonymous_var_nameX1309);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1310, const unsigned int* anonymous_var_nameX1311);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1312, const unsigned int* anonymous_var_nameX1313, unsigned long  int anonymous_var_nameX1314);
int wcscasecmp(const unsigned int* anonymous_var_nameX1315, const unsigned int* anonymous_var_nameX1316);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX1317, const unsigned int* anonymous_var_nameX1318, struct __locale_struct* anonymous_var_nameX1319);
int wcsncasecmp(const unsigned int* anonymous_var_nameX1320, const unsigned int* anonymous_var_nameX1321, unsigned long  int anonymous_var_nameX1322);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1323, const unsigned int* anonymous_var_nameX1324, unsigned long  int anonymous_var_nameX1325, struct __locale_struct* anonymous_var_nameX1326);
int wcscoll_l(const unsigned int* anonymous_var_nameX1327, const unsigned int* anonymous_var_nameX1328, struct __locale_struct* anonymous_var_nameX1329);
unsigned long  int wcsxfrm_l(unsigned int* anonymous_var_nameX1330, const unsigned int* anonymous_var_nameX1331, unsigned long  int anonymous_var_nameX1332, struct __locale_struct* anonymous_var_nameX1333);
int wcwidth(unsigned int anonymous_var_nameX1334);
int wcswidth(const unsigned int* anonymous_var_nameX1335, unsigned long  int anonymous_var_nameX1336);
int iswalnum(unsigned int anonymous_var_nameX1337);
int iswalpha(unsigned int anonymous_var_nameX1338);
int iswblank(unsigned int anonymous_var_nameX1339);
int iswcntrl(unsigned int anonymous_var_nameX1340);
int iswdigit(unsigned int anonymous_var_nameX1341);
int iswgraph(unsigned int anonymous_var_nameX1342);
int iswlower(unsigned int anonymous_var_nameX1343);
int iswprint(unsigned int anonymous_var_nameX1344);
int iswpunct(unsigned int anonymous_var_nameX1345);
int iswspace(unsigned int anonymous_var_nameX1346);
int iswupper(unsigned int anonymous_var_nameX1347);
int iswxdigit(unsigned int anonymous_var_nameX1348);
int iswctype(unsigned int anonymous_var_nameX1349, unsigned long  int anonymous_var_nameX1350);
unsigned int towlower(unsigned int anonymous_var_nameX1351);
unsigned int towupper(unsigned int anonymous_var_nameX1352);
unsigned long  int wctype(const char* anonymous_var_nameX1353);
char* dirname(char* anonymous_var_nameX1354);
char* basename(char* anonymous_var_nameX1355);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self);
void come_regex_finalize(struct come_regex* reg);
struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* come_regex_clone(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* reg);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail);
unsigned int* __builtin_wstring(char* str);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* wchar_tp_to_string(unsigned int* wstr);
unsigned int* charp_to_wstring(char* str);
int wchar_tp_length(unsigned int* str);
unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail);
int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value);
int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value);
unsigned int* wchar_tp_reverse(unsigned int* str);
unsigned int* wchar_tp_multiply(unsigned int* str, int n);
unsigned int* wchar_tp_printable(unsigned int* str);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(unsigned int* left, unsigned int* right);
int wstring_compare(unsigned int* left, unsigned int* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
_Bool wchar_tp_equals(unsigned int left, unsigned int right);
unsigned int* wchar_tp_operator_mult(unsigned int* str, int n);
unsigned int* wstring_operator_mult(unsigned int* str, int n);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right);
unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right);
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
unsigned int wchar_tp_get_hash_key(unsigned int* value);
_Bool wstring_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
unsigned int wchar_t_get_hash_key(unsigned int value);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
char* wchar_t_to_string(unsigned int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(unsigned int* wstr);
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3641, "buffer"))));
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
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3648, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3657, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3664, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3671, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3678, "buffer"))));
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
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3685, "buffer"))));
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
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 4013, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 4018, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 4023, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 4028, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 4033, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4066, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 4068, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4073, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 4075, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4080, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 4082, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4087, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 4089, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4094, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 4096, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4101, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 4103, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4108, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 4110, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
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
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 4115, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 4120, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 4125, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 4130, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 4135, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 4140, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 4145, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 4150, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 4155, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 4160, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 4165, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 4170, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 4175, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 4180, "vector$1double")),len,self)));
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
static unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
unsigned int* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value280=wchar_tp_substring(str,head,tail)));
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
static unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
unsigned int* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value287=charp_to_wstring(str)));
    /* U11 */__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}
static char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value288=wchar_tp_to_string(wstr)));
    /* U11 */__right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}
static unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
unsigned int* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value290=string_to_wstring(((char*)(__right_value289=xsprintf("%d",self))))));
    /* U11 */__right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}
static int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
unsigned int* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value291=wchar_tp_delete(str,head,tail)));
    /* U11 */__right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}
static int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
unsigned int* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value292=wchar_tp_reverse(str)));
    /* U11 */__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}
static unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
unsigned int* __result235__;
    __result235__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value293=wchar_tp_multiply(str,n)));
    /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}
static unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
unsigned int* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value294=wchar_tp_printable(str)));
    /* U11 */__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}
static unsigned int wstring_get_hash_key(unsigned int* value){
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

static void va_list_finalize(va_list self){
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
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 1135, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 1145, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 1155, "list_item$1char"))));
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
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 1135, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 1145, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 1155, "list_item$1charp"))));
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
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 1135, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 1145, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 1155, "list_item$1short"))));
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
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 1135, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 1145, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 1155, "list_item$1int"))));
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
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 1135, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 1145, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 1155, "list_item$1long"))));
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
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 1135, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 1145, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 1155, "list_item$1float"))));
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
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 1135, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 1145, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 1155, "list_item$1double"))));
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
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 1929, "char")));
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
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 1929, "char*")));
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
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "comelang.h", 1929, "short")));
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
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 1929, "int")));
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
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 1929, "long")));
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
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 1929, "float")));
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
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 1929, "double")));
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
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 1135, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 1145, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 1155, "list_item$1charph"))));
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

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_271;
int erro_ofs_272;
int options_273;
void* __right_value307 = (void*)0;
char* __dec_obj32;
struct come_regex* __null_value1;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct tuple2$2come_regexphcharph* __result250__;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct tuple2$2come_regexphcharph* __result252__;
err_271 = (void*)0;
memset(&erro_ofs_272, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_273=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    __dec_obj32=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_273;
    self->re=pcre_compile(str,options_273,&err_271,&erro_ofs_272,((void*)0));
    if(    self->re==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value311=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 46, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value1),(char*)come_increment_ref_count(xsprintf("regex error \%s",((char*)(__right_value308=charp_to_string(str))))))));
        /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value311,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value313=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 53, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(self),((void*)0))));
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value313,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj33;
char* __dec_obj34;
struct tuple2$2come_regexphcharph* __result249__;
    __dec_obj33=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj33,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj34=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self){
struct come_regex* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj36=self->v2;
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj37;
struct tuple2$2come_regexphvoidp* __result251__;
    __dec_obj37=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj37,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    self->v2=v2;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self){
struct come_regex* __dec_obj38;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj38=self->v1;
            come_call_finalizer3(__dec_obj38,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
        /* U13 */reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1 = (void*)0;
struct come_regex* come_exception_var_b1_274=0;
char* Err_275=0;
_Bool _if_conditional1;
struct come_regex* __null_value2;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct tuple2$2come_regexphcharph* __result253__;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple2$2come_regexphcharph* __result254__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=((struct tuple2$2come_regexphcharph*)(__right_value315=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b1_274=(struct come_regex*)come_increment_ref_count(multiple_assign_var1->v1);
    Err_275=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    if(    (_if_conditional1=(Err_275)),    /*f*/come_call_finalizer3(__right_value315,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional1) {
        __result253__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value317=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value2),(char*)come_increment_ref_count(Err_275))));
        /*i*/come_call_finalizer3(come_exception_var_b1_274,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_275 = come_decrement_ref_count2(Err_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value317,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value319=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b1_274),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b1_274,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_275 = come_decrement_ref_count2(Err_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value319,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_276=0;
char* Err_277=0;
_Bool _if_conditional2;
struct come_regex* __null_value3;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2come_regexphcharph* __result255__;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple2$2come_regexphcharph* __result256__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=((struct tuple2$2come_regexphcharph*)(__right_value321=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b2_276=(struct come_regex*)come_increment_ref_count(multiple_assign_var2->v1);
    Err_277=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    if(    (_if_conditional2=(Err_277)),    /*f*/come_call_finalizer3(__right_value321,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result255__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value323=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value3),(char*)come_increment_ref_count(Err_277))));
        /*i*/come_call_finalizer3(come_exception_var_b2_276,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_277 = come_decrement_ref_count2(Err_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value323,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value325=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b2_276),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b2_276,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_277 = come_decrement_ref_count2(Err_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value325,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result257__;
void* __right_value326 = (void*)0;
struct come_regex* result_278;
void* __right_value327 = (void*)0;
char* __dec_obj39;
const char* err_279;
int erro_ofs_280;
struct come_regex* __result258__;
err_279 = (void*)0;
memset(&erro_ofs_280, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result257__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_278=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj39=result_278->str;
    result_278->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_278->ignore_case=reg->ignore_case;
    result_278->multiline=reg->multiline;
    result_278->global=reg->global;
    result_278->extended=reg->extended;
    result_278->dotall=reg->dotall;
    result_278->anchored=reg->anchored;
    result_278->dollar_endonly=reg->dollar_endonly;
    result_278->ungreedy=reg->ungreedy;
    result_278->options=reg->options;
    result_278->re=pcre_compile(result_278->str,result_278->options,&err_279,&erro_ofs_280,((void*)0));
    if(    result_278->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_278->str);
        stackframe();
        exit(1);
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_278;
    /*i*/come_call_finalizer3(result_278,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* __result259__;
void* __right_value329 = (void*)0;
char* __result260__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result259__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string("")));
        /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=__builtin_string(reg->str)));
    /* U11 */__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
char* result_281;
int i_282;
char* __result261__;
    result_281=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_282=0;    i_282<strlen(str);    i_282++    ){
        if(        str[i_282]>=65&&str[i_282]<=90) {
            result_281[i_282]=str[i_282]-65+97;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_281;
    /* U13 */result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
char* result_283;
int i_284;
char* __result262__;
    result_283=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_284=0;    i_284<strlen(str);    i_284++    ){
        if(        str[i_284]>=97&&str[i_284]<=122) {
            result_283[i_284]=str[i_284]-97+65;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_283;
    /* U13 */result_283 = come_decrement_ref_count2(result_283, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
unsigned int* __result263__;
int len_285;
void* __right_value333 = (void*)0;
unsigned int* __result264__;
void* __right_value334 = (void*)0;
unsigned int* __result265__;
void* __right_value335 = (void*)0;
unsigned int* __result266__;
void* __right_value336 = (void*)0;
unsigned int* result_286;
unsigned int* __result267__;
    if(    str==((void*)0)) {
        __result263__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value332=__builtin_wstring("")));
        /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    len_285=wcslen(str);
    if(    head<0) {
        head+=len_285;
    }
    if(    tail<0) {
        tail+=len_285+1;
    }
    if(    head>tail) {
        __result264__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value333=__builtin_wstring("")));
        /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_285) {
        tail=len_285;
    }
    if(    head==tail) {
        __result265__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value334=__builtin_wstring("")));
        /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    if(    tail-head+1<1) {
        __result266__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value335=__builtin_wstring("")));
        /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_286=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str.c", 185, "int"));
    memcpy(result_286,str+head,sizeof(unsigned int)*(tail-head));
    result_286[tail-head]=0;
    __result267__ = gComeFunResultObject = __result_obj__ = result_286;
    /* U13 */result_286 = come_decrement_ref_count2(result_286, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result268__;
int len_287;
void* __right_value337 = (void*)0;
unsigned int* wstr_288;
int ret_289;
unsigned int* __result269__;
    if(    str==((void*)0)) {
        __result268__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    len_287=strlen(str);
    wstr_288=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_287+1)), "libcomelang-str.c", 200, "int"));
    ret_289=mbstowcs(wstr_288,str,len_287+1);
    wstr_288[ret_289]=0;
    if(    ret_289<0) {
        wstr_288[0]=0;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = wstr_288;
    /* U13 */wstr_288 = come_decrement_ref_count2(wstr_288, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_290;
int len_291;
int i_292;
int len2_293;
int j_294;
memset(&j_294, 0, sizeof(int));
    n_290=0;
    len_291=strlen(str);
    for(    i_292=0;    i_292<len_291;    i_292++    ){
        len2_293=strlen(search_str);
        for(        j_294=0;        j_294<len2_293;        j_294++        ){
            if(            str[i_292+j_294]!=search_str[j_294]) {
                break;
            }
        }
        if(        j_294==len2_293) {
            n_290++;
            if(            n_290==count) {
                return i_292;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_295;
int result_299;
int offset_300;
const char* err_301;
int erro_ofs_302;
int options_303;
char* str_304;
struct real_pcre8_or_16* re_305;
int n_306;
int options_307;
int len_308;
int regex_result_309;
int i_310;
int i_311;
err_301 = (void*)0;
memset(&erro_ofs_302, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_295=16;
    int start_296[ovec_max_295];
    memset(&start_296, 0, sizeof(int)    *(ovec_max_295)    );
    int end_297[ovec_max_295];
    memset(&end_297, 0, sizeof(int)    *(ovec_max_295)    );
    int ovec_value_298[ovec_max_295*3];
    memset(&ovec_value_298, 0, sizeof(int)    *(ovec_max_295*3)    );
    result_299=default_value;
    offset_300=0;
    options_303=reg->options;
    str_304=reg->str;
    re_305=reg->re;
    n_306=0;
    while((_Bool)1) {
        options_307=2097152;
        len_308=strlen(self);
        regex_result_309=pcre_exec(re_305,(struct pcre_extra*)0,self,len_308,offset_300,options_307,ovec_value_298,ovec_max_295*3);
        for(        i_310=0;        i_310<ovec_max_295;        i_310++        ){
            start_296[i_310]=ovec_value_298[i_310*2];
        }
        for(        i_311=0;        i_311<ovec_max_295;        i_311++        ){
            end_297[i_311]=ovec_value_298[i_311*2+1];
        }
        if(        regex_result_309>0) {
            n_306++;
            if(            offset_300==end_297[0]) {
                offset_300++;
            }
            else {
                offset_300=end_297[0];
            }
            if(            n_306==count) {
                result_299=start_296[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_299;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_312;
char* p_313;
    len_312=strlen(search_str);
    p_313=str+strlen(str)-len_312;
    while(p_313>=str) {
        if(        strncmp(p_313,search_str,len_312)==0) {
            return p_313-str;
        }
        p_313--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_314;
int erro_ofs_315;
int options_316;
char* str_317;
struct real_pcre8_or_16* re_318;
void* __right_value338 = (void*)0;
char* self2_319;
int ovec_max_320;
int result_324;
int offset_325;
int options_326;
int len_327;
int regex_result_328;
int i_329;
int i_330;
int __result270__;
err_314 = (void*)0;
memset(&erro_ofs_315, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_316=reg->options;
    str_317=reg->str;
    re_318=reg->re;
    self2_319=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_320=16;
    int start_321[ovec_max_320];
    memset(&start_321, 0, sizeof(int)    *(ovec_max_320)    );
    int end_322[ovec_max_320];
    memset(&end_322, 0, sizeof(int)    *(ovec_max_320)    );
    int ovec_value_323[ovec_max_320*3];
    memset(&ovec_value_323, 0, sizeof(int)    *(ovec_max_320*3)    );
    result_324=default_value;
    offset_325=0;
    while((_Bool)1) {
        options_326=2097152;
        len_327=strlen(self2_319);
        regex_result_328=pcre_exec(re_318,(struct pcre_extra*)0,self2_319,len_327,offset_325,options_326,ovec_value_323,ovec_max_320*3);
        for(        i_329=0;        i_329<ovec_max_320;        i_329++        ){
            start_321[i_329]=ovec_value_323[i_329*2];
        }
        for(        i_330=0;        i_330<ovec_max_320;        i_330++        ){
            end_322[i_330]=ovec_value_323[i_330*2+1];
        }
        if(        regex_result_328==1||regex_result_328>0) {
            result_324=strlen(self)-1-start_321[0];
            break;
        }
        {
            break;
        }
    }
    __result270__ = result_324;
    /* U13 */self2_319 = come_decrement_ref_count2(self2_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result270__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_331;
char* p_332;
int n_333;
    len_331=strlen(search_str);
    p_332=str+strlen(str)-len_331;
    n_333=0;
    while(p_332>=str) {
        if(        strncmp(p_332,search_str,len_331)==0) {
            n_333++;
            if(            n_333==count) {
                return p_332-str;
            }
        }
        p_332--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1charph* __result271__;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1charph* result_334;
int offset_335;
int ovec_max_336;
const char* err_340;
int erro_ofs_341;
int options_342;
char* str_343;
struct real_pcre8_or_16* re_344;
int options_345;
int len_346;
int regex_result_347;
int i_348;
int i_349;
void* __right_value343 = (void*)0;
char* str_350;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1charph* group_strings_351;
void* __right_value346 = (void*)0;
char* str2_352;
void* __right_value347 = (void*)0;
char* str_353;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1charph* group_strings_354;
int i_355;
void* __right_value350 = (void*)0;
char* match_string_356;
void* __right_value351 = (void*)0;
char* str2_357;
struct list$1charph* __result272__;
err_340 = (void*)0;
memset(&erro_ofs_341, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result271__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value340=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 395, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value340,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_334=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 398, "list$1charph"))));
    offset_335=0;
    ovec_max_336=16;
    int start_337[ovec_max_336];
    memset(&start_337, 0, sizeof(int)    *(ovec_max_336)    );
    int end_338[ovec_max_336];
    memset(&end_338, 0, sizeof(int)    *(ovec_max_336)    );
    int ovec_value_339[ovec_max_336*3];
    memset(&ovec_value_339, 0, sizeof(int)    *(ovec_max_336*3)    );
    options_342=reg->options;
    str_343=reg->str;
    re_344=reg->re;
    while((_Bool)1) {
        options_345=2097152;
        len_346=strlen(self);
        regex_result_347=pcre_exec(re_344,(struct pcre_extra*)0,self,len_346,offset_335,options_345,ovec_value_339,ovec_max_336*3);
        for(        i_348=0;        i_348<ovec_max_336;        i_348++        ){
            start_337[i_348]=ovec_value_339[i_348*2];
        }
        for(        i_349=0;        i_349<ovec_max_336;        i_349++        ){
            end_338[i_349]=ovec_value_339[i_349*2+1];
        }
        if(        regex_result_347==1) {
            str_350=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_351=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 432, "list$1charph"))));
            str2_352=(char*)come_increment_ref_count(block(parent,str_350,group_strings_351));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_352));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            /* U13 */str_350 = come_decrement_ref_count2(str_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_351,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_352 = come_decrement_ref_count2(str2_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_347>1) {
            str_353=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_354=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 449, "list$1charph"))));
            for(            i_355=1;            i_355<regex_result_347;            i_355++            ){
                match_string_356=(char*)come_increment_ref_count(charp_substring(self,start_337[i_355],end_338[i_355]));
                list$1charph_push_back(group_strings_354,(char*)come_increment_ref_count(match_string_356));
                /* U13 */match_string_356 = come_decrement_ref_count2(match_string_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_357=(char*)come_increment_ref_count(block(parent,str_353,group_strings_354));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_357));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            /* U13 */str_353 = come_decrement_ref_count2(str_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_354,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_357 = come_decrement_ref_count2(str2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_334;
    /*i*/come_call_finalizer3(result_334,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1charph* __result273__;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct list$1charph* result_358;
int offset_359;
int ovec_max_360;
const char* err_364;
int erro_ofs_365;
int options_366;
char* str_367;
struct real_pcre8_or_16* re_368;
int n_369;
int options_370;
int len_371;
int regex_result_372;
int i_373;
int i_374;
void* __right_value356 = (void*)0;
char* str_375;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1charph* group_strings_376;
void* __right_value359 = (void*)0;
char* str2_377;
void* __right_value360 = (void*)0;
char* str_378;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1charph* group_strings_379;
int i_380;
void* __right_value363 = (void*)0;
char* match_string_381;
void* __right_value364 = (void*)0;
char* str2_382;
struct list$1charph* __result274__;
err_364 = (void*)0;
memset(&erro_ofs_365, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result273__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value353=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 480, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value353,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_358=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 483, "list$1charph"))));
    offset_359=0;
    ovec_max_360=16;
    int start_361[ovec_max_360];
    memset(&start_361, 0, sizeof(int)    *(ovec_max_360)    );
    int end_362[ovec_max_360];
    memset(&end_362, 0, sizeof(int)    *(ovec_max_360)    );
    int ovec_value_363[ovec_max_360*3];
    memset(&ovec_value_363, 0, sizeof(int)    *(ovec_max_360*3)    );
    options_366=reg->options;
    str_367=reg->str;
    re_368=reg->re;
    n_369=0;
    while((_Bool)1) {
        options_370=2097152;
        len_371=strlen(self);
        regex_result_372=pcre_exec(re_368,(struct pcre_extra*)0,self,len_371,offset_359,options_370,ovec_value_363,ovec_max_360*3);
        for(        i_373=0;        i_373<ovec_max_360;        i_373++        ){
            start_361[i_373]=ovec_value_363[i_373*2];
        }
        for(        i_374=0;        i_374<ovec_max_360;        i_374++        ){
            end_362[i_374]=ovec_value_363[i_374*2+1];
        }
        if(        regex_result_372==1) {
            str_375=(char*)come_increment_ref_count(charp_substring(self,start_361[0],end_362[0]));
            group_strings_376=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 519, "list$1charph"))));
            str2_377=(char*)come_increment_ref_count(block(parent,str_375,group_strings_376));
            list$1charph_push_back(result_358,(char*)come_increment_ref_count(str2_377));
            if(            offset_359==end_362[0]) {
                offset_359++;
            }
            else {
                offset_359=end_362[0];
            }
            n_369++;
            if(            n_369==count) {
                /* U13 */str_375 = come_decrement_ref_count2(str_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_377 = come_decrement_ref_count2(str2_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_375 = come_decrement_ref_count2(str_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_377 = come_decrement_ref_count2(str2_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_372>1) {
            str_378=(char*)come_increment_ref_count(charp_substring(self,start_361[0],end_362[0]));
            group_strings_379=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 541, "list$1charph"))));
            for(            i_380=1;            i_380<regex_result_372;            i_380++            ){
                match_string_381=(char*)come_increment_ref_count(charp_substring(self,start_361[i_380],end_362[i_380]));
                list$1charph_push_back(group_strings_379,(char*)come_increment_ref_count(match_string_381));
                /* U13 */match_string_381 = come_decrement_ref_count2(match_string_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_382=(char*)come_increment_ref_count(block(parent,str_378,group_strings_379));
            list$1charph_push_back(result_358,(char*)come_increment_ref_count(str2_382));
            if(            offset_359==end_362[0]) {
                offset_359++;
            }
            else {
                offset_359=end_362[0];
            }
            n_369++;
            if(            n_369==count) {
                /* U13 */str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_382 = come_decrement_ref_count2(str2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_382 = come_decrement_ref_count2(str2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_358;
    /*i*/come_call_finalizer3(result_358,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charph* __result275__;
const char* err_383;
int erro_ofs_384;
int options_385;
char* str_386;
struct real_pcre8_or_16* re_387;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1charph* result_388;
int offset_389;
int ovec_max_390;
int options_394;
int len_395;
int regex_result_396;
int i_397;
int i_398;
void* __right_value369 = (void*)0;
char* str_399;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1charph* match_strings_400;
void* __right_value372 = (void*)0;
char* str2_401;
void* __right_value373 = (void*)0;
char* str_402;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1charph* match_strings_403;
int i_404;
void* __right_value376 = (void*)0;
char* match_str_405;
void* __right_value377 = (void*)0;
char* str2_406;
void* __right_value378 = (void*)0;
char* str_407;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1charph* match_strings_408;
void* __right_value381 = (void*)0;
char* str2_409;
struct list$1charph* __result276__;
err_383 = (void*)0;
memset(&erro_ofs_384, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value366=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 576, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value366,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    options_385=reg->options;
    str_386=reg->str;
    re_387=reg->re;
    result_388=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 586, "list$1charph"))));
    offset_389=0;
    ovec_max_390=16;
    int start_391[ovec_max_390];
    memset(&start_391, 0, sizeof(int)    *(ovec_max_390)    );
    int end_392[ovec_max_390];
    memset(&end_392, 0, sizeof(int)    *(ovec_max_390)    );
    int ovec_value_393[ovec_max_390*3];
    memset(&ovec_value_393, 0, sizeof(int)    *(ovec_max_390*3)    );
    while((_Bool)1) {
        options_394=2097152;
        len_395=strlen(self);
        regex_result_396=pcre_exec(re_387,(struct pcre_extra*)0,self,len_395,offset_389,options_394,ovec_value_393,ovec_max_390*3);
        for(        i_397=0;        i_397<ovec_max_390;        i_397++        ){
            start_391[i_397]=ovec_value_393[i_397*2];
        }
        for(        i_398=0;        i_398<ovec_max_390;        i_398++        ){
            end_392[i_398]=ovec_value_393[i_398*2+1];
        }
        if(        regex_result_396==1) {
            str_399=(char*)come_increment_ref_count(charp_substring(self,offset_389,start_391[0]));
            match_strings_400=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            str2_401=(char*)come_increment_ref_count(block(parent,str_399,match_strings_400));
            list$1charph_push_back(result_388,(char*)come_increment_ref_count(str2_401));
            if(            offset_389==end_392[0]) {
                offset_389++;
            }
            else {
                offset_389=end_392[0];
            }
            /* U13 */str_399 = come_decrement_ref_count2(str_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_400,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_401 = come_decrement_ref_count2(str2_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_396>1) {
            str_402=(char*)come_increment_ref_count(charp_substring(self,offset_389,start_391[0]));
            if(            offset_389==end_392[0]) {
                offset_389++;
            }
            else {
                offset_389=end_392[0];
            }
            match_strings_403=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 636, "list$1charph"))));
            for(            i_404=1;            i_404<regex_result_396;            i_404++            ){
                match_str_405=(char*)come_increment_ref_count(charp_substring(self,start_391[i_404],end_392[i_404]));
                list$1charph_push_back(match_strings_403,(char*)come_increment_ref_count(match_str_405));
                /* U13 */match_str_405 = come_decrement_ref_count2(match_str_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_406=(char*)come_increment_ref_count(block(parent,str_402,match_strings_403));
            list$1charph_push_back(result_388,(char*)come_increment_ref_count(str2_406));
            /* U13 */str_402 = come_decrement_ref_count2(str_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_403,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_406 = come_decrement_ref_count2(str2_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_389<charp_length(self)) {
        str_407=(char*)come_increment_ref_count(charp_substring(self,offset_389,-1));
        match_strings_408=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 655, "list$1charph"))));
        str2_409=(char*)come_increment_ref_count(block(parent,str_407,match_strings_408));
        list$1charph_push_back(result_388,(char*)come_increment_ref_count(str2_409));
        /* U13 */str_407 = come_decrement_ref_count2(str_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_408,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */str2_409 = come_decrement_ref_count2(str2_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_388;
    /*i*/come_call_finalizer3(result_388,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1charph* __result277__;
const char* err_410;
int erro_ofs_411;
int options_412;
char* str_413;
struct real_pcre8_or_16* re_414;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1charph* result_415;
int offset_416;
int ovec_max_417;
int n_421;
int options_422;
int len_423;
int regex_result_424;
int i_425;
int i_426;
void* __right_value386 = (void*)0;
char* str_427;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1charph* match_strings_428;
void* __right_value389 = (void*)0;
char* str2_429;
void* __right_value390 = (void*)0;
char* str_430;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1charph* match_strings_431;
int i_432;
void* __right_value393 = (void*)0;
char* match_str_433;
void* __right_value394 = (void*)0;
char* str2_434;
struct list$1charph* __result278__;
err_410 = (void*)0;
memset(&erro_ofs_411, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result277__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value383=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 666, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value383,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    options_412=reg->options;
    str_413=reg->str;
    re_414=reg->re;
    result_415=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 676, "list$1charph"))));
    offset_416=0;
    ovec_max_417=16;
    int start_418[ovec_max_417];
    memset(&start_418, 0, sizeof(int)    *(ovec_max_417)    );
    int end_419[ovec_max_417];
    memset(&end_419, 0, sizeof(int)    *(ovec_max_417)    );
    int ovec_value_420[ovec_max_417*3];
    memset(&ovec_value_420, 0, sizeof(int)    *(ovec_max_417*3)    );
    n_421=0;
    while((_Bool)1) {
        options_422=2097152;
        len_423=strlen(self);
        regex_result_424=pcre_exec(re_414,(struct pcre_extra*)0,self,len_423,offset_416,options_422,ovec_value_420,ovec_max_417*3);
        for(        i_425=0;        i_425<ovec_max_417;        i_425++        ){
            start_418[i_425]=ovec_value_420[i_425*2];
        }
        for(        i_426=0;        i_426<ovec_max_417;        i_426++        ){
            end_419[i_426]=ovec_value_420[i_426*2+1];
        }
        if(        regex_result_424==1) {
            str_427=(char*)come_increment_ref_count(charp_substring(self,offset_416,start_418[0]));
            match_strings_428=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 705, "list$1charph"))));
            str2_429=(char*)come_increment_ref_count(block(parent,str_427,match_strings_428));
            list$1charph_push_back(result_415,(char*)come_increment_ref_count(str2_429));
            if(            offset_416==end_419[0]) {
                offset_416++;
            }
            else {
                offset_416=end_419[0];
            }
            /* U13 */str_427 = come_decrement_ref_count2(str_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_428,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_429 = come_decrement_ref_count2(str2_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_424>1) {
            str_430=(char*)come_increment_ref_count(charp_substring(self,offset_416,start_418[0]));
            if(            offset_416==end_419[0]) {
                offset_416++;
            }
            else {
                offset_416=end_419[0];
            }
            match_strings_431=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 728, "list$1charph"))));
            for(            i_432=1;            i_432<regex_result_424;            i_432++            ){
                match_str_433=(char*)come_increment_ref_count(charp_substring(self,start_418[i_432],end_419[i_432]));
                list$1charph_push_back(match_strings_431,(char*)come_increment_ref_count(match_str_433));
                /* U13 */match_str_433 = come_decrement_ref_count2(match_str_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_434=(char*)come_increment_ref_count(block(parent,str_430,match_strings_431));
            list$1charph_push_back(result_415,(char*)come_increment_ref_count(str2_434));
            /* U13 */str_430 = come_decrement_ref_count2(str_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_434 = come_decrement_ref_count2(str2_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_421++;
        if(        n_421==count) {
            break;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_415;
    /*i*/come_call_finalizer3(result_415,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(    left==((void*)0)||left->re==((void*)0)) {
        return (_Bool)0;
    }
    if(    right==((void*)0)||right->re==((void*)0)) {
        return (_Bool)0;
    }
    if(    left->ignore_case!=right->ignore_case) {
        return (_Bool)0;
    }
    if(    left->multiline!=right->multiline) {
        return (_Bool)0;
    }
    if(    left->global!=right->global) {
        return (_Bool)0;
    }
    if(    left->extended!=right->extended) {
        return (_Bool)0;
    }
    if(    left->dotall!=right->dotall) {
        return (_Bool)0;
    }
    if(    left->anchored!=right->anchored) {
        return (_Bool)0;
    }
    if(    left->dollar_endonly!=right->dollar_endonly) {
        return (_Bool)0;
    }
    if(    left->ungreedy!=right->ungreedy) {
        return (_Bool)0;
    }
    if(    left->options!=right->options) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct list$1charph* __result279__;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1charph* result_435;
int offset_436;
int ovec_max_437;
const char* err_441;
int erro_ofs_442;
int options_443;
char* str_444;
struct real_pcre8_or_16* re_445;
int options_446;
int len_447;
int regex_result_448;
int i_449;
int i_450;
void* __right_value399 = (void*)0;
char* str_451;
void* __right_value400 = (void*)0;
char* str_452;
int i_453;
void* __right_value401 = (void*)0;
char* match_string_454;
struct list$1charph* __result280__;
err_441 = (void*)0;
memset(&erro_ofs_442, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value396=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 796, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value396,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_435=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 799, "list$1charph"))));
    offset_436=0;
    ovec_max_437=16;
    int start_438[ovec_max_437];
    memset(&start_438, 0, sizeof(int)    *(ovec_max_437)    );
    int end_439[ovec_max_437];
    memset(&end_439, 0, sizeof(int)    *(ovec_max_437)    );
    int ovec_value_440[ovec_max_437*3];
    memset(&ovec_value_440, 0, sizeof(int)    *(ovec_max_437*3)    );
    options_443=reg->options;
    str_444=reg->str;
    re_445=reg->re;
    while((_Bool)1) {
        options_446=2097152;
        len_447=strlen(self);
        regex_result_448=pcre_exec(re_445,(struct pcre_extra*)0,self,len_447,offset_436,options_446,ovec_value_440,ovec_max_437*3);
        for(        i_449=0;        i_449<ovec_max_437;        i_449++        ){
            start_438[i_449]=ovec_value_440[i_449*2];
        }
        for(        i_450=0;        i_450<ovec_max_437;        i_450++        ){
            end_439[i_450]=ovec_value_440[i_450*2+1];
        }
        if(        regex_result_448==1) {
            str_451=(char*)come_increment_ref_count(charp_substring(self,start_438[0],end_439[0]));
            list$1charph_push_back(result_435,(char*)come_increment_ref_count(str_451));
            if(            offset_436==end_439[0]) {
                offset_436++;
            }
            else {
                offset_436=end_439[0];
            }
            /* U13 */str_451 = come_decrement_ref_count2(str_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_448>1) {
            str_452=(char*)come_increment_ref_count(charp_substring(self,start_438[0],end_439[0]));
            list$1charph_push_back(result_435,(char*)come_increment_ref_count(str_452));
            if(            offset_436==end_439[0]) {
                offset_436++;
            }
            else {
                offset_436=end_439[0];
            }
            *num_group_string_in_regex=regex_result_448-1;
            for(            i_453=1;            i_453<regex_result_448;            i_453++            ){
                match_string_454=(char*)come_increment_ref_count(charp_substring(self,start_438[i_453],end_439[i_453]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_454));
                /* U13 */match_string_454 = come_decrement_ref_count2(match_string_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_452 = come_decrement_ref_count2(str_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_435;
    /*i*/come_call_finalizer3(result_435,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
char* result_455;
int len_456;
char* __result281__;
    result_455=(char*)come_increment_ref_count(__builtin_string(self));
    len_456=strlen(self);
    if(    self[len_456-1]==10) {
        result_455[len_456-1]=0;
    }
    else if(    self[len_456-1]==13) {
        result_455[len_456-1]=0;
    }
    else if(    len_456>2&&self[len_456-2]==13&&self[len_456-1]==10) {
        result_455[len_456-2]=0;
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_455;
    /* U13 */result_455 = come_decrement_ref_count2(result_455, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_457;
void* __right_value403 = (void*)0;
char* result_458;
char* __result282__;
    len_457=4*(wcslen(wstr)+1);
    result_458=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_457)), "libcomelang-str.c", 894, "char"));
    if(    wcstombs(result_458,wstr,len_457)<0) {
        strncpy(result_458,"",len_457);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_458;
    /* U13 */result_458 = come_decrement_ref_count2(result_458, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
unsigned int* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value404=__builtin_wstring(str)));
    /* U11 */__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_459;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
unsigned int* __result284__;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
unsigned int* __result285__;
void* __right_value409 = (void*)0;
unsigned int* sub_str_460;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
unsigned int* __result286__;
    len_459=wcslen(str);
    if(    len_459==0) {
        __result284__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value406=string_to_wstring(((char*)(__right_value405=wchar_tp_to_string(str))))));
        /* U11 */__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    if(    head<0) {
        head+=len_459;
    }
    if(    tail<0) {
        tail+=len_459+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result285__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value408=string_to_wstring(((char*)(__right_value407=wchar_tp_to_string(str))))));
        /* U11 */__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    if(    tail>=len_459) {
        tail=len_459;
    }
    sub_str_460=(unsigned int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_460,sizeof(unsigned int)*(wstring_length(sub_str_460)+1));
    __result286__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value411=string_to_wstring(((char*)(__right_value410=wchar_tp_to_string(str))))));
    /* U13 */sub_str_460 = come_decrement_ref_count2(sub_str_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_461;
    head_461=wcsstr(str,search_str);
    if(    head_461==((void*)0)) {
        return default_value;
    }
    return head_461-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_462;
unsigned int* p_463;
int len2_464;
_Bool result_465;
int i_466;
memset(&i_466, 0, sizeof(int));
    len_462=wcslen(search_str);
    p_463=str+wcslen(str)-len_462;
    while(p_463>=str) {
        len2_464=wcslen(p_463);
        result_465=(_Bool)1;
        for(        i_466=0;        i_466<len_462&&i_466<len2_464;        i_466++        ){
            if(            p_463[i_466]!=search_str[i_466]) {
                result_465=(_Bool)0;
            }
        }
        if(        result_465) {
            return (p_463-str);
        }
        p_463--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_467;
void* __right_value412 = (void*)0;
unsigned int* result_468;
int i_469;
unsigned int* __result287__;
    len_467=wcslen(str);
    result_468=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_467+1)), "libcomelang-str.c", 994, "int"));
    for(    i_469=0;    i_469<len_467;    i_469++    ){
        result_468[i_469]=str[len_467-i_469-1];
    }
    result_468[len_467]=0;
    __result287__ = gComeFunResultObject = __result_obj__ = result_468;
    /* U13 */result_468 = come_decrement_ref_count2(result_468, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_470;
void* __right_value413 = (void*)0;
unsigned int* result_471;
int i_472;
unsigned int* __result288__;
    len_470=wcslen(str)*n+1;
    result_471=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_470)), "libcomelang-str.c", 1009, "int"));
    result_471[0]=0;
    for(    i_472=0;    i_472<n;    i_472++    ){
        wcscat(result_471,str);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_471;
    /* U13 */result_471 = come_decrement_ref_count2(result_471, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_473;
void* __right_value414 = (void*)0;
unsigned int* result_474;
int n_475;
int i_476;
unsigned int c_477;
unsigned int* __result289__;
    len_473=wchar_tp_length(str);
    result_474=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_473*2+1)), "libcomelang-str.c", 1023, "int"));
    n_475=0;
    for(    i_476=0;    i_476<len_473;    i_476++    ){
        c_477=str[i_476];
        if(        (c_477>=0&&c_477<32)||c_477==127) {
            result_474[n_475++]=94;
            result_474[n_475++]=c_477+65-1;
        }
        else {
            result_474[n_475++]=c_477;
        }
    }
    result_474[n_475]=0;
    __result289__ = gComeFunResultObject = __result_obj__ = result_474;
    /* U13 */result_474 = come_decrement_ref_count2(result_474, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_478;
int ovec_max_479;
const char* err_483;
int erro_ofs_484;
int options_485;
char* str_486;
struct real_pcre8_or_16* re_487;
int n_488;
int options_489;
int len_490;
int regex_result_491;
int i_492;
int i_493;
int i_496;
void* __right_value415 = (void*)0;
char* match_string_497;
err_483 = (void*)0;
memset(&erro_ofs_484, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_478=0;
    ovec_max_479=16;
    int start_480[ovec_max_479];
    memset(&start_480, 0, sizeof(int)    *(ovec_max_479)    );
    int end_481[ovec_max_479];
    memset(&end_481, 0, sizeof(int)    *(ovec_max_479)    );
    int ovec_value_482[ovec_max_479*3];
    memset(&ovec_value_482, 0, sizeof(int)    *(ovec_max_479*3)    );
    options_485=reg->options;
    str_486=reg->str;
    re_487=reg->re;
    n_488=0;
    while((_Bool)1) {
        options_489=2097152;
        len_490=strlen(self);
        regex_result_491=pcre_exec(re_487,(struct pcre_extra*)0,self,len_490,offset_478,options_489,ovec_value_482,ovec_max_479*3);
        for(        i_492=0;        i_492<ovec_max_479;        i_492++        ){
            start_480[i_492]=ovec_value_482[i_492*2];
        }
        for(        i_493=0;        i_493<ovec_max_479;        i_493++        ){
            end_481[i_493]=ovec_value_482[i_493*2+1];
        }
        if(        regex_result_491==1||(group_strings==((void*)0)&&regex_result_491>0)) {
            n_488++;
            if(            n_488==count) {
                return (_Bool)1;
            }
            if(            offset_478==end_481[0]) {
                offset_478++;
            }
            else {
                offset_478=end_481[0];
            }
        }
        else if(        regex_result_491>1) {
            n_488++;
            list$1charph_reset(group_strings);
            for(            i_496=1;            i_496<regex_result_491;            i_496++            ){
                match_string_497=(char*)come_increment_ref_count(charp_substring(self,start_480[i_496],end_481[i_496]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_497));
                /* U13 */match_string_497 = come_decrement_ref_count2(match_string_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_488==count) {
                return (_Bool)1;
            }
            if(            offset_478==end_481[0]) {
                offset_478++;
            }
            else {
                offset_478=end_481[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_494;
struct list_item$1charph* prev_it_495;
struct list$1charph* __result290__;
    it_494=self->head;
    while(it_494!=((void*)0)) {
        prev_it_495=it_494;
        it_494=it_494->next;
        /*i*/come_call_finalizer3(prev_it_495,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

int wstring_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return 0;
    }
    return string_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
    return left==right;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
unsigned int* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value416=wchar_tp_multiply(str,n)));
    /* U11 */__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
unsigned int* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value417=wchar_tp_multiply(str,n)));
    /* U11 */__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
    return come_regex_equals(left,right);
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
    return !come_regex_equals(left,right);
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
void* __right_value418 = (void*)0;
unsigned int* result_498;
unsigned int* __result293__;
    result_498=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1194, "int"));
    wcscpy(result_498,left);
    wcscat(result_498,right);
    __result293__ = gComeFunResultObject = __result_obj__ = result_498;
    /* U13 */result_498 = come_decrement_ref_count2(result_498, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
unsigned int* result_499;
unsigned int* __result294__;
    result_499=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1204, "int"));
    wcscpy(result_499,left);
    wcscat(result_499,right);
    __result294__ = gComeFunResultObject = __result_obj__ = result_499;
    /* U13 */result_499 = come_decrement_ref_count2(result_499, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_500;
    head_500=strstr(str,search_str);
    if(    head_500==((void*)0)) {
        return default_value;
    }
    return head_500-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_501;
int result_505;
int offset_506;
const char* err_507;
int erro_ofs_508;
int options_509;
char* str_510;
struct real_pcre8_or_16* re_511;
int options_512;
int len_513;
int regex_result_514;
int i_515;
int i_516;
err_507 = (void*)0;
memset(&erro_ofs_508, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_501=16;
    int start_502[ovec_max_501];
    memset(&start_502, 0, sizeof(int)    *(ovec_max_501)    );
    int end_503[ovec_max_501];
    memset(&end_503, 0, sizeof(int)    *(ovec_max_501)    );
    int ovec_value_504[ovec_max_501*3];
    memset(&ovec_value_504, 0, sizeof(int)    *(ovec_max_501*3)    );
    result_505=default_value;
    offset_506=0;
    options_509=reg->options;
    str_510=reg->str;
    re_511=reg->re;
    while((_Bool)1) {
        options_512=2097152;
        len_513=strlen(self);
        regex_result_514=pcre_exec(re_511,(struct pcre_extra*)0,self,len_513,offset_506,options_512,ovec_value_504,ovec_max_501*3);
        for(        i_515=0;        i_515<ovec_max_501;        i_515++        ){
            start_502[i_515]=ovec_value_504[i_515*2];
        }
        for(        i_516=0;        i_516<ovec_max_501;        i_516++        ){
            end_503[i_516]=ovec_value_504[i_516*2+1];
        }
        if(        regex_result_514==1||regex_result_514>0) {
            result_505=start_502[0];
            break;
        }
        {
            break;
        }
    }
    return result_505;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_517;
void* __right_value420 = (void*)0;
char* __result295__;
void* __right_value421 = (void*)0;
char* __result296__;
    len_517=strlen(self);
    if(    strcmp(self,"")==0) {
        __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value420=__builtin_string(self)));
        /* U11 */__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    if(    index<0) {
        index+=len_517;
    }
    if(    index>=len_517) {
        index=len_517-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value421=__builtin_string(self)));
    /* U11 */__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_518;
void* __right_value422 = (void*)0;
char* result_519;
int i_520;
char* __result297__;
    len_518=strlen(str)*n+1;
    result_519=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_518)), "libcomelang-str.c", 1305, "char"));
    result_519[0]=0;
    for(    i_520=0;    i_520<n;    i_520++    ){
        strcat(result_519,str);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_519;
    /* U13 */result_519 = come_decrement_ref_count2(result_519, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
char* __result298__;
int offset_521;
int ovec_max_522;
const char* err_526;
int erro_ofs_527;
int options_528;
char* str_529;
struct real_pcre8_or_16* re_530;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct buffer* result_531;
int options_532;
int len_533;
int regex_result_534;
int i_535;
int i_536;
void* __right_value426 = (void*)0;
char* str_537;
void* __right_value427 = (void*)0;
char* str_538;
void* __right_value428 = (void*)0;
char* str_539;
void* __right_value429 = (void*)0;
char* __result299__;
err_526 = (void*)0;
memset(&erro_ofs_527, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value423=__builtin_string(self)));
        /* U11 */__right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    offset_521=0;
    ovec_max_522=16;
    int start_523[ovec_max_522];
    memset(&start_523, 0, sizeof(int)    *(ovec_max_522)    );
    int end_524[ovec_max_522];
    memset(&end_524, 0, sizeof(int)    *(ovec_max_522)    );
    int ovec_value_525[ovec_max_522*3];
    memset(&ovec_value_525, 0, sizeof(int)    *(ovec_max_522*3)    );
    options_528=reg->options;
    str_529=reg->str;
    re_530=reg->re;
    result_531=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1336, "buffer"))));
    while((_Bool)1) {
        options_532=2097152;
        len_533=strlen(self);
        regex_result_534=pcre_exec(re_530,(struct pcre_extra*)0,self,len_533,offset_521,options_532,ovec_value_525,ovec_max_522*3);
        for(        i_535=0;        i_535<ovec_max_522;        i_535++        ){
            start_523[i_535]=ovec_value_525[i_535*2];
        }
        for(        i_536=0;        i_536<ovec_max_522;        i_536++        ){
            end_524[i_536]=ovec_value_525[i_536*2+1];
        }
        if(        regex_result_534==1) {
            str_537=(char*)come_increment_ref_count(charp_substring(self,offset_521,start_523[0]));
            buffer_append_str(result_531,str_537);
            buffer_append_str(result_531,replace);
            if(            offset_521==end_524[0]) {
                offset_521++;
            }
            else {
                offset_521=end_524[0];
            }
            if(            !reg->global) {
                str_538=(char*)come_increment_ref_count(charp_substring(self,offset_521,-1));
                buffer_append_str(result_531,str_538);
                /* U13 */str_538 = come_decrement_ref_count2(str_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_538 = come_decrement_ref_count2(str_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_539=(char*)come_increment_ref_count(charp_substring(self,offset_521,-1));
            buffer_append_str(result_531,str_539);
            /* U13 */str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value429=buffer_to_string(result_531)));
    /*i*/come_call_finalizer3(result_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value430 = (void*)0;
char* __result300__;
int offset_540;
int ovec_max_541;
const char* err_545;
int erro_ofs_546;
int options_547;
char* str_548;
struct real_pcre8_or_16* re_549;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* result_550;
int n_551;
int options_552;
int len_553;
int regex_result_554;
int i_555;
int i_556;
void* __right_value433 = (void*)0;
char* str_557;
void* __right_value434 = (void*)0;
char* str_558;
void* __right_value435 = (void*)0;
char* str_559;
void* __right_value436 = (void*)0;
char* str_560;
void* __right_value437 = (void*)0;
char* __result301__;
err_545 = (void*)0;
memset(&erro_ofs_546, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value430=__builtin_string(self)));
        /* U11 */__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    offset_540=0;
    ovec_max_541=16;
    int start_542[ovec_max_541];
    memset(&start_542, 0, sizeof(int)    *(ovec_max_541)    );
    int end_543[ovec_max_541];
    memset(&end_543, 0, sizeof(int)    *(ovec_max_541)    );
    int ovec_value_544[ovec_max_541*3];
    memset(&ovec_value_544, 0, sizeof(int)    *(ovec_max_541*3)    );
    options_547=reg->options;
    str_548=reg->str;
    re_549=reg->re;
    result_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1402, "buffer"))));
    n_551=0;
    while((_Bool)1) {
        options_552=2097152;
        len_553=strlen(self);
        regex_result_554=pcre_exec(re_549,(struct pcre_extra*)0,self,len_553,offset_540,options_552,ovec_value_544,ovec_max_541*3);
        for(        i_555=0;        i_555<ovec_max_541;        i_555++        ){
            start_542[i_555]=ovec_value_544[i_555*2];
        }
        for(        i_556=0;        i_556<ovec_max_541;        i_556++        ){
            end_543[i_556]=ovec_value_544[i_556*2+1];
        }
        if(        regex_result_554==1) {
            n_551++;
            str_557=(char*)come_increment_ref_count(charp_substring(self,offset_540,start_542[0]));
            buffer_append_str(result_550,str_557);
            buffer_append_str(result_550,replace);
            if(            offset_540==end_543[0]) {
                offset_540++;
            }
            else {
                offset_540=end_543[0];
            }
            if(            !reg->global) {
                str_558=(char*)come_increment_ref_count(charp_substring(self,offset_540,-1));
                buffer_append_str(result_550,str_558);
                /* U13 */str_558 = come_decrement_ref_count2(str_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_558 = come_decrement_ref_count2(str_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_551==count) {
                str_559=(char*)come_increment_ref_count(charp_substring(self,offset_540,-1));
                buffer_append_str(result_550,str_559);
                /* U13 */str_559 = come_decrement_ref_count2(str_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_559 = come_decrement_ref_count2(str_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_560=(char*)come_increment_ref_count(charp_substring(self,offset_540,-1));
            buffer_append_str(result_550,str_560);
            /* U13 */str_560 = come_decrement_ref_count2(str_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_560 = come_decrement_ref_count2(str_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value437=buffer_to_string(result_550)));
    /*i*/come_call_finalizer3(result_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1charph* result_561;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* buf_562;
int i_563;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1charph* __result302__;
    result_561=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1461, "list$1charph"))));
    buf_562=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1463, "buffer"))));
    for(    i_563=0;    i_563<charp_length(self);    i_563++    ){
        if(        strstr(self+i_563,str)==self+i_563) {
            list$1charph_push_back(result_561,(char*)come_increment_ref_count(__builtin_string(buf_562->buf)));
            buffer_reset(buf_562);
            i_563+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_562,self[i_563]);
        }
    }
    if(    buffer_length(buf_562)!=0) {
        list$1charph_push_back(result_561,(char*)come_increment_ref_count(__builtin_string(buf_562->buf)));
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_561;
    /*i*/come_call_finalizer3(result_561,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_562,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1charph* __result303__;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1charph* result_564;
int offset_565;
int ovec_max_566;
const char* err_570;
int erro_ofs_571;
int options_572;
char* str_573;
struct real_pcre8_or_16* re_574;
int options_575;
int len_576;
int regex_result_577;
int i_578;
int i_579;
void* __right_value448 = (void*)0;
char* str_580;
void* __right_value449 = (void*)0;
char* str_581;
int i_582;
void* __right_value450 = (void*)0;
char* match_string_583;
struct list$1charph* __result304__;
err_570 = (void*)0;
memset(&erro_ofs_571, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result303__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value445=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1485, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value445,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_564=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1487, "list$1charph"))));
    offset_565=0;
    ovec_max_566=16;
    int start_567[ovec_max_566];
    memset(&start_567, 0, sizeof(int)    *(ovec_max_566)    );
    int end_568[ovec_max_566];
    memset(&end_568, 0, sizeof(int)    *(ovec_max_566)    );
    int ovec_value_569[ovec_max_566*3];
    memset(&ovec_value_569, 0, sizeof(int)    *(ovec_max_566*3)    );
    options_572=reg->options;
    str_573=reg->str;
    re_574=reg->re;
    while((_Bool)1) {
        options_575=2097152;
        len_576=strlen(self);
        regex_result_577=pcre_exec(re_574,(struct pcre_extra*)0,self,len_576,offset_565,options_575,ovec_value_569,ovec_max_566*3);
        for(        i_578=0;        i_578<ovec_max_566;        i_578++        ){
            start_567[i_578]=ovec_value_569[i_578*2];
        }
        for(        i_579=0;        i_579<ovec_max_566;        i_579++        ){
            end_568[i_579]=ovec_value_569[i_579*2+1];
        }
        if(        regex_result_577==1) {
            str_580=(char*)come_increment_ref_count(charp_substring(self,start_567[0],end_568[0]));
            list$1charph_push_back(result_564,(char*)come_increment_ref_count(str_580));
            if(            offset_565==end_568[0]) {
                offset_565++;
            }
            else {
                offset_565=end_568[0];
            }
            /* U13 */str_580 = come_decrement_ref_count2(str_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_577>1) {
            str_581=(char*)come_increment_ref_count(charp_substring(self,start_567[0],end_568[0]));
            list$1charph_push_back(result_564,(char*)come_increment_ref_count(str_581));
            if(            offset_565==end_568[0]) {
                offset_565++;
            }
            else {
                offset_565=end_568[0];
            }
            for(            i_582=1;            i_582<regex_result_577;            i_582++            ){
                match_string_583=(char*)come_increment_ref_count(charp_substring(self,start_567[i_582],end_568[i_582]));
                list$1charph_push_back(result_564,(char*)come_increment_ref_count(match_string_583));
                /* U13 */match_string_583 = come_decrement_ref_count2(match_string_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_581 = come_decrement_ref_count2(str_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_564;
    /*i*/come_call_finalizer3(result_564,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1charph* __result305__;
const char* err_584;
int erro_ofs_585;
int options_586;
char* str_587;
struct real_pcre8_or_16* re_588;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1charph* result_589;
int offset_590;
int ovec_max_591;
int options_595;
int len_596;
int regex_result_597;
int i_598;
int i_599;
void* __right_value455 = (void*)0;
char* str_600;
void* __right_value456 = (void*)0;
char* str_601;
int i_602;
void* __right_value457 = (void*)0;
char* match_str_603;
void* __right_value458 = (void*)0;
char* str_604;
struct list$1charph* __result306__;
err_584 = (void*)0;
memset(&erro_ofs_585, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result305__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value452=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1561, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value452,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    options_586=reg->options;
    str_587=reg->str;
    re_588=reg->re;
    result_589=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1571, "list$1charph"))));
    offset_590=0;
    ovec_max_591=16;
    int start_592[ovec_max_591];
    memset(&start_592, 0, sizeof(int)    *(ovec_max_591)    );
    int end_593[ovec_max_591];
    memset(&end_593, 0, sizeof(int)    *(ovec_max_591)    );
    int ovec_value_594[ovec_max_591*3];
    memset(&ovec_value_594, 0, sizeof(int)    *(ovec_max_591*3)    );
    while((_Bool)1) {
        options_595=2097152;
        len_596=strlen(self);
        regex_result_597=pcre_exec(re_588,(struct pcre_extra*)0,self,len_596,offset_590,options_595,ovec_value_594,ovec_max_591*3);
        for(        i_598=0;        i_598<ovec_max_591;        i_598++        ){
            start_592[i_598]=ovec_value_594[i_598*2];
        }
        for(        i_599=0;        i_599<ovec_max_591;        i_599++        ){
            end_593[i_599]=ovec_value_594[i_599*2+1];
        }
        if(        regex_result_597==1) {
            str_600=(char*)come_increment_ref_count(charp_substring(self,offset_590,start_592[0]));
            list$1charph_push_back(result_589,(char*)come_increment_ref_count(str_600));
            if(            offset_590==end_593[0]) {
                offset_590++;
            }
            else {
                offset_590=end_593[0];
            }
            /* U13 */str_600 = come_decrement_ref_count2(str_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_597>1) {
            str_601=(char*)come_increment_ref_count(charp_substring(self,offset_590,start_592[0]));
            list$1charph_push_back(result_589,(char*)come_increment_ref_count(str_601));
            if(            offset_590==end_593[0]) {
                offset_590++;
            }
            else {
                offset_590=end_593[0];
            }
            for(            i_602=1;            i_602<regex_result_597;            i_602++            ){
                match_str_603=(char*)come_increment_ref_count(charp_substring(self,start_592[i_602],end_593[i_602]));
                list$1charph_push_back(result_589,(char*)come_increment_ref_count(match_str_603));
                /* U13 */match_str_603 = come_decrement_ref_count2(match_str_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_601 = come_decrement_ref_count2(str_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_590<charp_length(self)) {
        str_604=(char*)come_increment_ref_count(charp_substring(self,offset_590,-1));
        list$1charph_push_back(result_589,(char*)come_increment_ref_count(str_604));
        /* U13 */str_604 = come_decrement_ref_count2(str_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_589;
    /*i*/come_call_finalizer3(result_589,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_605;
int ovec_max_606;
const char* err_610;
int erro_ofs_611;
int options_612;
char* str_613;
struct real_pcre8_or_16* re_614;
int options_615;
int len_616;
int regex_result_617;
int i_618;
int i_619;
err_610 = (void*)0;
memset(&erro_ofs_611, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_605=0;
    ovec_max_606=16;
    int start_607[ovec_max_606];
    memset(&start_607, 0, sizeof(int)    *(ovec_max_606)    );
    int end_608[ovec_max_606];
    memset(&end_608, 0, sizeof(int)    *(ovec_max_606)    );
    int ovec_value_609[ovec_max_606*3];
    memset(&ovec_value_609, 0, sizeof(int)    *(ovec_max_606*3)    );
    options_612=reg->options;
    str_613=reg->str;
    re_614=reg->re;
    while((_Bool)1) {
        options_615=2097152;
        len_616=strlen(self);
        regex_result_617=pcre_exec(re_614,(struct pcre_extra*)0,self,len_616,offset_605,options_615,ovec_value_609,ovec_max_606*3);
        for(        i_618=0;        i_618<ovec_max_606;        i_618++        ){
            start_607[i_618]=ovec_value_609[i_618*2];
        }
        for(        i_619=0;        i_619<ovec_max_606;        i_619++        ){
            end_608[i_619]=ovec_value_609[i_619*2+1];
        }
        if(        regex_result_617>0) {
            return (_Bool)1;
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1charph* __result307__;
const char* err_620;
int erro_ofs_621;
int options_622;
char* str_623;
struct real_pcre8_or_16* re_624;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1charph* result_625;
int offset_626;
int ovec_max_627;
int n_631;
int options_632;
int len_633;
int regex_result_634;
int i_635;
int i_636;
void* __right_value463 = (void*)0;
char* str_637;
void* __right_value464 = (void*)0;
char* str_638;
int i_639;
void* __right_value465 = (void*)0;
char* match_str_640;
void* __right_value466 = (void*)0;
char* str_641;
struct list$1charph* __result308__;
err_620 = (void*)0;
memset(&erro_ofs_621, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result307__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value460=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1689, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value460,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    options_622=reg->options;
    str_623=reg->str;
    re_624=reg->re;
    result_625=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1699, "list$1charph"))));
    offset_626=0;
    ovec_max_627=16;
    int start_628[ovec_max_627];
    memset(&start_628, 0, sizeof(int)    *(ovec_max_627)    );
    int end_629[ovec_max_627];
    memset(&end_629, 0, sizeof(int)    *(ovec_max_627)    );
    int ovec_value_630[ovec_max_627*3];
    memset(&ovec_value_630, 0, sizeof(int)    *(ovec_max_627*3)    );
    n_631=0;
    while((_Bool)1) {
        options_632=2097152;
        len_633=strlen(self);
        regex_result_634=pcre_exec(re_624,(struct pcre_extra*)0,self,len_633,offset_626,options_632,ovec_value_630,ovec_max_627*3);
        for(        i_635=0;        i_635<ovec_max_627;        i_635++        ){
            start_628[i_635]=ovec_value_630[i_635*2];
        }
        for(        i_636=0;        i_636<ovec_max_627;        i_636++        ){
            end_629[i_636]=ovec_value_630[i_636*2+1];
        }
        if(        regex_result_634==1) {
            str_637=(char*)come_increment_ref_count(charp_substring(self,offset_626,start_628[0]));
            list$1charph_push_back(result_625,(char*)come_increment_ref_count(str_637));
            if(            offset_626==end_629[0]) {
                offset_626++;
            }
            else {
                offset_626=end_629[0];
            }
            /* U13 */str_637 = come_decrement_ref_count2(str_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_634>1) {
            str_638=(char*)come_increment_ref_count(charp_substring(self,offset_626,start_628[0]));
            list$1charph_push_back(result_625,(char*)come_increment_ref_count(str_638));
            if(            offset_626==end_629[0]) {
                offset_626++;
            }
            else {
                offset_626=end_629[0];
            }
            for(            i_639=1;            i_639<regex_result_634;            i_639++            ){
                match_str_640=(char*)come_increment_ref_count(charp_substring(self,start_628[i_639],end_629[i_639]));
                list$1charph_push_back(result_625,(char*)come_increment_ref_count(match_str_640));
                /* U13 */match_str_640 = come_decrement_ref_count2(match_str_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_638 = come_decrement_ref_count2(str_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_631++;
        if(        maxsplit==n_631) {
            break;
        }
    }
    if(    offset_626<charp_length(self)) {
        str_641=(char*)come_increment_ref_count(charp_substring(self,offset_626,-1));
        list$1charph_push_back(result_625,(char*)come_increment_ref_count(str_641));
        /* U13 */str_641 = come_decrement_ref_count2(str_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_625;
    /*i*/come_call_finalizer3(result_625,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_642;
int erro_ofs_643;
int options_644;
char* str_645;
struct real_pcre8_or_16* re_646;
void* __right_value467 = (void*)0;
char* self2_647;
int ovec_max_648;
int result_652;
int offset_653;
int n_654;
int options_655;
int len_656;
int regex_result_657;
int i_658;
int i_659;
int __result309__;
err_642 = (void*)0;
memset(&erro_ofs_643, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_644=reg->options;
    str_645=reg->str;
    re_646=reg->re;
    self2_647=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_648=16;
    int start_649[ovec_max_648];
    memset(&start_649, 0, sizeof(int)    *(ovec_max_648)    );
    int end_650[ovec_max_648];
    memset(&end_650, 0, sizeof(int)    *(ovec_max_648)    );
    int ovec_value_651[ovec_max_648*3];
    memset(&ovec_value_651, 0, sizeof(int)    *(ovec_max_648*3)    );
    result_652=default_value;
    offset_653=0;
    n_654=0;
    while((_Bool)1) {
        options_655=2097152;
        len_656=strlen(self2_647);
        regex_result_657=pcre_exec(re_646,(struct pcre_extra*)0,self2_647,len_656,offset_653,options_655,ovec_value_651,ovec_max_648*3);
        for(        i_658=0;        i_658<ovec_max_648;        i_658++        ){
            start_649[i_658]=ovec_value_651[i_658*2];
        }
        for(        i_659=0;        i_659<ovec_max_648;        i_659++        ){
            end_650[i_659]=ovec_value_651[i_659*2+1];
        }
        if(        regex_result_657>0) {
            n_654++;
            if(            offset_653==end_650[0]) {
                offset_653++;
            }
            else {
                offset_653=end_650[0];
            }
            if(            n_654==count) {
                result_652=strlen(self)-end_650[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result309__ = result_652;
    /* U13 */self2_647 = come_decrement_ref_count2(self2_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result309__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_660;
int ovec_max_661;
const char* err_665;
int erro_ofs_666;
int options_667;
char* str_668;
struct real_pcre8_or_16* re_669;
int n_670;
int options_671;
int len_672;
int regex_result_673;
int i_674;
int i_675;
err_665 = (void*)0;
memset(&erro_ofs_666, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_660=0;
    ovec_max_661=16;
    int start_662[ovec_max_661];
    memset(&start_662, 0, sizeof(int)    *(ovec_max_661)    );
    int end_663[ovec_max_661];
    memset(&end_663, 0, sizeof(int)    *(ovec_max_661)    );
    int ovec_value_664[ovec_max_661*3];
    memset(&ovec_value_664, 0, sizeof(int)    *(ovec_max_661*3)    );
    options_667=reg->options;
    str_668=reg->str;
    re_669=reg->re;
    n_670=0;
    while((_Bool)1) {
        options_671=2097152;
        len_672=strlen(self);
        regex_result_673=pcre_exec(re_669,(struct pcre_extra*)0,self,len_672,offset_660,options_671,ovec_value_664,ovec_max_661*3);
        for(        i_674=0;        i_674<ovec_max_661;        i_674++        ){
            start_662[i_674]=ovec_value_664[i_674*2];
        }
        for(        i_675=0;        i_675<ovec_max_661;        i_675++        ){
            end_663[i_675]=ovec_value_664[i_675*2+1];
        }
        if(        regex_result_673>0) {
            n_670++;
            if(            count==n_670) {
                return (_Bool)1;
            }
            if(            offset_660==end_663[0]) {
                offset_660++;
            }
            else {
                offset_660=end_663[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value468 = (void*)0;
char* __result310__;
int offset_676;
int ovec_max_677;
const char* err_681;
int erro_ofs_682;
int options_683;
char* str_684;
struct real_pcre8_or_16* re_685;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct buffer* result_686;
int options_687;
int len_688;
int regex_result_689;
int i_690;
int i_691;
void* __right_value471 = (void*)0;
char* str_692;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1charph* group_strings_693;
void* __right_value474 = (void*)0;
char* match_string_694;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* block_result_695;
void* __right_value477 = (void*)0;
char* str_696;
void* __right_value478 = (void*)0;
char* str_697;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct list$1charph* group_strings_698;
int i_699;
void* __right_value481 = (void*)0;
char* match_string_700;
void* __right_value482 = (void*)0;
char* match_string_701;
void* __right_value483 = (void*)0;
char* block_result_702;
void* __right_value484 = (void*)0;
char* str_703;
void* __right_value485 = (void*)0;
char* str_704;
void* __right_value486 = (void*)0;
char* __result311__;
err_681 = (void*)0;
memset(&erro_ofs_682, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value468=__builtin_string("")));
        /* U11 */__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    offset_676=0;
    ovec_max_677=16;
    int start_678[ovec_max_677];
    memset(&start_678, 0, sizeof(int)    *(ovec_max_677)    );
    int end_679[ovec_max_677];
    memset(&end_679, 0, sizeof(int)    *(ovec_max_677)    );
    int ovec_value_680[ovec_max_677*3];
    memset(&ovec_value_680, 0, sizeof(int)    *(ovec_max_677*3)    );
    options_683=reg->options;
    str_684=reg->str;
    re_685=reg->re;
    result_686=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1920, "buffer"))));
    while((_Bool)1) {
        options_687=2097152;
        len_688=strlen(self);
        regex_result_689=pcre_exec(re_685,(struct pcre_extra*)0,self,len_688,offset_676,options_687,ovec_value_680,ovec_max_677*3);
        for(        i_690=0;        i_690<ovec_max_677;        i_690++        ){
            start_678[i_690]=ovec_value_680[i_690*2];
        }
        for(        i_691=0;        i_691<ovec_max_677;        i_691++        ){
            end_679[i_691]=ovec_value_680[i_691*2+1];
        }
        if(        regex_result_689==1) {
            str_692=(char*)come_increment_ref_count(charp_substring(self,offset_676,start_678[0]));
            buffer_append_str(result_686,str_692);
            group_strings_693=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1940, "list$1charph"))));
            match_string_694=(char*)come_increment_ref_count(charp_substring(self,start_678[0],end_679[0]));
            list$1charph_push_back(group_strings_693,(char*)come_increment_ref_count(charp_substring(self,start_678[0],end_679[0])));
            block_result_695=(char*)come_increment_ref_count(block(parent,match_string_694,group_strings_693));
            buffer_append_str(result_686,block_result_695);
            if(            offset_676==end_679[0]) {
                offset_676++;
            }
            else {
                offset_676=end_679[0];
            }
            if(            !reg->global) {
                str_696=(char*)come_increment_ref_count(charp_substring(self,offset_676,-1));
                buffer_append_str(result_686,str_696);
                /* U13 */str_696 = come_decrement_ref_count2(str_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_692 = come_decrement_ref_count2(str_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_693,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_694 = come_decrement_ref_count2(match_string_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_695 = come_decrement_ref_count2(block_result_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_696 = come_decrement_ref_count2(str_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_692 = come_decrement_ref_count2(str_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_693,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_694 = come_decrement_ref_count2(match_string_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_695 = come_decrement_ref_count2(block_result_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_689>1) {
            str_697=(char*)come_increment_ref_count(charp_substring(self,offset_676,start_678[0]));
            buffer_append_str(result_686,str_697);
            if(            offset_676==end_679[0]) {
                offset_676++;
            }
            else {
                offset_676=end_679[0];
            }
            group_strings_698=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1975, "list$1charph"))));
            for(            i_699=1;            i_699<regex_result_689;            i_699++            ){
                match_string_700=(char*)come_increment_ref_count(charp_substring(self,start_678[i_699],end_679[i_699]));
                list$1charph_push_back(group_strings_698,(char*)come_increment_ref_count(match_string_700));
                /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_701=(char*)come_increment_ref_count(charp_substring(self,start_678[0],end_679[0]));
            block_result_702=(char*)come_increment_ref_count(block(parent,match_string_701,group_strings_698));
            buffer_append_str(result_686,block_result_702);
            if(            !reg->global) {
                str_703=(char*)come_increment_ref_count(charp_substring(self,offset_676,-1));
                buffer_append_str(result_686,str_703);
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_697 = come_decrement_ref_count2(str_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_701 = come_decrement_ref_count2(match_string_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_702 = come_decrement_ref_count2(block_result_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_697 = come_decrement_ref_count2(str_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_701 = come_decrement_ref_count2(match_string_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_702 = come_decrement_ref_count2(block_result_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_704=(char*)come_increment_ref_count(charp_substring(self,offset_676,-1));
            buffer_append_str(result_686,str_704);
            /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value486=buffer_to_string(result_686)));
    /*i*/come_call_finalizer3(result_686,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value487 = (void*)0;
char* __result312__;
int offset_705;
int ovec_max_706;
const char* err_710;
int erro_ofs_711;
int options_712;
char* str_713;
struct real_pcre8_or_16* re_714;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct buffer* result_715;
int n_716;
int options_717;
int len_718;
int regex_result_719;
int i_720;
int i_721;
void* __right_value490 = (void*)0;
char* str_722;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1charph* group_strings_723;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* match_string_724;
void* __right_value495 = (void*)0;
char* block_result_725;
void* __right_value496 = (void*)0;
char* str_726;
void* __right_value497 = (void*)0;
char* str_727;
void* __right_value498 = (void*)0;
char* str_728;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1charph* group_strings_729;
int i_730;
void* __right_value501 = (void*)0;
char* match_string_731;
void* __right_value502 = (void*)0;
char* match_string_732;
void* __right_value503 = (void*)0;
char* block_result_733;
void* __right_value504 = (void*)0;
char* str_734;
void* __right_value505 = (void*)0;
char* str_735;
void* __right_value506 = (void*)0;
char* str_736;
void* __right_value507 = (void*)0;
char* __result313__;
err_710 = (void*)0;
memset(&erro_ofs_711, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value487=__builtin_string("")));
        /* U11 */__right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    offset_705=0;
    ovec_max_706=16;
    int start_707[ovec_max_706];
    memset(&start_707, 0, sizeof(int)    *(ovec_max_706)    );
    int end_708[ovec_max_706];
    memset(&end_708, 0, sizeof(int)    *(ovec_max_706)    );
    int ovec_value_709[ovec_max_706*3];
    memset(&ovec_value_709, 0, sizeof(int)    *(ovec_max_706*3)    );
    options_712=reg->options;
    str_713=reg->str;
    re_714=reg->re;
    result_715=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 2024, "buffer"))));
    n_716=0;
    while((_Bool)1) {
        options_717=2097152;
        len_718=strlen(self);
        regex_result_719=pcre_exec(re_714,(struct pcre_extra*)0,self,len_718,offset_705,options_717,ovec_value_709,ovec_max_706*3);
        for(        i_720=0;        i_720<ovec_max_706;        i_720++        ){
            start_707[i_720]=ovec_value_709[i_720*2];
        }
        for(        i_721=0;        i_721<ovec_max_706;        i_721++        ){
            end_708[i_721]=ovec_value_709[i_721*2+1];
        }
        if(        regex_result_719==1) {
            n_716++;
            str_722=(char*)come_increment_ref_count(charp_substring(self,offset_705,start_707[0]));
            buffer_append_str(result_715,str_722);
            group_strings_723=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2047, "list$1charph"))));
            list$1charph_push_back(group_strings_723,(char*)come_increment_ref_count(charp_substring(self,start_707[0],end_708[0])));
            match_string_724=(char*)come_increment_ref_count(charp_substring(self,start_707[0],end_708[0]));
            block_result_725=(char*)come_increment_ref_count(block(parent,match_string_724,group_strings_723));
            buffer_append_str(result_715,block_result_725);
            if(            offset_705==end_708[0]) {
                offset_705++;
            }
            else {
                offset_705=end_708[0];
            }
            if(            !reg->global) {
                str_726=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_726);
                /* U13 */str_726 = come_decrement_ref_count2(str_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_722 = come_decrement_ref_count2(str_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_724 = come_decrement_ref_count2(match_string_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_725 = come_decrement_ref_count2(block_result_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_726 = come_decrement_ref_count2(str_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_716==count) {
                str_727=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_727);
                /* U13 */str_727 = come_decrement_ref_count2(str_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_722 = come_decrement_ref_count2(str_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_724 = come_decrement_ref_count2(match_string_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_725 = come_decrement_ref_count2(block_result_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_727 = come_decrement_ref_count2(str_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_722 = come_decrement_ref_count2(str_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_724 = come_decrement_ref_count2(match_string_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_725 = come_decrement_ref_count2(block_result_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_719>1) {
            n_716++;
            str_728=(char*)come_increment_ref_count(charp_substring(self,offset_705,start_707[0]));
            buffer_append_str(result_715,str_728);
            if(            offset_705==end_708[0]) {
                offset_705++;
            }
            else {
                offset_705=end_708[0];
            }
            group_strings_729=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2090, "list$1charph"))));
            for(            i_730=1;            i_730<regex_result_719;            i_730++            ){
                match_string_731=(char*)come_increment_ref_count(charp_substring(self,start_707[i_730],end_708[i_730]));
                list$1charph_push_back(group_strings_729,(char*)come_increment_ref_count(match_string_731));
                /* U13 */match_string_731 = come_decrement_ref_count2(match_string_731, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_732=(char*)come_increment_ref_count(charp_substring(self,start_707[0],end_708[0]));
            block_result_733=(char*)come_increment_ref_count(block(parent,match_string_732,group_strings_729));
            buffer_append_str(result_715,block_result_733);
            if(            !reg->global) {
                str_734=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_734);
                /* U13 */str_734 = come_decrement_ref_count2(str_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_728 = come_decrement_ref_count2(str_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_729,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_732 = come_decrement_ref_count2(match_string_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_733 = come_decrement_ref_count2(block_result_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_734 = come_decrement_ref_count2(str_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_716==count) {
                str_735=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_735);
                /* U13 */str_735 = come_decrement_ref_count2(str_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_728 = come_decrement_ref_count2(str_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_729,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_732 = come_decrement_ref_count2(match_string_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_733 = come_decrement_ref_count2(block_result_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_735 = come_decrement_ref_count2(str_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_728 = come_decrement_ref_count2(str_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_729,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_732 = come_decrement_ref_count2(match_string_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_733 = come_decrement_ref_count2(block_result_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_736=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
            buffer_append_str(result_715,str_736);
            /* U13 */str_736 = come_decrement_ref_count2(str_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_736 = come_decrement_ref_count2(str_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value507=buffer_to_string(result_715)));
    /*i*/come_call_finalizer3(result_715,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_737;
unsigned int* p_738;
    result_737=0;
    p_738=value;
    while(*p_738) {
        result_737+=(*p_738);
        p_738++;
    }
    return result_737;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
    return value;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
    return left==right;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__=(void*)0;
void* __right_value508 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value508=xsprintf("%ls",wc)));
    /* U11 */__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value509 = (void*)0;
char* result_739;
void* __right_value510 = (void*)0;
char* __result315__;
char* __result316__;
    result_739=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_739[string_length(result_739)-1]==10) {
        __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value510=string_substring(result_739,0,-2)));
        /* U13 */result_739 = come_decrement_ref_count2(result_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_739;
    /* U13 */result_739 = come_decrement_ref_count2(result_739, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
char* __result317__;
char* result_740;
void* __right_value512 = (void*)0;
char* result2_741;
char* __result318__;
    if(    path==((void*)0)) {
        __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value511=__builtin_string("")));
        /* U11 */__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_740=realpath(path,((void*)0));
    result2_741=(char*)come_increment_ref_count(__builtin_string(result_740));
    free(result_740);
    __result318__ = gComeFunResultObject = __result_obj__ = result2_741;
    /* U13 */result2_741 = come_decrement_ref_count2(result2_741, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
char* __result319__;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
char* __result320__;
    if(    path==((void*)0)) {
        __result319__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value513=__builtin_string("")));
        /* U11 */__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value515=__builtin_string(dirname(((char*)(__right_value514=__builtin_string(path)))))));
    /* U11 */__right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

unsigned long  int xwcslen(unsigned int* wstr){
unsigned int* p_742;
unsigned long  int len_743;
    p_742=wstr;
    len_743=0;
    while(*p_742) {
        p_742++;
        len_743++;
    }
    return len_743;
}

