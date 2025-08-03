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
typedef char* string;

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

typedef unsigned int __nlink_t;

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

typedef int __blksize_t;

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
    int _flags2:24;
    char _short_backupbuf[1];
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
    struct _IO_FILE** _prevchain;
    int _mode;
    char _unused2[15*sizeof(int)-5*sizeof(void*)];
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
typedef long  double _Float128;

typedef float _Float32;

typedef double _Float64;

typedef double _Float32x;

typedef long  double _Float64x;

typedef unsigned int wchar_t;

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

typedef unsigned int nlink_t;

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

typedef int blksize_t;

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
    int __spins;
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
    unsigned long  int __pad1;
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
    unsigned int __unused_initialized_1;
    unsigned int __unused_initialized_2;
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
char __size[8];
int __align;
};

typedef union anonymous_typeZ13 pthread_mutexattr_t;

union anonymous_typeZ14
{
char __size[8];
int __align;
};

typedef union anonymous_typeZ14 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t
{
char __size[64];
long  int __align;
};

typedef union pthread_attr_t pthread_attr_t;

union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[48];
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
char __size[8];
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

extern int gComeMallocLib;

extern int gComeDebugLib;

extern int gComeGCLib;

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
    char* mVarAttribute;
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

struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1char$ph* multiple_assign;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare;
    char* attribute;
    _Bool comma;
    _Bool val_;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool on_load_calling;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNode$phsNode$ph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNode$phsNode$ph$ph
{
    struct tuple2$2sNode$phsNode$ph* item;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* next;
};

