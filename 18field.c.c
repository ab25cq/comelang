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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNode$ph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
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
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value38 = (void*)0;
struct sType* generics_type_0;
struct sType* __dec_obj25;
struct sClass* klass_30;
char* class_name_31;
void* __right_value39 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1 = (void*)0;
char* fun_name2_32=0;
struct sFun* operator_fun_33=0;
struct sGenericsFun* generics_fun_34=0;
_Bool result_35;
struct sNode* obj_36;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_37;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct sNode* node_43;
_Bool Value_44;
_Bool __result_obj__20;
    generics_type_0=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_0->mNoSolvedGenericsType    ) {
        __dec_obj25=generics_type_0,
        generics_type_0=(struct sType*)come_increment_ref_count(generics_type_0->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value39=get_method(fun_name,(struct sType*)come_increment_ref_count(type),info)));
    fun_name2_32=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_33=multiple_assign_var1->v2;
    generics_fun_34=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value39, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    result_35=(_Bool)0;
    if(    operator_fun_33    ) {
        obj_36=(struct sNode*)come_increment_ref_count(left_node);
        params_37=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "18field.c", 20, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_37,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 22, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_37,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 23, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(middle_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_37,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 24, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(right_node))));
        node_43=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj_36),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_37),((void*)0),0,((void*)0),info,(_Bool)0));
        Value_44=node_compile(node_43,info);
        if(        Value_44        ) {
            result_35=(_Bool)1;
        }
        else {
        }
        ((obj_36) ? obj_36 = come_decrement_ref_count(obj_36, ((struct sNode*)obj_36)->finalize, ((struct sNode*)obj_36)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_43) ? node_43 = come_decrement_ref_count(node_43, ((struct sNode*)node_43)->finalize, ((struct sNode*)node_43)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__20 = result_35;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((middle_node) ? middle_node = come_decrement_ref_count(middle_node, ((struct sNode*)middle_node)->finalize, ((struct sNode*)middle_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, generics_type_0, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__20;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result_7;
void* __right_value1 = (void*)0;
struct sType* __dec_obj1;
void* __right_value2 = (void*)0;
struct sType* __dec_obj2;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value11 = (void*)0;
struct sType* __dec_obj7;
void* __right_value13 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value15 = (void*)0;
char* __dec_obj10;
void* __right_value16 = (void*)0;
char* __dec_obj11;
void* __right_value17 = (void*)0;
char* __dec_obj12;
void* __right_value18 = (void*)0;
char* __dec_obj13;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value27 = (void*)0;
char* __dec_obj18;
void* __right_value28 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value36 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value37 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__1;
    }
    result_7=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_7->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_7->mOriginalLoadVarType,
        result_7->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_7->mChannelType,
        result_7->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_7->mGenericsTypes,
        result_7->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_7->mNoSolvedGenericsType,
        result_7->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_7->mSizeNum,
        result_7->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_7->mAlignas,
        result_7->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_7->mTupleName,
        result_7->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_7->mAttribute,
        result_7->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj12=result_7->mVarAttribute,
        result_7->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_7->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_7->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_7->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_7->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_7->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_7->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_7->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_7->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_7->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_7->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_7->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_7->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_7->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_7->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_7->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_7->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_7->mAsmName,
        result_7->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_7->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_7->mArrayNum,
        result_7->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_7->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_7->mOriginalTypeName,
        result_7->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_7->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_7->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_7->mParamTypes,
        result_7->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_7->mParamNames,
        result_7->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_7->mResultType,
        result_7->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_7->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_7->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result_7);
    come_call_finalizer(sType_finalize, result_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_1;
struct list_item$1sType$ph* prev_it_2;
    it_1=self->head;
    while(    it_1!=((void*)0)    ) {
        prev_it_2=it_1;
        it_1=it_1->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_3;
struct list_item$1sNode$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)    ) {
        prev_it_4=it_3;
        it_3=it_3->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_5;
struct list_item$1char$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        prev_it_6=it_5;
        it_5=it_5->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct list$1sType$ph* result_8;
struct list_item$1sType$ph* it_9;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_8=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1026, "struct list$1sType$ph*"))));
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_8,(struct sType*)come_increment_ref_count(sType_clone(it_9->item)));
        }
        else {
            list$1sType$ph_add(result_8,(struct sType*)come_increment_ref_count(sType_clone(it_9->item)));
        }
        it_9=it_9->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_8);
    come_call_finalizer(list$1sType$ph$p_finalize, result_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
void* __right_value5 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj3;
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj4;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value5=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1045, "struct list_item$1sType$ph*"))));
        litem_10->prev=((void*)0);
        litem_10->next=((void*)0);
        __dec_obj3=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_10;
        self->head=litem_10;
    }
    else if(    self->len==1    ) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1055, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj4=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1065, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj5=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_13;
struct list_item$1sType$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value12 = (void*)0;
struct sNode* result_15;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_15=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_15->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_15->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_15->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_15->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_15->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_15->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_15->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_15->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_15->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_15->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_15);
    ((result_15) ? result_15 = come_decrement_ref_count(result_15, ((struct sNode*)result_15)->finalize, ((struct sNode*)result_15)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1sNode$ph* result_16;
struct list_item$1sNode$ph* it_17;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_16=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1026, "struct list$1sNode$ph*"))));
    it_17=self->head;
    while(    it_17!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_16,(struct sNode*)come_increment_ref_count(sNode_clone(it_17->item)));
        }
        else {
            list$1sNode$ph_add(result_16,(struct sNode*)come_increment_ref_count(sNode_clone(it_17->item)));
        }
        it_17=it_17->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_16);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj14;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj15;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1045, "struct list_item$1sNode$ph*"))));
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        __dec_obj14=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_18;
        self->head=litem_18;
    }
    else if(    self->len==1    ) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1055, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj15=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1065, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj16=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_21;
struct list_item$1sNode$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)    ) {
        prev_it_22=it_21;
        it_21=it_21->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct list$1char$ph* result_23;
struct list_item$1char$ph* it_24;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_23=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1026, "struct list$1char$ph*"))));
    it_24=self->head;
    while(    it_24!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "./comelang.h", 1031, "char*")));
        }
        else {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "./comelang.h", 1034, "char*")));
        }
        it_24=it_24->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_23);
    come_call_finalizer(list$1char$ph$p_finalize, result_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct list_item$1char$ph* litem_25;
char* __dec_obj20;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj21;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj22;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1045, "struct list_item$1char$ph*"))));
        litem_25->prev=((void*)0);
        litem_25->next=((void*)0);
        __dec_obj20=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_25;
        self->head=litem_25;
    }
    else if(    self->len==1    ) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1055, "struct list_item$1char$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj21=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1065, "struct list_item$1char$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj22=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_28;
