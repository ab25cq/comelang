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

struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNode$ph* mMethods;
};

struct list_item$1sClass$p
{
    struct sClass* item;
    struct list_item$1sClass$p* prev;
    struct list_item$1sClass$p* next;
};

struct list$1sClass$p
{
    struct list_item$1sClass$p* head;
    struct list_item$1sClass$p* tail;
    int len;
    struct list_item$1sClass$p* it;
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
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
char* get_none_generics_name(char* class_name);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct sType* sType_clone(struct sType* self);
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
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item);
static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item);
static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p_end(struct list$1sClass$p* self);
static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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
void output_struct(struct sClass* klass, struct sInfo* info){
char* name_0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_1;
_Bool existance_generics_2;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_3;
struct tuple2$2char$phsType$ph* it_6;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_9=0;
struct sType* type_10=0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value14 = (void*)0;
    if(    info->no_output_come_code    ) {
        return;
    }
    if(    list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0    ) {
        return;
    }
    name_0=(char*)come_increment_ref_count(klass->mName);
    buf_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 14, "struct buffer*"))));
    buffer_append_format(buf_1,"struct %s\n{\n",klass->mName);
    existance_generics_2=(_Bool)0;
    for(    o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_6=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_3))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_3))    ;    it_6=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_3))    ){
        multiple_assign_var1=it_6;
        name_9=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_10=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_generics_class(type_10,info)        ) {
            existance_generics_2=(_Bool)1;
        }
        type_10->mStatic=(_Bool)0;
        buffer_append_str(buf_1,"    ");
        buffer_append_str(buf_1,((char*)(__right_value2=make_define_var(type_10,name_9,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(buf_1,";\n");
        (name_9 = come_decrement_ref_count(name_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass->mAttribute==((void*)0)    ) {
        buffer_append_str(buf_1,"};\n");
    }
    else {
        buffer_append_format(buf_1,"} %s;\n",klass->mAttribute);
    }
    if(    (_condtional_value_X1=(((struct buffer*)(__right_value5=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value4=__builtin_string(name_0))))))==((void*)0)&&!existance_generics_2)),    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    come_call_finalizer(buffer_finalize, __right_value5, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X1    ) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_0)),(struct buffer*)come_increment_ref_count(buf_1));
    }
    (name_0 = come_decrement_ref_count(name_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_4;
struct tuple2$2char$phsType$ph* __result_obj__1;
struct tuple2$2char$phsType$ph* __result_obj__2;
struct tuple2$2char$phsType$ph* result_5;
struct tuple2$2char$phsType$ph* __result_obj__3;
result_4 = (void*)0;
result_5 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_4,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__1 = result_4;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_5,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__3 = result_5;
    return __result_obj__3;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_7;
struct tuple2$2char$phsType$ph* __result_obj__4;
struct tuple2$2char$phsType$ph* __result_obj__5;
struct tuple2$2char$phsType$ph* result_8;
struct tuple2$2char$phsType$ph* __result_obj__6;
result_7 = (void*)0;
result_8 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_7,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__4 = result_7;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_8,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__6 = result_8;
    return __result_obj__6;
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
struct list_item$1sType$ph* it_11;
struct list_item$1sType$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        prev_it_12=it_11;
        it_11=it_11->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_13;
struct list_item$1sNode$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_15;
struct list_item$1char$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)    ) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_17;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_18;
    it_17=self->head;
    while(    it_17!=((void*)0)    ) {
        prev_it_18=it_17;
        it_17=it_17->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_19;
unsigned int hash_20;
unsigned int it_21;
struct buffer* __result_obj__7;
struct buffer* __result_obj__8;
struct buffer* __result_obj__9;
struct buffer* __result_obj__10;
default_value_19 = (void*)0;
    memset(&default_value_19,0,sizeof(struct buffer*));
    hash_20=string_get_hash_key(((char*)key))%self->size;
    it_21=hash_20;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_21]        ) {
            if(            string_equals(self->keys[it_21],key)            ) {
                __result_obj__7 = (struct buffer*)come_increment_ref_count(self->items[it_21]);
                come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__7;
            }
            it_21++;
            if(            it_21>=self->size            ) {
                it_21=0;
            }
            else if(            it_21==hash_20            ) {
                __result_obj__8 = (struct buffer*)come_increment_ref_count(default_value_19);
                come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct buffer*)come_increment_ref_count(default_value_19);
            come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct buffer*)come_increment_ref_count(default_value_19);
    come_call_finalizer(buffer_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__10;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_22;
unsigned int hash_23;
unsigned int it_24;
struct buffer* __result_obj__11;
struct buffer* __result_obj__12;
struct buffer* __result_obj__13;
struct buffer* __result_obj__14;
default_value_22 = (void*)0;
    memset(&default_value_22,0,sizeof(struct buffer*));
    hash_23=string_get_hash_key(((char*)key))%self->size;
    it_24=hash_23;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_24]        ) {
            if(            string_equals(self->keys[it_24],key)            ) {
                __result_obj__11 = (struct buffer*)come_increment_ref_count(self->items[it_24]);
                come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__11;
            }
            it_24++;
            if(            it_24>=self->size            ) {
                it_24=0;
            }
            else if(            it_24==hash_23            ) {
                __result_obj__12 = (struct buffer*)come_increment_ref_count(default_value_22);
                come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct buffer*)come_increment_ref_count(default_value_22);
            come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct buffer*)come_increment_ref_count(default_value_22);
    come_call_finalizer(buffer_finalize, default_value_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_42;
unsigned int it_43;
_Bool same_key_exist_60;
char* it2_63;
struct map$2char$phbuffer$ph* __result_obj__36;
    if(    self->len*10>=self->size    ) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash_42=string_get_hash_key(((char*)key))%self->size;
    it_43=hash_42;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_43]        ) {
            if(            string_equals(self->keys[it_43],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_43]);
                    (self->keys[it_43] = come_decrement_ref_count(self->keys[it_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_43]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_43]);
                    self->keys[it_43]=key;
                }
                if(                1                ) {
                    come_call_finalizer(buffer_finalize, self->items[it_43], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_43]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_43]=item;
                }
                break;
            }
            it_43++;
            if(            it_43>=self->size            ) {
                it_43=0;
            }
            else if(            it_43==hash_42            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_43]=(_Bool)1;
            if(            1            ) {
                self->keys[it_43]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_43]=key;
            }
            if(            1            ) {
                self->items[it_43]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_43]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_60=(_Bool)0;
    for(    it2_63=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_63=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_63,key)        ) {
            same_key_exist_60=(_Bool)1;
        }
    }
    if(    !same_key_exist_60    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__36 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_25;
void* __right_value6 = (void*)0;
char** keys_26;
void* __right_value7 = (void*)0;
struct buffer** items_27;
void* __right_value8 = (void*)0;
_Bool* item_existance_28;
int len_29;
char* it_32;
struct buffer* default_value_35;
void* __right_value9 = (void*)0;
struct buffer* it2_36;
unsigned int hash_39;
int n_40;
struct buffer* default_value_41;
void* __right_value10 = (void*)0;
default_value_35 = (void*)0;
default_value_41 = (void*)0;
    size_25=self->size*10;
    keys_26=(char**)come_increment_ref_count(((char**)(__right_value6=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_25)), "./comelang.h", 2181, "char**"))));
    items_27=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value7=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size_25)), "./comelang.h", 2182, "struct buffer**"))));
    item_existance_28=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value8=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_25)), "./comelang.h", 2183, "_Bool*"))));
    len_29=0;
    for(    it_32=map$2char$phbuffer$ph_begin(self)    ;    !map$2char$phbuffer$ph_end(self)    ;    it_32=map$2char$phbuffer$ph_next(self)    ){
        memset(&default_value_35,0,sizeof(struct buffer*));
        it2_36=((struct buffer*)(__right_value9=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_35))));
        come_call_finalizer(buffer_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_39=string_get_hash_key(((char*)it_32))%size_25;
        n_40=hash_39;
        while(        (_Bool)1        ) {
            if(            item_existance_28[n_40]            ) {
                n_40++;
                if(                n_40>=size_25                ) {
                    n_40=0;
                }
                else if(                n_40==hash_39                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_28[n_40]=(_Bool)1;
                keys_26[n_40]=it_32;
                items_27[n_40]=((struct buffer*)(__right_value10=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_41))));
                come_call_finalizer(buffer_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_29++;
                come_call_finalizer(buffer_finalize, default_value_41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_26;
    self->items=items_27;
    self->item_existance=item_existance_28;
    self->size=size_25;
    self->len=len_29;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_30;
char* __result_obj__15;
char* __result_obj__16;
char* result_31;
char* __result_obj__17;
result_30 = (void*)0;
result_31 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_30,0,sizeof(char*));
        __result_obj__15 = result_30;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_31,0,sizeof(char*));
    __result_obj__17 = result_31;
    return __result_obj__17;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_33;
char* __result_obj__18;
char* __result_obj__19;
char* result_34;
char* __result_obj__20;
result_33 = (void*)0;
result_34 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_33,0,sizeof(char*));
        __result_obj__18 = result_33;
        return __result_obj__18;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__19 = self->key_list->it->item;
        return __result_obj__19;
    }
    memset(&result_34,0,sizeof(char*));
    __result_obj__20 = result_34;
    return __result_obj__20;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash_37;
unsigned int it_38;
struct buffer* __result_obj__21;
struct buffer* __result_obj__22;
struct buffer* __result_obj__23;
struct buffer* __result_obj__24;
    hash_37=string_get_hash_key(((char*)key))%self->size;
    it_38=hash_37;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_38]        ) {
            if(            string_equals(self->keys[it_38],key)            ) {
                __result_obj__21 = (struct buffer*)come_increment_ref_count(self->items[it_38]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__21;
            }
            it_38++;
            if(            it_38>=self->size            ) {
                it_38=0;
            }
            else if(            it_38==hash_37            ) {
                __result_obj__22 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__22;
            }
        }
        else {
            __result_obj__23 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__23;
        }
    }
    __result_obj__24 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_44;
struct list_item$1char$ph* it_45;
struct list$1char$ph* __result_obj__28;
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
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_46;
struct list$1char$ph* __result_obj__25;
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
struct list$1char$ph* __result_obj__27;
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
        __result_obj__25 = self;
        return __result_obj__25;
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
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_47;
struct list_item$1char$ph* prev_it_48;
struct list$1char$ph* __result_obj__26;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_61;
char* __result_obj__29;
char* __result_obj__30;
char* result_62;
char* __result_obj__31;
result_61 = (void*)0;
result_62 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_61,0,sizeof(char*));
        __result_obj__29 = result_61;
        return __result_obj__29;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_62,0,sizeof(char*));
    __result_obj__31 = result_62;
    return __result_obj__31;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_64;
char* __result_obj__32;
char* __result_obj__33;
char* result_65;
char* __result_obj__34;
result_64 = (void*)0;
result_65 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_64,0,sizeof(char*));
        __result_obj__32 = result_64;
        return __result_obj__32;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__33 = self->it->item;
        return __result_obj__33;
    }
    memset(&result_65,0,sizeof(char*));
    __result_obj__34 = result_65;
    return __result_obj__34;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value11 = (void*)0;
struct list_item$1char$ph* litem_66;
char* __dec_obj1;
void* __right_value12 = (void*)0;
struct list_item$1char$ph* litem_67;
char* __dec_obj2;
void* __right_value13 = (void*)0;
struct list_item$1char$ph* litem_68;
char* __dec_obj3;
struct list$1char$ph* __result_obj__35;
    if(    self->len==0    ) {
        litem_66=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value11=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_66->prev=((void*)0);
        litem_66->next=((void*)0);
        __dec_obj1=litem_66->item,
        litem_66->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_66;
        self->head=litem_66;
    }
    else if(    self->len==1    ) {
        litem_67=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value12=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_67->prev=self->head;
        litem_67->next=((void*)0);
        __dec_obj2=litem_67->item,
        litem_67->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_67;
        self->head->next=litem_67;
    }
    else {
        litem_68=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value13=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_68->prev=self->tail;
        litem_68->next=((void*)0);
        __dec_obj3=litem_68->item,
        litem_68->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_68;
        self->tail=litem_68;
    }
    self->len++;
    __result_obj__35 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__35;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct buffer* buf_69;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_70;