struct list$1tuple2$2sNode$phsNode$ph$ph
{
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* head;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNode$phsNode$ph$ph* initializer;
};

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct tuple3$3sType$phchar$phvoid$p
{
    struct sType* v1;
    char* v2;
    void* v3;
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
int __isoc23_fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int __isoc23_scanf(const char* __format, ...);
int __isoc23_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int vscanf(const char* __format, va_list __arg);
int vsscanf(const char* __s, const char* __format, va_list __arg);
int __isoc23_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int __isoc23_vscanf(const char* __format, va_list __arg);
int __isoc23_vsscanf(const char* __s, const char* __format, va_list __arg);
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
long  double strtof128(const char* __nptr, char** __endptr);
double strtof32x(const char* __nptr, char** __endptr);
long  double strtof64x(const char* __nptr, char** __endptr);
long  int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoul(const char* __nptr, char** __endptr, int __base);
long long int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);
long long int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);
long  int __isoc23_strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int __isoc23_strtoul(const char* __nptr, char** __endptr, int __base);
long long int __isoc23_strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int __isoc23_strtoull(const char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfroml(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfromf64(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf128(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
int strfromf32x(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf64x(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
long  int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long  int __isoc23_strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int __isoc23_strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long long int __isoc23_strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int __isoc23_strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtof128_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
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
int mbtowc(unsigned int* __pwc, const char* __s, unsigned long  int __n);
int wctomb(char* __s, unsigned int __wchar);
unsigned long  int mbstowcs(unsigned int* __pwcs, const char* __s, unsigned long  int __n);
unsigned long  int wcstombs(char* __s, const unsigned int* __pwcs, unsigned long  int __n);
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
unsigned long  int strlcpy(char* __dest, const char* __src, unsigned long  int __n);
unsigned long  int strlcat(char* __dest, const char* __src, unsigned long  int __n);
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
unsigned int* wcscpy(unsigned int* __dest, const unsigned int* __src);
unsigned int* wcsncpy(unsigned int* __dest, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcslcpy(unsigned int* __dest, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcslcat(unsigned int* __dest, const unsigned int* __src, unsigned long  int __n);
unsigned int* wcscat(unsigned int* __dest, const unsigned int* __src);
unsigned int* wcsncat(unsigned int* __dest, const unsigned int* __src, unsigned long  int __n);
int wcscmp(const unsigned int* __s1, const unsigned int* __s2);
int wcsncmp(const unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n);
int wcscasecmp(const unsigned int* __s1, const unsigned int* __s2);
int wcsncasecmp(const unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n);
int wcscasecmp_l(const unsigned int* __s1, const unsigned int* __s2, struct __locale_struct* __loc);
int wcsncasecmp_l(const unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int wcscoll(const unsigned int* __s1, const unsigned int* __s2);
unsigned long  int wcsxfrm(unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n);
int wcscoll_l(const unsigned int* __s1, const unsigned int* __s2, struct __locale_struct* __loc);
unsigned long  int wcsxfrm_l(unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
unsigned int* wcsdup(const unsigned int* __s);
unsigned int* wcschr(const unsigned int* __wcs, unsigned int __wc);
unsigned int* wcsrchr(const unsigned int* __wcs, unsigned int __wc);
unsigned int* wcschrnul(const unsigned int* __s, unsigned int __wc);
unsigned long  int wcscspn(const unsigned int* __wcs, const unsigned int* __reject);
unsigned long  int wcsspn(const unsigned int* __wcs, const unsigned int* __accept);
unsigned int* wcspbrk(const unsigned int* __wcs, const unsigned int* __accept);
unsigned int* wcsstr(const unsigned int* __haystack, const unsigned int* __needle);
unsigned int* wcstok(unsigned int* __s, const unsigned int* __delim, unsigned int** __ptr);
unsigned long  int wcslen(const unsigned int* __s);
unsigned int* wcswcs(const unsigned int* __haystack, const unsigned int* __needle);
unsigned long  int wcsnlen(const unsigned int* __s, unsigned long  int __maxlen);
unsigned int* wmemchr(const unsigned int* __s, unsigned int __c, unsigned long  int __n);
int wmemcmp(const unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n);
unsigned int* wmemcpy(unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n);
unsigned int* wmemmove(unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n);
unsigned int* wmemset(unsigned int* __s, unsigned int __c, unsigned long  int __n);
unsigned int* wmempcpy(unsigned int* __s1, const unsigned int* __s2, unsigned long  int __n);
unsigned int btowc(int __c);
int wctob(unsigned int __c);
int mbsinit(const struct anonymous_typeX2* __ps);
unsigned long  int mbrtowc(unsigned int* __pwc, const char* __s, unsigned long  int __n, struct anonymous_typeX2* __p);
unsigned long  int wcrtomb(char* __s, unsigned int __wc, struct anonymous_typeX2* __ps);
unsigned long  int __mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbsrtowcs(unsigned int* __dst, const char** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsrtombs(char* __dst, const unsigned int** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int mbsnrtowcs(unsigned int* __dst, const char** __src, unsigned long  int __nmc, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsnrtombs(char* __dst, const unsigned int** __src, unsigned long  int __nwc, unsigned long  int __len, struct anonymous_typeX2* __ps);
int wcwidth(unsigned int __c);
int wcswidth(const unsigned int* __s, unsigned long  int __n);
double wcstod(const unsigned int* __nptr, unsigned int** __endptr);
float wcstof(const unsigned int* __nptr, unsigned int** __endptr);
long  double wcstold(const unsigned int* __nptr, unsigned int** __endptr);
float wcstof32(const unsigned int* __nptr, unsigned int** __endptr);
double wcstof64(const unsigned int* __nptr, unsigned int** __endptr);
long  double wcstof128(const unsigned int* __nptr, unsigned int** __endptr);
double wcstof32x(const unsigned int* __nptr, unsigned int** __endptr);
long  double wcstof64x(const unsigned int* __nptr, unsigned int** __endptr);
long  int wcstol(const unsigned int* __nptr, unsigned int** __endptr, int __base);
unsigned long  int wcstoul(const unsigned int* __nptr, unsigned int** __endptr, int __base);
long long int wcstoll(const unsigned int* __nptr, unsigned int** __endptr, int __base);
unsigned long long int wcstoull(const unsigned int* __nptr, unsigned int** __endptr, int __base);
long long int wcstoq(const unsigned int* __nptr, unsigned int** __endptr, int __base);
unsigned long long int wcstouq(const unsigned int* __nptr, unsigned int** __endptr, int __base);
long  int __isoc23_wcstol(const unsigned int* __nptr, unsigned int** __endptr, int __base);
unsigned long  int __isoc23_wcstoul(const unsigned int* __nptr, unsigned int** __endptr, int __base);
long long int __isoc23_wcstoll(const unsigned int* __nptr, unsigned int** __endptr, int __base);
unsigned long long int __isoc23_wcstoull(const unsigned int* __nptr, unsigned int** __endptr, int __base);
long  int wcstol_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int wcstoul_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
long long int wcstoll_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int wcstoull_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
long  int __isoc23_wcstol_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int __isoc23_wcstoul_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
long long int __isoc23_wcstoll_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int __isoc23_wcstoull_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);
double wcstod_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
float wcstof_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
long  double wcstold_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
float wcstof32_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
double wcstof64_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
long  double wcstof128_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
double wcstof32x_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
long  double wcstof64x_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);
unsigned int* wcpcpy(unsigned int* __dest, const unsigned int* __src);
unsigned int* wcpncpy(unsigned int* __dest, const unsigned int* __src, unsigned long  int __n);
struct _IO_FILE* open_wmemstream(unsigned int** __bufloc, unsigned long  int* __sizeloc);
int fwide(struct _IO_FILE* __fp, int __mode);
int fwprintf(struct _IO_FILE* __stream, const unsigned int* __format, ...);
int wprintf(const unsigned int* __format, ...);
int swprintf(unsigned int* __s, unsigned long  int __n, const unsigned int* __format, ...);
int vfwprintf(struct _IO_FILE* __s, const unsigned int* __format, va_list __arg);
int vwprintf(const unsigned int* __format, va_list __arg);
int vswprintf(unsigned int* __s, unsigned long  int __n, const unsigned int* __format, va_list __arg);
int fwscanf(struct _IO_FILE* __stream, const unsigned int* __format, ...);
int wscanf(const unsigned int* __format, ...);
int swscanf(const unsigned int* __s, const unsigned int* __format, ...);
int __isoc23_fwscanf(struct _IO_FILE* __stream, const unsigned int* __format, ...);
int __isoc23_wscanf(const unsigned int* __format, ...);
int __isoc23_swscanf(const unsigned int* __s, const unsigned int* __format, ...);
int vfwscanf(struct _IO_FILE* __s, const unsigned int* __format, va_list __arg);
int vwscanf(const unsigned int* __format, va_list __arg);
int vswscanf(const unsigned int* __s, const unsigned int* __format, va_list __arg);
int __isoc23_vfwscanf(struct _IO_FILE* __s, const unsigned int* __format, va_list __arg);
int __isoc23_vwscanf(const unsigned int* __format, va_list __arg);
int __isoc23_vswscanf(const unsigned int* __s, const unsigned int* __format, va_list __arg);
unsigned int fgetwc(struct _IO_FILE* __stream);
unsigned int getwc(struct _IO_FILE* __stream);
unsigned int getwchar();
unsigned int fputwc(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int putwc(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int putwchar(unsigned int __wc);
unsigned int* fgetws(unsigned int* __ws, int __n, struct _IO_FILE* __stream);
int fputws(const unsigned int* __ws, struct _IO_FILE* __stream);
unsigned int ungetwc(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int getwc_unlocked(struct _IO_FILE* __stream);
unsigned int getwchar_unlocked();
unsigned int fgetwc_unlocked(struct _IO_FILE* __stream);
unsigned int fputwc_unlocked(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int putwc_unlocked(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int putwchar_unlocked(unsigned int __wc);
unsigned int* fgetws_unlocked(unsigned int* __ws, int __n, struct _IO_FILE* __stream);
int fputws_unlocked(const unsigned int* __ws, struct _IO_FILE* __stream);
unsigned long  int wcsftime(unsigned int* __s, unsigned long  int __maxsize, const unsigned int* __format, const struct tm* __tp);
unsigned long  int wcsftime_l(unsigned int* __s, unsigned long  int __maxsize, const unsigned int* __format, const struct tm* __tp, struct __locale_struct* __loc);
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
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
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
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xiswascii(unsigned int c);
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
_Bool wchar_t_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
unsigned int wchar_t_get_hash_key(unsigned int value);
unsigned int wchar_tp_get_hash_key(unsigned int* value);
char* wchar_t_to_string(unsigned int wc);
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma, _Bool val_);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
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
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize_with_values(struct list$1tuple2$2char$phsNode$ph$ph* self, int num_value, struct tuple2$2char$phsNode$ph** values);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self);
static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self);
static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma, _Bool val_){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
void* __right_value40 = (void*)0;
struct sType* __dec_obj26;
struct sNode* __dec_obj27;
void* __right_value41 = (void*)0;
struct list$1char$ph* __dec_obj28;
void* __right_value53 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj35;
char* __dec_obj36;
struct sStoreNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj26=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj27=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    ((void*)0);
    __dec_obj28=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    ((void*)0);
    __dec_obj35=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj36=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->comma=comma;
    self->val_=val_;
    __result_obj__23 = (struct sStoreNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreNode_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value54 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value54=__builtin_string("sStoreNode"))));
    (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct sVar* var__39;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct sType* type_60;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_61;
struct tuple3$3sType$phchar$phsNode$ph* it_64;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var1 = (void*)0;
struct sType* type_67=0;
char* var_name_68=0;
struct sNode* right_value_69=0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
_Bool __result_obj__40;
void* __right_value67 = (void*)0;
struct sType* left_type_70;
_Bool Value_71;
_Bool __result_obj__41;
void* __right_value68 = (void*)0;
struct CVALUE* come_value_72;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_79;
_Bool Value_80;
_Bool __result_obj__50;
void* __right_value75 = (void*)0;
struct CVALUE* right_value_81;
struct sType* right_type_82;
int i_83;
struct list$1char$ph* o2_saved_84;
char* it_87;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct sVar* var__90;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct sType* right_type2_91;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
char* multiple_var_name_99;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
char* __dec_obj37;
struct list$1char$ph* o2_saved_100;
char* it_101;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct sType* right_type2_102;
struct sVar* var__103;
void* __right_value87 = (void*)0;
struct sType* var_type_104;
void* __right_value88 = (void*)0;
struct sType* left_type_105;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct CVALUE* right_value2_106;
void* __right_value91 = (void*)0;
char* __dec_obj38;
void* __right_value92 = (void*)0;
struct sType* __dec_obj39;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct CVALUE* come_value_107;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
char* __dec_obj40;
void* __right_value98 = (void*)0;
char* __dec_obj41;
void* __right_value99 = (void*)0;
struct sType* __dec_obj42;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct CVALUE* come_value_108;
void* __right_value105 = (void*)0;
char* __dec_obj43;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct sVar* var__112;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct sType* type_113;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
_Bool __result_obj__62;
void* __right_value117 = (void*)0;
struct sType* left_type_114;
void* __right_value118 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value121 = (void*)0;
struct list$1sNode$ph* o2_saved_115;
struct sNode* it_118;
_Bool Value_121;
void* __right_value122 = (void*)0;
_Bool __result_obj__69;
void* __right_value123 = (void*)0;
struct CVALUE* come_value_122;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct CVALUE* come_value_123;
void* __right_value129 = (void*)0;
char* __dec_obj47;
void* __right_value130 = (void*)0;
struct sType* __dec_obj48;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sVar* var__127;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct sType* type_128;
void* __right_value139 = (void*)0;
_Bool Value_129;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
_Bool array_initializer_130;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
_Bool struct_initializer_131;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
_Bool new_channel_132;
void* __right_value146 = (void*)0;
struct CVALUE* right_value_133;
struct sType* right_type_134;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct sType* var_type_135;
void* __right_value149 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct sType* left_type_136;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sVar* var__137;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct CVALUE* come_value_138;
void* __right_value157 = (void*)0;
char* __dec_obj52;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct sVar* var__139;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct CVALUE* come_value_140;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
char* __dec_obj53;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct sVar* var__141;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct CVALUE* come_value_142;
void* __right_value169 = (void*)0;
char* __dec_obj54;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sVar* var__143;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct CVALUE* come_value_144;
void* __right_value175 = (void*)0;
char* __dec_obj55;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct CVALUE* come_value_145;
void* __right_value181 = (void*)0;
char* __dec_obj56;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct CVALUE* come_value_146;
void* __right_value187 = (void*)0;
char* __dec_obj57;
void* __right_value188 = (void*)0;
struct sType* __dec_obj58;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct CVALUE* come_value_147;
void* __right_value193 = (void*)0;
char* __dec_obj59;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sType* __dec_obj60;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct CVALUE* come_value_148;
void* __right_value202 = (void*)0;
char* __dec_obj61;
void* __right_value203 = (void*)0;
struct sType* __dec_obj62;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
_Bool __result_obj__71;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct CVALUE* come_value_149;
void* __right_value210 = (void*)0;
char* __dec_obj63;
void* __right_value211 = (void*)0;
struct sType* __dec_obj64;
_Bool Value_150;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
_Bool new_channel_151;
void* __right_value214 = (void*)0;
struct CVALUE* right_value_152;
struct sType* right_type_153;
struct sClass* current_stack_frame_struct_154;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
_Bool _condtional_value_X8;
struct sVar* parent_var_155;
struct sType* left_type_156;
void* __right_value217 = (void*)0;
_Bool __result_obj__72;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
char* c_value_157;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct CVALUE* come_value_158;
void* __right_value223 = (void*)0;
char* __dec_obj65;
void* __right_value224 = (void*)0;
char* __dec_obj66;
void* __right_value225 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__73;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
char* c_value_159;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct CVALUE* come_value_160;
void* __right_value231 = (void*)0;
char* __dec_obj68;
void* __right_value232 = (void*)0;
char* __dec_obj69;
void* __right_value233 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__74;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
_Bool __result_obj__75;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct CVALUE* come_value_161;
void* __right_value239 = (void*)0;
char* __dec_obj71;
void* __right_value240 = (void*)0;
char* __dec_obj72;
void* __right_value241 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__76;
struct sVar* var__162;
void* __right_value242 = (void*)0;
_Bool __result_obj__77;
void* __right_value243 = (void*)0;
struct sType* __dec_obj74;
void* __right_value244 = (void*)0;
struct sType* left_type_163;
void* __right_value245 = (void*)0;
_Bool __result_obj__78;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct CVALUE* come_value_164;
void* __right_value250 = (void*)0;
char* __dec_obj75;
void* __right_value251 = (void*)0;
struct sType* __dec_obj76;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_165;
void* __right_value256 = (void*)0;
char* __dec_obj77;
void* __right_value257 = (void*)0;
struct sType* __dec_obj78;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_166;
void* __right_value262 = (void*)0;
char* __dec_obj79;
void* __right_value263 = (void*)0;
struct sType* __dec_obj80;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* come_value_167;
void* __right_value266 = (void*)0;
char* __dec_obj81;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sType* __dec_obj82;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
_Bool __result_obj__79;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct CVALUE* come_value_168;
void* __right_value275 = (void*)0;
char* __dec_obj83;
void* __right_value276 = (void*)0;
struct sType* __dec_obj84;
    if(    self->multiple_declare    ) {
        var__39=((struct sVar*)(__right_value56=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value55=__builtin_string(self->name))),((void*)0))));
        (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__39        ) {
            if(            var__39->mType->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__39->mType)),var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value58=__builtin_string(self->name))));
            (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        self->type==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value59=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            return (_Bool)1;
        }
        type_60=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        for(        o2_saved_61=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_64=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin((o2_saved_61))        ;        !list$1tuple3$3sType$phchar$phsNode$ph$ph_end((o2_saved_61))        ;        it_64=list$1tuple3$3sType$phchar$phsNode$ph$ph_next((o2_saved_61))        ){
            multiple_assign_var1=it_64;
            type_67=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_68=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_69=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__39=((struct sVar*)(__right_value62=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value61=__builtin_string(var_name_68))),((void*)0))));
            (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            var__39            ) {
                if(                var__39->mType->mHeap                ) {
                    free_object((struct sType*)come_increment_ref_count(sType_clone(var__39->mType)),var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value64=__builtin_string(var_name_68))));
                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_variable_to_table(var_name_68,(struct sType*)come_increment_ref_count(sType_clone(type_67)),info,(_Bool)0,self->comma);
            var__39=get_variable_from_table(info->lv_table,var_name_68);
            if(            var__39==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value66=err_msg(info,"var not found(%s)(ZY) at definition of variable",it_64)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__40 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__40;
            }
            left_type_70=(struct sType*)come_increment_ref_count(sType_clone(var__39->mType));
            if(            right_value_69            ) {
                Value_71=node_compile(right_value_69,info);
                if(                !Value_71                ) {
                    __result_obj__41 = (_Bool)0;
                    come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, type_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__41;
                }
                else {
                }
                come_value_72=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value69=make_define_var(left_type_70,var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_72->c_value);
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                (_condtional_value_X1=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_70->mNoCallingDestructor&&((struct sFun*)(__right_value70=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset"))))),                come_call_finalizer(sFun_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X1                ) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__39->mCValueName,((char*)(__right_value71=make_type_name_string(left_type_70,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value72=make_define_var(left_type_70,var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    self->multiple_assign    ) {
        buf_79=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 85, "struct buffer*"))));
        Value_80=node_compile(self->right_value,info);
        if(        !Value_80        ) {
            __result_obj__50 = (_Bool)0;
            come_call_finalizer(buffer_finalize, buf_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__50;
        }
        else {
        }
        right_value_81=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_82=right_value_81->type;
        if(        right_type_82->mNoSolvedGenericsType        ) {
            right_type_82=right_type_82->mNoSolvedGenericsType;
        }
        i_83=0;
        for(        o2_saved_84=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_87=list$1char$ph_begin((o2_saved_84))        ;        !list$1char$ph_end((o2_saved_84))        ;        it_87=list$1char$ph_next((o2_saved_84))        ){
            if(            i_83<list$1sType$ph_length(right_type_82->mGenericsTypes)            ) {
                var__90=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value76=__builtin_string(it_87))),((void*)0)));
                (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                var__90                ) {
                    if(                    var__90->mType->mHeap                    ) {
                        free_object((struct sType*)come_increment_ref_count(sType_clone(var__90->mType)),var__90->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value79=__builtin_string(it_87))));
                    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                right_type2_91=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(right_type_82->mGenericsTypes,i_83));
                add_variable_to_table(it_87,(struct sType*)come_increment_ref_count(sType_clone(right_type2_91)),info,(_Bool)0,self->comma);
                come_call_finalizer(sVar_finalize, var__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            i_83++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        static int num_multiple_var_98=0;
        multiple_var_name_99=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_98));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value83=make_define_var(right_value_81->type,multiple_var_name_99,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->prohibits_output_last_code        ) {
            buffer_append_format(buf_79,"%s=%s",multiple_var_name_99,right_value_81->c_value);
        }
        else if(        info->comma_instead_of_semicolon        ) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_99,right_value_81->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_99,right_value_81->c_value);
        }
        __dec_obj37=right_value_81->c_value,
        right_value_81->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name_99, "07var.c", 133, "char*"));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        i_83=0;
        for(        o2_saved_100=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_101=list$1char$ph_begin((o2_saved_100))        ;        !list$1char$ph_end((o2_saved_100))        ;        it_101=list$1char$ph_next((o2_saved_100))        ){
            if(            i_83<list$1sType$ph_length(right_type_82->mGenericsTypes)            ) {
                right_type2_102=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value85=list$1sType$ph_operator_load_element(right_type_82->mGenericsTypes,i_83)))));
                come_call_finalizer(sType_finalize, __right_value85, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                var__103=get_variable_from_table(info->lv_table,it_101);
                var_type_104=(struct sType*)come_increment_ref_count(sType_clone(var__103->mType));
                var_type_104->mStatic=(_Bool)0;
                left_type_105=(struct sType*)come_increment_ref_count(sType_clone(var__103->mType));
                right_value2_106=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 147, "struct CVALUE*"))));
                __dec_obj38=right_value2_106->c_value,
                right_value2_106->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_81->c_value,i_83+1));
                __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj39=right_value2_106->type,
                right_value2_106->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_102));
                come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                right_value2_106->var=((void*)0);
                come_value_107=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 153, "struct CVALUE*"))));
                check_assign_type(((char*)(__right_value96=xsprintf("\%s is assining to}",((char*)(__right_value95=string_to_string(self->name)))))),left_type_105,right_type2_102,come_value_107,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                right_type2_102->mHeap&&left_type_105->mHeap&&left_type_105->mPointerNum>0&&right_type2_102->mPointerNum>0                ) {
                    std_move(left_type_105,right_type2_102,right_value2_106,info,(_Bool)0);
                    __dec_obj40=come_value_107->c_value,
                    come_value_107->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__103->mCValueName,right_value2_106->c_value));
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj41=come_value_107->c_value,
                    come_value_107->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__103->mCValueName,right_value2_106->c_value));
                    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                __dec_obj42=come_value_107->type,
                come_value_107->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_105));
                come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value_107->var=var__103;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value100=make_define_var(left_type_105,var__103->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                info->prohibits_output_last_code                ) {
                    buffer_append_format(buf_79,"%s,\n",come_value_107->c_value);
                }
                else if(                info->comma_instead_of_semicolon                ) {
                    add_come_code(info,"%s,\n",come_value_107->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_107->c_value);
                }
                come_call_finalizer(sType_finalize, right_type2_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, var_type_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value2_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            i_83++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        (_condtional_value_X2=(string_operator_not_equals(((char*)(__right_value102=buffer_to_string(buf_79))),""))),        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X2        ) {
            come_value_108=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 185, "struct CVALUE*"))));
            __dec_obj43=come_value_108->c_value,
            come_value_108->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_79));
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
            come_call_finalizer(CVALUE_finalize, come_value_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(buffer_finalize, buf_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (multiple_var_name_99 = come_decrement_ref_count(multiple_var_name_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)    ) {
        var__112=((struct sVar*)(__right_value110=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value109=__builtin_string(self->name))),((void*)0))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__112        ) {
            if(            var__112->mType->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__112->mType)),var__112->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value112=__builtin_string(self->name))));
            (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        self->type==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value113=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            return (_Bool)1;
        }
        type_113=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_113)),info,(_Bool)0,self->comma);
        var__112=get_variable_from_table(info->lv_table,self->name);
        if(        var__112==((void*)0)        ) {
            var__112=get_variable_from_table(info->gv_table,self->name);
            if(            var__112==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value116=err_msg(info,"var not found(%s)(Y) at definition of variable",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value116, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__62 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__62;
            }
        }
        left_type_114=(struct sType*)come_increment_ref_count(sType_clone(var__112->mType));
        if(        left_type_114->mChannel        ) {
            if(            (_condtional_value_X3=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_114->mNoCallingDestructor&&((struct sFun*)(__right_value118=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset"))))),            come_call_finalizer(sFun_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X3            ) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__112->mCValueName);
            }
        }
        else if(        list$1sNode$ph_length(left_type_114->mArrayNum)>0        ) {
            add_come_code(info,"%s;\n",((char*)(__right_value119=make_define_var(left_type_114,var__112->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            (_condtional_value_X4=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_114->mNoCallingDestructor&&((struct sFun*)(__right_value120=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset"))))),            come_call_finalizer(sFun_finalize, __right_value120, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X4            ) {
                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__112->mCValueName,((char*)(__right_value121=make_type_name_string(left_type_114,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                for(                o2_saved_115=(struct list$1sNode$ph*)come_increment_ref_count((left_type_114->mArrayNum)),it_118=list$1sNode$ph_begin((o2_saved_115))                ;                !list$1sNode$ph_end((o2_saved_115))                ;                it_118=list$1sNode$ph_next((o2_saved_115))                ){
                    Value_121=node_compile(it_118,info);
                    if(                    !Value_121                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value122=err_msg(info,"invalid array num")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        __result_obj__69 = (_Bool)1;
                        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, left_type_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__69;
                    }
                    else {
                    }
                    come_value_122=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    add_come_code(info,"*(%s)",come_value_122->c_value);
                    come_call_finalizer(CVALUE_finalize, come_value_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                add_come_code(info,");\n");
            }
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value124=make_define_var(left_type_114,var__112->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            left_type_114->mPointerNum>0            ) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__112->mCValueName);
            }
            else {
                if(                (_condtional_value_X5=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_114->mNoCallingDestructor&&((struct sFun*)(__right_value125=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset"))))),                come_call_finalizer(sFun_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X5                ) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__112->mCValueName,((char*)(__right_value126=make_type_name_string(left_type_114,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        if(        !info->m5stack_cpp        ) {
            come_value_123=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 275, "struct CVALUE*"))));
            __dec_obj47=come_value_123->c_value,
            come_value_123->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__112->mCValueName));
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj48=come_value_123->type,
            come_value_123->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_114));
            come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_123->var=var__112;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
            come_call_finalizer(CVALUE_finalize, come_value_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        !left_type_114->mClass->mNumber&&left_type_114->mPointerNum==0        ) {
            var__112->mType->mAllocaValue=(_Bool)1;
            if(            var__112->mType->mNoSolvedGenericsType            ) {
                var__112->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer(sType_finalize, type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    self->alloc    ) {
        var__127=((struct sVar*)(__right_value135=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value134=__builtin_string(self->name))),((void*)0))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__127        ) {
            if(            var__127->mType->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__127->mType)),var__127->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value137=__builtin_string(self->name))));
            (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        self->type==((void*)0)        ) {
        }
        else {
            type_128=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_128)),info,(_Bool)0,self->comma);
            come_call_finalizer(sType_finalize, type_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        Value_129=node_compile(self->right_value,info);
        if(        !Value_129        ) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_130=string_operator_equals(((char*)(__right_value141=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        struct_initializer_131=string_operator_equals(((char*)(__right_value143=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        new_channel_132=string_operator_equals(((char*)(__right_value145=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        right_value_133=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_134=right_value_133->type;
        if(        self->type==((void*)0)        ) {
            if(            self->val_            ) {
                right_type_134->mImmutable=(_Bool)1;
            }
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_134)),info,(_Bool)0,self->comma);
        }
        else {
        }
        var__127=get_variable_from_table(info->lv_table,self->name);
        var_type_135=(struct sType*)come_increment_ref_count(sType_clone(var__127->mType));
        var_type_135->mStatic=(_Bool)0;
        if(        !array_initializer_130&&!struct_initializer_131&&!var__127->mType->mStatic&&!var_type_135->mConstant&&list$1sNode$ph_length(var_type_135->mArrayNum)==0&&!var__127->mType->mRegister        ) {
            if(            var_type_135->mClass->mNumber            ) {
            }
            else if(            (var_type_135->mClass->mStruct||var_type_135->mClass->mUnion||var_type_135->mClass->mEnum)||var_type_135->mPointerNum>0            ) {
            }
            else {
                if(                (_condtional_value_X6=(string_operator_not_equals(info->come_fun->mName,"memset")&&!var_type_135->mNoCallingDestructor&&((struct sFun*)(__right_value149=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset"))))),                come_call_finalizer(sFun_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X6                ) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__127->mCValueName,((char*)(__right_value150=make_type_name_string(var_type_135,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        left_type_136=(struct sType*)come_increment_ref_count(sType_clone(var__127->mType));
        if(        array_initializer_130        ) {
            var__137=((struct sVar*)(__right_value153=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value152=__builtin_string(self->name))),((void*)0))));
            (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value154=make_define_var(var__137->mType,var__137->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_133->c_value);
            (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_138=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 359, "struct CVALUE*"))));
            __dec_obj52=come_value_138->c_value,
            come_value_138->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_136->mRegister        ) {
            var__139=((struct sVar*)(__right_value159=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value158=__builtin_string(self->name))),((void*)0))));
            (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value159, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_value_140=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 368, "struct CVALUE*"))));
            __dec_obj53=come_value_140->c_value,
            come_value_140->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value162=make_define_var(var__139->mType,var__139->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_133->c_value));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
            come_call_finalizer(CVALUE_finalize, come_value_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        array_initializer_130||left_type_136->mRegister        ) {
            var__141=((struct sVar*)(__right_value165=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value164=__builtin_string(self->name))),((void*)0))));
            (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value165, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value166=make_define_var(var__141->mType,var__141->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_133->c_value);
            (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_142=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 383, "struct CVALUE*"))));
            __dec_obj54=come_value_142->c_value,
            come_value_142->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        struct_initializer_131        ) {
            var__143=((struct sVar*)(__right_value171=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value170=__builtin_string(self->name))),((void*)0))));
            (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value171, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value172=make_define_var(var__143->mType,var__143->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_133->c_value);
            (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_144=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 400, "struct CVALUE*"))));
            __dec_obj55=come_value_144->c_value,
            come_value_144->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        var__127->mType->mStatic||var__127->mType->mConstant        ) {
            check_assign_type(((char*)(__right_value177=xsprintf("\%s is assining to",((char*)(__right_value176=string_to_string(self->name)))))),left_type_136,right_type_134,right_value_133,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            add_come_code(info,"%s=%s;\n",((char*)(__right_value178=make_define_var(left_type_136,var__127->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_133->c_value);
            (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_145=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 418, "struct CVALUE*"))));
            __dec_obj56=come_value_145->c_value,
            come_value_145->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_145));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        right_type_134->mHeap&&left_type_136->mHeap&&left_type_136->mPointerNum>0&&right_type_134->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value183=xsprintf("\%s is assining to",((char*)(__right_value182=string_to_string(self->name)))))),left_type_136,right_type_134,right_value_133,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            std_move(left_type_136,right_type_134,right_value_133,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value184=make_define_var(left_type_136,var__127->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_146=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 439, "struct CVALUE*"))));
            __dec_obj57=come_value_146->c_value,
            come_value_146->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__127->mCValueName,right_value_133->c_value));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj58=come_value_146->type,
            come_value_146->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_136));
            come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_146->var=var__127;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
            add_come_last_code(info,"%s",come_value_146->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_136->mChannel&&new_channel_132        ) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value189=make_define_var(left_type_136,var__127->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            (_condtional_value_X7=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_136->mNoCallingDestructor&&((struct sFun*)(__right_value190=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset"))))),            come_call_finalizer(sFun_finalize, __right_value190, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X7            ) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__127->mCValueName);
            }
            come_value_147=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 455, "struct CVALUE*"))));
            __dec_obj59=come_value_147->c_value,
            come_value_147->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__127->mCValueName));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj60=come_value_147->type,
            come_value_147->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 457, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_147->type->mPointerNum=1;
            come_value_147->var=var__127;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_147));
            add_come_last_code(info,"%s",come_value_147->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_136->mPointerNum>0&&left_type_136->mHeap&&string_operator_equals(right_type_134->mClass->mName,"void")&&right_type_134->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value198=xsprintf("\%s is assining to",((char*)(__right_value197=string_to_string(self->name)))))),left_type_136,right_type_134,right_value_133,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value199=make_define_var(left_type_136,var__127->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_148=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 471, "struct CVALUE*"))));
            __dec_obj61=come_value_148->c_value,
            come_value_148->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__127->mCValueName,right_value_133->c_value));
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj62=come_value_148->type,
            come_value_148->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_136));
            come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_148->var=var__127;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
            add_come_last_code(info,"%s",come_value_148->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value205=xsprintf("\%s is assining to",((char*)(__right_value204=string_to_string(self->name)))))),left_type_136,right_type_134,right_value_133,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            right_type_134->mHeap&&left_type_136->mHeap&&left_type_136->mPointerNum>0&&right_type_134->mPointerNum>0            ) {
                std_move(left_type_136,right_type_134,right_value_133,info,(_Bool)0);
            }
            if(            left_type_136->mHeap&&!right_value_133->type->mHeap            ) {
                ((struct tuple2$2int$bool$*)(__right_value206=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value206, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__71 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, var_type_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__71;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value207=make_define_var(left_type_136,var__127->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_149=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 503, "struct CVALUE*"))));
            __dec_obj63=come_value_149->c_value,
            come_value_149->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__127->mCValueName,right_value_133->c_value));
            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj64=come_value_149->type,
            come_value_149->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_136));
            come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_149->var=var__127;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_149));
            add_come_last_code(info,"%s",come_value_149->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, var_type_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        Value_150=node_compile(self->right_value,info);
        if(        !Value_150        ) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_151=string_operator_equals(((char*)(__right_value213=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        right_value_152=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_153=right_value_152->type;
        current_stack_frame_struct_154=info->current_stack_frame_struct;
        if(        (_condtional_value_X8=(current_stack_frame_struct_154&&((struct sVar*)(__right_value216=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value215=__builtin_string(self->name))),((void*)0))))==((void*)0))),        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        come_call_finalizer(sVar_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X8        ) {
            parent_var_155=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_155!=((void*)0)            ) {
                if(                string_operator_not_equals(parent_var_155->mFunName,info->come_fun->mName)                ) {
                    left_type_156=parent_var_155->mType;
                    if(                    left_type_156->mImmutable                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value217=err_msg(info,"Immutable object can't change")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value217, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        __result_obj__72 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__72;
                    }
                    if(                    left_type_156->mPointerNum>0&&right_type_153->mPointerNum>0&&right_type_153->mHeap&&left_type_156->mHeap                    ) {
                        check_assign_type(((char*)(__right_value219=xsprintf("\%s is assigning to",((char*)(__right_value218=string_to_string(self->name)))))),left_type_156,right_type_153,right_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        c_value_157=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_155->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var_155->mType),c_value_157,info,(_Bool)0);
                        std_move(left_type_156,right_type_153,right_value_152,info,(_Bool)0);
                        come_value_158=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 546, "struct CVALUE*"))));
                        if(                        parent_var_155->mType->mOriginIsArray                        ) {
                            __dec_obj65=come_value_158->c_value,
                            come_value_158->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_155->mCValueName,right_value_152->c_value));
                            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            __dec_obj66=come_value_158->c_value,
                            come_value_158->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_155->mCValueName,right_value_152->c_value));
                            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        __dec_obj67=come_value_158->type,
                        come_value_158->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_156));
                        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        come_value_158->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_158->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
                        __result_obj__73 = (_Bool)1;
                        (c_value_157 = come_decrement_ref_count(c_value_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__73;
                        (c_value_157 = come_decrement_ref_count(c_value_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else if(                    left_type_156->mPointerNum>0&&right_type_153->mPointerNum>0&&string_operator_equals(right_type_153->mClass->mName,"void")&&left_type_156->mHeap                    ) {
                        check_assign_type(((char*)(__right_value227=xsprintf("\%s is assigning to",((char*)(__right_value226=string_to_string(self->name)))))),left_type_156,right_type_153,right_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        c_value_159=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_155->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var_155->mType),c_value_159,info,(_Bool)0);
                        come_value_160=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 570, "struct CVALUE*"))));
                        if(                        parent_var_155->mType->mOriginIsArray                        ) {
                            __dec_obj68=come_value_160->c_value,
                            come_value_160->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_155->mCValueName,right_value_152->c_value));
                            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            __dec_obj69=come_value_160->c_value,
                            come_value_160->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_155->mCValueName,right_value_152->c_value));
                            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        __dec_obj70=come_value_160->type,
                        come_value_160->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_156));
                        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        come_value_160->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_160->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
                        __result_obj__74 = (_Bool)1;
                        (c_value_159 = come_decrement_ref_count(c_value_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__74;
                        (c_value_159 = come_decrement_ref_count(c_value_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value235=xsprintf("\%s is assigning to",((char*)(__right_value234=string_to_string(self->name)))))),left_type_156,right_type_153,right_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        if(                        left_type_156->mHeap&&!right_value_152->type->mHeap                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value236=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value236, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            __result_obj__75 = (_Bool)1;
                            come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            return __result_obj__75;
                        }
                        come_value_161=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 595, "struct CVALUE*"))));
                        if(                        parent_var_155->mType->mOriginIsArray                        ) {
                            __dec_obj71=come_value_161->c_value,
                            come_value_161->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_155->mCValueName,right_value_152->c_value));
                            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            __dec_obj72=come_value_161->c_value,
                            come_value_161->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_155->mCValueName,right_value_152->c_value));
                            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        __dec_obj73=come_value_161->type,
                        come_value_161->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_156));
                        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        come_value_161->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_161->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
                        __result_obj__76 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, come_value_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__76;
                        come_call_finalizer(CVALUE_finalize, come_value_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
            }
        }
        var__162=get_variable_from_table(info->lv_table,self->name);
        if(        var__162==((void*)0)        ) {
            var__162=get_variable_from_table(info->gv_table,self->name);
            if(            var__162==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value242=err_msg(info,"var not found(%s)(X) at storing variable",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value242, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__77 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__77;
            }
        }
        if(        var__162->mType==((void*)0)        ) {
            __dec_obj74=var__162->mType,
            var__162->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_153));
            come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        left_type_163=(struct sType*)come_increment_ref_count(sType_clone(var__162->mType));
        if(        left_type_163->mImmutable        ) {
            ((struct tuple2$2int$bool$*)(__right_value245=err_msg(info,"Immutable object can't change")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value245, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__78 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__78;
        }
        if(        (var__162->mType->mStatic||var__162->mType->mConstant)&&!var__162->mGlobal        ) {
            check_assign_type(((char*)(__right_value247=xsprintf("\%s is assining to",((char*)(__right_value246=string_to_string(self->name)))))),left_type_163,right_type_153,right_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_164=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 641, "struct CVALUE*"))));
            __dec_obj75=come_value_164->c_value,
            come_value_164->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__162->mCValueName,right_value_152->c_value));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj76=come_value_164->type,
            come_value_164->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_163));
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_164->var=var__162;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
            add_come_last_code(info,"%s",come_value_164->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        right_type_153->mHeap&&left_type_163->mHeap&&left_type_163->mPointerNum>0&&right_type_153->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value253=xsprintf("\%s is assining to",((char*)(__right_value252=string_to_string(self->name)))))),left_type_163,right_type_153,right_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_163),var__162->mCValueName,info,(_Bool)0);
            std_move(left_type_163,right_type_153,right_value_152,info,(_Bool)0);
            come_value_165=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 658, "struct CVALUE*"))));
            __dec_obj77=come_value_165->c_value,
            come_value_165->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__162->mCValueName,right_value_152->c_value));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj78=come_value_165->type,
            come_value_165->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_163));
            come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_165->var=var__162;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
            add_come_last_code(info,"%s",come_value_165->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_163->mPointerNum>0&&left_type_163->mHeap&&string_operator_equals(right_type_153->mClass->mName,"void")&&right_type_153->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value259=xsprintf("\%s is assining to",((char*)(__right_value258=string_to_string(self->name)))))),left_type_163,right_type_153,right_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_163),var__162->mCValueName,info,(_Bool)0);
            come_value_166=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 674, "struct CVALUE*"))));
            __dec_obj79=come_value_166->c_value,
            come_value_166->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__162->mCValueName,right_value_152->c_value));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj80=come_value_166->type,
            come_value_166->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_163));
            come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_166->var=var__162;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
            add_come_last_code(info,"%s",come_value_166->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_163->mChannel&&new_channel_151        ) {
            come_value_167=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 685, "struct CVALUE*"))));
            __dec_obj81=come_value_167->c_value,
            come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__162->mCValueName));
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj82=come_value_167->type,
            come_value_167->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 687, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_167->type->mPointerNum=1;
            come_value_167->var=var__162;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
            add_come_last_code(info,"%s",come_value_167->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value271=xsprintf("\%s is assining to",((char*)(__right_value270=string_to_string(self->name)))))),left_type_163,right_type_153,right_value_152,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            left_type_163->mHeap&&!right_value_152->type->mHeap            ) {
                ((struct tuple2$2int$bool$*)(__right_value272=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value272, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__79 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__79;
            }
            come_value_168=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 703, "struct CVALUE*"))));
            __dec_obj83=come_value_168->c_value,
            come_value_168->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__162->mCValueName,right_value_152->c_value));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj84=come_value_168->type,
            come_value_168->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_163));
            come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_168->var=var__162;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_168));
            add_come_last_code(info,"%s",come_value_168->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value2 = (void*)0;
struct sType* result_6;
void* __right_value3 = (void*)0;
struct sType* __dec_obj2;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value13 = (void*)0;
struct sType* __dec_obj8;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value17 = (void*)0;
char* __dec_obj11;
void* __right_value18 = (void*)0;
char* __dec_obj12;
void* __right_value19 = (void*)0;
char* __dec_obj13;
void* __right_value20 = (void*)0;
char* __dec_obj14;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
void* __right_value29 = (void*)0;
char* __dec_obj19;
void* __right_value30 = (void*)0;
struct list$1sType$ph* __dec_obj20;
void* __right_value38 = (void*)0;
struct list$1char$ph* __dec_obj24;
void* __right_value39 = (void*)0;
struct sType* __dec_obj25;
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
        __dec_obj2=result_6->mOriginalLoadVarType,
        result_6->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_6->mChannelType,
        result_6->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_6->mGenericsTypes,
        result_6->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_6->mNoSolvedGenericsType,
        result_6->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_6->mSizeNum,
        result_6->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_6->mAlignas,
        result_6->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_6->mTupleName,
        result_6->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_6->mAttribute,
        result_6->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj13=result_6->mVarAttribute,
        result_6->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
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
        __dec_obj14=result_6->mAsmName,
        result_6->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
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
        __dec_obj18=result_6->mArrayNum,
        result_6->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
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
        __dec_obj19=result_6->mOriginalTypeName,
        result_6->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
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
        __dec_obj20=result_6->mParamTypes,
        result_6->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj24=result_6->mParamNames,
        result_6->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj25=result_6->mResultType,
        result_6->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
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
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1sType$ph* result_7;
struct list_item$1sType$ph* it_8;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_7=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1026, "struct list$1sType$ph*"))));
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
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_9;
struct sType* __dec_obj4;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj5;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_9=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1045, "struct list_item$1sType$ph*"))));
        litem_9->prev=((void*)0);
        litem_9->next=((void*)0);
        __dec_obj4=litem_9->item,
        litem_9->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_9;
        self->head=litem_9;
    }
    else if(    self->len==1    ) {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1055, "struct list_item$1sType$ph*"))));
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        __dec_obj5=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1065, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        __dec_obj6=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
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
void* __right_value14 = (void*)0;
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
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result_15;
struct list_item$1sNode$ph* it_16;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_15=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1026, "struct list$1sNode$ph*"))));
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
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_17;
struct sNode* __dec_obj15;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj16;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1045, "struct list_item$1sNode$ph*"))));
        litem_17->prev=((void*)0);
        litem_17->next=((void*)0);
        __dec_obj15=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_17;
        self->head=litem_17;
    }
    else if(    self->len==1    ) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1055, "struct list_item$1sNode$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj16=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1065, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj17=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
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
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result_22;
struct list_item$1char$ph* it_23;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_22=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1026, "struct list$1char$ph*"))));
    it_23=self->head;
    while(    it_23!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1031, "char*")));
        }
        else {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1034, "char*")));
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
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_24;
char* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_25;
char* __dec_obj22;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj23;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1045, "struct list_item$1char$ph*"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        __dec_obj21=litem_24->item,
        litem_24->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1    ) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1055, "struct list_item$1char$ph*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        __dec_obj22=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1065, "struct list_item$1char$ph*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        __dec_obj23=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
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

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__17;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_31;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_32;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__22;
    if(    self==((void*)0)    ) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__17;
    }
    result_31=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1026, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it_32=self->head;
    while(    it_32!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_31,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_32->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_31,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_32->item)));
        }
        it_32=it_32->next;
    }
    __result_obj__22 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result_31);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, result_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_29;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)    ) {
        prev_it_30=it_29;
        it_29=it_29->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value44 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_33;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj29;
void* __right_value45 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_34;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj30;
void* __right_value46 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_35;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj31;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__19;
    if(    self->len==0    ) {
        litem_33=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value44=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1045, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_33->prev=((void*)0);
        litem_33->next=((void*)0);
        __dec_obj29=litem_33->item,
        litem_33->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_33;
        self->head=litem_33;
    }
    else if(    self->len==1    ) {
        litem_34=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value45=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1055, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_34->prev=self->head;
        litem_34->next=((void*)0);
        __dec_obj30=litem_34->item,
        litem_34->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_34;
        self->head->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value46=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1065, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_35->prev=self->tail;
        litem_35->next=((void*)0);
        __dec_obj31=litem_35->item,
        litem_35->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_35;
        self->tail=litem_35;
    }
    self->len++;
    __result_obj__19 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__20;
void* __right_value47 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_36;
void* __right_value48 = (void*)0;
struct sType* __dec_obj32;
void* __right_value49 = (void*)0;
char* __dec_obj33;
void* __right_value50 = (void*)0;
struct sNode* __dec_obj34;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__21;
    if(    self==(void*)0    ) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__20;
    }
    result_36=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj32=result_36->v1,
        result_36->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj33=result_36->v2,
        result_36->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        __dec_obj34=result_36->v3,
        result_36->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__21 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result_36);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, result_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_37;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->multiple_assign, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)    ) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_40;