struct list_item$1char$ph* prev_it_29;
    it_28=self->head;
    while(    it_28!=((void*)0)    ) {
        prev_it_29=it_28;
        it_28=it_28->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_38;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_39;
    it_38=self->head;
    while(    it_38!=((void*)0)    ) {
        prev_it_39=it_38;
        it_38=it_38->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value42 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_40;
struct tuple2$2char$phsNode$ph* __dec_obj26;
void* __right_value43 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_41;
struct tuple2$2char$phsNode$ph* __dec_obj27;
void* __right_value44 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_42;
struct tuple2$2char$phsNode$ph* __dec_obj28;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_40=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1045, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        __dec_obj26=litem_40->item,
        litem_40->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1    ) {
        litem_41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value43=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1055, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        __dec_obj27=litem_41->item,
        litem_41->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value44=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1065, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        __dec_obj28=litem_42->item,
        litem_42->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj29;
struct tuple2$2void$psNode$ph* __result_obj__19;
    self->v1=v1;
    __dec_obj29=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__19 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct sNode* __dec_obj30;
void* __right_value54 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value55 = (void*)0;
char* __dec_obj32;
struct sStoreFieldNode* __result_obj__21;
    ((struct sNodeBase*)(__right_value52=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value52, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj30=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj31=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj32=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__21 = (struct sStoreFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreFieldNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreFieldNode_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __right_value56 = (void*)0;
char* __result_obj__22;
    __result_obj__22 = (char*)come_increment_ref_count(((char*)(__right_value56=__builtin_string("sStoreFieldNode"))));
    (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__22 = come_decrement_ref_count(__result_obj__22, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__22;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_45;
struct sNode* right_46;
void* __right_value57 = (void*)0;
char* name_47;
_Bool Value_48;
_Bool __result_obj__23;
void* __right_value58 = (void*)0;
struct CVALUE* left_value_49;
struct sType* left_type2_50;
struct sType* __dec_obj33;
int i_51;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value61 = (void*)0;
char* __dec_obj34;
void* __right_value62 = (void*)0;
_Bool __result_obj__28;
_Bool Value_58;
_Bool __result_obj__29;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
_Bool new_channel_59;
void* __right_value65 = (void*)0;
struct CVALUE* right_value_60;
struct sType* right_type_61;
struct sType* left_type_62;
struct sType* left_type3_63;
void* __right_value66 = (void*)0;
struct sClass* klass_64;
struct sType* field_type_73;
int index_74;
char* child_field_name_75;
_Bool child_field_is_pointer_76;
void* __right_value67 = (void*)0;
_Bool __result_obj__38;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_77;
struct tuple2$2char$phsType$ph* field_80;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* field_name_83=0;
struct sType* field_type2_84=0;
void* __right_value68 = (void*)0;
struct sType* __dec_obj35;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_85;
struct tuple2$2char$phsType$ph* field_86;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* field_name_87=0;
struct sType* field_type2_88=0;
struct sClass* klass2_89;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_90;
struct tuple2$2char$phsType$ph* field2_91;
struct tuple2$2char$phsType$ph* multiple_assign_var4 = (void*)0;
char* field_name2_92=0;
struct sType* field_type3_93=0;
void* __right_value69 = (void*)0;
char* __dec_obj36;
void* __right_value70 = (void*)0;
struct sType* __dec_obj37;
void* __right_value71 = (void*)0;
struct sType* __dec_obj38;
void* __right_value72 = (void*)0;
_Bool __result_obj__45;
_Bool __result_obj__46;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct CVALUE* come_value_94;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
_Bool __result_obj__47;
char* c_value_95;
void* __right_value80 = (void*)0;
char* __dec_obj39;
void* __right_value81 = (void*)0;
char* __dec_obj40;
void* __right_value82 = (void*)0;
char* __dec_obj41;
void* __right_value83 = (void*)0;
char* __dec_obj42;
void* __right_value84 = (void*)0;
char* c_value_96;
void* __right_value85 = (void*)0;
char* __dec_obj43;
char* c_value_97;
void* __right_value86 = (void*)0;
char* __dec_obj44;
void* __right_value87 = (void*)0;
char* __dec_obj45;
void* __right_value88 = (void*)0;
char* __dec_obj46;
void* __right_value89 = (void*)0;
char* __dec_obj47;
void* __right_value90 = (void*)0;
char* c_value_98;
void* __right_value91 = (void*)0;
char* __dec_obj48;
void* __right_value92 = (void*)0;
_Bool __result_obj__48;
char* c_value_99;
void* __right_value93 = (void*)0;
char* __dec_obj49;
void* __right_value94 = (void*)0;
char* __dec_obj50;
void* __right_value95 = (void*)0;
char* __dec_obj51;
void* __right_value96 = (void*)0;
char* __dec_obj52;
void* __right_value97 = (void*)0;
char* c_value_100;
void* __right_value98 = (void*)0;
char* __dec_obj53;
char* c_value_101;
void* __right_value99 = (void*)0;
char* __dec_obj54;
void* __right_value100 = (void*)0;
char* __dec_obj55;
void* __right_value101 = (void*)0;
char* __dec_obj56;
void* __right_value102 = (void*)0;
char* __dec_obj57;
void* __right_value103 = (void*)0;
char* c_value_102;
void* __right_value104 = (void*)0;
char* __dec_obj58;
void* __right_value105 = (void*)0;
_Bool __result_obj__49;
void* __right_value106 = (void*)0;
char* __dec_obj59;
void* __right_value107 = (void*)0;
char* __dec_obj60;
void* __right_value108 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__51;
void* __right_value112 = (void*)0;
char* __dec_obj65;
void* __right_value113 = (void*)0;
char* __dec_obj66;
void* __right_value114 = (void*)0;
char* __dec_obj67;
void* __right_value115 = (void*)0;
char* __dec_obj68;
void* __right_value116 = (void*)0;
char* __dec_obj69;
void* __right_value117 = (void*)0;
char* __dec_obj70;
void* __right_value118 = (void*)0;
_Bool __result_obj__52;
void* __right_value119 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__53;
c_value_95 = (void*)0;
c_value_97 = (void*)0;
c_value_99 = (void*)0;
c_value_101 = (void*)0;
    left_45=self->mLeft;
    right_46=self->mRight;
    name_47=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_48=node_compile(left_45,info);
    if(    !Value_48    ) {
        __result_obj__23 = (_Bool)0;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__23;
    }
    else {
    }
    left_value_49=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_50=(struct sType*)come_increment_ref_count(left_value_49->type);
    if(    left_type2_50->mNoSolvedGenericsType    ) {
        __dec_obj33=left_type2_50,
        left_type2_50=(struct sType*)come_increment_ref_count(left_type2_50->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(left_type2_50->mClass->mName,"tuple1")||string_operator_equals(left_type2_50->mClass->mName,"tuple2")||string_operator_equals(left_type2_50->mClass->mName,"tuple3")||string_operator_equals(left_type2_50->mClass->mName,"tuple3")||string_operator_equals(left_type2_50->mClass->mName,"tuple4")||string_operator_equals(left_type2_50->mClass->mName,"tuple5")    ) {
        for(        i_51=0        ;        i_51<list$1sType$ph_length(left_type2_50->mGenericsTypes)        ;        i_51++        ){
            if(            (_condtional_value_X1=(string_operator_equals(name_47,((struct sType*)(__right_value60=list$1sType$ph_operator_load_element(left_type2_50->mGenericsTypes,i_51)))->mTupleName))),            come_call_finalizer(sType_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
                __dec_obj34=name_47,
                name_47=(char*)come_increment_ref_count(xsprintf("v%d",i_51+1));
                __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
    }
    if(    left_type2_50->mImmutable    ) {
        ((struct tuple2$2int$bool$*)(__right_value62=err_msg(info,"Immutable object can't change the fields")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__28 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__28;
    }
    Value_58=node_compile(right_46,info);
    if(    !Value_58    ) {
        __result_obj__29 = (_Bool)0;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__29;
    }
    else {
    }
    new_channel_59=string_operator_equals(((char*)(__right_value64=right_46->kind(right_46->_protocol_obj))),"sNewChannel");
    (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    right_value_60=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_61=right_value_60->type;
    left_type_62=(struct sType*)come_increment_ref_count(left_value_49->type);
    left_type3_63=(struct sType*)come_increment_ref_count(left_type_62);
    klass_64=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,left_type3_63->mClass->mName));
    field_type_73=((void*)0);
    index_74=0;
    child_field_name_75=((void*)0);
    child_field_is_pointer_76=(_Bool)0;
    if(    klass_64->mFields==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value67=err_msg(info,"%s fields are null",klass_64->mName)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__38 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__38;
    }
    for(    o2_saved_77=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_64->mFields)),field_80=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_77))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_77))    ;    field_80=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_77))    ){
        multiple_assign_var2=field_80;
        field_name_83=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type2_84=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        string_operator_equals(field_name_83,name_47)        ) {
            __dec_obj35=field_type_73,
            field_type_73=(struct sType*)come_increment_ref_count(sType_clone(field_type2_84));
            come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        index_74++;
        (field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    index_74==list$1tuple2$2char$phsType$ph$ph_length(klass_64->mFields)    ) {
        index_74=0;
        for(        o2_saved_85=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_64->mFields)),field_86=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_85))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_85))        ;        field_86=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_85))        ){
            multiple_assign_var3=field_86;
            field_name_87=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            field_type2_88=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            klass2_89=field_type2_88->mClass;
            if(            klass2_89->mUnion            ) {
                for(                o2_saved_90=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_89->mFields)),field2_91=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_90))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_90))                ;                field2_91=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_90))                ){
                    multiple_assign_var4=field2_91;
                    field_name2_92=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    field_type3_93=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    string_operator_equals(field_name2_92,name_47)                    ) {
                        __dec_obj36=child_field_name_75,
                        child_field_name_75=(char*)come_increment_ref_count(__builtin_string(field_name_87));
                        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        field_type2_88->mPointerNum>0                        ) {
                            child_field_is_pointer_76=(_Bool)1;
                        }
                        __dec_obj37=field_type_73,
                        field_type_73=(struct sType*)come_increment_ref_count(sType_clone(field_type3_93));
                        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        (field_name2_92 = come_decrement_ref_count(field_name2_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, field_type3_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    (field_name2_92 = come_decrement_ref_count(field_name2_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type3_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                if(                child_field_name_75                ) {
                    (field_name_87 = come_decrement_ref_count(field_name_87, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type2_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_87,name_47)            ) {
                __dec_obj38=field_type_73,
                field_type_73=(struct sType*)come_increment_ref_count(sType_clone(field_type2_88));
                come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (field_name_87 = come_decrement_ref_count(field_name_87, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type2_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            index_74++;
            (field_name_87 = come_decrement_ref_count(field_name_87, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        index_74==list$1tuple2$2char$phsType$ph$ph_length(klass_64->mFields)||field_type_73==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value72=err_msg(info,"field not found(%s) in %s(1)",name_47,klass_64->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__45 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__45;
        }
    }
    if(    field_type_73==((void*)0)    ) {
        __result_obj__46 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__46;
    }
    come_value_94=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 165, "struct CVALUE*"))));
    right_type_61=((struct sType*)(__right_value75=sType_clone(right_value_60->type)));
    come_call_finalizer(sType_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    check_assign_type(((char*)(__right_value77=xsprintf("\%s is assigned to(1)",((char*)(__right_value76=string_to_string(name_47)))))),field_type_73,right_type_61,right_value_60,(_Bool)0,(_Bool)1,(_Bool)1,info);
    (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    right_type_61=((struct sType*)(__right_value78=sType_clone(right_value_60->type)));
    come_call_finalizer(sType_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    field_type_73->mHeap&&!right_value_60->type->mHeap    ) {
        if(        string_operator_equals(right_value_60->type->mClass->mName,"void")&&right_value_60->type->mPointerNum==1        ) {
        }
        else {
            if(            !gComeGC            ) {
                ((struct tuple2$2int$bool$*)(__right_value79=err_msg(info,"require right value as heap object(%s)(1)",name_47)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__47 = (_Bool)1;
                (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__47;
            }
        }
    }
    if(    field_type_73->mHeap&&right_type_61->mHeap&&field_type_73->mPointerNum>0&&right_type_61->mPointerNum>0    ) {
        if(        left_value_49->type->mPointerNum==1        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj39=c_value_95,
                    c_value_95=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj40=c_value_95,
                    c_value_95=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_95,info,(_Bool)0);
                std_move(field_type_73,right_type_61,right_value_60,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj41=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj42=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_95 = come_decrement_ref_count(c_value_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_96=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_96,info,(_Bool)0);
                std_move(field_type_73,right_type_61,right_value_60,info,(_Bool)0);
                __dec_obj43=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_96 = come_decrement_ref_count(c_value_96, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        left_value_49->type->mPointerNum==0        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj44=c_value_97,
                    c_value_97=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj45=c_value_97,
                    c_value_97=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_97,info,(_Bool)0);
                std_move(field_type_73,right_type_61,right_value_60,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj46=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj47=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_98=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_98,info,(_Bool)0);
                std_move(field_type_73,right_value_60->type,right_value_60,info,(_Bool)0);
                __dec_obj48=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value92=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_47,left_value_49->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value92, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__48 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__48;
        }
    }
    else if(    field_type_73->mHeap&&field_type_73->mPointerNum>0&&right_type_61->mPointerNum>0&&string_operator_equals(right_type_61->mClass->mName,"void")    ) {
        if(        left_value_49->type->mPointerNum==1        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj49=c_value_99,
                    c_value_99=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj50=c_value_99,
                    c_value_99=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_99,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj51=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj52=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_100=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_100,info,(_Bool)0);
                __dec_obj53=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        left_value_49->type->mPointerNum==0        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj54=c_value_101,
                    c_value_101=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj55=c_value_101,
                    c_value_101=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_49->c_value,child_field_name_75,name_47));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_101,info,(_Bool)0);
                if(                child_field_is_pointer_76                ) {
                    __dec_obj56=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj57=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_101 = come_decrement_ref_count(c_value_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_102=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_49->c_value,name_47));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_73),c_value_102,info,(_Bool)0);
                __dec_obj58=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value105=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_47,left_value_49->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value105, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__49 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__49;
        }
    }
    else if(    field_type_73->mChannel&&new_channel_59    ) {
        if(        child_field_is_pointer_76        ) {
            __dec_obj59=come_value_94->c_value,
            come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_49->c_value,name_47,right_value_60->c_value));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj60=come_value_94->c_value,
            come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_49->c_value,name_47,right_value_60->c_value));
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        __dec_obj61=come_value_94->type,
        come_value_94->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_60->type));
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_94->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        add_come_last_code(info,"%s",come_value_94->c_value);
        __result_obj__51 = (_Bool)1;
        (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__51;
    }
    else {
        if(        left_value_49->type->mPointerNum==1        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj65=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj66=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj67=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else if(        left_value_49->type->mPointerNum==0        ) {
            if(            child_field_name_75            ) {
                if(                child_field_is_pointer_76                ) {
                    __dec_obj68=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj69=come_value_94->c_value,
                    come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_49->c_value,child_field_name_75,name_47,right_value_60->c_value));
                    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj70=come_value_94->c_value,
                come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_49->c_value,name_47,right_value_60->c_value));
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value118=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_47,left_value_49->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__52 = (_Bool)1;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__52;
        }
    }
    __dec_obj71=come_value_94->type,
    come_value_94->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_73));
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_94->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
    add_come_last_code(info,"%s",come_value_94->c_value);
    __result_obj__53 = (_Bool)1;
    (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type2_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, klass_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, field_type_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (child_field_name_75 = come_decrement_ref_count(child_field_name_75, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_52;
int i_53;
struct sType* __result_obj__24;
struct sType* default_value_54;
struct sType* __result_obj__25;
default_value_54 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_52=self->head;
    i_53=0;
    while(    it_52!=((void*)0)    ) {
        if(        position==i_53        ) {
            __result_obj__24 = (struct sType*)come_increment_ref_count(it_52->item);
            come_call_finalizer(sType_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__24;
        }
        it_52=it_52->next;
        i_53++;
    }
    memset(&default_value_54,0,sizeof(struct sType*));
    __result_obj__25 = (struct sType*)come_increment_ref_count(default_value_54);
    come_call_finalizer(sType_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_55;
int i_56;
struct sType* __result_obj__26;
struct sType* default_value_57;
struct sType* __result_obj__27;
default_value_57 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_55=self->head;
    i_56=0;
    while(    it_55!=((void*)0)    ) {
        if(        position==i_56        ) {
            __result_obj__26 = (struct sType*)come_increment_ref_count(it_55->item);
            come_call_finalizer(sType_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__26;
        }
        it_55=it_55->next;
        i_56++;
    }
    memset(&default_value_57,0,sizeof(struct sType*));
    __result_obj__27 = (struct sType*)come_increment_ref_count(default_value_57);
    come_call_finalizer(sType_finalize, default_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
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

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_65;
unsigned int hash_66;
unsigned int it_67;
struct sClass* __result_obj__30;
struct sClass* __result_obj__31;
struct sClass* __result_obj__32;
struct sClass* __result_obj__33;
default_value_65 = (void*)0;
    memset(&default_value_65,0,sizeof(struct sClass*));
    hash_66=string_get_hash_key(((char*)key))%self->size;
    it_67=hash_66;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_67]        ) {
            if(            string_equals(self->keys[it_67],key)            ) {
                __result_obj__30 = (struct sClass*)come_increment_ref_count(self->items[it_67]);
                come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
            it_67++;
            if(            it_67>=self->size            ) {
                it_67=0;
            }
            else if(            it_67==hash_66            ) {
                __result_obj__31 = (struct sClass*)come_increment_ref_count(default_value_65);
                come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__31;
            }
        }
        else {
            __result_obj__32 = (struct sClass*)come_increment_ref_count(default_value_65);
            come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__32;
        }
    }
    __result_obj__33 = (struct sClass*)come_increment_ref_count(default_value_65);
    come_call_finalizer(sClass_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
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

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_68;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_69;
    it_68=self->head;
    while(    it_68!=((void*)0)    ) {
        prev_it_69=it_68;
        it_68=it_68->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_70;
unsigned int hash_71;
unsigned int it_72;
struct sClass* __result_obj__34;
struct sClass* __result_obj__35;
struct sClass* __result_obj__36;
struct sClass* __result_obj__37;
default_value_70 = (void*)0;
    memset(&default_value_70,0,sizeof(struct sClass*));
    hash_71=string_get_hash_key(((char*)key))%self->size;
    it_72=hash_71;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_72]        ) {
            if(            string_equals(self->keys[it_72],key)            ) {
                __result_obj__34 = (struct sClass*)come_increment_ref_count(self->items[it_72]);
                come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__34;
            }
            it_72++;
            if(            it_72>=self->size            ) {
                it_72=0;
            }
            else if(            it_72==hash_71            ) {
                __result_obj__35 = (struct sClass*)come_increment_ref_count(default_value_70);
                come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__35;
            }
        }
        else {
            __result_obj__36 = (struct sClass*)come_increment_ref_count(default_value_70);
            come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__36;
        }
    }
    __result_obj__37 = (struct sClass*)come_increment_ref_count(default_value_70);
    come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_78;
struct tuple2$2char$phsType$ph* __result_obj__39;
struct tuple2$2char$phsType$ph* __result_obj__40;
struct tuple2$2char$phsType$ph* result_79;
struct tuple2$2char$phsType$ph* __result_obj__41;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_78,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__39 = result_78;
        return __result_obj__39;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_79,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__41 = result_79;
    return __result_obj__41;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_81;
struct tuple2$2char$phsType$ph* __result_obj__42;
struct tuple2$2char$phsType$ph* __result_obj__43;
struct tuple2$2char$phsType$ph* result_82;
struct tuple2$2char$phsType$ph* __result_obj__44;
result_81 = (void*)0;
result_82 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_81,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__42 = result_81;
        return __result_obj__42;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_82,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__44 = result_82;
    return __result_obj__44;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value109 = (void*)0;
struct list_item$1CVALUE$ph* litem_103;
struct CVALUE* __dec_obj62;
void* __right_value110 = (void*)0;
struct list_item$1CVALUE$ph* litem_104;
struct CVALUE* __dec_obj63;
void* __right_value111 = (void*)0;
struct list_item$1CVALUE$ph* litem_105;
struct CVALUE* __dec_obj64;
struct list$1CVALUE$ph* __result_obj__50;
    if(    self->len==0    ) {
        litem_103=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value109=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1115, "struct list_item$1CVALUE$ph*"))));
        litem_103->prev=((void*)0);
        litem_103->next=((void*)0);
        __dec_obj62=litem_103->item,
        litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_103;
        self->head=litem_103;
    }
    else if(    self->len==1    ) {
        litem_104=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value110=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1125, "struct list_item$1CVALUE$ph*"))));
        litem_104->prev=self->head;
        litem_104->next=((void*)0);
        __dec_obj63=litem_104->item,
        litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_104;
        self->head->next=litem_104;
    }
    else {
        litem_105=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value111=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1135, "struct list_item$1CVALUE$ph*"))));
        litem_105->prev=self->tail;
        litem_105->next=((void*)0);
        __dec_obj64=litem_105->item,
        litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_105;
        self->tail=litem_105;
    }
    self->len++;
    __result_obj__50 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__50;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value122 = (void*)0;
