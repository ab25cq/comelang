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
    _Bool mExceptionGenericsType;
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
    _Bool without_semicolon;
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

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
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
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(unsigned int c);
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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
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
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
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
_Bool parsecmp(char* str, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info, _Bool no_err);
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
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
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
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void show_type(struct sType* type, struct sInfo* info);
static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sType* get_no_solved_type(struct sType* type);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
char* output_function(struct sFun* fun, struct sInfo* info);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);
static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);
void add_come_code(struct sInfo* info, const char* msg, ...);
static void va_list_finalize(va_list self);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
_Bool output_source_file(struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
_Bool output_header_file(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_last_code_to_source(struct sInfo* info);
void add_last_code_to_source_with_comma(struct sInfo* info);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info);
static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail);
static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
    return ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    return ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx){
    return ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
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
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
char* class_name_1;
void* __right_value2 = (void*)0;
char* __result_obj__1;
void* __right_value3 = (void*)0;
struct CVALUE* come_value_2;
void* __right_value4 = (void*)0;
char* result_type_str_9;
int j_10;
struct list$1sType$ph* _foreach_var_name1_11;
struct sType* it_14;
void* __right_value5 = (void*)0;
char* param_type_str_17;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
char* __result_obj__8;
int i_18;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
char* __result_obj__9;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "struct buffer*"))));
    class_name_1=type->mClass->mName;
    if(    type->mAlignas    ) {
        if(        !node_compile(type->mAlignas,info)        ) {
            printf("_Alignas error\n");
            __result_obj__1 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_0,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__1 = come_decrement_ref_count(__result_obj__1, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__1;
        }
        come_value_2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf_0,"_Alignas(%s) ",come_value_2->c_value);
        /*c*/ come_call_finalizer3(come_value_2,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    type->mStatic&&!no_static    ) {
        buffer_append_str(buf_0,"static ");
    }
    if(    type->mAtomic    ) {
        buffer_append_str(buf_0,"_Atomic ");
    }
    if(    type->mConstant    ) {
        buffer_append_str(buf_0,"const ");
    }
    if(    type->mUnsigned    ) {
        buffer_append_str(buf_0,"unsigned ");
    }
    if(    type->mShort    ) {
        buffer_append_str(buf_0,"short ");
    }
    if(    string_operator_equals(type->mOriginalTypeName,"va_list")    ) {
        buffer_append_str(buf_0,"va_list");
    }
    else if(    string_operator_equals(type->mOriginalTypeName,"__builtin_va_list")    ) {
        buffer_append_str(buf_0,"__builtin_va_list");
    }
    else if(    charp_operator_equals(class_name_1,"__builtin_va_list")    ) {
        if(        in_header        ) {
            buffer_append_str(buf_0,class_name_1);
        }
        else {
            buffer_append_str(buf_0,"va_list");
        }
    }
    else if(    type->mClass->mStruct    ) {
        buffer_append_str(buf_0,"struct ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(    type->mClass->mUnion    ) {
        buffer_append_str(buf_0,"union ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(    type->mClass->mEnum    ) {
        buffer_append_str(buf_0,"enum ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(    type->mLongLong    ) {
        if(        charp_operator_equals(class_name_1,"int")        ) {
            buffer_append_str(buf_0,"long long int");
        }
        else if(        charp_operator_equals(class_name_1,"long")        ) {
            buffer_append_str(buf_0,"long long");
        }
    }
    else if(    type->mLong    ) {
        buffer_append_str(buf_0,"long ");
        if(        charp_operator_equals(class_name_1,"int")        ) {
            buffer_append_str(buf_0," int");
        }
        else if(        charp_operator_equals(class_name_1,"long")        ) {
            buffer_append_str(buf_0," long");
        }
        else if(        charp_operator_equals(class_name_1,"double")        ) {
            buffer_append_str(buf_0," double");
        }
    }
    else if(    charp_operator_equals(class_name_1,"long")    ) {
        buffer_append_str(buf_0,"long");
    }
    else if(    charp_operator_equals(class_name_1,"__uint128_t")    ) {
        buffer_append_str(buf_0,"__uint128_t");
    }
    else if(    charp_operator_equals(class_name_1,"bool")    ) {
        buffer_append_str(buf_0,"_Bool");
    }
    else if(    charp_operator_equals(class_name_1,"lambda")    ) {
        result_type_str_9=(char*)come_increment_ref_count(make_type_name_string(type->mResultType,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
        buffer_append_str(buf_0,result_type_str_9);
        buffer_append_str(buf_0," (*)(");
        j_10=0;
        for(        _foreach_var_name1_11=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),        it_14=list$1sType$ph_begin(_foreach_var_name1_11);        !list$1sType$ph_end(_foreach_var_name1_11);        it_14=list$1sType$ph_next(_foreach_var_name1_11)        ){
            param_type_str_17=(char*)come_increment_ref_count(make_type_name_string(it_14,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
            buffer_append_str(buf_0,param_type_str_17);
            if(            j_10!=list$1sType$ph_length(type->mParamTypes)-1            ) {
                buffer_append_str(buf_0,",");
            }
            j_10++;
            (param_type_str_17 = come_decrement_ref_count(param_type_str_17, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name1_11,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_0,")");
        (result_type_str_9 = come_decrement_ref_count(result_type_str_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        class_name_1==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value6=err_msg(info,"class name is null")));
            /*c*/ come_call_finalizer3(__right_value6,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__8 = (char*)come_increment_ref_count(((char*)(__right_value7=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_0,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__8 = come_decrement_ref_count(__result_obj__8, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__8;
        }
        buffer_append_str(buf_0,class_name_1);
    }
    if(    charp_operator_not_equals(class_name_1,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")    ) {
        for(        i_18=0        ;        i_18<type->mPointerNum        ;        i_18++        ){
            buffer_append_str(buf_0,"*");
        }
    }
    if(    array_cast_pointer&&list$1sNode$ph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")    ) {
        buffer_append_str(buf_0,"*");
    }
    if(    type->mRestrict    ) {
        buffer_append_str(buf_0,"restrict");
    }
    if(    type->mAtomic    ) {
    }
    if(    type->mAttribute    ) {
        buffer_append_str(buf_0,((char*)(__right_value8=charp_operator_add(" ",type->mAttribute))));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__9 = (char*)come_increment_ref_count(((char*)(__right_value9=buffer_to_string(buf_0))));
    /*c*/ come_call_finalizer3(buf_0,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__9 = come_decrement_ref_count(__result_obj__9, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__9;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_3;
struct list_item$1sType$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)    ) {
        prev_it_4=it_3;
        it_3=it_3->next;
        /*c*/ come_call_finalizer3(prev_it_4,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_5;
struct list_item$1sNode$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        prev_it_6=it_5;
        it_5=it_5->next;
        /*c*/ come_call_finalizer3(prev_it_6,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_7;
struct list_item$1char$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)    ) {
        prev_it_8=it_7;
        it_7=it_7->next;
        /*c*/ come_call_finalizer3(prev_it_8,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_12;
struct sType* __result_obj__2;
struct sType* __result_obj__3;
struct sType* result_13;
struct sType* __result_obj__4;
result_12 = (void*)0;
result_13 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_12,0,sizeof(struct sType*));
        __result_obj__2 = result_12;
        return __result_obj__2;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__3 = self->it->item;
        return __result_obj__3;
    }
    memset(&result_13,0,sizeof(struct sType*));
    __result_obj__4 = result_13;
    return __result_obj__4;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_15;
struct sType* __result_obj__5;
struct sType* __result_obj__6;
struct sType* result_16;
struct sType* __result_obj__7;
result_15 = (void*)0;
result_16 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_15,0,sizeof(struct sType*));
        __result_obj__5 = result_15;
        return __result_obj__5;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__6 = self->it->item;
        return __result_obj__6;
    }
    memset(&result_16,0,sizeof(struct sType*));
    __result_obj__7 = result_16;
    return __result_obj__7;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* buf_19;
void* __right_value49 = (void*)0;
struct sType* type2_20;
char* class_name_44;
int i_45;
void* __right_value50 = (void*)0;
struct sType* gtype_46;
void* __right_value51 = (void*)0;
int i_53;
int i_54;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
char* __result_obj__30;
    buf_19=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 154, "struct buffer*"))));
    type2_20=(struct sType*)come_increment_ref_count(sType_clone(type));
    class_name_44=type2_20->mClass->mName;
    buffer_append_str(buf_19,class_name_44);
    if(    list$1sType$ph_length(type2_20->mGenericsTypes)>0    ) {
        buffer_append_str(buf_19,"<");
        for(        i_45=0        ;        i_45<list$1sType$ph_length(type2_20->mGenericsTypes)        ;        i_45++        ){
            gtype_46=((struct sType*)(__right_value50=list$1sType$ph_operator_load_element(type2_20->mGenericsTypes,i_45)));
            /*c*/ come_call_finalizer3(__right_value50,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_str(buf_19,((char*)(__right_value51=make_come_type_name_string(gtype_46,info))));
            (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_45!=list$1sType$ph_length(type2_20->mGenericsTypes)-1            ) {
                buffer_append_str(buf_19,",");
            }
        }
        buffer_append_str(buf_19,">");
    }
    if(    charp_operator_not_equals(class_name_44,"lambda")    ) {
        for(        i_53=0        ;        i_53<type2_20->mPointerNum        ;        i_53++        ){
            buffer_append_str(buf_19,"*");
        }
    }
    if(    list$1sNode$ph_length(type2_20->mArrayNum)>0    ) {
        for(        i_54=0        ;        i_54<list$1sNode$ph_length(type2_20->mArrayNum)        ;        i_54++        ){
            buffer_append_str(buf_19,"[]");
        }
    }
    if(    type2_20->mHeap    ) {
        buffer_append_str(buf_19,"%");
    }
    if(    type2_20->mAttribute    ) {
        buffer_append_str(buf_19,((char*)(__right_value52=charp_operator_add(" ",type2_20->mAttribute))));
        (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__30 = (char*)come_increment_ref_count(((char*)(__right_value53=buffer_to_string(buf_19))));
    /*c*/ come_call_finalizer3(buf_19,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_20,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__30 = come_decrement_ref_count(__result_obj__30, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__30;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__10;
void* __right_value12 = (void*)0;
struct sType* result_21;
void* __right_value13 = (void*)0;
struct sType* __dec_obj1;
void* __right_value14 = (void*)0;
struct sType* __dec_obj2;
void* __right_value22 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value23 = (void*)0;
struct sType* __dec_obj7;
void* __right_value25 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value26 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value27 = (void*)0;
char* __dec_obj10;
void* __right_value28 = (void*)0;
char* __dec_obj11;
void* __right_value29 = (void*)0;
char* __dec_obj12;
void* __right_value37 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value38 = (void*)0;
char* __dec_obj17;
void* __right_value39 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value47 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value48 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__25;
    if(    self==(void*)0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    result_21=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_21->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_21->mOriginalLoadVarType,
        result_21->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj1,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_21->mChannelType,
        result_21->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj2,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_21->mGenericsTypes,
        result_21->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj6,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_21->mNoSolvedGenericsType,
        result_21->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_21->mSizeNum,
        result_21->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_21->mAlignas,
        result_21->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_21->mTupleName,
        result_21->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_21->mAttribute,
        result_21->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_21->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_21->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_21->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_21->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_21->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_21->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_21->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_21->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_21->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_21->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_21->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_21->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_21->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_21->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_21->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_21->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_21->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_21->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_21->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_21->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_21->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_21->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_21->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_21->mAsmName,
        result_21->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_21->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_21->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_21->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_21->mArrayNum,
        result_21->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj16,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_21->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_21->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_21->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_21->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_21->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_21->mOriginalTypeName,
        result_21->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_21->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_21->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_21->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_21->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_21->mParamTypes,
        result_21->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj18,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_21->mParamNames,
        result_21->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_21->mResultType,
        result_21->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_21->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_21->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)    ) {
        result_21->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__25 = result_21;
    /*c*/ come_call_finalizer3(result_21,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__25;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__11;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* result_22;
struct list_item$1sType$ph* it_23;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1sType$ph* __result_obj__14;
    if(    self==((void*)0)    ) {
        __result_obj__11 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__11,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__11;
    }
    result_22=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_23=self->head;
    while(    it_23!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_22,(struct sType*)come_increment_ref_count(sType_clone(it_23->item)));
        }
        else {
            list$1sType$ph_add(result_22,(struct sType*)come_increment_ref_count(sType_clone(it_23->item)));
        }
        it_23=it_23->next;
    }
    __result_obj__14 = (struct list$1sType$ph*)come_increment_ref_count(result_22);
    /*c*/ come_call_finalizer3(result_22,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__14,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__14;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__12;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__12 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__12,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__12;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value17 = (void*)0;
struct list_item$1sType$ph* litem_24;
struct sType* __dec_obj3;
void* __right_value18 = (void*)0;
struct list_item$1sType$ph* litem_25;
struct sType* __dec_obj4;
void* __right_value19 = (void*)0;
struct list_item$1sType$ph* litem_26;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__13;
    if(    self->len==0    ) {
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value17=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        __dec_obj3=litem_24->item,
        litem_24->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1    ) {
        litem_25=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value18=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        __dec_obj4=litem_25->item,
        litem_25->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value19=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        __dec_obj5=litem_26->item,
        litem_26->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result_obj__13 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_27;
struct list_item$1sType$ph* prev_it_28;
    it_27=self->head;
    while(    it_27!=((void*)0)    ) {
        prev_it_28=it_27;
        it_27=it_27->next;
        /*c*/ come_call_finalizer3(prev_it_28,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__15;
void* __right_value24 = (void*)0;
struct sNode* result_29;
struct sNode* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__15 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__15) ? __result_obj__15 = come_decrement_ref_count(__result_obj__15, ((struct sNode*)__result_obj__15)->finalize, ((struct sNode*)__result_obj__15)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__15;
    }
    result_29=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_29->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_29->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_29->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_29->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_29->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_29->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_29->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_29->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_29->kind=self->kind;
    }
    __result_obj__16 = (struct sNode*)come_increment_ref_count(result_29);
    ((result_29) ? result_29 = come_decrement_ref_count(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__16) ? __result_obj__16 = come_decrement_ref_count(__result_obj__16, ((struct sNode*)__result_obj__16)->finalize, ((struct sNode*)__result_obj__16)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__16;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__17;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* result_30;
struct list_item$1sNode$ph* it_31;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1sNode$ph* __result_obj__20;
    if(    self==((void*)0)    ) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__17,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__17;
    }
    result_30=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_31=self->head;
    while(    it_31!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_30,(struct sNode*)come_increment_ref_count(sNode_clone(it_31->item)));
        }
        else {
            list$1sNode$ph_add(result_30,(struct sNode*)come_increment_ref_count(sNode_clone(it_31->item)));
        }
        it_31=it_31->next;
    }
    __result_obj__20 = (struct list$1sNode$ph*)come_increment_ref_count(result_30);
    /*c*/ come_call_finalizer3(result_30,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__20,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__20;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__18,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__18;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value32 = (void*)0;
struct list_item$1sNode$ph* litem_32;
struct sNode* __dec_obj13;
void* __right_value33 = (void*)0;
struct list_item$1sNode$ph* litem_33;
struct sNode* __dec_obj14;
void* __right_value34 = (void*)0;
struct list_item$1sNode$ph* litem_34;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__19;
    if(    self->len==0    ) {
        litem_32=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value32=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        __dec_obj13=litem_32->item,
        litem_32->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1    ) {
        litem_33=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value33=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj14=litem_33->item,
        litem_33->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value34=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj15=litem_34->item,
        litem_34->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__19 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__19;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_35;
struct list_item$1sNode$ph* prev_it_36;
    it_35=self->head;
    while(    it_35!=((void*)0)    ) {
        prev_it_36=it_35;
        it_35=it_35->next;
        /*c*/ come_call_finalizer3(prev_it_36,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__21;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* result_37;
struct list_item$1char$ph* it_38;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1char$ph* __result_obj__24;
    if(    self==((void*)0)    ) {
        __result_obj__21 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__21,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__21;
    }
    result_37=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_38=self->head;
    while(    it_38!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_37,(char*)come_increment_ref_count((char*)come_memdup(it_38->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_37,(char*)come_increment_ref_count((char*)come_memdup(it_38->item, "./comelang.h", 1032, "char*")));
        }
        it_38=it_38->next;
    }
    __result_obj__24 = (struct list$1char$ph*)come_increment_ref_count(result_37);
    /*c*/ come_call_finalizer3(result_37,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__24,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__22;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__22 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__22,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__22;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value42 = (void*)0;
struct list_item$1char$ph* litem_39;
char* __dec_obj19;
void* __right_value43 = (void*)0;
struct list_item$1char$ph* litem_40;
char* __dec_obj20;
void* __right_value44 = (void*)0;
struct list_item$1char$ph* litem_41;
char* __dec_obj21;
struct list$1char$ph* __result_obj__23;
    if(    self->len==0    ) {
        litem_39=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value42=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_39->prev=((void*)0);
        litem_39->next=((void*)0);
        __dec_obj19=litem_39->item,
        litem_39->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_39;
        self->head=litem_39;
    }
    else if(    self->len==1    ) {
        litem_40=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value43=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_40->prev=self->head;
        litem_40->next=((void*)0);
        __dec_obj20=litem_40->item,
        litem_40->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_40;
        self->head->next=litem_40;
    }
    else {
        litem_41=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value44=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_41->prev=self->tail;
        litem_41->next=((void*)0);
        __dec_obj21=litem_41->item,
        litem_41->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_41;
        self->tail=litem_41;
    }
    self->len++;
    __result_obj__23 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__23;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_42;
struct list_item$1char$ph* prev_it_43;
    it_42=self->head;
    while(    it_42!=((void*)0)    ) {
        prev_it_43=it_42;
        it_42=it_42->next;
        /*c*/ come_call_finalizer3(prev_it_43,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_47;
int i_48;
struct sType* __result_obj__26;
struct sType* default_value_49;
struct sType* __result_obj__27;
default_value_49 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_47=self->head;
    i_48=0;
    while(    it_47!=((void*)0)    ) {
        if(        position==i_48        ) {
            __result_obj__26 = (struct sType*)come_increment_ref_count(it_47->item);
            /*c*/ come_call_finalizer3(__result_obj__26,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__26;
        }
        it_47=it_47->next;
        i_48++;
    }
    memset(&default_value_49,0,sizeof(struct sType*));
    __result_obj__27 = (struct sType*)come_increment_ref_count(default_value_49);
    /*c*/ come_call_finalizer3(default_value_49,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__27,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__27;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_50;
int i_51;
struct sType* __result_obj__28;
struct sType* default_value_52;
struct sType* __result_obj__29;
default_value_52 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_50=self->head;
    i_51=0;
    while(    it_50!=((void*)0)    ) {
        if(        position==i_51        ) {
            __result_obj__28 = (struct sType*)come_increment_ref_count(it_50->item);
            /*c*/ come_call_finalizer3(__result_obj__28,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__28;
        }
        it_50=it_50->next;
        i_51++;
    }
    memset(&default_value_52,0,sizeof(struct sType*));
    __result_obj__29 = (struct sType*)come_increment_ref_count(default_value_52);
    /*c*/ come_call_finalizer3(default_value_52,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__29,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__29;
}

void show_type(struct sType* type, struct sInfo* info){
void* __right_value54 = (void*)0;
    puts(((char*)(__right_value54=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct buffer* buf_55;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
char* __result_obj__31;
int i_56;
struct list$1sType$ph* _foreach_var_name2_57;
struct sType* it_58;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
char* __result_obj__32;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
int i_59;
int i_60;
struct list$1sType$ph* _foreach_var_name3_61;
struct sType* it_62;
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
char* __result_obj__33;
void* __right_value69 = (void*)0;
char* __result_obj__34;
    buf_55=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 207, "struct buffer*"))));
    if(    type->mResultType==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value57=err_msg(info,"invalid lambda type")));
        /*c*/ come_call_finalizer3(__right_value57,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__31 = (char*)come_increment_ref_count(((char*)(__right_value58=__builtin_string(""))));
        /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__31 = come_decrement_ref_count(__result_obj__31, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__31;
    }
    if(    type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")    ) {
        buffer_append_format(buf_55,"(*%s)(",var_name);
        i_56=0;
        for(        _foreach_var_name2_57=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),        it_58=list$1sType$ph_begin(_foreach_var_name2_57);        !list$1sType$ph_end(_foreach_var_name2_57);        it_58=list$1sType$ph_next(_foreach_var_name2_57)        ){
            buffer_append_str(buf_55,((char*)(__right_value59=make_type_name_string(it_58,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_56!=list$1sType$ph_length(type->mParamTypes)-1            ) {
                buffer_append_str(buf_55,",");
            }
            i_56++;
        }
        /*c*/ come_call_finalizer3(_foreach_var_name2_57,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_55,")");
        if(        type->mAttribute        ) {
            buffer_append_str(buf_55,((char*)(__right_value60=charp_operator_add(" ",type->mAttribute))));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__32 = (char*)come_increment_ref_count(((char*)(__right_value62=make_lambda_type_name_string(type->mResultType,((char*)(__right_value61=buffer_to_string(buf_55))),info))));
        /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__32 = come_decrement_ref_count(__result_obj__32, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__32;
    }
    else {
        if(        type->mLambdaArray        ) {
            if(            type->mLambdaArrayNum==0            ) {
                buffer_append_format(buf_55,"%s (*%s[])(",((char*)(__right_value63=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name);
                (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_55,"%s (*%s[%d])(",((char*)(__right_value64=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name,type->mLambdaArrayNum);
                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append_format(buf_55,"%s ",((char*)(__right_value65=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            type->mFunctionPointerNum>1            ) {
                buffer_append_str(buf_55,"(");
                for(                i_59=0                ;                i_59<type->mFunctionPointerNum                ;                i_59++                ){
                    buffer_append_str(buf_55,"*");
                }
                buffer_append_format(buf_55,"%s)(",var_name);
            }
            else {
                buffer_append_format(buf_55,"(*%s)(",var_name);
            }
        }
        i_60=0;
        for(        _foreach_var_name3_61=(struct list$1sType$ph*)come_increment_ref_count(type->mParamTypes),        it_62=list$1sType$ph_begin(_foreach_var_name3_61);        !list$1sType$ph_end(_foreach_var_name3_61);        it_62=list$1sType$ph_next(_foreach_var_name3_61)        ){
            buffer_append_str(buf_55,((char*)(__right_value66=make_type_name_string(it_62,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_60!=list$1sType$ph_length(type->mParamTypes)-1            ) {
                buffer_append_str(buf_55,",");
            }
            i_60++;
        }
        /*c*/ come_call_finalizer3(_foreach_var_name3_61,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_55,")");
        if(        type->mAttribute        ) {
            buffer_append_str(buf_55,((char*)(__right_value67=charp_operator_add(" ",type->mAttribute))));
            (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__33 = (char*)come_increment_ref_count(((char*)(__right_value68=buffer_to_string(buf_55))));
        /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__33 = come_decrement_ref_count(__result_obj__33, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__33;
    }
    __result_obj__34 = (char*)come_increment_ref_count(((char*)(__right_value69=buffer_to_string(buf_55))));
    /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__34 = come_decrement_ref_count(__result_obj__34, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__34;
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct buffer* buf_63;
void* __right_value72 = (void*)0;
struct sType* type2_64;
void* __right_value73 = (void*)0;
char* str_65;
void* __right_value74 = (void*)0;
char* str_66;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
char* __result_obj__35;
void* __right_value77 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value78 = (void*)0;
char* type_str_68;
void* __right_value79 = (void*)0;
char* type_str_69;
struct list$1sNode$ph* _foreach_var_name4_70;
struct sNode* it_73;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
char* __result_obj__42;
void* __right_value82 = (void*)0;
struct CVALUE* cvalue_76;
void* __right_value83 = (void*)0;
char* type_str_77;
void* __right_value84 = (void*)0;
char* __result_obj__43;
void* __right_value85 = (void*)0;
char* __result_obj__44;
    buf_63=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 284, "struct buffer*"))));
    type2_64=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type2_64->mArrayPointerType    ) {
        type2_64->mPointerNum--;
    }
    if(    string_operator_equals(type2_64->mClass->mName,"lambda")&&type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")    ) {
        str_65=(char*)come_increment_ref_count(header_lambda(type2_64,(char*)come_increment_ref_count(type2_64->mAsmName),info));
        buffer_append_str(buf_63,str_65);
        (str_65 = come_decrement_ref_count(str_65, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    string_operator_equals(type2_64->mClass->mName,"lambda")    ) {
        str_66=(char*)come_increment_ref_count(make_lambda_type_name_string(type2_64,name,info));
        buffer_append_str(buf_63,str_66);
        (str_66 = come_decrement_ref_count(str_66, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    type2_64->mSizeNum!=((void*)0)    ) {
        if(        !node_compile(type2_64->mSizeNum,info)        ) {
            ((struct tuple2$2int$bool$*)(__right_value75=err_msg(info,"invalid bit field number")));
            /*c*/ come_call_finalizer3(__right_value75,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__35 = (char*)come_increment_ref_count(((char*)(__right_value76=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__35 = come_decrement_ref_count(__result_obj__35, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__35;
        }
        come_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        type_str_68=(char*)come_increment_ref_count(make_type_name_string(type2_64,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_format(buf_63,"%s ",type_str_68);
        buffer_append_format(buf_63,"%s:%s",name,come_value_67->c_value);
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")        ) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")        ) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        /*c*/ come_call_finalizer3(come_value_67,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_str_68 = come_decrement_ref_count(type_str_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(type2_64->mArrayNum)>0    ) {
        type_str_69=(char*)come_increment_ref_count(make_type_name_string(type2_64,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(buf_63,type_str_69);
        buffer_append_str(buf_63," ");
        buffer_append_str(buf_63,name);
        for(        _foreach_var_name4_70=(struct list$1sNode$ph*)come_increment_ref_count(type2_64->mArrayNum),        it_73=list$1sNode$ph_begin(_foreach_var_name4_70);        !list$1sNode$ph_end(_foreach_var_name4_70);        it_73=list$1sNode$ph_next(_foreach_var_name4_70)        ){
            if(            !node_compile(it_73,info)            ) {
                ((struct tuple2$2int$bool$*)(__right_value80=err_msg(info,"invalid array number")));
                /*c*/ come_call_finalizer3(__right_value80,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__42 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string(""))));
                /*c*/ come_call_finalizer3(_foreach_var_name4_70,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_str_69 = come_decrement_ref_count(type_str_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__42;
            }
            cvalue_76=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(buf_63,"[%s]",cvalue_76->c_value);
            /*c*/ come_call_finalizer3(cvalue_76,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(_foreach_var_name4_70,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        type2_64->mArrayPointerType        ) {
            buffer_append_str(buf_63,"[]");
        }
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")        ) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        (type_str_69 = come_decrement_ref_count(type_str_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type_str_77=(char*)come_increment_ref_count(make_type_name_string(type2_64,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        string_operator_equals(type_str_77,"")        ) {
            __result_obj__43 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
            (type_str_77 = come_decrement_ref_count(type_str_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__43;
        }
        buffer_append_str(buf_63,type_str_77);
        buffer_append_str(buf_63," ");
        buffer_append_str(buf_63,name);
        if(        type2_64->mArrayPointerType        ) {
            buffer_append_str(buf_63,"[]");
        }
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")        ) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        (type_str_77 = come_decrement_ref_count(type_str_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value85=buffer_to_string(buf_63))));
    /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__44;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_71;
struct sNode* __result_obj__36;
struct sNode* __result_obj__37;
struct sNode* result_72;
struct sNode* __result_obj__38;
result_71 = (void*)0;
result_72 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_71,0,sizeof(struct sNode*));
        __result_obj__36 = result_71;
        return __result_obj__36;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__37 = self->it->item;
        return __result_obj__37;
    }
    memset(&result_72,0,sizeof(struct sNode*));
    __result_obj__38 = result_72;
    return __result_obj__38;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_74;
struct sNode* __result_obj__39;
struct sNode* __result_obj__40;
struct sNode* result_75;
struct sNode* __result_obj__41;
result_74 = (void*)0;
result_75 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_74,0,sizeof(struct sNode*));
        __result_obj__39 = result_74;
        return __result_obj__39;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_75,0,sizeof(struct sNode*));
    __result_obj__41 = result_75;
    return __result_obj__41;
}

struct sType* get_no_solved_type(struct sType* type){
struct sType* result_78;
struct sType* __dec_obj24;
void* __right_value86 = (void*)0;
struct sType* __dec_obj25;
int i_79;
struct list$1sType$ph* _foreach_var_name5_80;
struct sType* it_81;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct sType* __result_obj__48;
result_78 = (void*)0;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj24=result_78,
        result_78=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj25=result_78,
        result_78=(struct sType*)come_increment_ref_count(sType_clone(type));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_79=0;
    for(    _foreach_var_name5_80=(struct list$1sType$ph*)come_increment_ref_count(type->mGenericsTypes),    it_81=list$1sType$ph_begin(_foreach_var_name5_80);    !list$1sType$ph_end(_foreach_var_name5_80);    it_81=list$1sType$ph_next(_foreach_var_name5_80)    ){
        list$1sType$ph_operator_store_element(result_78->mGenericsTypes,i_79,(struct sType*)come_increment_ref_count(get_no_solved_type(it_81)));
        /*c*/ come_call_finalizer3(__right_value90,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_79++;
    }
    /*c*/ come_call_finalizer3(_foreach_var_name5_80,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__48 = (struct sType*)come_increment_ref_count(result_78);
    /*c*/ come_call_finalizer3(result_78,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__48,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_82;
int i_83;
struct sType* default_value_84;
struct list$1sType$ph* __result_obj__46;
struct list_item$1sType$ph* it_88;
int i_89;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__47;
default_value_84 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_82=self->len;
        for(        i_83=0        ;        i_83<position-len_82        ;        i_83++        ){
            memset(&default_value_84,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_84));
            /*c*/ come_call_finalizer3(default_value_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__46 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__46;
    }
    it_88=self->head;
    i_89=0;
    while(    it_88!=((void*)0)    ) {
        if(        position==i_89        ) {
            __dec_obj29=it_88->item,
            it_88->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_88=it_88->next;
        i_89++;
    }
    __result_obj__47 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__47;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value87 = (void*)0;
struct list_item$1sType$ph* litem_85;
struct sType* __dec_obj26;
void* __right_value88 = (void*)0;
struct list_item$1sType$ph* litem_86;
struct sType* __dec_obj27;
void* __right_value89 = (void*)0;
struct list_item$1sType$ph* litem_87;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__45;
    if(    self->len==0    ) {
        litem_85=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value87=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_85->prev=((void*)0);
        litem_85->next=((void*)0);
        __dec_obj26=litem_85->item,
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_85;
        self->head=litem_85;
    }
    else if(    self->len==1    ) {
        litem_86=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value88=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_86->prev=self->head;
        litem_86->next=((void*)0);
        __dec_obj27=litem_86->item,
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_86;
        self->head->next=litem_86;
    }
    else {
        litem_87=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value89=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_87->prev=self->tail;
        litem_87->next=((void*)0);
        __dec_obj28=litem_87->item,
        litem_87->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_87;
        self->tail=litem_87;
    }
    self->len++;
    __result_obj__45 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__45;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info){
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_90;
int i_91;
void* __right_value94 = (void*)0;
char* __result_obj__49;
void* __right_value95 = (void*)0;
struct sType* no_solved_type_92;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* buf_93;
char* class_name_94;
int i_95;
void* __right_value98 = (void*)0;
struct sType* gtype_96;
void* __right_value99 = (void*)0;
int i_97;
int i_98;
void* __right_value100 = (void*)0;
char* __result_obj__50;
    if(    original_type_name&&type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")    ) {
        buf_90=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 393, "struct buffer*"))));
        buffer_append_str(buf_90,type->mOriginalTypeName);
        for(        i_91=0        ;        i_91<type->mOriginalTypeNamePointerNum        ;        i_91++        ){
            buffer_append_str(buf_90,"*");
        }
        if(        type->mOriginalTypeNameHeap        ) {
            buffer_append_str(buf_90,"%");
        }
        __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_90))));
        /*c*/ come_call_finalizer3(buf_90,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__49;
        /*c*/ come_call_finalizer3(buf_90,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        no_solved_type_92=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
        buf_93=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 408, "struct buffer*"))));
        class_name_94=no_solved_type_92->mClass->mName;
        buffer_append_str(buf_93,class_name_94);
        if(        list$1sType$ph_length(no_solved_type_92->mGenericsTypes)>0        ) {
            buffer_append_str(buf_93,"<");
            for(            i_95=0            ;            i_95<list$1sType$ph_length(no_solved_type_92->mGenericsTypes)            ;            i_95++            ){
                gtype_96=((struct sType*)(__right_value98=list$1sType$ph_operator_load_element(no_solved_type_92->mGenericsTypes,i_95)));
                /*c*/ come_call_finalizer3(__right_value98,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                buffer_append_str(buf_93,((char*)(__right_value99=make_come_type_name_string_no_solved(gtype_96,(_Bool)1,info))));
                (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                i_95!=list$1sType$ph_length(no_solved_type_92->mGenericsTypes)-1                ) {
                    buffer_append_str(buf_93,",");
                }
            }
            buffer_append_str(buf_93,">");
        }
        if(        charp_operator_not_equals(class_name_94,"lambda")        ) {
            for(            i_97=0            ;            i_97<no_solved_type_92->mPointerNum            ;            i_97++            ){
                buffer_append_str(buf_93,"*");
            }
        }
        if(        list$1sNode$ph_length(no_solved_type_92->mArrayNum)>0        ) {
            for(            i_98=0            ;            i_98<list$1sNode$ph_length(no_solved_type_92->mArrayNum)            ;            i_98++            ){
                buffer_append_str(buf_93,"[]");
            }
        }
        if(        no_solved_type_92->mHeap        ) {
            buffer_append_str(buf_93,"%");
        }
        __result_obj__50 = (char*)come_increment_ref_count(((char*)(__right_value100=buffer_to_string(buf_93))));
        /*c*/ come_call_finalizer3(no_solved_type_92,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_93,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__50;
        /*c*/ come_call_finalizer3(no_solved_type_92,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_93,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info){
void* __right_value101 = (void*)0;
char* type_name_99;
void* __right_value102 = (void*)0;
char* __result_obj__51;
    type_name_99=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(type,original_type_name,info));
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value102=xsprintf("%s %s",type_name_99,name))));
    (type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__51;
}

char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info){
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct buffer* header_100;
void* __right_value105 = (void*)0;
char* result_type_name_101;
void* __right_value106 = (void*)0;
char* impl_name_102;
int i_103;
void* __right_value107 = (void*)0;
struct sType* param_type_104;
void* __right_value108 = (void*)0;
char* param_name_111;
void* __right_value109 = (void*)0;
char* default_parametor_112;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__56;
    header_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 458, "struct buffer*"))));
    result_type_name_101=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(fun->mResultType,(_Bool)0,info));
    if(    impl_type    ) {
        impl_name_102=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(impl_type,(_Bool)0,info));
        buffer_append_format(header_100,"extern %s %s::%s(",result_type_name_101,impl_name_102,base_fun_name);
        (impl_name_102 = come_decrement_ref_count(impl_name_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_format(header_100,"extern %s %s(",result_type_name_101,base_fun_name);
    }
    for(    i_103=0    ;    i_103<list$1sType$ph_length(fun->mParamTypes)    ;    i_103++    ){
        param_type_104=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(fun->mParamTypes,i_103));
        param_name_111=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamNames,i_103));
        default_parametor_112=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamDefaultParametors,i_103));
        if(        default_parametor_112        ) {
            buffer_append_format(header_100,"%s %s=%s",((char*)(__right_value110=make_come_type_name_string_no_solved(param_type_104,(_Bool)0,info))),param_name_111,default_parametor_112);
            (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(header_100,"%s %s",((char*)(__right_value111=make_come_type_name_string_no_solved(param_type_104,(_Bool)0,info))),param_name_111);
            (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_103!=list$1sType$ph_length(fun->mParamTypes)-1        ) {
            buffer_append_str(header_100,",");
        }
        /*c*/ come_call_finalizer3(param_type_104,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_111 = come_decrement_ref_count(param_name_111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (default_parametor_112 = come_decrement_ref_count(default_parametor_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    version_==-1||version_==0    ) {
        buffer_append_str(header_100,");\n");
    }
    else {
        buffer_append_format(header_100,") version %d;\n",version_);
    }
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value112=buffer_to_string(header_100))));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(impl_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(header_100,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_name_101 = come_decrement_ref_count(result_type_name_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__56;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_105;
int i_106;
char* __result_obj__52;
char* default_value_107;
char* __result_obj__53;
default_value_107 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_105=self->head;
    i_106=0;
    while(    it_105!=((void*)0)    ) {
        if(        position==i_106        ) {
            __result_obj__52 = (char*)come_increment_ref_count(it_105->item);
            (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__52;
        }
        it_105=it_105->next;
        i_106++;
    }
    memset(&default_value_107,0,sizeof(char*));
    __result_obj__53 = (char*)come_increment_ref_count(default_value_107);
    (default_value_107 = come_decrement_ref_count(default_value_107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__53;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_108;
int i_109;
char* __result_obj__54;
char* default_value_110;
char* __result_obj__55;
default_value_110 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_108=self->head;
    i_109=0;
    while(    it_108!=((void*)0)    ) {
        if(        position==i_109        ) {
            __result_obj__54 = (char*)come_increment_ref_count(it_108->item);
            (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__54;
        }
        it_108=it_108->next;
        i_109++;
    }
    memset(&default_value_110,0,sizeof(char*));
    __result_obj__55 = (char*)come_increment_ref_count(default_value_110);
    (default_value_110 = come_decrement_ref_count(default_value_110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__55;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct buffer* output_113;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct buffer* output2_114;
int i_115;
struct list$1sType$ph* _foreach_var_name6_116;
struct sType* it_117;
void* __right_value117 = (void*)0;
char* name_118;
void* __right_value118 = (void*)0;
char* str_119;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
char* str_120;
void* __right_value121 = (void*)0;
struct sType* base_result_type_121;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1sNode$ph* __dec_obj30;
void* __right_value124 = (void*)0;
char* result_type_str_122;
int i_123;
struct list$1sType$ph* _foreach_var_name7_124;
struct sType* it_125;
void* __right_value125 = (void*)0;
char* name_126;
void* __right_value126 = (void*)0;
char* str_127;
void* __right_value127 = (void*)0;
struct sNode* node_128;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
char* __result_obj__61;
void* __right_value130 = (void*)0;
struct CVALUE* cvalue_135;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
char* result_type_str_136;
int i_137;
struct list$1sType$ph* _foreach_var_name8_138;
struct sType* it_139;
void* __right_value133 = (void*)0;
char* name_140;
void* __right_value134 = (void*)0;
char* str_141;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
char* __result_obj__62;
    output_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 499, "struct buffer*"))));
    if(    fun->mResultType->mResultType    ) {
        output2_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 501, "struct buffer*"))));
        buffer_append_str(output2_114,fun->mName);
        buffer_append_str(output2_114,"(");
        i_115=0;
        for(        _foreach_var_name6_116=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),        it_117=list$1sType$ph_begin(_foreach_var_name6_116);        !list$1sType$ph_end(_foreach_var_name6_116);        it_117=list$1sType$ph_next(_foreach_var_name6_116)        ){
            name_118=((char*)(__right_value117=list$1char$ph_operator_load_element(fun->mParamNames,i_115)));
            (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_119=(char*)come_increment_ref_count(make_define_var(it_117,name_118,(_Bool)0,info));
            buffer_append_str(output2_114,str_119);
            if(            i_115==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output2_114,", ...");
                }
            }
            else {
                buffer_append_str(output2_114,", ");
            }
            i_115++;
            (str_119 = come_decrement_ref_count(str_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name6_116,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_114,")");
        str_120=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value119=buffer_to_string(output2_114))),info));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic        ) {
            buffer_append_str(output_113,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_113,"inline ");
        }
        buffer_append_str(output_113,str_120);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value121=buffer_to_string(output_113))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(output2_114,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_120 = come_decrement_ref_count(str_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0    ) {
        base_result_type_121=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj30=base_result_type_121->mArrayNum,
        base_result_type_121->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 555, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj30,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_122=(char*)come_increment_ref_count(make_type_name_string(base_result_type_121,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_113,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_113,"inline ");
        }
        buffer_append_str(output_113,result_type_str_122);
        buffer_append_str(output_113," (*");
        buffer_append_str(output_113,fun->mName);
        buffer_append_str(output_113,"(");
        i_123=0;
        for(        _foreach_var_name7_124=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),        it_125=list$1sType$ph_begin(_foreach_var_name7_124);        !list$1sType$ph_end(_foreach_var_name7_124);        it_125=list$1sType$ph_next(_foreach_var_name7_124)        ){
            name_126=((char*)(__right_value125=list$1char$ph_operator_load_element(fun->mParamNames,i_123)));
            (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_127=(char*)come_increment_ref_count(make_define_var(it_125,name_126,(_Bool)0,info));
            buffer_append_str(output_113,str_127);
            if(            i_123==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_113,", ...");
                }
            }
            else {
                buffer_append_str(output_113,", ");
            }
            i_123++;
            (str_127 = come_decrement_ref_count(str_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name7_124,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_128=((struct sNode*)(__right_value127=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value127) ? __right_value127 = come_decrement_ref_count(__right_value127, ((struct sNode*)__right_value127)->finalize, ((struct sNode*)__right_value127)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_128,info)        ) {
            ((struct tuple2$2int$bool$*)(__right_value128=err_msg(info,"invalid array number")));
            /*c*/ come_call_finalizer3(__right_value128,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value129=__builtin_string(""))));
            /*c*/ come_call_finalizer3(base_result_type_121,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_122 = come_decrement_ref_count(result_type_str_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_113,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__61;
        }
        cvalue_135=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_113,"))[%s]",cvalue_135->c_value);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value131=buffer_to_string(output_113))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(base_result_type_121,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_122 = come_decrement_ref_count(result_type_str_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_135,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_136=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_113,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_113,"inline ");
        }
        buffer_append_str(output_113,result_type_str_136);
        buffer_append_str(output_113," ");
        buffer_append_str(output_113,fun->mName);
        buffer_append_str(output_113,"(");
        i_137=0;
        for(        _foreach_var_name8_138=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),        it_139=list$1sType$ph_begin(_foreach_var_name8_138);        !list$1sType$ph_end(_foreach_var_name8_138);        it_139=list$1sType$ph_next(_foreach_var_name8_138)        ){
            name_140=((char*)(__right_value133=list$1char$ph_operator_load_element(fun->mParamNames,i_137)));
            (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_141=(char*)come_increment_ref_count(make_define_var(it_139,name_140,(_Bool)0,info));
            buffer_append_str(output_113,str_141);
            if(            i_137==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_113,", ...");
                }
            }
            else {
                buffer_append_str(output_113,", ");
            }
            i_137++;
            (str_141 = come_decrement_ref_count(str_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name8_138,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output_113,")");
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value135=buffer_to_string(output_113))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        (result_type_str_136 = come_decrement_ref_count(result_type_str_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buffer_append_str(output_113,"{\n");
    buffer_append_str(output_113,((char*)(__right_value136=buffer_to_string(fun->mSourceHead))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_113,((char*)(__right_value137=buffer_to_string(fun->mSourceHead2))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_113,((char*)(__right_value138=buffer_to_string(fun->mSource))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_113,"}\n");
    __result_obj__62 = (char*)come_increment_ref_count(((char*)(__right_value139=buffer_to_string(output_113))));
    /*c*/ come_call_finalizer3(output_113,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__62;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_129;
int i_130;
struct sNode* __result_obj__57;
struct sNode* default_value_131;
struct sNode* __result_obj__58;
default_value_131 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_129=self->head;
    i_130=0;
    while(    it_129!=((void*)0)    ) {
        if(        position==i_130        ) {
            __result_obj__57 = (struct sNode*)come_increment_ref_count(it_129->item);
            ((__result_obj__57) ? __result_obj__57 = come_decrement_ref_count(__result_obj__57, ((struct sNode*)__result_obj__57)->finalize, ((struct sNode*)__result_obj__57)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__57;
        }
        it_129=it_129->next;
        i_130++;
    }
    memset(&default_value_131,0,sizeof(struct sNode*));
    __result_obj__58 = (struct sNode*)come_increment_ref_count(default_value_131);
    ((default_value_131) ? default_value_131 = come_decrement_ref_count(default_value_131, ((struct sNode*)default_value_131)->finalize, ((struct sNode*)default_value_131)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__58) ? __result_obj__58 = come_decrement_ref_count(__result_obj__58, ((struct sNode*)__result_obj__58)->finalize, ((struct sNode*)__result_obj__58)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__58;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_132;
int i_133;
struct sNode* __result_obj__59;
struct sNode* default_value_134;
struct sNode* __result_obj__60;
default_value_134 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_132=self->head;
    i_133=0;
    while(    it_132!=((void*)0)    ) {
        if(        position==i_133        ) {
            __result_obj__59 = (struct sNode*)come_increment_ref_count(it_132->item);
            ((__result_obj__59) ? __result_obj__59 = come_decrement_ref_count(__result_obj__59, ((struct sNode*)__result_obj__59)->finalize, ((struct sNode*)__result_obj__59)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__59;
        }
        it_132=it_132->next;
        i_133++;
    }
    memset(&default_value_134,0,sizeof(struct sNode*));
    __result_obj__60 = (struct sNode*)come_increment_ref_count(default_value_134);
    ((default_value_134) ? default_value_134 = come_decrement_ref_count(default_value_134, ((struct sNode*)default_value_134)->finalize, ((struct sNode*)default_value_134)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__60) ? __result_obj__60 = come_decrement_ref_count(__result_obj__60, ((struct sNode*)__result_obj__60)->finalize, ((struct sNode*)__result_obj__60)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__60;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct buffer* output_142;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* output2_143;
int i_144;
struct list$1sType$ph* _foreach_var_name9_145;
struct sType* it_146;
void* __right_value144 = (void*)0;
char* name_147;
void* __right_value145 = (void*)0;
char* str_148;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
char* str_149;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct sType* base_result_type_150;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct list$1sNode$ph* __dec_obj31;
void* __right_value152 = (void*)0;
char* result_type_str_151;
int i_152;
struct list$1sType$ph* _foreach_var_name10_153;
struct sType* it_154;
void* __right_value153 = (void*)0;
char* name_155;
void* __right_value154 = (void*)0;
char* str_156;
void* __right_value155 = (void*)0;
struct sNode* node_157;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
char* __result_obj__63;
void* __right_value158 = (void*)0;
struct CVALUE* cvalue_158;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
char* result_type_str_159;
int i_160;
struct list$1sType$ph* _foreach_var_name11_161;
struct sType* it_162;
void* __right_value162 = (void*)0;
char* name_163;
void* __right_value163 = (void*)0;
char* str_164;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* __result_obj__64;
    output_142=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 681, "struct buffer*"))));
    if(    fun->mResultType->mResultType    ) {
        output2_143=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 684, "struct buffer*"))));
        buffer_append_str(output2_143,fun->mName);
        buffer_append_str(output2_143,"(");
        i_144=0;
        for(        _foreach_var_name9_145=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),        it_146=list$1sType$ph_begin(_foreach_var_name9_145);        !list$1sType$ph_end(_foreach_var_name9_145);        it_146=list$1sType$ph_next(_foreach_var_name9_145)        ){
            name_147=((char*)(__right_value144=list$1char$ph_operator_load_element(fun->mParamNames,i_144)));
            (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_148=(char*)come_increment_ref_count(make_define_var(it_146,name_147,(_Bool)0,info));
            buffer_append_str(output2_143,str_148);
            if(            i_144!=list$1sType$ph_length(fun->mParamTypes)-1            ) {
                buffer_append_str(output2_143,", ");
            }
            i_144++;
            (str_148 = come_decrement_ref_count(str_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name9_145,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_143,")");
        str_149=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value146=buffer_to_string(output2_143))),info));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic        ) {
            buffer_append_str(output_142,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_142,"inline ");
        }
        buffer_append_str(output_142,str_149);
        if(        string_operator_not_equals(fun->mFunAttribute,"")        ) {
            buffer_append_str(output_142,((char*)(__right_value149=xsprintf(" \%s ",((char*)(__right_value148=string_to_string(fun->mFunAttribute)))))));
            (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(output_142,";\n");
        /*c*/ come_call_finalizer3(output2_143,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_149 = come_decrement_ref_count(str_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0    ) {
        base_result_type_150=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj31=base_result_type_150->mArrayNum,
        base_result_type_150->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 720, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj31,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_151=(char*)come_increment_ref_count(make_type_name_string(base_result_type_150,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_142,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_142,"inline ");
        }
        buffer_append_str(output_142,result_type_str_151);
        buffer_append_str(output_142," (*");
        buffer_append_str(output_142,fun->mName);
        buffer_append_str(output_142,"(");
        i_152=0;
        for(        _foreach_var_name10_153=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),        it_154=list$1sType$ph_begin(_foreach_var_name10_153);        !list$1sType$ph_end(_foreach_var_name10_153);        it_154=list$1sType$ph_next(_foreach_var_name10_153)        ){
            name_155=((char*)(__right_value153=list$1char$ph_operator_load_element(fun->mParamNames,i_152)));
            (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_156=(char*)come_increment_ref_count(make_define_var(it_154,name_155,(_Bool)0,info));
            buffer_append_str(output_142,str_156);
            if(            i_152==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_142,", ...");
                }
            }
            else {
                buffer_append_str(output_142,", ");
            }
            i_152++;
            (str_156 = come_decrement_ref_count(str_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name10_153,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_157=((struct sNode*)(__right_value155=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value155) ? __right_value155 = come_decrement_ref_count(__right_value155, ((struct sNode*)__right_value155)->finalize, ((struct sNode*)__right_value155)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_157,info)        ) {
            ((struct tuple2$2int$bool$*)(__right_value156=err_msg(info,"invalid array number")));
            /*c*/ come_call_finalizer3(__right_value156,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__63 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(""))));
            /*c*/ come_call_finalizer3(base_result_type_150,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_151 = come_decrement_ref_count(result_type_str_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_142,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__63 = come_decrement_ref_count(__result_obj__63, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__63;
        }
        cvalue_158=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_142,"))[%s]",cvalue_158->c_value);
        if(        string_operator_not_equals(fun->mAttribute,"")        ) {
            buffer_append_str(output_142,((char*)(__right_value160=xsprintf("\%s ",((char*)(__right_value159=string_to_string(fun->mAttribute)))))));
            (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_format(output_142,";\n");
        /*c*/ come_call_finalizer3(base_result_type_150,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_151 = come_decrement_ref_count(result_type_str_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_158,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_159=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic        ) {
            buffer_append_str(output_142,"static ");
        }
        if(        fun->mInline        ) {
            buffer_append_str(output_142,"inline ");
        }
        buffer_append_str(output_142,result_type_str_159);
        buffer_append_str(output_142," ");
        buffer_append_str(output_142,fun->mName);
        buffer_append_str(output_142,"(");
        i_160=0;
        for(        _foreach_var_name11_161=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes),        it_162=list$1sType$ph_begin(_foreach_var_name11_161);        !list$1sType$ph_end(_foreach_var_name11_161);        it_162=list$1sType$ph_next(_foreach_var_name11_161)        ){
            name_163=((char*)(__right_value162=list$1char$ph_operator_load_element(fun->mParamNames,i_160)));
            (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_164=(char*)come_increment_ref_count(make_define_var(it_162,name_163,(_Bool)0,info));
            buffer_append_str(output_142,str_164);
            if(            i_160==list$1sType$ph_length(fun->mParamTypes)-1            ) {
                if(                fun->mVarArgs                ) {
                    buffer_append_str(output_142,", ...");
                }
            }
            else {
                buffer_append_str(output_142,", ");
            }
            i_160++;
            (str_164 = come_decrement_ref_count(str_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(_foreach_var_name11_161,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        string_operator_not_equals(fun->mFunAttribute,"")        ) {
            buffer_append_str(output_142,((char*)(__right_value165=xsprintf(") \%s;\n",((char*)(__right_value164=string_to_string(fun->mFunAttribute)))))));
            (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_str(output_142,");\n");
        }
        (result_type_str_159 = come_decrement_ref_count(result_type_str_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value166=buffer_to_string(output_142))));
    /*c*/ come_call_finalizer3(output_142,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__64;
}

static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct buffer* output_165;
void* __right_value169 = (void*)0;
char* result_type_str_166;
int i_167;
struct list$1sType$ph* _foreach_var_name12_168;
struct sType* it_169;
void* __right_value170 = (void*)0;
char* name_170;
void* __right_value171 = (void*)0;
char* str_171;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* __result_obj__65;
    output_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 815, "struct buffer*"))));
    result_type_str_166=(char*)come_increment_ref_count(make_type_name_string(lambda_type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    buffer_append_str(output_165,result_type_str_166);
    buffer_append_str(output_165," ");
    buffer_append_str(output_165,name);
    buffer_append_str(output_165,"(");
    i_167=0;
    for(    _foreach_var_name12_168=(struct list$1sType$ph*)come_increment_ref_count(lambda_type->mParamTypes),    it_169=list$1sType$ph_begin(_foreach_var_name12_168);    !list$1sType$ph_end(_foreach_var_name12_168);    it_169=list$1sType$ph_next(_foreach_var_name12_168)    ){
        name_170=((char*)(__right_value170=list$1char$ph_operator_load_element(lambda_type->mParamNames,i_167)));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        str_171=(char*)come_increment_ref_count(make_define_var(it_169,name_170,(_Bool)0,info));
        buffer_append_str(output_165,str_171);
        if(        i_167==list$1sType$ph_length(lambda_type->mParamTypes)-1        ) {
            if(            lambda_type->mVarArgs            ) {
                buffer_append_str(output_165,", ...");
            }
        }
        else {
            buffer_append_str(output_165,", ");
        }
        i_167++;
        (str_171 = come_decrement_ref_count(str_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name12_168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    lambda_type->mAttribute    ) {
        buffer_append_str(output_165,((char*)(__right_value174=string_operator_add(((char*)(__right_value173=charp_operator_add(" ",lambda_type->mAttribute))),");\n"))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(output_165,");\n");
    }
    __result_obj__65 = (char*)come_increment_ref_count(((char*)(__right_value175=buffer_to_string(output_165))));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(output_165,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_str_166 = come_decrement_ref_count(result_type_str_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__65;
}

void add_come_code(struct sInfo* info, const char* msg, ...){
char* msg2_172;
va_list args_173;
int len_174;
int i_175;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
msg2_172 = (void*)0;
memset(&args_173, 0, sizeof(va_list));
memset(&i_175, 0, sizeof(int));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_173,msg);
    len_174=vasprintf(&msg2_172,msg,args_173);
    __builtin_va_end(args_173);
    if(    info->come_fun    ) {
        for(        i_175=0        ;        i_175<info->block_level        ;        i_175++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(__right_value176=xsprintf("%s",msg2_172))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value177=xsprintf("%s",msg2_172))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    free(msg2_172);
    /*c*/ come_call_finalizer3((&args_173),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static void va_list_finalize(va_list self){
}

void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_176;
va_list args_177;
int len_178;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value181 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
msg2_176 = (void*)0;
memset(&args_177, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)    ) {
        __builtin_va_start(args_177,msg);
        len_178=vasprintf(&msg2_176,msg,args_177);
        __builtin_va_end(args_177);
        if(        (_condtional_value_X1=(((char*)(__right_value180=map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value179=__builtin_string(id))))))==((void*)0))),        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _condtional_value_X1        ) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeader,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_176)));
            (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        free(msg2_176);
        /*c*/ come_call_finalizer3((&args_177),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_179;
unsigned int hash_180;
unsigned int it_181;
char* __result_obj__66;
char* __result_obj__67;
char* __result_obj__68;
char* __result_obj__69;
default_value_179 = (void*)0;
    memset(&default_value_179,0,sizeof(char*));
    hash_180=string_get_hash_key(((char*)key))%self->size;
    it_181=hash_180;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_181]        ) {
            if(            string_equals(self->keys[it_181],key)            ) {
                __result_obj__66 = (char*)come_increment_ref_count(self->items[it_181]);
                (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__66;
            }
            it_181++;
            if(            it_181>=self->size            ) {
                it_181=0;
            }
            else if(            it_181==hash_180            ) {
                __result_obj__67 = (char*)come_increment_ref_count(default_value_179);
                (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__67;
            }
        }
        else {
            __result_obj__68 = (char*)come_increment_ref_count(default_value_179);
            (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__68;
        }
    }
    __result_obj__69 = (char*)come_increment_ref_count(default_value_179);
    (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__69;
}

static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_182;
unsigned int hash_183;
unsigned int it_184;
char* __result_obj__70;
char* __result_obj__71;
char* __result_obj__72;
char* __result_obj__73;
default_value_182 = (void*)0;
    memset(&default_value_182,0,sizeof(char*));
    hash_183=string_get_hash_key(((char*)key))%self->size;
    it_184=hash_183;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_184]        ) {
            if(            string_equals(self->keys[it_184],key)            ) {
                __result_obj__70 = (char*)come_increment_ref_count(self->items[it_184]);
                (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__70;
            }
            it_184++;
            if(            it_184>=self->size            ) {
                it_184=0;
            }
            else if(            it_184==hash_183            ) {
                __result_obj__71 = (char*)come_increment_ref_count(default_value_182);
                (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__71;
            }
        }
        else {
            __result_obj__72 = (char*)come_increment_ref_count(default_value_182);
            (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__72;
        }
    }
    __result_obj__73 = (char*)come_increment_ref_count(default_value_182);
    (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__73;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_203;
unsigned int it_204;
_Bool same_key_exist_221;
struct list$1char$ph* _foreach_var_name14_222;
char* it2_225;
struct map$2char$phchar$ph* __result_obj__95;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_203=string_get_hash_key(((char*)key))%self->size;
    it_204=hash_203;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_204]        ) {
            if(            string_equals(self->keys[it_204],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_204]);
                    (self->keys[it_204] = come_decrement_ref_count(self->keys[it_204], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_204]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_204]);
                    self->keys[it_204]=key;
                }
                if(                1                ) {
                    (self->items[it_204] = come_decrement_ref_count(self->items[it_204], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_204]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_204]=item;
                }
                break;
            }
            it_204++;
            if(            it_204>=self->size            ) {
                it_204=0;
            }
            else if(            it_204==hash_203            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_204]=(_Bool)1;
            if(            1            ) {
                self->keys[it_204]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_204]=key;
            }
            if(            1            ) {
                self->items[it_204]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_204]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_221=(_Bool)0;
    for(    _foreach_var_name14_222=(struct list$1char$ph*)come_increment_ref_count(self->key_list),    it2_225=list$1char$ph_begin(_foreach_var_name14_222);    !list$1char$ph_end(_foreach_var_name14_222);    it2_225=list$1char$ph_next(_foreach_var_name14_222)    ){
        if(        string_equals(it2_225,key)        ) {
            same_key_exist_221=(_Bool)1;
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name14_222,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    !same_key_exist_221    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__95 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__95;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_185;
void* __right_value182 = (void*)0;
char** keys_186;
void* __right_value183 = (void*)0;
char** items_187;
void* __right_value184 = (void*)0;
_Bool* item_existance_188;
int len_189;
struct map$2char$phchar$ph* _foreach_var_name13_190;
char* it_193;
char* default_value_196;
void* __right_value185 = (void*)0;
char* it2_197;
unsigned int hash_200;
int n_201;
char* default_value_202;
void* __right_value186 = (void*)0;
default_value_196 = (void*)0;
default_value_202 = (void*)0;
    size_185=self->size*10;
    keys_186=(char**)come_increment_ref_count(((char**)(__right_value182=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_185)), "./comelang.h", 2150, "char**"))));
    items_187=(char**)come_increment_ref_count(((char**)(__right_value183=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_185)), "./comelang.h", 2151, "char**"))));
    item_existance_188=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value184=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_185)), "./comelang.h", 2152, "_Bool*"))));
    len_189=0;
    for(    _foreach_var_name13_190=self,    it_193=map$2char$phchar$ph_begin(_foreach_var_name13_190);    !map$2char$phchar$ph_end(_foreach_var_name13_190);    it_193=map$2char$phchar$ph_next(_foreach_var_name13_190)    ){
        memset(&default_value_196,0,sizeof(char*));
        it2_197=((char*)(__right_value185=map$2char$phchar$ph_at(self,it_193,(char*)come_increment_ref_count(default_value_196))));
        (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_200=string_get_hash_key(((char*)it_193))%size_185;
        n_201=hash_200;
        while(        (_Bool)1        ) {
            if(            item_existance_188[n_201]            ) {
                n_201++;
                if(                n_201>=size_185                ) {
                    n_201=0;
                }
                else if(                n_201==hash_200                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_188[n_201]=(_Bool)1;
                keys_186[n_201]=it_193;
                items_187[n_201]=((char*)(__right_value186=map$2char$phchar$ph_at(self,it_193,(char*)come_increment_ref_count(default_value_202))));
                (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_189++;
                (default_value_202 = come_decrement_ref_count(default_value_202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_202 = come_decrement_ref_count(default_value_202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_196 = come_decrement_ref_count(default_value_196, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_186;
    self->items=items_187;
    self->item_existance=item_existance_188;
    self->size=size_185;
    self->len=len_189;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_191;
char* __result_obj__74;
char* __result_obj__75;
char* result_192;
char* __result_obj__76;
result_191 = (void*)0;
result_192 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_191,0,sizeof(char*));
        __result_obj__74 = result_191;
        return __result_obj__74;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__75 = self->key_list->it->item;
        return __result_obj__75;
    }
    memset(&result_192,0,sizeof(char*));
    __result_obj__76 = result_192;
    return __result_obj__76;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_194;
char* __result_obj__77;
char* __result_obj__78;
char* result_195;
char* __result_obj__79;
result_194 = (void*)0;
result_195 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_194,0,sizeof(char*));
        __result_obj__77 = result_194;
        return __result_obj__77;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__78 = self->key_list->it->item;
        return __result_obj__78;
    }
    memset(&result_195,0,sizeof(char*));
    __result_obj__79 = result_195;
    return __result_obj__79;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_198;
unsigned int it_199;
char* __result_obj__80;
char* __result_obj__81;
char* __result_obj__82;
char* __result_obj__83;
    hash_198=string_get_hash_key(((char*)key))%self->size;
    it_199=hash_198;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_199]        ) {
            if(            string_equals(self->keys[it_199],key)            ) {
                __result_obj__80 = (char*)come_increment_ref_count(self->items[it_199]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__80;
            }
            it_199++;
            if(            it_199>=self->size            ) {
                it_199=0;
            }
            else if(            it_199==hash_198            ) {
                __result_obj__81 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__81;
            }
        }
        else {
            __result_obj__82 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__82;
        }
    }
    __result_obj__83 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__83;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_205;
struct list_item$1char$ph* it_206;
struct list$1char$ph* __result_obj__87;
    it2_205=0;
    it_206=self->head;
    while(    it_206!=((void*)0)    ) {
        if(        string_equals(it_206->item,item)        ) {
            list$1char$ph_delete(self,it2_205,it2_205+1);
            break;
        }
        it2_205++;
        it_206=it_206->next;
    }
    __result_obj__87 = self;
    return __result_obj__87;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_207;
struct list$1char$ph* __result_obj__84;
struct list_item$1char$ph* it_210;
int i_211;
struct list_item$1char$ph* prev_it_212;
struct list_item$1char$ph* it_213;
int i_214;
struct list_item$1char$ph* prev_it_215;
struct list_item$1char$ph* it_216;
struct list_item$1char$ph* head_prev_it_217;
struct list_item$1char$ph* tail_it_218;
int i_219;
struct list_item$1char$ph* prev_it_220;
struct list$1char$ph* __result_obj__86;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_207=tail;
        tail=head;
        head=tmp_207;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__84 = self;
        return __result_obj__84;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_210=self->head;
        i_211=0;
        while(        it_210!=((void*)0)        ) {
            if(            i_211<tail            ) {
                prev_it_212=it_210;
                it_210=it_210->next;
                i_211++;
                /*c*/ come_call_finalizer3(prev_it_212,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_211==tail            ) {
                self->head=it_210;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_210=it_210->next;
                i_211++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_213=self->head;
        i_214=0;
        while(        it_213!=((void*)0)        ) {
            if(            i_214==head            ) {
                self->tail=it_213->prev;
                self->tail->next=((void*)0);
            }
            if(            i_214>=head            ) {
                prev_it_215=it_213;
                it_213=it_213->next;
                i_214++;
                /*c*/ come_call_finalizer3(prev_it_215,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_213=it_213->next;
                i_214++;
            }
        }
    }
    else {
        it_216=self->head;
        head_prev_it_217=((void*)0);
        tail_it_218=((void*)0);
        i_219=0;
        while(        it_216!=((void*)0)        ) {
            if(            i_219==head            ) {
                head_prev_it_217=it_216->prev;
            }
            if(            i_219==tail            ) {
                tail_it_218=it_216;
            }
            if(            i_219>=head&&i_219<tail            ) {
                prev_it_220=it_216;
                it_216=it_216->next;
                i_219++;
                /*c*/ come_call_finalizer3(prev_it_220,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_216=it_216->next;
                i_219++;
            }
        }
        if(        head_prev_it_217!=((void*)0)        ) {
            head_prev_it_217->next=tail_it_218;
        }
        if(        tail_it_218!=((void*)0)        ) {
            tail_it_218->prev=head_prev_it_217;
        }
    }
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_208;
struct list_item$1char$ph* prev_it_209;
struct list$1char$ph* __result_obj__85;
    it_208=self->head;
    while(    it_208!=((void*)0)    ) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*c*/ come_call_finalizer3(prev_it_209,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_223;
char* __result_obj__88;
char* __result_obj__89;
char* result_224;
char* __result_obj__90;
result_223 = (void*)0;
result_224 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_223,0,sizeof(char*));
        __result_obj__88 = result_223;
        return __result_obj__88;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__89 = self->it->item;
        return __result_obj__89;
    }
    memset(&result_224,0,sizeof(char*));
    __result_obj__90 = result_224;
    return __result_obj__90;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_226;
char* __result_obj__91;
char* __result_obj__92;
char* result_227;
char* __result_obj__93;
result_226 = (void*)0;
result_227 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_226,0,sizeof(char*));
        __result_obj__91 = result_226;
        return __result_obj__91;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__92 = self->it->item;
        return __result_obj__92;
    }
    memset(&result_227,0,sizeof(char*));
    __result_obj__93 = result_227;
    return __result_obj__93;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value187 = (void*)0;
struct list_item$1char$ph* litem_228;
char* __dec_obj32;
void* __right_value188 = (void*)0;
struct list_item$1char$ph* litem_229;
char* __dec_obj33;
void* __right_value189 = (void*)0;
struct list_item$1char$ph* litem_230;
char* __dec_obj34;
struct list$1char$ph* __result_obj__94;
    if(    self->len==0    ) {
        litem_228=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value187=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_228->prev=((void*)0);
        litem_228->next=((void*)0);
        __dec_obj32=litem_228->item,
        litem_228->item=(char*)come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_228;
        self->head=litem_228;
    }
    else if(    self->len==1    ) {
        litem_229=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value188=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_229->prev=self->head;
        litem_229->next=((void*)0);
        __dec_obj33=litem_229->item,
        litem_229->item=(char*)come_increment_ref_count(item);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_229;
        self->head->next=litem_229;
    }
    else {
        litem_230=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value189=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_230->prev=self->tail;
        litem_230->next=((void*)0);
        __dec_obj34=litem_230->item,
        litem_230->item=(char*)come_increment_ref_count(item);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_230;
        self->tail=litem_230;
    }
    self->len++;
    __result_obj__94 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__94;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_231;
va_list args_232;
int len_233;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
msg2_231 = (void*)0;
memset(&args_232, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)    ) {
        __builtin_va_start(args_232,msg);
        len_233=vasprintf(&msg2_231,msg,args_232);
        __builtin_va_end(args_232);
        if(        (_condtional_value_X2=(((char*)(__right_value195=map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value194=__builtin_string(id))))))==((void*)0))),        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _condtional_value_X2        ) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeaderStructs,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_231)));
            (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        free(msg2_231);
        /*c*/ come_call_finalizer3((&args_232),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_source_file(struct sInfo* info){
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct sFun* main_fun_234;
_Bool main_module_241;
struct map$2char$phsFun$ph* _foreach_var_name15_242;
char* it_245;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sFun* it2_248;
void* __right_value206 = (void*)0;
struct sFun* new_fun_249;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
char* output_file_name_271;
struct _IO_FILE* f_272;
_Bool __exception_result_var_b1;
struct map$2char$phbuffer$ph* _foreach_var_name18_273;
char* it_276;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct buffer* buf_279;
void* __right_value217 = (void*)0;
struct map$2char$phbuffer$ph* _foreach_var_name19_288;
char* it_289;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct buffer* buf_290;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct map$2char$phsFun$ph* _foreach_var_name20_291;
char* it_292;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sFun* it2_293;
void* __right_value226 = (void*)0;
char* header_294;
struct map$2char$phchar$ph* _foreach_var_name21_295;
char* it_296;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
char* str_297;
struct map$2char$phsFun$ph* _foreach_var_name22_300;
char* it_301;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sFun* it2_302;
void* __right_value233 = (void*)0;
char* output_303;
struct map$2char$phsFun$ph* _foreach_var_name23_304;
char* it_305;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sFun* it2_306;
void* __right_value237 = (void*)0;
char* output_307;
_Bool __result_obj__129;
    main_fun_234=((struct sFun*)(__right_value202=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value201=xsprintf("main"))))));
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value202,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    main_module_241=(_Bool)0;
    if(    main_fun_234    ) {
        if(        !main_fun_234->mExternal        ) {
            main_module_241=(_Bool)1;
        }
    }
    if(    main_module_241    ) {
        for(        _foreach_var_name15_242=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->uniq_funcs),        it_245=map$2char$phsFun$ph_begin(_foreach_var_name15_242);        !map$2char$phsFun$ph_end(_foreach_var_name15_242);        it_245=map$2char$phsFun$ph_next(_foreach_var_name15_242)        ){
            it2_248=((struct sFun*)(__right_value205=map$2char$phsFun$ph_operator_load_element(info->uniq_funcs,((char*)(__right_value204=__builtin_string(it_245))))));
            (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value205,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            new_fun_249=(struct sFun*)come_increment_ref_count(compile_uniq_function(it2_248,info));
            map$2char$phsFun$ph_put(info->funcs,(char*)come_increment_ref_count(__builtin_string(it_245)),(struct sFun*)come_increment_ref_count(new_fun_249));
            /*c*/ come_call_finalizer3(new_fun_249,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(_foreach_var_name15_242,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    output_file_name_271=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    f_272=fopen(output_file_name_271,"w");
    if(    f_272==((void*)0)    ) {
        (come_push_stackframe("03output_code.c", 946, 0),__exception_result_var_b1=die("fopen"), come_pop_stackframe(), __exception_result_var_b1);
    }
    fprintf(f_272,"/// previous struct definition ///\n");
    for(    _foreach_var_name18_273=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->previous_struct_definition),    it_276=map$2char$phbuffer$ph_begin(_foreach_var_name18_273);    !map$2char$phbuffer$ph_end(_foreach_var_name18_273);    it_276=map$2char$phbuffer$ph_next(_foreach_var_name18_273)    ){
        buf_279=((struct buffer*)(__right_value216=map$2char$phbuffer$ph_operator_load_element(info->previous_struct_definition,((char*)(__right_value215=__builtin_string(it_276))))));
        (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value216,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_272,"%s\n",((char*)(__right_value217=buffer_to_string(buf_279))));
        (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name18_273,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_272,"/// struct definition ///\n");
    for(    _foreach_var_name19_288=(struct map$2char$phbuffer$ph*)come_increment_ref_count(info->struct_definition),    it_289=map$2char$phbuffer$ph_begin(_foreach_var_name19_288);    !map$2char$phbuffer$ph_end(_foreach_var_name19_288);    it_289=map$2char$phbuffer$ph_next(_foreach_var_name19_288)    ){
        buf_290=((struct buffer*)(__right_value220=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value219=__builtin_string(it_289))))));
        (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value220,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_272,"%s\n",((char*)(__right_value221=buffer_to_string(buf_290))));
        (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name19_288,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_272,"// source head\n");
    fprintf(f_272,"%s\n",((char*)(__right_value222=buffer_to_string(info->module->mSourceHead))));
    (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fprintf(f_272,"// header function\n");
    for(    _foreach_var_name20_291=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs),    it_292=map$2char$phsFun$ph_begin(_foreach_var_name20_291);    !map$2char$phsFun$ph_end(_foreach_var_name20_291);    it_292=map$2char$phsFun$ph_next(_foreach_var_name20_291)    ){
        it2_293=((struct sFun*)(__right_value225=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value224=__builtin_string(it_292))))));
        (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value225,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        header_294=(char*)come_increment_ref_count(header_function(it2_293,info));
        if(        it2_293->mInline        ) {
        }
        else if(        string_operator_not_equals(it_292,"__builtin_va_start")&&string_operator_not_equals(it_292,"__builtin_va_end")        ) {
            fprintf(f_272,"%s",header_294);
        }
        (header_294 = come_decrement_ref_count(header_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name20_291,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_272,"// uniq global variable\n");
    if(    main_module_241    ) {
        for(        _foreach_var_name21_295=(struct map$2char$phchar$ph*)come_increment_ref_count(info->uniq_definition),        it_296=map$2char$phchar$ph_begin(_foreach_var_name21_295);        !map$2char$phchar$ph_end(_foreach_var_name21_295);        it_296=map$2char$phchar$ph_next(_foreach_var_name21_295)        ){
            str_297=((char*)(__right_value229=map$2char$phchar$ph_operator_load_element(info->uniq_definition,((char*)(__right_value228=__builtin_string(it_296))))));
            (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            fprintf(f_272,"%s\n",str_297);
        }
        /*c*/ come_call_finalizer3(_foreach_var_name21_295,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    fprintf(f_272,"// inline function\n");
    for(    _foreach_var_name22_300=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs),    it_301=map$2char$phsFun$ph_begin(_foreach_var_name22_300);    !map$2char$phsFun$ph_end(_foreach_var_name22_300);    it_301=map$2char$phsFun$ph_next(_foreach_var_name22_300)    ){
        it2_302=((struct sFun*)(__right_value232=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value231=__builtin_string(it_301))))));
        (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value232,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        it2_302->mInline        ) {
            output_303=(char*)come_increment_ref_count(output_function(it2_302,info));
            fprintf(f_272,"%s",output_303);
            (output_303 = come_decrement_ref_count(output_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name22_300,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_272,"\n");
    fprintf(f_272,"// body function\n");
    for(    _foreach_var_name23_304=(struct map$2char$phsFun$ph*)come_increment_ref_count(info->funcs),    it_305=map$2char$phsFun$ph_begin(_foreach_var_name23_304);    !map$2char$phsFun$ph_end(_foreach_var_name23_304);    it_305=map$2char$phsFun$ph_next(_foreach_var_name23_304)    ){
        it2_306=((struct sFun*)(__right_value236=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value235=__builtin_string(it_305))))));
        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value236,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        it2_306->mExternal        ) {
        }
        else if(        !main_module_241&&it2_306->mUniq        ) {
        }
        else if(        it2_306->mInline        ) {
        }
        else {
            output_307=(char*)come_increment_ref_count(output_function(it2_306,info));
            fprintf(f_272,"%s",output_307);
            fprintf(f_272,"\n");
            (output_307 = come_decrement_ref_count(output_307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name23_304,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fclose(f_272);
    __result_obj__129 = (_Bool)1;
    (output_file_name_271 = come_decrement_ref_count(output_file_name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__129;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_235;
unsigned int hash_236;
unsigned int it_237;
struct sFun* __result_obj__96;
struct sFun* __result_obj__97;
struct sFun* __result_obj__98;
struct sFun* __result_obj__99;
default_value_235 = (void*)0;
    memset(&default_value_235,0,sizeof(struct sFun*));
    hash_236=string_get_hash_key(((char*)key))%self->size;
    it_237=hash_236;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_237]        ) {
            if(            string_equals(self->keys[it_237],key)            ) {
                __result_obj__96 = (struct sFun*)come_increment_ref_count(self->items[it_237]);
                /*c*/ come_call_finalizer3(default_value_235,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__96,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__96;
            }
            it_237++;
            if(            it_237>=self->size            ) {
                it_237=0;
            }
            else if(            it_237==hash_236            ) {
                __result_obj__97 = (struct sFun*)come_increment_ref_count(default_value_235);
                /*c*/ come_call_finalizer3(default_value_235,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__97,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__97;
            }
        }
        else {
            __result_obj__98 = (struct sFun*)come_increment_ref_count(default_value_235);
            /*c*/ come_call_finalizer3(default_value_235,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__98,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__98;
        }
    }
    __result_obj__99 = (struct sFun*)come_increment_ref_count(default_value_235);
    /*c*/ come_call_finalizer3(default_value_235,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__99,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__99;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_238;
unsigned int hash_239;
unsigned int it_240;
struct sFun* __result_obj__100;
struct sFun* __result_obj__101;
struct sFun* __result_obj__102;
struct sFun* __result_obj__103;
default_value_238 = (void*)0;
    memset(&default_value_238,0,sizeof(struct sFun*));
    hash_239=string_get_hash_key(((char*)key))%self->size;
    it_240=hash_239;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_240]        ) {
            if(            string_equals(self->keys[it_240],key)            ) {
                __result_obj__100 = (struct sFun*)come_increment_ref_count(self->items[it_240]);
                /*c*/ come_call_finalizer3(default_value_238,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__100,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__100;
            }
            it_240++;
            if(            it_240>=self->size            ) {
                it_240=0;
            }
            else if(            it_240==hash_239            ) {
                __result_obj__101 = (struct sFun*)come_increment_ref_count(default_value_238);
                /*c*/ come_call_finalizer3(default_value_238,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__101,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__101;
            }
        }
        else {
            __result_obj__102 = (struct sFun*)come_increment_ref_count(default_value_238);
            /*c*/ come_call_finalizer3(default_value_238,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__102,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__102;
        }
    }
    __result_obj__103 = (struct sFun*)come_increment_ref_count(default_value_238);
    /*c*/ come_call_finalizer3(default_value_238,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__103,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__103;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_243;
char* __result_obj__104;
char* __result_obj__105;
char* result_244;
char* __result_obj__106;
result_243 = (void*)0;
result_244 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_243,0,sizeof(char*));
        __result_obj__104 = result_243;
        return __result_obj__104;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__105 = self->key_list->it->item;
        return __result_obj__105;
    }
    memset(&result_244,0,sizeof(char*));
    __result_obj__106 = result_244;
    return __result_obj__106;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_246;
char* __result_obj__107;
char* __result_obj__108;
char* result_247;
char* __result_obj__109;
result_246 = (void*)0;
result_247 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_246,0,sizeof(char*));
        __result_obj__107 = result_246;
        return __result_obj__107;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__108 = self->key_list->it->item;
        return __result_obj__108;
    }
    memset(&result_247,0,sizeof(char*));
    __result_obj__109 = result_247;
    return __result_obj__109;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_264;
int it_265;
_Bool same_key_exist_266;
struct list$1char$ph* _foreach_var_name17_267;
char* it2_268;
struct map$2char$phsFun$ph* __result_obj__114;
    if(    self->len*2>=self->size    ) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_264=string_get_hash_key(((char*)key))%self->size;
    it_265=hash_264;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_265]        ) {
            if(            string_equals(self->keys[it_265],key)            ) {
                if(                1                ) {
                    (self->keys[it_265] = come_decrement_ref_count(self->keys[it_265], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_265]);
                    self->keys[it_265]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_265]);
                    self->keys[it_265]=key;
                }
                if(                1                ) {
                    /*c*/ come_call_finalizer3(self->items[it_265],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_265]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_265]=item;
                }
                break;
            }
            it_265++;
            if(            it_265>=self->size            ) {
                it_265=0;
            }
            else if(            it_265==hash_264            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_265]=(_Bool)1;
            if(            1            ) {
                self->keys[it_265]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_265]=key;
            }
            if(            1            ) {
                self->items[it_265]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_265]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_266=(_Bool)0;
    for(    _foreach_var_name17_267=(struct list$1char$ph*)come_increment_ref_count(self->key_list),    it2_268=list$1char$ph_begin(_foreach_var_name17_267);    !list$1char$ph_end(_foreach_var_name17_267);    it2_268=list$1char$ph_next(_foreach_var_name17_267)    ){
        if(        string_equals(it2_268,key)        ) {
            same_key_exist_266=(_Bool)1;
        }
    }
    /*c*/ come_call_finalizer3(_foreach_var_name17_267,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    !same_key_exist_266    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__114 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__114;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_250;
void* __right_value207 = (void*)0;
char** keys_251;
void* __right_value208 = (void*)0;
struct sFun** items_252;
void* __right_value209 = (void*)0;
_Bool* item_existance_253;
int len_254;
struct map$2char$phsFun$ph* _foreach_var_name16_255;
char* it_256;
struct sFun* default_value_257;
void* __right_value210 = (void*)0;
struct sFun* it2_258;
unsigned int hash_261;
int n_262;
struct sFun* default_value_263;
void* __right_value211 = (void*)0;
default_value_257 = (void*)0;
default_value_263 = (void*)0;
    size_250=self->size*10;
    keys_251=(char**)come_increment_ref_count(((char**)(__right_value207=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_250)), "./comelang.h", 2150, "char**"))));
    items_252=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value208=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_250)), "./comelang.h", 2151, "struct sFun**"))));
    item_existance_253=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value209=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_250)), "./comelang.h", 2152, "_Bool*"))));
    len_254=0;
    for(    _foreach_var_name16_255=self,    it_256=map$2char$phsFun$ph_begin(_foreach_var_name16_255);    !map$2char$phsFun$ph_end(_foreach_var_name16_255);    it_256=map$2char$phsFun$ph_next(_foreach_var_name16_255)    ){
        memset(&default_value_257,0,sizeof(struct sFun*));
        it2_258=((struct sFun*)(__right_value210=map$2char$phsFun$ph_at(self,it_256,(struct sFun*)come_increment_ref_count(default_value_257))));
        /*c*/ come_call_finalizer3(__right_value210,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_261=string_get_hash_key(((char*)it_256))%size_250;
        n_262=hash_261;
        while(        (_Bool)1        ) {
            if(            item_existance_253[n_262]            ) {
                n_262++;
                if(                n_262>=size_250                ) {
                    n_262=0;
                }
                else if(                n_262==hash_261                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_253[n_262]=(_Bool)1;
                keys_251[n_262]=it_256;
                items_252[n_262]=((struct sFun*)(__right_value211=map$2char$phsFun$ph_at(self,it_256,(struct sFun*)come_increment_ref_count(default_value_263))));
                /*c*/ come_call_finalizer3(__right_value211,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_254++;
                /*c*/ come_call_finalizer3(default_value_263,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_263,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_251;
    self->items=items_252;
    self->item_existance=item_existance_253;
    self->size=size_250;
    self->len=len_254;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_259;
unsigned int it_260;
struct sFun* __result_obj__110;
struct sFun* __result_obj__111;
struct sFun* __result_obj__112;
struct sFun* __result_obj__113;
    hash_259=string_get_hash_key(((char*)key))%self->size;
    it_260=hash_259;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_260]        ) {
            if(            string_equals(self->keys[it_260],key)            ) {
                __result_obj__110 = (struct sFun*)come_increment_ref_count(self->items[it_260]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__110,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__110;
            }
            it_260++;
            if(            it_260>=self->size            ) {
                it_260=0;
            }
            else if(            it_260==hash_259            ) {
                __result_obj__111 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__111,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__111;
            }
        }
        else {
            __result_obj__112 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__112,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__112;
        }
    }
    __result_obj__113 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__113,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__113;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_269;
int i_270;
    for(    i_269=0    ;    i_269<self->size    ;    i_269++    ){
        if(        self->item_existance[i_269]        ) {
            if(            1            ) {
                /*c*/ come_call_finalizer3(self->items[i_269],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_270=0    ;    i_270<self->size    ;    i_270++    ){
        if(        self->item_existance[i_270]        ) {
            if(            1            ) {
                (self->keys[i_270] = come_decrement_ref_count(self->keys[i_270], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_274;
char* __result_obj__115;
char* __result_obj__116;
char* result_275;
char* __result_obj__117;
result_274 = (void*)0;
result_275 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_274,0,sizeof(char*));
        __result_obj__115 = result_274;
        return __result_obj__115;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__116 = self->key_list->it->item;
        return __result_obj__116;
    }
    memset(&result_275,0,sizeof(char*));
    __result_obj__117 = result_275;
    return __result_obj__117;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_277;
char* __result_obj__118;
char* __result_obj__119;
char* result_278;
char* __result_obj__120;
result_277 = (void*)0;
result_278 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_277,0,sizeof(char*));
        __result_obj__118 = result_277;
        return __result_obj__118;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__119 = self->key_list->it->item;
        return __result_obj__119;
    }
    memset(&result_278,0,sizeof(char*));
    __result_obj__120 = result_278;
    return __result_obj__120;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_280;
unsigned int hash_281;
unsigned int it_282;
struct buffer* __result_obj__121;
struct buffer* __result_obj__122;
struct buffer* __result_obj__123;
struct buffer* __result_obj__124;
default_value_280 = (void*)0;
    memset(&default_value_280,0,sizeof(struct buffer*));
    hash_281=string_get_hash_key(((char*)key))%self->size;
    it_282=hash_281;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_282]        ) {
            if(            string_equals(self->keys[it_282],key)            ) {
                __result_obj__121 = (struct buffer*)come_increment_ref_count(self->items[it_282]);
                /*c*/ come_call_finalizer3(default_value_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__121,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__121;
            }
            it_282++;
            if(            it_282>=self->size            ) {
                it_282=0;
            }
            else if(            it_282==hash_281            ) {
                __result_obj__122 = (struct buffer*)come_increment_ref_count(default_value_280);
                /*c*/ come_call_finalizer3(default_value_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__122,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__122;
            }
        }
        else {
            __result_obj__123 = (struct buffer*)come_increment_ref_count(default_value_280);
            /*c*/ come_call_finalizer3(default_value_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__123,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__123;
        }
    }
    __result_obj__124 = (struct buffer*)come_increment_ref_count(default_value_280);
    /*c*/ come_call_finalizer3(default_value_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__124,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__124;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_283;
unsigned int hash_284;
unsigned int it_285;
struct buffer* __result_obj__125;
struct buffer* __result_obj__126;
struct buffer* __result_obj__127;
struct buffer* __result_obj__128;
default_value_283 = (void*)0;
    memset(&default_value_283,0,sizeof(struct buffer*));
    hash_284=string_get_hash_key(((char*)key))%self->size;
    it_285=hash_284;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_285]        ) {
            if(            string_equals(self->keys[it_285],key)            ) {
                __result_obj__125 = (struct buffer*)come_increment_ref_count(self->items[it_285]);
                /*c*/ come_call_finalizer3(default_value_283,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__125,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__125;
            }
            it_285++;
            if(            it_285>=self->size            ) {
                it_285=0;
            }
            else if(            it_285==hash_284            ) {
                __result_obj__126 = (struct buffer*)come_increment_ref_count(default_value_283);
                /*c*/ come_call_finalizer3(default_value_283,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__126,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__126;
            }
        }
        else {
            __result_obj__127 = (struct buffer*)come_increment_ref_count(default_value_283);
            /*c*/ come_call_finalizer3(default_value_283,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__127,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__127;
        }
    }
    __result_obj__128 = (struct buffer*)come_increment_ref_count(default_value_283);
    /*c*/ come_call_finalizer3(default_value_283,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__128,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__128;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_286;
int i_287;
    for(    i_286=0    ;    i_286<self->size    ;    i_286++    ){
        if(        self->item_existance[i_286]        ) {
            if(            1            ) {
                /*c*/ come_call_finalizer3(self->items[i_286],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_287=0    ;    i_287<self->size    ;    i_287++    ){
        if(        self->item_existance[i_287]        ) {
            if(            1            ) {
                (self->keys[i_287] = come_decrement_ref_count(self->keys[i_287], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_298;
int i_299;
    for(    i_298=0    ;    i_298<self->size    ;    i_298++    ){
        if(        self->item_existance[i_298]        ) {
            if(            1            ) {
                (self->items[i_298] = come_decrement_ref_count(self->items[i_298], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_299=0    ;    i_299<self->size    ;    i_299++    ){
        if(        self->item_existance[i_299]        ) {
            if(            1            ) {
                (self->keys[i_299] = come_decrement_ref_count(self->keys[i_299], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_header_file(struct sInfo* info){
char* output_file_name_308;
struct _IO_FILE* f_309;
struct map$2char$phchar$ph* _foreach_var_name24_310;
char* it_311;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* item_312;
struct map$2char$phchar$ph* _foreach_var_name25_313;
char* it_314;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
char* item_315;
_Bool __result_obj__130;
    output_file_name_308=(char*)come_increment_ref_count(info->output_file_name);
    f_309=fopen(output_file_name_308,"a");
    if(    string_operator_equals(info->output_file_name,"common.h")    ) {
        fprintf(f_309,"#ifndef __COMMON_H__\n");
        fprintf(f_309,"#define __COMMON_H__\n");
        fprintf(f_309,"#include <comelang.h>\n");
    }
    for(    _foreach_var_name24_310=(struct map$2char$phchar$ph*)come_increment_ref_count(info->module->mHeaderStructs),    it_311=map$2char$phchar$ph_begin(_foreach_var_name24_310);    !map$2char$phchar$ph_end(_foreach_var_name24_310);    it_311=map$2char$phchar$ph_next(_foreach_var_name24_310)    ){
        item_312=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value239=__builtin_string(it_311)))));
        (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_309,"%s",item_312);
        (item_312 = come_decrement_ref_count(item_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name24_310,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    _foreach_var_name25_313=(struct map$2char$phchar$ph*)come_increment_ref_count(info->module->mHeader),    it_314=map$2char$phchar$ph_begin(_foreach_var_name25_313);    !map$2char$phchar$ph_end(_foreach_var_name25_313);    it_314=map$2char$phchar$ph_next(_foreach_var_name25_313)    ){
        item_315=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value242=__builtin_string(it_314)))));
        (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_309,"%s",item_315);
        (item_315 = come_decrement_ref_count(item_315, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(_foreach_var_name25_313,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_309,"\n");
    if(    string_operator_equals(info->output_file_name,"common.h")    ) {
        fprintf(f_309,"#endif\n");
    }
    fclose(f_309);
    __result_obj__130 = (_Bool)1;
    (output_file_name_308 = come_decrement_ref_count(output_file_name_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__130;
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
char* msg2_316;
va_list args_317;
int len_318;
msg2_316 = (void*)0;
memset(&args_317, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_317,code);
    len_318=vasprintf(&msg2_316,code,args_317);
    __builtin_va_end(args_317);
    if(    info->come_fun    ) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_316);
    }
    free(msg2_316);
    /*c*/ come_call_finalizer3((&args_317),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
char* msg2_319;
va_list args_320;
int len_321;
msg2_319 = (void*)0;
memset(&args_320, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_320,code);
    len_321=vasprintf(&msg2_319,code,args_320);
    __builtin_va_end(args_320);
    if(    info->come_fun    ) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_319);
    }
    free(msg2_319);
    /*c*/ come_call_finalizer3((&args_320),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
char* __dec_obj35;
char* __dec_obj36;
    if(    info->prohibits_output_last_code    ) {
        return;
    }
    if(    info->no_output_come_code    ) {
        return;
    }
    if(    info->comma_instead_of_semicolon    ) {
        add_last_code_to_source_with_comma(info);
    }
    else {
        if(        info->module->mLastCode        ) {
            add_come_code(info,"%s;\n",info->module->mLastCode);
            __dec_obj35=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        info->module->mLastCode2        ) {
            add_come_code(info,"%s;\n",info->module->mLastCode2);
            __dec_obj36=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
char* __dec_obj37;
char* __dec_obj38;
    if(    info->prohibits_output_last_code    ) {
        return;
    }
    if(    info->no_output_come_code    ) {
        return;
    }
    if(    info->module->mLastCode    ) {
        add_come_code(info,"%s ,",info->module->mLastCode);
        __dec_obj37=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->module->mLastCode2    ) {
        add_come_code(info,"%s ,",info->module->mLastCode2);
        __dec_obj38=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
char* msg2_322;
va_list args_323;
int len_324;
void* __right_value244 = (void*)0;
char* __dec_obj39;
msg2_322 = (void*)0;
memset(&args_323, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_323,msg);
    len_324=vasprintf(&msg2_322,msg,args_323);
    __builtin_va_end(args_323);
    __dec_obj39=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(__builtin_string(msg2_322));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_322);
    /*c*/ come_call_finalizer3((&args_323),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
char* msg2_325;
va_list args_326;
int len_327;
void* __right_value245 = (void*)0;
char* __dec_obj40;
msg2_325 = (void*)0;
memset(&args_326, 0, sizeof(va_list));
    if(    info->no_output_come_code    ) {
        return;
    }
    __builtin_va_start(args_326,msg);
    len_327=vasprintf(&msg2_325,msg,args_326);
    __builtin_va_end(args_326);
    __dec_obj40=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(__builtin_string(msg2_325));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_325);
    /*c*/ come_call_finalizer3((&args_326),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUE$ph_delete(info->stack,-value,-1);
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail){
int tmp_328;
struct list$1CVALUE$ph* __result_obj__131;
struct list_item$1CVALUE$ph* it_331;
int i_332;
struct list_item$1CVALUE$ph* prev_it_333;
struct list_item$1CVALUE$ph* it_334;
int i_335;
struct list_item$1CVALUE$ph* prev_it_336;
struct list_item$1CVALUE$ph* it_337;
struct list_item$1CVALUE$ph* head_prev_it_338;
struct list_item$1CVALUE$ph* tail_it_339;
int i_340;
struct list_item$1CVALUE$ph* prev_it_341;
struct list$1CVALUE$ph* __result_obj__133;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_328=tail;
        tail=head;
        head=tmp_328;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__131 = self;
        return __result_obj__131;
    }
    if(    head==0&&tail==self->len    ) {
        list$1CVALUE$ph_reset(self);
    }
    else if(    head==0    ) {
        it_331=self->head;
        i_332=0;
        while(        it_331!=((void*)0)        ) {
            if(            i_332<tail            ) {
                prev_it_333=it_331;
                it_331=it_331->next;
                i_332++;
                /*c*/ come_call_finalizer3(prev_it_333,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_332==tail            ) {
                self->head=it_331;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_331=it_331->next;
                i_332++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_334=self->head;
        i_335=0;
        while(        it_334!=((void*)0)        ) {
            if(            i_335==head            ) {
                self->tail=it_334->prev;
                self->tail->next=((void*)0);
            }
            if(            i_335>=head            ) {
                prev_it_336=it_334;
                it_334=it_334->next;
                i_335++;
                /*c*/ come_call_finalizer3(prev_it_336,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_334=it_334->next;
                i_335++;
            }
        }
    }
    else {
        it_337=self->head;
        head_prev_it_338=((void*)0);
        tail_it_339=((void*)0);
        i_340=0;
        while(        it_337!=((void*)0)        ) {
            if(            i_340==head            ) {
                head_prev_it_338=it_337->prev;
            }
            if(            i_340==tail            ) {
                tail_it_339=it_337;
            }
            if(            i_340>=head&&i_340<tail            ) {
                prev_it_341=it_337;
                it_337=it_337->next;
                i_340++;
                /*c*/ come_call_finalizer3(prev_it_341,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_337=it_337->next;
                i_340++;
            }
        }
        if(        head_prev_it_338!=((void*)0)        ) {
            head_prev_it_338->next=tail_it_339;
        }
        if(        tail_it_339!=((void*)0)        ) {
            tail_it_339->prev=head_prev_it_338;
        }
    }
    __result_obj__133 = self;
    return __result_obj__133;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_329;
struct list_item$1CVALUE$ph* prev_it_330;
struct list$1CVALUE$ph* __result_obj__132;
    it_329=self->head;
    while(    it_329!=((void*)0)    ) {
        prev_it_330=it_329;
        it_329=it_329->next;
        /*c*/ come_call_finalizer3(prev_it_330,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__132 = self;
    return __result_obj__132;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
char* __dec_obj41;
void* __right_value246 = (void*)0;
void* __right_value252 = (void*)0;
struct CVALUE* result_342;
void* __right_value253 = (void*)0;
struct CVALUE* __result_obj__140;
    __dec_obj41=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_342=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(((struct CVALUE*)(__right_value246=list$1CVALUE$ph_operator_load_element(info->stack,offset)))));
    /*c*/ come_call_finalizer3(__right_value246,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    result_342==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value253=err_msg(info,"invalid stack value")));
        /*c*/ come_call_finalizer3(__right_value253,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
    }
    list$1CVALUE$ph_delete(info->stack,-1,-1);
    __result_obj__140 = (struct CVALUE*)come_increment_ref_count(result_342);
    /*c*/ come_call_finalizer3(result_342,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__140,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__140;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_343;
int i_344;
struct CVALUE* __result_obj__134;
struct CVALUE* default_value_345;
struct CVALUE* __result_obj__135;
default_value_345 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_343=self->head;
    i_344=0;
    while(    it_343!=((void*)0)    ) {
        if(        position==i_344        ) {
            __result_obj__134 = (struct CVALUE*)come_increment_ref_count(it_343->item);
            /*c*/ come_call_finalizer3(__result_obj__134,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__134;
        }
        it_343=it_343->next;
        i_344++;
    }
    memset(&default_value_345,0,sizeof(struct CVALUE*));
    __result_obj__135 = (struct CVALUE*)come_increment_ref_count(default_value_345);
    /*c*/ come_call_finalizer3(default_value_345,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__135,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__135;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_346;
int i_347;
struct CVALUE* __result_obj__136;
struct CVALUE* default_value_348;
struct CVALUE* __result_obj__137;
default_value_348 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_346=self->head;
    i_347=0;
    while(    it_346!=((void*)0)    ) {
        if(        position==i_347        ) {
            __result_obj__136 = (struct CVALUE*)come_increment_ref_count(it_346->item);
            /*c*/ come_call_finalizer3(__result_obj__136,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__136;
        }
        it_346=it_346->next;
        i_347++;
    }
    memset(&default_value_348,0,sizeof(struct CVALUE*));
    __result_obj__137 = (struct CVALUE*)come_increment_ref_count(default_value_348);
    /*c*/ come_call_finalizer3(default_value_348,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__137,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__137;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__138;
void* __right_value247 = (void*)0;
struct CVALUE* result_349;
void* __right_value248 = (void*)0;
char* __dec_obj42;
void* __right_value249 = (void*)0;
struct sType* __dec_obj43;
void* __right_value250 = (void*)0;
char* __dec_obj44;
void* __right_value251 = (void*)0;
char* __dec_obj45;
struct CVALUE* __result_obj__139;
    if(    self==(void*)0    ) {
        __result_obj__138 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__138,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__138;
    }
    result_349=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        __dec_obj42=result_349->c_value,
        result_349->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj43=result_349->type,
        result_349->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_349->var=self->var;
    }
    if(    self!=((void*)0)    ) {
        result_349->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        __dec_obj44=result_349->c_value_without_right_value_objects,
        result_349->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        __dec_obj45=result_349->c_value_without_cast_object_value,
        result_349->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__139 = (struct CVALUE*)come_increment_ref_count(result_349);
    /*c*/ come_call_finalizer3(result_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__139,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__139;
}

void transpiler_clear_last_code(struct sInfo* info){
char* __dec_obj46;
char* __dec_obj47;
    __dec_obj46=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj47=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
}