struct tuple2$2char$phsType$ph* it_71;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* name_72=0;
struct sType* type_73=0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
char* id_74;
void* __right_value19 = (void*)0;
    if(    info->no_output_come_code    ) {
        return;
    }
    buf_69=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 50, "struct buffer*"))));
    if(    klass->mParentClassName    ) {
        buffer_append_format(buf_69,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf_69,"struct %s\n{\n",klass->mName);
    }
    for(    o2_saved_70=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_71=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_70))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_70))    ;    it_71=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_70))    ){
        multiple_assign_var2=it_71;
        name_72=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type_73=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type_73->mStatic=(_Bool)0;
        buffer_append_str(buf_69,"    ");
        buffer_append_str(buf_69,((char*)(__right_value17=make_define_var(type_73,name_72,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value17 = come_decrement_ref_count(__right_value17, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(buf_69,";\n");
        (name_72 = come_decrement_ref_count(name_72, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass->mAttribute==((void*)0)    ) {
        buffer_append_str(buf_69,"};\n");
    }
    else {
        buffer_append_format(buf_69,"} %s;\n",klass->mAttribute);
    }
    id_74=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id_74,"%s",((char*)(__right_value19=buffer_to_string(buf_69))));
    (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (id_74 = come_decrement_ref_count(id_74, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value20 = (void*)0;
char* new_name_75;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct sClass* generics_class_78;
void* __right_value24 = (void*)0;
_Bool __result_obj__45;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct sClass* new_class_106;
int i_107;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_108;
struct tuple2$2char$phsType$ph* it_109;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* name_110=0;
struct sType* type_111=0;
void* __right_value35 = (void*)0;
struct sType* new_type_112;
void* __right_value39 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct sType* __dec_obj33;
void* __right_value82 = (void*)0;
struct sType* __dec_obj34;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
_Bool __result_obj__76;
    new_name_75=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2char$phsClass$ph_find(info->classes,new_name_75)    ) {
        generics_class_78=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value22=__builtin_string(type->mClass->mName)))));
        (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value22 = come_decrement_ref_count(__right_value22, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        generics_class_78==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value24=err_msg(info,"generics_class(%s) is null",type->mClass->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value24, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__45 = (_Bool)0;
            come_call_finalizer(sClass_finalize, generics_class_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (new_name_75 = come_decrement_ref_count(new_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__45;
        }
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_75)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 92, "struct sClass*")),(char*)come_increment_ref_count(new_name_75),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        new_class_106=((struct sClass*)(__right_value34=map$2char$phsClass$ph_at(info->classes,((char*)(__right_value33=__builtin_string(new_name_75))),((void*)0))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value34, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i_107=0;
        for(        o2_saved_108=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((generics_class_78->mFields)),it_109=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_108))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_108))        ;        it_109=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_108))        ){
            multiple_assign_var3=it_109;
            name_110=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_111=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_112=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_111),(struct sType*)come_increment_ref_count(generics_type),info));
            list$1tuple2$2char$phsType$ph$ph_push_back(new_class_106->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 102, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_110, "14struct.c", 102, "char*")),(struct sType*)come_increment_ref_count(sType_clone(new_type_112)))));
            (name_110 = come_decrement_ref_count(name_110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, new_type_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj33=type->mNoSolvedGenericsType,
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_106;
        list$1sType$ph_reset(type->mGenericsTypes);
        output_struct(new_class_106,info);
        come_call_finalizer(sClass_finalize, generics_class_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)&&list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            __dec_obj34=type->mNoSolvedGenericsType,
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
            come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value85=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value84=__builtin_string(new_name_75))))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value85, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_reset(type->mGenericsTypes);
    }
    __result_obj__76 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (new_name_75 = come_decrement_ref_count(new_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__76;
}

static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key){
unsigned int hash_76;
int it_77;
    hash_76=string_get_hash_key(((char*)key))%self->size;
    it_77=hash_76;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_77]        ) {
            if(            string_equals(self->keys[it_77],key)            ) {
                return (_Bool)1;
            }
            it_77++;
            if(            it_77>=self->size            ) {
                it_77=0;
            }
            else if(            it_77==hash_76            ) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_79;
unsigned int hash_80;
unsigned int it_81;
struct sClass* __result_obj__37;
struct sClass* __result_obj__38;
struct sClass* __result_obj__39;
struct sClass* __result_obj__40;
default_value_79 = (void*)0;
    memset(&default_value_79,0,sizeof(struct sClass*));
    hash_80=string_get_hash_key(((char*)key))%self->size;
    it_81=hash_80;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_81]        ) {
            if(            string_equals(self->keys[it_81],key)            ) {
                __result_obj__37 = (struct sClass*)come_increment_ref_count(self->items[it_81]);
                come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__37;
            }
            it_81++;
            if(            it_81>=self->size            ) {
                it_81=0;
            }
            else if(            it_81==hash_80            ) {
                __result_obj__38 = (struct sClass*)come_increment_ref_count(default_value_79);
                come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct sClass*)come_increment_ref_count(default_value_79);
            come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct sClass*)come_increment_ref_count(default_value_79);
    come_call_finalizer(sClass_finalize, default_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
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
struct sClass* default_value_82;
unsigned int hash_83;
unsigned int it_84;
struct sClass* __result_obj__41;
struct sClass* __result_obj__42;
struct sClass* __result_obj__43;
struct sClass* __result_obj__44;
default_value_82 = (void*)0;
    memset(&default_value_82,0,sizeof(struct sClass*));
    hash_83=string_get_hash_key(((char*)key))%self->size;
    it_84=hash_83;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_84]        ) {
            if(            string_equals(self->keys[it_84],key)            ) {
                __result_obj__41 = (struct sClass*)come_increment_ref_count(self->items[it_84]);
                come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__41;
            }
            it_84++;
            if(            it_84>=self->size            ) {
                it_84=0;
            }
            else if(            it_84==hash_83            ) {
                __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value_82);
                come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__42;
            }
        }
        else {
            __result_obj__43 = (struct sClass*)come_increment_ref_count(default_value_82);
            come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__43;
        }
    }
    __result_obj__44 = (struct sClass*)come_increment_ref_count(default_value_82);
    come_call_finalizer(sClass_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_102;
unsigned int it_103;
_Bool same_key_exist_104;
char* it2_105;
struct map$2char$phsClass$ph* __result_obj__56;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_102=string_get_hash_key(((char*)key))%self->size;
    it_103=hash_102;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_103]        ) {
            if(            string_equals(self->keys[it_103],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_103]);
                    (self->keys[it_103] = come_decrement_ref_count(self->keys[it_103], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_103]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_103]);
                    self->keys[it_103]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it_103], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_103]=item;
                }
                break;
            }
            it_103++;
            if(            it_103>=self->size            ) {
                it_103=0;
            }
            else if(            it_103==hash_102            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_103]=(_Bool)1;
            if(            1            ) {
                self->keys[it_103]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_103]=key;
            }
            if(            1            ) {
                self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_103]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_104=(_Bool)0;
    for(    it2_105=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_105=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_105,key)        ) {
            same_key_exist_104=(_Bool)1;
        }
    }
    if(    !same_key_exist_104    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__56 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__56;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_85;
void* __right_value25 = (void*)0;
char** keys_86;
void* __right_value26 = (void*)0;
struct sClass** items_87;
void* __right_value27 = (void*)0;
_Bool* item_existance_88;
int len_89;
char* it_92;
struct sClass* default_value_95;
void* __right_value28 = (void*)0;
struct sClass* it2_96;
unsigned int hash_99;
int n_100;
struct sClass* default_value_101;
void* __right_value29 = (void*)0;
default_value_95 = (void*)0;
default_value_101 = (void*)0;
    size_85=self->size*10;
    keys_86=(char**)come_increment_ref_count(((char**)(__right_value25=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_85)), "./comelang.h", 2181, "char**"))));
    items_87=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value26=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_85)), "./comelang.h", 2182, "struct sClass**"))));
    item_existance_88=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value27=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_85)), "./comelang.h", 2183, "_Bool*"))));
    len_89=0;
    for(    it_92=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it_92=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_95,0,sizeof(struct sClass*));
        it2_96=((struct sClass*)(__right_value28=map$2char$phsClass$ph_at(self,it_92,(struct sClass*)come_increment_ref_count(default_value_95))));
        come_call_finalizer(sClass_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_99=string_get_hash_key(((char*)it_92))%size_85;
        n_100=hash_99;
        while(        (_Bool)1        ) {
            if(            item_existance_88[n_100]            ) {
                n_100++;
                if(                n_100>=size_85                ) {
                    n_100=0;
                }
                else if(                n_100==hash_99                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_88[n_100]=(_Bool)1;
                keys_86[n_100]=it_92;
                items_87[n_100]=((struct sClass*)(__right_value29=map$2char$phsClass$ph_at(self,it_92,(struct sClass*)come_increment_ref_count(default_value_101))));
                come_call_finalizer(sClass_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_89++;
                come_call_finalizer(sClass_finalize, default_value_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_86;
    self->items=items_87;
    self->item_existance=item_existance_88;
    self->size=size_85;
    self->len=len_89;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_90;
char* __result_obj__46;
char* __result_obj__47;
char* result_91;
char* __result_obj__48;
result_90 = (void*)0;
result_91 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_90,0,sizeof(char*));
        __result_obj__46 = result_90;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_91,0,sizeof(char*));
    __result_obj__48 = result_91;
    return __result_obj__48;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_93;
char* __result_obj__49;
char* __result_obj__50;
char* result_94;
char* __result_obj__51;
result_93 = (void*)0;
result_94 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_93,0,sizeof(char*));
        __result_obj__49 = result_93;
        return __result_obj__49;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__50 = self->key_list->it->item;
        return __result_obj__50;
    }
    memset(&result_94,0,sizeof(char*));
    __result_obj__51 = result_94;
    return __result_obj__51;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_97;
unsigned int it_98;
struct sClass* __result_obj__52;
struct sClass* __result_obj__53;
struct sClass* __result_obj__54;
struct sClass* __result_obj__55;
    hash_97=string_get_hash_key(((char*)key))%self->size;
    it_98=hash_97;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_98]        ) {
            if(            string_equals(self->keys[it_98],key)            ) {
                __result_obj__52 = (struct sClass*)come_increment_ref_count(self->items[it_98]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__52;
            }
            it_98++;
            if(            it_98>=self->size            ) {
                it_98=0;
            }
            else if(            it_98==hash_97            ) {
                __result_obj__53 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__53;
            }
        }
        else {
            __result_obj__54 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__54;
        }
    }
    __result_obj__55 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value36 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_113;
struct tuple2$2char$phsType$ph* __dec_obj4;
void* __right_value37 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_114;
struct tuple2$2char$phsType$ph* __dec_obj5;
void* __right_value38 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_115;
struct tuple2$2char$phsType$ph* __dec_obj6;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__57;
    if(    self->len==0    ) {
        litem_113=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value36=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1115, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_113->prev=((void*)0);
        litem_113->next=((void*)0);
        __dec_obj4=litem_113->item,
        litem_113->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_113;
        self->head=litem_113;
    }
    else if(    self->len==1    ) {
        litem_114=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value37=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1125, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_114->prev=self->head;
        litem_114->next=((void*)0);
        __dec_obj5=litem_114->item,
        litem_114->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_114;
        self->head->next=litem_114;
    }
    else {
        litem_115=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value38=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1135, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_115->prev=self->tail;
        litem_115->next=((void*)0);
        __dec_obj6=litem_115->item,
        litem_115->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_115;
        self->tail=litem_115;
    }
    self->len++;
    __result_obj__57 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__58;
