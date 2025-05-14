/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct tm;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
typedef unsigned long  int size_t;

typedef __builtin_va_list __gnuc_va_list;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char __int_least8_t;

typedef unsigned char __uint_least8_t;

typedef short int __int_least16_t;

typedef unsigned short int __uint_least16_t;

typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;

typedef long  int __int_least64_t;

typedef unsigned long  int __uint_least64_t;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

struct anonymous_typeX1
{
    int __val[2];
};

typedef struct anonymous_typeX1 __fsid_t;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int __loff_t;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

union anonymous_typeZ3
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};

typedef struct anonymous_typeX2 __mbstate_t;

struct _G_fpos_t
{
    long  int __pos;
    struct anonymous_typeX2 __state;
};

typedef struct _G_fpos_t __fpos_t;

struct _G_fpos64_t
{
    long  int __pos;
    struct anonymous_typeX2 __state;
};

typedef struct _G_fpos64_t __fpos64_t;

typedef struct _IO_FILE __FILE;

typedef struct _IO_FILE FILE;

typedef void _IO_lock_t;

struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long  int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long  int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    unsigned long  int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(unsigned long  int)];
};

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long  int*,int);

typedef int (*cookie_close_function_t)(void*);

struct _IO_cookie_io_functions_t
{
    long  int (*read)(void*,char*,unsigned long  int);
    long  int (*write)(void*,const char*,unsigned long  int);
    int (*seek)(void*,long  int*,int);
    int (*close)(void*);
};

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef __builtin_va_list va_list;

typedef long  int off_t;

typedef long  int off64_t;

typedef long  int ssize_t;

typedef struct _G_fpos_t fpos_t;

typedef struct _G_fpos64_t fpos64_t;

extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef float _Float32;

typedef double _Float64;

typedef double _Float32x;

typedef long  double _Float64x;

typedef int wchar_t;

struct anonymous_typeX5
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX5 div_t;

struct anonymous_typeX6
{
    long  int quot;
    long  int rem;
};

typedef struct anonymous_typeX6 ldiv_t;

struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX7 lldiv_t;

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

typedef struct __locale_struct* __locale_t;

typedef struct __locale_struct* locale_t;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef long  int quad_t;

typedef unsigned long  int u_quad_t;

typedef struct anonymous_typeX1 fsid_t;

typedef long  int loff_t;

typedef unsigned long  int ino_t;

typedef unsigned long  int ino64_t;

typedef unsigned long  int dev_t;

typedef unsigned int gid_t;

typedef unsigned int mode_t;

typedef unsigned long  int nlink_t;

typedef unsigned int uid_t;

typedef int pid_t;

typedef unsigned int id_t;

typedef int daddr_t;

typedef char* caddr_t;

typedef int key_t;

typedef long  int clock_t;

typedef int clockid_t;

typedef long  int time_t;

typedef void* timer_t;

typedef unsigned int useconds_t;

typedef long  int suseconds_t;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char int8_t;

typedef short int int16_t;

typedef int int32_t;

typedef long  int int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  int u_int64_t;

typedef int register_t;

struct anonymous_typeX8
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

typedef struct anonymous_typeX8 __sigset_t;

typedef struct anonymous_typeX8 sigset_t;

struct timeval
{
    long  int tv_sec;
    long  int tv_usec;
};

struct timespec
{
    long  int tv_sec;
    long  int tv_nsec;
};

typedef long  int __fd_mask;

struct anonymous_typeX9
{
    long  int fds_bits[1024/(8*(int)sizeof(long  int))];
};

typedef struct anonymous_typeX9 fd_set;

typedef long  int fd_mask;

typedef long  int blksize_t;

typedef long  int blkcnt_t;

typedef unsigned long  int fsblkcnt_t;

typedef unsigned long  int fsfilcnt_t;

typedef long  int blkcnt64_t;

typedef unsigned long  int fsblkcnt64_t;

typedef unsigned long  int fsfilcnt64_t;

struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};

typedef union anonymous_typeZ10 __atomic_wide_counter;

struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};

typedef struct __pthread_internal_slist __pthread_slist_t;

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list __list;
};

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
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

struct anonymous_typeX12
{
    int __data;
};

typedef struct anonymous_typeX12 __once_flag;

typedef unsigned long  int pthread_t;

union anonymous_typeZ13
{
char __size[4];
int __align;
};

typedef union anonymous_typeZ13 pthread_mutexattr_t;

union anonymous_typeZ14
{
char __size[4];
int __align;
};

typedef union anonymous_typeZ14 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t
{
char __size[56];
long  int __align;
};

typedef union pthread_attr_t pthread_attr_t;

union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[40];
long  int __align;
};

typedef union anonymous_typeZ15 pthread_mutex_t;

union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};

typedef union anonymous_typeZ16 pthread_cond_t;

union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long  int __align;
};

typedef union anonymous_typeZ17 pthread_rwlock_t;

union anonymous_typeZ18
{
char __size[8];
long  int __align;
};

typedef union anonymous_typeZ18 pthread_rwlockattr_t;

typedef int pthread_spinlock_t;

union anonymous_typeZ19
{
char __size[32];
long  int __align;
};

typedef union anonymous_typeZ19 pthread_barrier_t;

union anonymous_typeZ20
{
char __size[4];
int __align;
};

typedef union anonymous_typeZ20 pthread_barrierattr_t;

struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*);

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

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

extern char* program_invocation_name;
extern char* program_invocation_short_name;
typedef int error_t;

enum { _ISupper=(((((0)<8)?(((1<<(0))<<8)):(((1<<(0))>>8))))),
_ISlower=(((((1)<8)?(((1<<(1))<<8)):(((1<<(1))>>8))))),
_ISalpha=(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))),
_ISdigit=(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))),
_ISxdigit=(((((4)<8)?(((1<<(4))<<8)):(((1<<(4))>>8))))),
_ISspace=(((((5)<8)?(((1<<(5))<<8)):(((1<<(5))>>8))))),
_ISprint=(((((6)<8)?(((1<<(6))<<8)):(((1<<(6))>>8))))),
_ISgraph=(((((7)<8)?(((1<<(7))<<8)):(((1<<(7))>>8))))),
_ISblank=(((((8)<8)?(((1<<(8))<<8)):(((1<<(8))>>8))))),
_IScntrl=(((((9)<8)?(((1<<(9))<<8)):(((1<<(9))>>8))))),
_ISpunct=(((((10)<8)?(((1<<(10))<<8)):(((1<<(10))>>8))))),
_ISalnum=(((((11)<8)?(((1<<(11))<<8)):(((1<<(11))>>8)))))
};

typedef unsigned int wint_t;

typedef struct anonymous_typeX2 mbstate_t;

typedef void* any;

typedef char* string;

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
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
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
extern _Bool gComeBareMetal;
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
    _Bool (*no_mutex)(void*);
};

struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
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
    _Bool mUniq;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
};

struct list_item$1sType$ph
{
    struct sType* item;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
};

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    _Bool mAllocaValue;
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
    _Bool mTask;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    _Bool mDefferRightValue;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    _Bool mComma;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute;
    char* mFunAttribute;
    _Bool mGenericsFun;
    _Bool mImmutable;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
    _Bool mConstFun;
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

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
    struct map$2char$phchar$ph* mHeaderStructs;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
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
    struct sType* mObjType;
    char* mObjValue;
    struct sVar* mObjVar;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
};