unsigned int it_41;
struct sVar* __result_obj__25;
struct sVar* __result_obj__26;
struct sVar* __result_obj__27;
struct sVar* __result_obj__28;
    hash_40=string_get_hash_key(((char*)key))%self->size;
    it_41=hash_40;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_41]        ) {
            if(            string_equals(self->keys[it_41],key)            ) {
                __result_obj__25 = (struct sVar*)come_increment_ref_count(self->items[it_41]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__25;
            }
            it_41++;
            if(            it_41>=self->size            ) {
                it_41=0;
            }
            else if(            it_41==hash_40            ) {
                __result_obj__26 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash_42;
unsigned int it_43;
struct map$2char$phsVar$ph* __result_obj__33;
    hash_42=string_get_hash_key(((char*)key))%self->size;
    it_43=hash_42;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_43]        ) {
            if(            string_equals(self->keys[it_43],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it_43]);
                self->item_existance[it_43]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it_43] = come_decrement_ref_count(self->keys[it_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it_43]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_43], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                self->items[it_43]=((void*)0);
                self->len--;
                break;
            }
            it_43++;
            if(            it_43>=self->size            ) {
                it_43=0;
            }
            else if(            it_43==hash_42            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__33 = self;
    return __result_obj__33;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_44;
struct list_item$1char$ph* it_45;
struct list$1char$ph* __result_obj__32;
    it2_44=0;
    it_45=self->head;
    while(    it_45!=((void*)0)    ) {
        if(        string_equals(it_45->item,item)        ) {
            list$1char$ph_delete(self,it2_44,it2_44+1);
            break;
        }
        it2_44++;
        it_45=it_45->next;
    }
    __result_obj__32 = self;
    return __result_obj__32;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_46;
struct list$1char$ph* __result_obj__29;
struct list_item$1char$ph* it_49;
int i_50;
struct list_item$1char$ph* prev_it_51;
struct list_item$1char$ph* it_52;
int i_53;
struct list_item$1char$ph* prev_it_54;
struct list_item$1char$ph* it_55;
struct list_item$1char$ph* head_prev_it_56;
struct list_item$1char$ph* tail_it_57;
int i_58;
struct list_item$1char$ph* prev_it_59;
struct list$1char$ph* __result_obj__31;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_46=tail;
        tail=head;
        head=tmp_46;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__29 = self;
        return __result_obj__29;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_49=self->head;
        i_50=0;
        while(        it_49!=((void*)0)        ) {
            if(            i_50<tail            ) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_50==tail            ) {
                self->head=it_49;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_52=self->head;
        i_53=0;
        while(        it_52!=((void*)0)        ) {
            if(            i_53==head            ) {
                self->tail=it_52->prev;
                self->tail->next=((void*)0);
            }
            if(            i_53>=head            ) {
                prev_it_54=it_52;
                it_52=it_52->next;
                i_53++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_52=it_52->next;
                i_53++;
            }
        }
    }
    else {
        it_55=self->head;
        head_prev_it_56=((void*)0);
        tail_it_57=((void*)0);
        i_58=0;
        while(        it_55!=((void*)0)        ) {
            if(            i_58==head            ) {
                head_prev_it_56=it_55->prev;
            }
            if(            i_58==tail            ) {
                tail_it_57=it_55;
            }
            if(            i_58>=head&&i_58<tail            ) {
                prev_it_59=it_55;
                it_55=it_55->next;
                i_58++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_58++;
            }
        }
        if(        head_prev_it_56!=((void*)0)        ) {
            head_prev_it_56->next=tail_it_57;
        }
        if(        tail_it_57!=((void*)0)        ) {
            tail_it_57->prev=head_prev_it_56;
        }
    }
    __result_obj__31 = self;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_47;
struct list_item$1char$ph* prev_it_48;
struct list$1char$ph* __result_obj__30;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = self;
    return __result_obj__30;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_62;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__34;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__35;
struct tuple3$3sType$phchar$phsNode$ph* result_63;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__36;
result_62 = (void*)0;
result_63 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_62,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__34 = result_62;
        return __result_obj__34;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_63,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__36 = result_63;
    return __result_obj__36;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_65;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__37;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__38;
struct tuple3$3sType$phchar$phsNode$ph* result_66;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__39;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_65,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__37 = result_65;
        return __result_obj__37;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_66,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__39 = result_66;
    return __result_obj__39;
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

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_73;
unsigned int hash_74;
unsigned int it_75;
struct sFun* __result_obj__42;
struct sFun* __result_obj__43;
struct sFun* __result_obj__44;
struct sFun* __result_obj__45;
default_value_73 = (void*)0;
    memset(&default_value_73,0,sizeof(struct sFun*));
    hash_74=string_get_hash_key(((char*)key))%self->size;
    it_75=hash_74;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_75]        ) {
            if(            string_equals(self->keys[it_75],key)            ) {
                __result_obj__42 = (struct sFun*)come_increment_ref_count(self->items[it_75]);
                come_call_finalizer(sFun_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__42;
            }
            it_75++;
            if(            it_75>=self->size            ) {
                it_75=0;
            }
            else if(            it_75==hash_74            ) {
                __result_obj__43 = (struct sFun*)come_increment_ref_count(default_value_73);
                come_call_finalizer(sFun_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__43;
            }
        }
        else {
            __result_obj__44 = (struct sFun*)come_increment_ref_count(default_value_73);
            come_call_finalizer(sFun_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__44;
        }
    }
    __result_obj__45 = (struct sFun*)come_increment_ref_count(default_value_73);
    come_call_finalizer(sFun_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
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
struct sFun* default_value_76;
unsigned int hash_77;
unsigned int it_78;
struct sFun* __result_obj__46;
struct sFun* __result_obj__47;
struct sFun* __result_obj__48;
struct sFun* __result_obj__49;
default_value_76 = (void*)0;
    memset(&default_value_76,0,sizeof(struct sFun*));
    hash_77=string_get_hash_key(((char*)key))%self->size;
    it_78=hash_77;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_78]        ) {
            if(            string_equals(self->keys[it_78],key)            ) {
                __result_obj__46 = (struct sFun*)come_increment_ref_count(self->items[it_78]);
                come_call_finalizer(sFun_finalize, default_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__46;
            }
            it_78++;
            if(            it_78>=self->size            ) {
                it_78=0;
            }
            else if(            it_78==hash_77            ) {
                __result_obj__47 = (struct sFun*)come_increment_ref_count(default_value_76);
                come_call_finalizer(sFun_finalize, default_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__47;
            }
        }
        else {
            __result_obj__48 = (struct sFun*)come_increment_ref_count(default_value_76);
            come_call_finalizer(sFun_finalize, default_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__48;
        }
    }
    __result_obj__49 = (struct sFun*)come_increment_ref_count(default_value_76);
    come_call_finalizer(sFun_finalize, default_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_85;
char* __result_obj__51;
char* __result_obj__52;
char* result_86;
char* __result_obj__53;
result_85 = (void*)0;
result_86 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_85,0,sizeof(char*));
        __result_obj__51 = result_85;
        return __result_obj__51;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__52 = self->it->item;
        return __result_obj__52;
    }
    memset(&result_86,0,sizeof(char*));
    __result_obj__53 = result_86;
    return __result_obj__53;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_88;
char* __result_obj__54;
char* __result_obj__55;
char* result_89;
char* __result_obj__56;
result_88 = (void*)0;
result_89 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_88,0,sizeof(char*));
        __result_obj__54 = result_88;
        return __result_obj__54;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__55 = self->it->item;
        return __result_obj__55;
    }
    memset(&result_89,0,sizeof(char*));
    __result_obj__56 = result_89;
    return __result_obj__56;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_92;