void* __right_value40 = (void*)0;
struct sType* result_116;
void* __right_value41 = (void*)0;
struct sType* __dec_obj7;
void* __right_value42 = (void*)0;
struct sType* __dec_obj8;
void* __right_value50 = (void*)0;
struct list$1sType$ph* __dec_obj12;
void* __right_value51 = (void*)0;
struct sType* __dec_obj13;
void* __right_value53 = (void*)0;
struct sNode* __dec_obj14;
void* __right_value54 = (void*)0;
struct sNode* __dec_obj15;
void* __right_value55 = (void*)0;
char* __dec_obj16;
void* __right_value56 = (void*)0;
char* __dec_obj17;
void* __right_value57 = (void*)0;
char* __dec_obj18;
void* __right_value58 = (void*)0;
char* __dec_obj19;
void* __right_value66 = (void*)0;
struct list$1sNode$ph* __dec_obj23;
void* __right_value67 = (void*)0;
char* __dec_obj24;
void* __right_value68 = (void*)0;
struct list$1sType$ph* __dec_obj25;
void* __right_value76 = (void*)0;
struct list$1char$ph* __dec_obj29;
void* __right_value77 = (void*)0;
struct sType* __dec_obj30;
struct sType* __result_obj__73;
    if(    self==(void*)0    ) {
        __result_obj__58 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__58;
    }
    result_116=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_116->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj7=result_116->mOriginalLoadVarType,
        result_116->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj8=result_116->mChannelType,
        result_116->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj12=result_116->mGenericsTypes,
        result_116->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj13=result_116->mNoSolvedGenericsType,
        result_116->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj14=result_116->mSizeNum,
        result_116->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj15=result_116->mAlignas,
        result_116->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj16=result_116->mTupleName,
        result_116->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj17=result_116->mAttribute,
        result_116->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj18=result_116->mVarAttribute,
        result_116->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_116->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_116->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_116->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_116->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_116->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_116->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_116->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_116->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_116->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_116->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_116->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_116->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_116->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_116->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_116->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_116->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_116->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_116->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_116->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_116->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_116->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj19=result_116->mAsmName,
        result_116->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_116->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj23=result_116->mArrayNum,
        result_116->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_116->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj24=result_116->mOriginalTypeName,
        result_116->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_116->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_116->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj25=result_116->mParamTypes,
        result_116->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj29=result_116->mParamNames,
        result_116->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj30=result_116->mResultType,
        result_116->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_116->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_116->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__73 = (struct sType*)come_increment_ref_count(result_116);
    come_call_finalizer(sType_finalize, result_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__59;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1sType$ph* result_117;
struct list_item$1sType$ph* it_118;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
struct list$1sType$ph* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    result_117=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1026, "struct list$1sType$ph*"))));
    it_118=self->head;
    while(    it_118!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_117,(struct sType*)come_increment_ref_count(sType_clone(it_118->item)));
        }
        else {
            list$1sType$ph_add(result_117,(struct sType*)come_increment_ref_count(sType_clone(it_118->item)));
        }
        it_118=it_118->next;
    }
    __result_obj__62 = (struct list$1sType$ph*)come_increment_ref_count(result_117);
    come_call_finalizer(list$1sType$ph$p_finalize, result_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value45 = (void*)0;
struct list_item$1sType$ph* litem_119;
struct sType* __dec_obj9;
void* __right_value46 = (void*)0;
struct list_item$1sType$ph* litem_120;
struct sType* __dec_obj10;
void* __right_value47 = (void*)0;
struct list_item$1sType$ph* litem_121;
struct sType* __dec_obj11;
struct list$1sType$ph* __result_obj__61;
    if(    self->len==0    ) {
        litem_119=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value45=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1045, "struct list_item$1sType$ph*"))));
        litem_119->prev=((void*)0);
        litem_119->next=((void*)0);
        __dec_obj9=litem_119->item,
        litem_119->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_119;
        self->head=litem_119;
    }
    else if(    self->len==1    ) {
        litem_120=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value46=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1055, "struct list_item$1sType$ph*"))));
        litem_120->prev=self->head;
        litem_120->next=((void*)0);
        __dec_obj10=litem_120->item,
        litem_120->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_120;
        self->head->next=litem_120;
    }
    else {
        litem_121=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value47=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1065, "struct list_item$1sType$ph*"))));
        litem_121->prev=self->tail;
        litem_121->next=((void*)0);
        __dec_obj11=litem_121->item,
        litem_121->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_121;
        self->tail=litem_121;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_122;
struct list_item$1sType$ph* prev_it_123;
    it_122=self->head;
    while(    it_122!=((void*)0)    ) {
        prev_it_123=it_122;
        it_122=it_122->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__63;
void* __right_value52 = (void*)0;
struct sNode* result_124;
struct sNode* __result_obj__64;
    if(    self==(void*)0    ) {
        __result_obj__63 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__63) ? __result_obj__63 = come_decrement_ref_count(__result_obj__63, ((struct sNode*)__result_obj__63)->finalize, ((struct sNode*)__result_obj__63)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__63;
    }
    result_124=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_124->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_124->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_124->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_124->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_124->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_124->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_124->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_124->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_124->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_124->no_mutex=self->no_mutex;
    }
    __result_obj__64 = (struct sNode*)come_increment_ref_count(result_124);
    ((result_124) ? result_124 = come_decrement_ref_count(result_124, ((struct sNode*)result_124)->finalize, ((struct sNode*)result_124)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__65;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1sNode$ph* result_125;
struct list_item$1sNode$ph* it_126;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1sNode$ph* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__65 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__65;
    }
    result_125=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1026, "struct list$1sNode$ph*"))));
    it_126=self->head;
    while(    it_126!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_125,(struct sNode*)come_increment_ref_count(sNode_clone(it_126->item)));
        }
        else {
            list$1sNode$ph_add(result_125,(struct sNode*)come_increment_ref_count(sNode_clone(it_126->item)));
        }
        it_126=it_126->next;
    }
    __result_obj__68 = (struct list$1sNode$ph*)come_increment_ref_count(result_125);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value61 = (void*)0;
struct list_item$1sNode$ph* litem_127;
struct sNode* __dec_obj20;
void* __right_value62 = (void*)0;
struct list_item$1sNode$ph* litem_128;
struct sNode* __dec_obj21;
void* __right_value63 = (void*)0;
struct list_item$1sNode$ph* litem_129;
struct sNode* __dec_obj22;
struct list$1sNode$ph* __result_obj__67;
    if(    self->len==0    ) {
        litem_127=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value61=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1045, "struct list_item$1sNode$ph*"))));
        litem_127->prev=((void*)0);
        litem_127->next=((void*)0);
        __dec_obj20=litem_127->item,
        litem_127->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_127;
        self->head=litem_127;
    }
    else if(    self->len==1    ) {
        litem_128=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value62=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1055, "struct list_item$1sNode$ph*"))));
        litem_128->prev=self->head;
        litem_128->next=((void*)0);
        __dec_obj21=litem_128->item,
        litem_128->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_128;
        self->head->next=litem_128;
    }
    else {
        litem_129=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value63=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1065, "struct list_item$1sNode$ph*"))));
        litem_129->prev=self->tail;
        litem_129->next=((void*)0);
        __dec_obj22=litem_129->item,
        litem_129->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_129;
        self->tail=litem_129;
    }
    self->len++;
    __result_obj__67 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__67;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_130;
struct list_item$1sNode$ph* prev_it_131;
    it_130=self->head;
    while(    it_130!=((void*)0)    ) {
        prev_it_131=it_130;
        it_130=it_130->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__69;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1char$ph* result_132;
struct list_item$1char$ph* it_133;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1char$ph* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    result_132=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1026, "struct list$1char$ph*"))));
    it_133=self->head;
    while(    it_133!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_132,(char*)come_increment_ref_count((char*)come_memdup(it_133->item, "./comelang.h", 1031, "char*")));
        }
        else {
            list$1char$ph_add(result_132,(char*)come_increment_ref_count((char*)come_memdup(it_133->item, "./comelang.h", 1034, "char*")));
        }
        it_133=it_133->next;
    }
    __result_obj__72 = (struct list$1char$ph*)come_increment_ref_count(result_132);
    come_call_finalizer(list$1char$ph$p_finalize, result_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value71 = (void*)0;
struct list_item$1char$ph* litem_134;
char* __dec_obj26;
void* __right_value72 = (void*)0;
struct list_item$1char$ph* litem_135;
char* __dec_obj27;
void* __right_value73 = (void*)0;
struct list_item$1char$ph* litem_136;
char* __dec_obj28;
struct list$1char$ph* __result_obj__71;
    if(    self->len==0    ) {
        litem_134=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value71=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1045, "struct list_item$1char$ph*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        __dec_obj26=litem_134->item,
        litem_134->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1    ) {
        litem_135=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value72=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1055, "struct list_item$1char$ph*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        __dec_obj27=litem_135->item,
        litem_135->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value73=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1065, "struct list_item$1char$ph*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        __dec_obj28=litem_136->item,
        litem_136->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__71 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__71;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_137;
struct list_item$1char$ph* prev_it_138;
    it_137=self->head;
    while(    it_137!=((void*)0)    ) {
        prev_it_138=it_137;
        it_137=it_137->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj31;
struct sType* __dec_obj32;
struct tuple2$2char$phsType$ph* __result_obj__74;
    __dec_obj31=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj32=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__74 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_139;
struct list_item$1sType$ph* prev_it_140;
struct list$1sType$ph* __result_obj__75;
    it_139=self->head;
    while(    it_139!=((void*)0)    ) {
        prev_it_140=it_139;
        it_139=it_139->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
char* __dec_obj35;
void* __right_value103 = (void*)0;
struct sClass* __dec_obj45;
struct sStructNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value86=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj35=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj45=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__85 = (struct sStructNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStructNode_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __right_value104 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string("sStructNode"))));
    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__86;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_150;
void* __right_value105 = (void*)0;
char* name_151;
_Bool __result_obj__87;
    klass_150=(struct sClass*)come_increment_ref_count(self->mClass);
    name_151=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_150,info);
    __result_obj__87 = (_Bool)1;
    come_call_finalizer(sClass_finalize, klass_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_151 = come_decrement_ref_count(name_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__87;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__77;
void* __right_value88 = (void*)0;
struct sClass* result_141;
void* __right_value89 = (void*)0;
char* __dec_obj36;
void* __right_value100 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj42;
void* __right_value101 = (void*)0;
char* __dec_obj43;
void* __right_value102 = (void*)0;
char* __dec_obj44;
struct sClass* __result_obj__84;
    if(    self==(void*)0    ) {
        __result_obj__77 = (void*)0;
        return __result_obj__77;
    }
    result_141=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*"));
    if(    self!=((void*)0)    ) {
        result_141->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)    ) {
        result_141->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)    ) {
        result_141->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)    ) {
        result_141->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)    ) {
        result_141->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)    ) {
        result_141->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)    ) {
        result_141->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)    ) {
        result_141->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)    ) {
        result_141->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj36=result_141->mName,
        result_141->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClass_clone", 13, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_141->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)    ) {
        result_141->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        __dec_obj42=result_141->mFields,
        result_141->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(self->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        __dec_obj43=result_141->mParentClassName,
        result_141->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(self->mParentClassName, "sClass_clone", 17, "char*"));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj44=result_141->mAttribute,
        result_141->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sClass_clone", 18, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__84 = result_141;
    come_call_finalizer(sClass_finalize, result_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__78;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result_142;
struct list_item$1tuple2$2char$phsType$ph$ph* it_143;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__78 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__78;
    }
    result_142=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1026, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    it_143=self->head;
    while(    it_143!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsType$ph$ph_add(result_142,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_143->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(result_142,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_143->item)));
        }
        it_143=it_143->next;
    }
    __result_obj__83 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(result_142);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, result_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__79;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__79 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value92 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_144;
struct tuple2$2char$phsType$ph* __dec_obj37;
void* __right_value93 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_145;
struct tuple2$2char$phsType$ph* __dec_obj38;
void* __right_value94 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_146;
struct tuple2$2char$phsType$ph* __dec_obj39;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__80;
    if(    self->len==0    ) {
        litem_144=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value92=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1045, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_144->prev=((void*)0);
        litem_144->next=((void*)0);
        __dec_obj37=litem_144->item,
        litem_144->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_144;
        self->head=litem_144;
    }
    else if(    self->len==1    ) {
        litem_145=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value93=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1055, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_145->prev=self->head;
        litem_145->next=((void*)0);
        __dec_obj38=litem_145->item,
        litem_145->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_145;
        self->head->next=litem_145;
    }
    else {
        litem_146=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value94=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1065, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_146->prev=self->tail;
        litem_146->next=((void*)0);
        __dec_obj39=litem_146->item,
        litem_146->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_146;
        self->tail=litem_146;
    }
    self->len++;
    __result_obj__80 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__81;
void* __right_value95 = (void*)0;
struct tuple2$2char$phsType$ph* result_147;
void* __right_value96 = (void*)0;
char* __dec_obj40;
void* __right_value97 = (void*)0;
struct sType* __dec_obj41;
struct tuple2$2char$phsType$ph* __result_obj__82;
    if(    self==(void*)0    ) {
        __result_obj__81 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__81;
    }
    result_147=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj40=result_147->v1,
        result_147->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj41=result_147->v2,
        result_147->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__82 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_147);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_148;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_149;
    it_148=self->head;
    while(    it_148!=((void*)0)    ) {
        prev_it_149=it_148;
        it_148=it_148->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sStructNode_finalize(struct sStructNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        come_call_finalizer(sClass_finalize, self->mClass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info){
void* __right_value106 = (void*)0;
char* __dec_obj46;
struct sStructNobodyNode* __result_obj__88;
    ((struct sNodeBase*)(__right_value106=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj46=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__88 = (struct sStructNobodyNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNobodyNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStructNobodyNode_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __right_value107 = (void*)0;
char* __result_obj__89;
    __result_obj__89 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("sStructNobodyNode"))));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__89;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
char* name_152;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
_Bool __result_obj__90;
    name_152=(char*)come_increment_ref_count(self->mName);
    map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name_152)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value109=xsprintf("struct %s;\n",name_152))))));
    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __result_obj__90 = (_Bool)1;
    (name_152 = come_decrement_ref_count(name_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__90;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __right_value111 = (void*)0;
struct sNothingNode* __result_obj__91;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__91 = (struct sNothingNode*)come_increment_ref_count(self);
    come_call_finalizer(sNothingNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNothingNode_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __right_value112 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string("sNothingNode"))));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value117 = (void*)0;