struct list_item$1sVar$ph
{
    struct sVar* item;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type;
    struct sType* class_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
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
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
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
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2int$bool$
{
    int v1;
    _Bool v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sTrueNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

// source head

// header function
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
struct _IO_FILE* tmpfile64();
char* tmpnam(char anonymous_var_nameX1[20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(struct _IO_FILE* __stream);
int fflush_unlocked(struct _IO_FILE* __stream);
int fcloseall();
struct _IO_FILE* fopen(const char* __filename, const char* __modes);
struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fopen64(const char* __filename, const char* __modes);
struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fdopen(int __fd, const char* __modes);
struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);
struct _IO_FILE* fmemopen(void* __s, unsigned long  int __len, const char* __modes);
struct _IO_FILE* open_memstream(char** __bufloc, unsigned long  int* __sizeloc);
void setbuf(struct _IO_FILE* __stream, char* __buf);
int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, unsigned long  int __n);
void setbuffer(struct _IO_FILE* __stream, char* __buf, unsigned long  int __size);
void setlinebuf(struct _IO_FILE* __stream);
int fprintf(struct _IO_FILE* __stream, const char* __format, ...);
int printf(const char* __format, ...);
int sprintf(char* __s, const char* __format, ...);
int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int vprintf(const char* __format, va_list __arg);
int vsprintf(char* __s, const char* __format, va_list __arg);
int snprintf(char* __s, unsigned long  int __maxlen, const char* __format, ...);
int vsnprintf(char* __s, unsigned long  int __maxlen, const char* __format, va_list __arg);
int vasprintf(char** __ptr, const char* __f, va_list __arg);
int __asprintf(char** __ptr, const char* __fmt, ...);
int asprintf(char** __ptr, const char* __fmt, ...);
int vdprintf(int __fd, const char* __fmt, va_list __arg);
int dprintf(int __fd, const char* __fmt, ...);
int fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int scanf(const char* __format, ...);
int sscanf(const char* __s, const char* __format, ...);
int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int __isoc99_scanf(const char* __format, ...);
int __isoc99_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int vscanf(const char* __format, va_list __arg);
int vsscanf(const char* __s, const char* __format, va_list __arg);
int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int __isoc99_vscanf(const char* __format, va_list __arg);
int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);
int fgetc(struct _IO_FILE* __stream);
int getc(struct _IO_FILE* __stream);
int getchar();
int getc_unlocked(struct _IO_FILE* __stream);
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE* __stream);
int fputc(int __c, struct _IO_FILE* __stream);
int putc(int __c, struct _IO_FILE* __stream);
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE* __stream);
int putc_unlocked(int __c, struct _IO_FILE* __stream);
int putchar_unlocked(int __c);
int getw(struct _IO_FILE* __stream);
int putw(int __w, struct _IO_FILE* __stream);
char* fgets(char* __s, int __n, struct _IO_FILE* __stream);
char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);
long  int __getdelim(char** __lineptr, unsigned long  int* __n, int __delimiter, struct _IO_FILE* __stream);
long  int getdelim(char** __lineptr, unsigned long  int* __n, int __delimiter, struct _IO_FILE* __stream);
long  int getline(char** __lineptr, unsigned long  int* __n, struct _IO_FILE* __stream);
int fputs(const char* __s, struct _IO_FILE* __stream);
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE* __stream);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __s);
int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);
unsigned long  int fread_unlocked(void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
unsigned long  int fwrite_unlocked(const void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
int fseek(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftell(struct _IO_FILE* __stream);
void rewind(struct _IO_FILE* __stream);
int fseeko(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftello(struct _IO_FILE* __stream);
int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);
int fseeko64(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftello64(struct _IO_FILE* __stream);
int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);
int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);
void clearerr(struct _IO_FILE* __stream);
int feof(struct _IO_FILE* __stream);
int ferror(struct _IO_FILE* __stream);
void clearerr_unlocked(struct _IO_FILE* __stream);
int feof_unlocked(struct _IO_FILE* __stream);
int ferror_unlocked(struct _IO_FILE* __stream);
void perror(const char* __s);
int fileno(struct _IO_FILE* __stream);
int fileno_unlocked(struct _IO_FILE* __stream);
int pclose(struct _IO_FILE* __stream);
struct _IO_FILE* popen(const char* __command, const char* __modes);
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __obstack, const char* __format, ...);
int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);
void flockfile(struct _IO_FILE* __stream);
int ftrylockfile(struct _IO_FILE* __stream);
void funlockfile(struct _IO_FILE* __stream);
int __uflow(struct _IO_FILE* anonymous_var_nameX2);
int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);
unsigned long  int __ctype_get_mb_cur_max();
double atof(const char* __nptr);
int atoi(const char* __nptr);
long  int atol(const char* __nptr);
long long int atoll(const char* __nptr);
double strtod(const char* __nptr, char** __endptr);
float strtof(const char* __nptr, char** __endptr);
long  double strtold(const char* __nptr, char** __endptr);
float strtof32(const char* __nptr, char** __endptr);
double strtof64(const char* __nptr, char** __endptr);
double strtof32x(const char* __nptr, char** __endptr);
long  double strtof64x(const char* __nptr, char** __endptr);
long  int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoul(const char* __nptr, char** __endptr, int __base);
long long int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);
long long int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfroml(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfromf64(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf32x(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf64x(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
long  int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
char* l64a(long  int __n);
long  int a64l(const char* __s);
int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);
int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  int __statelen);
char* setstate(char* __statebuf);
int random_r(struct random_data* __buf, int* __result);
int srandom_r(unsigned int __seed, struct random_data* __buf);
int initstate_r(unsigned int __seed, char* __statebuf, unsigned long  int __statelen, struct random_data* __buf);
int setstate_r(char* __statebuf, struct random_data* __buf);
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long  int lrand48();
long  int nrand48(unsigned short int __xsubi[3]);
long  int mrand48();
long  int jrand48(unsigned short int __xsubi[3]);
void srand48(long  int __seedval);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void lcong48(unsigned short int __param[7]);
int drand48_r(struct drand48_data* __buffer, double* __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);
int lrand48_r(struct drand48_data* __buffer, long  int* __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long  int* __result);
int mrand48_r(struct drand48_data* __buffer, long  int* __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long  int* __result);
int srand48_r(long  int __seedval, struct drand48_data* __buffer);
int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);
int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);
unsigned int arc4random();
void arc4random_buf(void* __buf, unsigned long  int __size);
unsigned int arc4random_uniform(unsigned int __upper_bound);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __nmemb, unsigned long  int __size);
void* realloc(void* __ptr, unsigned long  int __size);
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  int __nmemb, unsigned long  int __size);
void* alloca(unsigned long  int __size);
void* valloc(unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
void abort();
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status);
void quick_exit(int __status);
void _Exit(int __status);
char* getenv(const char* __name);
char* secure_getenv(const char* __name);
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemp64(char* __template);
int mkstemps(char* __template, int __suffixlen);
int mkstemps64(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int mkostemp(char* __template, int __flags);
int mkostemp64(char* __template, int __flags);
int mkostemps(char* __template, int __suffixlen, int __flags);
int mkostemps64(char* __template, int __suffixlen, int __flags);
int system(const char* __command);
char* canonicalize_file_name(const char* __name);
char* realpath(const char* __name, char* __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*));
void qsort(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*,void*), void* __arg);
int abs(int __x);
long  int labs(long  int __x);
long long int llabs(long long int __x);
struct anonymous_typeX5 div(int __numer, int __denom);
struct anonymous_typeX6 ldiv(long  int __numer, long  int __denom);
struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int qecvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int qfcvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int mblen(const char* __s, unsigned long  int __n);
int mbtowc(int* __pwc, const char* __s, unsigned long  int __n);
int wctomb(char* __s, int __wchar);
unsigned long  int mbstowcs(int* __pwcs, const char* __s, unsigned long  int __n);
unsigned long  int wcstombs(char* __s, const int* __pwcs, unsigned long  int __n);
int rpmatch(const char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int __buflen);
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __dest, const void* __src, unsigned long  int __n);
void* memmove(void* __dest, const void* __src, unsigned long  int __n);
void* memccpy(void* __dest, const void* __src, int __c, unsigned long  int __n);
void* memset(void* __s, int __c, unsigned long  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n);
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  int __n);
void* memchr(const void* __s, int __c, unsigned long  int __n);
void* rawmemchr(const void* __s, int __c);
void* memrchr(const void* __s, int __c, unsigned long  int __n);
char* strcpy(char* __dest, const char* __src);
char* strncpy(char* __dest, const char* __src, unsigned long  int __n);
char* strcat(char* __dest, const char* __src);
char* strncat(char* __dest, const char* __src, unsigned long  int __n);
int strcmp(const char* __s1, const char* __s2);
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strcoll(const char* __s1, const char* __s2);
unsigned long  int strxfrm(char* __dest, const char* __src, unsigned long  int __n);
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);
unsigned long  int strxfrm_l(char* __dest, const char* __src, unsigned long  int __n, struct __locale_struct* __l);
char* strdup(const char* __s);
char* strndup(const char* __string, unsigned long  int __n);
char* strchr(const char* __s, int __c);
char* strrchr(const char* __s, int __c);
char* strchrnul(const char* __s, int __c);
unsigned long  int strcspn(const char* __s, const char* __reject);
unsigned long  int strspn(const char* __s, const char* __accept);
char* strpbrk(const char* __s, const char* __accept);
char* strstr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle);
void* memmem(const void* __haystack, unsigned long  int __haystacklen, const void* __needle, unsigned long  int __needlelen);
void* __mempcpy(void* __dest, const void* __src, unsigned long  int __n);
void* mempcpy(void* __dest, const void* __src, unsigned long  int __n);
unsigned long  int strlen(const char* __s);
unsigned long  int strnlen(const char* __string, unsigned long  int __maxlen);
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  int __buflen);
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct* __l);
int bcmp(const void* __s1, const void* __s2, unsigned long  int __n);
void bcopy(const void* __src, void* __dest, unsigned long  int __n);
void bzero(void* __s, unsigned long  int __n);
char* index(const char* __s, int __c);
char* rindex(const char* __s, int __c);
int ffs(int __i);
int ffsl(long  int __l);
int ffsll(long long int __ll);
int strcasecmp(const char* __s1, const char* __s2);
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int __n, struct __locale_struct* __loc);
void explicit_bzero(void* __s, unsigned long  int __n);
char* strsep(char** __stringp, const char* __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, unsigned long  int __n);
char* stpncpy(char* __dest, const char* __src, unsigned long  int __n);
int strverscmp(const char* __s1, const char* __s2);
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  int __n);
char* basename(const char* __filename);
long  int __sysconf(int __name);
char* setlocale(int __category, const char* __locale);
struct lconv* localeconv();
struct __locale_struct* newlocale(int __category_mask, const char* __locale, struct __locale_struct* __base);
struct __locale_struct* duplocale(struct __locale_struct* __dataset);
void freelocale(struct __locale_struct* __dataset);
struct __locale_struct* uselocale(struct __locale_struct* __dataset);
int* __errno_location();
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function);
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function);
void __assert(const char* __assertion, const char* __file, int __line);
const unsigned short int** __ctype_b_loc();
const int** __ctype_tolower_loc();
const int** __ctype_toupper_loc();
int isalnum(int anonymous_var_nameX10);
int isalpha(int anonymous_var_nameX11);
int iscntrl(int anonymous_var_nameX12);
int isdigit(int anonymous_var_nameX13);
int islower(int anonymous_var_nameX14);
int isgraph(int anonymous_var_nameX15);
int isprint(int anonymous_var_nameX16);
int ispunct(int anonymous_var_nameX17);
int isspace(int anonymous_var_nameX18);
int isupper(int anonymous_var_nameX19);
int isxdigit(int anonymous_var_nameX20);
int tolower(int __c);
int toupper(int __c);
int isblank(int anonymous_var_nameX21);
int isctype(int __c, int __mask);
int isascii(int __c);
int toascii(int __c);
int _toupper(int anonymous_var_nameX22);
int _tolower(int anonymous_var_nameX23);
int isalnum_l(int anonymous_var_nameX24, struct __locale_struct* anonymous_var_nameX25);
int isalpha_l(int anonymous_var_nameX26, struct __locale_struct* anonymous_var_nameX27);
int iscntrl_l(int anonymous_var_nameX28, struct __locale_struct* anonymous_var_nameX29);
int isdigit_l(int anonymous_var_nameX30, struct __locale_struct* anonymous_var_nameX31);
int islower_l(int anonymous_var_nameX32, struct __locale_struct* anonymous_var_nameX33);
int isgraph_l(int anonymous_var_nameX34, struct __locale_struct* anonymous_var_nameX35);
int isprint_l(int anonymous_var_nameX36, struct __locale_struct* anonymous_var_nameX37);
int ispunct_l(int anonymous_var_nameX38, struct __locale_struct* anonymous_var_nameX39);
int isspace_l(int anonymous_var_nameX40, struct __locale_struct* anonymous_var_nameX41);
int isupper_l(int anonymous_var_nameX42, struct __locale_struct* anonymous_var_nameX43);
int isxdigit_l(int anonymous_var_nameX44, struct __locale_struct* anonymous_var_nameX45);
int isblank_l(int anonymous_var_nameX46, struct __locale_struct* anonymous_var_nameX47);
int __tolower_l(int __c, struct __locale_struct* __l);
int tolower_l(int __c, struct __locale_struct* __l);
int __toupper_l(int __c, struct __locale_struct* __l);
int toupper_l(int __c, struct __locale_struct* __l);
int* wcscpy(int* __dest, const int* __src);
int* wcsncpy(int* __dest, const int* __src, unsigned long  int __n);
int* wcscat(int* __dest, const int* __src);
int* wcsncat(int* __dest, const int* __src, unsigned long  int __n);
int wcscmp(const int* __s1, const int* __s2);
int wcsncmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp(const int* __s1, const int* __s2);
int wcsncasecmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
int wcsncasecmp_l(const int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int wcscoll(const int* __s1, const int* __s2);
unsigned long  int wcsxfrm(int* __s1, const int* __s2, unsigned long  int __n);
int wcscoll_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
unsigned long  int wcsxfrm_l(int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int* wcsdup(const int* __s);
int* wcschr(const int* __wcs, int __wc);
int* wcsrchr(const int* __wcs, int __wc);
int* wcschrnul(const int* __s, int __wc);
unsigned long  int wcscspn(const int* __wcs, const int* __reject);
unsigned long  int wcsspn(const int* __wcs, const int* __accept);
int* wcspbrk(const int* __wcs, const int* __accept);
int* wcsstr(const int* __haystack, const int* __needle);
int* wcstok(int* __s, const int* __delim, int** __ptr);
unsigned long  int wcslen(const int* __s);
int* wcswcs(const int* __haystack, const int* __needle);
unsigned long  int wcsnlen(const int* __s, unsigned long  int __maxlen);
int* wmemchr(const int* __s, int __c, unsigned long  int __n);
int wmemcmp(const int* __s1, const int* __s2, unsigned long  int __n);
int* wmemcpy(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemmove(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemset(int* __s, int __c, unsigned long  int __n);
int* wmempcpy(int* __s1, const int* __s2, unsigned long  int __n);
unsigned int btowc(int __c);
int wctob(unsigned int __c);
int mbsinit(const struct anonymous_typeX2* __ps);
unsigned long  int mbrtowc(int* __pwc, const char* __s, unsigned long  int __n, struct anonymous_typeX2* __p);
unsigned long  int wcrtomb(char* __s, int __wc, struct anonymous_typeX2* __ps);
unsigned long  int __mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbsrtowcs(int* __dst, const char** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsrtombs(char* __dst, const int** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int mbsnrtowcs(int* __dst, const char** __src, unsigned long  int __nmc, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsnrtombs(char* __dst, const int** __src, unsigned long  int __nwc, unsigned long  int __len, struct anonymous_typeX2* __ps);
int wcwidth(int __c);
int wcswidth(const int* __s, unsigned long  int __n);
double wcstod(const int* __nptr, int** __endptr);
float wcstof(const int* __nptr, int** __endptr);
long  double wcstold(const int* __nptr, int** __endptr);
float wcstof32(const int* __nptr, int** __endptr);
double wcstof64(const int* __nptr, int** __endptr);
double wcstof32x(const int* __nptr, int** __endptr);
long  double wcstof64x(const int* __nptr, int** __endptr);
long  int wcstol(const int* __nptr, int** __endptr, int __base);
unsigned long  int wcstoul(const int* __nptr, int** __endptr, int __base);
long long int wcstoll(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstoull(const int* __nptr, int** __endptr, int __base);
long long int wcstoq(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstouq(const int* __nptr, int** __endptr, int __base);
long  int wcstol_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int wcstoul_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long long int wcstoll_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int wcstoull_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
double wcstod_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstold_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof32_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof64_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof32x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstof64x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
int* wcpcpy(int* __dest, const int* __src);
int* wcpncpy(int* __dest, const int* __src, unsigned long  int __n);
struct _IO_FILE* open_wmemstream(int** __bufloc, unsigned long  int* __sizeloc);
int fwide(struct _IO_FILE* __fp, int __mode);
int fwprintf(struct _IO_FILE* __stream, const int* __format, ...);
int wprintf(const int* __format, ...);
int swprintf(int* __s, unsigned long  int __n, const int* __format, ...);
int vfwprintf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int vwprintf(const int* __format, va_list __arg);
int vswprintf(int* __s, unsigned long  int __n, const int* __format, va_list __arg);
int fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int wscanf(const int* __format, ...);
int swscanf(const int* __s, const int* __format, ...);
int __isoc99_fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int __isoc99_wscanf(const int* __format, ...);
int __isoc99_swscanf(const int* __s, const int* __format, ...);
int vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int vwscanf(const int* __format, va_list __arg);
int vswscanf(const int* __s, const int* __format, va_list __arg);
int __isoc99_vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int __isoc99_vwscanf(const int* __format, va_list __arg);
int __isoc99_vswscanf(const int* __s, const int* __format, va_list __arg);
unsigned int fgetwc(struct _IO_FILE* __stream);
unsigned int getwc(struct _IO_FILE* __stream);
unsigned int getwchar();
unsigned int fputwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar(int __wc);
int* fgetws(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws(const int* __ws, struct _IO_FILE* __stream);
unsigned int ungetwc(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int getwc_unlocked(struct _IO_FILE* __stream);
unsigned int getwchar_unlocked();
unsigned int fgetwc_unlocked(struct _IO_FILE* __stream);
unsigned int fputwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar_unlocked(int __wc);
int* fgetws_unlocked(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws_unlocked(const int* __ws, struct _IO_FILE* __stream);
unsigned long  int wcsftime(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp);
unsigned long  int wcsftime_l(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp, struct __locale_struct* __loc);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
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
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
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
unsigned int _Bool_get_hash_key(_Bool value);
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
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
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
int bool_compare(_Bool left, _Bool right);
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
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
void FILE_on_drop(struct _IO_FILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
int assert_v2(int exp);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile(struct sInfo* info);
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
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info);
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
    return ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    return ((((__bsx)&4278190080U)>>24)|(((__bsx)&16711680U)>>8)|(((__bsx)&65280U)<<8)|(((__bsx)&255U)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx){
    return ((((__bsx)&18374686479671623680UL)>>56)|(((__bsx)&71776119061217280UL)>>40)|(((__bsx)&280375465082880UL)>>24)|(((__bsx)&1095216660480UL)>>8)|(((__bsx)&4278190080UL)<<8)|(((__bsx)&16711680UL)<<24)|(((__bsx)&65280UL)<<40)|(((__bsx)&255UL)<<56));
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    return __x;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    return __x;
}
static inline unsigned long  int __uint64_identity(unsigned long  int __x){
    return __x;
}

// body function
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value38 = (void*)0;
struct sType* __dec_obj24;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj25;
struct sNewNode* __result_obj__17;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj24=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj25=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__17 = (struct sNewNode*)come_increment_ref_count(self);
    come_call_finalizer(sNewNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sNewNode_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

char* sNewNode_kind(struct sNewNode* self){
void* __right_value39 = (void*)0;
char* __result_obj__18;
    __result_obj__18 = (char*)come_increment_ref_count(((char*)(__right_value39=__builtin_string("sNewNode"))));
    (__right_value39 = come_decrement_ref_count(__right_value39, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__18 = come_decrement_ref_count(__result_obj__18, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__18;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_33;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_34;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct CVALUE* come_value_35;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* num_string_36;
struct list$1sNode$ph* o2_saved_37;
struct sNode* it_40;
_Bool Value_43;
_Bool __result_obj__25;
void* __right_value44 = (void*)0;
struct CVALUE* cvalue_44;
void* __right_value45 = (void*)0;
struct sType* type2_45;
void* __right_value46 = (void*)0;
char* type_name_48;
void* __right_value47 = (void*)0;
char* type_name2_49;
void* __right_value48 = (void*)0;
char* var_name_51;
void* __right_value49 = (void*)0;
struct sType* type3_52;
void* __right_value50 = (void*)0;
char* type_name3_53;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct buffer* buf_54;
char* obj_55;
void* __right_value54 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
char* __dec_obj26;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
char* __dec_obj27;
struct sClass* klass_62;
int i_63;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_64;
struct tuple2$2char$phsNode$ph* it_67;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* name_70=0;
struct sNode* exp_71=0;
_Bool Value_72;
_Bool __result_obj__41;
void* __right_value59 = (void*)0;
struct CVALUE* come_value2_73;
struct sType* left_type_74;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_75;
struct tuple2$2char$phsType$ph* it2_78;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* field_name_81=0;
struct sType* field_type_82=0;
void* __right_value60 = (void*)0;
struct sType* __dec_obj28;
void* __right_value61 = (void*)0;
_Bool __result_obj__48;
struct sType* right_type_85;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct sType* __dec_obj29;
void* __right_value64 = (void*)0;
char* c_value_86;
void* __right_value65 = (void*)0;
char* __dec_obj30;
void* __right_value66 = (void*)0;
struct sType* __dec_obj31;
void* __right_value70 = (void*)0;
struct sType* type3_90;
void* __right_value71 = (void*)0;
char* type_name3_91;
void* __right_value72 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
char* __dec_obj35;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
char* __dec_obj36;
void* __right_value77 = (void*)0;
struct sType* __dec_obj37;
_Bool __result_obj__50;
obj_55 = (void*)0;
    type_33=(struct sType*)come_increment_ref_count(self->type);
    initializer_34=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    come_value_35=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 23, "struct CVALUE*"))));
    num_string_36=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 25, "struct buffer*"))));
    buffer_append_str(num_string_36,"1");
    for(    o2_saved_37=(struct list$1sNode$ph*)come_increment_ref_count((type_33->mArrayNum)),it_40=list$1sNode$ph_begin((o2_saved_37))    ;    !list$1sNode$ph_end((o2_saved_37))    ;    it_40=list$1sNode$ph_next((o2_saved_37))    ){
        Value_43=node_compile(it_40,info);
        if(        !Value_43        ) {
            __result_obj__25 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, num_string_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__25;
        }
        else {
        }
        cvalue_44=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(num_string_36,"*(%s)",cvalue_44->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue_44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    type2_45=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_33),(struct sType*)come_increment_ref_count(info->generics_type),info));
    list$1sNode$ph_reset(type2_45->mArrayNum);
    type_name_48=(char*)come_increment_ref_count(make_type_name_string(type2_45,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_49=(char*)come_increment_ref_count(make_come_type_name_string(type2_45,info,(_Bool)0));
    if(    initializer_34    ) {
        static int var_num_50=1;
        var_num_50++;
        var_name_51=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_50));
        type3_52=(struct sType*)come_increment_ref_count(sType_clone(type2_45));
        type3_52->mPointerNum++;
        if(        type3_52->mNoSolvedGenericsType        ) {
            type3_52->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3_53=(char*)come_increment_ref_count(make_type_name_string(type3_52,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value51=make_define_var(type3_52,var_name_51,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buf_54=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 68, "struct buffer*"))));
        buffer_append_str(buf_54,"(");
        if(        (_condtional_value_X1=(((struct sFun*)(__right_value54=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),        come_call_finalizer(sFun_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X1        ) {
            __dec_obj26=obj_55,
            obj_55=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_51,type_name_48,type_name_48,((char*)(__right_value55=buffer_to_string(num_string_36))),info->sname,info->sline,type_name3_53));
            __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            __dec_obj27=obj_55,
            obj_55=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_51,type_name_48,type_name_48,((char*)(__right_value57=buffer_to_string(num_string_36))),info->sname,info->sline,type_name3_53));
            __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        buffer_append_str(buf_54,obj_55);
        buffer_append_str(buf_54,",");
        klass_62=type3_52->mClass;
        i_63=0;
        for(        o2_saved_64=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_34)),it_67=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_64))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_64))        ;        it_67=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_64))        ){
            multiple_assign_var1=it_67;
            name_70=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp_71=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_72=node_compile(exp_71,info);
            if(            !Value_72            ) {
                __result_obj__41 = (_Bool)0;
                (name_70 = come_decrement_ref_count(name_70, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((exp_71) ? exp_71 = come_decrement_ref_count(exp_71, ((struct sNode*)exp_71)->finalize, ((struct sNode*)exp_71)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_51 = come_decrement_ref_count(var_name_51, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type3_52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_name3_53 = come_decrement_ref_count(type_name3_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(buffer_finalize, buf_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (obj_55 = come_decrement_ref_count(obj_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, num_string_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_name_48 = come_decrement_ref_count(type_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (type_name2_49 = come_decrement_ref_count(type_name2_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__41;
            }
            else {
            }
            come_value2_73=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            left_type_74=((void*)0);
            for(            o2_saved_75=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_62->mFields)),it2_78=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_75))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_75))            ;            it2_78=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_75))            ){
                multiple_assign_var2=it2_78;
                field_name_81=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                field_type_82=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
                if(                string_operator_equals(name_70,field_name_81)                ) {
                    __dec_obj28=left_type_74,
                    left_type_74=(struct sType*)come_increment_ref_count(sType_clone(field_type_82));
                    come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    (field_name_81 = come_decrement_ref_count(field_name_81, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
                (field_name_81 = come_decrement_ref_count(field_name_81, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            if(            left_type_74==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"field %s is not defined",name_70)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__48 = (_Bool)1;
                (name_70 = come_decrement_ref_count(name_70, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((exp_71) ? exp_71 = come_decrement_ref_count(exp_71, ((struct sNode*)exp_71)->finalize, ((struct sNode*)exp_71)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value2_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_51 = come_decrement_ref_count(var_name_51, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type3_52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_name3_53 = come_decrement_ref_count(type_name3_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(buffer_finalize, buf_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (obj_55 = come_decrement_ref_count(obj_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, num_string_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_name_48 = come_decrement_ref_count(type_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (type_name2_49 = come_decrement_ref_count(type_name2_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__48;
            }
            right_type_85=(struct sType*)come_increment_ref_count(come_value2_73->type);
            check_assign_type(((char*)(__right_value63=xsprintf("\%s is assining to",((char*)(__right_value62=string_to_string(name_70)))))),left_type_74,right_type_85,come_value2_73,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj29=right_type_85,
            right_type_85=(struct sType*)come_increment_ref_count(come_value2_73->type);
            come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            if(            left_type_74->mHeap&&right_type_85->mHeap&&left_type_74->mPointerNum>0&&right_type_85->mPointerNum>0            ) {
                c_value_86=(char*)come_increment_ref_count(increment_ref_count_object(left_type_74,come_value2_73->c_value,info));
                buffer_append_format(buf_54,"%s->%s = %s",var_name_51,name_70,c_value_86);
                (c_value_86 = come_decrement_ref_count(c_value_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                buffer_append_format(buf_54,"%s->%s = %s",var_name_51,name_70,come_value2_73->c_value);
            }
            buffer_append_str(buf_54,",");
            i_63++;
            (name_70 = come_decrement_ref_count(name_70, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((exp_71) ? exp_71 = come_decrement_ref_count(exp_71, ((struct sNode*)exp_71)->finalize, ((struct sNode*)exp_71)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_54,var_name_51);
        buffer_append_str(buf_54,")");
        __dec_obj30=come_value_35->c_value,
        come_value_35->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_54));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        type2_45->mHeap=(_Bool)1;
        type2_45->mPointerNum++;
        if(        type2_45->mNoSolvedGenericsType        ) {
            type2_45->mNoSolvedGenericsType->mPointerNum++;
            type2_45->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj31=come_value_35->type,
        come_value_35->type=(struct sType*)come_increment_ref_count(sType_clone(type2_45));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_35->var=((void*)0);
        append_object_to_right_values(come_value_35,(struct sType*)come_increment_ref_count(type2_45),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_35->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_35));
        (var_name_51 = come_decrement_ref_count(var_name_51, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type3_52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (type_name3_53 = come_decrement_ref_count(type_name3_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, buf_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (obj_55 = come_decrement_ref_count(obj_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        type3_90=(struct sType*)come_increment_ref_count(sType_clone(type2_45));
        type3_90->mPointerNum++;
        type3_90->mHeap=(_Bool)1;
        if(        type3_90->mNoSolvedGenericsType        ) {
            type3_90->mNoSolvedGenericsType->mPointerNum++;
            type3_90->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_91=(char*)come_increment_ref_count(make_type_name_string(type3_90,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        (_condtional_value_X2=(((struct sFun*)(__right_value72=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),        come_call_finalizer(sFun_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X2        ) {
            __dec_obj35=come_value_35->c_value,
            come_value_35->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_48,type_name_48,((char*)(__right_value73=buffer_to_string(num_string_36))),info->sname,info->sline,type_name3_91));
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            __dec_obj36=come_value_35->c_value,
            come_value_35->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_48,type_name_48,((char*)(__right_value75=buffer_to_string(num_string_36))),info->sname,info->sline,type_name3_91));
            __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        type2_45->mHeap=(_Bool)1;
        type2_45->mPointerNum++;
        if(        type2_45->mNoSolvedGenericsType        ) {
            type2_45->mNoSolvedGenericsType->mPointerNum++;
            type2_45->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj37=come_value_35->type,
        come_value_35->type=(struct sType*)come_increment_ref_count(sType_clone(type2_45));
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_35->var=((void*)0);
        append_object_to_right_values(come_value_35,(struct sType*)come_increment_ref_count(type2_45),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_35->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_35));
        come_call_finalizer(sType_finalize, type3_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (type_name3_91 = come_decrement_ref_count(type_name3_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__50 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, num_string_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_48 = come_decrement_ref_count(type_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (type_name2_49 = come_decrement_ref_count(type_name2_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__50;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value1 = (void*)0;
struct sType* result_6;
void* __right_value2 = (void*)0;
struct sType* __dec_obj1;
void* __right_value3 = (void*)0;
struct sType* __dec_obj2;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value12 = (void*)0;
struct sType* __dec_obj7;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value16 = (void*)0;
char* __dec_obj10;
void* __right_value17 = (void*)0;
char* __dec_obj11;
void* __right_value18 = (void*)0;
char* __dec_obj12;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value27 = (void*)0;
char* __dec_obj17;
void* __right_value28 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value36 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value37 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__1;
    }
    result_6=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_6->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_6->mOriginalLoadVarType,
        result_6->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_6->mChannelType,
        result_6->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_6->mGenericsTypes,
        result_6->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_6->mNoSolvedGenericsType,
        result_6->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_6->mSizeNum,
        result_6->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_6->mAlignas,
        result_6->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_6->mTupleName,
        result_6->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_6->mAttribute,
        result_6->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_6->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_6->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_6->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_6->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_6->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_6->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_6->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_6->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_6->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_6->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_6->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_6->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_6->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_6->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_6->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_6->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_6->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_6->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_6->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_6->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_6->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_6->mAsmName,
        result_6->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_6->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_6->mArrayNum,
        result_6->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_6->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_6->mOriginalTypeName,
        result_6->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_6->mParamTypes,
        result_6->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_6->mParamNames,
        result_6->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_6->mResultType,
        result_6->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_6->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result_6);
    come_call_finalizer(sType_finalize, result_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_0;
struct list_item$1sType$ph* prev_it_1;
    it_0=self->head;
    while(    it_0!=((void*)0)    ) {
        prev_it_1=it_0;
        it_0=it_0->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_2;
struct list_item$1sNode$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)    ) {
        prev_it_3=it_2;
        it_2=it_2->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_4;
struct list_item$1char$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)    ) {
        prev_it_5=it_4;
        it_4=it_4->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct list$1sType$ph* result_7;
struct list_item$1sType$ph* it_8;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_7=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1011, "struct list$1sType$ph*"))));
    it_8=self->head;
    while(    it_8!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_7,(struct sType*)come_increment_ref_count(sType_clone(it_8->item)));
        }
        else {
            list$1sType$ph_add(result_7,(struct sType*)come_increment_ref_count(sType_clone(it_8->item)));
        }
        it_8=it_8->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_7);
    come_call_finalizer(list$1sType$ph$p_finalize, result_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem_9;
struct sType* __dec_obj3;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj4;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_9=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1030, "struct list_item$1sType$ph*"))));
        litem_9->prev=((void*)0);
        litem_9->next=((void*)0);
        __dec_obj3=litem_9->item,
        litem_9->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_9;
        self->head=litem_9;
    }
    else if(    self->len==1    ) {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1040, "struct list_item$1sType$ph*"))));
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        __dec_obj4=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1050, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        __dec_obj5=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_12;
struct list_item$1sType$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)    ) {
        prev_it_13=it_12;
        it_12=it_12->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value13 = (void*)0;
struct sNode* result_14;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_14=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_14->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_14->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_14->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_14->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_14->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_14->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_14->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_14->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_14->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_14->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_14);
    ((result_14) ? result_14 = come_decrement_ref_count(result_14, ((struct sNode*)result_14)->finalize, ((struct sNode*)result_14)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1sNode$ph* result_15;
struct list_item$1sNode$ph* it_16;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_15=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1011, "struct list$1sNode$ph*"))));
    it_16=self->head;
    while(    it_16!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_15,(struct sNode*)come_increment_ref_count(sNode_clone(it_16->item)));
        }
        else {
            list$1sNode$ph_add(result_15,(struct sNode*)come_increment_ref_count(sNode_clone(it_16->item)));
        }
        it_16=it_16->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_15);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value21 = (void*)0;
struct list_item$1sNode$ph* litem_17;
struct sNode* __dec_obj13;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj14;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1030, "struct list_item$1sNode$ph*"))));
        litem_17->prev=((void*)0);
        litem_17->next=((void*)0);
        __dec_obj13=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_17;
        self->head=litem_17;
    }
    else if(    self->len==1    ) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1040, "struct list_item$1sNode$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj14=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1050, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj15=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_20;
struct list_item$1sNode$ph* prev_it_21;
    it_20=self->head;
    while(    it_20!=((void*)0)    ) {
        prev_it_21=it_20;
        it_20=it_20->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct list$1char$ph* result_22;
struct list_item$1char$ph* it_23;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_22=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1011, "struct list$1char$ph*"))));
    it_23=self->head;
    while(    it_23!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1016, "char*")));
        }
        else {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1019, "char*")));
        }
        it_23=it_23->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_22);
    come_call_finalizer(list$1char$ph$p_finalize, result_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value31 = (void*)0;
struct list_item$1char$ph* litem_24;
char* __dec_obj19;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_25;
char* __dec_obj20;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj21;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1030, "struct list_item$1char$ph*"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        __dec_obj19=litem_24->item,
        litem_24->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1    ) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1040, "struct list_item$1char$ph*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        __dec_obj20=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1050, "struct list_item$1char$ph*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        __dec_obj21=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_27;
struct list_item$1char$ph* prev_it_28;
    it_27=self->head;
    while(    it_27!=((void*)0)    ) {
        prev_it_28=it_27;
        it_27=it_27->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_29;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)    ) {
        prev_it_30=it_29;
        it_29=it_29->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void sNewNode_finalize(struct sNewNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_31;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_32;
    it_31=self->head;
    while(    it_31!=((void*)0)    ) {
        prev_it_32=it_31;
        it_31=it_31->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_38;
struct sNode* __result_obj__19;
struct sNode* __result_obj__20;
struct sNode* result_39;
struct sNode* __result_obj__21;
result_38 = (void*)0;
result_39 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_38,0,sizeof(struct sNode*));
        __result_obj__19 = result_38;
        return __result_obj__19;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__20 = self->it->item;
        return __result_obj__20;
    }
    memset(&result_39,0,sizeof(struct sNode*));
    __result_obj__21 = result_39;
    return __result_obj__21;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_41;
struct sNode* __result_obj__22;
struct sNode* __result_obj__23;
struct sNode* result_42;
struct sNode* __result_obj__24;
result_41 = (void*)0;
result_42 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_41,0,sizeof(struct sNode*));
        __result_obj__22 = result_41;
        return __result_obj__22;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__23 = self->it->item;
        return __result_obj__23;
    }
    memset(&result_42,0,sizeof(struct sNode*));
    __result_obj__24 = result_42;
    return __result_obj__24;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_46;
struct list_item$1sNode$ph* prev_it_47;
struct list$1sNode$ph* __result_obj__26;
    it_46=self->head;
    while(    it_46!=((void*)0)    ) {
        prev_it_47=it_46;
        it_46=it_46->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_56;
unsigned int hash_57;
unsigned int it_58;
struct sFun* __result_obj__27;
struct sFun* __result_obj__28;
struct sFun* __result_obj__29;
struct sFun* __result_obj__30;
default_value_56 = (void*)0;
    memset(&default_value_56,0,sizeof(struct sFun*));
    hash_57=string_get_hash_key(((char*)key))%self->size;
    it_58=hash_57;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_58]        ) {
            if(            string_equals(self->keys[it_58],key)            ) {
                __result_obj__27 = (struct sFun*)come_increment_ref_count(self->items[it_58]);
                come_call_finalizer(sFun_finalize, default_value_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__27;
            }
            it_58++;
            if(            it_58>=self->size            ) {
                it_58=0;
            }
            else if(            it_58==hash_57            ) {
                __result_obj__28 = (struct sFun*)come_increment_ref_count(default_value_56);
                come_call_finalizer(sFun_finalize, default_value_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__28;
            }
        }
        else {
            __result_obj__29 = (struct sFun*)come_increment_ref_count(default_value_56);
            come_call_finalizer(sFun_finalize, default_value_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__29;
        }
    }
    __result_obj__30 = (struct sFun*)come_increment_ref_count(default_value_56);
    come_call_finalizer(sFun_finalize, default_value_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__30;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_59;
unsigned int hash_60;
unsigned int it_61;
struct sFun* __result_obj__31;
struct sFun* __result_obj__32;
struct sFun* __result_obj__33;
struct sFun* __result_obj__34;
default_value_59 = (void*)0;
    memset(&default_value_59,0,sizeof(struct sFun*));
    hash_60=string_get_hash_key(((char*)key))%self->size;
    it_61=hash_60;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_61]        ) {
            if(            string_equals(self->keys[it_61],key)            ) {
                __result_obj__31 = (struct sFun*)come_increment_ref_count(self->items[it_61]);
                come_call_finalizer(sFun_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__31;
            }
            it_61++;
            if(            it_61>=self->size            ) {
                it_61=0;
            }
            else if(            it_61==hash_60            ) {
                __result_obj__32 = (struct sFun*)come_increment_ref_count(default_value_59);
                come_call_finalizer(sFun_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__32;
            }
        }
        else {
            __result_obj__33 = (struct sFun*)come_increment_ref_count(default_value_59);
            come_call_finalizer(sFun_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__33;
        }
    }
    __result_obj__34 = (struct sFun*)come_increment_ref_count(default_value_59);
    come_call_finalizer(sFun_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_65;
struct tuple2$2char$phsNode$ph* __result_obj__35;
struct tuple2$2char$phsNode$ph* __result_obj__36;
struct tuple2$2char$phsNode$ph* result_66;
struct tuple2$2char$phsNode$ph* __result_obj__37;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_65,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__35 = result_65;
        return __result_obj__35;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__36 = self->it->item;
        return __result_obj__36;
    }
    memset(&result_66,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__37 = result_66;
    return __result_obj__37;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_68;
struct tuple2$2char$phsNode$ph* __result_obj__38;
struct tuple2$2char$phsNode$ph* __result_obj__39;
struct tuple2$2char$phsNode$ph* result_69;
struct tuple2$2char$phsNode$ph* __result_obj__40;
result_68 = (void*)0;
result_69 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_68,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__38 = result_68;
        return __result_obj__38;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__39 = self->it->item;
        return __result_obj__39;
    }
    memset(&result_69,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__40 = result_69;
    return __result_obj__40;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_76;
struct tuple2$2char$phsType$ph* __result_obj__42;
struct tuple2$2char$phsType$ph* __result_obj__43;
struct tuple2$2char$phsType$ph* result_77;
struct tuple2$2char$phsType$ph* __result_obj__44;
result_76 = (void*)0;
result_77 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_76,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__42 = result_76;
        return __result_obj__42;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_77,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__44 = result_77;
    return __result_obj__44;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_79;
struct tuple2$2char$phsType$ph* __result_obj__45;
struct tuple2$2char$phsType$ph* __result_obj__46;
struct tuple2$2char$phsType$ph* result_80;
struct tuple2$2char$phsType$ph* __result_obj__47;
result_79 = (void*)0;
result_80 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_79,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__45 = result_79;
        return __result_obj__45;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__46 = self->it->item;
        return __result_obj__46;
    }
    memset(&result_80,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__47 = result_80;
    return __result_obj__47;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_83;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_84;
    it_83=self->head;
    while(    it_83!=((void*)0)    ) {
        prev_it_84=it_83;
        it_83=it_83->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value67 = (void*)0;
struct list_item$1CVALUE$ph* litem_87;
struct CVALUE* __dec_obj32;
void* __right_value68 = (void*)0;
struct list_item$1CVALUE$ph* litem_88;
struct CVALUE* __dec_obj33;
void* __right_value69 = (void*)0;
struct list_item$1CVALUE$ph* litem_89;
struct CVALUE* __dec_obj34;
struct list$1CVALUE$ph* __result_obj__49;
    if(    self->len==0    ) {
        litem_87=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value67=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1100, "struct list_item$1CVALUE$ph*"))));
        litem_87->prev=((void*)0);
        litem_87->next=((void*)0);
        __dec_obj32=litem_87->item,
        litem_87->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_87;
        self->head=litem_87;
    }
    else if(    self->len==1    ) {
        litem_88=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value68=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1110, "struct list_item$1CVALUE$ph*"))));
        litem_88->prev=self->head;
        litem_88->next=((void*)0);
        __dec_obj33=litem_88->item,
        litem_88->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_88;
        self->head->next=litem_88;
    }
    else {
        litem_89=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value69=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1120, "struct list_item$1CVALUE$ph*"))));
        litem_89->prev=self->tail;
        litem_89->next=((void*)0);
        __dec_obj34=litem_89->item,
        litem_89->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_89;
        self->tail=litem_89;
    }
    self->len++;
    __result_obj__49 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__49;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