int i_93;
struct sType* __result_obj__57;
struct sType* default_value_94;
struct sType* __result_obj__58;
default_value_94 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_92=self->head;
    i_93=0;
    while(    it_92!=((void*)0)    ) {
        if(        position==i_93        ) {
            __result_obj__57 = (struct sType*)come_increment_ref_count(it_92->item);
            come_call_finalizer(sType_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__57;
        }
        it_92=it_92->next;
        i_93++;
    }
    memset(&default_value_94,0,sizeof(struct sType*));
    __result_obj__58 = (struct sType*)come_increment_ref_count(default_value_94);
    come_call_finalizer(sType_finalize, default_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_95;
int i_96;
struct sType* __result_obj__59;
struct sType* default_value_97;
struct sType* __result_obj__60;
default_value_97 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_95=self->head;
    i_96=0;
    while(    it_95!=((void*)0)    ) {
        if(        position==i_96        ) {
            __result_obj__59 = (struct sType*)come_increment_ref_count(it_95->item);
            come_call_finalizer(sType_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__59;
        }
        it_95=it_95->next;
        i_96++;
    }
    memset(&default_value_97,0,sizeof(struct sType*));
    __result_obj__60 = (struct sType*)come_increment_ref_count(default_value_97);
    come_call_finalizer(sType_finalize, default_value_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value106 = (void*)0;
struct list_item$1CVALUE$ph* litem_109;
struct CVALUE* __dec_obj44;
void* __right_value107 = (void*)0;
struct list_item$1CVALUE$ph* litem_110;
struct CVALUE* __dec_obj45;
void* __right_value108 = (void*)0;
struct list_item$1CVALUE$ph* litem_111;
struct CVALUE* __dec_obj46;
struct list$1CVALUE$ph* __result_obj__61;
    if(    self->len==0    ) {
        litem_109=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value106=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1045, "struct list_item$1CVALUE$ph*"))));
        litem_109->prev=((void*)0);
        litem_109->next=((void*)0);
        __dec_obj44=litem_109->item,
        litem_109->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_109;
        self->head=litem_109;
    }
    else if(    self->len==1    ) {
        litem_110=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value107=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1055, "struct list_item$1CVALUE$ph*"))));
        litem_110->prev=self->head;
        litem_110->next=((void*)0);
        __dec_obj45=litem_110->item,
        litem_110->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_110;
        self->head->next=litem_110;
    }
    else {
        litem_111=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value108=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1065, "struct list_item$1CVALUE$ph*"))));
        litem_111->prev=self->tail;
        litem_111->next=((void*)0);
        __dec_obj46=litem_111->item,
        litem_111->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_111;
        self->tail=litem_111;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_116;
struct sNode* __result_obj__63;
struct sNode* __result_obj__64;
struct sNode* result_117;
struct sNode* __result_obj__65;
result_116 = (void*)0;
result_117 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_116,0,sizeof(struct sNode*));
        __result_obj__63 = result_116;
        return __result_obj__63;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__64 = self->it->item;
        return __result_obj__64;
    }
    memset(&result_117,0,sizeof(struct sNode*));
    __result_obj__65 = result_117;
    return __result_obj__65;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_119;
struct sNode* __result_obj__66;
struct sNode* __result_obj__67;
struct sNode* result_120;
struct sNode* __result_obj__68;
result_119 = (void*)0;
result_120 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_119,0,sizeof(struct sNode*));
        __result_obj__66 = result_119;
        return __result_obj__66;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__67 = self->it->item;
        return __result_obj__67;
    }
    memset(&result_120,0,sizeof(struct sNode*));
    __result_obj__68 = result_120;
    return __result_obj__68;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value131 = (void*)0;
struct list_item$1CVALUE$ph* litem_124;
struct CVALUE* __dec_obj49;
void* __right_value132 = (void*)0;
struct list_item$1CVALUE$ph* litem_125;
struct CVALUE* __dec_obj50;
void* __right_value133 = (void*)0;
struct list_item$1CVALUE$ph* litem_126;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__70;
    if(    self->len==0    ) {
        litem_124=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value131=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1115, "struct list_item$1CVALUE$ph*"))));
        litem_124->prev=((void*)0);
        litem_124->next=((void*)0);
        __dec_obj49=litem_124->item,
        litem_124->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_124;
        self->head=litem_124;
    }
    else if(    self->len==1    ) {
        litem_125=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value132=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1125, "struct list_item$1CVALUE$ph*"))));
        litem_125->prev=self->head;
        litem_125->next=((void*)0);
        __dec_obj50=litem_125->item,
        litem_125->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_125;
        self->head->next=litem_125;
    }
    else {
        litem_126=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value133=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1135, "struct list_item$1CVALUE$ph*"))));
        litem_126->prev=self->tail;
        litem_126->next=((void*)0);
        __dec_obj51=litem_126->item,
        litem_126->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_126;
        self->tail=litem_126;
    }
    self->len++;
    __result_obj__70 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__70;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value277 = (void*)0;