char* __dec_obj73;
struct sLoadFieldNode* __result_obj__54;
    ((struct sNodeBase*)(__right_value120=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value120, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj72=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj73=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__54 = (struct sLoadFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadFieldNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadFieldNode_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __right_value123 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string("sLoadFieldNode"))));
    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_106;
void* __right_value124 = (void*)0;
char* name_107;
_Bool Value_108;
_Bool __result_obj__56;
void* __right_value125 = (void*)0;
struct CVALUE* left_value_109;
struct sType* left_type2_110;
struct sType* left_type3_111;
struct sType* __dec_obj74;
struct sType* __dec_obj75;
int i_112;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value128 = (void*)0;
char* __dec_obj76;
struct sType* left_type_113;
void* __right_value129 = (void*)0;
struct sType* left_type3_114;
struct sClass* klass_115;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sType* field_type_116;
int index_117;
_Bool child_field_is_pointer_118;
char* child_field_name_119;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
_Bool __result_obj__57;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_120;
struct tuple2$2char$phsType$ph* field_121;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name_122=0;
struct sType* field_type2_123=0;
void* __right_value137 = (void*)0;
struct sType* __dec_obj77;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_124;
struct tuple2$2char$phsType$ph* field_125;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* field_name_126=0;
struct sType* field_type2_127=0;
struct sClass* klass2_128;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_129;
struct tuple2$2char$phsType$ph* field2_130;
struct tuple2$2char$phsType$ph* multiple_assign_var7 = (void*)0;
char* field_name2_131=0;
struct sType* field_type3_132=0;
void* __right_value138 = (void*)0;
char* __dec_obj78;
void* __right_value139 = (void*)0;
struct sType* __dec_obj79;
void* __right_value140 = (void*)0;
struct sType* __dec_obj80;
void* __right_value141 = (void*)0;
_Bool __result_obj__58;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct CVALUE* come_value_133;
void* __right_value144 = (void*)0;
char* __dec_obj81;
void* __right_value145 = (void*)0;
char* __dec_obj82;
void* __right_value146 = (void*)0;
char* __dec_obj83;
void* __right_value147 = (void*)0;
char* __dec_obj84;
void* __right_value148 = (void*)0;
char* __dec_obj85;
void* __right_value149 = (void*)0;
char* __dec_obj86;
void* __right_value150 = (void*)0;
struct sType* __dec_obj87;
void* __right_value151 = (void*)0;
struct sType* __dec_obj88;
void* __right_value152 = (void*)0;
_Bool __result_obj__59;
void* __right_value153 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__61;
left_type3_111 = (void*)0;
    left_106=self->mLeft;
    name_107=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_108=node_compile(left_106,info);
    if(    !Value_108    ) {
        __result_obj__56 = (_Bool)0;
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__56;
    }
    else {
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_110=(struct sType*)come_increment_ref_count(left_value_109->type);
    if(    left_type2_110->mNoSolvedGenericsType    ) {
        __dec_obj74=left_type3_111,
        left_type3_111=(struct sType*)come_increment_ref_count(left_type2_110->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj75=left_type3_111,
        left_type3_111=(struct sType*)come_increment_ref_count(left_type2_110);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(left_type3_111->mClass->mName,"tuple1")||string_operator_equals(left_type3_111->mClass->mName,"tuple2")||string_operator_equals(left_type3_111->mClass->mName,"tuple3")||string_operator_equals(left_type3_111->mClass->mName,"tuple3")||string_operator_equals(left_type3_111->mClass->mName,"tuple4")||string_operator_equals(left_type3_111->mClass->mName,"tuple5")    ) {
        for(        i_112=0        ;        i_112<list$1sType$ph_length(left_type3_111->mGenericsTypes)        ;        i_112++        ){
            if(            (_condtional_value_X2=(string_operator_equals(name_107,((struct sType*)(__right_value127=list$1sType$ph_operator_load_element(left_type3_111->mGenericsTypes,i_112)))->mTupleName))),            come_call_finalizer(sType_finalize, __right_value126, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X2            ) {
                __dec_obj76=name_107,
                name_107=(char*)come_increment_ref_count(xsprintf("v%d",i_112+1));
                __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
    }
    left_type_113=(struct sType*)come_increment_ref_count(left_value_109->type);
    come_call_finalizer(sType_finalize, left_type3_111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    left_type3_114=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(left_type_113),(struct sType*)come_increment_ref_count(left_type_113),info));
    klass_115=left_type3_114->mClass;
    klass_115=((struct sClass*)(__right_value132=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value131=__builtin_string(klass_115->mName))))));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    field_type_116=((void*)0);
    index_117=0;
    child_field_is_pointer_118=(_Bool)0;
    child_field_name_119=((void*)0);
    klass_115=((struct sClass*)(__right_value135=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value134=__builtin_string(klass_115->mName))))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass_115==((void*)0)||klass_115->mFields==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value136=err_msg(info,"invalid class %s",klass_115->mName)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value136, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__57 = (_Bool)1;
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__57;
    }
    for(    o2_saved_120=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_115->mFields)),field_121=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_120))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_120))    ;    field_121=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_120))    ){
        multiple_assign_var5=field_121;
        field_name_122=(char*)come_increment_ref_count(multiple_assign_var5->v1);
        field_type2_123=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        string_operator_equals(field_name_122,name_107)        ) {
            __dec_obj77=field_type_116,
            field_type_116=(struct sType*)come_increment_ref_count(sType_clone(field_type2_123));
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (field_name_122 = come_decrement_ref_count(field_name_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        index_117++;
        (field_name_122 = come_decrement_ref_count(field_name_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type2_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    index_117==list$1tuple2$2char$phsType$ph$ph_length(klass_115->mFields)    ) {
        index_117=0;
        for(        o2_saved_124=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_115->mFields)),field_125=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_124))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_124))        ;        field_125=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_124))        ){
            multiple_assign_var6=field_125;
            field_name_126=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            field_type2_127=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
            klass2_128=field_type2_127->mClass;
            if(            klass2_128->mUnion            ) {
                for(                o2_saved_129=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_128->mFields)),field2_130=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_129))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_129))                ;                field2_130=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_129))                ){
                    multiple_assign_var7=field2_130;
                    field_name2_131=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                    field_type3_132=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                    if(                    string_operator_equals(field_name2_131,name_107)                    ) {
                        __dec_obj78=child_field_name_119,
                        child_field_name_119=(char*)come_increment_ref_count(__builtin_string(field_name_126));
                        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        field_type2_127->mPointerNum>0                        ) {
                            child_field_is_pointer_118=(_Bool)1;
                        }
                        __dec_obj79=field_type_116,
                        field_type_116=(struct sType*)come_increment_ref_count(sType_clone(field_type3_132));
                        come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        (field_name2_131 = come_decrement_ref_count(field_name2_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, field_type3_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    (field_name2_131 = come_decrement_ref_count(field_name2_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type3_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                if(                child_field_name_119                ) {
                    (field_name_126 = come_decrement_ref_count(field_name_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type2_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_126,name_107)            ) {
                __dec_obj80=field_type_116,
                field_type_116=(struct sType*)come_increment_ref_count(sType_clone(field_type2_127));
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (field_name_126 = come_decrement_ref_count(field_name_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type2_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            index_117++;
            (field_name_126 = come_decrement_ref_count(field_name_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        index_117==list$1tuple2$2char$phsType$ph$ph_length(klass_115->mFields)        ) {
            ((struct tuple2$2int$bool$*)(__right_value141=err_msg(info,"field not found(%s) in %s(2)",name_107,klass_115->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value141, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__58 = (_Bool)1;
            (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__58;
        }
    }
    come_value_133=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 466, "struct CVALUE*"))));
    if(    left_value_109->type->mPointerNum>0    ) {
        if(        child_field_name_119        ) {
            if(            child_field_is_pointer_118            ) {
                __dec_obj81=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj82=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            __dec_obj83=come_value_133->c_value,
            come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_109->c_value,name_107));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        if(        child_field_name_119        ) {
            if(            child_field_is_pointer_118            ) {
                __dec_obj84=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj85=come_value_133->c_value,
                come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_119,name_107));
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            __dec_obj86=come_value_133->c_value,
            come_value_133->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_109->c_value,name_107));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    __dec_obj87=come_value_133->type,
    come_value_133->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_116));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj88=come_value_133->type,
    come_value_133->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_133->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_133->var=((void*)0);
    if(    field_type_116==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value152=err_msg(info,"no field(%s)",name_107)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value152, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__59 = (_Bool)1;
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__59;
    }
    if(    list$1sNode$ph_length(come_value_133->type->mArrayNum)==1    ) {
        __dec_obj89=come_value_133->type->mOriginalLoadVarType,
        come_value_133->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_133->type));
        come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1sNode$ph_reset(come_value_133->type->mArrayNum);
        come_value_133->type->mPointerNum++;
        come_value_133->type->mOriginalTypeNamePointerNum=come_value_133->type->mPointerNum;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_133));
    __result_obj__61 = (_Bool)1;
    (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type2_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, field_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (child_field_name_119 = come_decrement_ref_count(child_field_name_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_134;
struct list_item$1sNode$ph* prev_it_135;
struct list$1sNode$ph* __result_obj__60;
    it_134=self->head;
    while(    it_134!=((void*)0)    ) {
        prev_it_135=it_134;
        it_134=it_134->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct sNode* _inf_value1;
struct sLoadFieldNode* _inf_obj_value1;
void* __right_value160 = (void*)0;
struct sNode* __result_obj__64;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 526, "struct sNode");
    _inf_obj_value1=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value155=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 526, "struct sLoadFieldNode*")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value1->clone=(void*)sLoadFieldNode_clone;
    _inf_value1->compile=(void*)sLoadFieldNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sLoadFieldNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__64 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value160=_inf_value1)));
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadFieldNode_finalize, __right_value155, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value160) ? __right_value160 = come_decrement_ref_count(__right_value160, ((struct sNode*)__right_value160)->finalize, ((struct sNode*)__right_value160)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
struct sLoadFieldNode* __result_obj__62;
void* __right_value156 = (void*)0;
struct sLoadFieldNode* result_136;
void* __right_value157 = (void*)0;
char* __dec_obj90;
void* __right_value158 = (void*)0;
struct sNode* __dec_obj91;
void* __right_value159 = (void*)0;
char* __dec_obj92;
struct sLoadFieldNode* __result_obj__63;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)0;
        return __result_obj__62;
    }
    result_136=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*"));
    if(    self!=((void*)0)    ) {
        result_136->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj90=result_136->sname,
        result_136->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadFieldNode_clone", 5, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_136->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj91=result_136->mLeft,
        result_136->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj92=result_136->mName,
        result_136->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sLoadFieldNode_clone", 8, "char*"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__63 = result_136;
    come_call_finalizer(sLoadFieldNode_finalize, result_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct sNode* __dec_obj93;
void* __right_value163 = (void*)0;
struct sNode* __dec_obj94;
void* __right_value164 = (void*)0;
struct list$1sNode$ph* __dec_obj95;
struct sStoreArrayNode* __result_obj__65;
    ((struct sNodeBase*)(__right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj93=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj94=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj95=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __result_obj__65 = (struct sStoreArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sStoreArrayNode_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __right_value165 = (void*)0;
char* __result_obj__66;
    __result_obj__66 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string("sStoreArrayNode"))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__66;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_137;
struct sNode* right_138;
struct list$1sNode$ph* array_num_nodes_139;
_Bool Value_140;
_Bool __result_obj__67;
void* __right_value166 = (void*)0;
struct CVALUE* left_value_141;
struct sType* left_type_142;
void* __right_value167 = (void*)0;
_Bool __result_obj__68;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct list$1CVALUE$ph* array_num_143;
struct list$1sNode$ph* o2_saved_146;
struct sNode* it_149;
_Bool Value_152;
_Bool __result_obj__76;
void* __right_value170 = (void*)0;
struct CVALUE* c_value_153;
char* fun_name_154;
void* __right_value171 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var8 = (void*)0;
char* fun_name2_155=0;
struct sFun* operator_fun_156=0;
struct sGenericsFun* generics_fun_157=0;
_Bool Value_158;
_Bool __result_obj__77;
void* __right_value172 = (void*)0;
struct CVALUE* right_value_159;
struct sType* right_type_160;
struct sClass* klass_161;
void* __right_value173 = (void*)0;
struct sType* type_162;
_Bool calling_fun_163;
void* __right_value174 = (void*)0;
struct sNode* middle_164;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct CVALUE* come_value_177;
int i_178;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct buffer* buf_191;
struct list$1CVALUE$ph* o2_saved_192;
struct CVALUE* it_195;
void* __right_value180 = (void*)0;
char* left_value_code_198;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
char* __dec_obj96;
void* __right_value183 = (void*)0;
char* __dec_obj97;
void* __right_value184 = (void*)0;
_Bool __result_obj__94;
void* __right_value185 = (void*)0;
char* __dec_obj98;
void* __right_value186 = (void*)0;
char* __dec_obj99;
void* __right_value187 = (void*)0;
_Bool __result_obj__95;
void* __right_value188 = (void*)0;
struct sType* result_type_199;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct list$1sNode$ph* __dec_obj100;
struct sType* __dec_obj101;
void* __right_value191 = (void*)0;
struct sType* __dec_obj102;
_Bool __result_obj__96;
memset(&calling_fun_163, 0, sizeof(_Bool));
    left_137=(struct sNode*)come_increment_ref_count(self->mLeft);
    right_138=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_139=self->mArrayNum;
    Value_140=node_compile(left_137,info);
    if(    !Value_140    ) {
        __result_obj__67 = (_Bool)0;
        ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__67;
    }
    else {
    }
    left_value_141=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_142=(struct sType*)come_increment_ref_count(left_value_141->type);
    if(    left_type_142->mImmutable    ) {
        ((struct tuple2$2int$bool$*)(__right_value167=err_msg(info,"Immutable object can't change the elements")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value167, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__68 = (_Bool)1;
        ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__68;
    }
    array_num_143=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 565, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_146=(array_num_nodes_139),it_149=list$1sNode$ph_begin((o2_saved_146))    ;    !list$1sNode$ph_end((o2_saved_146))    ;    it_149=list$1sNode$ph_next((o2_saved_146))    ){
        Value_152=node_compile(it_149,info);
        if(        !Value_152        ) {
            __result_obj__76 = (_Bool)0;
            ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__76;
        }
        else {
        }
        c_value_153=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_143,(struct CVALUE*)come_increment_ref_count(c_value_153));
        come_call_finalizer(CVALUE_finalize, c_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    fun_name_154="operator_store_element";
    multiple_assign_var8=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value171=get_method(fun_name_154,(struct sType*)come_increment_ref_count(left_type_142),info)));
    fun_name2_155=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    operator_fun_156=multiple_assign_var8->v2;
    generics_fun_157=multiple_assign_var8->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value171, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_158=node_compile(right_138,info);
    if(    !Value_158    ) {
        __result_obj__77 = (_Bool)0;
        ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__77;
    }
    else {
    }
    right_value_159=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_160=right_value_159->type;
    klass_161=left_value_141->type->mClass;
    type_162=(struct sType*)come_increment_ref_count(sType_clone(left_value_141->type));
    if(    self->mQuote    ) {
        calling_fun_163=(_Bool)0;
    }
    else {
        middle_164=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_139,0));
        calling_fun_163=operator_overload_fun2((struct sType*)come_increment_ref_count(type_162),fun_name_154,(struct sNode*)come_increment_ref_count(left_137),(struct sNode*)come_increment_ref_count(middle_164),(struct sNode*)come_increment_ref_count(right_138),left_value_141,((struct CVALUE*)(__right_value175=list$1CVALUE$ph_operator_load_element(array_num_143,0))),right_value_159,info);
        come_call_finalizer(CVALUE_finalize, __right_value175, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((middle_164) ? middle_164 = come_decrement_ref_count(middle_164, ((struct sNode*)middle_164)->finalize, ((struct sNode*)middle_164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    !calling_fun_163    ) {
        come_value_177=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 602, "struct CVALUE*"))));
        if(        list$1sNode$ph_length(left_type_142->mArrayNum)>0        ) {
            for(            i_178=0            ;            i_178<list$1CVALUE$ph_length(array_num_143)            ;            i_178++            ){
                list$1sNode$ph_delete(left_type_142->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_142->mPointerNum>0        ) {
            left_type_142->mPointerNum-=list$1CVALUE$ph_length(array_num_143);
            if(            left_type_142->mPointerNum<0            ) {
                left_type_142->mPointerNum=0;
            }
        }
        buf_191=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 617, "struct buffer*"))));
        buffer_append_str(buf_191,left_value_141->c_value);
        for(        o2_saved_192=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_143)),it_195=list$1CVALUE$ph_begin((o2_saved_192))        ;        !list$1CVALUE$ph_end((o2_saved_192))        ;        it_195=list$1CVALUE$ph_next((o2_saved_192))        ){
            buffer_append_format(buf_191,"[%s]",it_195->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_198=(char*)come_increment_ref_count(buffer_to_string(buf_191));
        check_assign_type(((char*)(__right_value181=xsprintf("array is assinged to(2)"))),left_type_142,right_type_160,right_value_159,(_Bool)0,(_Bool)1,(_Bool)1,info);
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        left_type_142->mHeap&&right_type_160->mHeap&&left_type_142->mPointerNum>0&&right_type_160->mPointerNum>0        ) {
            if(            left_value_141->type->mPointerNum>=1            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_142),left_value_code_198,info,(_Bool)0);
                std_move(left_type_142,right_type_160,right_value_159,info,(_Bool)0);
                __dec_obj96=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            left_value_141->type->mPointerNum==0            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_142),left_value_code_198,info,(_Bool)0);
                std_move(left_type_142,right_type_160,right_value_159,info,(_Bool)0);
                __dec_obj97=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value184=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_198,left_value_141->type->mPointerNum)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value184, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__94 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (left_value_code_198 = come_decrement_ref_count(left_value_code_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, right_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__94;
            }
        }
        else {
            if(            left_value_141->type->mPointerNum>=1            ) {
                __dec_obj98=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            left_value_141->type->mPointerNum==0            ) {
                __dec_obj99=come_value_177->c_value,
                come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_198,right_value_159->c_value));
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value187=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_198,left_value_141->type->mPointerNum)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value187, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__95 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (left_value_code_198 = come_decrement_ref_count(left_value_code_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, right_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__95;
            }
        }
        result_type_199=(struct sType*)come_increment_ref_count(sType_clone(left_type_142));
        __dec_obj100=result_type_199->mArrayNum,
        result_type_199->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 658, "struct list$1sNode$ph*"))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj101=come_value_177->type,
        come_value_177->type=(struct sType*)come_increment_ref_count(result_type_199);
        come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_177->var=((void*)0);
        __dec_obj102=come_value_177->type,
        come_value_177->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_177->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_177));
        add_come_last_code(info,"%s",come_value_177->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_198 = come_decrement_ref_count(left_value_code_198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__96 = (_Bool)1;
    ((left_137) ? left_137 = come_decrement_ref_count(left_137, ((struct sNode*)left_137)->finalize, ((struct sNode*)left_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_138) ? right_138 = come_decrement_ref_count(right_138, ((struct sNode*)right_138)->finalize, ((struct sNode*)right_138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_155 = come_decrement_ref_count(fun_name2_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, right_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__96;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__69 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_144;
struct list_item$1CVALUE$ph* prev_it_145;
    it_144=self->head;
    while(    it_144!=((void*)0)    ) {
        prev_it_145=it_144;
        it_144=it_144->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_147;
struct sNode* __result_obj__70;
struct sNode* __result_obj__71;
struct sNode* result_148;
struct sNode* __result_obj__72;
result_147 = (void*)0;
result_148 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_147,0,sizeof(struct sNode*));
        __result_obj__70 = result_147;
        return __result_obj__70;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__71 = self->it->item;
        return __result_obj__71;
    }
    memset(&result_148,0,sizeof(struct sNode*));
    __result_obj__72 = result_148;
    return __result_obj__72;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_150;
struct sNode* __result_obj__73;
struct sNode* __result_obj__74;
struct sNode* result_151;
struct sNode* __result_obj__75;
result_150 = (void*)0;
result_151 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_150,0,sizeof(struct sNode*));
        __result_obj__73 = result_150;
        return __result_obj__73;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_151,0,sizeof(struct sNode*));
    __result_obj__75 = result_151;
    return __result_obj__75;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_165;
int i_166;
struct sNode* __result_obj__78;
struct sNode* default_value_167;
struct sNode* __result_obj__79;
default_value_167 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_165=self->head;
    i_166=0;
    while(    it_165!=((void*)0)    ) {
        if(        position==i_166        ) {
            __result_obj__78 = (struct sNode*)come_increment_ref_count(it_165->item);
            ((__result_obj__78) ? __result_obj__78 = come_decrement_ref_count(__result_obj__78, ((struct sNode*)__result_obj__78)->finalize, ((struct sNode*)__result_obj__78)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__78;
        }
        it_165=it_165->next;
        i_166++;
    }
    memset(&default_value_167,0,sizeof(struct sNode*));
    __result_obj__79 = (struct sNode*)come_increment_ref_count(default_value_167);
    ((default_value_167) ? default_value_167 = come_decrement_ref_count(default_value_167, ((struct sNode*)default_value_167)->finalize, ((struct sNode*)default_value_167)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__79) ? __result_obj__79 = come_decrement_ref_count(__result_obj__79, ((struct sNode*)__result_obj__79)->finalize, ((struct sNode*)__result_obj__79)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__79;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_168;
int i_169;
struct sNode* __result_obj__80;
struct sNode* default_value_170;
struct sNode* __result_obj__81;
default_value_170 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_168=self->head;
    i_169=0;
    while(    it_168!=((void*)0)    ) {
        if(        position==i_169        ) {
            __result_obj__80 = (struct sNode*)come_increment_ref_count(it_168->item);
            ((__result_obj__80) ? __result_obj__80 = come_decrement_ref_count(__result_obj__80, ((struct sNode*)__result_obj__80)->finalize, ((struct sNode*)__result_obj__80)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__80;
        }
        it_168=it_168->next;
        i_169++;
    }
    memset(&default_value_170,0,sizeof(struct sNode*));
    __result_obj__81 = (struct sNode*)come_increment_ref_count(default_value_170);
    ((default_value_170) ? default_value_170 = come_decrement_ref_count(default_value_170, ((struct sNode*)default_value_170)->finalize, ((struct sNode*)default_value_170)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__81) ? __result_obj__81 = come_decrement_ref_count(__result_obj__81, ((struct sNode*)__result_obj__81)->finalize, ((struct sNode*)__result_obj__81)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__81;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_171;
int i_172;
struct CVALUE* __result_obj__82;
struct CVALUE* default_value_173;
struct CVALUE* __result_obj__83;
default_value_173 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_171=self->head;
    i_172=0;
    while(    it_171!=((void*)0)    ) {
        if(        position==i_172        ) {
            __result_obj__82 = (struct CVALUE*)come_increment_ref_count(it_171->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__82;
        }
        it_171=it_171->next;
        i_172++;
    }
    memset(&default_value_173,0,sizeof(struct CVALUE*));
    __result_obj__83 = (struct CVALUE*)come_increment_ref_count(default_value_173);
    come_call_finalizer(CVALUE_finalize, default_value_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_174;
int i_175;
struct CVALUE* __result_obj__84;
struct CVALUE* default_value_176;
struct CVALUE* __result_obj__85;
default_value_176 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_174=self->head;
    i_175=0;
    while(    it_174!=((void*)0)    ) {
        if(        position==i_175        ) {
            __result_obj__84 = (struct CVALUE*)come_increment_ref_count(it_174->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__84;
        }
        it_174=it_174->next;
        i_175++;
    }
    memset(&default_value_176,0,sizeof(struct CVALUE*));
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(default_value_176);
    come_call_finalizer(CVALUE_finalize, default_value_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_179;
struct list$1sNode$ph* __result_obj__86;
struct list_item$1sNode$ph* it_180;
int i_181;
struct list_item$1sNode$ph* prev_it_182;
struct list_item$1sNode$ph* it_183;
int i_184;
struct list_item$1sNode$ph* prev_it_185;
struct list_item$1sNode$ph* it_186;
struct list_item$1sNode$ph* head_prev_it_187;
struct list_item$1sNode$ph* tail_it_188;
int i_189;
struct list_item$1sNode$ph* prev_it_190;
struct list$1sNode$ph* __result_obj__87;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_179=tail;
        tail=head;
        head=tmp_179;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it_180=self->head;
        i_181=0;
        while(        it_180!=((void*)0)        ) {
            if(            i_181<tail            ) {
                prev_it_182=it_180;
                it_180=it_180->next;
                i_181++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_181==tail            ) {
                self->head=it_180;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_180=it_180->next;
                i_181++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_183=self->head;
        i_184=0;
        while(        it_183!=((void*)0)        ) {
            if(            i_184==head            ) {
                self->tail=it_183->prev;
                self->tail->next=((void*)0);
            }
            if(            i_184>=head            ) {
                prev_it_185=it_183;
                it_183=it_183->next;
                i_184++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_183=it_183->next;
                i_184++;
            }
        }
    }
    else {
        it_186=self->head;
        head_prev_it_187=((void*)0);
        tail_it_188=((void*)0);
        i_189=0;
        while(        it_186!=((void*)0)        ) {
            if(            i_189==head            ) {
                head_prev_it_187=it_186->prev;
            }
            if(            i_189==tail            ) {
                tail_it_188=it_186;
            }
            if(            i_189>=head&&i_189<tail            ) {
                prev_it_190=it_186;
                it_186=it_186->next;
                i_189++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_186=it_186->next;
                i_189++;
            }
        }
        if(        head_prev_it_187!=((void*)0)        ) {
            head_prev_it_187->next=tail_it_188;
        }
        if(        tail_it_188!=((void*)0)        ) {
            tail_it_188->prev=head_prev_it_187;
        }
    }
    __result_obj__87 = self;
    return __result_obj__87;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_193;
struct CVALUE* __result_obj__88;
struct CVALUE* __result_obj__89;
struct CVALUE* result_194;
struct CVALUE* __result_obj__90;
result_193 = (void*)0;
result_194 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_193,0,sizeof(struct CVALUE*));
        __result_obj__88 = result_193;
        return __result_obj__88;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__89 = self->it->item;
        return __result_obj__89;
    }
    memset(&result_194,0,sizeof(struct CVALUE*));
    __result_obj__90 = result_194;
    return __result_obj__90;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_196;
struct CVALUE* __result_obj__91;
struct CVALUE* __result_obj__92;
struct CVALUE* result_197;
struct CVALUE* __result_obj__93;
result_196 = (void*)0;
result_197 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_196,0,sizeof(struct CVALUE*));
        __result_obj__91 = result_196;
        return __result_obj__91;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__92 = self->it->item;
        return __result_obj__92;
    }
    memset(&result_197,0,sizeof(struct CVALUE*));
    __result_obj__93 = result_197;
    return __result_obj__93;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1sNode$ph* __dec_obj103;
void* __right_value194 = (void*)0;
struct sNode* __dec_obj104;
struct sLoadArrayNode* __result_obj__97;
    ((struct sNodeBase*)(__right_value192=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value192, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj103=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj104=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__97 = (struct sLoadArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sLoadArrayNode_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __right_value195 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string("sLoadArrayNode"))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__98;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_200;
struct list$1sNode$ph* array_num_nodes_201;
_Bool Value_202;
_Bool __result_obj__99;
void* __right_value196 = (void*)0;
struct CVALUE* left_value_203;
void* __right_value197 = (void*)0;
struct sType* left_type_204;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct list$1CVALUE$ph* array_num_205;
struct list$1sNode$ph* o2_saved_206;
struct sNode* it_207;
_Bool Value_208;
_Bool __result_obj__100;
void* __right_value200 = (void*)0;
struct CVALUE* c_value_209;
void* __right_value201 = (void*)0;
struct sType* type_210;
char* fun_name_211;
_Bool calling_fun_212;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct CVALUE* come_value_213;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct buffer* buf_214;
struct list$1CVALUE$ph* o2_saved_215;
struct CVALUE* it_216;
void* __right_value208 = (void*)0;
char* left_value_code_217;
void* __right_value209 = (void*)0;
char* __dec_obj105;
void* __right_value210 = (void*)0;
struct sType* result_type_218;
struct sType* __dec_obj106;
int n_219;
void* __right_value211 = (void*)0;
struct sType* __dec_obj107;
void* __right_value212 = (void*)0;
struct sType* __dec_obj108;
int i_220;
void* __right_value213 = (void*)0;
struct sType* __dec_obj109;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sType* __dec_obj110;
_Bool __result_obj__101;
memset(&calling_fun_212, 0, sizeof(_Bool));
    left_200=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_201=self->mArrayNum;
    Value_202=node_compile(left_200,info);
    if(    !Value_202    ) {
        __result_obj__99 = (_Bool)0;
        ((left_200) ? left_200 = come_decrement_ref_count(left_200, ((struct sNode*)left_200)->finalize, ((struct sNode*)left_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__99;
    }
    else {
    }
    left_value_203=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_204=(struct sType*)come_increment_ref_count(sType_clone(left_value_203->type));
    array_num_205=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 704, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_206=(array_num_nodes_201),it_207=list$1sNode$ph_begin((o2_saved_206))    ;    !list$1sNode$ph_end((o2_saved_206))    ;    it_207=list$1sNode$ph_next((o2_saved_206))    ){
        Value_208=node_compile(it_207,info);
        if(        !Value_208        ) {
            __result_obj__100 = (_Bool)0;
            ((left_200) ? left_200 = come_decrement_ref_count(left_200, ((struct sNode*)left_200)->finalize, ((struct sNode*)left_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__100;
        }
        else {
        }
        c_value_209=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_205,(struct CVALUE*)come_increment_ref_count(c_value_209));
        come_call_finalizer(CVALUE_finalize, c_value_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_210=(struct sType*)come_increment_ref_count(sType_clone(left_value_203->type));
    fun_name_211="operator_load_element";
    if(    self->mQuote    ) {
        calling_fun_212=(_Bool)0;
    }
    else {
        calling_fun_212=operator_overload_fun(type_210,fun_name_211,(struct sNode*)come_increment_ref_count(left_200),(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_201,0)),(struct CVALUE*)come_increment_ref_count(left_value_203),(struct CVALUE*)come_increment_ref_count(list$1CVALUE$ph_operator_load_element(array_num_205,0)),self->mBreakGuard,info);
    }
    if(    !calling_fun_212    ) {
        come_value_213=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 728, "struct CVALUE*"))));
        buf_214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 730, "struct buffer*"))));
        buffer_append_str(buf_214,left_value_203->c_value);
        for(        o2_saved_215=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_205)),it_216=list$1CVALUE$ph_begin((o2_saved_215))        ;        !list$1CVALUE$ph_end((o2_saved_215))        ;        it_216=list$1CVALUE$ph_next((o2_saved_215))        ){
            buffer_append_format(buf_214,"[%s]",it_216->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_217=(char*)come_increment_ref_count(buffer_to_string(buf_214));
        __dec_obj105=come_value_213->c_value,
        come_value_213->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_217));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type_218=(struct sType*)come_increment_ref_count(sType_clone(left_type_204));
        if(        result_type_218->mOriginalLoadVarType        ) {
            __dec_obj106=result_type_218,
            result_type_218=(struct sType*)come_increment_ref_count(result_type_218->mOriginalLoadVarType);
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_218->mArrayNum)>0        ) {
            n_219=list$1sNode$ph_length(result_type_218->mArrayNum)-list$1CVALUE$ph_length(array_num_205);
            if(            n_219==0            ) {
                __dec_obj107=result_type_218,
                result_type_218=(struct sType*)come_increment_ref_count(sType_clone(left_type_204));
                come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                left_type_204->mOriginalLoadVarType                ) {
                    __dec_obj108=result_type_218,
                    result_type_218=(struct sType*)come_increment_ref_count(sType_clone(left_type_204->mOriginalLoadVarType));
                    come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_218->mArrayNum);
            }
            else if(            n_219>0            ) {
                for(                i_220=0                ;                i_220<n_219                ;                i_220++                ){
                    list$1sNode$ph_delete(result_type_218->mArrayNum,-1,-1);
                }
                result_type_218->mPointerNum++;
            }
            else if(            n_219<0            ) {
                list$1sNode$ph_reset(result_type_218->mArrayNum);
                result_type_218->mPointerNum+=n_219;
                if(                result_type_218->mPointerNum<0                ) {
                    result_type_218->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_218->mPointerNum>0            ) {
                result_type_218->mPointerNum-=list$1CVALUE$ph_length(array_num_205);
                if(                result_type_218->mPointerNum<0                ) {
                    result_type_218->mPointerNum=0;
                }
            }
        }
        __dec_obj109=come_value_213->type,
        come_value_213->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_218));
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_213->var=((void*)0);
        __dec_obj110=come_value_213->type,
        come_value_213->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(come_value_213->type)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
        add_come_last_code(info,"%s",come_value_213->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_217 = come_decrement_ref_count(left_value_code_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__101 = (_Bool)1;
    ((left_200) ? left_200 = come_decrement_ref_count(left_200, ((struct sNode*)left_200)->finalize, ((struct sNode*)left_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__101;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1sNode$ph* __dec_obj111;
void* __right_value218 = (void*)0;
struct sNode* __dec_obj112;
struct sLoadRangeArrayNode* __result_obj__102;
    ((struct sNodeBase*)(__right_value216=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj111=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj112=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__102 = (struct sLoadRangeArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadRangeArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sLoadRangeArrayNode_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __right_value219 = (void*)0;
char* __result_obj__103;
    __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string("sLoadRangeArrayNode"))));
    (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_221;
struct list$1sNode$ph* array_num_nodes_222;
_Bool Value_223;
_Bool __result_obj__104;
void* __right_value220 = (void*)0;
struct CVALUE* left_value_224;
void* __right_value221 = (void*)0;
struct sType* left_type_225;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1CVALUE$ph* array_num_226;
struct list$1sNode$ph* o2_saved_227;
struct sNode* it_228;
_Bool Value_229;
_Bool __result_obj__105;
void* __right_value224 = (void*)0;
struct CVALUE* c_value_230;
void* __right_value225 = (void*)0;
struct sType* type_231;
char* fun_name_232;
_Bool calling_fun_233;
void* __right_value226 = (void*)0;
struct sNode* middle_234;
void* __right_value227 = (void*)0;
struct sNode* right_235;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct CVALUE* come_value_236;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* buf_237;
struct list$1CVALUE$ph* o2_saved_238;
struct CVALUE* it_239;
void* __right_value234 = (void*)0;
char* left_value_code_240;
void* __right_value235 = (void*)0;
char* __dec_obj113;
void* __right_value236 = (void*)0;
struct sType* result_type_241;
struct sType* __dec_obj114;
int n_242;
void* __right_value237 = (void*)0;
struct sType* __dec_obj115;
void* __right_value238 = (void*)0;
struct sType* __dec_obj116;
int i_243;
void* __right_value239 = (void*)0;
struct sType* __dec_obj117;
void* __right_value240 = (void*)0;
struct sType* __dec_obj118;
_Bool __result_obj__106;
memset(&calling_fun_233, 0, sizeof(_Bool));
    left_221=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_222=self->mArrayNum;
    Value_223=node_compile(left_221,info);
    if(    !Value_223    ) {
        __result_obj__104 = (_Bool)0;
        ((left_221) ? left_221 = come_decrement_ref_count(left_221, ((struct sNode*)left_221)->finalize, ((struct sNode*)left_221)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__104;
    }
    else {
    }
    left_value_224=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_225=(struct sType*)come_increment_ref_count(sType_clone(left_value_224->type));
    array_num_226=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 827, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_227=(array_num_nodes_222),it_228=list$1sNode$ph_begin((o2_saved_227))    ;    !list$1sNode$ph_end((o2_saved_227))    ;    it_228=list$1sNode$ph_next((o2_saved_227))    ){
        Value_229=node_compile(it_228,info);
        if(        !Value_229        ) {
            __result_obj__105 = (_Bool)0;
            ((left_221) ? left_221 = come_decrement_ref_count(left_221, ((struct sNode*)left_221)->finalize, ((struct sNode*)left_221)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__105;
        }
        else {
        }
        c_value_230=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_226,(struct CVALUE*)come_increment_ref_count(c_value_230));
        come_call_finalizer(CVALUE_finalize, c_value_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_231=(struct sType*)come_increment_ref_count(sType_clone(left_value_224->type));
    fun_name_232="operator_load_range_element";
    if(    self->mQuote    ) {
        calling_fun_233=(_Bool)0;
    }
    else {
        middle_234=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_222,0));
        right_235=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_222,1));
        calling_fun_233=operator_overload_fun2((struct sType*)come_increment_ref_count(type_231),fun_name_232,(struct sNode*)come_increment_ref_count(left_221),(struct sNode*)come_increment_ref_count(middle_234),(struct sNode*)come_increment_ref_count(right_235),left_value_224,((struct CVALUE*)(__right_value228=list$1CVALUE$ph_operator_load_element(array_num_226,0))),((struct CVALUE*)(__right_value229=list$1CVALUE$ph_operator_load_element(array_num_226,1))),info);
        come_call_finalizer(CVALUE_finalize, __right_value228, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, __right_value229, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((middle_234) ? middle_234 = come_decrement_ref_count(middle_234, ((struct sNode*)middle_234)->finalize, ((struct sNode*)middle_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_235) ? right_235 = come_decrement_ref_count(right_235, ((struct sNode*)right_235)->finalize, ((struct sNode*)right_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    !calling_fun_233    ) {
        come_value_236=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 853, "struct CVALUE*"))));
        buf_237=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 855, "struct buffer*"))));
        buffer_append_str(buf_237,left_value_224->c_value);
        for(        o2_saved_238=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_226)),it_239=list$1CVALUE$ph_begin((o2_saved_238))        ;        !list$1CVALUE$ph_end((o2_saved_238))        ;        it_239=list$1CVALUE$ph_next((o2_saved_238))        ){
            buffer_append_format(buf_237,"[%s]",it_239->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_240=(char*)come_increment_ref_count(buffer_to_string(buf_237));
        __dec_obj113=come_value_236->c_value,
        come_value_236->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_240));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type_241=(struct sType*)come_increment_ref_count(sType_clone(left_type_225));
        if(        result_type_241->mOriginalLoadVarType        ) {
            __dec_obj114=result_type_241,
            result_type_241=(struct sType*)come_increment_ref_count(result_type_241->mOriginalLoadVarType);
            come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_241->mArrayNum)>0        ) {
            n_242=list$1sNode$ph_length(result_type_241->mArrayNum)-list$1CVALUE$ph_length(array_num_226);
            if(            n_242==0            ) {
                __dec_obj115=result_type_241,
                result_type_241=(struct sType*)come_increment_ref_count(sType_clone(left_type_225));
                come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                left_type_225->mOriginalLoadVarType                ) {
                    __dec_obj116=result_type_241,
                    result_type_241=(struct sType*)come_increment_ref_count(sType_clone(left_type_225->mOriginalLoadVarType));
                    come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_241->mArrayNum);
            }
            else if(            n_242>0            ) {
                for(                i_243=0                ;                i_243<n_242                ;                i_243++                ){
                    list$1sNode$ph_delete(result_type_241->mArrayNum,-1,-1);
                }
            }
            else if(            n_242<0            ) {
                list$1sNode$ph_reset(result_type_241->mArrayNum);
                result_type_241->mPointerNum+=n_242;
                if(                result_type_241->mPointerNum<0                ) {
                    result_type_241->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_241->mPointerNum>0            ) {
                result_type_241->mPointerNum-=list$1CVALUE$ph_length(array_num_226);
                if(                result_type_241->mPointerNum<0                ) {
                    result_type_241->mPointerNum=0;
                }
            }
        }
        __dec_obj117=come_value_236->type,
        come_value_236->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_241));
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_236->var=((void*)0);
        __dec_obj118=come_value_236->type,
        come_value_236->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_236->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_236));
        add_come_last_code(info,"%s",come_value_236->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_240 = come_decrement_ref_count(left_value_code_240, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__106 = (_Bool)1;
    ((left_221) ? left_221 = come_decrement_ref_count(left_221, ((struct sNode*)left_221)->finalize, ((struct sNode*)left_221)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__106;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value241 = (void*)0;
struct sNode* __result_obj__107;
    ((struct tuple2$2int$bool$*)(__right_value241=err_msg(info,"parse_method_call is failed")));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value241, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__107 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__result_obj__107) ? __result_obj__107 = come_decrement_ref_count(__result_obj__107, ((struct sNode*)__result_obj__107)->finalize, ((struct sNode*)__result_obj__107)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__107;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sNode* _inf_value2;
struct sStoreFieldNode* _inf_obj_value2;
void* __right_value249 = (void*)0;
struct sNode* __result_obj__110;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 931, "struct sNode");
    _inf_obj_value2=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value243=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 931, "struct sStoreFieldNode*")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value2->clone=(void*)sStoreFieldNode_clone;
    _inf_value2->compile=(void*)sStoreFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sStoreFieldNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__110 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value249=_inf_value2)));
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreFieldNode_finalize, __right_value243, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value249) ? __right_value249 = come_decrement_ref_count(__right_value249, ((struct sNode*)__right_value249)->finalize, ((struct sNode*)__right_value249)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__110) ? __result_obj__110 = come_decrement_ref_count(__result_obj__110, ((struct sNode*)__result_obj__110)->finalize, ((struct sNode*)__result_obj__110)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__110;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
struct sStoreFieldNode* __result_obj__108;
void* __right_value244 = (void*)0;
struct sStoreFieldNode* result_244;
void* __right_value245 = (void*)0;
char* __dec_obj119;
void* __right_value246 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value247 = (void*)0;
struct sNode* __dec_obj121;
void* __right_value248 = (void*)0;
char* __dec_obj122;
struct sStoreFieldNode* __result_obj__109;
    if(    self==(void*)0    ) {
        __result_obj__108 = (void*)0;
        return __result_obj__108;
    }
    result_244=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*"));
    if(    self!=((void*)0)    ) {
        result_244->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj119=result_244->sname,
        result_244->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreFieldNode_clone", 5, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_244->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj120=result_244->mLeft,
        result_244->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj121=result_244->mRight,
        result_244->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj122=result_244->mName,
        result_244->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStoreFieldNode_clone", 9, "char*"));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__109 = result_244;
    come_call_finalizer(sStoreFieldNode_finalize, result_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
_Bool range_array_245;
char* p_246;
int sline_247;
_Bool no_comma_248;
_Bool no_output_err_249;
_Bool no_output_come_code_250;
void* __right_value250 = (void*)0;
struct sNode* exp_251;
_Bool quote_252;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1sNode$ph* array_num_253;
void* __right_value253 = (void*)0;
struct sNode* node2_254;
void* __right_value257 = (void*)0;
struct sNode* node3_258;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sNode* _inf_value3;
struct sLoadRangeArrayNode* _inf_obj_value3;
void* __right_value264 = (void*)0;
struct sNode* __dec_obj129;
_Bool quote_260;
_Bool range_261;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNode$ph* array_num_262;
_Bool range_array2_263;
char* p_264;
int sline_265;
_Bool no_comma_266;
_Bool no_output_err_267;
_Bool no_output_come_code_268;
void* __right_value267 = (void*)0;
struct sNode* exp_269;
void* __right_value268 = (void*)0;
struct sNode* node2_270;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sNode* right_node_271;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sNode* _inf_value4;
struct sStoreArrayNode* _inf_obj_value4;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sNode* _inf_value5;
struct sLoadArrayNode* _inf_obj_value5;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value286 = (void*)0;
char* field_name_274;
_Bool parse_method_generics_type_275;
char* p_276;
int sline_277;
void* __right_value287 = (void*)0;
char* word_278;
void* __right_value288 = (void*)0;
struct sNode* right_node_279;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sNode* _inf_value6;
struct sStoreFieldNode* _inf_obj_value6;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj143;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sNode* __dec_obj144;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sNode* _inf_value7;
struct sLoadFieldNode* _inf_obj_value7;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj147;
void* __right_value309 = (void*)0;
struct sNode* node2_280;
struct sNode* __dec_obj148;
struct sNode* __result_obj__118;
    while(    (_Bool)1    ) {
        range_array_245=(_Bool)0;
        {
            p_246=info->p;
            sline_247=info->sline;
            if(            *info->p==91            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_248=info->no_comma;
                no_output_err_249=info->no_output_err;
                no_output_come_code_250=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_251=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_248;
                info->no_output_err=no_output_err_249;
                info->no_output_come_code=no_output_come_code_250;
                if(                *info->p==46&&*(info->p+1)==46                ) {
                    range_array_245=(_Bool)1;
                }
                ((exp_251) ? exp_251 = come_decrement_ref_count(exp_251, ((struct sNode*)exp_251)->finalize, ((struct sNode*)exp_251)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            info->p=p_246;
            info->sline=sline_247;
        }
        if(        range_array_245&&(*info->p==92&&*(info->p+1)==91||*info->p==91)        ) {
            quote_252=*info->p==92;
            if(            quote_252            ) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_253=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 975, "struct list$1sNode$ph*"))));
            skip_pointer_attribute(info);
            node2_254=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_push_back(array_num_253,(struct sNode*)come_increment_ref_count(node2_254));
            if(            *info->p==46&&*(info->p+1)==46            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_258=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(array_num_253,(struct sNode*)come_increment_ref_count(node3_258));
                expected_next_character(93,info);
                ((node3_258) ? node3_258 = come_decrement_ref_count(node3_258, ((struct sNode*)node3_258)->finalize, ((struct sNode*)node3_258)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 996, "struct sNode");
            _inf_obj_value3=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value259=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 996, "struct sLoadRangeArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_253),quote_252,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value3->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value3->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sLoadRangeArrayNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj129=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLoadRangeArrayNode_finalize, __right_value259, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node2_254) ? node2_254 = come_decrement_ref_count(node2_254, ((struct sNode*)node2_254)->finalize, ((struct sNode*)node2_254)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !range_array_245&&(*info->p==92&&*(info->p+1)==91||*info->p==91)        ) {
            quote_260=*info->p==92;
            if(            quote_260            ) {
                info->p++;
            }
            range_261=(_Bool)0;
            array_num_262=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1005, "struct list$1sNode$ph*"))));
            while(            1            ) {
                range_array2_263=(_Bool)0;
                {
                    p_264=info->p;
                    sline_265=info->sline;
                    if(                    *info->p==91                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_266=info->no_comma;
                        no_output_err_267=info->no_output_err;
                        no_output_come_code_268=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_269=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_266;
                        info->no_output_err=no_output_err_267;
                        info->no_output_come_code=no_output_come_code_268;
                        if(                        *info->p==46&&*(info->p+1)==46                        ) {
                            range_array2_263=(_Bool)1;
                        }
                        ((exp_269) ? exp_269 = come_decrement_ref_count(exp_269, ((struct sNode*)exp_269)->finalize, ((struct sNode*)exp_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    info->p=p_264;
                    info->sline=sline_265;
                }
                if(                range_array2_263                ) {
                    break;
                }
                else if(                *info->p==91                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_270=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(array_num_262,(struct sNode*)come_increment_ref_count(node2_270));
                    if(                    *info->p==93                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value269=err_msg(info,"require ] character")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value269, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    ((node2_270) ? node2_270 = come_decrement_ref_count(node2_270, ((struct sNode*)node2_270)->finalize, ((struct sNode*)node2_270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    break;
                }
            }
            if(            *info->p==63&&*(info->p+1)==63            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_271=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1078, "struct sNode");
                _inf_obj_value4=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value272=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1078, "struct sStoreArrayNode*")),node,(struct sNode*)come_increment_ref_count(right_node_271),(struct list$1sNode$ph*)come_increment_ref_count(array_num_262),quote_260,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value4->clone=(void*)sStoreArrayNode_clone;
                _inf_value4->compile=(void*)sStoreArrayNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sline_real=(void*)sNodeBase_sline_real;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sStoreArrayNode_kind;
                _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj134=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value4);
                (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sStoreArrayNode_finalize, __right_value272, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((right_node_271) ? right_node_271 = come_decrement_ref_count(right_node_271, ((struct sNode*)right_node_271)->finalize, ((struct sNode*)right_node_271)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1081, "struct sNode");
                _inf_obj_value5=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value280=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1081, "struct sLoadArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_262),quote_260,(_Bool)0,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value5->clone=(void*)sLoadArrayNode_clone;
                _inf_value5->compile=(void*)sLoadArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sLoadArrayNode_kind;
                _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj138=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sLoadArrayNode_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        *info->p==63&&*(info->p+1)==63        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)        ) {
            if(            *info->p==46            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_274=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_275=(_Bool)0;
            {
                p_276=info->p;
                sline_277=info->sline;
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_278=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_278,info)                        ) {
                            parse_method_generics_type_275=(_Bool)1;
                        }
                        (word_278 = come_decrement_ref_count(word_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                info->p=p_276;
                info->sline=sline_277;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_279=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1136, "struct sNode");
                _inf_obj_value6=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value290=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1136, "struct sStoreFieldNode*")),node,(struct sNode*)come_increment_ref_count(right_node_279),(char*)come_increment_ref_count(field_name_274),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value6->clone=(void*)sStoreFieldNode_clone;
                _inf_value6->compile=(void*)sStoreFieldNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sStoreFieldNode_kind;
                _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj139=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sStoreFieldNode_finalize, __right_value290, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((right_node_279) ? right_node_279 = come_decrement_ref_count(right_node_279, ((struct sNode*)right_node_279)->finalize, ((struct sNode*)right_node_279)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else if(            string_operator_equals(field_name_274,"expect")            ) {
                __dec_obj140=node,
                node=(struct sNode*)come_increment_ref_count(parse_expect_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||parse_method_generics_type_275)            ) {
                if(                string_operator_equals(field_name_274,"if")                ) {
                    __dec_obj141=node,
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"elif")                ) {
                    __dec_obj142=node,
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"case")                ) {
                    __dec_obj143=node,
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"less")                ) {
                    __dec_obj144=node,
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_274,"rescue")                ) {
                    __dec_obj145=node,
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else {
                    __dec_obj146=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_274),info));
                    (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
            }
            else {
                _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1163, "struct sNode");
                _inf_obj_value7=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value307=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1163, "struct sLoadFieldNode*")),node,(char*)come_increment_ref_count(field_name_274),info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value7->clone=(void*)sLoadFieldNode_clone;
                _inf_value7->compile=(void*)sLoadFieldNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sLoadFieldNode_kind;
                _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj147=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value7);
                (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sLoadFieldNode_finalize, __right_value307, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (field_name_274 = come_decrement_ref_count(field_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            node2_280=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_280==((void*)0)            ) {
                ((node2_280) ? node2_280 = come_decrement_ref_count(node2_280, ((struct sNode*)node2_280)->finalize, ((struct sNode*)node2_280)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            __dec_obj148=node,
            node=(struct sNode*)come_increment_ref_count(node2_280);
            (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            ((node2_280) ? node2_280 = come_decrement_ref_count(node2_280, ((struct sNode*)node2_280)->finalize, ((struct sNode*)node2_280)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    __result_obj__118 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__118) ? __result_obj__118 = come_decrement_ref_count(__result_obj__118, ((struct sNode*)__result_obj__118)->finalize, ((struct sNode*)__result_obj__118)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__118;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value254 = (void*)0;
struct list_item$1sNode$ph* litem_255;
struct sNode* __dec_obj123;
void* __right_value255 = (void*)0;
struct list_item$1sNode$ph* litem_256;
struct sNode* __dec_obj124;
void* __right_value256 = (void*)0;
struct list_item$1sNode$ph* litem_257;
struct sNode* __dec_obj125;
struct list$1sNode$ph* __result_obj__111;
    if(    self->len==0    ) {
        litem_255=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value254=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1115, "struct list_item$1sNode$ph*"))));
        litem_255->prev=((void*)0);
        litem_255->next=((void*)0);
        __dec_obj123=litem_255->item,
        litem_255->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_255;
        self->head=litem_255;
    }
    else if(    self->len==1    ) {
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value255=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1125, "struct list_item$1sNode$ph*"))));
        litem_256->prev=self->head;
        litem_256->next=((void*)0);
        __dec_obj124=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_256;
        self->head->next=litem_256;
    }
    else {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value256=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1135, "struct list_item$1sNode$ph*"))));
        litem_257->prev=self->tail;
        litem_257->next=((void*)0);
        __dec_obj125=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_257;
        self->tail=litem_257;
    }
    self->len++;
    __result_obj__111 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__111;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
struct sLoadRangeArrayNode* __result_obj__112;
void* __right_value260 = (void*)0;
struct sLoadRangeArrayNode* result_259;
void* __right_value261 = (void*)0;
char* __dec_obj126;
void* __right_value262 = (void*)0;
struct list$1sNode$ph* __dec_obj127;
void* __right_value263 = (void*)0;
struct sNode* __dec_obj128;
struct sLoadRangeArrayNode* __result_obj__113;
    if(    self==(void*)0    ) {
        __result_obj__112 = (void*)0;
        return __result_obj__112;
    }
    result_259=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_259->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj126=result_259->sname,
        result_259->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadRangeArrayNode_clone", 5, "char*"));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_259->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj127=result_259->mArrayNum,
        result_259->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj127,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj128=result_259->mLeft,
        result_259->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_259->mQuote=self->mQuote;
    }
    __result_obj__113 = result_259;
    come_call_finalizer(sLoadRangeArrayNode_finalize, result_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
struct sStoreArrayNode* __result_obj__114;
void* __right_value273 = (void*)0;
struct sStoreArrayNode* result_272;
void* __right_value274 = (void*)0;
char* __dec_obj130;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value277 = (void*)0;
struct list$1sNode$ph* __dec_obj133;
struct sStoreArrayNode* __result_obj__115;
    if(    self==(void*)0    ) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result_272=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj130=result_272->sname,
        result_272->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreArrayNode_clone", 5, "char*"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj131=result_272->mLeft,
        result_272->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj132=result_272->mRight,
        result_272->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj133=result_272->mArrayNum,
        result_272->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj133,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_272->mQuote=self->mQuote;
    }
    __result_obj__115 = result_272;
    come_call_finalizer(sStoreArrayNode_finalize, result_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
struct sLoadArrayNode* __result_obj__116;
void* __right_value281 = (void*)0;
struct sLoadArrayNode* result_273;
void* __right_value282 = (void*)0;
char* __dec_obj135;
void* __right_value283 = (void*)0;
struct list$1sNode$ph* __dec_obj136;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj137;
struct sLoadArrayNode* __result_obj__117;
    if(    self==(void*)0    ) {
        __result_obj__116 = (void*)0;
        return __result_obj__116;
    }
    result_273=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_273->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj135=result_273->sname,
        result_273->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadArrayNode_clone", 5, "char*"));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_273->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj136=result_273->mArrayNum,
        result_273->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_273->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj137=result_273->mLeft,
        result_273->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_273->mQuote=self->mQuote;
    }
    __result_obj__117 = result_273;
    come_call_finalizer(sLoadArrayNode_finalize, result_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