struct sNode* __result_obj__95;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 211, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value114=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 211, "struct sNothingNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__95 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value117=_inf_value1)));
    come_call_finalizer(sNothingNode_finalize, __right_value114, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value117) ? __right_value117 = come_decrement_ref_count(__right_value117, ((struct sNode*)__right_value117)->finalize, ((struct sNode*)__right_value117)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__95) ? __result_obj__95 = come_decrement_ref_count(__result_obj__95, ((struct sNode*)__result_obj__95)->finalize, ((struct sNode*)__result_obj__95)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__95;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
struct sNothingNode* __result_obj__93;
void* __right_value115 = (void*)0;
struct sNothingNode* result_153;
void* __right_value116 = (void*)0;
char* __dec_obj47;
struct sNothingNode* __result_obj__94;
    if(    self==(void*)0    ) {
        __result_obj__93 = (void*)0;
        return __result_obj__93;
    }
    result_153=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*"));
    if(    self!=((void*)0)    ) {
        result_153->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj47=result_153->sname,
        result_153->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNothingNode_clone", 5, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_153->sline_real=self->sline_real;
    }
    __result_obj__94 = result_153;
    come_call_finalizer(sNothingNode_finalize, result_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info){
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
char* __dec_obj48;
void* __right_value120 = (void*)0;
struct sClass* __dec_obj49;
struct list$1sNode$ph* __dec_obj50;
struct sClassNode* __result_obj__96;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj48=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj50=self->mMethods,
    self->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__96 = (struct sClassNode*)come_increment_ref_count(self);
    come_call_finalizer(sClassNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sClassNode_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __right_value121 = (void*)0;
char* __result_obj__97;
    __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string("sClassNode"))));
    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__97;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
struct sClass* klass_154;
void* __right_value122 = (void*)0;
char* name_155;
void* __right_value123 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value127 = (void*)0;
struct sClass* klass2_156;
void* __right_value128 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj51;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct sType* type_157;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sType* override__158;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1sNode$ph* o2_saved_180;
struct sNode* it_183;
_Bool Value_186;
_Bool __result_obj__115;
_Bool __result_obj__116;
    klass_154=(struct sClass*)come_increment_ref_count(self->mClass);
    name_155=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_condtional_value_X2=(((struct sClass*)(__right_value123=map$2char$phsClass$ph_at(info->classes,name_155,((void*)0))))==((void*)0))),    come_call_finalizer(sClass_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X2    ) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(name_155),(struct sClass*)come_increment_ref_count(sClass_clone(klass_154)));
    }
    if(    (_condtional_value_X3=(((struct sClass*)(__right_value125=map$2char$phsClass$ph_at(info->classes,name_155,((void*)0))))&&list$1tuple2$2char$phsType$ph$ph_length(((struct sClass*)(__right_value126=map$2char$phsClass$ph_at(info->classes,name_155,((void*)0))))->mFields)==0)),    come_call_finalizer(sClass_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    come_call_finalizer(sClass_finalize, __right_value126, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X3    ) {
        klass2_156=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,name_155,((void*)0)));
        __dec_obj51=klass2_156->mFields,
        klass2_156->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(klass_154->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass2_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_157=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 250, "struct sType*")),(char*)come_increment_ref_count(name_155),(_Bool)0,info));
    override__158=((struct sType*)(__right_value132=map$2char$phsType$ph_at(info->types,((char*)(__right_value131=__builtin_string(name_155))),((void*)0))));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    override__158    ) {
        if(        override__158->mTypedef        ) {
            type_157->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name_155)),(struct sType*)come_increment_ref_count(sType_clone(type_157)));
    output_struct(klass_154,info);
    for(    o2_saved_180=(struct list$1sNode$ph*)come_increment_ref_count((self->mMethods)),it_183=list$1sNode$ph_begin((o2_saved_180))    ;    !list$1sNode$ph_end((o2_saved_180))    ;    it_183=list$1sNode$ph_next((o2_saved_180))    ){
        Value_186=node_compile(it_183,info);
        if(        !Value_186        ) {
            __result_obj__115 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_155 = come_decrement_ref_count(name_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__115;
        }
        else {
        }
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    info->output_header_file    ) {
        output_struct_come_header(klass_154,info);
    }
    __result_obj__116 = (_Bool)1;
    come_call_finalizer(sClass_finalize, klass_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_155 = come_decrement_ref_count(name_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__116;
}

static void sClassNode_finalize(struct sClassNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        come_call_finalizer(sClass_finalize, self->mClass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mMethods, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_159;
unsigned int it_160;
struct sType* __result_obj__98;
struct sType* __result_obj__99;
struct sType* __result_obj__100;
struct sType* __result_obj__101;
    hash_159=string_get_hash_key(((char*)key))%self->size;
    it_160=hash_159;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_160]        ) {
            if(            string_equals(self->keys[it_160],key)            ) {
                __result_obj__98 = (struct sType*)come_increment_ref_count(self->items[it_160]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__98;
            }
            it_160++;
            if(            it_160>=self->size            ) {
                it_160=0;
            }
            else if(            it_160==hash_159            ) {
                __result_obj__99 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__99;
            }
        }
        else {
            __result_obj__100 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__100;
        }
    }
    __result_obj__101 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_176;
unsigned int it_177;
_Bool same_key_exist_178;
char* it2_179;
struct map$2char$phsType$ph* __result_obj__108;
    if(    self->len*10>=self->size    ) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_176=string_get_hash_key(((char*)key))%self->size;
    it_177=hash_176;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_177]        ) {
            if(            string_equals(self->keys[it_177],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_177]);
                    (self->keys[it_177] = come_decrement_ref_count(self->keys[it_177], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_177]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_177]);
                    self->keys[it_177]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sType_finalize, self->items[it_177], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_177]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_177]=item;
                }
                break;
            }
            it_177++;
            if(            it_177>=self->size            ) {
                it_177=0;
            }
            else if(            it_177==hash_176            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_177]=(_Bool)1;
            if(            1            ) {
                self->keys[it_177]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_177]=key;
            }
            if(            1            ) {
                self->items[it_177]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_177]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_178=(_Bool)0;
    for(    it2_179=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_179=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_179,key)        ) {
            same_key_exist_178=(_Bool)1;
        }
    }
    if(    !same_key_exist_178    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__108 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_161;
void* __right_value133 = (void*)0;
char** keys_162;
void* __right_value134 = (void*)0;
struct sType** items_163;
void* __right_value135 = (void*)0;
_Bool* item_existance_164;
int len_165;
char* it_168;
struct sType* default_value_171;
void* __right_value136 = (void*)0;
struct sType* it2_172;
unsigned int hash_173;
int n_174;
struct sType* default_value_175;
void* __right_value137 = (void*)0;
default_value_171 = (void*)0;
default_value_175 = (void*)0;
    size_161=self->size*10;
    keys_162=(char**)come_increment_ref_count(((char**)(__right_value133=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_161)), "./comelang.h", 2181, "char**"))));
    items_163=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value134=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size_161)), "./comelang.h", 2182, "struct sType**"))));
    item_existance_164=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value135=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_161)), "./comelang.h", 2183, "_Bool*"))));
    len_165=0;
    for(    it_168=map$2char$phsType$ph_begin(self)    ;    !map$2char$phsType$ph_end(self)    ;    it_168=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_171,0,sizeof(struct sType*));
        it2_172=((struct sType*)(__right_value136=map$2char$phsType$ph_at(self,it_168,(struct sType*)come_increment_ref_count(default_value_171))));
        come_call_finalizer(sType_finalize, __right_value136, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_173=string_get_hash_key(((char*)it_168))%size_161;
        n_174=hash_173;
        while(        (_Bool)1        ) {
            if(            item_existance_164[n_174]            ) {
                n_174++;
                if(                n_174>=size_161                ) {
                    n_174=0;
                }
                else if(                n_174==hash_173                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_164[n_174]=(_Bool)1;
                keys_162[n_174]=it_168;
                items_163[n_174]=((struct sType*)(__right_value137=map$2char$phsType$ph_at(self,it_168,(struct sType*)come_increment_ref_count(default_value_175))));
                come_call_finalizer(sType_finalize, __right_value137, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_165++;
                come_call_finalizer(sType_finalize, default_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_162;
    self->items=items_163;
    self->item_existance=item_existance_164;
    self->size=size_161;
    self->len=len_165;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_166;
char* __result_obj__102;
char* __result_obj__103;
char* result_167;
char* __result_obj__104;
result_166 = (void*)0;
result_167 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_166,0,sizeof(char*));
        __result_obj__102 = result_166;
        return __result_obj__102;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__103 = self->key_list->it->item;
        return __result_obj__103;
    }
    memset(&result_167,0,sizeof(char*));
    __result_obj__104 = result_167;
    return __result_obj__104;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_169;
char* __result_obj__105;
char* __result_obj__106;
char* result_170;
char* __result_obj__107;
result_169 = (void*)0;
result_170 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_169,0,sizeof(char*));
        __result_obj__105 = result_169;
        return __result_obj__105;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__106 = self->key_list->it->item;
        return __result_obj__106;
    }
    memset(&result_170,0,sizeof(char*));
    __result_obj__107 = result_170;
    return __result_obj__107;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_181;
struct sNode* __result_obj__109;
struct sNode* __result_obj__110;
struct sNode* result_182;
struct sNode* __result_obj__111;
result_181 = (void*)0;
result_182 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_181,0,sizeof(struct sNode*));
        __result_obj__109 = result_181;
        return __result_obj__109;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__110 = self->it->item;
        return __result_obj__110;
    }
    memset(&result_182,0,sizeof(struct sNode*));
    __result_obj__111 = result_182;
    return __result_obj__111;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_184;
struct sNode* __result_obj__112;
struct sNode* __result_obj__113;
struct sNode* result_185;
struct sNode* __result_obj__114;
result_184 = (void*)0;
result_185 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_184,0,sizeof(struct sNode*));
        __result_obj__112 = result_184;
        return __result_obj__112;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__113 = self->it->item;
        return __result_obj__113;
    }
    memset(&result_185,0,sizeof(struct sNode*));
    __result_obj__114 = result_185;
    return __result_obj__114;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