struct sNewChannel* __result_obj__80;
    ((struct sNodeBase*)(__right_value277=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value277, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__80 = (struct sNewChannel*)come_increment_ref_count(self);
    come_call_finalizer(sNewChannel_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNewChannel_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value278 = (void*)0;
char* __result_obj__81;
    __result_obj__81 = (char*)come_increment_ref_count(((char*)(__right_value278=__builtin_string("sNewChannel"))));
    (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value279 = (void*)0;
struct sNode* node_169;
_Bool Value_170;
_Bool __result_obj__82;
_Bool __result_obj__83;
    node_169=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_170=node_compile(node_169,info);
    if(    !Value_170    ) {
        __result_obj__82 = (_Bool)0;
        ((node_169) ? node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__82;
    }
    else {
    }
    __result_obj__83 = (_Bool)1;
    ((node_169) ? node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__83;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value280 = (void*)0;
struct sNode* __dec_obj85;
struct sNode* __dec_obj86;
struct sWriteChannelNode* __result_obj__84;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj85=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj86=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__84 = (struct sWriteChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sWriteChannelNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sWriteChannelNode_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value281 = (void*)0;
char* __result_obj__85;
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value281=__builtin_string("sWriteChannelNode"))));
    (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_171;
void* __right_value282 = (void*)0;
struct CVALUE* come_value_172;
_Bool Value_173;
_Bool __result_obj__86;
void* __right_value283 = (void*)0;
struct CVALUE* right_value_174;
struct sType* right_type_175;
void* __right_value284 = (void*)0;
struct sType* left_type_176;
struct sType* channel_type_177;
void* __right_value285 = (void*)0;
_Bool __result_obj__87;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct buffer* buf_179;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct CVALUE* come_value2_180;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj87;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__88;
    Value_171=node_compile(self->exp,info);
    if(    !Value_171    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_172=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_173=node_compile(self->right_value,info);
    if(    !Value_173    ) {
        __result_obj__86 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, come_value_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__86;
    }
    else {
    }
    right_value_174=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_175=right_value_174->type;
    left_type_176=(struct sType*)come_increment_ref_count(sType_clone(come_value_172->type));
    channel_type_177=(struct sType*)come_increment_ref_count(left_type_176->mChannelType);
    static int var_num_178=0;
    var_num_178++;
    if(    right_value_174->type->mHeap    ) {
        ((struct tuple2$2int$bool$*)(__right_value285=err_msg(info,"channel can't get heap type")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value285, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__87 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, channel_type_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__87;
    }
    buf_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 786, "struct buffer*"))));
    buffer_append_format(buf_179,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_178,((char*)(__right_value288=make_type_name_string(channel_type_177,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_format(buf_179,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value289=make_type_name_string(channel_type_177,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_178,var_num_178);
    (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_format(buf_179,"*__channel_p%d = %s;\n",var_num_178,right_value_174->c_value);
    add_come_code(info,((char*)(__right_value290=buffer_to_string(buf_179))));
    (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_value2_180=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 794, "struct CVALUE*"))));
    __dec_obj87=come_value2_180->c_value,
    come_value2_180->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_172->c_value,var_num_178,((char*)(__right_value293=make_type_name_string(channel_type_177,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj88=come_value2_180->type,
    come_value2_180->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 798, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_180->type->mPointerNum=1;
    come_value2_180->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_180));
    add_come_last_code(info,"%s",come_value2_180->c_value);
    __result_obj__88 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, channel_type_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__88;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value298 = (void*)0;
struct sNode* __dec_obj89;
struct sReadChannelNode* __result_obj__89;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value298, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj89=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__89 = (struct sReadChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sReadChannelNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sReadChannelNode_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value299 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value299=__builtin_string("sReadChannelNode"))));
    (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__90;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_181;
_Bool Value_182;
_Bool __result_obj__91;
void* __right_value300 = (void*)0;
struct CVALUE* come_value_183;
void* __right_value301 = (void*)0;
struct sType* var_type_184;
void* __right_value302 = (void*)0;
_Bool __result_obj__92;
struct sType* channel_type_185;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value2_187;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __dec_obj90;
void* __right_value309 = (void*)0;
struct sType* __dec_obj91;
_Bool __result_obj__93;
    exp_181=(struct sNode*)come_increment_ref_count(self->exp);
    Value_182=node_compile(exp_181,info);
    if(    !Value_182    ) {
        __result_obj__91 = (_Bool)0;
        ((exp_181) ? exp_181 = come_decrement_ref_count(exp_181, ((struct sNode*)exp_181)->finalize, ((struct sNode*)exp_181)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__91;
    }
    else {
    }
    come_value_183=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type_184=(struct sType*)come_increment_ref_count(sType_clone(come_value_183->type));
    if(    !var_type_184->mChannel    ) {
        ((struct tuple2$2int$bool$*)(__right_value302=err_msg(info,"require right type is channel")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value302, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__92 = (_Bool)1;
        ((exp_181) ? exp_181 = come_decrement_ref_count(exp_181, ((struct sNode*)exp_181)->finalize, ((struct sNode*)exp_181)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, var_type_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__92;
    }
    channel_type_185=(struct sType*)come_increment_ref_count(var_type_184->mChannelType);
    static int var_num_186=0;
    var_num_186++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_186,((char*)(__right_value303=make_type_name_string(channel_type_185,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_value2_187=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 849, "struct CVALUE*"))));
    __dec_obj90=come_value2_187->c_value,
    come_value2_187->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_183->c_value,var_num_186,((char*)(__right_value306=make_type_name_string(channel_type_185,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value307=make_type_name_string(channel_type_185,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_186));
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj91=come_value2_187->type,
    come_value2_187->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type_185));
    come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_187->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_187));
    add_come_last_code(info,"%s",come_value2_187->c_value);
    __result_obj__93 = (_Bool)1;
    ((exp_181) ? exp_181 = come_decrement_ref_count(exp_181, ((struct sNode*)exp_181)->finalize, ((struct sNode*)exp_181)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, var_type_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, channel_type_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__93;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma){
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value321 = (void*)0;
struct sNode* __result_obj__96;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 866, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value312=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 866, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf("")),comma,(_Bool)0))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__96 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value321=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sStoreNode_finalize, __right_value312, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value321) ? __right_value321 = come_decrement_ref_count(__right_value321, ((struct sNode*)__right_value321)->finalize, ((struct sNode*)__right_value321)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__96) ? __result_obj__96 = come_decrement_ref_count(__result_obj__96, ((struct sNode*)__result_obj__96)->finalize, ((struct sNode*)__result_obj__96)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__96;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__94;
void* __right_value313 = (void*)0;
struct sStoreNode* result_188;
void* __right_value314 = (void*)0;
char* __dec_obj92;
void* __right_value315 = (void*)0;
char* __dec_obj93;
void* __right_value316 = (void*)0;
struct sType* __dec_obj94;
void* __right_value317 = (void*)0;
struct sNode* __dec_obj95;
void* __right_value318 = (void*)0;
struct list$1char$ph* __dec_obj96;
void* __right_value319 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj97;
void* __right_value320 = (void*)0;
char* __dec_obj98;
struct sStoreNode* __result_obj__95;
    if(    self==(void*)0    ) {
        __result_obj__94 = (void*)0;
        return __result_obj__94;
    }
    result_188=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(    self!=((void*)0)    ) {
        result_188->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj92=result_188->sname,
        result_188->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_188->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj93=result_188->name,
        result_188->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_188->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj94=result_188->type,
        result_188->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        __dec_obj95=result_188->right_value,
        result_188->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)    ) {
        __dec_obj96=result_188->multiple_assign,
        result_188->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        __dec_obj97=result_188->multiple_declare,
        result_188->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)    ) {
        __dec_obj98=result_188->attribute,
        result_188->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_188->comma=self->comma;
    }
    if(    self!=((void*)0)    ) {
        result_188->val_=self->val_;
    }
    __result_obj__95 = result_188;
    come_call_finalizer(sStoreNode_finalize, result_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* __dec_obj99;
struct sLoadNode* __result_obj__97;
    ((struct sNodeBase*)(__right_value322=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value322, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj99=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->on_load_calling=(_Bool)0;
    __result_obj__97 = (struct sLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadNode_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value324 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value324=__builtin_string("sLoadNode"))));
    (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__98;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_189;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
_Bool _condtional_value_X9;
struct sVar* parent_var_190;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_191;
struct sType* type_192;
void* __right_value329 = (void*)0;
char* __dec_obj100;
void* __right_value330 = (void*)0;
char* __dec_obj101;
void* __right_value331 = (void*)0;
struct sType* __dec_obj102;
_Bool __result_obj__99;
struct sVar* var__193;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sFun* fun_194;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_195;
void* __right_value337 = (void*)0;
char* __dec_obj103;
struct sType* __dec_obj104;
_Bool __result_obj__100;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct CVALUE* come_value_196;
void* __right_value341 = (void*)0;
char* __dec_obj105;
void* __right_value342 = (void*)0;
struct sType* __dec_obj106;
void* __right_value343 = (void*)0;
struct sType* __dec_obj107;
void* __right_value344 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var2 = (void*)0;
char* fun_name_199=0;
struct sFun* fun_200=0;
struct sGenericsFun* generics_fun_201=0;
void* __right_value345 = (void*)0;
void* __right_value349 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct tuple2$2char$phsNode$ph* __list_values1___203[1];
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_210;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* _inf_value3;
struct sLoadNode* _inf_obj_value3;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sNode* node_211;
_Bool Value_212;
_Bool __result_obj__107;
_Bool __result_obj__108;
    current_stack_frame_struct_189=info->current_stack_frame_struct;
    if(    (_condtional_value_X9=(current_stack_frame_struct_189&&((struct sVar*)(__right_value326=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value325=__builtin_string(self->name))),((void*)0))))==((void*)0))),    (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    come_call_finalizer(sVar_finalize, __right_value326, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X9    ) {
        parent_var_190=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_190!=((void*)0)        ) {
            if(            string_operator_not_equals(parent_var_190->mFunName,info->come_fun->mName)            ) {
                come_value_191=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 897, "struct CVALUE*"))));
                type_192=parent_var_190->mType;
                if(                parent_var_190->mType->mOriginIsArray                ) {
                    __dec_obj100=come_value_191->c_value,
                    come_value_191->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_190->mCValueName));
                    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj101=come_value_191->c_value,
                    come_value_191->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_190->mCValueName));
                    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                __dec_obj102=come_value_191->type,
                come_value_191->type=(struct sType*)come_increment_ref_count(sType_clone(type_192));
                come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value_191->var=((void*)0);
                add_come_last_code(info,"%s",come_value_191->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
                __result_obj__99 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__99;
                come_call_finalizer(CVALUE_finalize, come_value_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    var__193=get_variable_from_table(info->lv_table,self->name);
    if(    var__193==((void*)0)    ) {
        var__193=get_variable_from_table(info->gv_table,self->name);
        if(        var__193==((void*)0)        ) {
            fun_194=((struct sFun*)(__right_value334=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value333=__builtin_string(self->name))))));
            (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value334, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            fun_194            ) {
                come_value_195=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 929, "struct CVALUE*"))));
                __dec_obj103=come_value_195->c_value,
                come_value_195->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_194->mName));
                __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj104=come_value_195->type,
                come_value_195->type=(struct sType*)come_increment_ref_count(fun_194->mLambdaType);
                come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value_195->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
                __result_obj__100 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__100;
                come_call_finalizer(CVALUE_finalize, come_value_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value338=err_msg(info,"var not found(%s)(Z) at loading variable",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                return (_Bool)1;
            }
        }
    }
    come_value_196=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 946, "struct CVALUE*"))));
    __dec_obj105=come_value_196->c_value,
    come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__193->mCValueName));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj106=come_value_196->type,
    come_value_196->type=(struct sType*)come_increment_ref_count(sType_clone(var__193->mType));
    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_196->var=var__193;
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
    if(    list$1sNode$ph_length(come_value_196->type->mArrayNum)==1    ) {
        __dec_obj107=come_value_196->type->mOriginalLoadVarType,
        come_value_196->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_196->type));
        come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1sNode$ph_reset(come_value_196->type->mArrayNum);
        come_value_196->type->mPointerNum++;
        come_value_196->type->mOriginalTypeNamePointerNum=come_value_196->type->mPointerNum;
    }
    if(    !self->on_load_calling&&string_operator_not_equals(self->name,"self")    ) {
        self->on_load_calling=(_Bool)1;
        multiple_assign_var2=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value344=get_method("on_load",(struct sType*)come_increment_ref_count(come_value_196->type),info)));
        fun_name_199=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        fun_200=multiple_assign_var2->v2;
        generics_fun_201=multiple_assign_var2->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value344, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_200        ) {
            ((struct CVALUE*)(__right_value345=get_value_from_stack(-1,info)));
            come_call_finalizer(CVALUE_finalize, __right_value345, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 969, "struct sNode");
            _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count((((struct sLoadNode*)(__right_value349=sLoadNode_clone(self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadNode_finalize;
            _inf_value2->clone=(void*)sLoadNode_clone;
            _inf_value2->compile=(void*)sLoadNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sLoadNode_terminated;
            _inf_value2->kind=(void*)sLoadNode_kind;
            _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
            params_210=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((__list_values1___203[0]=((struct tuple2$2char$phsNode$ph*)(__right_value352=tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 969, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(_inf_value2)))),
list$1tuple2$2char$phsNode$ph$ph_initialize_with_values((struct list$1tuple2$2char$phsNode$ph$ph**)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 969, "struct list$1tuple2$2char$phsNode$ph$ph")),1,__list_values1___203)));
            come_call_finalizer(sLoadNode_finalize, __right_value349, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __right_value352, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 970, "struct sNode");
            _inf_obj_value3=(struct sLoadNode*)come_increment_ref_count((((struct sLoadNode*)(__right_value359=sLoadNode_clone(self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLoadNode_finalize;
            _inf_value3->clone=(void*)sLoadNode_clone;
            _inf_value3->compile=(void*)sLoadNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sLoadNode_terminated;
            _inf_value3->kind=(void*)sLoadNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            node_211=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value358=xsprintf("on_load"))),(struct sNode*)come_increment_ref_count(_inf_value3),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_210),((void*)0),0,((void*)0),info,(_Bool)0));
            (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sLoadNode_finalize, __right_value359, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_212=node_compile(node_211,info);
            if(            !Value_212            ) {
                __result_obj__107 = (_Bool)0;
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_199 = come_decrement_ref_count(fun_name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__107;
            }
            else {
            }
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (fun_name_199 = come_decrement_ref_count(fun_name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__108 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static void sLoadNode_finalize(struct sLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_197;
struct list_item$1sNode$ph* prev_it_198;
struct list$1sNode$ph* __result_obj__101;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__102;
void* __right_value346 = (void*)0;
struct sLoadNode* result_202;
void* __right_value347 = (void*)0;
char* __dec_obj108;
void* __right_value348 = (void*)0;
char* __dec_obj109;
struct sLoadNode* __result_obj__103;
    if(    self==(void*)0    ) {
        __result_obj__102 = (void*)0;
        return __result_obj__102;
    }
    result_202=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(    self!=((void*)0)    ) {
        result_202->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj108=result_202->sname,
        result_202->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_202->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj109=result_202->name,
        result_202->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_202->on_load_calling=self->on_load_calling;
    }
    __result_obj__103 = result_202;
    come_call_finalizer(sLoadNode_finalize, result_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj110;
struct sNode* __dec_obj111;
struct tuple2$2char$phsNode$ph* __result_obj__104;
    __dec_obj110=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj111=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__104 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize_with_values(struct list$1tuple2$2char$phsNode$ph$ph* self, int num_value, struct tuple2$2char$phsNode$ph** values){
int i_204;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__106;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0    ;    i_204<num_value    ;    i_204++    ){
        list$1tuple2$2char$phsNode$ph$ph_push_back(self,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(values[i_204]));
    }
    __result_obj__106 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value353 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_205;
struct tuple2$2char$phsNode$ph* __dec_obj112;
void* __right_value354 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_206;
struct tuple2$2char$phsNode$ph* __dec_obj113;
void* __right_value355 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_207;
struct tuple2$2char$phsNode$ph* __dec_obj114;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__105;
    if(    self->len==0    ) {
        litem_205=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value353=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1115, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        __dec_obj112=litem_205->item,
        litem_205->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj112,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1    ) {
        litem_206=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value354=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1125, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        __dec_obj113=litem_206->item,
        litem_206->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj113,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value355=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1135, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        __dec_obj114=litem_207->item,
        litem_207->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__105 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__105;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_208;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_209;
    it_208=self->head;
    while(    it_208!=((void*)0)    ) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* __right_value365 = (void*)0;
struct sNode* node_213;
struct sNode* __result_obj__109;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 984, "struct sNode");
    _inf_obj_value4=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value364=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 984, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sLoadNode_finalize;
    _inf_value4->clone=(void*)sLoadNode_clone;
    _inf_value4->compile=(void*)sLoadNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sLoadNode_terminated;
    _inf_value4->kind=(void*)sLoadNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node_213=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sLoadNode_finalize, __right_value364, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__109 = (struct sNode*)come_increment_ref_count(node_213);
    ((node_213) ? node_213 = come_decrement_ref_count(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__109) ? __result_obj__109 = come_decrement_ref_count(__result_obj__109, ((struct sNode*)__result_obj__109)->finalize, ((struct sNode*)__result_obj__109)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__109;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __dec_obj115;
struct sFunLoadNode* __result_obj__110;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value366, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj115=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__110 = (struct sFunLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunLoadNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFunLoadNode_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value368 = (void*)0;
char* __result_obj__111;
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value368=__builtin_string("sFunLoadNode"))));
    (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sFun* fun_214;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_215;
void* __right_value375 = (void*)0;
char* __dec_obj116;
struct sType* __dec_obj117;
    fun_214=((struct sFun*)(__right_value371=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value370=__builtin_string(self->name))))));
    (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value371, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_214==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value372=err_msg(info,"fun not found(%s) at loading variable",self->name)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value372, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        return (_Bool)1;
    }
    else {
        come_value_215=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1012, "struct CVALUE*"))));
        __dec_obj116=come_value_215->c_value,
        come_value_215->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_214->mName));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj117=come_value_215->type,
        come_value_215->type=(struct sType*)come_increment_ref_count(fun_214->mLambdaType);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_215->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_215));
        come_call_finalizer(CVALUE_finalize, come_value_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value376 = (void*)0;
void* __right_value387 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj123;
struct sArrayInitializer* __result_obj__118;
    ((struct sNodeBase*)(__right_value376=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value376, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj123=self->initializer,
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(initializer));
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph_finalize, __dec_obj123,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__118 = (struct sArrayInitializer*)come_increment_ref_count(self);
    come_call_finalizer(sArrayInitializer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sArrayInitializer_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value388 = (void*)0;
char* __result_obj__119;
    __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value388=__builtin_string("sArrayInitializer"))));
    (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_226;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* buf_227;
int i_228;
struct sType* element_type_229;
struct list$1tuple2$2sNode$phsNode$ph$ph* o2_saved_230;
struct tuple2$2sNode$phsNode$ph* it_233;
struct tuple2$2sNode$phsNode$ph* multiple_assign_var3 = (void*)0;
struct sNode* index_236=0;
struct sNode* value_237=0;
struct CVALUE* come_value_238;
_Bool Value_239;
_Bool __result_obj__126;
void* __right_value391 = (void*)0;
struct CVALUE* __dec_obj124;
_Bool Value_240;
_Bool __result_obj__127;
void* __right_value392 = (void*)0;
struct CVALUE* come_value2_241;
void* __right_value393 = (void*)0;
struct sType* __dec_obj125;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_242;
void* __right_value396 = (void*)0;
char* __dec_obj126;
void* __right_value397 = (void*)0;
struct sType* __dec_obj127;
_Bool __result_obj__128;
    initializer_226=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1043, "struct buffer*"))));
    buffer_append_str(buf_227,"{");
    i_228=0;
    element_type_229=((void*)0);
    for(    o2_saved_230=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((initializer_226)),it_233=list$1tuple2$2sNode$phsNode$ph$ph_begin((o2_saved_230))    ;    !list$1tuple2$2sNode$phsNode$ph$ph_end((o2_saved_230))    ;    it_233=list$1tuple2$2sNode$phsNode$ph$ph_next((o2_saved_230))    ){
        multiple_assign_var3=it_233;
        index_236=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v1);
        value_237=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        come_value_238=((void*)0);
        if(        index_236        ) {
            Value_239=node_compile(index_236,info);
            if(            !Value_239            ) {
                __result_obj__126 = (_Bool)0;
                ((index_236) ? index_236 = come_decrement_ref_count(index_236, ((struct sNode*)index_236)->finalize, ((struct sNode*)index_236)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((value_237) ? value_237 = come_decrement_ref_count(value_237, ((struct sNode*)value_237)->finalize, ((struct sNode*)value_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, o2_saved_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, element_type_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__126;
            }
            else {
            }
            __dec_obj124=come_value_238,
            come_value_238=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer(CVALUE_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        Value_240=node_compile(value_237,info);
        if(        !Value_240        ) {
            __result_obj__127 = (_Bool)0;
            ((index_236) ? index_236 = come_decrement_ref_count(index_236, ((struct sNode*)index_236)->finalize, ((struct sNode*)index_236)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((value_237) ? value_237 = come_decrement_ref_count(value_237, ((struct sNode*)value_237)->finalize, ((struct sNode*)value_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, o2_saved_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, element_type_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__127;
        }
        else {
        }
        come_value2_241=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj125=element_type_229,
        element_type_229=(struct sType*)come_increment_ref_count(sType_clone(come_value2_241->type));
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        come_value_238        ) {
            buffer_append_format(buf_227,"[%s] = %s",come_value_238->c_value,come_value2_241->c_value);
        }
        else {
            buffer_append_str(buf_227,come_value2_241->c_value);
        }
        i_228++;
        if(        i_228!=list$1tuple2$2sNode$phsNode$ph$ph_length(initializer_226)        ) {
            buffer_append_str(buf_227,",");
        }
        ((index_236) ? index_236 = come_decrement_ref_count(index_236, ((struct sNode*)index_236)->finalize, ((struct sNode*)index_236)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((value_237) ? value_237 = come_decrement_ref_count(value_237, ((struct sNode*)value_237)->finalize, ((struct sNode*)value_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, o2_saved_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_227,"}");
    come_value_242=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1080, "struct CVALUE*"))));
    __dec_obj126=come_value_242->c_value,
    come_value_242->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_227));
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj127=come_value_242->type,
    come_value_242->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_229));
    come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_242->type->mPointerNum++;
    come_value_242->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_242));
    __result_obj__128 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, element_type_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__112;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_218;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_219;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__117;
    if(    self==((void*)0)    ) {
        __result_obj__112 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__112;
    }
    result_218=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1026, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    it_219=self->head;
    while(    it_219!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_218,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_219->item)));
        }
        else {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_218,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_219->item)));
        }
        it_219=it_219->next;
    }
    __result_obj__117 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(result_218);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, result_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_216;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_217;
    it_216=self->head;
    while(    it_216!=((void*)0)    ) {
        prev_it_217=it_216;
        it_216=it_216->next;
        come_call_finalizer(list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, prev_it_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__113 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __right_value379 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_220;
struct tuple2$2sNode$phsNode$ph* __dec_obj118;
void* __right_value380 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_221;
struct tuple2$2sNode$phsNode$ph* __dec_obj119;
void* __right_value381 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_222;
struct tuple2$2sNode$phsNode$ph* __dec_obj120;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__114;
    if(    self->len==0    ) {
        litem_220=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value379=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1045, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_220->prev=((void*)0);
        litem_220->next=((void*)0);
        __dec_obj118=litem_220->item,
        litem_220->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_220;
        self->head=litem_220;
    }
    else if(    self->len==1    ) {
        litem_221=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value380=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1055, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_221->prev=self->head;
        litem_221->next=((void*)0);
        __dec_obj119=litem_221->item,
        litem_221->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __dec_obj119,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_221;
        self->head->next=litem_221;
    }
    else {
        litem_222=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value381=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1065, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_222->prev=self->tail;
        litem_222->next=((void*)0);
        __dec_obj120=litem_222->item,
        litem_222->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __dec_obj120,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_222;
        self->tail=litem_222;
    }
    self->len++;
    __result_obj__114 = self;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
struct tuple2$2sNode$phsNode$ph* __result_obj__115;
void* __right_value382 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_223;
void* __right_value383 = (void*)0;
struct sNode* __dec_obj121;
void* __right_value384 = (void*)0;
struct sNode* __dec_obj122;
struct tuple2$2sNode$phsNode$ph* __result_obj__116;
    if(    self==(void*)0    ) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__115;
    }
    result_223=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj121=result_223->v1,
        result_223->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj122=result_223->v2,
        result_223->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__116 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(result_223);
    come_call_finalizer(tuple2$2sNode$phsNode$ph_finalize, result_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_224;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_225;
    it_224=self->head;
    while(    it_224!=((void*)0)    ) {
        prev_it_225=it_224;
        it_224=it_224->next;
        come_call_finalizer(list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, prev_it_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_231;
struct tuple2$2sNode$phsNode$ph* __result_obj__120;
struct tuple2$2sNode$phsNode$ph* __result_obj__121;
struct tuple2$2sNode$phsNode$ph* result_232;
struct tuple2$2sNode$phsNode$ph* __result_obj__122;
result_231 = (void*)0;
result_232 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_231,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__120 = result_231;
        return __result_obj__120;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__121 = self->it->item;
        return __result_obj__121;
    }
    memset(&result_232,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__122 = result_232;
    return __result_obj__122;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_234;
struct tuple2$2sNode$phsNode$ph* __result_obj__123;
struct tuple2$2sNode$phsNode$ph* __result_obj__124;
struct tuple2$2sNode$phsNode$ph* result_235;
struct tuple2$2sNode$phsNode$ph* __result_obj__125;
result_234 = (void*)0;
result_235 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_234,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__123 = result_234;
        return __result_obj__123;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__124 = self->it->item;
        return __result_obj__124;
    }
    memset(&result_235,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__125 = result_235;
    return __result_obj__125;
}

static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_243;
void* __right_value400 = (void*)0;
struct sNode* index_244;
_Bool no_comma_245;
void* __right_value401 = (void*)0;
struct sNode* exp_246;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
_Bool no_comma_247;
void* __right_value404 = (void*)0;
struct sNode* exp_248;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sNode* index_249;
_Bool no_comma_250;
void* __right_value408 = (void*)0;
struct sNode* exp_251;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
_Bool no_comma_252;
void* __right_value411 = (void*)0;
struct sNode* exp_253;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sNode* _inf_value5;
struct sArrayInitializer* _inf_obj_value5;
void* __right_value419 = (void*)0;
struct sNode* __result_obj__133;
    expected_next_character(123,info);
    initializer_243=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1098, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    if(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        index_244=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        no_comma_245=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_246=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_245;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_243,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1118, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_244),(struct sNode*)come_increment_ref_count(exp_246))));
        ((index_244) ? index_244 = come_decrement_ref_count(index_244, ((struct sNode*)index_244)->finalize, ((struct sNode*)index_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((exp_246) ? exp_246 = come_decrement_ref_count(exp_246, ((struct sNode*)exp_246)->finalize, ((struct sNode*)exp_246)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        no_comma_247=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_248=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_247;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_243,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1126, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_248))));
        ((exp_248) ? exp_248 = come_decrement_ref_count(exp_248, ((struct sNode*)exp_248)->finalize, ((struct sNode*)exp_248)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    *info->p==44    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            break;
        }
        if(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            index_249=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            if(            *info->p==61            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            no_comma_250=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_251=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_250;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_243,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1157, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_249),(struct sNode*)come_increment_ref_count(exp_251))));
            ((index_249) ? index_249 = come_decrement_ref_count(index_249, ((struct sNode*)index_249)->finalize, ((struct sNode*)index_249)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp_251) ? exp_251 = come_decrement_ref_count(exp_251, ((struct sNode*)exp_251)->finalize, ((struct sNode*)exp_251)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            no_comma_252=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_253=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_252;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_243,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1165, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_253))));
            ((exp_253) ? exp_253 = come_decrement_ref_count(exp_253, ((struct sNode*)exp_253)->finalize, ((struct sNode*)exp_253)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1171, "struct sNode");
    _inf_obj_value5=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value415=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1171, "struct sArrayInitializer*")),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_243),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sArrayInitializer_finalize;
    _inf_value5->clone=(void*)sArrayInitializer_clone;
    _inf_value5->compile=(void*)sArrayInitializer_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sArrayInitializer_kind;
    _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__133 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value419=_inf_value5)));
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sArrayInitializer_finalize, __right_value415, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value419) ? __right_value419 = come_decrement_ref_count(__right_value419, ((struct sNode*)__right_value419)->finalize, ((struct sNode*)__right_value419)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__133;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2){
struct sNode* __dec_obj128;
struct sNode* __dec_obj129;
struct tuple2$2sNode$phsNode$ph* __result_obj__129;
    __dec_obj128=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj129=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__129 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj130;
struct tuple2$2void$psNode$ph* __result_obj__130;
    self->v1=v1;
    __dec_obj130=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__130 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
struct sArrayInitializer* __result_obj__131;
void* __right_value416 = (void*)0;
struct sArrayInitializer* result_254;
void* __right_value417 = (void*)0;
char* __dec_obj131;
void* __right_value418 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj132;
struct sArrayInitializer* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__131 = (void*)0;
        return __result_obj__131;
    }
    result_254=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*"));
    if(    self!=((void*)0)    ) {
        result_254->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj131=result_254->sname,
        result_254->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sArrayInitializer_clone", 5, "char*"));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_254->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        __dec_obj132=result_254->initializer,
        result_254->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__132 = result_254;
    come_call_finalizer(sArrayInitializer_finalize, result_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value420 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj138;
struct sStructInitializer* __result_obj__140;
    ((struct sNodeBase*)(__right_value420=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value420, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj138=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(initializer));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj138,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__140 = (struct sStructInitializer*)come_increment_ref_count(self);
    come_call_finalizer(sStructInitializer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sStructInitializer_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value432 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("sStructInitializer"))));
    (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_263;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct buffer* buf_264;
int i_265;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_266;
struct tuple2$2char$phsNode$ph* it_269;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* name_272=0;
struct sNode* value_273=0;
_Bool Value_274;
_Bool __result_obj__148;
void* __right_value435 = (void*)0;
struct CVALUE* come_value2_275;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_276;
void* __right_value438 = (void*)0;
char* __dec_obj139;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sType* __dec_obj140;
_Bool __result_obj__149;
    initializer_263=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_264=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1192, "struct buffer*"))));
    buffer_append_str(buf_264,"{");
    i_265=0;
    for(    o2_saved_266=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_263)),it_269=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_266))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_266))    ;    it_269=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_266))    ){
        multiple_assign_var4=it_269;
        name_272=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        value_273=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
        Value_274=node_compile(value_273,info);
        if(        !Value_274        ) {
            __result_obj__148 = (_Bool)0;
            (name_272 = come_decrement_ref_count(name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((value_273) ? value_273 = come_decrement_ref_count(value_273, ((struct sNode*)value_273)->finalize, ((struct sNode*)value_273)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, buf_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__148;
        }
        else {
        }
        come_value2_275=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        name_272        ) {
            buffer_append_format(buf_264,".%s = %s",name_272,come_value2_275->c_value);
        }
        else {
            buffer_append_format(buf_264,"%s",come_value2_275->c_value);
        }
        i_265++;
        if(        i_265!=list$1tuple2$2char$phsNode$ph$ph_length(initializer_263)        ) {
            buffer_append_str(buf_264,",");
        }
        (name_272 = come_decrement_ref_count(name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((value_273) ? value_273 = come_decrement_ref_count(value_273, ((struct sNode*)value_273)->finalize, ((struct sNode*)value_273)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_264,"}");
    come_value_276=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1218, "struct CVALUE*"))));
    __dec_obj139=come_value_276->c_value,
    come_value_276->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_264));
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj140=come_value_276->type,
    come_value_276->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 1221, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj140,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_276->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_276));
    __result_obj__149 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__149;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__134;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_255;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_256;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__134 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__134;
    }
    result_255=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1026, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_256=self->head;
    while(    it_256!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_255,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_256->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_255,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_256->item)));
        }
        it_256=it_256->next;
    }
    __result_obj__139 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_255);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__135;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__135 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value423 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_257;