struct sNode* __dec_obj38;
void* __right_value80 = (void*)0;
struct sType* __dec_obj39;
struct sImplementsNode* __result_obj__51;
    ((struct sNodeBase*)(__right_value78=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj38=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj39=self->inf_type,
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__51 = (struct sImplementsNode*)come_increment_ref_count(self);
    come_call_finalizer(sImplementsNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sImplementsNode_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __right_value81 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string("sImplementsNode"))));
    (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__52;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value82 = (void*)0;
struct sNode* obj_exp_92;
void* __right_value83 = (void*)0;
struct sType* inf_type_93;
_Bool Value_94;
_Bool __result_obj__53;
void* __right_value84 = (void*)0;
struct CVALUE* come_value_95;
void* __right_value85 = (void*)0;
struct sType* type_96;
struct sClass* klass_97;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct CVALUE* come_value2_98;
void* __right_value88 = (void*)0;
struct sType* type2_99;
void* __right_value89 = (void*)0;
char* type_name_100;
void* __right_value90 = (void*)0;
char* type_name2_101;
int inf_num_stack_103;
void* __right_value91 = (void*)0;
char* buf_104;
void* __right_value92 = (void*)0;
char* buf2_105;
void* __right_value93 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value94 = (void*)0;
char* c_value_106;
void* __right_value95 = (void*)0;
struct sType* typeX_107;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
int i_108;
void* __right_value98 = (void*)0;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* name_115=0;
struct sType* field_type_116=0;
void* __right_value99 = (void*)0;
char* method_name_117;
void* __right_value100 = (void*)0;
struct sFun* fun_118;
void* __right_value101 = (void*)0;
struct sType* type2_121;
void* __right_value102 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_122=0;
char* real_fun_name_123=0;
char* __dec_obj40;
void* __right_value103 = (void*)0;
struct sType* type2_124;
void* __right_value104 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_125=0;
char* real_fun_name_126=0;
char* __dec_obj41;
void* __right_value105 = (void*)0;
struct sClass* klass2_127;
void* __right_value106 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
char* __dec_obj42;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
char* __dec_obj43;
void* __right_value112 = (void*)0;
struct sType* type3_134;
void* __right_value113 = (void*)0;
struct sType* __dec_obj44;
_Bool __result_obj__70;
    obj_exp_92=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type_93=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    Value_94=node_compile(obj_exp_92,info);
    if(    !Value_94    ) {
        __result_obj__53 = (_Bool)0;
        ((obj_exp_92) ? obj_exp_92 = come_decrement_ref_count(obj_exp_92, ((struct sNode*)obj_exp_92)->finalize, ((struct sNode*)obj_exp_92)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, inf_type_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__53;
    }
    else {
    }
    come_value_95=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_96=(struct sType*)come_increment_ref_count(sType_clone(come_value_95->type));
    type_96->mPointerNum--;
    type_96->mHeap=(_Bool)0;
    klass_97=inf_type_93->mClass;
    come_value2_98=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 224, "struct CVALUE*"))));
    type2_99=(struct sType*)come_increment_ref_count(sType_clone(inf_type_93));
    type_name_100=(char*)come_increment_ref_count(make_type_name_string(inf_type_93,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_101=(char*)come_increment_ref_count(make_type_name_string(type_96,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_102=0;
    ++inf_num_102;
    inf_num_stack_103=inf_num_102;
    buf_104=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_100,inf_num_stack_103));
    add_come_code_at_function_head(info,buf_104);
    buf2_105=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_101,inf_num_stack_103));
    add_come_code_at_function_head(info,buf2_105);
    if(    (_condtional_value_X3=(((struct sFun*)(__right_value93=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    come_call_finalizer(sFun_finalize, __right_value93, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X3    ) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack_103,type_name_100,type_name_100,info->sname,info->sline,type_name_100);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack_103,type_name_100,type_name_100,info->sname,info->sline,type_name_100);
    }
    c_value_106=(char*)come_increment_ref_count(increment_ref_count_object(come_value_95->type,come_value_95->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_103,c_value_106);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_103,inf_num_stack_103);
    typeX_107=(struct sType*)come_increment_ref_count(sType_clone(type_96));
    typeX_107->mPointerNum++;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value96=create_finalizer_automatically((struct sType*)come_increment_ref_count(typeX_107),"finalize",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value96, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((struct tuple2$2sFun$pchar$ph*)(__right_value97=create_cloner_automatically((struct sType*)come_increment_ref_count(typeX_107),"clone",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value97, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    for(    i_108=1    ;    i_108<list$1tuple2$2char$phsType$ph$ph_length(klass_97->mFields)    ;    i_108++    ){
        multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value98=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass_97->mFields,i_108)));
        name_115=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_116=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value98, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        method_name_117=(char*)come_increment_ref_count(create_method_name(type_96,(_Bool)0,name_115,info,(_Bool)1));
        fun_118=((struct sFun*)(__right_value100=map$2char$phsFun$ph_at(info->funcs,method_name_117,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value100, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_118==((void*)0)&&string_operator_equals(name_115,"to_string")        ) {
            type2_121=(struct sType*)come_increment_ref_count(sType_clone(type_96));
            type2_121->mPointerNum++;
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value102=create_to_string_automatically((struct sType*)come_increment_ref_count(type2_121),name_115,info)));
            fun2_122=multiple_assign_var4->v1;
            real_fun_name_123=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            fun_118=fun2_122;
            __dec_obj40=method_name_117,
            method_name_117=(char*)come_increment_ref_count(real_fun_name_123);
            __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (real_fun_name_123 = come_decrement_ref_count(real_fun_name_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        fun_118==((void*)0)&&string_operator_equals(name_115,"equals")        ) {
            type2_124=(struct sType*)come_increment_ref_count(sType_clone(type_96));
            type2_124->mPointerNum++;
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value104=create_equals_automatically((struct sType*)come_increment_ref_count(type2_124),name_115,info)));
            fun2_125=multiple_assign_var5->v1;
            real_fun_name_126=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value104, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            fun_118=fun2_125;
            __dec_obj41=method_name_117,
            method_name_117=(char*)come_increment_ref_count(real_fun_name_126);
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (real_fun_name_126 = come_decrement_ref_count(real_fun_name_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        fun_118==((void*)0)        ) {
            klass2_127=((struct sClass*)(__right_value105=map$2char$phsClass$ph_operator_load_element(info->classes,type_96->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value105, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            while(            (_condtional_value_X4=(((struct sClass*)(__right_value106=map$2char$phsClass$ph_operator_load_element(info->classes,klass2_127->mParentClassName))))),            come_call_finalizer(sClass_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X4            ) {
                klass2_127=((struct sClass*)(__right_value107=map$2char$phsClass$ph_operator_load_element(info->classes,klass2_127->mParentClassName)));
                come_call_finalizer(sClass_finalize, __right_value107, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __dec_obj42=method_name_117,
                method_name_117=(char*)come_increment_ref_count(create_method_name_using_class(klass2_127,(_Bool)0,name_115,info,(_Bool)1));
                __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                fun_118=((struct sFun*)(__right_value110=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value109=__builtin_string(method_name_117))),((void*)0))));
                (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                fun_118                ) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_103,name_115,method_name_117);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_103,name_115,method_name_117);
        }
        (name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (method_name_117 = come_decrement_ref_count(method_name_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj43=come_value2_98->c_value,
    come_value2_98->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_103));
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    type3_134=(struct sType*)come_increment_ref_count(sType_clone(inf_type_93));
    type3_134->mPointerNum++;
    type3_134->mHeap=(_Bool)1;
    type2_99->mHeap=(_Bool)1;
    __dec_obj44=come_value2_98->type,
    come_value2_98->type=(struct sType*)come_increment_ref_count(sType_clone(type2_99));
    come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_98->type->mPointerNum++;
    come_value2_98->var=((void*)0);
    append_object_to_right_values(come_value2_98,(struct sType*)come_increment_ref_count(type3_134),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2_98->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_98));
    __result_obj__70 = (_Bool)1;
    ((obj_exp_92) ? obj_exp_92 = come_decrement_ref_count(obj_exp_92, ((struct sNode*)obj_exp_92)->finalize, ((struct sNode*)obj_exp_92)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_100 = come_decrement_ref_count(type_name_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (type_name2_101 = come_decrement_ref_count(type_name2_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (buf_104 = come_decrement_ref_count(buf_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (buf2_105 = come_decrement_ref_count(buf2_105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (c_value_106 = come_decrement_ref_count(c_value_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, typeX_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type3_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__70;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)    ) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->inf_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
struct list_item$1tuple2$2char$phsType$ph$ph* it_109;
int i_110;
struct tuple2$2char$phsType$ph* __result_obj__54;
struct tuple2$2char$phsType$ph* default_value_111;
struct tuple2$2char$phsType$ph* __result_obj__55;
default_value_111 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_109=self->head;
    i_110=0;
    while(    it_109!=((void*)0)    ) {
        if(        position==i_110        ) {
            __result_obj__54 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it_109->item);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__54;
        }
        it_109=it_109->next;
        i_110++;
    }
    memset(&default_value_111,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__55 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_111);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
struct list_item$1tuple2$2char$phsType$ph$ph* it_112;
int i_113;
struct tuple2$2char$phsType$ph* __result_obj__56;
struct tuple2$2char$phsType$ph* default_value_114;
struct tuple2$2char$phsType$ph* __result_obj__57;
default_value_114 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_112=self->head;
    i_113=0;
    while(    it_112!=((void*)0)    ) {
        if(        position==i_113        ) {
            __result_obj__56 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it_112->item);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__56;
        }
        it_112=it_112->next;
        i_113++;
    }
    memset(&default_value_114,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__57 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_114);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_119;
unsigned int it_120;
struct sFun* __result_obj__58;
struct sFun* __result_obj__59;
struct sFun* __result_obj__60;
struct sFun* __result_obj__61;
    hash_119=string_get_hash_key(((char*)key))%self->size;
    it_120=hash_119;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_120]        ) {
            if(            string_equals(self->keys[it_120],key)            ) {
                __result_obj__58 = (struct sFun*)come_increment_ref_count(self->items[it_120]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__58;
            }
            it_120++;
            if(            it_120>=self->size            ) {
                it_120=0;
            }
            else if(            it_120==hash_119            ) {
                __result_obj__59 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__59;
            }
        }
        else {
            __result_obj__60 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__60;
        }
    }
    __result_obj__61 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__61;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_128;
unsigned int hash_129;
unsigned int it_130;
struct sClass* __result_obj__62;
struct sClass* __result_obj__63;
struct sClass* __result_obj__64;
struct sClass* __result_obj__65;
default_value_128 = (void*)0;
    memset(&default_value_128,0,sizeof(struct sClass*));
    hash_129=string_get_hash_key(((char*)key))%self->size;
    it_130=hash_129;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_130]        ) {
            if(            string_equals(self->keys[it_130],key)            ) {
                __result_obj__62 = (struct sClass*)come_increment_ref_count(self->items[it_130]);
                come_call_finalizer(sClass_finalize, default_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__62;
            }
            it_130++;
            if(            it_130>=self->size            ) {
                it_130=0;
            }
            else if(            it_130==hash_129            ) {
                __result_obj__63 = (struct sClass*)come_increment_ref_count(default_value_128);
                come_call_finalizer(sClass_finalize, default_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__63;
            }
        }
        else {
            __result_obj__64 = (struct sClass*)come_increment_ref_count(default_value_128);
            come_call_finalizer(sClass_finalize, default_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__64;
        }
    }
    __result_obj__65 = (struct sClass*)come_increment_ref_count(default_value_128);
    come_call_finalizer(sClass_finalize, default_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_131;
unsigned int hash_132;
unsigned int it_133;
struct sClass* __result_obj__66;
struct sClass* __result_obj__67;
struct sClass* __result_obj__68;
struct sClass* __result_obj__69;
default_value_131 = (void*)0;
    memset(&default_value_131,0,sizeof(struct sClass*));
    hash_132=string_get_hash_key(((char*)key))%self->size;
    it_133=hash_132;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_133]        ) {
            if(            string_equals(self->keys[it_133],key)            ) {
                __result_obj__66 = (struct sClass*)come_increment_ref_count(self->items[it_133]);
                come_call_finalizer(sClass_finalize, default_value_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__66;
            }
            it_133++;
            if(            it_133>=self->size            ) {
                it_133=0;
            }
            else if(            it_133==hash_132            ) {
                __result_obj__67 = (struct sClass*)come_increment_ref_count(default_value_131);
                come_call_finalizer(sClass_finalize, default_value_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__67;
            }
        }
        else {
            __result_obj__68 = (struct sClass*)come_increment_ref_count(default_value_131);
            come_call_finalizer(sClass_finalize, default_value_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__68;
        }
    }
    __result_obj__69 = (struct sClass*)come_increment_ref_count(default_value_131);
    come_call_finalizer(sClass_finalize, default_value_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __right_value114 = (void*)0;
struct sTrueNode* __result_obj__71;
    ((struct sNodeBase*)(__right_value114=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value114, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__71 = (struct sTrueNode*)come_increment_ref_count(self);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sTrueNode_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __right_value115 = (void*)0;
char* __result_obj__72;
    __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string("sTrueNode"))));
    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__72;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct CVALUE* come_value_135;
void* __right_value118 = (void*)0;
char* __dec_obj45;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* __dec_obj46;
_Bool __result_obj__73;
    come_value_135=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 339, "struct CVALUE*"))));
    __dec_obj45=come_value_135->c_value,
    come_value_135->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj46=come_value_135->type,
    come_value_135->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 342, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_135->var=((void*)0);
    add_come_last_code(info,"%s",come_value_135->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
    __result_obj__73 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__73;
}

static void sTrueNode_finalize(struct sTrueNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value126 = (void*)0;
struct sNode* __result_obj__76;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 355, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value123=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 355, "struct sTrueNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__76 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value126=_inf_value1)));
    come_call_finalizer(sTrueNode_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value126) ? __right_value126 = come_decrement_ref_count(__right_value126, ((struct sNode*)__right_value126)->finalize, ((struct sNode*)__right_value126)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__76) ? __result_obj__76 = come_decrement_ref_count(__result_obj__76, ((struct sNode*)__result_obj__76)->finalize, ((struct sNode*)__result_obj__76)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__76;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
struct sTrueNode* __result_obj__74;
void* __right_value124 = (void*)0;
struct sTrueNode* result_136;
void* __right_value125 = (void*)0;
char* __dec_obj47;
struct sTrueNode* __result_obj__75;
    if(    self==(void*)0    ) {
        __result_obj__74 = (void*)0;
        return __result_obj__74;
    }
    result_136=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*"));
    if(    self!=((void*)0)    ) {
        result_136->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj47=result_136->sname,
        result_136->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTrueNode_clone", 5, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_136->sline_real=self->sline_real;
    }
    __result_obj__75 = result_136;
    come_call_finalizer(sTrueNode_finalize, result_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __right_value127 = (void*)0;
struct sFalseNode* __result_obj__77;
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__77 = (struct sFalseNode*)come_increment_ref_count(self);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFalseNode_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __right_value128 = (void*)0;
char* __result_obj__78;
    __result_obj__78 = (char*)come_increment_ref_count(((char*)(__right_value128=__builtin_string("sFalseNode"))));
    (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct CVALUE* come_value_137;
void* __right_value131 = (void*)0;
char* __dec_obj48;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__79;
    come_value_137=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 372, "struct CVALUE*"))));
    __dec_obj48=come_value_137->c_value,
    come_value_137->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=come_value_137->type,
    come_value_137->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 375, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_137->var=((void*)0);
    add_come_last_code(info,"%s",come_value_137->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_137));
    __result_obj__79 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__79;
}

static void sFalseNode_finalize(struct sFalseNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value139 = (void*)0;
struct sNode* __result_obj__82;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 388, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value136=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 388, "struct sFalseNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__82 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value139=_inf_value2)));
    come_call_finalizer(sFalseNode_finalize, __right_value136, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value139) ? __right_value139 = come_decrement_ref_count(__right_value139, ((struct sNode*)__right_value139)->finalize, ((struct sNode*)__right_value139)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__82) ? __result_obj__82 = come_decrement_ref_count(__result_obj__82, ((struct sNode*)__result_obj__82)->finalize, ((struct sNode*)__result_obj__82)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__82;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
struct sFalseNode* __result_obj__80;
void* __right_value137 = (void*)0;
struct sFalseNode* result_138;
void* __right_value138 = (void*)0;
char* __dec_obj50;
struct sFalseNode* __result_obj__81;
    if(    self==(void*)0    ) {
        __result_obj__80 = (void*)0;
        return __result_obj__80;
    }
    result_138=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*"));
    if(    self!=((void*)0)    ) {
        result_138->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj50=result_138->sname,
        result_138->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFalseNode_clone", 5, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_138->sline_real=self->sline_real;
    }
    __result_obj__81 = result_138;
    come_call_finalizer(sFalseNode_finalize, result_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct sType* __dec_obj51;
struct sSizeOfNode* __result_obj__83;
    ((struct sNodeBase*)(__right_value140=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value140, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj51=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__83 = (struct sSizeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __right_value142 = (void*)0;
char* __result_obj__84;
    __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string("sSizeOfNode"))));
    (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__84;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_139;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct CVALUE* come_value_140;
void* __right_value145 = (void*)0;
struct sType* type2_141;
void* __right_value146 = (void*)0;
char* type_name_142;
void* __right_value147 = (void*)0;
char* __dec_obj52;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct sType* __dec_obj53;
_Bool __result_obj__85;
    type_139=(struct sType*)come_increment_ref_count(self->type);
    come_value_140=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 409, "struct CVALUE*"))));
    type2_141=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_139),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name_142=(char*)come_increment_ref_count(make_type_name_string(type2_141,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj52=come_value_140->c_value,
    come_value_140->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_142));
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj53=come_value_140->type,
    come_value_140->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 416, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_140->type->mUnsigned=(_Bool)1;
    come_value_140->var=((void*)0);
    add_come_last_code(info,"%s",come_value_140->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
    __result_obj__85 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_142 = come_decrement_ref_count(type_name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__85;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct sNode* __dec_obj54;
struct sSizeOfExpNode* __result_obj__86;
struct sSizeOfExpNode* __result_obj__87;
    ((struct sNodeBase*)(__right_value151=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value151, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj54=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__86 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
    __result_obj__87 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __right_value153 = (void*)0;
char* __result_obj__88;
    __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("sSizeOfExpNode"))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__88;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_143;
_Bool Value_144;
_Bool __result_obj__89;
void* __right_value154 = (void*)0;
struct CVALUE* come_value_145;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct CVALUE* come_value2_146;
void* __right_value157 = (void*)0;
char* __dec_obj55;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct sType* __dec_obj56;
_Bool __result_obj__90;
    exp_143=(struct sNode*)come_increment_ref_count(self->exp);
    Value_144=node_compile(exp_143,info);
    if(    !Value_144    ) {
        __result_obj__89 = (_Bool)0;
        ((exp_143) ? exp_143 = come_decrement_ref_count(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__89;
    }
    else {
    }
    come_value_145=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_146=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 454, "struct CVALUE*"))));
    __dec_obj55=come_value2_146->c_value,
    come_value2_146->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_145->c_value));
    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj56=come_value2_146->type,
    come_value2_146->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 457, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_146->type->mUnsigned=(_Bool)1;
    come_value2_146->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_146->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_146));
    __result_obj__90 = (_Bool)1;
    ((exp_143) ? exp_143 = come_decrement_ref_count(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__90;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct sType* __dec_obj57;
struct sTypeOfNode* __result_obj__91;
    ((struct sNodeBase*)(__right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj57=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__91 = (struct sTypeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __right_value163 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string("sTypeOfNode"))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_147;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct CVALUE* come_value_148;
void* __right_value166 = (void*)0;
struct sType* type2_149;
void* __right_value167 = (void*)0;
char* type_name_150;
void* __right_value168 = (void*)0;
char* __dec_obj58;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__93;
    type_147=(struct sType*)come_increment_ref_count(self->type);
    come_value_148=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 487, "struct CVALUE*"))));
    type2_149=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_147),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name_150=(char*)come_increment_ref_count(make_type_name_string(type2_149,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj58=come_value_148->c_value,
    come_value_148->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_150));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj59=come_value_148->type,
    come_value_148->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_148->var=((void*)0);
    add_come_last_code(info,"%s",come_value_148->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
    __result_obj__93 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_150 = come_decrement_ref_count(type_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__93;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct sNode* __dec_obj60;
struct sTypeOfExpNode* __result_obj__94;
    ((struct sNodeBase*)(__right_value172=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value172, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj60=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__94 = (struct sTypeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __right_value174 = (void*)0;
char* __result_obj__95;
    __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string("sTypeOfExpNode"))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__95;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_151;
_Bool Value_152;
_Bool __result_obj__96;
void* __right_value175 = (void*)0;
struct CVALUE* come_value_153;
void* __right_value176 = (void*)0;
struct sType* type_154;
void* __right_value177 = (void*)0;
struct sType* type2_155;
void* __right_value178 = (void*)0;
char* type_name_156;
void* __right_value179 = (void*)0;
char* __dec_obj61;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__97;
    exp_151=(struct sNode*)come_increment_ref_count(self->exp);
    Value_152=node_compile(exp_151,info);
    if(    !Value_152    ) {
        __result_obj__96 = (_Bool)0;
        ((exp_151) ? exp_151 = come_decrement_ref_count(exp_151, ((struct sNode*)exp_151)->finalize, ((struct sNode*)exp_151)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__96;
    }
    else {
    }
    come_value_153=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_154=(struct sType*)come_increment_ref_count(sType_clone(come_value_153->type));
    type2_155=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_154),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name_156=(char*)come_increment_ref_count(make_type_name_string(type2_155,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj61=come_value_153->c_value,
    come_value_153->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_156));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj62=come_value_153->type,
    come_value_153->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 536, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_153->var=((void*)0);
    add_come_last_code(info,"%s",come_value_153->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
    __result_obj__97 = (_Bool)1;
    ((exp_151) ? exp_151 = come_decrement_ref_count(exp_151, ((struct sNode*)exp_151)->finalize, ((struct sNode*)exp_151)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_156 = come_decrement_ref_count(type_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__97;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sNode* __dec_obj63;
struct sDynamicTypeOf* __result_obj__98;
    ((struct sNodeBase*)(__right_value183=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value183, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj63=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__98 = (struct sDynamicTypeOf*)come_increment_ref_count(self);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __right_value185 = (void*)0;
char* __result_obj__99;
    __result_obj__99 = (char*)come_increment_ref_count(((char*)(__right_value185=__builtin_string("sDynamicTypeOf"))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__99 = come_decrement_ref_count(__result_obj__99, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__99;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_157;
_Bool Value_158;
_Bool __result_obj__100;
void* __right_value186 = (void*)0;
struct CVALUE* come_value_159;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct CVALUE* come_value2_160;
void* __right_value189 = (void*)0;
char* __dec_obj64;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sType* __dec_obj65;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct CVALUE* come_value2_161;
void* __right_value195 = (void*)0;
char* __dec_obj66;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__101;
    exp_157=(struct sNode*)come_increment_ref_count(self->exp);
    Value_158=node_compile(exp_157,info);
    if(    !Value_158    ) {
        __result_obj__100 = (_Bool)0;
        ((exp_157) ? exp_157 = come_decrement_ref_count(exp_157, ((struct sNode*)exp_157)->finalize, ((struct sNode*)exp_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__100;
    }
    else {
    }
    come_value_159=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_159->type->mPointerNum>0&&come_value_159->type->mHeap    ) {
        come_value2_160=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 572, "struct CVALUE*"))));
        __dec_obj64=come_value2_160->c_value,
        come_value2_160->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_159->c_value));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj65=come_value2_160->type,
        come_value2_160->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 575, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_160->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_160->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_160));
        come_call_finalizer(CVALUE_finalize, come_value2_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        come_value2_161=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 583, "struct CVALUE*"))));
        __dec_obj66=come_value2_161->c_value,
        come_value2_161->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj67=come_value2_161->type,
        come_value2_161->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 586, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_161->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_161->c_value);
        append_object_to_right_values(come_value2_161,(struct sType*)come_increment_ref_count(come_value2_161->type),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_161));
        come_call_finalizer(CVALUE_finalize, come_value2_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__101 = (_Bool)1;
    ((exp_157) ? exp_157 = come_decrement_ref_count(exp_157, ((struct sNode*)exp_157)->finalize, ((struct sNode*)exp_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__101;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct sType* __dec_obj68;
struct sAlignOfNode* __result_obj__102;
struct sAlignOfNode* __result_obj__103;
    ((struct sNodeBase*)(__right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value199, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj68=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__102 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
    __result_obj__103 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __right_value201 = (void*)0;
char* __result_obj__104;
    __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value201=__builtin_string("sAlignOfNode"))));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_162;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct CVALUE* come_value_163;
void* __right_value204 = (void*)0;
struct sType* type2_164;
void* __right_value205 = (void*)0;
char* type_name_165;
void* __right_value206 = (void*)0;
char* __dec_obj69;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__105;
    type_162=(struct sType*)come_increment_ref_count(self->type);
    come_value_163=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 620, "struct CVALUE*"))));
    type2_164=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_162),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name_165=(char*)come_increment_ref_count(make_type_name_string(type2_164,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj69=come_value_163->c_value,
    come_value_163->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_165));
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj70=come_value_163->type,
    come_value_163->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 627, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_163->type->mUnsigned=(_Bool)1;
    come_value_163->var=((void*)0);
    add_come_last_code(info,"%s",come_value_163->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
    __result_obj__105 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_165 = come_decrement_ref_count(type_name_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__105;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sNode* __dec_obj71;
struct sAlignOfExpNode* __result_obj__106;
    ((struct sNodeBase*)(__right_value210=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value210, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj71=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__106 = (struct sAlignOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __right_value212 = (void*)0;
char* __result_obj__107;
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string("sAlignOfExpNode"))));
    (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_166;
_Bool Value_167;
_Bool __result_obj__108;
void* __right_value213 = (void*)0;
struct CVALUE* come_value_168;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct CVALUE* come_value2_169;
void* __right_value216 = (void*)0;
char* __dec_obj72;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__109;
    exp_166=(struct sNode*)come_increment_ref_count(self->exp);
    Value_167=node_compile(exp_166,info);
    if(    !Value_167    ) {
        __result_obj__108 = (_Bool)0;
        ((exp_166) ? exp_166 = come_decrement_ref_count(exp_166, ((struct sNode*)exp_166)->finalize, ((struct sNode*)exp_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__108;
    }
    else {
    }
    come_value_168=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 663, "struct CVALUE*"))));
    __dec_obj72=come_value2_169->c_value,
    come_value2_169->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_168->c_value));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj73=come_value2_169->type,
    come_value2_169->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 666, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_169->type->mUnsigned=(_Bool)1;
    come_value2_169->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_169->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_169));
    __result_obj__109 = (_Bool)1;
    ((exp_166) ? exp_166 = come_decrement_ref_count(exp_166, ((struct sNode*)exp_166)->finalize, ((struct sNode*)exp_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__109;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct sType* __dec_obj74;
struct sAlignOfNode2* __result_obj__110;
    ((struct sNodeBase*)(__right_value220=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value220, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj74=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__110 = (struct sAlignOfNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __right_value222 = (void*)0;
char* __result_obj__111;
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value222=__builtin_string("sAlignOfNode2"))));
    (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_170;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct CVALUE* come_value_171;
void* __right_value225 = (void*)0;
struct sType* type2_172;
void* __right_value226 = (void*)0;
char* type_name_173;
void* __right_value227 = (void*)0;
char* __dec_obj75;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* __dec_obj76;
_Bool __result_obj__112;
    type_170=(struct sType*)come_increment_ref_count(self->type);
    come_value_171=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 696, "struct CVALUE*"))));
    type2_172=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_170),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name_173=(char*)come_increment_ref_count(make_type_name_string(type2_172,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj75=come_value_171->c_value,
    come_value_171->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_173));
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj76=come_value_171->type,
    come_value_171->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 703, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_171->type->mUnsigned=(_Bool)1;
    come_value_171->var=((void*)0);
    add_come_last_code(info,"%s",come_value_171->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
    __result_obj__112 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_173 = come_decrement_ref_count(type_name_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__112;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sNode* __dec_obj77;
struct sAlignOfExpNode2* __result_obj__113;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value231, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj77=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__113 = (struct sAlignOfExpNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __right_value233 = (void*)0;
char* __result_obj__114;
    __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string("sAlignOfExpNode2"))));
    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_174;
_Bool Value_175;
_Bool __result_obj__115;
void* __right_value234 = (void*)0;
struct CVALUE* come_value_176;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct CVALUE* come_value2_177;
void* __right_value237 = (void*)0;
char* __dec_obj78;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* __dec_obj79;
_Bool __result_obj__116;
    exp_174=(struct sNode*)come_increment_ref_count(self->exp);
    Value_175=node_compile(exp_174,info);
    if(    !Value_175    ) {
        __result_obj__115 = (_Bool)0;
        ((exp_174) ? exp_174 = come_decrement_ref_count(exp_174, ((struct sNode*)exp_174)->finalize, ((struct sNode*)exp_174)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__115;
    }
    else {
    }
    come_value_176=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_177=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 739, "struct CVALUE*"))));
    __dec_obj78=come_value2_177->c_value,
    come_value2_177->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_176->c_value));
    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj79=come_value2_177->type,
    come_value2_177->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 742, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_177->type->mUnsigned=(_Bool)1;
    come_value2_177->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_177->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_177));
    __result_obj__116 = (_Bool)1;
    ((exp_174) ? exp_174 = come_decrement_ref_count(exp_174, ((struct sNode*)exp_174)->finalize, ((struct sNode*)exp_174)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__116;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sType* __dec_obj80;
struct sAlignAsNode* __result_obj__117;
    ((struct sNodeBase*)(__right_value241=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value241, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj80=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__117 = (struct sAlignAsNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __right_value243 = (void*)0;
char* __result_obj__118;
    __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value243=__builtin_string("sAlignAsNode"))));
    (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_178;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct CVALUE* come_value_179;
void* __right_value246 = (void*)0;
struct sType* type2_180;
void* __right_value247 = (void*)0;
char* type_name_181;
void* __right_value248 = (void*)0;
char* __dec_obj81;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__119;
    type_178=(struct sType*)come_increment_ref_count(self->type);
    come_value_179=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 772, "struct CVALUE*"))));
    type2_180=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_178),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name_181=(char*)come_increment_ref_count(make_type_name_string(type2_180,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj81=come_value_179->c_value,
    come_value_179->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_181));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj82=come_value_179->type,
    come_value_179->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_179->type->mUnsigned=(_Bool)1;
    come_value_179->var=((void*)0);
    add_come_last_code(info,"%s",come_value_179->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
    __result_obj__119 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (type_name_181 = come_decrement_ref_count(type_name_181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__119;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sNode* __dec_obj83;
struct sAlignAsExpNode* __result_obj__120;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value252, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj83=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__120 = (struct sAlignAsExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __right_value254 = (void*)0;
char* __result_obj__121;
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value254=__builtin_string("sAlignAsExpNode"))));
    (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_182;
_Bool Value_183;
_Bool __result_obj__122;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_184;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value2_185;
void* __right_value258 = (void*)0;
char* __dec_obj84;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__123;
    exp_182=(struct sNode*)come_increment_ref_count(self->exp);
    Value_183=node_compile(exp_182,info);
    if(    !Value_183    ) {
        __result_obj__122 = (_Bool)0;
        ((exp_182) ? exp_182 = come_decrement_ref_count(exp_182, ((struct sNode*)exp_182)->finalize, ((struct sNode*)exp_182)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__122;
    }
    else {
    }
    come_value_184=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_185=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 815, "struct CVALUE*"))));
    __dec_obj84=come_value2_185->c_value,
    come_value2_185->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_184->c_value));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj85=come_value2_185->type,
    come_value2_185->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 818, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_185->type->mUnsigned=(_Bool)1;
    come_value2_185->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_185->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_185));
    __result_obj__123 = (_Bool)1;
    ((exp_182) ? exp_182 = come_decrement_ref_count(exp_182, ((struct sNode*)exp_182)->finalize, ((struct sNode*)exp_182)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__123;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct sNode* __dec_obj86;
struct sDeleteNode* __result_obj__124;
    ((struct sNodeBase*)(__right_value262=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value262, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj86=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__124 = (struct sDeleteNode*)come_increment_ref_count(self);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sDeleteNode_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __right_value264 = (void*)0;
char* __result_obj__125;
    __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value264=__builtin_string("sDeleteNode"))));
    (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_186;
_Bool Value_187;
void* __right_value265 = (void*)0;
struct CVALUE* come_value_188;
void* __right_value266 = (void*)0;
_Bool __result_obj__126;
    node_186=self->node;
    Value_187=node_compile(node_186,info);
    if(    !Value_187    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_188=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_188->type->mPointerNum>0    ) {
        free_object((struct sType*)come_increment_ref_count(sType_clone(come_value_188->type)),come_value_188->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
    }
    __result_obj__126 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__126;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sNode* __dec_obj87;
struct sBorrowNode* __result_obj__127;
struct sBorrowNode* __result_obj__128;
    ((struct sNodeBase*)(__right_value267=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value267, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj87=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__127 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBorrowNode_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
    __result_obj__128 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBorrowNode_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __right_value269 = (void*)0;
char* __result_obj__129;
    __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value269=__builtin_string("sBorrowNode"))));
    (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__129;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_189;
_Bool Value_190;
void* __right_value270 = (void*)0;
struct CVALUE* come_value_191;
struct sRightValueObject* right_value_objects_192;
int right_value_id_193;
_Bool __result_obj__130;
    node_189=self->node;
    Value_190=node_compile(node_189,info);
    if(    !Value_190    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_191=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_191->type->mPointerNum>0    ) {
        come_value_191->type->mHeap=(_Bool)0;
        right_value_objects_192=come_value_191->right_value_objects;
        if(        right_value_objects_192        ) {
            right_value_id_193=right_value_objects_192->mID;
            if(            right_value_id_193!=-1            ) {
                remove_object_from_right_values(right_value_id_193,info);
            }
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
    __result_obj__130 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__130;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sNode* __dec_obj88;
struct sCloneNode* __result_obj__131;
    ((struct sNodeBase*)(__right_value271=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value271, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj88=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__131 = (struct sCloneNode*)come_increment_ref_count(self);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sCloneNode_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __right_value273 = (void*)0;
char* __result_obj__132;
    __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value273=__builtin_string("sCloneNode"))));
    (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_194;
_Bool Value_195;
void* __right_value274 = (void*)0;
struct CVALUE* left_value_196;
void* __right_value275 = (void*)0;
struct sType* left_type_197;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct CVALUE* come_value_198;
void* __right_value278 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* result_type_199=0;
char* c_value_200=0;
char* __dec_obj89;
void* __right_value279 = (void*)0;
struct sType* __dec_obj90;
_Bool __result_obj__133;
    node_194=self->node;
    Value_195=node_compile(node_194,info);
    if(    !Value_195    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_196=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_197=(struct sType*)come_increment_ref_count(sType_clone(left_value_196->type));
    if(    left_type_197->mPointerNum==1&&string_operator_equals(left_type_197->mClass->mName,"void")&&left_type_197->mHeap==(_Bool)0    ) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_196));
    }
    else if(    left_type_197->mPointerNum==0    ) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_196));
    }
    else if(    left_type_197->mPointerNum>0    ) {
        come_value_198=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 940, "struct CVALUE*"))));
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value278=clone_object((struct sType*)come_increment_ref_count(left_type_197),left_value_196->c_value,info)));
        result_type_199=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        c_value_200=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value278, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj89=come_value_198->c_value,
        come_value_198->c_value=(char*)come_increment_ref_count(c_value_200);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj90=come_value_198->type,
        come_value_198->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_197));
        come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_198->type->mHeap=(_Bool)1;
        come_value_198->var=((void*)0);
        append_object_to_right_values(come_value_198,(struct sType*)come_increment_ref_count(left_type_197),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
        come_call_finalizer(CVALUE_finalize, come_value_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (c_value_200 = come_decrement_ref_count(c_value_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__133 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__133;
}

static void sCloneNode_finalize(struct sCloneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj91;
struct sDupeNode* __result_obj__134;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj91=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__134 = (struct sDupeNode*)come_increment_ref_count(self);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sDupeNode_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __right_value282 = (void*)0;
char* __result_obj__135;
    __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value282=__builtin_string("sDupeNode"))));
    (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_201;
_Bool Value_202;
void* __right_value283 = (void*)0;
struct CVALUE* left_value_203;
void* __right_value284 = (void*)0;
struct sType* left_type_204;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct CVALUE* come_value_205;
void* __right_value287 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* result_type_206=0;
char* c_value_207=0;
char* __dec_obj92;
void* __right_value288 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__136;
    node_201=self->node;
    Value_202=node_compile(node_201,info);
    if(    !Value_202    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_203=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_204=(struct sType*)come_increment_ref_count(sType_clone(left_value_203->type));
    if(    left_type_204->mPointerNum==0    ) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_203));
    }
    else if(    left_type_204->mPointerNum>0&&left_type_204->mHeap==(_Bool)0    ) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_203));
    }
    else if(    left_type_204->mPointerNum>0    ) {
        come_value_205=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 990, "struct CVALUE*"))));
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value287=clone_object((struct sType*)come_increment_ref_count(left_type_204),left_value_203->c_value,info)));
        result_type_206=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        c_value_207=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value287, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj92=come_value_205->c_value,
        come_value_205->c_value=(char*)come_increment_ref_count(c_value_207);
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj93=come_value_205->type,
        come_value_205->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_204));
        come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_205->type->mHeap=(_Bool)1;
        come_value_205->var=((void*)0);
        append_object_to_right_values(come_value_205,(struct sType*)come_increment_ref_count(left_type_204),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_205));
        come_call_finalizer(CVALUE_finalize, come_value_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (c_value_207 = come_decrement_ref_count(c_value_207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__136 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static void sDupeNode_finalize(struct sDupeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj94;
struct sDummyHeapNode* __result_obj__137;
    ((struct sNodeBase*)(__right_value289=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj94=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__137 = (struct sDummyHeapNode*)come_increment_ref_count(self);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __right_value291 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value291=__builtin_string("sDummyHeapNode"))));
    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_208;
_Bool Value_209;
void* __right_value292 = (void*)0;
struct CVALUE* come_value_210;
_Bool __result_obj__139;
    node_208=self->node;
    Value_209=node_compile(node_208,info);
    if(    !Value_209    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_210=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_210->type->mPointerNum>0    ) {
        come_value_210->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_210));
    __result_obj__139 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__139;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj95;
struct sGCIncNode* __result_obj__140;
    ((struct sNodeBase*)(__right_value293=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value293, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj95=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__140 = (struct sGCIncNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sGCIncNode_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __right_value295 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value295=__builtin_string("sGCIncNode"))));
    (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_211;
_Bool Value_212;
void* __right_value296 = (void*)0;
struct CVALUE* come_value_213;
struct sType* type_214;
void* __right_value297 = (void*)0;
char* type_name_215;
void* __right_value298 = (void*)0;
char* __dec_obj96;
_Bool __result_obj__142;
    node_211=self->node;
    Value_212=node_compile(node_211,info);
    if(    !Value_212    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_213=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_214=come_value_213->type;
    if(    come_value_213->type->mHeap&&come_value_213->type->mPointerNum>0    ) {
        type_name_215=(char*)come_increment_ref_count(make_type_name_string(type_214,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj96=come_value_213->c_value,
        come_value_213->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_213->type,come_value_213->c_value,info));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (type_name_215 = come_decrement_ref_count(type_name_215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
    __result_obj__142 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__142;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj97;
struct sGCDecNode* __result_obj__143;
    ((struct sNodeBase*)(__right_value299=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value299, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj97=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj97 ? __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__143 = (struct sGCDecNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sGCDecNode_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __right_value301 = (void*)0;
char* __result_obj__144;
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value301=__builtin_string("sGCDecNode"))));
    (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_216;
_Bool Value_217;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_218;
struct sType* type_219;
_Bool __result_obj__145;
    node_216=self->node;
    Value_217=node_compile(node_216,info);
    if(    !Value_217    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_218=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_219=(struct sType*)come_increment_ref_count(come_value_218->type);
    if(    come_value_218->type->mHeap&&come_value_218->type->mPointerNum>0    ) {
        decrement_ref_count_object((struct sType*)come_increment_ref_count(type_219),come_value_218->c_value,info,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_218));
    __result_obj__145 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__145;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj98;
struct sIsHeap* __result_obj__146;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj98=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__146 = (struct sIsHeap*)come_increment_ref_count(self);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIsHeap_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __right_value305 = (void*)0;
char* __result_obj__147;
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value305=__builtin_string("sIsHeap"))));
    (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_220;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct CVALUE* come_value_221;
void* __right_value308 = (void*)0;
char* __dec_obj99;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj100;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct CVALUE* come_value_222;
void* __right_value314 = (void*)0;
char* __dec_obj101;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj102;
    node_220=self->type;
    if(    self->type->mHeap    ) {
        come_value_221=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1133, "struct CVALUE*"))));
        __dec_obj99=come_value_221->c_value,
        come_value_221->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj100=come_value_221->type,
        come_value_221->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1136, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_221->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_221));
        add_come_last_code(info,"%s",come_value_221->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        come_value_222=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1144, "struct CVALUE*"))));
        __dec_obj101=come_value_222->c_value,
        come_value_222->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj102=come_value_222->type,
        come_value_222->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1147, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_222->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_222));
        add_come_last_code(info,"%s",come_value_222->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj103;
struct sIsPointer* __result_obj__148;
    ((struct sNodeBase*)(__right_value318=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value318, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj103=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__148 = (struct sIsPointer*)come_increment_ref_count(self);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIsPointer_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __right_value320 = (void*)0;
char* __result_obj__149;
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value320=__builtin_string("sIsPointer"))));
    (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_223;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value_224;
void* __right_value323 = (void*)0;
char* __dec_obj104;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sType* __dec_obj105;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_225;
void* __right_value329 = (void*)0;
char* __dec_obj106;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __dec_obj107;
    node_223=self->type;
    if(    self->type->mPointerNum>0    ) {
        come_value_224=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1179, "struct CVALUE*"))));
        __dec_obj104=come_value_224->c_value,
        come_value_224->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj105=come_value_224->type,
        come_value_224->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1182, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_224->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_224));
        add_come_last_code(info,"%s",come_value_224->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        come_value_225=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1190, "struct CVALUE*"))));
        __dec_obj106=come_value_225->c_value,
        come_value_225->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj107=come_value_225->type,
        come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1193, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_225->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        add_come_last_code(info,"%s",come_value_225->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sNode* __dec_obj108;
struct sGCDecNoFreeNode* __result_obj__150;
    ((struct sNodeBase*)(__right_value333=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value333, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj108=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__150 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __right_value335 = (void*)0;
char* __result_obj__151;
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value335=__builtin_string("sGCDecNoFreeNode"))));
    (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_226;
_Bool Value_227;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_228;
struct sType* type_229;
_Bool __result_obj__152;
    node_226=self->node;
    Value_227=node_compile(node_226,info);
    if(    !Value_227    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_228=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_229=(struct sType*)come_increment_ref_count(come_value_228->type);
    if(    type_229->mHeap&&type_229->mPointerNum>0    ) {
        decrement_ref_count_object((struct sType*)come_increment_ref_count(type_229),come_value_228->c_value,info,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_228));
    __result_obj__152 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__152;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value337 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type_230=0;
char* name_231=0;
_Bool err_232=0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value355 = (void*)0;
struct sNode* obj_233;
void* __right_value356 = (void*)0;
char* fun_name_241;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* __result_obj__161;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_242;
void* __right_value361 = (void*)0;
char* word_243;
_Bool no_comma_244;
void* __right_value362 = (void*)0;
struct sNode* exp_245;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* value_node_246;
void* __right_value367 = (void*)0;
struct sNode* __dec_obj117;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* exp_247;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value377 = (void*)0;
struct sNode* __result_obj__163;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value380 = (void*)0;
struct sNode* __result_obj__164;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value383 = (void*)0;
struct sNode* __result_obj__165;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value386 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value387 = (void*)0;
struct sNode* node_248;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value393 = (void*)0;
struct sNode* __result_obj__169;
void* __right_value394 = (void*)0;
struct sNode* node_250;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value400 = (void*)0;
struct sNode* __result_obj__172;
void* __right_value401 = (void*)0;
struct sNode* node_252;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value407 = (void*)0;
struct sNode* __result_obj__175;
void* __right_value408 = (void*)0;
struct sNode* node_254;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value414 = (void*)0;
struct sNode* __result_obj__178;
void* __right_value415 = (void*)0;
struct sNode* node_256;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value421 = (void*)0;
struct sNode* __result_obj__181;
void* __right_value422 = (void*)0;
struct sNode* node_258;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value428 = (void*)0;
struct sNode* __result_obj__184;
void* __right_value429 = (void*)0;
struct sNode* node_260;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value435 = (void*)0;
struct sNode* __result_obj__187;
void* __right_value436 = (void*)0;
struct sNode* node_262;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value442 = (void*)0;
struct sNode* __result_obj__190;
void* __right_value443 = (void*)0;
struct sNode* node_264;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sNode* _inf_value16;
struct sGCDecNoFreeNode* _inf_obj_value16;
void* __right_value446 = (void*)0;
struct sNode* __result_obj__191;
void* __right_value447 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* param_type_265=0;
char* param_name_266=0;
_Bool err_267=0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* type2_268;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* _inf_value17;
struct sIsHeap* _inf_obj_value17;
void* __right_value455 = (void*)0;
struct sNode* __result_obj__194;
void* __right_value456 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* param_type_270=0;
char* param_name_271=0;
_Bool err_272=0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* type2_273;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* _inf_value18;
struct sIsPointer* _inf_obj_value18;
void* __right_value464 = (void*)0;
struct sNode* __result_obj__197;
void* __right_value465 = (void*)0;
struct sNode* __result_obj__198;
void* __right_value466 = (void*)0;
struct sNode* __result_obj__199;
void* __right_value467 = (void*)0;
struct sNode* __result_obj__200;
void* __right_value468 = (void*)0;
struct sNode* __result_obj__201;
_Bool come_c_275;
void* __right_value469 = (void*)0;
struct sNode* node_276;
struct sNode* __result_obj__202;
void* __right_value470 = (void*)0;
struct sNode* __result_obj__203;
void* __right_value471 = (void*)0;
struct sNode* __result_obj__204;
void* __right_value472 = (void*)0;
struct sNode* __result_obj__205;
void* __right_value473 = (void*)0;
struct sNode* __result_obj__206;
void* __right_value474 = (void*)0;
struct sNode* __result_obj__207;
void* __right_value475 = (void*)0;
_Bool paren_277;
_Bool is_type_name_flag_278;
char* p_279;
int sline_280;
void* __right_value476 = (void*)0;
char* word_281;
void* __right_value477 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_282=0;
char* name_283=0;
_Bool err_284=0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfNode* _inf_obj_value19;
void* __right_value484 = (void*)0;
struct sNode* __result_obj__210;
struct sNode* exp_286;
_Bool no_comma_287;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value486 = (void*)0;
struct sNode* __dec_obj143;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sNode* _inf_value20;
struct sSizeOfExpNode* _inf_obj_value20;
void* __right_value492 = (void*)0;
struct sNode* __result_obj__213;
_Bool paren_289;
_Bool is_type_name_flag_290;
char* p_291;
int sline_292;
void* __right_value493 = (void*)0;
char* word_293;
void* __right_value494 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_294=0;
char* name_295=0;
_Bool err_296=0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfNode* _inf_obj_value21;
void* __right_value501 = (void*)0;
struct sNode* __result_obj__216;
struct sNode* exp_298;
_Bool no_comma_299;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj148;
void* __right_value503 = (void*)0;
struct sNode* __dec_obj149;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* _inf_value22;
struct sTypeOfExpNode* _inf_obj_value22;
void* __right_value509 = (void*)0;
struct sNode* __result_obj__219;
_Bool paren_301;
struct sNode* exp_302;
_Bool no_comma_303;
void* __right_value510 = (void*)0;
struct sNode* __dec_obj152;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sNode* _inf_value23;
struct sDynamicTypeOf* _inf_obj_value23;
void* __right_value517 = (void*)0;
struct sNode* __result_obj__222;
_Bool paren_305;
_Bool is_type_name_flag_306;
char* p_307;
int sline_308;
void* __right_value518 = (void*)0;
char* word_309;
void* __right_value519 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_310=0;
char* name_311=0;
_Bool err_312=0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfNode* _inf_obj_value24;
void* __right_value526 = (void*)0;
struct sNode* __result_obj__225;
struct sNode* exp_314;
_Bool no_comma_315;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj158;
void* __right_value528 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfExpNode* _inf_obj_value25;
void* __right_value534 = (void*)0;
struct sNode* __result_obj__228;
_Bool paren_317;
_Bool is_type_name_flag_318;
char* p_319;
int sline_320;
void* __right_value535 = (void*)0;
char* word_321;
void* __right_value536 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type_322=0;
char* name_323=0;
_Bool err_324=0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfNode2* _inf_obj_value26;
void* __right_value543 = (void*)0;
struct sNode* __result_obj__231;
struct sNode* exp_326;
_Bool no_comma_327;
void* __right_value544 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value545 = (void*)0;
struct sNode* __dec_obj165;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sNode* _inf_value27;
struct sAlignOfExpNode2* _inf_obj_value27;
void* __right_value551 = (void*)0;
struct sNode* __result_obj__234;
_Bool is_type_name_flag_329;
char* p_330;
int sline_331;
void* __right_value552 = (void*)0;
char* word_332;
void* __right_value553 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_333=0;
char* name_334=0;
_Bool err_335=0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsNode* _inf_obj_value28;
void* __right_value560 = (void*)0;
struct sNode* __result_obj__237;
void* __right_value561 = (void*)0;
struct sNode* exp_337;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sNode* _inf_value29;
struct sAlignAsExpNode* _inf_obj_value29;
void* __right_value567 = (void*)0;
struct sNode* __result_obj__240;
void* __right_value568 = (void*)0;
struct sNode* __result_obj__241;
exp_286 = (void*)0;
exp_298 = (void*)0;
exp_302 = (void*)0;
exp_314 = (void*)0;
exp_326 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")    ) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value337=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_230=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_231=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_232=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value337, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_232        ) {
            ((struct tuple2$2int$bool$*)(__right_value338=err_msg(info,"parse_type failed")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        if(        *info->p==40        ) {
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1251, "struct sNode");
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value340=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1251, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_230),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            obj_233=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer(sNewNode_finalize, __right_value340, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            fun_name_241=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result_obj__161 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value358=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj_233)),(char*)come_increment_ref_count(fun_name_241),info))));
            ((obj_233) ? obj_233 = come_decrement_ref_count(obj_233, ((struct sNode*)obj_233)->finalize, ((struct sNode*)obj_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_241 = come_decrement_ref_count(fun_name_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_231 = come_decrement_ref_count(name_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__right_value358) ? __right_value358 = come_decrement_ref_count(__right_value358, ((struct sNode*)__right_value358)->finalize, ((struct sNode*)__right_value358)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__161) ? __result_obj__161 = come_decrement_ref_count(__result_obj__161, ((struct sNode*)__result_obj__161)->finalize, ((struct sNode*)__result_obj__161)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__161;
            ((obj_233) ? obj_233 = come_decrement_ref_count(obj_233, ((struct sNode*)obj_233)->finalize, ((struct sNode*)obj_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_241 = come_decrement_ref_count(fun_name_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        *info->p==123        ) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_242=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "21obj.c", 1260, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            while(            (_Bool)1            ) {
                word_243=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_244=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_245=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_244;
                    if(                    (_condtional_value_X5=(string_operator_equals(((char*)(__right_value364=exp_245->kind(exp_245->_protocol_obj))),"sWildCard"))),                    (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                    (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                    _condtional_value_X5                    ) {
                        value_node_246=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value365=xsprintf("Value"))),info));
                        (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        __dec_obj117=exp_245,
                        exp_245=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_246),(char*)come_increment_ref_count(word_243),info));
                        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                        ((value_node_246) ? value_node_246 = come_decrement_ref_count(value_node_246, ((struct sNode*)value_node_246)->finalize, ((struct sNode*)value_node_246)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_242,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1279, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_243),(struct sNode*)come_increment_ref_count(exp_245))));
                    ((exp_245) ? exp_245 = come_decrement_ref_count(exp_245, ((struct sNode*)exp_245)->finalize, ((struct sNode*)exp_245)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else if(                *info->p==44                ) {
                    exp_247=(struct sNode*)come_increment_ref_count(create_load_var(word_243,info));
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_242,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1284, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_243),(struct sNode*)come_increment_ref_count(exp_247))));
                    ((exp_247) ? exp_247 = come_decrement_ref_count(exp_247, ((struct sNode*)exp_247)->finalize, ((struct sNode*)exp_247)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value373=err_msg(info,"invalid character(21) %c",*info->p)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value373, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word_243 = come_decrement_ref_count(word_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value374=err_msg(info,"invalid character(30) %c",*info->p)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value374, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                (word_243 = come_decrement_ref_count(word_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1305, "struct sNode");
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value376=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1305, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_230),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_242),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__163 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value377=_inf_value4)));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_231 = come_decrement_ref_count(name_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value376, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value377) ? __right_value377 = come_decrement_ref_count(__right_value377, ((struct sNode*)__right_value377)->finalize, ((struct sNode*)__right_value377)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__163) ? __result_obj__163 = come_decrement_ref_count(__result_obj__163, ((struct sNode*)__result_obj__163)->finalize, ((struct sNode*)__result_obj__163)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__163;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1308, "struct sNode");
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value379=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1308, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_230),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__164 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value380=_inf_value5)));
            come_call_finalizer(sType_finalize, type_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_231 = come_decrement_ref_count(name_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value379, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value380) ? __right_value380 = come_decrement_ref_count(__right_value380, ((struct sNode*)__right_value380)->finalize, ((struct sNode*)__right_value380)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__164) ? __result_obj__164 = come_decrement_ref_count(__result_obj__164, ((struct sNode*)__result_obj__164)->finalize, ((struct sNode*)__result_obj__164)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__164;
        }
        come_call_finalizer(sType_finalize, type_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_231 = come_decrement_ref_count(name_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")    ) {
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1312, "struct sNode");
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value382=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1312, "struct sTrueNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__165 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value383=_inf_value6)));
        come_call_finalizer(sTrueNode_finalize, __right_value382, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value383) ? __right_value383 = come_decrement_ref_count(__right_value383, ((struct sNode*)__right_value383)->finalize, ((struct sNode*)__right_value383)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__165) ? __result_obj__165 = come_decrement_ref_count(__result_obj__165, ((struct sNode*)__result_obj__165)->finalize, ((struct sNode*)__result_obj__165)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__165;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")    ) {
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1315, "struct sNode");
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value385=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1315, "struct sFalseNode*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value386=_inf_value7)));
        come_call_finalizer(sFalseNode_finalize, __right_value385, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value386) ? __right_value386 = come_decrement_ref_count(__right_value386, ((struct sNode*)__right_value386)->finalize, ((struct sNode*)__right_value386)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__166;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")    ) {
        node_248=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1320, "struct sNode");
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value389=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1320, "struct sDeleteNode*")),(struct sNode*)come_increment_ref_count(node_248),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__169 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value393=_inf_value8)));
        ((node_248) ? node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value389, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value393) ? __right_value393 = come_decrement_ref_count(__right_value393, ((struct sNode*)__right_value393)->finalize, ((struct sNode*)__right_value393)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__169;
        ((node_248) ? node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")    ) {
        node_250=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1325, "struct sNode");
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value396=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1325, "struct sBorrowNode*")),(struct sNode*)come_increment_ref_count(node_250),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__172 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value400=_inf_value9)));
        ((node_250) ? node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value396, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value400) ? __right_value400 = come_decrement_ref_count(__right_value400, ((struct sNode*)__right_value400)->finalize, ((struct sNode*)__right_value400)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__172;
        ((node_250) ? node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")    ) {
        node_252=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1330, "struct sNode");
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value403=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1330, "struct sCloneNode*")),(struct sNode*)come_increment_ref_count(node_252),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__175 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value407=_inf_value10)));
        ((node_252) ? node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value403, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value407) ? __right_value407 = come_decrement_ref_count(__right_value407, ((struct sNode*)__right_value407)->finalize, ((struct sNode*)__right_value407)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__175;
        ((node_252) ? node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")    ) {
        node_254=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1335, "struct sNode");
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value410=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1335, "struct sDupeNode*")),(struct sNode*)come_increment_ref_count(node_254),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__178 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value414=_inf_value11)));
        ((node_254) ? node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value410, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value414) ? __right_value414 = come_decrement_ref_count(__right_value414, ((struct sNode*)__right_value414)->finalize, ((struct sNode*)__right_value414)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__178;
        ((node_254) ? node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")    ) {
        node_256=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1340, "struct sNode");
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value417=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1340, "struct sDummyHeapNode*")),(struct sNode*)come_increment_ref_count(node_256),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__181 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value421=_inf_value12)));
        ((node_256) ? node_256 = come_decrement_ref_count(node_256, ((struct sNode*)node_256)->finalize, ((struct sNode*)node_256)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value417, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value421) ? __right_value421 = come_decrement_ref_count(__right_value421, ((struct sNode*)__right_value421)->finalize, ((struct sNode*)__right_value421)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__181;
        ((node_256) ? node_256 = come_decrement_ref_count(node_256, ((struct sNode*)node_256)->finalize, ((struct sNode*)node_256)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_258=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1350, "struct sNode");
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value424=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1350, "struct sGCIncNode*")),(struct sNode*)come_increment_ref_count(node_258),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__184 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value428=_inf_value13)));
        ((node_258) ? node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value424, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value428) ? __right_value428 = come_decrement_ref_count(__right_value428, ((struct sNode*)__right_value428)->finalize, ((struct sNode*)__right_value428)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__184;
        ((node_258) ? node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_260=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1360, "struct sNode");
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value431=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1360, "struct sGCDecNode*")),(struct sNode*)come_increment_ref_count(node_260),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__187 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value435=_inf_value14)));
        ((node_260) ? node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value431, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value435) ? __right_value435 = come_decrement_ref_count(__right_value435, ((struct sNode*)__right_value435)->finalize, ((struct sNode*)__right_value435)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__187) ? __result_obj__187 = come_decrement_ref_count(__result_obj__187, ((struct sNode*)__result_obj__187)->finalize, ((struct sNode*)__result_obj__187)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__187;
        ((node_260) ? node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_262=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1370, "struct sNode");
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value438=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1370, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_262),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__190 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value442=_inf_value15)));
        ((node_262) ? node_262 = come_decrement_ref_count(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value438, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value442) ? __right_value442 = come_decrement_ref_count(__right_value442, ((struct sNode*)__right_value442)->finalize, ((struct sNode*)__right_value442)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__190) ? __result_obj__190 = come_decrement_ref_count(__result_obj__190, ((struct sNode*)__result_obj__190)->finalize, ((struct sNode*)__result_obj__190)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__190;
        ((node_262) ? node_262 = come_decrement_ref_count(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"lock")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        node_264=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1380, "struct sNode");
        _inf_obj_value16=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value445=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1380, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_264),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value16->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value16->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__191 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value446=_inf_value16)));
        ((node_264) ? node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value445, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value446) ? __right_value446 = come_decrement_ref_count(__right_value446, ((struct sNode*)__right_value446)->finalize, ((struct sNode*)__right_value446)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__191) ? __result_obj__191 = come_decrement_ref_count(__result_obj__191, ((struct sNode*)__result_obj__191)->finalize, ((struct sNode*)__result_obj__191)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__191;
        ((node_264) ? node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value447=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_265=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        param_name_266=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        err_267=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value447, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_267        ) {
            ((struct tuple2$2int$bool$*)(__right_value448=err_msg(info,"parse_type failed")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value448, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        type2_268=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_265),(struct sType*)come_increment_ref_count(info->generics_type),info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1396, "struct sNode");
        _inf_obj_value17=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value451=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1396, "struct sIsHeap*")),(struct sType*)come_increment_ref_count(type2_268),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsHeap_finalize;
        _inf_value17->clone=(void*)sIsHeap_clone;
        _inf_value17->compile=(void*)sIsHeap_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsHeap_kind;
        _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__194 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value455=_inf_value17)));
        come_call_finalizer(sType_finalize, param_type_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (param_name_266 = come_decrement_ref_count(param_name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sIsHeap_finalize, __right_value451, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value455) ? __right_value455 = come_decrement_ref_count(__right_value455, ((struct sNode*)__right_value455)->finalize, ((struct sNode*)__right_value455)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__194) ? __result_obj__194 = come_decrement_ref_count(__result_obj__194, ((struct sNode*)__result_obj__194)->finalize, ((struct sNode*)__result_obj__194)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__194;
        come_call_finalizer(sType_finalize, param_type_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (param_name_266 = come_decrement_ref_count(param_name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value456=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_270=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        param_name_271=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_272=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value456, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_272        ) {
            ((struct tuple2$2int$bool$*)(__right_value457=err_msg(info,"parse_type failed")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value457, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        type2_273=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_270),(struct sType*)come_increment_ref_count(info->generics_type),info));
        expected_next_character(41,info);
        _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1412, "struct sNode");
        _inf_obj_value18=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value460=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1412, "struct sIsPointer*")),(struct sType*)come_increment_ref_count(type2_273),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sIsPointer_finalize;
        _inf_value18->clone=(void*)sIsPointer_clone;
        _inf_value18->compile=(void*)sIsPointer_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sIsPointer_kind;
        _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__197 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value464=_inf_value18)));
        come_call_finalizer(sType_finalize, param_type_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (param_name_271 = come_decrement_ref_count(param_name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sIsPointer_finalize, __right_value460, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value464) ? __right_value464 = come_decrement_ref_count(__right_value464, ((struct sNode*)__right_value464)->finalize, ((struct sNode*)__right_value464)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__197) ? __result_obj__197 = come_decrement_ref_count(__result_obj__197, ((struct sNode*)__result_obj__197)->finalize, ((struct sNode*)__result_obj__197)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__197;
        come_call_finalizer(sType_finalize, param_type_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (param_name_271 = come_decrement_ref_count(param_name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")    ) {
        if(        parsecmp("comelang_str",info)        ) {
            info->p+=strlen("comelang_str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__198 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value465=create_nothing_node(info))));
            ((__right_value465) ? __right_value465 = come_decrement_ref_count(__right_value465, ((struct sNode*)__right_value465)->finalize, ((struct sNode*)__right_value465)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__198) ? __result_obj__198 = come_decrement_ref_count(__result_obj__198, ((struct sNode*)__result_obj__198)->finalize, ((struct sNode*)__result_obj__198)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__198;
        }
        else if(        parsecmp("comelang_pthread",info)        ) {
            info->p+=strlen("comelang_pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__199 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value466=create_nothing_node(info))));
            ((__right_value466) ? __right_value466 = come_decrement_ref_count(__right_value466, ((struct sNode*)__right_value466)->finalize, ((struct sNode*)__right_value466)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__199) ? __result_obj__199 = come_decrement_ref_count(__result_obj__199, ((struct sNode*)__result_obj__199)->finalize, ((struct sNode*)__result_obj__199)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__199;
        }
        else if(        parsecmp("comelang_net",info)        ) {
            info->p+=strlen("comelang_net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__200 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value467=create_nothing_node(info))));
            ((__right_value467) ? __right_value467 = come_decrement_ref_count(__right_value467, ((struct sNode*)__right_value467)->finalize, ((struct sNode*)__right_value467)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__200) ? __result_obj__200 = come_decrement_ref_count(__result_obj__200, ((struct sNode*)__result_obj__200)->finalize, ((struct sNode*)__result_obj__200)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__200;
        }
        else if(        parsecmp("comelang",info)        ) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result_obj__201 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value468=create_nothing_node(info))));
            ((__right_value468) ? __right_value468 = come_decrement_ref_count(__right_value468, ((struct sNode*)__right_value468)->finalize, ((struct sNode*)__right_value468)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__201) ? __result_obj__201 = come_decrement_ref_count(__result_obj__201, ((struct sNode*)__result_obj__201)->finalize, ((struct sNode*)__result_obj__201)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__201;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)        ) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_275=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123            ) {
                node_276=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info,(_Bool)0));
                gComeC=come_c_275;
                __result_obj__202 = (struct sNode*)come_increment_ref_count(node_276);
                ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__202) ? __result_obj__202 = come_decrement_ref_count(__result_obj__202, ((struct sNode*)__result_obj__202)->finalize, ((struct sNode*)__result_obj__202)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__202;
                ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                __result_obj__203 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value470=create_nothing_node(info))));
                ((__right_value470) ? __right_value470 = come_decrement_ref_count(__right_value470, ((struct sNode*)__right_value470)->finalize, ((struct sNode*)__right_value470)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((__result_obj__203) ? __result_obj__203 = come_decrement_ref_count(__result_obj__203, ((struct sNode*)__result_obj__203)->finalize, ((struct sNode*)__result_obj__203)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__203;
            }
        }
        else if(        parsecmp("gc",info)        ) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result_obj__204 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value471=create_nothing_node(info))));
            ((__right_value471) ? __right_value471 = come_decrement_ref_count(__right_value471, ((struct sNode*)__right_value471)->finalize, ((struct sNode*)__right_value471)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__204) ? __result_obj__204 = come_decrement_ref_count(__result_obj__204, ((struct sNode*)__result_obj__204)->finalize, ((struct sNode*)__result_obj__204)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__204;
        }
        else if(        parsecmp("no-gc",info)        ) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result_obj__205 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value472=create_nothing_node(info))));
            ((__right_value472) ? __right_value472 = come_decrement_ref_count(__right_value472, ((struct sNode*)__right_value472)->finalize, ((struct sNode*)__right_value472)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__205) ? __result_obj__205 = come_decrement_ref_count(__result_obj__205, ((struct sNode*)__result_obj__205)->finalize, ((struct sNode*)__result_obj__205)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__205;
        }
        else if(        parsecmp("unsafe",info)        ) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result_obj__206 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value473=create_nothing_node(info))));
            ((__right_value473) ? __right_value473 = come_decrement_ref_count(__right_value473, ((struct sNode*)__right_value473)->finalize, ((struct sNode*)__right_value473)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__206) ? __result_obj__206 = come_decrement_ref_count(__result_obj__206, ((struct sNode*)__result_obj__206)->finalize, ((struct sNode*)__result_obj__206)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__206;
        }
        else if(        parsecmp("no-null-check",info)        ) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result_obj__207 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value474=create_nothing_node(info))));
            ((__right_value474) ? __right_value474 = come_decrement_ref_count(__right_value474, ((struct sNode*)__right_value474)->finalize, ((struct sNode*)__right_value474)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__207) ? __result_obj__207 = come_decrement_ref_count(__result_obj__207, ((struct sNode*)__result_obj__207)->finalize, ((struct sNode*)__result_obj__207)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__207;
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value475=err_msg(info,"invalid using")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value475, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")    ) {
        paren_277=(_Bool)0;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_277=(_Bool)1;
        }
        is_type_name_flag_278=(_Bool)0;
        {
            p_279=info->p;
            sline_280=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_281=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_281,info)                ) {
                    is_type_name_flag_278=(_Bool)1;
                }
                (word_281 = come_decrement_ref_count(word_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            info->p=p_279;
            info->sline=sline_280;
        }
        if(        is_type_name_flag_278        ) {
            multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value477=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_282=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_283=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_284=multiple_assign_var11->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value477, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_284            ) {
                ((struct tuple2$2int$bool$*)(__right_value478=err_msg(info,"parse type")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value478, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            if(            paren_277&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1536, "struct sNode");
            _inf_obj_value19=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value480=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1536, "struct sSizeOfNode*")),(struct sType*)come_increment_ref_count(type_282),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfNode_finalize;
            _inf_value19->clone=(void*)sSizeOfNode_clone;
            _inf_value19->compile=(void*)sSizeOfNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfNode_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__210 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value484=_inf_value19)));
            come_call_finalizer(sType_finalize, type_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_283 = come_decrement_ref_count(name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sSizeOfNode_finalize, __right_value480, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value484) ? __right_value484 = come_decrement_ref_count(__right_value484, ((struct sNode*)__right_value484)->finalize, ((struct sNode*)__right_value484)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__210) ? __result_obj__210 = come_decrement_ref_count(__result_obj__210, ((struct sNode*)__result_obj__210)->finalize, ((struct sNode*)__result_obj__210)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__210;
            come_call_finalizer(sType_finalize, type_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_283 = come_decrement_ref_count(name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            if(            !paren_277            ) {
                no_comma_287=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj142=exp_286,
                exp_286=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                info->no_comma=no_comma_287;
            }
            else {
                __dec_obj143=exp_286,
                exp_286=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            }
            if(            paren_277&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1557, "struct sNode");
            _inf_obj_value20=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value488=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1557, "struct sSizeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_286),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value20->clone=(void*)sSizeOfExpNode_clone;
            _inf_value20->compile=(void*)sSizeOfExpNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sSizeOfExpNode_kind;
            _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__213 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value492=_inf_value20)));
            ((exp_286) ? exp_286 = come_decrement_ref_count(exp_286, ((struct sNode*)exp_286)->finalize, ((struct sNode*)exp_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value488, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value492) ? __right_value492 = come_decrement_ref_count(__right_value492, ((struct sNode*)__right_value492)->finalize, ((struct sNode*)__right_value492)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__213) ? __result_obj__213 = come_decrement_ref_count(__result_obj__213, ((struct sNode*)__result_obj__213)->finalize, ((struct sNode*)__result_obj__213)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__213;
            ((exp_286) ? exp_286 = come_decrement_ref_count(exp_286, ((struct sNode*)exp_286)->finalize, ((struct sNode*)exp_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"typeof")    ) {
        paren_289=(_Bool)0;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_289=(_Bool)1;
        }
        is_type_name_flag_290=(_Bool)0;
        {
            p_291=info->p;
            sline_292=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_293=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_293,info)                ) {
                    is_type_name_flag_290=(_Bool)1;
                }
                (word_293 = come_decrement_ref_count(word_293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            info->p=p_291;
            info->sline=sline_292;
        }
        if(        is_type_name_flag_290        ) {
            multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value494=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_294=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
            name_295=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            err_296=multiple_assign_var12->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value494, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_296            ) {
                ((struct tuple2$2int$bool$*)(__right_value495=err_msg(info,"parse type")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value495, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            if(            paren_289&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1602, "struct sNode");
            _inf_obj_value21=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value497=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1602, "struct sTypeOfNode*")),(struct sType*)come_increment_ref_count(type_294),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfNode_finalize;
            _inf_value21->clone=(void*)sTypeOfNode_clone;
            _inf_value21->compile=(void*)sTypeOfNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfNode_kind;
            _inf_value21->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__216 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value501=_inf_value21)));
            come_call_finalizer(sType_finalize, type_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_295 = come_decrement_ref_count(name_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sTypeOfNode_finalize, __right_value497, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value501) ? __right_value501 = come_decrement_ref_count(__right_value501, ((struct sNode*)__right_value501)->finalize, ((struct sNode*)__right_value501)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__216) ? __result_obj__216 = come_decrement_ref_count(__result_obj__216, ((struct sNode*)__result_obj__216)->finalize, ((struct sNode*)__result_obj__216)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__216;
            come_call_finalizer(sType_finalize, type_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_295 = come_decrement_ref_count(name_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            if(            !paren_289            ) {
                no_comma_299=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj148=exp_298,
                exp_298=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                info->no_comma=no_comma_299;
            }
            else {
                __dec_obj149=exp_298,
                exp_298=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            }
            if(            paren_289&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1623, "struct sNode");
            _inf_obj_value22=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value505=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1623, "struct sTypeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_298),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value22->clone=(void*)sTypeOfExpNode_clone;
            _inf_value22->compile=(void*)sTypeOfExpNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sTypeOfExpNode_kind;
            _inf_value22->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__219 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value509=_inf_value22)));
            ((exp_298) ? exp_298 = come_decrement_ref_count(exp_298, ((struct sNode*)exp_298)->finalize, ((struct sNode*)exp_298)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sTypeOfExpNode_finalize, __right_value505, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value509) ? __right_value509 = come_decrement_ref_count(__right_value509, ((struct sNode*)__right_value509)->finalize, ((struct sNode*)__right_value509)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__219) ? __result_obj__219 = come_decrement_ref_count(__result_obj__219, ((struct sNode*)__result_obj__219)->finalize, ((struct sNode*)__result_obj__219)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__219;
            ((exp_298) ? exp_298 = come_decrement_ref_count(exp_298, ((struct sNode*)exp_298)->finalize, ((struct sNode*)exp_298)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")    ) {
        paren_301=(_Bool)0;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_301=(_Bool)1;
        }
        if(        !paren_301        ) {
            no_comma_303=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj152=exp_302,
            exp_302=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            info->no_comma=no_comma_303;
        }
        else {
            __dec_obj153=exp_302,
            exp_302=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        }
        if(        paren_301&&*info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1654, "struct sNode");
        _inf_obj_value23=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value513=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1654, "struct sDynamicTypeOf*")),(struct sNode*)come_increment_ref_count(exp_302),info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value23->clone=(void*)sDynamicTypeOf_clone;
        _inf_value23->compile=(void*)sDynamicTypeOf_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sDynamicTypeOf_kind;
        _inf_value23->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__222 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value517=_inf_value23)));
        ((exp_302) ? exp_302 = come_decrement_ref_count(exp_302, ((struct sNode*)exp_302)->finalize, ((struct sNode*)exp_302)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value513, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value517) ? __right_value517 = come_decrement_ref_count(__right_value517, ((struct sNode*)__right_value517)->finalize, ((struct sNode*)__right_value517)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__222) ? __result_obj__222 = come_decrement_ref_count(__result_obj__222, ((struct sNode*)__result_obj__222)->finalize, ((struct sNode*)__result_obj__222)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__222;
        ((exp_302) ? exp_302 = come_decrement_ref_count(exp_302, ((struct sNode*)exp_302)->finalize, ((struct sNode*)exp_302)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    charp_operator_equals(buf,"_Alignof")    ) {
        paren_305=(_Bool)0;
        if(        *info->p==40        ) {
            paren_305=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_306=(_Bool)0;
        {
            p_307=info->p;
            sline_308=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_309=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_309,info)                ) {
                    is_type_name_flag_306=(_Bool)1;
                }
                (word_309 = come_decrement_ref_count(word_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            info->p=p_307;
            info->sline=sline_308;
        }
        if(        is_type_name_flag_306        ) {
            multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value519=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_310=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_311=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_312=multiple_assign_var13->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value519, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_312            ) {
                ((struct tuple2$2int$bool$*)(__right_value520=err_msg(info,"parse type")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value520, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_305&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1695, "struct sNode");
            _inf_obj_value24=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value522=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1695, "struct sAlignOfNode*")),(struct sType*)come_increment_ref_count(type_310),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfNode_finalize;
            _inf_value24->clone=(void*)sAlignOfNode_clone;
            _inf_value24->compile=(void*)sAlignOfNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfNode_kind;
            _inf_value24->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__225 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value526=_inf_value24)));
            come_call_finalizer(sType_finalize, type_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_311 = come_decrement_ref_count(name_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sAlignOfNode_finalize, __right_value522, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value526) ? __right_value526 = come_decrement_ref_count(__right_value526, ((struct sNode*)__right_value526)->finalize, ((struct sNode*)__right_value526)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__225) ? __result_obj__225 = come_decrement_ref_count(__result_obj__225, ((struct sNode*)__result_obj__225)->finalize, ((struct sNode*)__result_obj__225)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__225;
            come_call_finalizer(sType_finalize, type_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_311 = come_decrement_ref_count(name_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            if(            !paren_305            ) {
                no_comma_315=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj158=exp_314,
                exp_314=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                info->no_comma=no_comma_315;
            }
            else {
                __dec_obj159=exp_314,
                exp_314=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            }
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1709, "struct sNode");
            _inf_obj_value25=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value530=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1709, "struct sAlignOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_314),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value25->clone=(void*)sAlignOfExpNode_clone;
            _inf_value25->compile=(void*)sAlignOfExpNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfExpNode_kind;
            _inf_value25->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__228 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value534=_inf_value25)));
            ((exp_314) ? exp_314 = come_decrement_ref_count(exp_314, ((struct sNode*)exp_314)->finalize, ((struct sNode*)exp_314)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value530, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value534) ? __right_value534 = come_decrement_ref_count(__right_value534, ((struct sNode*)__right_value534)->finalize, ((struct sNode*)__right_value534)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__228) ? __result_obj__228 = come_decrement_ref_count(__result_obj__228, ((struct sNode*)__result_obj__228)->finalize, ((struct sNode*)__result_obj__228)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__228;
            ((exp_314) ? exp_314 = come_decrement_ref_count(exp_314, ((struct sNode*)exp_314)->finalize, ((struct sNode*)exp_314)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")    ) {
        paren_317=(_Bool)0;
        if(        *info->p==40        ) {
            paren_317=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_318=(_Bool)0;
        {
            p_319=info->p;
            sline_320=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_321=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_321,info)                ) {
                    is_type_name_flag_318=(_Bool)1;
                }
                (word_321 = come_decrement_ref_count(word_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            info->p=p_319;
            info->sline=sline_320;
        }
        if(        is_type_name_flag_318        ) {
            multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value536=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_322=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_323=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_324=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value536, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_324            ) {
                ((struct tuple2$2int$bool$*)(__right_value537=err_msg(info,"parse type")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value537, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            if(            paren_317&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1750, "struct sNode");
            _inf_obj_value26=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value539=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1750, "struct sAlignOfNode2*")),(struct sType*)come_increment_ref_count(type_322),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfNode2_clone;
            _inf_value26->compile=(void*)sAlignOfNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfNode2_kind;
            _inf_value26->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__231 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value543=_inf_value26)));
            come_call_finalizer(sType_finalize, type_322, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_323 = come_decrement_ref_count(name_323, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sAlignOfNode2_finalize, __right_value539, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value543) ? __right_value543 = come_decrement_ref_count(__right_value543, ((struct sNode*)__right_value543)->finalize, ((struct sNode*)__right_value543)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__231) ? __result_obj__231 = come_decrement_ref_count(__result_obj__231, ((struct sNode*)__result_obj__231)->finalize, ((struct sNode*)__result_obj__231)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__231;
            come_call_finalizer(sType_finalize, type_322, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_323 = come_decrement_ref_count(name_323, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            if(            !paren_317            ) {
                no_comma_327=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj164=exp_326,
                exp_326=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                info->no_comma=no_comma_327;
            }
            else {
                __dec_obj165=exp_326,
                exp_326=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            }
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1764, "struct sNode");
            _inf_obj_value27=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value547=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1764, "struct sAlignOfExpNode2*")),(struct sNode*)come_increment_ref_count(exp_326),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value27->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value27->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignOfExpNode2_kind;
            _inf_value27->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__234 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value551=_inf_value27)));
            ((exp_326) ? exp_326 = come_decrement_ref_count(exp_326, ((struct sNode*)exp_326)->finalize, ((struct sNode*)exp_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value547, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value551) ? __right_value551 = come_decrement_ref_count(__right_value551, ((struct sNode*)__right_value551)->finalize, ((struct sNode*)__right_value551)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__234) ? __result_obj__234 = come_decrement_ref_count(__result_obj__234, ((struct sNode*)__result_obj__234)->finalize, ((struct sNode*)__result_obj__234)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__234;
            ((exp_326) ? exp_326 = come_decrement_ref_count(exp_326, ((struct sNode*)exp_326)->finalize, ((struct sNode*)exp_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")    ) {
        expected_next_character(40,info);
        is_type_name_flag_329=(_Bool)0;
        {
            p_330=info->p;
            sline_331=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_332=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_332,info)                ) {
                    is_type_name_flag_329=(_Bool)1;
                }
                (word_332 = come_decrement_ref_count(word_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            info->p=p_330;
            info->sline=sline_331;
        }
        if(        is_type_name_flag_329        ) {
            multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value553=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_333=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name_334=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err_335=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value553, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_335            ) {
                ((struct tuple2$2int$bool$*)(__right_value554=err_msg(info,"parse type")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value554, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1797, "struct sNode");
            _inf_obj_value28=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value556=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1797, "struct sAlignAsNode*")),(struct sType*)come_increment_ref_count(type_333),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsNode_finalize;
            _inf_value28->clone=(void*)sAlignAsNode_clone;
            _inf_value28->compile=(void*)sAlignAsNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsNode_kind;
            _inf_value28->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__237 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value560=_inf_value28)));
            come_call_finalizer(sType_finalize, type_333, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_334 = come_decrement_ref_count(name_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sAlignAsNode_finalize, __right_value556, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value560) ? __right_value560 = come_decrement_ref_count(__right_value560, ((struct sNode*)__right_value560)->finalize, ((struct sNode*)__right_value560)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__237) ? __result_obj__237 = come_decrement_ref_count(__result_obj__237, ((struct sNode*)__result_obj__237)->finalize, ((struct sNode*)__result_obj__237)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__237;
            come_call_finalizer(sType_finalize, type_333, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_334 = come_decrement_ref_count(name_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            exp_337=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1804, "struct sNode");
            _inf_obj_value29=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value563=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1804, "struct sAlignAsExpNode*")),(struct sNode*)come_increment_ref_count(exp_337),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value29->clone=(void*)sAlignAsExpNode_clone;
            _inf_value29->compile=(void*)sAlignAsExpNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sAlignAsExpNode_kind;
            _inf_value29->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__240 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value567=_inf_value29)));
            ((exp_337) ? exp_337 = come_decrement_ref_count(exp_337, ((struct sNode*)exp_337)->finalize, ((struct sNode*)exp_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sAlignAsExpNode_finalize, __right_value563, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value567) ? __right_value567 = come_decrement_ref_count(__right_value567, ((struct sNode*)__right_value567)->finalize, ((struct sNode*)__right_value567)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__240) ? __result_obj__240 = come_decrement_ref_count(__result_obj__240, ((struct sNode*)__result_obj__240)->finalize, ((struct sNode*)__result_obj__240)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__240;
            ((exp_337) ? exp_337 = come_decrement_ref_count(exp_337, ((struct sNode*)exp_337)->finalize, ((struct sNode*)exp_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    __result_obj__241 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value568=string_node_v20(buf,head,head_sline,info))));
    ((__right_value568) ? __right_value568 = come_decrement_ref_count(__right_value568, ((struct sNode*)__right_value568)->finalize, ((struct sNode*)__right_value568)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__241) ? __result_obj__241 = come_decrement_ref_count(__result_obj__241, ((struct sNode*)__result_obj__241)->finalize, ((struct sNode*)__result_obj__241)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__241;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
struct sNewNode* __result_obj__153;
void* __right_value341 = (void*)0;
struct sNewNode* result_234;
void* __right_value342 = (void*)0;
char* __dec_obj109;
void* __right_value343 = (void*)0;
struct sType* __dec_obj110;
void* __right_value354 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj116;
struct sNewNode* __result_obj__160;
    if(    self==(void*)0    ) {
        __result_obj__153 = (void*)0;
        return __result_obj__153;
    }
    result_234=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*"));
    if(    self!=((void*)0)    ) {
        result_234->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj109=result_234->sname,
        result_234->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewNode_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_234->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj110=result_234->type,
        result_234->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        __dec_obj116=result_234->initializer,
        result_234->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__160 = result_234;
    come_call_finalizer(sNewNode_finalize, result_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__154;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_235;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_236;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__159;
    if(    self==((void*)0)    ) {
        __result_obj__154 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__154;
    }
    result_235=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1011, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_236=self->head;
    while(    it_236!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_235,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_236->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_235,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_236->item)));
        }
        it_236=it_236->next;
    }
    __result_obj__159 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_235);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__155;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__155 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__155;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value346 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_237;
struct tuple2$2char$phsNode$ph* __dec_obj111;
void* __right_value347 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_238;
struct tuple2$2char$phsNode$ph* __dec_obj112;
void* __right_value348 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_239;
struct tuple2$2char$phsNode$ph* __dec_obj113;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__156;
    if(    self->len==0    ) {
        litem_237=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value346=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1030, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        __dec_obj111=litem_237->item,
        litem_237->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1    ) {
        litem_238=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value347=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1040, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        __dec_obj112=litem_238->item,
        litem_238->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj112,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value348=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1050, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_239->prev=self->tail;
        litem_239->next=((void*)0);
        __dec_obj113=litem_239->item,
        litem_239->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj113,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_239;
        self->tail=litem_239;
    }
    self->len++;
    __result_obj__156 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__157;
void* __right_value349 = (void*)0;
struct tuple2$2char$phsNode$ph* result_240;
void* __right_value350 = (void*)0;
char* __dec_obj114;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj115;
struct tuple2$2char$phsNode$ph* __result_obj__158;
    if(    self==(void*)0    ) {
        __result_obj__157 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__157;
    }
    result_240=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj114=result_240->v1,
        result_240->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj115=result_240->v2,
        result_240->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__158 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_240);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj118;
struct sNode* __dec_obj119;
struct tuple2$2char$phsNode$ph* __result_obj__162;
    __dec_obj118=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj119=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__162 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
struct sDeleteNode* __result_obj__167;
void* __right_value390 = (void*)0;
struct sDeleteNode* result_249;
void* __right_value391 = (void*)0;
char* __dec_obj120;
void* __right_value392 = (void*)0;
struct sNode* __dec_obj121;
struct sDeleteNode* __result_obj__168;
    if(    self==(void*)0    ) {
        __result_obj__167 = (void*)0;
        return __result_obj__167;
    }
    result_249=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*"));
    if(    self!=((void*)0)    ) {
        result_249->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj120=result_249->sname,
        result_249->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDeleteNode_clone", 5, "char*"));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_249->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj121=result_249->node,
        result_249->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__168 = result_249;
    come_call_finalizer(sDeleteNode_finalize, result_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__168;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
struct sBorrowNode* __result_obj__170;
void* __right_value397 = (void*)0;
struct sBorrowNode* result_251;
void* __right_value398 = (void*)0;
char* __dec_obj122;
void* __right_value399 = (void*)0;
struct sNode* __dec_obj123;
struct sBorrowNode* __result_obj__171;
    if(    self==(void*)0    ) {
        __result_obj__170 = (void*)0;
        return __result_obj__170;
    }
    result_251=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*"));
    if(    self!=((void*)0)    ) {
        result_251->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj122=result_251->sname,
        result_251->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBorrowNode_clone", 5, "char*"));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_251->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj123=result_251->node,
        result_251->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__171 = result_251;
    come_call_finalizer(sBorrowNode_finalize, result_251, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
struct sCloneNode* __result_obj__173;
void* __right_value404 = (void*)0;
struct sCloneNode* result_253;
void* __right_value405 = (void*)0;
char* __dec_obj124;
void* __right_value406 = (void*)0;
struct sNode* __dec_obj125;
struct sCloneNode* __result_obj__174;
    if(    self==(void*)0    ) {
        __result_obj__173 = (void*)0;
        return __result_obj__173;
    }
    result_253=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*"));
    if(    self!=((void*)0)    ) {
        result_253->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj124=result_253->sname,
        result_253->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCloneNode_clone", 5, "char*"));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_253->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj125=result_253->node,
        result_253->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__174 = result_253;
    come_call_finalizer(sCloneNode_finalize, result_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
struct sDupeNode* __result_obj__176;
void* __right_value411 = (void*)0;
struct sDupeNode* result_255;
void* __right_value412 = (void*)0;
char* __dec_obj126;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj127;
struct sDupeNode* __result_obj__177;
    if(    self==(void*)0    ) {
        __result_obj__176 = (void*)0;
        return __result_obj__176;
    }
    result_255=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*"));
    if(    self!=((void*)0)    ) {
        result_255->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj126=result_255->sname,
        result_255->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDupeNode_clone", 5, "char*"));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_255->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj127=result_255->node,
        result_255->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__177 = result_255;
    come_call_finalizer(sDupeNode_finalize, result_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__177;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
struct sDummyHeapNode* __result_obj__179;
void* __right_value418 = (void*)0;
struct sDummyHeapNode* result_257;
void* __right_value419 = (void*)0;
char* __dec_obj128;
void* __right_value420 = (void*)0;
struct sNode* __dec_obj129;
struct sDummyHeapNode* __result_obj__180;
    if(    self==(void*)0    ) {
        __result_obj__179 = (void*)0;
        return __result_obj__179;
    }
    result_257=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*"));
    if(    self!=((void*)0)    ) {
        result_257->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj128=result_257->sname,
        result_257->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDummyHeapNode_clone", 5, "char*"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_257->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj129=result_257->node,
        result_257->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__180 = result_257;
    come_call_finalizer(sDummyHeapNode_finalize, result_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__180;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
struct sGCIncNode* __result_obj__182;
void* __right_value425 = (void*)0;
struct sGCIncNode* result_259;
void* __right_value426 = (void*)0;
char* __dec_obj130;
void* __right_value427 = (void*)0;
struct sNode* __dec_obj131;
struct sGCIncNode* __result_obj__183;
    if(    self==(void*)0    ) {
        __result_obj__182 = (void*)0;
        return __result_obj__182;
    }
    result_259=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*"));
    if(    self!=((void*)0)    ) {
        result_259->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj130=result_259->sname,
        result_259->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCIncNode_clone", 5, "char*"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_259->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj131=result_259->node,
        result_259->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__183 = result_259;
    come_call_finalizer(sGCIncNode_finalize, result_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__183;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
struct sGCDecNode* __result_obj__185;
void* __right_value432 = (void*)0;
struct sGCDecNode* result_261;
void* __right_value433 = (void*)0;
char* __dec_obj132;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj133;
struct sGCDecNode* __result_obj__186;
    if(    self==(void*)0    ) {
        __result_obj__185 = (void*)0;
        return __result_obj__185;
    }
    result_261=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*"));
    if(    self!=((void*)0)    ) {
        result_261->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj132=result_261->sname,
        result_261->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNode_clone", 5, "char*"));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_261->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj133=result_261->node,
        result_261->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__186 = result_261;
    come_call_finalizer(sGCDecNode_finalize, result_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__186;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
struct sGCDecNoFreeNode* __result_obj__188;
void* __right_value439 = (void*)0;
struct sGCDecNoFreeNode* result_263;
void* __right_value440 = (void*)0;
char* __dec_obj134;
void* __right_value441 = (void*)0;
struct sNode* __dec_obj135;
struct sGCDecNoFreeNode* __result_obj__189;
    if(    self==(void*)0    ) {
        __result_obj__188 = (void*)0;
        return __result_obj__188;
    }
    result_263=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*"));
    if(    self!=((void*)0)    ) {
        result_263->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj134=result_263->sname,
        result_263->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNoFreeNode_clone", 5, "char*"));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_263->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj135=result_263->node,
        result_263->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__189 = result_263;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__189;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
struct sIsHeap* __result_obj__192;
void* __right_value452 = (void*)0;
struct sIsHeap* result_269;
void* __right_value453 = (void*)0;
char* __dec_obj136;
void* __right_value454 = (void*)0;
struct sType* __dec_obj137;
struct sIsHeap* __result_obj__193;
    if(    self==(void*)0    ) {
        __result_obj__192 = (void*)0;
        return __result_obj__192;
    }
    result_269=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*"));
    if(    self!=((void*)0)    ) {
        result_269->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj136=result_269->sname,
        result_269->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsHeap_clone", 5, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_269->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj137=result_269->type,
        result_269->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__193 = result_269;
    come_call_finalizer(sIsHeap_finalize, result_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__193;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
struct sIsPointer* __result_obj__195;
void* __right_value461 = (void*)0;
struct sIsPointer* result_274;
void* __right_value462 = (void*)0;
char* __dec_obj138;
void* __right_value463 = (void*)0;
struct sType* __dec_obj139;
struct sIsPointer* __result_obj__196;
    if(    self==(void*)0    ) {
        __result_obj__195 = (void*)0;
        return __result_obj__195;
    }
    result_274=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*"));
    if(    self!=((void*)0)    ) {
        result_274->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj138=result_274->sname,
        result_274->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsPointer_clone", 5, "char*"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_274->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj139=result_274->type,
        result_274->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__196 = result_274;
    come_call_finalizer(sIsPointer_finalize, result_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__196;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
struct sSizeOfNode* __result_obj__208;
void* __right_value481 = (void*)0;
struct sSizeOfNode* result_285;
void* __right_value482 = (void*)0;
char* __dec_obj140;
void* __right_value483 = (void*)0;
struct sType* __dec_obj141;
struct sSizeOfNode* __result_obj__209;
    if(    self==(void*)0    ) {
        __result_obj__208 = (void*)0;
        return __result_obj__208;
    }
    result_285=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*"));
    if(    self!=((void*)0)    ) {
        result_285->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj140=result_285->sname,
        result_285->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfNode_clone", 5, "char*"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_285->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj141=result_285->type,
        result_285->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__209 = result_285;
    come_call_finalizer(sSizeOfNode_finalize, result_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__209;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
struct sSizeOfExpNode* __result_obj__211;
void* __right_value489 = (void*)0;
struct sSizeOfExpNode* result_288;
void* __right_value490 = (void*)0;
char* __dec_obj144;
void* __right_value491 = (void*)0;
struct sNode* __dec_obj145;
struct sSizeOfExpNode* __result_obj__212;
    if(    self==(void*)0    ) {
        __result_obj__211 = (void*)0;
        return __result_obj__211;
    }
    result_288=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*"));
    if(    self!=((void*)0)    ) {
        result_288->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj144=result_288->sname,
        result_288->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfExpNode_clone", 5, "char*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_288->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj145=result_288->exp,
        result_288->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__212 = result_288;
    come_call_finalizer(sSizeOfExpNode_finalize, result_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__212;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
struct sTypeOfNode* __result_obj__214;
void* __right_value498 = (void*)0;
struct sTypeOfNode* result_297;
void* __right_value499 = (void*)0;
char* __dec_obj146;
void* __right_value500 = (void*)0;
struct sType* __dec_obj147;
struct sTypeOfNode* __result_obj__215;
    if(    self==(void*)0    ) {
        __result_obj__214 = (void*)0;
        return __result_obj__214;
    }
    result_297=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*"));
    if(    self!=((void*)0)    ) {
        result_297->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj146=result_297->sname,
        result_297->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfNode_clone", 5, "char*"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_297->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj147=result_297->type,
        result_297->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__215 = result_297;
    come_call_finalizer(sTypeOfNode_finalize, result_297, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__215;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
struct sTypeOfExpNode* __result_obj__217;
void* __right_value506 = (void*)0;
struct sTypeOfExpNode* result_300;
void* __right_value507 = (void*)0;
char* __dec_obj150;
void* __right_value508 = (void*)0;
struct sNode* __dec_obj151;
struct sTypeOfExpNode* __result_obj__218;
    if(    self==(void*)0    ) {
        __result_obj__217 = (void*)0;
        return __result_obj__217;
    }
    result_300=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*"));
    if(    self!=((void*)0)    ) {
        result_300->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj150=result_300->sname,
        result_300->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfExpNode_clone", 5, "char*"));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_300->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj151=result_300->exp,
        result_300->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__218 = result_300;
    come_call_finalizer(sTypeOfExpNode_finalize, result_300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__218;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
struct sDynamicTypeOf* __result_obj__220;
void* __right_value514 = (void*)0;
struct sDynamicTypeOf* result_304;
void* __right_value515 = (void*)0;
char* __dec_obj154;
void* __right_value516 = (void*)0;
struct sNode* __dec_obj155;
struct sDynamicTypeOf* __result_obj__221;
    if(    self==(void*)0    ) {
        __result_obj__220 = (void*)0;
        return __result_obj__220;
    }
    result_304=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*"));
    if(    self!=((void*)0)    ) {
        result_304->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj154=result_304->sname,
        result_304->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDynamicTypeOf_clone", 5, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_304->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj155=result_304->exp,
        result_304->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__221 = result_304;
    come_call_finalizer(sDynamicTypeOf_finalize, result_304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__221;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
struct sAlignOfNode* __result_obj__223;
void* __right_value523 = (void*)0;
struct sAlignOfNode* result_313;
void* __right_value524 = (void*)0;
char* __dec_obj156;
void* __right_value525 = (void*)0;
struct sType* __dec_obj157;
struct sAlignOfNode* __result_obj__224;
    if(    self==(void*)0    ) {
        __result_obj__223 = (void*)0;
        return __result_obj__223;
    }
    result_313=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*"));
    if(    self!=((void*)0)    ) {
        result_313->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj156=result_313->sname,
        result_313->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode_clone", 5, "char*"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_313->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj157=result_313->type,
        result_313->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__224 = result_313;
    come_call_finalizer(sAlignOfNode_finalize, result_313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__224;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
struct sAlignOfExpNode* __result_obj__226;
void* __right_value531 = (void*)0;
struct sAlignOfExpNode* result_316;
void* __right_value532 = (void*)0;
char* __dec_obj160;
void* __right_value533 = (void*)0;
struct sNode* __dec_obj161;
struct sAlignOfExpNode* __result_obj__227;
    if(    self==(void*)0    ) {
        __result_obj__226 = (void*)0;
        return __result_obj__226;
    }
    result_316=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*"));
    if(    self!=((void*)0)    ) {
        result_316->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj160=result_316->sname,
        result_316->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode_clone", 5, "char*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_316->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj161=result_316->exp,
        result_316->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__227 = result_316;
    come_call_finalizer(sAlignOfExpNode_finalize, result_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__227;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
struct sAlignOfNode2* __result_obj__229;
void* __right_value540 = (void*)0;
struct sAlignOfNode2* result_325;
void* __right_value541 = (void*)0;
char* __dec_obj162;
void* __right_value542 = (void*)0;
struct sType* __dec_obj163;
struct sAlignOfNode2* __result_obj__230;
    if(    self==(void*)0    ) {
        __result_obj__229 = (void*)0;
        return __result_obj__229;
    }
    result_325=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*"));
    if(    self!=((void*)0)    ) {
        result_325->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj162=result_325->sname,
        result_325->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode2_clone", 5, "char*"));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_325->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj163=result_325->type,
        result_325->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj163,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__230 = result_325;
    come_call_finalizer(sAlignOfNode2_finalize, result_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__230;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
struct sAlignOfExpNode2* __result_obj__232;
void* __right_value548 = (void*)0;
struct sAlignOfExpNode2* result_328;
void* __right_value549 = (void*)0;
char* __dec_obj166;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj167;
struct sAlignOfExpNode2* __result_obj__233;
    if(    self==(void*)0    ) {
        __result_obj__232 = (void*)0;
        return __result_obj__232;
    }
    result_328=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*"));
    if(    self!=((void*)0)    ) {
        result_328->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj166=result_328->sname,
        result_328->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode2_clone", 5, "char*"));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_328->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj167=result_328->exp,
        result_328->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__233 = result_328;
    come_call_finalizer(sAlignOfExpNode2_finalize, result_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__233;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
struct sAlignAsNode* __result_obj__235;
void* __right_value557 = (void*)0;
struct sAlignAsNode* result_336;
void* __right_value558 = (void*)0;
char* __dec_obj168;
void* __right_value559 = (void*)0;
struct sType* __dec_obj169;
struct sAlignAsNode* __result_obj__236;
    if(    self==(void*)0    ) {
        __result_obj__235 = (void*)0;
        return __result_obj__235;
    }
    result_336=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*"));
    if(    self!=((void*)0)    ) {
        result_336->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj168=result_336->sname,
        result_336->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsNode_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_336->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj169=result_336->type,
        result_336->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj169,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__236 = result_336;
    come_call_finalizer(sAlignAsNode_finalize, result_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__236;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
struct sAlignAsExpNode* __result_obj__238;
void* __right_value564 = (void*)0;
struct sAlignAsExpNode* result_338;
void* __right_value565 = (void*)0;
char* __dec_obj170;
void* __right_value566 = (void*)0;
struct sNode* __dec_obj171;
struct sAlignAsExpNode* __result_obj__239;
    if(    self==(void*)0    ) {
        __result_obj__238 = (void*)0;
        return __result_obj__238;
    }
    result_338=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*"));
    if(    self!=((void*)0)    ) {
        result_338->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj170=result_338->sname,
        result_338->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsExpNode_clone", 5, "char*"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_338->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj171=result_338->exp,
        result_338->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__239 = result_338;
    come_call_finalizer(sAlignAsExpNode_finalize, result_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__239;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value569 = (void*)0;
struct sNode* __result_obj__242;
void* __right_value570 = (void*)0;
struct sNode* __result_obj__243;
void* __right_value571 = (void*)0;
struct sNode* __result_obj__244;
_Bool come_c_339;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* __result_obj__245;
void* __right_value574 = (void*)0;
struct sNode* __result_obj__246;
    if(    charp_operator_equals(buf,"using")    ) {
        if(        parsecmp("comelang_str",info)        ) {
            info->p+=strlen("comelang_str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__242 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value569=create_nothing_node(info))));
            ((__right_value569) ? __right_value569 = come_decrement_ref_count(__right_value569, ((struct sNode*)__right_value569)->finalize, ((struct sNode*)__right_value569)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__242;
        }
        else if(        parsecmp("comelang_pthread",info)        ) {
            info->p+=strlen("comelang_pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__243 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value570=create_nothing_node(info))));
            ((__right_value570) ? __right_value570 = come_decrement_ref_count(__right_value570, ((struct sNode*)__right_value570)->finalize, ((struct sNode*)__right_value570)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__243) ? __result_obj__243 = come_decrement_ref_count(__result_obj__243, ((struct sNode*)__result_obj__243)->finalize, ((struct sNode*)__result_obj__243)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__243;
        }
        else if(        parsecmp("comelang_net",info)        ) {
            info->p+=strlen("comelang_net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__244 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value571=create_nothing_node(info))));
            ((__right_value571) ? __right_value571 = come_decrement_ref_count(__right_value571, ((struct sNode*)__right_value571)->finalize, ((struct sNode*)__right_value571)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__244;
        }
        else if(        parsecmp("comelang",info)        ) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)        ) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123            ) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_339=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_339;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(        parsecmp("gc",info)        ) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("no-gc",info)        ) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("unsafe",info)        ) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value572=err_msg(info,"invalid using")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value572, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        __result_obj__245 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value573=create_nothing_node(info))));
        ((__right_value573) ? __right_value573 = come_decrement_ref_count(__right_value573, ((struct sNode*)__right_value573)->finalize, ((struct sNode*)__right_value573)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__245;
    }
    __result_obj__246 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value574=top_level_v93(buf,head,head_sline,info))));
    ((__right_value574) ? __right_value574 = come_decrement_ref_count(__right_value574, ((struct sNode*)__right_value574)->finalize, ((struct sNode*)__right_value574)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__246;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value581 = (void*)0;
struct sNode* __result_obj__249;
    _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1888, "struct sNode");
    _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value576=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1888, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value30->_protocol_obj=_inf_obj_value30;
    _inf_value30->finalize=(void*)sImplementsNode_finalize;
    _inf_value30->clone=(void*)sImplementsNode_clone;
    _inf_value30->compile=(void*)sImplementsNode_compile;
    _inf_value30->sline=(void*)sNodeBase_sline;
    _inf_value30->sline_real=(void*)sNodeBase_sline_real;
    _inf_value30->sname=(void*)sNodeBase_sname;
    _inf_value30->terminated=(void*)sNodeBase_terminated;
    _inf_value30->kind=(void*)sImplementsNode_kind;
    _inf_value30->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__249 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value581=_inf_value30)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value576, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value581) ? __right_value581 = come_decrement_ref_count(__right_value581, ((struct sNode*)__right_value581)->finalize, ((struct sNode*)__right_value581)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__249) ? __result_obj__249 = come_decrement_ref_count(__result_obj__249, ((struct sNode*)__result_obj__249)->finalize, ((struct sNode*)__result_obj__249)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__249;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
struct sImplementsNode* __result_obj__247;
void* __right_value577 = (void*)0;
struct sImplementsNode* result_340;
void* __right_value578 = (void*)0;
char* __dec_obj172;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj173;
void* __right_value580 = (void*)0;
struct sType* __dec_obj174;
struct sImplementsNode* __result_obj__248;
    if(    self==(void*)0    ) {
        __result_obj__247 = (void*)0;
        return __result_obj__247;
    }
    result_340=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*"));
    if(    self!=((void*)0)    ) {
        result_340->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj172=result_340->sname,
        result_340->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sImplementsNode_clone", 5, "char*"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_340->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)    ) {
        __dec_obj173=result_340->obj_exp,
        result_340->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)    ) {
        __dec_obj174=result_340->inf_type,
        result_340->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__248 = result_340;
    come_call_finalizer(sImplementsNode_finalize, result_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__248;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __right_value582 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* type3_341=0;
char* name2_342=0;
_Bool err_343=0;
void* __right_value583 = (void*)0;
struct sType* inf_type_344;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sNode* _inf_value31;
struct sImplementsNode* _inf_obj_value31;
void* __right_value586 = (void*)0;
struct sNode* __result_obj__250;
void* __right_value587 = (void*)0;
struct sNode* __result_obj__251;
    if(    !gComeC&&parsecmp("implements",info)    ) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value582=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_341=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        name2_342=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_343=multiple_assign_var16->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value582, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_343        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_344=(struct sType*)come_increment_ref_count(sType_clone(type3_341));
        _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1905, "struct sNode");
        _inf_obj_value31=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value585=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1905, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_344),info))));
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sImplementsNode_finalize;
        _inf_value31->clone=(void*)sImplementsNode_clone;
        _inf_value31->compile=(void*)sImplementsNode_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sline_real=(void*)sNodeBase_sline_real;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sImplementsNode_kind;
        _inf_value31->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__250 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value586=_inf_value31)));
        come_call_finalizer(sType_finalize, type3_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name2_342 = come_decrement_ref_count(name2_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, inf_type_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value585, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value586) ? __right_value586 = come_decrement_ref_count(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__250) ? __result_obj__250 = come_decrement_ref_count(__result_obj__250, ((struct sNode*)__result_obj__250)->finalize, ((struct sNode*)__result_obj__250)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__250;
        come_call_finalizer(sType_finalize, type3_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name2_342 = come_decrement_ref_count(name2_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, inf_type_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    *info->p==64    ) {
        info->p++;
        while(        xisalnum(*info->p)||*info->p==95        ) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result_obj__251 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value587=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__right_value587) ? __right_value587 = come_decrement_ref_count(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__251) ? __result_obj__251 = come_decrement_ref_count(__result_obj__251, ((struct sNode*)__result_obj__251)->finalize, ((struct sNode*)__result_obj__251)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__251;
}