struct sClass* klass_187;
void* __right_value140 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sClass* __dec_obj52;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct sClass* __dec_obj53;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sType* type_190;
void* __right_value148 = (void*)0;
struct sType* override__191;
void* __right_value149 = (void*)0;
struct sClass* parent_class_192;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
char* parent_class_name_193;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
_Bool multiple_declare_194;
char* p_195;
int sline_196;
void* __right_value154 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_197=0;
char* name_198=0;
_Bool err_199=0;
void* __right_value155 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* base_type_200=0;
char* name_201=0;
_Bool err_202=0;
void* __right_value156 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type2_203=0;
char* name2_204=0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* type2_205=0;
char* name2_206=0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_207=0;
char* name_208=0;
_Bool err_209=0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
char* struct_attribute2_210;
void* __right_value166 = (void*)0;
char* __dec_obj54;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
char* __dec_obj55;
char* __dec_obj56;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
char* __dec_obj57;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value179 = (void*)0;
struct sNode* node_211;
_Bool Value_213;
struct sNode* __result_obj__120;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value182 = (void*)0;
struct sNode* __result_obj__121;
klass_187 = (void*)0;
    if(    (_condtional_value_X4=(((struct sClass*)(__right_value140=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer(sClass_finalize, __right_value140, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X4    ) {
        __dec_obj52=klass_187,
        klass_187=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 279, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
        come_call_finalizer(sClass_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_187));
    }
    else {
        __dec_obj53=klass_187,
        klass_187=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
        come_call_finalizer(sClass_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_reset(klass_187->mFields);
    }
    type_190=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 287, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
    override__191=((struct sType*)(__right_value148=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
    come_call_finalizer(sType_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    override__191    ) {
        if(        override__191->mTypedef        ) {
            type_190->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_190)));
    parent_class_192=((void*)0);
    if(    parsecmp("extends",info)    ) {
        ((char*)(__right_value150=parse_word(info)));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        parent_class_name_193=(char*)come_increment_ref_count(parse_word(info));
        parent_class_192=((struct sClass*)(__right_value152=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_193)));
        come_call_finalizer(sClass_finalize, __right_value152, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        parent_class_192==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value153=err_msg(info,"invalid class name(%s)",parent_class_name_193)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(1);
        }
        (parent_class_name_193 = come_decrement_ref_count(parent_class_name_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    expected_next_character(123,info);
    while(    (_Bool)1    ) {
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_194=(_Bool)0;
        {
            p_195=info->p;
            sline_196=info->sline;
            multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value154=backtrace_parse_type((_Bool)1,info)));
            type_197=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_198=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_199=multiple_assign_var4->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value154, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            err_199&&*info->p==44            ) {
                multiple_declare_194=(_Bool)1;
            }
            info->p=p_195;
            info->sline=sline_196;
            come_call_finalizer(sType_finalize, type_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_198 = come_decrement_ref_count(name_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        multiple_declare_194        ) {
            multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value155=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_200=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_201=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_202=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value155, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value156=parse_variable_name((struct sType*)come_increment_ref_count(base_type_200),(_Bool)1,info)));
            type2_203=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_204=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value156, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_187->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 343, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_204),(struct sType*)come_increment_ref_count(type2_203))));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value159=parse_variable_name((struct sType*)come_increment_ref_count(base_type_200),(_Bool)0,info)));
                type2_205=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_206=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value159, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_187->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 351, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_206),(struct sType*)come_increment_ref_count(type2_205))));
                come_call_finalizer(sType_finalize, type2_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name2_206 = come_decrement_ref_count(name2_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, base_type_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_201 = come_decrement_ref_count(name_201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type2_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name2_204 = come_decrement_ref_count(name2_204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value162=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_207=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_208=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_209=multiple_assign_var8->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_209            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_187->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 362, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_208),(struct sType*)come_increment_ref_count(type2_207))));
            come_call_finalizer(sType_finalize, type2_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_208 = come_decrement_ref_count(name_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_210=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_192    ) {
        __dec_obj54=klass_187->mParentClassName,
        klass_187->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_192->mName, "14struct.c", 382, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass_187->mName)),(struct sClass*)come_increment_ref_count(sClass_clone(klass_187)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_210,"")    ) {
    }
    else if(    string_operator_equals(struct_attribute,"")    ) {
        __dec_obj55=klass_187->mAttribute,
        klass_187->mAttribute=(char*)come_increment_ref_count(struct_attribute2_210);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_210,"")    ) {
        __dec_obj56=klass_187->mAttribute,
        klass_187->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj57=klass_187->mAttribute,
        klass_187->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value170=string_operator_add(struct_attribute," "))),struct_attribute2_210));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 398, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value174=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 398, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_187,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node_211=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sStructNode_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_213=node_compile(node_211,info);
    if(    !Value_213    ) {
        __result_obj__120 = (void*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, klass_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (struct_attribute2_210 = come_decrement_ref_count(struct_attribute2_210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__120;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 404, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value181=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 404, "struct sNothingNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__121 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value182=_inf_value3)));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, klass_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (struct_attribute2_210 = come_decrement_ref_count(struct_attribute2_210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((node_211) ? node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sNothingNode_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value182) ? __right_value182 = come_decrement_ref_count(__right_value182, ((struct sNode*)__right_value182)->finalize, ((struct sNode*)__right_value182)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__121) ? __result_obj__121 = come_decrement_ref_count(__result_obj__121, ((struct sNode*)__result_obj__121)->finalize, ((struct sNode*)__result_obj__121)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__121;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_188;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_189;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__117;
    it_188=self->head;
    while(    it_188!=((void*)0)    ) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__117 = self;
    return __result_obj__117;
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

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
struct sStructNode* __result_obj__118;
void* __right_value175 = (void*)0;
struct sStructNode* result_212;
void* __right_value176 = (void*)0;
char* __dec_obj58;
void* __right_value177 = (void*)0;
char* __dec_obj59;
void* __right_value178 = (void*)0;
struct sClass* __dec_obj60;
struct sStructNode* __result_obj__119;
    if(    self==(void*)0    ) {
        __result_obj__118 = (void*)0;
        return __result_obj__118;
    }
    result_212=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*"));
    if(    self!=((void*)0)    ) {
        result_212->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj58=result_212->sname,
        result_212->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNode_clone", 5, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_212->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj59=result_212->mName,
        result_212->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNode_clone", 7, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        __dec_obj60=result_212->mClass,
        result_212->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer(sClass_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__119 = result_212;
    come_call_finalizer(sStructNode_finalize, result_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct buffer* result_214;
char* p_215;
int sline_216;
void* __right_value185 = (void*)0;
char* buf_217;
char* head_218;
char* tail_219;
char* head_220;
char* tail_221;
void* __right_value186 = (void*)0;
char* __result_obj__122;
    parse_sharp_v5(info);
    result_214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 410, "struct buffer*"))));
    while(    1    ) {
        if(        xisalnum(*info->p)||*info->p==95        ) {
        }
        else {
            break;
        }
        p_215=info->p;
        sline_216=info->sline;
        buf_217=(char*)come_increment_ref_count(parse_word(info));
        info->p=p_215;
        info->sline=sline_216;
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0        ) {
            head_218=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_219=info->p;
            buffer_append(result_214,head_218,tail_219-head_218);
        }
        else if(        string_operator_equals(buf_217,"asm")        ) {
            head_220=info->p;
            info->p+=strlen("asm");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_221=info->p;
            buffer_append(result_214,head_220,tail_221-head_220);
        }
        else {
            (buf_217 = come_decrement_ref_count(buf_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_217 = come_decrement_ref_count(buf_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value186=buffer_to_string(result_214))));
    come_call_finalizer(buffer_finalize, result_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_222;
void* __right_value187 = (void*)0;
char* struct_attribute_223;
void* __right_value188 = (void*)0;
char* type_name_224;
struct sClass* struct_class_225;
void* __right_value189 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sClass* __dec_obj61;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sClass* __dec_obj62;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sType* type_226;
void* __right_value198 = (void*)0;
struct sType* override__227;
char* source_tail_228;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct buffer* header_229;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* id_230;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value211 = (void*)0;
struct sNode* __result_obj__125;
void* __right_value212 = (void*)0;
char* T_232;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sClass* generics_class_233;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* type2_234=0;
char* name_235=0;
_Bool err_236=0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
char* name2_237;
void* __right_value225 = (void*)0;
struct sType* type3_238;
_Bool no_comma_239;
void* __right_value226 = (void*)0;
struct sNode* node_240;
struct sNode* __dec_obj65;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
char* source_tail_241;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* header_242;
void* __right_value234 = (void*)0;
char* id_243;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value238 = (void*)0;
struct sNode* __result_obj__126;
struct sClass* struct_class_244;
void* __right_value239 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sClass* __dec_obj66;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sClass* __dec_obj67;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct sType* type_245;
void* __right_value247 = (void*)0;
struct sType* override__246;
struct sClass* parent_class_247;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* parent_class_name_248;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
_Bool multiple_declare_249;
char* p_250;
int sline_251;
void* __right_value252 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type_252=0;
char* name_253=0;
_Bool err_254=0;
void* __right_value253 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* base_type_255=0;
char* name_256=0;
_Bool err_257=0;
void* __right_value254 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var12 = (void*)0;
struct sType* type2_258=0;
char* name2_259=0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var13 = (void*)0;
struct sType* type2_260=0;
char* name2_261=0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type2_262=0;
char* name_263=0;
_Bool err_264=0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* struct_attribute2_265;
char* source_tail_266;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* header_267;
void* __right_value266 = (void*)0;
char* id_268;
void* __right_value267 = (void*)0;
char* __dec_obj68;
char* __dec_obj69;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
char* __dec_obj70;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value274 = (void*)0;
struct sNode* __result_obj__127;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
_Bool _condtional_value_X8;
_Bool uniq_class_269;
void* __right_value277 = (void*)0;
char* source_head_270;
void* __right_value278 = (void*)0;
char* type_name_271;
void* __right_value279 = (void*)0;
char* id_272;
struct sClass* parent_class_273;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
char* parent_class_name_274;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sClass$p* parent_classes_275;
struct sClass* parent_class2_278;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sClass* struct_class_282;
void* __right_value294 = (void*)0;
char* __dec_obj71;
struct sClass* defining_class_283;
void* __right_value295 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1sClass$p* o2_saved_289;
struct sClass* parent_292;
_Bool _condtional_value_X10;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_295;
struct tuple2$2char$phsType$ph* it_296;
void* __right_value304 = (void*)0;
char* head_297;
char* p_saved_298;
int sline_saved_299;
char* sname_saved_300;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1sNode$ph* methods_301;
void* __right_value307 = (void*)0;
char* __dec_obj72;
char* __dec_obj73;
struct map$2char$phchar$ph* __dec_obj74;
_Bool include__304;
_Bool multiple_declare_305;
char* p_306;
int sline_307;
void* __right_value308 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_308=0;
char* name_309=0;
_Bool err_310=0;
_Bool define_function_flag_311;
char* p_312;
int sline_313;
_Bool invalid_type_314;
void* __right_value309 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* result_type_315=0;
char* fun_name_316=0;
_Bool err_317=0;
char* word_318;
void* __right_value310 = (void*)0;
char* __dec_obj75;
void* __right_value311 = (void*)0;
char* __dec_obj76;
char* __dec_obj77;
void* __right_value312 = (void*)0;
char* __dec_obj78;
char* tail_319;
int pointer_num_320;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* __dec_obj79;
void* __right_value315 = (void*)0;
struct sNode* method_321;
struct sType* __dec_obj80;
void* __right_value319 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* base_type_325=0;
char* name_326=0;
_Bool err_327=0;
void* __right_value320 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var18 = (void*)0;
struct sType* type2_328=0;
char* name2_329=0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var19 = (void*)0;
struct sType* type2_330=0;
char* name2_331=0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
char* module_name_332;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1char$ph* params_333;
void* __right_value330 = (void*)0;
char* word_334;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* __dec_obj84;
void* __right_value334 = (void*)0;
char* __dec_obj85;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sClassModule* module_341;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2char$phchar$ph* __dec_obj87;
int i_347;
struct list$1char$ph* o2_saved_348;
char* it_349;
void* __right_value350 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
char* __dec_obj88;
void* __right_value362 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* type2_377=0;
char* name_378=0;
_Bool err_379=0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
char* __dec_obj89;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value374 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value375 = (void*)0;
struct sNode* __result_obj__167;
struct_class_225 = (void*)0;
struct_class_244 = (void*)0;
    if(    charp_operator_equals(buf,"struct")    ) {
        source_head_222=head;
        struct_attribute_223=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_224=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_condtional_value_X5=(((struct sClass*)(__right_value189=map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0))))==((void*)0))),            come_call_finalizer(sClass_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X5            ) {
                __dec_obj61=struct_class_225,
                struct_class_225=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 472, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_224),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 474, "struct sClass*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
            }
            else {
                __dec_obj62=struct_class_225,
                struct_class_225=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0)));
                come_call_finalizer(sClass_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            type_226=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 479, "struct sType*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,info));
            override__227=((struct sType*)(__right_value198=map$2char$phsType$ph_at(info->types,type_name_224,((void*)0))));
            come_call_finalizer(sType_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            override__227            ) {
                if(                override__227->mTypedef                ) {
                    type_226->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_224),(struct sType*)come_increment_ref_count(type_226));
            source_tail_228=info->p;
            header_229=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 490, "struct buffer*"))));
            buffer_append(header_229,source_head_222,source_tail_228-source_head_222);
            id_230=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value202=__builtin_string(type_name_224))),";"));
            (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            add_come_code_at_come_struct_header(info,id_230,"%s",((char*)(__right_value204=buffer_to_string(header_229))));
            (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 496, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value207=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 496, "struct sStructNobodyNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__125 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value211=_inf_value4)));
            come_call_finalizer(sClass_finalize, struct_class_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_230 = come_decrement_ref_count(id_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sStructNobodyNode_finalize, __right_value207, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value211) ? __right_value211 = come_decrement_ref_count(__right_value211, ((struct sNode*)__right_value211)->finalize, ((struct sNode*)__right_value211)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__125) ? __result_obj__125 = come_decrement_ref_count(__result_obj__125, ((struct sNode*)__result_obj__125)->finalize, ((struct sNode*)__result_obj__125)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__125;
            come_call_finalizer(sClass_finalize, struct_class_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_230 = come_decrement_ref_count(id_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        *info->p==60        ) {
            list$1char$ph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while(            (_Bool)1            ) {
                T_232=(char*)come_increment_ref_count(parse_word(info));
                list$1char$ph_push_back(info->generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(T_232, "14struct.c", 506, "char*")));
                if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T_232 = come_decrement_ref_count(T_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                else if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value214=err_msg(info,"invalid generics struct definition")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value214, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                (T_232 = come_decrement_ref_count(T_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            (_condtional_value_X6=(((struct sClass*)(__right_value216=map$2char$phsClass$ph_at(info->generics_classes,((char*)(__right_value215=__builtin_string(type_name_224))),((void*)0))))!=((void*)0))),            (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sClass_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X6            ) {
                ((struct tuple2$2int$bool$*)(__right_value217=err_msg(info,"redefined generics struct(%s)",type_name_224)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value217, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            generics_class_233=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 528, "struct sClass*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
            map$2char$phsClass$ph_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name_224)),(struct sClass*)come_increment_ref_count(generics_class_233));
            expected_next_character(123,info);
            while(            (_Bool)1            ) {
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value221=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_234=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_235=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_236=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value221, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_236                ) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44                ) {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_233->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 553, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_235),(struct sType*)come_increment_ref_count(type2_234))));
                    while(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_237=(char*)come_increment_ref_count(parse_word(info));
                        type3_238=(struct sType*)come_increment_ref_count(sType_clone(type2_234));
                        if(                        *info->p==58                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_239=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_240=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_239;
                            __dec_obj65=type3_238->mSizeNum,
                            type3_238->mSizeNum=(struct sNode*)come_increment_ref_count(node_240);
                            (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                            ((node_240) ? node_240 = come_decrement_ref_count(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        }
                        list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_233->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 575, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_237),(struct sType*)come_increment_ref_count(type3_238))));
                        (name2_237 = come_decrement_ref_count(name2_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, type3_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_233->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 579, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_235),(struct sType*)come_increment_ref_count(type2_234))));
                }
                if(                *info->p==59                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, type2_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_235 = come_decrement_ref_count(name_235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer(sType_finalize, type2_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_235 = come_decrement_ref_count(name_235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            ((struct tuple2$2char$phchar$ph*)(__right_value231=parse_attribute(info,(_Bool)0)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value231, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1char$ph_reset(info->generics_type_names);
            source_tail_241=info->p;
            header_242=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 603, "struct buffer*"))));
            buffer_append_str(header_242,"struct ");
            buffer_append(header_242,source_head_222,source_tail_241-source_head_222);
            id_243=(char*)come_increment_ref_count(__builtin_string(type_name_224));
            add_come_code_at_come_struct_header(info,id_243,"%s;\n",((char*)(__right_value235=buffer_to_string(header_242))));
            (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 610, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value237=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 610, "struct sNothingNode*")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__126 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value238=_inf_value5)));
            come_call_finalizer(sClass_finalize, generics_class_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_243 = come_decrement_ref_count(id_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sNothingNode_finalize, __right_value237, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value238) ? __right_value238 = come_decrement_ref_count(__right_value238, ((struct sNode*)__right_value238)->finalize, ((struct sNode*)__right_value238)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__126;
            come_call_finalizer(sClass_finalize, generics_class_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, header_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_243 = come_decrement_ref_count(id_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            if(            (_condtional_value_X7=(((struct sClass*)(__right_value239=map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0))))==((void*)0))),            come_call_finalizer(sClass_finalize, __right_value239, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X7            ) {
                __dec_obj66=struct_class_244,
                struct_class_244=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 615, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_224)),(struct sClass*)come_increment_ref_count(struct_class_244));
            }
            else {
                __dec_obj67=struct_class_244,
                struct_class_244=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_224,((void*)0)));
                come_call_finalizer(sClass_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_reset(struct_class_244->mFields);
            }
            type_245=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 623, "struct sType*")),(char*)come_increment_ref_count(type_name_224),(_Bool)0,info));
            override__246=((struct sType*)(__right_value247=map$2char$phsType$ph_at(info->types,type_name_224,((void*)0))));
            come_call_finalizer(sType_finalize, __right_value247, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            override__246            ) {
                if(                override__246->mTypedef                ) {
                    type_245->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_224),(struct sType*)come_increment_ref_count(type_245));
            parent_class_247=((void*)0);
            if(            parsecmp("extends",info)            ) {
                ((char*)(__right_value248=parse_word(info)));
                (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                parent_class_name_248=(char*)come_increment_ref_count(parse_word(info));
                parent_class_247=((struct sClass*)(__right_value250=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_248)));
                come_call_finalizer(sClass_finalize, __right_value250, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                parent_class_247==((void*)0)                ) {
                    ((struct tuple2$2int$bool$*)(__right_value251=err_msg(info,"invalid class name(%s)",parent_class_name_248)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value251, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(1);
                }
                (parent_class_name_248 = come_decrement_ref_count(parent_class_name_248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            expected_next_character(123,info);
            while(            (_Bool)1            ) {
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_249=(_Bool)0;
                {
                    p_250=info->p;
                    sline_251=info->sline;
                    multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value252=backtrace_parse_type((_Bool)1,info)));
                    type_252=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_253=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_254=multiple_assign_var10->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value252, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    err_254&&*info->p==44                    ) {
                        multiple_declare_249=(_Bool)1;
                    }
                    info->p=p_250;
                    info->sline=sline_251;
                    come_call_finalizer(sType_finalize, type_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_253 = come_decrement_ref_count(name_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                if(                multiple_declare_249                ) {
                    multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value253=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_255=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_256=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_257=multiple_assign_var11->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value253, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    multiple_assign_var12=((struct tuple2$2sType$phchar$ph*)(__right_value254=parse_variable_name((struct sType*)come_increment_ref_count(base_type_255),(_Bool)1,info)));
                    type2_258=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_259=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value254, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_244->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 677, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_259),(struct sType*)come_increment_ref_count(type2_258))));
                    while(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sType$phchar$ph*)(__right_value257=parse_variable_name((struct sType*)come_increment_ref_count(base_type_255),(_Bool)0,info)));
                        type2_260=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_261=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value257, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_244->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 685, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_261),(struct sType*)come_increment_ref_count(type2_260))));
                        come_call_finalizer(sType_finalize, type2_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (name2_261 = come_decrement_ref_count(name2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    come_call_finalizer(sType_finalize, base_type_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type2_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name2_259 = come_decrement_ref_count(name2_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value260=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_262=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_263=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_264=multiple_assign_var14->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value260, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_264                    ) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_244->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 695, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_263),(struct sType*)come_increment_ref_count(type2_262))));
                    come_call_finalizer(sType_finalize, type2_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_263 = come_decrement_ref_count(name_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                if(                *info->p==59                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_265=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1char$ph_reset(info->generics_type_names);
            source_tail_266=info->p;
            header_267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 720, "struct buffer*"))));
            buffer_append(header_267,source_head_222,source_tail_266-source_head_222);
            id_268=(char*)come_increment_ref_count(__builtin_string(type_name_224));
            add_come_code_at_come_struct_header(info,id_268,"%s;\n",((char*)(__right_value267=buffer_to_string(header_267))));
            (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            string_operator_equals(struct_attribute_223,"")&&string_operator_equals(struct_attribute2_265,"")            ) {
            }
            else if(            string_operator_equals(struct_attribute_223,"")            ) {
                __dec_obj68=struct_class_244->mAttribute,
                struct_class_244->mAttribute=(char*)come_increment_ref_count(struct_attribute2_265);
                __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_265,"")            ) {
                __dec_obj69=struct_class_244->mAttribute,
                struct_class_244->mAttribute=(char*)come_increment_ref_count(struct_attribute_223);
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj70=struct_class_244->mAttribute,
                struct_class_244->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value269=string_operator_add(struct_attribute_223," "))),struct_attribute2_265));
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 738, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value273=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 738, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_224)),struct_class_244,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__127 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value274=_inf_value6)));
            come_call_finalizer(sClass_finalize, struct_class_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (struct_attribute2_265 = come_decrement_ref_count(struct_attribute2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, header_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_268 = come_decrement_ref_count(id_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sStructNode_finalize, __right_value273, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value274) ? __right_value274 = come_decrement_ref_count(__right_value274, ((struct sNode*)__right_value274)->finalize, ((struct sNode*)__right_value274)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__127) ? __result_obj__127 = come_decrement_ref_count(__result_obj__127, ((struct sNode*)__result_obj__127)->finalize, ((struct sNode*)__result_obj__127)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__127;
            come_call_finalizer(sClass_finalize, struct_class_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (struct_attribute2_265 = come_decrement_ref_count(struct_attribute2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, header_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (id_268 = come_decrement_ref_count(id_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (struct_attribute_223 = come_decrement_ref_count(struct_attribute_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    (_condtional_value_X8=(!gComeC&&((charp_operator_equals(buf,"uniq")&&string_operator_equals(((char*)(__right_value276=charp_substring(info->p,0,strlen("class")))),"class"))||charp_operator_equals(buf,"class")))),    (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    _condtional_value_X8    ) {
        uniq_class_269=(_Bool)0;
        if(        charp_operator_equals(buf,"uniq")        ) {
            ((char*)(__right_value277=parse_word(info)));
            (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            uniq_class_269=(_Bool)1;
        }
        source_head_270=head;
        type_name_271=(char*)come_increment_ref_count(parse_word(info));
        id_272=(char*)come_increment_ref_count(__builtin_string(type_name_271));
        add_come_code_at_come_struct_header(info,id_272,"struct %s;\n",type_name_271);
        parent_class_273=((void*)0);
        if(        parsecmp("extends",info)        ) {
            ((char*)(__right_value280=parse_word(info)));
            (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            parent_class_name_274=(char*)come_increment_ref_count(parse_word(info));
            parent_class_273=((struct sClass*)(__right_value282=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_274)));
            come_call_finalizer(sClass_finalize, __right_value282, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            parent_class_273==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value283=err_msg(info,"invalid class name(%s)",parent_class_name_274)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(1);
            }
            (parent_class_name_274 = come_decrement_ref_count(parent_class_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        parent_classes_275=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "14struct.c", 771, "struct list$1sClass$p*"))));
        parent_class2_278=parent_class_273;
        while(        parent_class2_278        ) {
            list$1sClass$p_add(parent_classes_275,parent_class2_278);
            if(            parent_class_273->mParentClassName            ) {
                parent_class2_278=((struct sClass*)(__right_value291=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value290=__builtin_string(parent_class_273->mParentClassName))))));
                (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                parent_class2_278=((void*)0);
            }
        }
        struct_class_282=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 784, "struct sClass*")),(char*)come_increment_ref_count(type_name_271),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,uniq_class_269,info));
        if(        parent_class_273        ) {
            __dec_obj71=struct_class_282->mParentClassName,
            struct_class_282->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_273->mName, "14struct.c", 787, "char*"));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        defining_class_283=info->defining_class;
        info->defining_class=struct_class_282;
        if(        (_condtional_value_X9=(((struct sClass*)(__right_value295=map$2char$phsClass$ph_at(info->classes,type_name_271,((void*)0))))==((void*)0))),        come_call_finalizer(sClass_finalize, __right_value295, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X9        ) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_271),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_282)));
        }
        else {
            ((struct sClass*)(__right_value297=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_271)))->mUniq=uniq_class_269;
            come_call_finalizer(sClass_finalize, __right_value297, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        for(        (_condtional_value_X10=(o2_saved_289=(struct list$1sClass$p*)come_increment_ref_count((((struct list$1sClass$p*)(__right_value303=list$1sClass$p_reverse(parent_classes_275))))),parent_292=list$1sClass$p_begin((o2_saved_289)))),        come_call_finalizer(list$1sClass$p$p_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X10        ;        !list$1sClass$p_end((o2_saved_289))        ;        parent_292=list$1sClass$p_next((o2_saved_289))        ){
            for(            o2_saved_295=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((parent_292->mFields)),it_296=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_295))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_295))            ;            it_296=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_295))            ){
                list$1tuple2$2char$phsType$ph$ph_add(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_296)));
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sClass$p$p_finalize, o2_saved_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        expected_next_character(123,info);
        head_297=info->p;
        p_saved_298=((void*)0);
        sline_saved_299=0;
        sname_saved_300=((void*)0);
        methods_301=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "14struct.c", 813, "struct list$1sNode$ph*"))));
        while(        (_Bool)1        ) {
            if(            p_saved_298            ) {
                if(                *info->p==0                ) {
                    info->p=p_saved_298;
                    info->sline=sline_saved_299;
                    __dec_obj72=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_300));
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    p_saved_298=((void*)0);
                    sline_saved_299=0;
                    __dec_obj73=sname_saved_300,
                    sname_saved_300=((void*)0);
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    __dec_obj74=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__304=parsecmp("include",info);
            multiple_declare_305=(_Bool)0;
            if(            include__304==(_Bool)0            ) {
                p_306=info->p;
                sline_307=info->sline;
                if(                memcmp(info->p,"new(",4)!=0                ) {
                    multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value308=backtrace_parse_type((_Bool)1,info)));
                    type_308=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_309=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_310=multiple_assign_var15->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value308, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    err_310&&*info->p==44                    ) {
                        multiple_declare_305=(_Bool)1;
                    }
                    come_call_finalizer(sType_finalize, type_308, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_309 = come_decrement_ref_count(name_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                info->p=p_306;
                info->sline=sline_307;
            }
            define_function_flag_311=(_Bool)0;
            if(            include__304==(_Bool)0            ) {
                p_312=info->p;
                sline_313=info->sline;
                if(                memcmp(info->p,"new(",4)==0                ) {
                    define_function_flag_311=(_Bool)1;
                }
                else {
                    invalid_type_314=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value309=backtrace_parse_type((_Bool)0,info)));
                        result_type_315=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_316=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_317=multiple_assign_var16->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value309, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, result_type_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (fun_name_316 = come_decrement_ref_count(fun_name_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    word_318=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95                    ) {
                        __dec_obj75=word_318,
                        word_318=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(word_318,"extern")                        ) {
                            __dec_obj76=word_318,
                            word_318=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                    }
                    else {
                        __dec_obj77=word_318,
                        word_318=((void*)0);
                        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_318                    ) {
                        if(                        is_type_name(word_318,info)                        ) {
                            while(                            *info->p==42                            ) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93                            ) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58                            ) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58                            ) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95                            ) {
                                __dec_obj78=word_318,
                                word_318=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            }
                        }
                        if(                        strlen(word_318)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))                        ) {
                            define_function_flag_311=(_Bool)1;
                        }
                    }
                    (word_318 = come_decrement_ref_count(word_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                info->p=p_312;
                info->sline=sline_313;
            }
            if(            define_function_flag_311            ) {
                tail_319=info->p;
                pointer_num_320=1;
                __dec_obj79=info->class_type,
                info->class_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 923, "struct sType*")),(char*)come_increment_ref_count(type_name_271),(_Bool)0,info));
                come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->class_type->mPointerNum=pointer_num_320;
                info->in_class=(_Bool)1;
                method_321=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj80=info->class_type,
                info->class_type=((void*)0);
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNode$ph_push_back(methods_301,(struct sNode*)come_increment_ref_count(method_321));
                ((method_321) ? method_321 = come_decrement_ref_count(method_321, ((struct sNode*)method_321)->finalize, ((struct sNode*)method_321)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else if(            multiple_declare_305            ) {
                multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value319=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_325=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_326=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_327=multiple_assign_var17->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value319, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value320=parse_variable_name((struct sType*)come_increment_ref_count(base_type_325),(_Bool)1,info)));
                type2_328=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_329=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value320, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 940, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_329),(struct sType*)come_increment_ref_count(type2_328))));
                while(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sType$phchar$ph*)(__right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_325),(_Bool)0,info)));
                    type2_330=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_331=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value323, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 948, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_331),(struct sType*)come_increment_ref_count(type2_330))));
                    come_call_finalizer(sType_finalize, type2_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name2_331 = come_decrement_ref_count(name2_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                expected_next_character(59,info);
                come_call_finalizer(sType_finalize, base_type_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type2_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name2_329 = come_decrement_ref_count(name2_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            parsecmp("include",info)            ) {
                ((char*)(__right_value326=parse_word(info)));
                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                module_name_332=(char*)come_increment_ref_count(parse_word(info));
                params_333=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "14struct.c", 957, "struct list$1char$ph*"))));
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        word_334=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_333,(char*)come_increment_ref_count(word_334));
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value331=err_msg(info,"invalid source end")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value331, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        else if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_334 = come_decrement_ref_count(word_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value332=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value332, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        (word_334 = come_decrement_ref_count(word_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                if(                *info->p==59                ) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_298=info->p;
                sline_saved_299=info->sline;
                __dec_obj84=sname_saved_300,
                sname_saved_300=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj85=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_332));
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->sline=0;
                if(                (_condtional_value_X11=(((struct sClassModule*)(__right_value337=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value336=__builtin_string(module_name_332))))))==((void*)0))),                (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                come_call_finalizer(sClassModule_finalize, __right_value337, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X11                ) {
                    ((struct tuple2$2int$bool$*)(__right_value338=err_msg(info,"module not found")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(1);
                }
                module_341=((struct sClassModule*)(__right_value341=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value340=__builtin_string(module_name_332))))));
                (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value341, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                list$1char$ph_length(module_341->mParams)!=list$1char$ph_length(params_333)                ) {
                    ((struct tuple2$2int$bool$*)(__right_value342=err_msg(info,"invalid parametor number")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value342, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(1);
                }
                __dec_obj87=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "14struct.c", 1011, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                i_347=0;
                for(                o2_saved_348=(struct list$1char$ph*)come_increment_ref_count((module_341->mParams)),it_349=list$1char$ph_begin((o2_saved_348))                ;                !list$1char$ph_end((o2_saved_348))                ;                it_349=list$1char$ph_next((o2_saved_348))                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_349)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value359=list$1char$ph_operator_load_element(params_333,i_347))))));
                    (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    i_347++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                info->p=module_341->mText;
                info->sline=module_341->mSLine;
                __dec_obj88=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_341->mSName));
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (module_name_332 = come_decrement_ref_count(module_name_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params_333, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value362=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_377=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_378=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_379=multiple_assign_var20->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value362, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_379                ) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_282->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1030, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_378),(struct sType*)come_increment_ref_count(type2_377))));
                if(                *info->p==59                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer(sType_finalize, type2_377, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_378 = come_decrement_ref_count(name_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_298        ) {
            if(            info->p==0            ) {
                info->p=p_saved_298;
                info->sline=sline_saved_299;
                __dec_obj89=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_300));
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                p_saved_298=((void*)0);
                sline_saved_299=0;
            }
        }
        list$1char$ph_reset(info->generics_type_names);
        info->defining_class=defining_class_283;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 1064, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value368=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "14struct.c", 1064, "struct sClassNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_271)),(struct sClass*)come_increment_ref_count(struct_class_282),(struct list$1sNode$ph*)come_increment_ref_count(methods_301),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value374=_inf_value7)));
        (type_name_271 = come_decrement_ref_count(type_name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (id_272 = come_decrement_ref_count(id_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_saved_300 = come_decrement_ref_count(sname_saved_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, methods_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClassNode_finalize, __right_value368, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value374) ? __right_value374 = come_decrement_ref_count(__right_value374, ((struct sNode*)__right_value374)->finalize, ((struct sNode*)__right_value374)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__166;
        (type_name_271 = come_decrement_ref_count(type_name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (id_272 = come_decrement_ref_count(id_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_saved_300 = come_decrement_ref_count(sname_saved_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, methods_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__167 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value375=top_level_v97(buf,head,head_sline,info))));
    ((__right_value375) ? __right_value375 = come_decrement_ref_count(__right_value375, ((struct sNode*)__right_value375)->finalize, ((struct sNode*)__right_value375)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__167) ? __result_obj__167 = come_decrement_ref_count(__result_obj__167, ((struct sNode*)__result_obj__167)->finalize, ((struct sNode*)__result_obj__167)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__167;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
struct sStructNobodyNode* __result_obj__123;
void* __right_value208 = (void*)0;
struct sStructNobodyNode* result_231;
void* __right_value209 = (void*)0;
char* __dec_obj63;
void* __right_value210 = (void*)0;
char* __dec_obj64;
struct sStructNobodyNode* __result_obj__124;
    if(    self==(void*)0    ) {
        __result_obj__123 = (void*)0;
        return __result_obj__123;
    }
    result_231=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*"));
    if(    self!=((void*)0)    ) {
        result_231->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj63=result_231->sname,
        result_231->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNobodyNode_clone", 5, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_231->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj64=result_231->mName,
        result_231->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNobodyNode_clone", 7, "char*"));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__124 = result_231;
    come_call_finalizer(sStructNobodyNode_finalize, result_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self){
struct list$1sClass$p* __result_obj__128;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__128 = (struct list$1sClass$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1sClass$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self){
struct list_item$1sClass$p* it_276;
struct list_item$1sClass$p* prev_it_277;
    it_276=self->head;
    while(    it_276!=((void*)0)    ) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer(list_item$1sClass$p$p_finalize, prev_it_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self){
}

static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item){
void* __right_value286 = (void*)0;
struct list_item$1sClass$p* litem_279;
void* __right_value287 = (void*)0;
struct list_item$1sClass$p* litem_280;
void* __right_value288 = (void*)0;
struct list_item$1sClass$p* litem_281;
struct list$1sClass$p* __result_obj__129;
    if(    self->len==0    ) {
        litem_279=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value286=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1045, "struct list_item$1sClass$p*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        litem_279->item=item;
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1    ) {
        litem_280=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value287=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1055, "struct list_item$1sClass$p*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        litem_280->item=item;
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value288=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1065, "struct list_item$1sClass$p*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        litem_281->item=item;
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self){
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1sClass$p* result_284;
struct list_item$1sClass$p* it_285;
struct list$1sClass$p* __result_obj__131;
    result_284=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "./comelang.h", 1821, "struct list$1sClass$p*"))));
    it_285=self->tail;
    while(    it_285!=((void*)0)    ) {
        list$1sClass$p_push_back(result_284,it_285->item);
        it_285=it_285->prev;
    }
    __result_obj__131 = (struct list$1sClass$p*)come_increment_ref_count(result_284);
    come_call_finalizer(list$1sClass$p$p_finalize, result_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
}

static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item){
void* __right_value300 = (void*)0;
struct list_item$1sClass$p* litem_286;
void* __right_value301 = (void*)0;
struct list_item$1sClass$p* litem_287;
void* __right_value302 = (void*)0;
struct list_item$1sClass$p* litem_288;
struct list$1sClass$p* __result_obj__130;
    if(    self->len==0    ) {
        litem_286=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value300=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1115, "struct list_item$1sClass$p*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        litem_286->item=item;
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1    ) {
        litem_287=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value301=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1125, "struct list_item$1sClass$p*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        litem_287->item=item;
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value302=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1135, "struct list_item$1sClass$p*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        litem_288->item=item;
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self){
struct sClass* result_290;
struct sClass* __result_obj__132;
struct sClass* __result_obj__133;
struct sClass* result_291;
struct sClass* __result_obj__134;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_290,0,sizeof(struct sClass*));
        __result_obj__132 = result_290;
        return __result_obj__132;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__133 = self->it->item;
        return __result_obj__133;
    }
    memset(&result_291,0,sizeof(struct sClass*));
    __result_obj__134 = result_291;
    return __result_obj__134;
}

static _Bool list$1sClass$p_end(struct list$1sClass$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self){
struct sClass* result_293;
struct sClass* __result_obj__135;
struct sClass* __result_obj__136;
struct sClass* result_294;
struct sClass* __result_obj__137;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_293,0,sizeof(struct sClass*));
        __result_obj__135 = result_293;
        return __result_obj__135;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__136 = self->it->item;
        return __result_obj__136;
    }
    memset(&result_294,0,sizeof(struct sClass*));
    __result_obj__137 = result_294;
    return __result_obj__137;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_302;
int i_303;
    for(    i_302=0    ;    i_302<self->size    ;    i_302++    ){
        if(        self->item_existance[i_302]        ) {
            if(            1            ) {
                (self->items[i_302] = come_decrement_ref_count(self->items[i_302], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_303=0    ;    i_303<self->size    ;    i_303++    ){
        if(        self->item_existance[i_303]        ) {
            if(            1            ) {
                (self->keys[i_303] = come_decrement_ref_count(self->keys[i_303], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value316 = (void*)0;
struct list_item$1sNode$ph* litem_322;
struct sNode* __dec_obj81;
void* __right_value317 = (void*)0;
struct list_item$1sNode$ph* litem_323;
struct sNode* __dec_obj82;
void* __right_value318 = (void*)0;
struct list_item$1sNode$ph* litem_324;
struct sNode* __dec_obj83;
struct list$1sNode$ph* __result_obj__138;
    if(    self->len==0    ) {
        litem_322=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value316=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1115, "struct list_item$1sNode$ph*"))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj81=litem_322->item,
        litem_322->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1    ) {
        litem_323=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value317=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1125, "struct list_item$1sNode$ph*"))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj82=litem_323->item,
        litem_323->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value318=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1135, "struct list_item$1sNode$ph*"))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj83=litem_324->item,
        litem_324->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result_obj__138 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__138;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_335;
unsigned int hash_336;
unsigned int it_337;
struct sClassModule* __result_obj__139;
struct sClassModule* __result_obj__140;
struct sClassModule* __result_obj__141;
struct sClassModule* __result_obj__142;
default_value_335 = (void*)0;
    memset(&default_value_335,0,sizeof(struct sClassModule*));
    hash_336=string_get_hash_key(((char*)key))%self->size;
    it_337=hash_336;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_337]        ) {
            if(            string_equals(self->keys[it_337],key)            ) {
                __result_obj__139 = (struct sClassModule*)come_increment_ref_count(self->items[it_337]);
                come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__139;
            }
            it_337++;
            if(            it_337>=self->size            ) {
                it_337=0;
            }
            else if(            it_337==hash_336            ) {
                __result_obj__140 = (struct sClassModule*)come_increment_ref_count(default_value_335);
                come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__140;
            }
        }
        else {
            __result_obj__141 = (struct sClassModule*)come_increment_ref_count(default_value_335);
            come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__141;
        }
    }
    __result_obj__142 = (struct sClassModule*)come_increment_ref_count(default_value_335);
    come_call_finalizer(sClassModule_finalize, default_value_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)    ) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)    ) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_338;
unsigned int hash_339;
unsigned int it_340;
struct sClassModule* __result_obj__143;
struct sClassModule* __result_obj__144;
struct sClassModule* __result_obj__145;
struct sClassModule* __result_obj__146;
default_value_338 = (void*)0;
    memset(&default_value_338,0,sizeof(struct sClassModule*));
    hash_339=string_get_hash_key(((char*)key))%self->size;
    it_340=hash_339;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_340]        ) {
            if(            string_equals(self->keys[it_340],key)            ) {
                __result_obj__143 = (struct sClassModule*)come_increment_ref_count(self->items[it_340]);
                come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__143;
            }
            it_340++;
            if(            it_340>=self->size            ) {
                it_340=0;
            }
            else if(            it_340==hash_339            ) {
                __result_obj__144 = (struct sClassModule*)come_increment_ref_count(default_value_338);
                come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__144;
            }
        }
        else {
            __result_obj__145 = (struct sClassModule*)come_increment_ref_count(default_value_338);
            come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__145;
        }
    }
    __result_obj__146 = (struct sClassModule*)come_increment_ref_count(default_value_338);
    come_call_finalizer(sClassModule_finalize, default_value_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
int i_342;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1char$ph* __dec_obj86;
struct map$2char$phchar$ph* __result_obj__148;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value344=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1942, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value345=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1943, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1944, "_Bool*"))));
    for(    i_342=0    ;    i_342<128    ;    i_342++    ){
        self->item_existance[i_342]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj86=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1954, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__148 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__147;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__147 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_343;
struct list_item$1char$p* prev_it_344;
    it_343=self->head;
    while(    it_343!=((void*)0)    ) {
        prev_it_344=it_343;
        it_343=it_343->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_345;
int i_346;
    for(    i_345=0    ;    i_345<self->size    ;    i_345++    ){
        if(        self->item_existance[i_345]        ) {
            if(            1            ) {
                (self->items[i_345] = come_decrement_ref_count(self->items[i_345], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_346=0    ;    i_346<self->size    ;    i_346++    ){
        if(        self->item_existance[i_346]        ) {
            if(            1            ) {
                (self->keys[i_346] = come_decrement_ref_count(self->keys[i_346], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_367;
unsigned int it_368;
_Bool same_key_exist_369;
char* it2_370;
struct map$2char$phchar$ph* __result_obj__159;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_367=string_get_hash_key(((char*)key))%self->size;
    it_368=hash_367;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_368]        ) {
            if(            string_equals(self->keys[it_368],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_368]);
                    (self->keys[it_368] = come_decrement_ref_count(self->keys[it_368], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_368]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_368]);
                    self->keys[it_368]=key;
                }
                if(                1                ) {
                    (self->items[it_368] = come_decrement_ref_count(self->items[it_368], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_368]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_368]=item;
                }
                break;
            }
            it_368++;
            if(            it_368>=self->size            ) {
                it_368=0;
            }
            else if(            it_368==hash_367            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_368]=(_Bool)1;
            if(            1            ) {
                self->keys[it_368]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_368]=key;
            }
            if(            1            ) {
                self->items[it_368]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_368]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_369=(_Bool)0;
    for(    it2_370=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_370=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_370,key)        ) {
            same_key_exist_369=(_Bool)1;
        }
    }
    if(    !same_key_exist_369    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__159 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__159;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_350;
void* __right_value351 = (void*)0;
char** keys_351;
void* __right_value352 = (void*)0;
char** items_352;
void* __right_value353 = (void*)0;
_Bool* item_existance_353;
int len_354;
char* it_357;
char* default_value_360;
void* __right_value354 = (void*)0;
char* it2_361;
unsigned int hash_364;
int n_365;
char* default_value_366;
void* __right_value355 = (void*)0;
default_value_360 = (void*)0;
default_value_366 = (void*)0;
    size_350=self->size*10;
    keys_351=(char**)come_increment_ref_count(((char**)(__right_value351=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_350)), "./comelang.h", 2181, "char**"))));
    items_352=(char**)come_increment_ref_count(((char**)(__right_value352=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_350)), "./comelang.h", 2182, "char**"))));
    item_existance_353=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_350)), "./comelang.h", 2183, "_Bool*"))));
    len_354=0;
    for(    it_357=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it_357=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_360,0,sizeof(char*));
        it2_361=((char*)(__right_value354=map$2char$phchar$ph_at(self,it_357,(char*)come_increment_ref_count(default_value_360))));
        (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash_364=string_get_hash_key(((char*)it_357))%size_350;
        n_365=hash_364;
        while(        (_Bool)1        ) {
            if(            item_existance_353[n_365]            ) {
                n_365++;
                if(                n_365>=size_350                ) {
                    n_365=0;
                }
                else if(                n_365==hash_364                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_353[n_365]=(_Bool)1;
                keys_351[n_365]=it_357;
                items_352[n_365]=((char*)(__right_value355=map$2char$phchar$ph_at(self,it_357,(char*)come_increment_ref_count(default_value_366))));
                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len_354++;
                (default_value_366 = come_decrement_ref_count(default_value_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_366 = come_decrement_ref_count(default_value_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value_360 = come_decrement_ref_count(default_value_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_351;
    self->items=items_352;
    self->item_existance=item_existance_353;
    self->size=size_350;
    self->len=len_354;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_355;
char* __result_obj__149;
char* __result_obj__150;
char* result_356;
char* __result_obj__151;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_355,0,sizeof(char*));
        __result_obj__149 = result_355;
        return __result_obj__149;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__150 = self->key_list->it->item;
        return __result_obj__150;
    }
    memset(&result_356,0,sizeof(char*));
    __result_obj__151 = result_356;
    return __result_obj__151;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_358;
char* __result_obj__152;
char* __result_obj__153;
char* result_359;
char* __result_obj__154;
result_358 = (void*)0;
result_359 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_358,0,sizeof(char*));
        __result_obj__152 = result_358;
        return __result_obj__152;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__153 = self->key_list->it->item;
        return __result_obj__153;
    }
    memset(&result_359,0,sizeof(char*));
    __result_obj__154 = result_359;
    return __result_obj__154;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_362;
unsigned int it_363;
char* __result_obj__155;
char* __result_obj__156;
char* __result_obj__157;
char* __result_obj__158;
    hash_362=string_get_hash_key(((char*)key))%self->size;
    it_363=hash_362;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_363]        ) {
            if(            string_equals(self->keys[it_363],key)            ) {
                __result_obj__155 = (char*)come_increment_ref_count(self->items[it_363]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__155;
            }
            it_363++;
            if(            it_363>=self->size            ) {
                it_363=0;
            }
            else if(            it_363==hash_362            ) {
                __result_obj__156 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__156;
            }
        }
        else {
            __result_obj__157 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__157;
        }
    }
    __result_obj__158 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_371;
int i_372;
char* __result_obj__160;
char* default_value_373;
char* __result_obj__161;
default_value_373 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_371=self->head;
    i_372=0;
    while(    it_371!=((void*)0)    ) {
        if(        position==i_372        ) {
            __result_obj__160 = (char*)come_increment_ref_count(it_371->item);
            (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__160;
        }
        it_371=it_371->next;
        i_372++;
    }
    memset(&default_value_373,0,sizeof(char*));
    __result_obj__161 = (char*)come_increment_ref_count(default_value_373);
    (default_value_373 = come_decrement_ref_count(default_value_373, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_374;
int i_375;
char* __result_obj__162;
char* default_value_376;
char* __result_obj__163;
default_value_376 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_374=self->head;
    i_375=0;
    while(    it_374!=((void*)0)    ) {
        if(        position==i_375        ) {
            __result_obj__162 = (char*)come_increment_ref_count(it_374->item);
            (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__162;
        }
        it_374=it_374->next;
        i_375++;
    }
    memset(&default_value_376,0,sizeof(char*));
    __result_obj__163 = (char*)come_increment_ref_count(default_value_376);
    (default_value_376 = come_decrement_ref_count(default_value_376, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
struct sClassNode* __result_obj__164;
void* __right_value369 = (void*)0;
struct sClassNode* result_380;
void* __right_value370 = (void*)0;
char* __dec_obj90;
void* __right_value371 = (void*)0;
char* __dec_obj91;
void* __right_value372 = (void*)0;
struct sClass* __dec_obj92;
void* __right_value373 = (void*)0;
struct list$1sNode$ph* __dec_obj93;
struct sClassNode* __result_obj__165;
    if(    self==(void*)0    ) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result_380=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*"));
    if(    self!=((void*)0)    ) {
        result_380->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj90=result_380->sname,
        result_380->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sClassNode_clone", 5, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_380->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj91=result_380->mName,
        result_380->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClassNode_clone", 7, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)    ) {
        __dec_obj92=result_380->mClass,
        result_380->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer(sClass_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)    ) {
        __dec_obj93=result_380->mMethods,
        result_380->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mMethods));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__165 = result_380;
    come_call_finalizer(sClassNode_finalize, result_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_struct_381;
char* p_382;
int sline_383;
void* __right_value376 = (void*)0;
char* type_name_384;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
char* struct_attribute_385;
void* __right_value381 = (void*)0;
char* type_name_386;
void* __right_value382 = (void*)0;
struct sNode* __result_obj__168;
void* __right_value383 = (void*)0;
struct sNode* __result_obj__169;
    define_struct_381=(_Bool)0;
    {
        p_382=info->p;
        sline_383=info->sline;
        if(        charp_operator_equals(buf,"struct")        ) {
            if(            xisalpha(*info->p)||*info->p==95            ) {
                type_name_384=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)                ) {
                    ((char*)(__right_value377=parse_word(info)));
                    (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((char*)(__right_value378=parse_word(info)));
                    (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                if(                *info->p==123                ) {
                    ((char*)(__right_value379=skip_block(info,(_Bool)0)));
                    (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    if(                    *info->p==59                    ) {
                        define_struct_381=(_Bool)1;
                    }
                }
                (type_name_384 = come_decrement_ref_count(type_name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_382;
        info->sline=sline_383;
    }
    if(    define_struct_381    ) {
        struct_attribute_385=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_386=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__168 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value382=parse_struct((char*)come_increment_ref_count(type_name_386),(char*)come_increment_ref_count(struct_attribute_385),info))));
        (struct_attribute_385 = come_decrement_ref_count(struct_attribute_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_386 = come_decrement_ref_count(type_name_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__right_value382) ? __right_value382 = come_decrement_ref_count(__right_value382, ((struct sNode*)__right_value382)->finalize, ((struct sNode*)__right_value382)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__168;
        (struct_attribute_385 = come_decrement_ref_count(struct_attribute_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (type_name_386 = come_decrement_ref_count(type_name_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__169 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value383=string_node_v13(buf,head,head_sline,info))));
    ((__right_value383) ? __right_value383 = come_decrement_ref_count(__right_value383, ((struct sNode*)__right_value383)->finalize, ((struct sNode*)__right_value383)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__169;
}