struct tuple2$2char$phsNode$ph* __dec_obj133;
void* __right_value424 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_258;
struct tuple2$2char$phsNode$ph* __dec_obj134;
void* __right_value425 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_259;
struct tuple2$2char$phsNode$ph* __dec_obj135;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__136;
    if(    self->len==0    ) {
        litem_257=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value423=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1045, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_257->prev=((void*)0);
        litem_257->next=((void*)0);
        __dec_obj133=litem_257->item,
        litem_257->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj133,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_257;
        self->head=litem_257;
    }
    else if(    self->len==1    ) {
        litem_258=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value424=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1055, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_258->prev=self->head;
        litem_258->next=((void*)0);
        __dec_obj134=litem_258->item,
        litem_258->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj134,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_258;
        self->head->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value425=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1065, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_259->prev=self->tail;
        litem_259->next=((void*)0);
        __dec_obj135=litem_259->item,
        litem_259->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj135,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_259;
        self->tail=litem_259;
    }
    self->len++;
    __result_obj__136 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__137;
void* __right_value426 = (void*)0;
struct tuple2$2char$phsNode$ph* result_260;
void* __right_value427 = (void*)0;
char* __dec_obj136;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj137;
struct tuple2$2char$phsNode$ph* __result_obj__138;
    if(    self==(void*)0    ) {
        __result_obj__137 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__137;
    }
    result_260=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj136=result_260->v1,
        result_260->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj137=result_260->v2,
        result_260->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__138 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_260);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_261;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_262;
    it_261=self->head;
    while(    it_261!=((void*)0)    ) {
        prev_it_262=it_261;
        it_261=it_261->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_267;
struct tuple2$2char$phsNode$ph* __result_obj__142;
struct tuple2$2char$phsNode$ph* __result_obj__143;
struct tuple2$2char$phsNode$ph* result_268;
struct tuple2$2char$phsNode$ph* __result_obj__144;
result_267 = (void*)0;
result_268 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_267,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__142 = result_267;
        return __result_obj__142;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__143 = self->it->item;
        return __result_obj__143;
    }
    memset(&result_268,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__144 = result_268;
    return __result_obj__144;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_270;
struct tuple2$2char$phsNode$ph* __result_obj__145;
struct tuple2$2char$phsNode$ph* __result_obj__146;
struct tuple2$2char$phsNode$ph* result_271;
struct tuple2$2char$phsNode$ph* __result_obj__147;
result_270 = (void*)0;
result_271 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_270,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__145 = result_270;
        return __result_obj__145;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__146 = self->it->item;
        return __result_obj__146;
    }
    memset(&result_271,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__147 = result_271;
    return __result_obj__147;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_277;
void* __right_value444 = (void*)0;
char* name_278;
_Bool no_comma_279;
void* __right_value445 = (void*)0;
struct sNode* exp_280;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
_Bool no_comma_281;
void* __right_value448 = (void*)0;
struct sNode* exp_282;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
char* name_283;
_Bool no_comma_284;
void* __right_value452 = (void*)0;
struct sNode* exp_285;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
_Bool no_comma_286;
void* __right_value455 = (void*)0;
struct sNode* exp_287;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sNode* _inf_value6;
struct sStructInitializer* _inf_obj_value6;
void* __right_value463 = (void*)0;
struct sNode* __result_obj__152;
    expected_next_character(123,info);
    initializer_277=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1234, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    if(    *info->p==46    ) {
        info->p++;
        skip_spaces_and_lf(info);
        name_278=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        no_comma_279=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_280=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_279;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_277,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1252, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_278),(struct sNode*)come_increment_ref_count(exp_280))));
        (name_278 = come_decrement_ref_count(name_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((exp_280) ? exp_280 = come_decrement_ref_count(exp_280, ((struct sNode*)exp_280)->finalize, ((struct sNode*)exp_280)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        no_comma_281=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_282=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_281;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_277,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1260, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_282))));
        ((exp_282) ? exp_282 = come_decrement_ref_count(exp_282, ((struct sNode*)exp_282)->finalize, ((struct sNode*)exp_282)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    *info->p==44    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            break;
        }
        if(        *info->p==46        ) {
            info->p++;
            skip_spaces_and_lf(info);
            name_283=(char*)come_increment_ref_count(parse_word(info));
            if(            *info->p==61            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            no_comma_284=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_285=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_284;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_277,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1289, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_283),(struct sNode*)come_increment_ref_count(exp_285))));
            (name_283 = come_decrement_ref_count(name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((exp_285) ? exp_285 = come_decrement_ref_count(exp_285, ((struct sNode*)exp_285)->finalize, ((struct sNode*)exp_285)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            no_comma_286=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_287=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_286;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_277,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1297, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_287))));
            ((exp_287) ? exp_287 = come_decrement_ref_count(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1303, "struct sNode");
    _inf_obj_value6=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value459=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1303, "struct sStructInitializer*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_277),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sStructInitializer_finalize;
    _inf_value6->clone=(void*)sStructInitializer_clone;
    _inf_value6->compile=(void*)sStructInitializer_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sStructInitializer_kind;
    _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__152 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value463=_inf_value6)));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sStructInitializer_finalize, __right_value459, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value463) ? __right_value463 = come_decrement_ref_count(__right_value463, ((struct sNode*)__right_value463)->finalize, ((struct sNode*)__right_value463)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__152) ? __result_obj__152 = come_decrement_ref_count(__result_obj__152, ((struct sNode*)__result_obj__152)->finalize, ((struct sNode*)__result_obj__152)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__152;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
struct sStructInitializer* __result_obj__150;
void* __right_value460 = (void*)0;
struct sStructInitializer* result_288;
void* __right_value461 = (void*)0;
char* __dec_obj141;
void* __right_value462 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj142;
struct sStructInitializer* __result_obj__151;
    if(    self==(void*)0    ) {
        __result_obj__150 = (void*)0;
        return __result_obj__150;
    }
    result_288=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*"));
    if(    self!=((void*)0)    ) {
        result_288->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj141=result_288->sname,
        result_288->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructInitializer_clone", 5, "char*"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_288->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        __dec_obj142=result_288->initializer,
        result_288->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj142,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__151 = result_288;
    come_call_finalizer(sStructInitializer_finalize, result_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma){
void* __right_value464 = (void*)0;
struct sVar* self_289;
void* __right_value465 = (void*)0;
char* __dec_obj143;
void* __right_value466 = (void*)0;
struct sType* __dec_obj144;
void* __right_value467 = (void*)0;
char* __dec_obj145;
void* __right_value468 = (void*)0;
char* __dec_obj146;
void* __right_value469 = (void*)0;
char* __dec_obj147;
void* __right_value470 = (void*)0;
char* __dec_obj148;
char* __dec_obj149;
void* __right_value479 = (void*)0;
    self_289=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1308, "struct sVar*"));
    __dec_obj143=self_289->mName,
    self_289->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj144=self_289->mType,
    self_289->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    if(    function_param    ) {
        __dec_obj145=self_289->mCValueName,
        self_289->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    type->mRegister    ) {
        __dec_obj146=self_289->mCValueName,
        self_289->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        static int n_290=0;
        __dec_obj147=self_289->mCValueName,
        self_289->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_290++));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    self_289->mAllocaValue=(_Bool)0;
    self_289->mNoFree=(_Bool)0;
    if(    info->come_fun    ) {
        __dec_obj148=self_289->mFunName,
        self_289->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "07var.c", 1327, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj149=self_289->mFunName,
        self_289->mFunName=((void*)0);
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    self_289->mComma=comma;
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_289));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, self_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_306;
unsigned int it_307;
_Bool same_key_exist_308;
char* it2_309;
struct map$2char$phsVar$ph* __result_obj__160;
    if(    self->len*10>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_306=string_get_hash_key(((char*)key))%self->size;
    it_307=hash_306;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_307]        ) {
            if(            string_equals(self->keys[it_307],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_307]);
                    (self->keys[it_307] = come_decrement_ref_count(self->keys[it_307], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_307]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_307]);
                    self->keys[it_307]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_307], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_307]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_307]=item;
                }
                break;
            }
            it_307++;
            if(            it_307>=self->size            ) {
                it_307=0;
            }
            else if(            it_307==hash_306            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_307]=(_Bool)1;
            if(            1            ) {
                self->keys[it_307]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_307]=key;
            }
            if(            1            ) {
                self->items[it_307]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_307]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_308=(_Bool)0;
    for(    it2_309=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_309=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_309,key)        ) {
            same_key_exist_308=(_Bool)1;
        }
    }
    if(    !same_key_exist_308    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__160 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__160;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_291;
void* __right_value471 = (void*)0;
char** keys_292;
void* __right_value472 = (void*)0;
struct sVar** items_293;
void* __right_value473 = (void*)0;
_Bool* item_existance_294;
int len_295;
char* it_298;
struct sVar* default_value_301;
void* __right_value474 = (void*)0;
struct sVar* it2_302;
unsigned int hash_303;
int n_304;
struct sVar* default_value_305;
void* __right_value475 = (void*)0;
default_value_301 = (void*)0;
default_value_305 = (void*)0;
    size_291=self->size*10;
    keys_292=(char**)come_increment_ref_count(((char**)(__right_value471=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_291)), "./comelang.h", 2181, "char**"))));
    items_293=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value472=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_291)), "./comelang.h", 2182, "struct sVar**"))));
    item_existance_294=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value473=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_291)), "./comelang.h", 2183, "_Bool*"))));
    len_295=0;
    for(    it_298=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_298=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_301,0,sizeof(struct sVar*));
        it2_302=((struct sVar*)(__right_value474=map$2char$phsVar$ph_at(self,it_298,(struct sVar*)come_increment_ref_count(default_value_301))));
        come_call_finalizer(sVar_finalize, __right_value474, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_303=string_get_hash_key(((char*)it_298))%size_291;
        n_304=hash_303;
        while(        (_Bool)1        ) {
            if(            item_existance_294[n_304]            ) {
                n_304++;
                if(                n_304>=size_291                ) {
                    n_304=0;
                }
                else if(                n_304==hash_303                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_294[n_304]=(_Bool)1;
                keys_292[n_304]=it_298;
                items_293[n_304]=((struct sVar*)(__right_value475=map$2char$phsVar$ph_at(self,it_298,(struct sVar*)come_increment_ref_count(default_value_305))));
                come_call_finalizer(sVar_finalize, __right_value475, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_295++;
                come_call_finalizer(sVar_finalize, default_value_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_292;
    self->items=items_293;
    self->item_existance=item_existance_294;
    self->size=size_291;
    self->len=len_295;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_296;
char* __result_obj__153;
char* __result_obj__154;
char* result_297;
char* __result_obj__155;
result_296 = (void*)0;
result_297 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_296,0,sizeof(char*));
        __result_obj__153 = result_296;
        return __result_obj__153;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__154 = self->key_list->it->item;
        return __result_obj__154;
    }
    memset(&result_297,0,sizeof(char*));
    __result_obj__155 = result_297;
    return __result_obj__155;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_299;
char* __result_obj__156;
char* __result_obj__157;
char* result_300;
char* __result_obj__158;
result_299 = (void*)0;
result_300 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_299,0,sizeof(char*));
        __result_obj__156 = result_299;
        return __result_obj__156;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__157 = self->key_list->it->item;
        return __result_obj__157;
    }
    memset(&result_300,0,sizeof(char*));
    __result_obj__158 = result_300;
    return __result_obj__158;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value476 = (void*)0;
struct list_item$1char$ph* litem_310;
char* __dec_obj150;
void* __right_value477 = (void*)0;
struct list_item$1char$ph* litem_311;
char* __dec_obj151;
void* __right_value478 = (void*)0;
struct list_item$1char$ph* litem_312;
char* __dec_obj152;
struct list$1char$ph* __result_obj__159;
    if(    self->len==0    ) {
        litem_310=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value476=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_310->prev=((void*)0);
        litem_310->next=((void*)0);
        __dec_obj150=litem_310->item,
        litem_310->item=(char*)come_increment_ref_count(item);
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_310;
        self->head=litem_310;
    }
    else if(    self->len==1    ) {
        litem_311=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value477=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_311->prev=self->head;
        litem_311->next=((void*)0);
        __dec_obj151=litem_311->item,
        litem_311->item=(char*)come_increment_ref_count(item);
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_311;
        self->head->next=litem_311;
    }
    else {
        litem_312=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value478=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_312->prev=self->tail;
        litem_312->next=((void*)0);
        __dec_obj152=litem_312->item,
        litem_312->item=(char*)come_increment_ref_count(item);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_312;
        self->tail=litem_312;
    }
    self->len++;
    __result_obj__159 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__159;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value480 = (void*)0;
struct sVar* self_313;
void* __right_value481 = (void*)0;
char* __dec_obj153;
void* __right_value482 = (void*)0;
struct sType* __dec_obj154;
void* __right_value483 = (void*)0;
char* __dec_obj155;
void* __right_value484 = (void*)0;
    self_313=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1340, "struct sVar*"));
    __dec_obj153=self_313->mName,
    self_313->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj154=self_313->mType,
    self_313->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self_313->mGlobal=(_Bool)1;
    __dec_obj155=self_313->mCValueName,
    self_313->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self_313->mAllocaValue=(_Bool)0;
    self_313->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_313));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, self_313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value485 = (void*)0;
struct sVar* self_314;
void* __right_value486 = (void*)0;
char* __dec_obj156;
void* __right_value487 = (void*)0;
struct sType* __dec_obj157;
void* __right_value488 = (void*)0;
char* __dec_obj158;
void* __right_value489 = (void*)0;
    self_314=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1357, "struct sVar*"));
    __dec_obj156=self_314->mName,
    self_314->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj157=self_314->mType,
    self_314->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self_314->mGlobal=(_Bool)1;
    __dec_obj158=self_314->mCValueName,
    self_314->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self_314->mAllocaValue=(_Bool)0;
    self_314->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_314));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, self_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real_315;
_Bool is_type_name_flag_316;
_Bool multiple_declare_317;
char* p_318;
int sline_319;
void* __right_value490 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* type_320=0;
char* name_321=0;
_Bool err_322=0;
void* __right_value491 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type_323=0;
char* name_324=0;
void* __right_value492 = (void*)0;
_Bool no_output_err_325;
_Bool no_comma_326;
_Bool no_output_come_code_327;
void* __right_value493 = (void*)0;
struct sNode* exp_328;
_Bool attr_define_329;
char* p_330;
int sline_331;
void* __right_value494 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* type_332=0;
char* name_333=0;
_Bool err_334=0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sFun* fun_335;
_Bool val__336;
void* __right_value498 = (void*)0;
char* buf2_337;
struct list$1char$ph* multiple_assign_338;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1char$ph* __dec_obj159;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
char* buf3_339;
void* __right_value503 = (void*)0;
_Bool no_comma_340;
void* __right_value504 = (void*)0;
struct sNode* right_value_341;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj160;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value510 = (void*)0;
struct sNode* node_342;
struct sNode* __result_obj__161;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sNode* _inf_value8;
struct sNewChannel* _inf_obj_value8;
void* __right_value516 = (void*)0;
struct sNode* node_343;
struct sNode* __result_obj__164;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_345;
void* __right_value519 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* base_type_346=0;
char* name_347=0;
_Bool err_348=0;
void* __right_value520 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* type2_349=0;
char* var_name_350=0;
_Bool no_comma_351;
void* __right_value521 = (void*)0;
struct sNode* exp_352;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
_Bool no_comma_356;
void* __right_value527 = (void*)0;
struct sNode* exp_357;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var10 = (void*)0;
struct sType* type2_358=0;
char* var_name_359=0;
_Bool no_comma_360;
void* __right_value533 = (void*)0;
struct sNode* exp_361;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
_Bool no_comma_362;
void* __right_value536 = (void*)0;
struct sNode* exp_363;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sNode* right_node_364;
void* __right_value541 = (void*)0;
char* var_name2_365;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value546 = (void*)0;
struct sNode* node_366;
struct sNode* __result_obj__168;
void* __right_value547 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_367=0;
char* name_368=0;
_Bool err_369=0;
void* __right_value548 = (void*)0;
char* __dec_obj170;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value557 = (void*)0;
struct sNode* self_node_373;
void* __right_value558 = (void*)0;
struct sNode* right_node_374;
void* __right_value559 = (void*)0;
struct sNode* node_375;
struct sNode* __result_obj__171;
void* __right_value560 = (void*)0;
struct sNode* __result_obj__172;
void* __right_value561 = (void*)0;
struct sNode* right_value_376;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* _inf_value11;
struct sStoreNode* _inf_obj_value11;
void* __right_value567 = (void*)0;
struct sNode* node_377;
struct sNode* __result_obj__173;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value574 = (void*)0;
struct sNode* node_378;
void* __right_value575 = (void*)0;
struct sNode* __dec_obj177;
struct sNode* __result_obj__174;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* _inf_value13;
struct sLoadNode* _inf_obj_value13;
void* __right_value579 = (void*)0;
struct sNode* node_379;
void* __right_value580 = (void*)0;
struct sNode* __dec_obj178;
struct sNode* __result_obj__175;
char* word_380;
void* __right_value581 = (void*)0;
char* __dec_obj179;
void* __right_value582 = (void*)0;
char* __dec_obj180;
_Bool is_type_name_flag_381;
void* __right_value583 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_382=0;
char* name_383=0;
_Bool err_384=0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sNode* _inf_value14;
struct sLoadNode* _inf_obj_value14;
void* __right_value586 = (void*)0;
struct sNode* node_385;
struct sNode* __result_obj__176;
struct sNode* right_value_386;
_Bool no_comma_387;
void* __right_value587 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj182;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value590 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sNode* _inf_value15;
struct sStoreNode* _inf_obj_value15;
void* __right_value594 = (void*)0;
struct sNode* node_388;
struct sNode* __result_obj__177;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value16;
struct sStoreNode* _inf_obj_value16;
void* __right_value598 = (void*)0;
struct sNode* node_389;
struct sNode* __result_obj__178;
void* __right_value599 = (void*)0;
word_380 = (void*)0;
    sline_real_315=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_316=is_type_name(buf,info);
    multiple_declare_317=(_Bool)0;
    if(    is_type_name_flag_316    ) {
        p_318=info->p;
        sline_319=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            parse_sharp_v5(info);
            multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value490=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_320=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_321=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_322=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value490, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            err_322            ) {
                parse_sharp_v5(info);
                multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value491=parse_variable_name((struct sType*)come_increment_ref_count(type_320),(_Bool)1,info)));
                type_323=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                name_324=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value491, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123                    ) {
                        ((char*)(__right_value492=skip_block(info,(_Bool)0)));
                        (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    else {
                        no_output_err_325=info->no_output_err;
                        no_comma_326=info->no_comma;
                        no_output_come_code_327=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_328=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_326;
                        info->no_output_err=no_output_err_325;
                        info->no_output_come_code=no_output_come_code_327;
                        ((exp_328) ? exp_328 = come_decrement_ref_count(exp_328, ((struct sNode*)exp_328)->finalize, ((struct sNode*)exp_328)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_324,info)&&*info->p==44                ) {
                    multiple_declare_317=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_324 = come_decrement_ref_count(name_324, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_320, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_321 = come_decrement_ref_count(name_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_318;
        info->sline=sline_319;
    }
    attr_define_329=(_Bool)0;
    if(    is_type_name_flag_316&&info->defining_class    ) {
        p_330=info->p;
        sline_331=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value494=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_332=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_333=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_334=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value494, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        err_334&&parsecmp("self",info)        ) {
            attr_define_329=(_Bool)1;
        }
        info->p=p_330;
        info->sline=sline_331;
        come_call_finalizer(sType_finalize, type_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_333 = come_decrement_ref_count(name_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_335=((struct sFun*)(__right_value497=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value496=__builtin_string(buf))))));
    (__right_value495 = come_decrement_ref_count(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value497, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    (!gComeC&&(charp_operator_equals(buf,"var")||charp_operator_equals(buf,"val")))||charp_operator_equals(buf,"auto")    ) {
        val__336=(_Bool)0;
        if(        charp_operator_equals(buf,"val")        ) {
            val__336=(_Bool)1;
        }
        parse_sharp_v5(info);
        buf2_337=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_338=((void*)0);
        if(        *info->p==44        ) {
            __dec_obj159=multiple_assign_338,
            multiple_assign_338=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1470, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj159,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1char$ph_push_back(multiple_assign_338,(char*)come_increment_ref_count((char*)come_memdup(buf2_337, "07var.c", 1471, "char*")));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_339=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph_push_back(multiple_assign_338,(char*)come_increment_ref_count((char*)come_memdup(buf3_339, "07var.c", 1481, "char*")));
                (buf3_339 = come_decrement_ref_count(buf3_339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_340=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_341=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_340;
            parse_sharp_v5(info);
            __dec_obj160=right_value_341,
            right_value_341=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_341),info));
            (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1500, "struct sNode");
            _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value509=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1500, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2_337)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_338),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_341),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,val__336))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sStoreNode_finalize;
            _inf_value7->clone=(void*)sStoreNode_clone;
            _inf_value7->compile=(void*)sStoreNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sStoreNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            node_342=(struct sNode*)come_increment_ref_count(_inf_value7);
            come_call_finalizer(sStoreNode_finalize, __right_value509, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_315;
            __result_obj__161 = (struct sNode*)come_increment_ref_count(node_342);
            ((right_value_341) ? right_value_341 = come_decrement_ref_count(right_value_341, ((struct sNode*)right_value_341)->finalize, ((struct sNode*)right_value_341)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_342) ? node_342 = come_decrement_ref_count(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf2_337 = come_decrement_ref_count(buf2_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, multiple_assign_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((__result_obj__161) ? __result_obj__161 = come_decrement_ref_count(__result_obj__161, ((struct sNode*)__result_obj__161)->finalize, ((struct sNode*)__result_obj__161)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__161;
            ((right_value_341) ? right_value_341 = come_decrement_ref_count(right_value_341, ((struct sNode*)right_value_341)->finalize, ((struct sNode*)right_value_341)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_342) ? node_342 = come_decrement_ref_count(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value511=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value511, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(1);
        }
        (buf2_337 = come_decrement_ref_count(buf2_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, multiple_assign_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")    ) {
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1510, "struct sNode");
        _inf_obj_value8=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value513=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "07var.c", 1510, "struct sNewChannel*")),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sNewChannel_finalize;
        _inf_value8->clone=(void*)sNewChannel_clone;
        _inf_value8->compile=(void*)sNewChannel_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sNewChannel_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        node_343=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer(sNewChannel_finalize, __right_value513, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_315;
        __result_obj__164 = (struct sNode*)come_increment_ref_count(node_343);
        ((node_343) ? node_343 = come_decrement_ref_count(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__164) ? __result_obj__164 = come_decrement_ref_count(__result_obj__164, ((struct sNode*)__result_obj__164)->finalize, ((struct sNode*)__result_obj__164)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__164;
        ((node_343) ? node_343 = come_decrement_ref_count(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    multiple_declare_317    ) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_345=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1518, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value519=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_346=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_347=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_348=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value519, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        !err_348        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value520=parse_variable_name((struct sType*)come_increment_ref_count(base_type_346),(_Bool)1,info)));
        type2_349=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        var_name_350=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value520, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_349->mClass->mStruct&&list$1sNode$ph_length(type2_349->mArrayNum)==0            ) {
                info->struct_initializer=(_Bool)1;
                no_comma_351=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_352=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_351;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_345,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1545, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_349),(char*)come_increment_ref_count(var_name_350),(struct sNode*)come_increment_ref_count(exp_352))));
                ((exp_352) ? exp_352 = come_decrement_ref_count(exp_352, ((struct sNode*)exp_352)->finalize, ((struct sNode*)exp_352)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_356=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_357=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_356;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_345,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1555, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_349),(char*)come_increment_ref_count(var_name_350),(struct sNode*)come_increment_ref_count(exp_357))));
                ((exp_357) ? exp_357 = come_decrement_ref_count(exp_357, ((struct sNode*)exp_357)->finalize, ((struct sNode*)exp_357)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_345,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1559, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_349),(char*)come_increment_ref_count(var_name_350),((void*)0))));
        }
        while(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var10=((struct tuple2$2sType$phchar$ph*)(__right_value532=parse_variable_name((struct sType*)come_increment_ref_count(base_type_346),(_Bool)0,info)));
            type2_358=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            var_name_359=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value532, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==61            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_358->mClass->mStruct&&list$1sNode$ph_length(type2_358->mArrayNum)==0                ) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_360=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_361=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_360;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_345,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1581, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_358),(char*)come_increment_ref_count(var_name_359),(struct sNode*)come_increment_ref_count(exp_361))));
                    ((exp_361) ? exp_361 = come_decrement_ref_count(exp_361, ((struct sNode*)exp_361)->finalize, ((struct sNode*)exp_361)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    no_comma_362=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_363=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_362;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_345,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1593, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_358),(char*)come_increment_ref_count(var_name_359),(struct sNode*)come_increment_ref_count(exp_363))));
                    ((exp_363) ? exp_363 = come_decrement_ref_count(exp_363, ((struct sNode*)exp_363)->finalize, ((struct sNode*)exp_363)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_345,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1597, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_358),(char*)come_increment_ref_count(var_name_359),((void*)0))));
            }
            come_call_finalizer(sType_finalize, type2_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_359 = come_decrement_ref_count(var_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        right_node_364=((void*)0);
        var_name2_365=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1604, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value545=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1604, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_345),(struct sType*)come_increment_ref_count(base_type_346),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        node_366=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer(sStoreNode_finalize, __right_value545, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_315;
        __result_obj__168 = (struct sNode*)come_increment_ref_count(node_366);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, base_type_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_347 = come_decrement_ref_count(name_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_349, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_350 = come_decrement_ref_count(var_name_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((right_node_364) ? right_node_364 = come_decrement_ref_count(right_node_364, ((struct sNode*)right_node_364)->finalize, ((struct sNode*)right_node_364)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (var_name2_365 = come_decrement_ref_count(var_name2_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_366) ? node_366 = come_decrement_ref_count(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__168;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, base_type_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_347 = come_decrement_ref_count(name_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_349, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_350 = come_decrement_ref_count(var_name_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((right_node_364) ? right_node_364 = come_decrement_ref_count(right_node_364, ((struct sNode*)right_node_364)->finalize, ((struct sNode*)right_node_364)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (var_name2_365 = come_decrement_ref_count(var_name2_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_366) ? node_366 = come_decrement_ref_count(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    attr_define_329    ) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value547=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_367=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        name_368=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        err_369=multiple_assign_var11->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value547, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        !err_369        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj170=name_368,
        name_368=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1627, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_368),(struct sType*)come_increment_ref_count(type_367))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1635, "struct sNode");
            _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value556=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1635, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sLoadNode_finalize;
            _inf_value10->clone=(void*)sLoadNode_clone;
            _inf_value10->compile=(void*)sLoadNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sLoadNode_terminated;
            _inf_value10->kind=(void*)sLoadNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            self_node_373=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer(sLoadNode_finalize, __right_value556, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            right_node_374=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_375=(struct sNode*)come_increment_ref_count(store_field(self_node_373,(struct sNode*)come_increment_ref_count(right_node_374),(char*)come_increment_ref_count(name_368),info));
            info->sline_real=sline_real_315;
            __result_obj__171 = (struct sNode*)come_increment_ref_count(node_375);
            ((self_node_373) ? self_node_373 = come_decrement_ref_count(self_node_373, ((struct sNode*)self_node_373)->finalize, ((struct sNode*)self_node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((right_node_374) ? right_node_374 = come_decrement_ref_count(right_node_374, ((struct sNode*)right_node_374)->finalize, ((struct sNode*)right_node_374)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_375) ? node_375 = come_decrement_ref_count(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_368 = come_decrement_ref_count(name_368, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__171) ? __result_obj__171 = come_decrement_ref_count(__result_obj__171, ((struct sNode*)__result_obj__171)->finalize, ((struct sNode*)__result_obj__171)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__171;
            ((self_node_373) ? self_node_373 = come_decrement_ref_count(self_node_373, ((struct sNode*)self_node_373)->finalize, ((struct sNode*)self_node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((right_node_374) ? right_node_374 = come_decrement_ref_count(right_node_374, ((struct sNode*)right_node_374)->finalize, ((struct sNode*)right_node_374)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_375) ? node_375 = come_decrement_ref_count(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real_315;
            __result_obj__172 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value560=create_null_node(info))));
            come_call_finalizer(sType_finalize, type_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_368 = come_decrement_ref_count(name_368, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__right_value560) ? __right_value560 = come_decrement_ref_count(__right_value560, ((struct sNode*)__right_value560)->finalize, ((struct sNode*)__right_value560)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__172;
        }
        come_call_finalizer(sType_finalize, type_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_368 = come_decrement_ref_count(name_368, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    !is_type_name_flag_316&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_376=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj176=right_value_376,
        right_value_376=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_376),info));
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1660, "struct sNode");
        _inf_obj_value11=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value566=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1660, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_376),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sStoreNode_finalize;
        _inf_value11->clone=(void*)sStoreNode_clone;
        _inf_value11->compile=(void*)sStoreNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sStoreNode_kind;
        _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
        node_377=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer(sStoreNode_finalize, __right_value566, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_315;
        __result_obj__173 = (struct sNode*)come_increment_ref_count(node_377);
        ((right_value_376) ? right_value_376 = come_decrement_ref_count(right_value_376, ((struct sNode*)right_value_376)->finalize, ((struct sNode*)right_value_376)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node_377) ? node_377 = come_decrement_ref_count(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__173;
        ((right_value_376) ? right_value_376 = come_decrement_ref_count(right_value_376, ((struct sNode*)right_value_376)->finalize, ((struct sNode*)right_value_376)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node_377) ? node_377 = come_decrement_ref_count(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    (_condtional_value_X10=(!is_type_name_flag_316||((struct sFun*)(__right_value570=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value569=__builtin_string(buf)))))))),    (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value569 = come_decrement_ref_count(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    come_call_finalizer(sFun_finalize, __right_value570, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X10    ) {
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1665, "struct sNode");
        _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value573=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1665, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sLoadNode_finalize;
        _inf_value12->clone=(void*)sLoadNode_clone;
        _inf_value12->compile=(void*)sLoadNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sLoadNode_terminated;
        _inf_value12->kind=(void*)sLoadNode_kind;
        _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
        node_378=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer(sLoadNode_finalize, __right_value573, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj177=node_378,
        node_378=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_378),info));
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->sline_real=sline_real_315;
        __result_obj__174 = (struct sNode*)come_increment_ref_count(node_378);
        ((node_378) ? node_378 = come_decrement_ref_count(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__174) ? __result_obj__174 = come_decrement_ref_count(__result_obj__174, ((struct sNode*)__result_obj__174)->finalize, ((struct sNode*)__result_obj__174)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__174;
        ((node_378) ? node_378 = come_decrement_ref_count(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !is_type_name_flag_316    ) {
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1674, "struct sNode");
        _inf_obj_value13=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value578=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1674, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sLoadNode_finalize;
        _inf_value13->clone=(void*)sLoadNode_clone;
        _inf_value13->compile=(void*)sLoadNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sLoadNode_terminated;
        _inf_value13->kind=(void*)sLoadNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        node_379=(struct sNode*)come_increment_ref_count(_inf_value13);
        come_call_finalizer(sLoadNode_finalize, __right_value578, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj178=node_379,
        node_379=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_379),info));
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->sline_real=sline_real_315;
        __result_obj__175 = (struct sNode*)come_increment_ref_count(node_379);
        ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__175;
        ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            __dec_obj179=word_380,
            word_380=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj180=word_380,
            word_380=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        is_type_name_flag_381=is_type_name(word_380,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_381        ) {
            parse_sharp_v5(info);
            multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value583=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_382=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
            name_383=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            err_384=multiple_assign_var12->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value583, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            !err_384            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign            ) {
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1711, "struct sNode");
                _inf_obj_value14=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value585=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1711, "struct sLoadNode*")),(char*)come_increment_ref_count(name_383),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sLoadNode_finalize;
                _inf_value14->clone=(void*)sLoadNode_clone;
                _inf_value14->compile=(void*)sLoadNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sLoadNode_terminated;
                _inf_value14->kind=(void*)sLoadNode_kind;
                _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
                node_385=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer(sLoadNode_finalize, __right_value585, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                info->sline_real=sline_real_315;
                __result_obj__176 = (struct sNode*)come_increment_ref_count(node_385);
                ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_383 = come_decrement_ref_count(name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (word_380 = come_decrement_ref_count(word_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__176) ? __result_obj__176 = come_decrement_ref_count(__result_obj__176, ((struct sNode*)__result_obj__176)->finalize, ((struct sNode*)__result_obj__176)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__176;
                ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_386=((void*)0);
                if(                type_382->mClass->mStruct&&list$1sNode$ph_length(type_382->mArrayNum)==0                ) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_387=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj181=right_value_386,
                    right_value_386=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    info->no_comma=no_comma_387;
                    info->struct_initializer=(_Bool)0;
                }
                else if(                list$1sNode$ph_length(type_382->mArrayNum)>0||type_382->mArrayPointerType                ) {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj182=right_value_386,
                    right_value_386=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                else {
                    parse_sharp_v5(info);
                    __dec_obj183=right_value_386,
                    right_value_386=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    parse_sharp_v5(info);
                }
                __dec_obj184=right_value_386,
                right_value_386=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_386),info));
                (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1746, "struct sNode");
                _inf_obj_value15=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value593=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1746, "struct sStoreNode*")),(char*)come_increment_ref_count(name_383),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_382),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_386),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sStoreNode_finalize;
                _inf_value15->clone=(void*)sStoreNode_clone;
                _inf_value15->compile=(void*)sStoreNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sStoreNode_kind;
                _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
                node_388=(struct sNode*)come_increment_ref_count(_inf_value15);
                come_call_finalizer(sStoreNode_finalize, __right_value593, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                info->sline_real=sline_real_315;
                __result_obj__177 = (struct sNode*)come_increment_ref_count(node_388);
                ((right_value_386) ? right_value_386 = come_decrement_ref_count(right_value_386, ((struct sNode*)right_value_386)->finalize, ((struct sNode*)right_value_386)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((node_388) ? node_388 = come_decrement_ref_count(node_388, ((struct sNode*)node_388)->finalize, ((struct sNode*)node_388)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_383 = come_decrement_ref_count(name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (word_380 = come_decrement_ref_count(word_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__177) ? __result_obj__177 = come_decrement_ref_count(__result_obj__177, ((struct sNode*)__result_obj__177)->finalize, ((struct sNode*)__result_obj__177)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__177;
                ((right_value_386) ? right_value_386 = come_decrement_ref_count(right_value_386, ((struct sNode*)right_value_386)->finalize, ((struct sNode*)right_value_386)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((node_388) ? node_388 = come_decrement_ref_count(node_388, ((struct sNode*)node_388)->finalize, ((struct sNode*)node_388)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1751, "struct sNode");
                _inf_obj_value16=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value597=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1751, "struct sStoreNode*")),(char*)come_increment_ref_count(name_383),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_382),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sStoreNode_finalize;
                _inf_value16->clone=(void*)sStoreNode_clone;
                _inf_value16->compile=(void*)sStoreNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sline_real=(void*)sNodeBase_sline_real;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sNodeBase_terminated;
                _inf_value16->kind=(void*)sStoreNode_kind;
                _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
                node_389=(struct sNode*)come_increment_ref_count(_inf_value16);
                come_call_finalizer(sStoreNode_finalize, __right_value597, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                info->sline_real=sline_real_315;
                __result_obj__178 = (struct sNode*)come_increment_ref_count(node_389);
                ((node_389) ? node_389 = come_decrement_ref_count(node_389, ((struct sNode*)node_389)->finalize, ((struct sNode*)node_389)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_383 = come_decrement_ref_count(name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (word_380 = come_decrement_ref_count(word_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__178;
                ((node_389) ? node_389 = come_decrement_ref_count(node_389, ((struct sNode*)node_389)->finalize, ((struct sNode*)node_389)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            come_call_finalizer(sType_finalize, type_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_383 = come_decrement_ref_count(name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (word_380 = come_decrement_ref_count(word_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    ((struct tuple2$2int$bool$*)(__right_value599=err_msg(info,"unexpected word(%s)(1)",buf)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value599, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
struct sNewChannel* __result_obj__162;
void* __right_value514 = (void*)0;
struct sNewChannel* result_344;
void* __right_value515 = (void*)0;
char* __dec_obj161;
struct sNewChannel* __result_obj__163;
    if(    self==(void*)0    ) {
        __result_obj__162 = (void*)0;
        return __result_obj__162;
    }
    result_344=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(    self!=((void*)0)    ) {
        result_344->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj161=result_344->sname,
        result_344->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_344->sline_real=self->sline_real;
    }
    __result_obj__163 = result_344;
    come_call_finalizer(sNewChannel_finalize, result_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__163;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value522 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_353;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj162;
void* __right_value523 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_354;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj163;
void* __right_value524 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_355;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj164;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__165;
    if(    self->len==0    ) {
        litem_353=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value522=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1115, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_353->prev=((void*)0);
        litem_353->next=((void*)0);
        __dec_obj162=litem_353->item,
        litem_353->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj162,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1    ) {
        litem_354=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value523=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1125, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj163=litem_354->item,
        litem_354->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj163,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value524=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1135, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj164=litem_355->item,
        litem_355->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj164,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result_obj__165 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj165;
char* __dec_obj166;
struct sNode* __dec_obj167;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__166;
    __dec_obj165=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj166=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj167=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__166 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3){
struct sType* __dec_obj168;
char* __dec_obj169;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__167;
    __dec_obj168=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj169=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v3=v3;
    __result_obj__167 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value549 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_370;
struct tuple2$2char$phsType$ph* __dec_obj171;
void* __right_value550 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_371;
struct tuple2$2char$phsType$ph* __dec_obj172;
void* __right_value551 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_372;
struct tuple2$2char$phsType$ph* __dec_obj173;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__169;
    if(    self->len==0    ) {
        litem_370=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value549=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1045, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj171=litem_370->item,
        litem_370->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj171,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1    ) {
        litem_371=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value550=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1055, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj172=litem_371->item,
        litem_371->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj172,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value551=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1065, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj173=litem_372->item,
        litem_372->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj173,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result_obj__169 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__169;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj174;
struct sType* __dec_obj175;
struct tuple2$2char$phsType$ph* __result_obj__170;
    __dec_obj174=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj175=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__170 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__170;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node_390;
void* __right_value600 = (void*)0;
struct sNode* exp_391;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* _inf_value17;
struct sReadChannelNode* _inf_obj_value17;
void* __right_value606 = (void*)0;
struct sNode* __result_obj__181;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj187;
struct sNode* __result_obj__182;
node_390 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0    ) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_391=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1777, "struct sNode");
        _inf_obj_value17=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value602=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1777, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp_391),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sReadChannelNode_finalize;
        _inf_value17->clone=(void*)sReadChannelNode_clone;
        _inf_value17->compile=(void*)sReadChannelNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sReadChannelNode_kind;
        _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__181 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value606=_inf_value17)));
        ((exp_391) ? exp_391 = come_decrement_ref_count(exp_391, ((struct sNode*)exp_391)->finalize, ((struct sNode*)exp_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node_390) ? node_390 = come_decrement_ref_count(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sReadChannelNode_finalize, __right_value602, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value606) ? __right_value606 = come_decrement_ref_count(__right_value606, ((struct sNode*)__right_value606)->finalize, ((struct sNode*)__right_value606)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__181;
        ((exp_391) ? exp_391 = come_decrement_ref_count(exp_391, ((struct sNode*)exp_391)->finalize, ((struct sNode*)exp_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        __dec_obj187=node_390,
        node_390=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__182 = (struct sNode*)come_increment_ref_count(node_390);
    ((node_390) ? node_390 = come_decrement_ref_count(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__182;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__179;
void* __right_value603 = (void*)0;
struct sReadChannelNode* result_392;
void* __right_value604 = (void*)0;
char* __dec_obj185;
void* __right_value605 = (void*)0;
struct sNode* __dec_obj186;
struct sReadChannelNode* __result_obj__180;
    if(    self==(void*)0    ) {
        __result_obj__179 = (void*)0;
        return __result_obj__179;
    }
    result_392=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(    self!=((void*)0)    ) {
        result_392->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj185=result_392->sname,
        result_392->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_392->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj186=result_392->exp,
        result_392->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__180 = result_392;
    come_call_finalizer(sReadChannelNode_finalize, result_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__180;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value608 = (void*)0;
struct sNode* right_value_393;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value18;
struct sWriteChannelNode* _inf_obj_value18;
void* __right_value616 = (void*)0;
struct sNode* __result_obj__185;
void* __right_value617 = (void*)0;
struct sNode* __result_obj__186;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_393=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj188=right_value_393,
        right_value_393=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_393),info));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1800, "struct sNode");
        _inf_obj_value18=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value611=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1800, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_393),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value18->clone=(void*)sWriteChannelNode_clone;
        _inf_value18->compile=(void*)sWriteChannelNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sWriteChannelNode_kind;
        _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__185 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value616=_inf_value18)));
        ((right_value_393) ? right_value_393 = come_decrement_ref_count(right_value_393, ((struct sNode*)right_value_393)->finalize, ((struct sNode*)right_value_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sWriteChannelNode_finalize, __right_value611, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value616) ? __right_value616 = come_decrement_ref_count(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__185) ? __result_obj__185 = come_decrement_ref_count(__result_obj__185, ((struct sNode*)__result_obj__185)->finalize, ((struct sNode*)__result_obj__185)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__185;
        ((right_value_393) ? right_value_393 = come_decrement_ref_count(right_value_393, ((struct sNode*)right_value_393)->finalize, ((struct sNode*)right_value_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__186 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value617=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__right_value617) ? __right_value617 = come_decrement_ref_count(__right_value617, ((struct sNode*)__right_value617)->finalize, ((struct sNode*)__right_value617)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__186;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__183;
void* __right_value612 = (void*)0;
struct sWriteChannelNode* result_394;
void* __right_value613 = (void*)0;
char* __dec_obj189;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj191;
struct sWriteChannelNode* __result_obj__184;
    if(    self==(void*)0    ) {
        __result_obj__183 = (void*)0;
        return __result_obj__183;
    }
    result_394=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(    self!=((void*)0)    ) {
        result_394->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj189=result_394->sname,
        result_394->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_394->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj190=result_394->exp,
        result_394->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        __dec_obj191=result_394->right_value,
        result_394->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__184 = result_394;
    come_call_finalizer(sWriteChannelNode_finalize, result_394, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__184;
}

