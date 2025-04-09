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

int gRightValueNum=0;
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
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_objects_of_match_lv_tables(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self);
static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self);
static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self);
static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self);
static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_0;
struct list$1sRightValueObject$ph* o2_saved_1;
struct sRightValueObject* it2_4;
char* __dec_obj1;
void* __right_value0 = (void*)0;
char* __dec_obj2;
void* __right_value1 = (void*)0;
char* __dec_obj3;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_0=right_value->right_value_objects;
        for(        o2_saved_1=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it2_4=list$1sRightValueObject$ph_begin((o2_saved_1));        !list$1sRightValueObject$ph_end((o2_saved_1));        it2_4=list$1sRightValueObject$ph_next((o2_saved_1))        ){
            if(            it_0->mID==it2_4->mID) {
                it2_4->mStored=(_Bool)1;
                break;
            }
        }
        /*c*/ come_call_finalizer3(o2_saved_1,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj1=right_value->c_value,
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        gComeDebug) {
            __dec_obj2=right_value->c_value,
            right_value->c_value=(char*)come_increment_ref_count(append_stackframe(right_value->c_value,right_value->type,info));
            __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    __dec_obj3=right_value->c_value,
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_2;
struct sRightValueObject* __result_obj__1;
struct sRightValueObject* __result_obj__2;
struct sRightValueObject* result_3;
struct sRightValueObject* __result_obj__3;
result_2 = (void*)0;
result_3 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_2,0,sizeof(struct sRightValueObject*));
        __result_obj__1 = result_2;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_3,0,sizeof(struct sRightValueObject*));
    __result_obj__3 = result_3;
    return __result_obj__3;
}

static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_5;
struct sRightValueObject* __result_obj__4;
struct sRightValueObject* __result_obj__5;
struct sRightValueObject* result_6;
struct sRightValueObject* __result_obj__6;
result_5 = (void*)0;
result_6 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_5,0,sizeof(struct sRightValueObject*));
        __result_obj__4 = result_5;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_6,0,sizeof(struct sRightValueObject*));
    __result_obj__6 = result_6;
    return __result_obj__6;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_7;
struct list_item$1sRightValueObject$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)) {
        prev_it_8=it_7;
        it_7=it_7->next;
        /*c*/ come_call_finalizer3(prev_it_8,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mObjType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mObjType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_9;
struct list_item$1sType$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)) {
        prev_it_10=it_9;
        it_9=it_9->next;
        /*c*/ come_call_finalizer3(prev_it_10,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_11;
struct list_item$1sNode$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)) {
        prev_it_12=it_11;
        it_11=it_11->next;
        /*c*/ come_call_finalizer3(prev_it_12,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_13;
struct list_item$1char$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)) {
        prev_it_14=it_13;
        it_13=it_13->next;
        /*c*/ come_call_finalizer3(prev_it_14,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value39 = (void*)0;
struct sType* result_15;
struct sType* __result_obj__23;
struct sType* __result_obj__24;
struct sType* no_solved_type_39;
void* __right_value40 = (void*)0;
struct sType* generics_type2__40;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct sType* type3_41;
void* __right_value44 = (void*)0;
struct sType* result_42;
struct sType* __result_obj__25;
struct sClass* klass_43;
void* __right_value45 = (void*)0;
struct sType* result_type_44;
struct sType* __dec_obj27;
struct list$1sType$ph* o2_saved_47;
struct sType* it_50;
void* __right_value46 = (void*)0;
struct sType* new_param_type_53;
int generics_number_57;
void* __right_value50 = (void*)0;
struct list$1sNode$ph* array_num_58;
_Bool immutable__59;
int pointer_num_60;
_Bool heap_61;
_Bool exception__62;
_Bool guard__63;
_Bool deffer_right_value_64;
_Bool no_heap_65;
_Bool no_calling_destructor_66;
_Bool null_value_67;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sType* __dec_obj31;
struct list$1sNode$ph* __dec_obj32;
int generics_number_74;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct sClass* klass2_75;
int generics_number2_76;
struct list$1sNode$ph* array_num_77;
_Bool immutable__78;
int pointer_num_79;
_Bool heap_80;
_Bool guard__81;
_Bool deffer_right_value_82;
_Bool no_heap_83;
_Bool no_calling_destructor_84;
_Bool null_value_85;
_Bool record__86;
_Bool multiple_types_87;
_Bool exception__88;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct sType* __dec_obj33;
struct list$1sNode$ph* __dec_obj34;
struct list$1sType$ph* o2_saved_89;
struct sType* it_90;
void* __right_value57 = (void*)0;
struct sType* type_91;
void* __right_value58 = (void*)0;
char* new_name_92;
struct sType* __result_obj__38;
    result_15=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type==((void*)0)) {
        __result_obj__23 = (struct sType*)come_increment_ref_count(result_15);
        /*c*/ come_call_finalizer3(result_15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__23,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__23;
    }
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)==0) {
        __result_obj__24 = (struct sType*)come_increment_ref_count(result_15);
        /*c*/ come_call_finalizer3(result_15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__24,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__24;
    }
    if(    type->mExceptionGenericsType) {
        no_solved_type_39=(struct sType*)come_increment_ref_count(result_15->mNoSolvedGenericsType);
        no_solved_type_39->mException=(_Bool)1;
        generics_type2__40=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
        type3_41=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "04heap.c", 41, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        type3_41->mHeap=(_Bool)1;
        list$1sType$ph_add(generics_type2__40->mGenericsTypes,(struct sType*)come_increment_ref_count(type3_41));
        result_42=(struct sType*)come_increment_ref_count(solve_generics(no_solved_type_39,generics_type2__40,info));
        result_42->mException=(_Bool)1;
        __result_obj__25 = (struct sType*)come_increment_ref_count(result_42);
        /*c*/ come_call_finalizer3(no_solved_type_39,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type2__40,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_41,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_42,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__25,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__25;
        /*c*/ come_call_finalizer3(no_solved_type_39,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type2__40,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_41,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_42,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    klass_43=type->mClass;
    if(    string_operator_equals(klass_43->mName,"lambda")) {
        result_type_44=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType,generics_type,info));
        __dec_obj27=result_15->mResultType,
        result_15->mResultType=(struct sType*)come_increment_ref_count(result_type_44);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sType$ph_reset(result_15->mParamTypes);
        for(        o2_saved_47=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_50=list$1sType$ph_begin((o2_saved_47));        !list$1sType$ph_end((o2_saved_47));        it_50=list$1sType$ph_next((o2_saved_47))        ){
            new_param_type_53=(struct sType*)come_increment_ref_count(solve_generics(it_50,generics_type,info));
            list$1sType$ph_push_back(result_15->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_53));
            /*c*/ come_call_finalizer3(new_param_type_53,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_47,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_44,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    klass_43->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
        generics_number_57=klass_43->mMethodGenericsNum;
        if(        generics_number_57>=list$1sType$ph_length(info->method_generics_types)) {
            ((struct tuple2$2int$bool$*)(__right_value50=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_57,list$1sType$ph_length(info->method_generics_types))));
            /*c*/ come_call_finalizer3(__right_value50,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
        }
        array_num_58=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__59=type->mImmutable;
        pointer_num_60=type->mPointerNum;
        heap_61=type->mHeap;
        exception__62=type->mException;
        guard__63=type->mGuardValue;
        deffer_right_value_64=type->mDefferRightValue;
        no_heap_65=type->mNoHeap;
        no_calling_destructor_66=type->mNoCallingDestructor;
        null_value_67=type->mNullValue;
        __dec_obj31=result_15,
        result_15=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value51=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number_57)))));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(__right_value51,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        heap_61) {
            result_15->mHeap=heap_61;
        }
        if(        guard__63) {
            result_15->mGuardValue=guard__63;
        }
        if(        deffer_right_value_64) {
            result_15->mDefferRightValue=deffer_right_value_64||result_15->mDefferRightValue;
        }
        if(        no_heap_65) {
            result_15->mNoHeap=(_Bool)1;
            result_15->mHeap=(_Bool)0;
        }
        if(        exception__62) {
            result_15->mException=(_Bool)1;
        }
        if(        no_calling_destructor_66) {
            result_15->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__59) {
            result_15->mImmutable=immutable__59;
        }
        if(        list$1sNode$ph_length(array_num_58)>0) {
            __dec_obj32=result_15->mArrayNum,
            result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_58);
            /*b*/ come_call_finalizer3(__dec_obj32,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_67) {
            result_15->mNullValue=null_value_67;
        }
        if(        pointer_num_60>0) {
            result_15->mPointerNum+=pointer_num_60;
        }
        /*c*/ come_call_finalizer3(array_num_58,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    klass_43->mGenerics) {
        generics_number_74=klass_43->mGenericsNum;
        if(        generics_number_74>=list$1sType$ph_length(generics_type->mGenericsTypes)) {
            ((struct tuple2$2int$bool$*)(__right_value53=err_msg(info,"invalid generics parametor number")));
            /*c*/ come_call_finalizer3(__right_value53,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
        }
        klass2_75=((struct sType*)(__right_value54=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_74)))->mClass;
        /*c*/ come_call_finalizer3(__right_value54,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        generics_number2_76=klass2_75->mGenericsNum;
        if(        generics_number_74!=generics_number2_76) {
            array_num_77=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
            immutable__78=type->mImmutable;
            pointer_num_79=type->mPointerNum;
            heap_80=type->mHeap;
            guard__81=type->mGuardValue;
            deffer_right_value_82=type->mDefferRightValue;
            no_heap_83=type->mNoHeap;
            no_calling_destructor_84=type->mNoCallingDestructor;
            null_value_85=type->mNullValue;
            record__86=type->mRecord;
            multiple_types_87=type->mMultipleTypes;
            exception__88=type->mException;
            __dec_obj33=result_15,
            result_15=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value55=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_74)))));
            /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value55,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            heap_80) {
                result_15->mHeap=heap_80;
            }
            if(            exception__88) {
                result_15->mException=exception__88;
            }
            if(            deffer_right_value_82) {
                result_15->mDefferRightValue=deffer_right_value_82||result_15->mDefferRightValue;
            }
            if(            guard__81) {
                result_15->mGuardValue=guard__81;
            }
            if(            record__86) {
                result_15->mRecord=record__86;
            }
            if(            no_heap_83) {
                result_15->mNoHeap=(_Bool)1;
                result_15->mHeap=(_Bool)0;
            }
            if(            multiple_types_87) {
                result_15->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_84) {
                result_15->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__78) {
                result_15->mImmutable=immutable__78;
            }
            if(            list$1sNode$ph_length(array_num_77)>0) {
                __dec_obj34=result_15->mArrayNum,
                result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_77);
                /*b*/ come_call_finalizer3(__dec_obj34,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            if(            null_value_85) {
                result_15->mNullValue=null_value_85;
            }
            if(            pointer_num_79>0) {
                result_15->mPointerNum+=pointer_num_79;
            }
            /*c*/ come_call_finalizer3(array_num_77,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        list$1sType$ph_reset(result_15->mGenericsTypes);
        for(        o2_saved_89=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_90=list$1sType$ph_begin((o2_saved_89));        !list$1sType$ph_end((o2_saved_89));        it_90=list$1sType$ph_next((o2_saved_89))        ){
            type_91=(struct sType*)come_increment_ref_count(solve_generics(it_90,generics_type,info));
            list$1sType$ph_push_back(result_15->mGenericsTypes,(struct sType*)come_increment_ref_count(type_91));
            /*c*/ come_call_finalizer3(type_91,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_89,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !output_generics_struct(result_15,generics_type,info)) {
            new_name_92=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_92);
            exit(1);
            (new_name_92 = come_decrement_ref_count(new_name_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__38 = (struct sType*)come_increment_ref_count(result_15);
    /*c*/ come_call_finalizer3(result_15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__38,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__38;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__7;
void* __right_value2 = (void*)0;
struct sType* result_16;
void* __right_value3 = (void*)0;
struct sType* __dec_obj4;
void* __right_value4 = (void*)0;
struct sType* __dec_obj5;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __dec_obj9;
void* __right_value13 = (void*)0;
struct sType* __dec_obj10;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj11;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value17 = (void*)0;
char* __dec_obj13;
void* __right_value18 = (void*)0;
char* __dec_obj14;
void* __right_value19 = (void*)0;
char* __dec_obj15;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __dec_obj19;
void* __right_value28 = (void*)0;
char* __dec_obj20;
void* __right_value29 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value37 = (void*)0;
struct list$1char$ph* __dec_obj25;
void* __right_value38 = (void*)0;
struct sType* __dec_obj26;
struct sType* __result_obj__22;
    if(    self==(void*)0) {
        __result_obj__7 = (void*)0;
        return __result_obj__7;
    }
    result_16=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_16->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj4=result_16->mOriginalLoadVarType,
        result_16->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj5=result_16->mChannelType,
        result_16->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj9=result_16->mGenericsTypes,
        result_16->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj9,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj10=result_16->mNoSolvedGenericsType,
        result_16->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj10,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj11=result_16->mSizeNum,
        result_16->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj12=result_16->mAlignas,
        result_16->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj13=result_16->mTupleName,
        result_16->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj14=result_16->mAttribute,
        result_16->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_16->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_16->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_16->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_16->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_16->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_16->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_16->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_16->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_16->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_16->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_16->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_16->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_16->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_16->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_16->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_16->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_16->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_16->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_16->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_16->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_16->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_16->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_16->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj15=result_16->mAsmName,
        result_16->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_16->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_16->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_16->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj19=result_16->mArrayNum,
        result_16->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj19,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_16->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_16->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_16->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_16->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_16->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj20=result_16->mOriginalTypeName,
        result_16->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_16->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_16->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_16->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_16->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj21=result_16->mParamTypes,
        result_16->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj25=result_16->mParamNames,
        result_16->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj25,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj26=result_16->mResultType,
        result_16->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_16->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_16->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)) {
        result_16->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__22 = result_16;
    /*c*/ come_call_finalizer3(result_16,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__22;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__8;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1sType$ph* result_17;
struct list_item$1sType$ph* it_18;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __result_obj__11;
    if(    self==((void*)0)) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__8,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__8;
    }
    result_17=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        else {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__11 = (struct list$1sType$ph*)come_increment_ref_count(result_17);
    /*c*/ come_call_finalizer3(result_17,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__11,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__11;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__9,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_19;
struct sType* __dec_obj6;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_20;
struct sType* __dec_obj7;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_21;
struct sType* __dec_obj8;
struct list$1sType$ph* __result_obj__10;
    if(    self->len==0) {
        litem_19=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj6=litem_19->item,
        litem_19->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1) {
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj7=litem_20->item,
        litem_20->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj8=litem_21->item,
        litem_21->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__10 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__10;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_22;
struct list_item$1sType$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)) {
        prev_it_23=it_22;
        it_22=it_22->next;
        /*c*/ come_call_finalizer3(prev_it_23,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__12;
void* __right_value14 = (void*)0;
struct sNode* result_24;
struct sNode* __result_obj__13;
    if(    self==(void*)0) {
        __result_obj__12 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__12) ? __result_obj__12 = come_decrement_ref_count(__result_obj__12, ((struct sNode*)__result_obj__12)->finalize, ((struct sNode*)__result_obj__12)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__12;
    }
    result_24=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_24->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_24->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_24->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_24->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_24->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_24->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_24->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_24->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_24->kind=self->kind;
    }
    __result_obj__13 = (struct sNode*)come_increment_ref_count(result_24);
    ((result_24) ? result_24 = come_decrement_ref_count(result_24, ((struct sNode*)result_24)->finalize, ((struct sNode*)result_24)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__13) ? __result_obj__13 = come_decrement_ref_count(__result_obj__13, ((struct sNode*)__result_obj__13)->finalize, ((struct sNode*)__result_obj__13)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__14;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1sNode$ph* result_25;
struct list_item$1sNode$ph* it_26;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __result_obj__17;
    if(    self==((void*)0)) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__14,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__14;
    }
    result_25=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        else {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        it_26=it_26->next;
    }
    __result_obj__17 = (struct list$1sNode$ph*)come_increment_ref_count(result_25);
    /*c*/ come_call_finalizer3(result_25,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__17,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__17;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__15,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_27;
struct sNode* __dec_obj16;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_28;
struct sNode* __dec_obj17;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_29;
struct sNode* __dec_obj18;
struct list$1sNode$ph* __result_obj__16;
    if(    self->len==0) {
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj16=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1) {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj17=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj18=litem_29->item,
        litem_29->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__16 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__16;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_30;
struct list_item$1sNode$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)) {
        prev_it_31=it_30;
        it_30=it_30->next;
        /*c*/ come_call_finalizer3(prev_it_31,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__18;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1char$ph* result_32;
struct list_item$1char$ph* it_33;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* __result_obj__21;
    if(    self==((void*)0)) {
        __result_obj__18 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__18,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__18;
    }
    result_32=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_33=self->head;
    while(    it_33!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "./comelang.h", 1032, "char*")));
        }
        it_33=it_33->next;
    }
    __result_obj__21 = (struct list$1char$ph*)come_increment_ref_count(result_32);
    /*c*/ come_call_finalizer3(result_32,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__21,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__21;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__19;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__19,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj22;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_35;
char* __dec_obj23;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_36;
char* __dec_obj24;
struct list$1char$ph* __result_obj__20;
    if(    self->len==0) {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        __dec_obj22=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj23=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj24=litem_36->item,
        litem_36->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result_obj__20 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__20;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_37;
struct list_item$1char$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*c*/ come_call_finalizer3(prev_it_38,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_45;
struct list_item$1sType$ph* prev_it_46;
struct list$1sType$ph* __result_obj__26;
    it_45=self->head;
    while(    it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        /*c*/ come_call_finalizer3(prev_it_46,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_48;
struct sType* __result_obj__27;
struct sType* __result_obj__28;
struct sType* result_49;
struct sType* __result_obj__29;
result_48 = (void*)0;
result_49 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_48,0,sizeof(struct sType*));
        __result_obj__27 = result_48;
        return __result_obj__27;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_49,0,sizeof(struct sType*));
    __result_obj__29 = result_49;
    return __result_obj__29;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_51;
struct sType* __result_obj__30;
struct sType* __result_obj__31;
struct sType* result_52;
struct sType* __result_obj__32;
result_51 = (void*)0;
result_52 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_51,0,sizeof(struct sType*));
        __result_obj__30 = result_51;
        return __result_obj__30;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__31 = self->it->item;
        return __result_obj__31;
    }
    memset(&result_52,0,sizeof(struct sType*));
    __result_obj__32 = result_52;
    return __result_obj__32;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value47 = (void*)0;
struct list_item$1sType$ph* litem_54;
struct sType* __dec_obj28;
void* __right_value48 = (void*)0;
struct list_item$1sType$ph* litem_55;
struct sType* __dec_obj29;
void* __right_value49 = (void*)0;
struct list_item$1sType$ph* litem_56;
struct sType* __dec_obj30;
struct list$1sType$ph* __result_obj__33;
    if(    self->len==0) {
        litem_54=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value47=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_54->prev=((void*)0);
        litem_54->next=((void*)0);
        __dec_obj28=litem_54->item,
        litem_54->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_54;
        self->head=litem_54;
    }
    else if(    self->len==1) {
        litem_55=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value48=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_55->prev=self->head;
        litem_55->next=((void*)0);
        __dec_obj29=litem_55->item,
        litem_55->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_55;
        self->head->next=litem_55;
    }
    else {
        litem_56=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value49=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_56->prev=self->tail;
        litem_56->next=((void*)0);
        __dec_obj30=litem_56->item,
        litem_56->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_56;
        self->tail=litem_56;
    }
    self->len++;
    __result_obj__33 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__33;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_68;
int i_69;
struct sType* __result_obj__34;
struct sType* default_value_70;
struct sType* __result_obj__35;
default_value_70 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_68=self->head;
    i_69=0;
    while(    it_68!=((void*)0)) {
        if(        position==i_69) {
            __result_obj__34 = (struct sType*)come_increment_ref_count(it_68->item);
            /*c*/ come_call_finalizer3(__result_obj__34,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__34;
        }
        it_68=it_68->next;
        i_69++;
    }
    memset(&default_value_70,0,sizeof(struct sType*));
    __result_obj__35 = (struct sType*)come_increment_ref_count(default_value_70);
    /*c*/ come_call_finalizer3(default_value_70,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__35,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__35;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_71;
int i_72;
struct sType* __result_obj__36;
struct sType* default_value_73;
struct sType* __result_obj__37;
default_value_73 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_71=self->head;
    i_72=0;
    while(    it_71!=((void*)0)) {
        if(        position==i_72) {
            __result_obj__36 = (struct sType*)come_increment_ref_count(it_71->item);
            /*c*/ come_call_finalizer3(__result_obj__36,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__36;
        }
        it_71=it_71->next;
        i_72++;
    }
    memset(&default_value_73,0,sizeof(struct sType*));
    __result_obj__37 = (struct sType*)come_increment_ref_count(default_value_73);
    /*c*/ come_call_finalizer3(default_value_73,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__37,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__37;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __right_value59 = (void*)0;
struct sType* result_93;
struct sClass* klass_94;
int generics_number_95;
void* __right_value60 = (void*)0;
struct list$1sNode$ph* array_num_96;
_Bool immutable__97;
int pointer_num_98;
_Bool heap_99;
_Bool guard__100;
_Bool deffer_right_value_101;
_Bool no_heap_102;
_Bool no_calling_destructor_103;
_Bool null_value_104;
_Bool exception__105;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct sType* __dec_obj35;
struct list$1sNode$ph* __dec_obj36;
int i_106;
struct list$1sType$ph* o2_saved_107;
struct sType* it_108;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1sType$ph* o2_saved_114;
struct sType* it_115;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
struct sType* __dec_obj38;
struct sType* __result_obj__41;
    result_93=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_94=type->mClass;
    if(    klass_94->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
        generics_number_95=klass_94->mMethodGenericsNum;
        if(        generics_number_95>=list$1sType$ph_length(info->method_generics_types)) {
            ((struct tuple2$2int$bool$*)(__right_value60=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_95,list$1sType$ph_length(info->method_generics_types))));
            /*c*/ come_call_finalizer3(__right_value60,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
        }
        array_num_96=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__97=type->mImmutable;
        pointer_num_98=type->mPointerNum;
        heap_99=type->mHeap;
        guard__100=type->mGuardValue;
        deffer_right_value_101=type->mDefferRightValue;
        no_heap_102=type->mNoHeap;
        no_calling_destructor_103=type->mNoCallingDestructor;
        null_value_104=type->mNullValue;
        exception__105=type->mException;
        __dec_obj35=result_93,
        result_93=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value61=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number_95)))));
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(__right_value61,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        heap_99) {
            result_93->mHeap=heap_99||result_93->mHeap;
        }
        if(        deffer_right_value_101) {
            result_93->mDefferRightValue=deffer_right_value_101||result_93->mDefferRightValue;
        }
        if(        exception__105) {
            result_93->mException=exception__105;
        }
        if(        guard__100) {
            result_93->mGuardValue=guard__100||result_93->mGuardValue;
        }
        if(        no_heap_102) {
            result_93->mNoHeap=(_Bool)1;
            result_93->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_103) {
            result_93->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__97) {
            result_93->mImmutable=immutable__97;
        }
        if(        list$1sNode$ph_length(array_num_96)>0) {
            __dec_obj36=result_93->mArrayNum,
            result_93->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_96);
            /*b*/ come_call_finalizer3(__dec_obj36,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_104) {
            result_93->mNullValue=null_value_104;
        }
        if(        pointer_num_98>0) {
            result_93->mPointerNum+=pointer_num_98;
        }
        /*c*/ come_call_finalizer3(array_num_96,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    i_106=0;
    for(    o2_saved_107=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_108=list$1sType$ph_begin((o2_saved_107));    !list$1sType$ph_end((o2_saved_107));    it_108=list$1sType$ph_next((o2_saved_107))    ){
        list$1sType$ph_operator_store_element(result_93->mGenericsTypes,i_106,(struct sType*)come_increment_ref_count(solve_method_generics(it_108,info)));
        /*c*/ come_call_finalizer3(__right_value63,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_106++;
    }
    /*c*/ come_call_finalizer3(o2_saved_107,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    i_106=0;
    for(    o2_saved_114=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_115=list$1sType$ph_begin((o2_saved_114));    !list$1sType$ph_end((o2_saved_114));    it_115=list$1sType$ph_next((o2_saved_114))    ){
        list$1sType$ph_operator_store_element(result_93->mParamTypes,i_106,(struct sType*)come_increment_ref_count(solve_method_generics(it_115,info)));
        /*c*/ come_call_finalizer3(__right_value65,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_106++;
    }
    /*c*/ come_call_finalizer3(o2_saved_114,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type->mResultType) {
        __dec_obj38=result_93->mResultType,
        result_93->mResultType=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType,info));
        /*b*/ come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__41 = (struct sType*)come_increment_ref_count(result_93);
    /*c*/ come_call_finalizer3(result_93,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__41,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__41;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_109;
int i_110;
struct sType* default_value_111;
struct list$1sType$ph* __result_obj__39;
struct list_item$1sType$ph* it_112;
int i_113;
struct sType* __dec_obj37;
struct list$1sType$ph* __result_obj__40;
default_value_111 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_109=self->len;
        for(        i_110=0;        i_110<position-len_109;        i_110++        ){
            memset(&default_value_111,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_111));
            /*c*/ come_call_finalizer3(default_value_111,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__39 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__39;
    }
    it_112=self->head;
    i_113=0;
    while(    it_112!=((void*)0)) {
        if(        position==i_113) {
            __dec_obj37=it_112->item,
            it_112->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_112=it_112->next;
        i_113++;
    }
    __result_obj__40 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__40;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var){
void* __right_value68 = (void*)0;
struct sRightValueObject* new_value_116;
struct sType* __dec_obj39;
void* __right_value69 = (void*)0;
char* __dec_obj40;
char* __dec_obj41;
struct sType* __dec_obj42;
void* __right_value70 = (void*)0;
char* __dec_obj43;
void* __right_value74 = (void*)0;
char* buf_120;
void* __right_value75 = (void*)0;
char* __dec_obj47;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
char* __dec_obj48;
    if(    gComeGC||gComeC) {
        /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return;
    }
    new_value_116=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc_v2(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 307, "struct sRightValueObject*"));
    __dec_obj39=new_value_116->mType,
    new_value_116->mType=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    new_value_116->mFreed=(_Bool)0;
    new_value_116->mID=gRightValueNum;
    __dec_obj40=new_value_116->mVarName,
    new_value_116->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj41=new_value_116->mFunName,
    new_value_116->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    new_value_116->mBlockLevel=info->block_level;
    new_value_116->mDecrementRefCount=decrement_ref_count;
    if(    obj_value) {
        __dec_obj42=new_value_116->mObjType,
        new_value_116->mObjType=(struct sType*)come_increment_ref_count(obj_type);
        /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj43=new_value_116->mObjValue,
        new_value_116->mObjValue=(char*)come_increment_ref_count(__builtin_string(obj_value));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        new_value_116->mObjVar=obj_var;
        if(        !type->mHeap) {
            new_value_116->mNoFree=(_Bool)1;
        }
    }
    list$1sRightValueObject$ph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_116));
    if(    type->mPointerNum>0) {
        buf_120=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
        add_come_code_at_function_head(info,buf_120);
        __dec_obj47=come_value->c_value_without_right_value_objects,
        come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(come_value->c_value, "04heap.c", 333, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj48=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value76=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_116->mVarName,come_value->c_value));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value->right_value_objects=new_value_116;
        (buf_120 = come_decrement_ref_count(buf_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(new_value_116,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item){
void* __right_value71 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_117;
struct sRightValueObject* __dec_obj44;
void* __right_value72 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_118;
struct sRightValueObject* __dec_obj45;
void* __right_value73 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_119;
struct sRightValueObject* __dec_obj46;
struct list$1sRightValueObject$ph* __result_obj__42;
    if(    self->len==0) {
        litem_117=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value71=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1113, "struct list_item$1sRightValueObject$ph*"))));
        litem_117->prev=((void*)0);
        litem_117->next=((void*)0);
        __dec_obj44=litem_117->item,
        litem_117->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,sRightValueObject_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_117;
        self->head=litem_117;
    }
    else if(    self->len==1) {
        litem_118=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value72=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1123, "struct list_item$1sRightValueObject$ph*"))));
        litem_118->prev=self->head;
        litem_118->next=((void*)0);
        __dec_obj45=litem_118->item,
        litem_118->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,sRightValueObject_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_118;
        self->head->next=litem_118;
    }
    else {
        litem_119=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value73=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1133, "struct list_item$1sRightValueObject$ph*"))));
        litem_119->prev=self->tail;
        litem_119->next=((void*)0);
        __dec_obj46=litem_119->item,
        litem_119->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,sRightValueObject_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_119;
        self->tail=litem_119;
    }
    self->len++;
    __result_obj__42 = self;
    /*c*/ come_call_finalizer3(item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__42;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_121;
struct list$1sRightValueObject$ph* o2_saved_122;
struct sRightValueObject* it_123;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_121=0;
    for(    o2_saved_122=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it_123=list$1sRightValueObject$ph_begin((o2_saved_122));    !list$1sRightValueObject$ph_end((o2_saved_122));    it_123=list$1sRightValueObject$ph_next((o2_saved_122))    ){
        if(        it_123->mID==right_value_num) {
            break;
        }
        i_121++;
    }
    /*c*/ come_call_finalizer3(o2_saved_122,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1sRightValueObject$ph_delete(info->right_value_objects,i_121,i_121+1);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail){
int tmp_124;
struct list$1sRightValueObject$ph* __result_obj__43;
struct list_item$1sRightValueObject$ph* it_127;
int i_128;
struct list_item$1sRightValueObject$ph* prev_it_129;
struct list_item$1sRightValueObject$ph* it_130;
int i_131;
struct list_item$1sRightValueObject$ph* prev_it_132;
struct list_item$1sRightValueObject$ph* it_133;
struct list_item$1sRightValueObject$ph* head_prev_it_134;
struct list_item$1sRightValueObject$ph* tail_it_135;
int i_136;
struct list_item$1sRightValueObject$ph* prev_it_137;
struct list$1sRightValueObject$ph* __result_obj__45;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_124=tail;
        tail=head;
        head=tmp_124;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__43 = self;
        return __result_obj__43;
    }
    if(    head==0&&tail==self->len) {
        list$1sRightValueObject$ph_reset(self);
    }
    else if(    head==0) {
        it_127=self->head;
        i_128=0;
        while(        it_127!=((void*)0)) {
            if(            i_128<tail) {
                prev_it_129=it_127;
                it_127=it_127->next;
                i_128++;
                /*c*/ come_call_finalizer3(prev_it_129,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_128==tail) {
                self->head=it_127;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_127=it_127->next;
                i_128++;
            }
        }
    }
    else if(    tail==self->len) {
        it_130=self->head;
        i_131=0;
        while(        it_130!=((void*)0)) {
            if(            i_131==head) {
                self->tail=it_130->prev;
                self->tail->next=((void*)0);
            }
            if(            i_131>=head) {
                prev_it_132=it_130;
                it_130=it_130->next;
                i_131++;
                /*c*/ come_call_finalizer3(prev_it_132,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_130=it_130->next;
                i_131++;
            }
        }
    }
    else {
        it_133=self->head;
        head_prev_it_134=((void*)0);
        tail_it_135=((void*)0);
        i_136=0;
        while(        it_133!=((void*)0)) {
            if(            i_136==head) {
                head_prev_it_134=it_133->prev;
            }
            if(            i_136==tail) {
                tail_it_135=it_133;
            }
            if(            i_136>=head&&i_136<tail) {
                prev_it_137=it_133;
                it_133=it_133->next;
                i_136++;
                /*c*/ come_call_finalizer3(prev_it_137,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_133=it_133->next;
                i_136++;
            }
        }
        if(        head_prev_it_134!=((void*)0)) {
            head_prev_it_134->next=tail_it_135;
        }
        if(        tail_it_135!=((void*)0)) {
            tail_it_135->prev=head_prev_it_134;
        }
    }
    __result_obj__45 = self;
    return __result_obj__45;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_125;
struct list_item$1sRightValueObject$ph* prev_it_126;
struct list$1sRightValueObject$ph* __result_obj__44;
    it_125=self->head;
    while(    it_125!=((void*)0)) {
        prev_it_126=it_125;
        it_125=it_125->next;
        /*c*/ come_call_finalizer3(prev_it_126,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__44 = self;
    return __result_obj__44;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __right_value78 = (void*)0;
char* __result_obj__46;
void* __right_value79 = (void*)0;
char* __result_obj__47;
struct sClass* klass_138;
void* __right_value80 = (void*)0;
char* type_name_139;
void* __right_value81 = (void*)0;
char* __result_obj__48;
    if(    gComeGC||gComeC) {
        __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value78=__builtin_string(obj))));
        (__right_value78 = come_decrement_ref_count(__right_value78, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__46;
    }
    if(    info->no_output_come_code) {
        __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value79=__builtin_string(obj))));
        (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__47;
    }
    klass_138=type->mClass;
    type_name_139=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result_obj__48 = (char*)come_increment_ref_count(((char*)(__right_value81=xsprintf("(%s)come_increment_ref_count(%s)",type_name_139,obj))));
    (type_name_139 = come_decrement_ref_count(type_name_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__48;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUE$ph* stack_saved_140;
struct list$1sRightValueObject$ph* right_value_objects_141;
struct sClass* klass_142;
void* __right_value82 = (void*)0;
char* name_144;
void* __right_value83 = (void*)0;
_Bool no_decrement_145;
void* __right_value84 = (void*)0;
char* c_value_146;
struct sClass* klass_147;
char* class_name_148;
char* fun_name_149;
void* __right_value85 = (void*)0;
struct sType* type2_150;
void* __right_value86 = (void*)0;
char* fun_name2_151;
struct sFun* finalizer_152;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
char* none_generics_name_159;
void* __right_value89 = (void*)0;
char* generics_fun_name_160;
void* __right_value90 = (void*)0;
struct sGenericsFun* generics_fun_161;
void* __right_value91 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_168=0;
_Bool err_169=0;
void* __right_value92 = (void*)0;
int i_170;
void* __right_value93 = (void*)0;
char* new_fun_name_171;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
char* __dec_obj49;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_172=0;
char* new_fun_name_173=0;
char* __dec_obj50;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
char* type_name_174;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
char* type_name_175;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
char* str_176;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
char* str_177;
struct list$1sRightValueObject$ph* __dec_obj51;
struct list$1CVALUE$ph* __dec_obj52;
memset(&i_170, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_140=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_141=info->right_value_objects;
    klass_142=type->mClass;
    static int dec_num_143=0;
    name_144=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_143));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value83=make_define_var(type,name_144,(_Bool)0,info))));
    (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code(info,"%s=%s,\n",name_144,obj);
    obj=name_144;
    no_decrement_145=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_146=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_147=type->mClass;
        class_name_148=klass_147->mName;
        fun_name_149="finalize";
        type2_150=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_150->mHeap=(_Bool)0;
        fun_name2_151=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_149,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType) {
            type=type->mNoSolvedGenericsType;
        }
        finalizer_152=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0) {
            finalizer_152=((struct sFun*)(__right_value87=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_151)));
            /*c*/ come_call_finalizer3(__right_value87,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_152==((void*)0)) {
                none_generics_name_159=(char*)come_increment_ref_count(get_none_generics_name(type2_150->mClass->mName));
                generics_fun_name_160=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_159,fun_name_149));
                generics_fun_161=((struct sGenericsFun*)(__right_value90=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_160)));
                /*c*/ come_call_finalizer3(__right_value90,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                generics_fun_161) {
                    multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value91=create_generics_fun((char*)come_increment_ref_count(fun_name2_151),generics_fun_161,type,info)));
                    name_168=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                    err_169=multiple_assign_var1->v2;
                    /*c*/ come_call_finalizer3(__right_value91,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_169) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_152=((struct sFun*)(__right_value92=map$2char$phsFun$ph_operator_load_element(info->funcs,name_168)));
                    /*c*/ come_call_finalizer3(__right_value92,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_168 = come_decrement_ref_count(name_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_159 = come_decrement_ref_count(none_generics_name_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_160 = come_decrement_ref_count(generics_fun_name_160, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_170=128-1;            i_170>=1;            i_170--            ){
                new_fun_name_171=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_151,i_170));
                finalizer_152=((struct sFun*)(__right_value94=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_171)));
                /*c*/ come_call_finalizer3(__right_value94,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                finalizer_152) {
                    __dec_obj49=fun_name2_151,
                    fun_name2_151=(char*)come_increment_ref_count(__builtin_string(new_fun_name_171));
                    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_171 = come_decrement_ref_count(new_fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_171 = come_decrement_ref_count(new_fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_152==((void*)0)) {
                finalizer_152=((struct sFun*)(__right_value96=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_151)));
                /*c*/ come_call_finalizer3(__right_value96,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        if(        finalizer_152==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0) {
            multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value97=create_finalizer_automatically(type,fun_name_149,info)));
            fun_172=multiple_assign_var2->v1;
            new_fun_name_173=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            /*c*/ come_call_finalizer3(__right_value97,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj50=fun_name2_151,
            fun_name2_151=(char*)come_increment_ref_count(new_fun_name_173);
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            finalizer_152=fun_172;
            (new_fun_name_173 = come_decrement_ref_count(new_fun_name_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_152!=((void*)0)||(finalizer_152==((void*)0)&&string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==1)) {
            if(            string_operator_equals(type->mClass->mName,"void")) {
                if(                c_value_146) {
                    add_come_last_code2(info,((char*)(__right_value103=xsprintf("/*a*/ come_call_finalizer3(\%s,(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, (void*)0)",((char*)(__right_value98=string_to_string(c_value_146))),((char*)(__right_value99=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value100=int_to_string(((no_decrement_145)?(1):(0))))),((char*)(__right_value101=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value102=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else if(            klass_147->mProtocol&&type->mPointerNum==1) {
                type_name_174=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_146) {
                    add_come_last_code2(info,((char*)(__right_value117=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, \%s/*alloca value*/, \%s/* no decrement }/, \%s/*no_free*/, \%s/* force_delete */, (void*)0)",((char*)(__right_value105=string_to_string(fun_name2_151))),((char*)(__right_value106=string_to_string(c_value_146))),((char*)(__right_value107=string_to_string(c_value_146))),((char*)(__right_value108=string_to_string(type_name_174))),((char*)(__right_value109=string_to_string(c_value_146))),((char*)(__right_value110=string_to_string(c_value_146))),((char*)(__right_value111=string_to_string(type_name_174))),((char*)(__right_value112=string_to_string(c_value_146))),((char*)(__right_value113=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value114=int_to_string(((no_decrement_145)?(1):(0))))),((char*)(__right_value115=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value116=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_174 = come_decrement_ref_count(type_name_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_146) {
                    add_come_last_code2(info,((char*)(__right_value124=xsprintf("/*b*/ come_call_finalizer3(\%s,\%s, \%s/* alloca value */, \%s/* no decrement */, \%s/* no_free */, \%s/* force_delete_ */, (void*)0)",((char*)(__right_value118=string_to_string(c_value_146))),((char*)(__right_value119=string_to_string(fun_name2_151))),((char*)(__right_value120=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value121=int_to_string(((no_decrement_145)?(1):(0))))),((char*)(__right_value122=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value123=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_147->mProtocol&&type->mPointerNum==1) {
                type_name_175=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_176=(char*)come_increment_ref_count(xsprintf("(\%s ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0 /* no_decrement */,\%s/* no_free */,0 /*force_delete*/, (void*)0) :0)",((char*)(__right_value126=string_to_string(name_144))),((char*)(__right_value127=string_to_string(name_144))),((char*)(__right_value128=string_to_string(name_144))),((char*)(__right_value129=string_to_string(type_name_175))),((char*)(__right_value130=string_to_string(name_144))),((char*)(__right_value131=string_to_string(type_name_175))),((char*)(__right_value132=string_to_string(name_144))),((char*)(__right_value133=int_to_string(((no_free)?(1):(0)))))));
                (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_last_code2(info,str_176);
                (type_name_175 = come_decrement_ref_count(type_name_175, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (str_176 = come_decrement_ref_count(str_176, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                str_177=(char*)come_increment_ref_count(xsprintf(((char*)(__right_value136=xsprintf("%%s = come_decrement_ref_count(%%s, (void*)0, (void*)0, 0/* no_decrement */,\%s/* no_free */,0/*force_delete*/, (void*)0)",((char*)(__right_value135=int_to_string(((no_free)?(1):(0)))))))),name_144,name_144));
                (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_last_code2(info,str_177);
                (str_177 = come_decrement_ref_count(str_177, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (c_value_146 = come_decrement_ref_count(c_value_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_150,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_151 = come_decrement_ref_count(fun_name2_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj51=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_141);
    /*b*/ come_call_finalizer3(__dec_obj51,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj52=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_140);
    /*b*/ come_call_finalizer3(__dec_obj52,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    /*c*/ come_call_finalizer3(stack_saved_140,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_144 = come_decrement_ref_count(name_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_153;
unsigned int hash_154;
unsigned int it_155;
struct sFun* __result_obj__49;
struct sFun* __result_obj__50;
struct sFun* __result_obj__51;
struct sFun* __result_obj__52;
default_value_153 = (void*)0;
    memset(&default_value_153,0,sizeof(struct sFun*));
    hash_154=string_get_hash_key(((char*)key))%self->size;
    it_155=hash_154;
    while(    (_Bool)1) {
        if(        self->item_existance[it_155]) {
            if(            string_equals(self->keys[it_155],key)) {
                __result_obj__49 = (struct sFun*)come_increment_ref_count(self->items[it_155]);
                /*c*/ come_call_finalizer3(default_value_153,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__49,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__49;
            }
            it_155++;
            if(            it_155>=self->size) {
                it_155=0;
            }
            else if(            it_155==hash_154) {
                __result_obj__50 = (struct sFun*)come_increment_ref_count(default_value_153);
                /*c*/ come_call_finalizer3(default_value_153,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__50,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__50;
            }
        }
        else {
            __result_obj__51 = (struct sFun*)come_increment_ref_count(default_value_153);
            /*c*/ come_call_finalizer3(default_value_153,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__51,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__51;
        }
    }
    __result_obj__52 = (struct sFun*)come_increment_ref_count(default_value_153);
    /*c*/ come_call_finalizer3(default_value_153,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__52,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__52;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_156;
unsigned int hash_157;
unsigned int it_158;
struct sFun* __result_obj__53;
struct sFun* __result_obj__54;
struct sFun* __result_obj__55;
struct sFun* __result_obj__56;
default_value_156 = (void*)0;
    memset(&default_value_156,0,sizeof(struct sFun*));
    hash_157=string_get_hash_key(((char*)key))%self->size;
    it_158=hash_157;
    while(    (_Bool)1) {
        if(        self->item_existance[it_158]) {
            if(            string_equals(self->keys[it_158],key)) {
                __result_obj__53 = (struct sFun*)come_increment_ref_count(self->items[it_158]);
                /*c*/ come_call_finalizer3(default_value_156,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__53,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__53;
            }
            it_158++;
            if(            it_158>=self->size) {
                it_158=0;
            }
            else if(            it_158==hash_157) {
                __result_obj__54 = (struct sFun*)come_increment_ref_count(default_value_156);
                /*c*/ come_call_finalizer3(default_value_156,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__54,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__54;
            }
        }
        else {
            __result_obj__55 = (struct sFun*)come_increment_ref_count(default_value_156);
            /*c*/ come_call_finalizer3(default_value_156,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__55,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__55;
        }
    }
    __result_obj__56 = (struct sFun*)come_increment_ref_count(default_value_156);
    /*c*/ come_call_finalizer3(default_value_156,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__56,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__56;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_162;
unsigned int hash_163;
unsigned int it_164;
struct sGenericsFun* __result_obj__57;
struct sGenericsFun* __result_obj__58;
struct sGenericsFun* __result_obj__59;
struct sGenericsFun* __result_obj__60;
default_value_162 = (void*)0;
    memset(&default_value_162,0,sizeof(struct sGenericsFun*));
    hash_163=string_get_hash_key(((char*)key))%self->size;
    it_164=hash_163;
    while(    (_Bool)1) {
        if(        self->item_existance[it_164]) {
            if(            string_equals(self->keys[it_164],key)) {
                __result_obj__57 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_164]);
                /*c*/ come_call_finalizer3(default_value_162,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__57,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__57;
            }
            it_164++;
            if(            it_164>=self->size) {
                it_164=0;
            }
            else if(            it_164==hash_163) {
                __result_obj__58 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
                /*c*/ come_call_finalizer3(default_value_162,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__58,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__58;
            }
        }
        else {
            __result_obj__59 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
            /*c*/ come_call_finalizer3(default_value_162,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__59,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__59;
        }
    }
    __result_obj__60 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
    /*c*/ come_call_finalizer3(default_value_162,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__60,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mImplType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_165;
unsigned int hash_166;
unsigned int it_167;
struct sGenericsFun* __result_obj__61;
struct sGenericsFun* __result_obj__62;
struct sGenericsFun* __result_obj__63;
struct sGenericsFun* __result_obj__64;
default_value_165 = (void*)0;
    memset(&default_value_165,0,sizeof(struct sGenericsFun*));
    hash_166=string_get_hash_key(((char*)key))%self->size;
    it_167=hash_166;
    while(    (_Bool)1) {
        if(        self->item_existance[it_167]) {
            if(            string_equals(self->keys[it_167],key)) {
                __result_obj__61 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_167]);
                /*c*/ come_call_finalizer3(default_value_165,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__61,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__61;
            }
            it_167++;
            if(            it_167>=self->size) {
                it_167=0;
            }
            else if(            it_167==hash_166) {
                __result_obj__62 = (struct sGenericsFun*)come_increment_ref_count(default_value_165);
                /*c*/ come_call_finalizer3(default_value_165,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__62,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__62;
            }
        }
        else {
            __result_obj__63 = (struct sGenericsFun*)come_increment_ref_count(default_value_165);
            /*c*/ come_call_finalizer3(default_value_165,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__63,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__63;
        }
    }
    __result_obj__64 = (struct sGenericsFun*)come_increment_ref_count(default_value_165);
    /*c*/ come_call_finalizer3(default_value_165,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__64,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__64;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_178;
struct list_item$1sRightValueObject$ph* prev_it_179;
    it_178=self->head;
    while(    it_178!=((void*)0)) {
        prev_it_179=it_178;
        it_178=it_178->next;
        /*c*/ come_call_finalizer3(prev_it_179,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_180;
struct list_item$1CVALUE$ph* prev_it_181;
    it_180=self->head;
    while(    it_180!=((void*)0)) {
        prev_it_181=it_180;
        it_180=it_180->next;
        /*c*/ come_call_finalizer3(prev_it_181,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_182;
struct list_item$1CVALUE$ph* prev_it_183;
    it_182=self->head;
    while(    it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        /*c*/ come_call_finalizer3(prev_it_183,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUE$ph* stack_saved_184;
struct list$1sRightValueObject$ph* right_value_objects_185;
struct sType* type_before_186;
void* __right_value138 = (void*)0;
char* c_value_187;
struct sClass* klass_188;
char* class_name_189;
char* fun_name_190;
void* __right_value139 = (void*)0;
struct sType* type2_191;
void* __right_value140 = (void*)0;
char* fun_name2_192;
struct sFun* finalizer_193;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
char* none_generics_name_194;
void* __right_value143 = (void*)0;
char* generics_fun_name_195;
void* __right_value144 = (void*)0;
struct sGenericsFun* generics_fun_196;
void* __right_value145 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_197=0;
_Bool err_198=0;
void* __right_value146 = (void*)0;
int i_199;
void* __right_value147 = (void*)0;
char* new_fun_name_200;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
char* __dec_obj53;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_201=0;
char* new_fun_name_202=0;
char* __dec_obj54;
void* __right_value152 = (void*)0;
char* type_name_203;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_204;
struct tuple2$2char$phsType$ph* it_207;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* name_210=0;
struct sType* field_type_211=0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
char* obj_212;
void* __right_value177 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_215;
struct tuple2$2char$phsType$ph* it_216;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* name_217=0;
struct sType* field_type_218=0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
char* obj_219;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
char* type_name_220;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj55;
struct list$1CVALUE$ph* __dec_obj56;
memset(&i_199, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    if(    type->mDefferRightValue) {
        on_drop_object(type,obj,info,comma);
    }
    stack_saved_184=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_185=info->right_value_objects;
    type_before_186=type;
    if(    info->comma_instead_of_semicolon||info->without_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1sType$ph_length(type->mGenericsTypes)>0) {
        c_value_187=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_188=type->mClass;
        class_name_189=klass_188->mName;
        fun_name_190="finalize";
        type2_191=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_191->mHeap=(_Bool)0;
        fun_name2_192=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_190,info,(_Bool)1));
        finalizer_193=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0) {
            finalizer_193=((struct sFun*)(__right_value141=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_192)));
            /*c*/ come_call_finalizer3(__right_value141,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_193==((void*)0)) {
                none_generics_name_194=(char*)come_increment_ref_count(get_none_generics_name(type2_191->mClass->mName));
                generics_fun_name_195=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_194,fun_name_190));
                generics_fun_196=((struct sGenericsFun*)(__right_value144=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_195)));
                /*c*/ come_call_finalizer3(__right_value144,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                generics_fun_196) {
                    multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value145=create_generics_fun((char*)come_increment_ref_count(fun_name2_192),generics_fun_196,type,info)));
                    name_197=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                    err_198=multiple_assign_var3->v2;
                    /*c*/ come_call_finalizer3(__right_value145,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_198) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_193=((struct sFun*)(__right_value146=map$2char$phsFun$ph_operator_load_element(info->funcs,name_197)));
                    /*c*/ come_call_finalizer3(__right_value146,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_197 = come_decrement_ref_count(name_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_194 = come_decrement_ref_count(none_generics_name_194, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_195 = come_decrement_ref_count(generics_fun_name_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_199=128-1;            i_199>=1;            i_199--            ){
                new_fun_name_200=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_192,i_199));
                finalizer_193=((struct sFun*)(__right_value148=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_200)));
                /*c*/ come_call_finalizer3(__right_value148,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                finalizer_193) {
                    __dec_obj53=fun_name2_192,
                    fun_name2_192=(char*)come_increment_ref_count(__builtin_string(new_fun_name_200));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_200 = come_decrement_ref_count(new_fun_name_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_200 = come_decrement_ref_count(new_fun_name_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_193==((void*)0)) {
                finalizer_193=((struct sFun*)(__right_value150=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_192)));
                /*c*/ come_call_finalizer3(__right_value150,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        if(        finalizer_193==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0) {
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value151=create_finalizer_automatically(type,fun_name_190,info)));
            fun_201=multiple_assign_var4->v1;
            new_fun_name_202=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            /*c*/ come_call_finalizer3(__right_value151,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj54=fun_name2_192,
            fun_name2_192=(char*)come_increment_ref_count(new_fun_name_202);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            finalizer_193=fun_201;
            (new_fun_name_202 = come_decrement_ref_count(new_fun_name_202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_193!=((void*)0)) {
            if(            klass_188->mProtocol&&type->mPointerNum==1) {
                type_name_203=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_187) {
                    add_come_code(info,((char*)(__right_value166=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s /*alloca value */, \%s/* no_decrement */, \%s/* no_free */, \%s /* force_delete */, (void*)0)\%s",((char*)(__right_value153=string_to_string(fun_name2_192))),((char*)(__right_value154=string_to_string(c_value_187))),((char*)(__right_value155=string_to_string(c_value_187))),((char*)(__right_value156=string_to_string(type_name_203))),((char*)(__right_value157=string_to_string(c_value_187))),((char*)(__right_value158=string_to_string(c_value_187))),((char*)(__right_value159=string_to_string(type_name_203))),((char*)(__right_value160=string_to_string(c_value_187))),((char*)(__right_value161=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value162=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value163=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value164=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value165=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_203 = come_decrement_ref_count(type_name_203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_187) {
                    add_come_code(info,((char*)(__right_value174=xsprintf("/*c*/ come_call_finalizer3(\%s,\%s, \%s/* alloca value */, \%s/* no_decrement */, \%s/* no_free */, \%s/* force_delete */ , (void*)0)\%s",((char*)(__right_value167=string_to_string(c_value_187))),((char*)(__right_value168=string_to_string(fun_name2_192))),((char*)(__right_value169=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value170=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value171=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value172=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value173=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_188->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_204=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_188->mFields)),it_207=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_204));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_204));                it_207=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_204))                ){
                    multiple_assign_var5=it_207;
                    name_210=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    field_type_211=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(                    field_type_211->mHeap&&field_type_211->mPointerNum>0) {
                        obj_212=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value175=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_187,name_210));
                        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value177=sType_clone(field_type_211))),obj_212,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value177,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (obj_212 = come_decrement_ref_count(obj_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_210 = come_decrement_ref_count(name_210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type_211,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_204,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else if(            klass_188->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_215=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_188->mFields)),it_216=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_215));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_215));                it_216=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_215))                ){
                    multiple_assign_var6=it_216;
                    name_217=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    field_type_218=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                    if(                    field_type_218->mHeap&&field_type_218->mPointerNum>0) {
                        obj_219=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value178=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_187,name_217));
                        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value180=sType_clone(field_type_218))),obj_219,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value180,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (obj_219 = come_decrement_ref_count(obj_219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_217 = come_decrement_ref_count(name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type_218,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_215,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                klass_188->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_187) {
                        type_name_220=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        add_come_code(info,((char*)(__right_value193=xsprintf("((\%s) ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s/* no_decrement */, \%s/*no_free*/,\%s/*force_delete*/, (void*)0):(void*)0)\%s",((char*)(__right_value182=string_to_string(c_value_187))),((char*)(__right_value183=string_to_string(c_value_187))),((char*)(__right_value184=string_to_string(c_value_187))),((char*)(__right_value185=string_to_string(type_name_220))),((char*)(__right_value186=string_to_string(c_value_187))),((char*)(__right_value187=string_to_string(type_name_220))),((char*)(__right_value188=string_to_string(c_value_187))),((char*)(__right_value189=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value190=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value191=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value192=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (type_name_220 = come_decrement_ref_count(type_name_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    if(                    c_value_187) {
                        add_come_code(info,((char*)(__right_value200=xsprintf("(\%s = come_decrement_ref_count(\%s, (void*)0, (void*)0, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, (void*)0))\%s",((char*)(__right_value194=string_to_string(c_value_187))),((char*)(__right_value195=string_to_string(c_value_187))),((char*)(__right_value196=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value197=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value198=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value199=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
        }
        (c_value_187 = come_decrement_ref_count(c_value_187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_191,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_192 = come_decrement_ref_count(fun_name2_192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj55=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_185);
    /*b*/ come_call_finalizer3(__dec_obj55,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj56=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_184);
    /*b*/ come_call_finalizer3(__dec_obj56,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    /*c*/ come_call_finalizer3(stack_saved_184,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_205;
struct tuple2$2char$phsType$ph* __result_obj__65;
struct tuple2$2char$phsType$ph* __result_obj__66;
struct tuple2$2char$phsType$ph* result_206;
struct tuple2$2char$phsType$ph* __result_obj__67;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_205,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__65 = result_205;
        return __result_obj__65;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__66 = self->it->item;
        return __result_obj__66;
    }
    memset(&result_206,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__67 = result_206;
    return __result_obj__67;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_208;
struct tuple2$2char$phsType$ph* __result_obj__68;
struct tuple2$2char$phsType$ph* __result_obj__69;
struct tuple2$2char$phsType$ph* result_209;
struct tuple2$2char$phsType$ph* __result_obj__70;
result_208 = (void*)0;
result_209 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_208,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__68 = result_208;
        return __result_obj__68;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__69 = self->it->item;
        return __result_obj__69;
    }
    memset(&result_209,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__70 = result_209;
    return __result_obj__70;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_213;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_214;
    it_213=self->head;
    while(    it_213!=((void*)0)) {
        prev_it_214=it_213;
        it_213=it_213->next;
        /*c*/ come_call_finalizer3(prev_it_214,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info){
_Bool in_clone_object_221;
void* __right_value201 = (void*)0;
struct sType* type2_222;
char* result_223;
struct sType* result_type_224;
struct list$1CVALUE$ph* stack_saved_225;
struct list$1sRightValueObject$ph* right_value_objects_226;
void* __right_value202 = (void*)0;
char* c_value_227;
struct sClass* klass_228;
char* class_name_229;
char* fun_name_230;
struct sFun* cloner_231;
char* fun_name2_232;
void* __right_value203 = (void*)0;
char* none_generics_name_233;
void* __right_value204 = (void*)0;
struct sType* obj_type_234;
void* __right_value205 = (void*)0;
char* __dec_obj57;
void* __right_value206 = (void*)0;
char* fun_name3_235;
void* __right_value207 = (void*)0;
struct sGenericsFun* generics_fun_236;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var7 = (void*)0;
char* name_239=0;
_Bool err_240=0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__78;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
char* __dec_obj62;
int i_251;
void* __right_value222 = (void*)0;
char* new_fun_name_252;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
char* __dec_obj63;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun_253=0;
char* new_fun_name_254=0;
char* __dec_obj64;
struct sType* __dec_obj65;
void* __right_value227 = (void*)0;
struct sType* __dec_obj66;
void* __right_value228 = (void*)0;
char* __dec_obj67;
void* __right_value229 = (void*)0;
char* __dec_obj68;
void* __right_value230 = (void*)0;
struct sType* __dec_obj69;
void* __right_value231 = (void*)0;
char* type_name_255;
void* __right_value232 = (void*)0;
char* __dec_obj70;
void* __right_value233 = (void*)0;
char* __dec_obj71;
struct list$1sRightValueObject$ph* __dec_obj72;
struct list$1CVALUE$ph* __dec_obj73;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__79;
fun_name2_232 = (void*)0;
memset(&i_251, 0, sizeof(int));
    in_clone_object_221=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_222=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_223=((void*)0);
    result_type_224=((void*)0);
    stack_saved_225=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_226=info->right_value_objects;
    c_value_227=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_228=type->mClass;
    class_name_229=klass_228->mName;
    fun_name_230="clone";
    cloner_231=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_233=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_234=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj57=fun_name2_232,
        fun_name2_232=(char*)come_increment_ref_count(create_method_name(obj_type_234,(_Bool)0,fun_name_230,info,(_Bool)1));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_235=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_233,fun_name_230));
        generics_fun_236=((struct sGenericsFun*)(__right_value207=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_235,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value207,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_236) {
            multiple_assign_var7=((struct tuple2$2char$phbool$*)(__right_value209=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_232)),generics_fun_236,obj_type_234,info)));
            name_239=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            err_240=multiple_assign_var7->v2;
            /*c*/ come_call_finalizer3(__right_value209,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_240) {
                __result_obj__78 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value218=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 689, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "04heap.c", 689, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string(""))))));
                (name_239 = come_decrement_ref_count(name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_233 = come_decrement_ref_count(none_generics_name_233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_234,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_235 = come_decrement_ref_count(fun_name3_235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type2_222,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (result_223 = come_decrement_ref_count(result_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_224,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(stack_saved_225,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (c_value_227 = come_decrement_ref_count(c_value_227, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_232 = come_decrement_ref_count(fun_name2_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value218,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__78,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__78;
            }
            cloner_231=((struct sFun*)(__right_value219=map$2char$phsFun$ph_operator_load_element(info->funcs,name_239)));
            /*c*/ come_call_finalizer3(__right_value219,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_239 = come_decrement_ref_count(name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_231=((struct sFun*)(__right_value220=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_232)));
            /*c*/ come_call_finalizer3(__right_value220,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_233 = come_decrement_ref_count(none_generics_name_233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_234,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_235 = come_decrement_ref_count(fun_name3_235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj62=fun_name2_232,
        fun_name2_232=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_230,info,(_Bool)1));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_251=128-1;        i_251>=1;        i_251--        ){
            new_fun_name_252=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_232,i_251));
            cloner_231=((struct sFun*)(__right_value223=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_252)));
            /*c*/ come_call_finalizer3(__right_value223,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_231) {
                __dec_obj63=fun_name2_232,
                fun_name2_232=(char*)come_increment_ref_count(__builtin_string(new_fun_name_252));
                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_252 = come_decrement_ref_count(new_fun_name_252, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_252 = come_decrement_ref_count(new_fun_name_252, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_231==((void*)0)) {
            cloner_231=((struct sFun*)(__right_value225=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_232)));
            /*c*/ come_call_finalizer3(__right_value225,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_231==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value226=create_cloner_automatically(type,fun_name_230,info)));
        fun_253=multiple_assign_var8->v1;
        new_fun_name_254=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        /*c*/ come_call_finalizer3(__right_value226,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj64=fun_name2_232,
        fun_name2_232=(char*)come_increment_ref_count(new_fun_name_254);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_231=fun_253;
        (new_fun_name_254 = come_decrement_ref_count(new_fun_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    cloner_231!=((void*)0)) {
        __dec_obj65=result_type_224,
        result_type_224=(struct sType*)come_increment_ref_count(cloner_231->mResultType);
        /*b*/ come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj66=result_type_224,
        result_type_224=(struct sType*)come_increment_ref_count(solve_generics(result_type_224,type,info));
        /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj67=result_223,
        result_223=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_232,c_value_227));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        gComeDebug) {
            __dec_obj68=result_223,
            result_223=(char*)come_increment_ref_count(append_stackframe(result_223,result_type_224,info));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj69=result_type_224,
        result_type_224=(struct sType*)come_increment_ref_count(sType_clone(type));
        /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type2_222->mHeap=(_Bool)1;
        type_name_255=(char*)come_increment_ref_count(make_type_name_string(type2_222,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj70=result_223,
        result_223=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_255,c_value_227,info->sname,info->sline,type_name_255));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        gComeDebug) {
            __dec_obj71=result_223,
            result_223=(char*)come_increment_ref_count(append_stackframe(result_223,result_type_224,info));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        (type_name_255 = come_decrement_ref_count(type_name_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj72=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_226);
    /*b*/ come_call_finalizer3(__dec_obj72,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj73=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_225);
    /*b*/ come_call_finalizer3(__dec_obj73,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->in_clone_object=in_clone_object_221;
    __result_obj__79 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value235=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 751, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_224),(char*)come_increment_ref_count(result_223)))));
    /*c*/ come_call_finalizer3(type2_222,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_223 = come_decrement_ref_count(result_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_224,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(stack_saved_225,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (c_value_227 = come_decrement_ref_count(c_value_227, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_232 = come_decrement_ref_count(fun_name2_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value235,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__79,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__79;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_237;
unsigned int it_238;
struct sGenericsFun* __result_obj__71;
struct sGenericsFun* __result_obj__72;
struct sGenericsFun* __result_obj__73;
struct sGenericsFun* __result_obj__74;
    hash_237=string_get_hash_key(((char*)key))%self->size;
    it_238=hash_237;
    while(    (_Bool)1) {
        if(        self->item_existance[it_238]) {
            if(            string_equals(self->keys[it_238],key)) {
                __result_obj__71 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_238]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__71,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__71;
            }
            it_238++;
            if(            it_238>=self->size) {
                it_238=0;
            }
            else if(            it_238==hash_237) {
                __result_obj__72 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__72,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__72;
            }
        }
        else {
            __result_obj__73 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__73,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__73;
        }
    }
    __result_obj__74 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self){
struct tuple2$2sType$phchar$ph* __result_obj__75;
void* __right_value214 = (void*)0;
struct tuple2$2sType$phchar$ph* result_241;
void* __right_value215 = (void*)0;
struct sType* __dec_obj58;
void* __right_value216 = (void*)0;
char* __dec_obj59;
struct tuple2$2sType$phchar$ph* __result_obj__76;
    if(    self==(void*)0) {
        __result_obj__75 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__75,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__75;
    }
    result_241=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj58=result_241->v1,
        result_241->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj59=result_241->v2,
        result_241->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2sType$phchar$ph_clone", 5, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__76 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(result_241);
    /*c*/ come_call_finalizer3(result_241,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__76,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_242;
    result_242=0;
    result_242+=int_get_hash_key(((int)self->v1));
    result_242+=int_get_hash_key(((int)self->v2));
    return result_242;
}

static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDefferRightValue,right->mDefferRightValue)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_243;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_244;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_243=left->head;
    it2_244=right->head;
    while(    it_243!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_243->item,it2_244->item)) {
            return (_Bool)0;
        }
        it_243=it_243->next;
        it2_244=it2_244->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_245;
struct list_item$1sType$ph* it2_246;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_245=left->head;
    it2_246=right->head;
    while(    it_245!=((void*)0)) {
        if(        !sType_equals(it_245->item,it2_246->item)) {
            return (_Bool)0;
        }
        it_245=it_245->next;
        it2_246=it2_246->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_247;
struct list_item$1sNode$ph* it2_248;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_247=left->head;
    it2_248=right->head;
    while(    it_247!=((void*)0)) {
        if(        !sNode_equals(it_247->item,it2_248->item)) {
            return (_Bool)0;
        }
        it_247=it_247->next;
        it2_248=it2_248->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_249;
struct list_item$1char$ph* it2_250;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_249=left->head;
    it2_250=right->head;
    while(    it_249!=((void*)0)) {
        if(        !string_equals(it_249->item,it2_250->item)) {
            return (_Bool)0;
        }
        it_249=it_249->next;
        it2_250=it2_250->next;
    }
    return (_Bool)1;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj60;
char* __dec_obj61;
struct tuple2$2sType$phchar$ph* __result_obj__77;
    __dec_obj60=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj61=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__77 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__77,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma){
void* __right_value236 = (void*)0;
char* c_value_256;
char* fun_name_257;
void* __right_value237 = (void*)0;
struct sType* type2_258;
void* __right_value238 = (void*)0;
char* fun_name2_259;
struct sFun* dropper_260;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* none_generics_name_261;
void* __right_value241 = (void*)0;
char* generics_fun_name_262;
void* __right_value242 = (void*)0;
struct sGenericsFun* generics_fun_263;
void* __right_value243 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var9 = (void*)0;
char* name_264=0;
_Bool err_265=0;
void* __right_value244 = (void*)0;
int i_266;
void* __right_value245 = (void*)0;
char* new_fun_name_267;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
char* __dec_obj74;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
memset(&i_266, 0, sizeof(int));
    if(    gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    type->mClass->mStruct||list$1sType$ph_length(type->mGenericsTypes)>0) {
        c_value_256=(char*)come_increment_ref_count(__builtin_string(obj));
        fun_name_257="on_drop";
        type2_258=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_258->mHeap=(_Bool)0;
        fun_name2_259=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_257,info,(_Bool)1));
        dropper_260=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0) {
            dropper_260=((struct sFun*)(__right_value239=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_259)));
            /*c*/ come_call_finalizer3(__right_value239,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            dropper_260==((void*)0)) {
                none_generics_name_261=(char*)come_increment_ref_count(get_none_generics_name(type2_258->mClass->mName));
                generics_fun_name_262=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_261,fun_name_257));
                generics_fun_263=((struct sGenericsFun*)(__right_value242=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_262)));
                /*c*/ come_call_finalizer3(__right_value242,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                generics_fun_263) {
                    multiple_assign_var9=((struct tuple2$2char$phbool$*)(__right_value243=create_generics_fun((char*)come_increment_ref_count(fun_name2_259),generics_fun_263,type,info)));
                    name_264=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    err_265=multiple_assign_var9->v2;
                    /*c*/ come_call_finalizer3(__right_value243,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_265) {
                        printf("%s %d: can't create generics dropper\n",info->sname,info->sline);
                        exit(2);
                    }
                    dropper_260=((struct sFun*)(__right_value244=map$2char$phsFun$ph_operator_load_element(info->funcs,name_264)));
                    /*c*/ come_call_finalizer3(__right_value244,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_264 = come_decrement_ref_count(name_264, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_261 = come_decrement_ref_count(none_generics_name_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_262 = come_decrement_ref_count(generics_fun_name_262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_266=128-1;            i_266>=1;            i_266--            ){
                new_fun_name_267=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_259,i_266));
                dropper_260=((struct sFun*)(__right_value246=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_267)));
                /*c*/ come_call_finalizer3(__right_value246,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                dropper_260) {
                    __dec_obj74=fun_name2_259,
                    fun_name2_259=(char*)come_increment_ref_count(__builtin_string(new_fun_name_267));
                    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_267 = come_decrement_ref_count(new_fun_name_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_267 = come_decrement_ref_count(new_fun_name_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            dropper_260==((void*)0)) {
                dropper_260=((struct sFun*)(__right_value248=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_259)));
                /*c*/ come_call_finalizer3(__right_value248,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        if(        dropper_260!=((void*)0)) {
            if(            c_value_256) {
                if(                comma) {
                    add_come_code(info,((char*)(__right_value251=xsprintf("\%s(\%s),",((char*)(__right_value249=string_to_string(fun_name2_259))),((char*)(__right_value250=string_to_string(c_value_256)))))));
                    (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value254=xsprintf("\%s(\%s);\n",((char*)(__right_value252=string_to_string(fun_name2_259))),((char*)(__right_value253=string_to_string(c_value_256)))))));
                    (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        (c_value_256 = come_decrement_ref_count(c_value_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_258,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_259 = come_decrement_ref_count(fun_name2_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_268;
struct list$1sRightValueObject$ph* right_value_objects_269;
int n_270;
struct list$1sRightValueObject$ph* o2_saved_271;
struct sRightValueObject* it_272;
struct sVar* var__273;
char* __dec_obj75;
struct list$1sRightValueObject$ph* o2_saved_274;
struct sRightValueObject* it_275;
struct sType* type_276;
void* __right_value255 = (void*)0;
struct sType* type2_277;
void* __right_value256 = (void*)0;
struct sType* __dec_obj76;
void* __right_value257 = (void*)0;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon||info->without_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_268=(_Bool)0;
    right_value_objects_269=info->right_value_objects;
    n_270=0;
    for(    o2_saved_271=(right_value_objects_269),it_272=list$1sRightValueObject$ph_begin((o2_saved_271));    !list$1sRightValueObject$ph_end((o2_saved_271));    it_272=list$1sRightValueObject$ph_next((o2_saved_271))    ){
        if(        it_272&&!it_272->mFreed) {
            if(            string_operator_equals(it_272->mFunName,info->come_fun->mName)&&it_272->mBlockLevel==info->block_level&&!it_272->mStored) {
                if(                it_272->mObjType) {
                    on_drop_object(it_272->mObjType,it_272->mObjValue,info,comma);
                    var__273=it_272->mObjVar;
                    __dec_obj75=var__273->mCValueName,
                    var__273->mCValueName=((void*)0);
                    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
        }
        n_270++;
    }
    for(    o2_saved_274=(right_value_objects_269),it_275=list$1sRightValueObject$ph_begin((o2_saved_274));    !list$1sRightValueObject$ph_end((o2_saved_274));    it_275=list$1sRightValueObject$ph_next((o2_saved_274))    ){
        if(        it_275&&!it_275->mFreed) {
            if(            string_operator_equals(it_275->mFunName,info->come_fun->mName)&&it_275->mBlockLevel==info->block_level&&!it_275->mStored&&!it_275->mNoFree) {
                type_276=(struct sType*)come_increment_ref_count(it_275->mType);
                type2_277=(struct sType*)come_increment_ref_count(sType_clone(type_276));
                if(                info->generics_type) {
                    __dec_obj76=type_276,
                    type_276=(struct sType*)come_increment_ref_count(solve_generics(type2_277,info->generics_type,info));
                    /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                free_object(((struct sType*)(__right_value257=sType_clone(type_276))),it_275->mVarName,!it_275->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value257,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                it_275->mFreed=(_Bool)1;
                free_right_value_268=(_Bool)1;
                /*c*/ come_call_finalizer3(type_276,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_277,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        n_270++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
struct sVarTable* it_278;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct sVar* var__279;
struct sVar* __result_obj__88;
struct sVar* __result_obj__89;
    it_278=table;
    while(    it_278) {
        var__279=((struct sVar*)(__right_value260=map$2char$phsVar$ph_operator_load_element(it_278->mVars,((char*)(__right_value259=__builtin_string(name))))));
        (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value260,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__279) {
            __result_obj__88 = var__279;
            return __result_obj__88;
        }
        it_278=it_278->mParent;
    }
    __result_obj__89 = ((void*)0);
    return __result_obj__89;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_280;
unsigned int hash_281;
unsigned int it_282;
struct sVar* __result_obj__80;
struct sVar* __result_obj__81;
struct sVar* __result_obj__82;
struct sVar* __result_obj__83;
default_value_280 = (void*)0;
    memset(&default_value_280,0,sizeof(struct sVar*));
    hash_281=string_get_hash_key(((char*)key))%self->size;
    it_282=hash_281;
    while(    (_Bool)1) {
        if(        self->item_existance[it_282]) {
            if(            string_equals(self->keys[it_282],key)) {
                __result_obj__80 = (struct sVar*)come_increment_ref_count(self->items[it_282]);
                /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__80,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__80;
            }
            it_282++;
            if(            it_282>=self->size) {
                it_282=0;
            }
            else if(            it_282==hash_281) {
                __result_obj__81 = (struct sVar*)come_increment_ref_count(default_value_280);
                /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__81,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__81;
            }
        }
        else {
            __result_obj__82 = (struct sVar*)come_increment_ref_count(default_value_280);
            /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__82;
        }
    }
    __result_obj__83 = (struct sVar*)come_increment_ref_count(default_value_280);
    /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__83,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__83;
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_283;
unsigned int hash_284;
unsigned int it_285;
struct sVar* __result_obj__84;
struct sVar* __result_obj__85;
struct sVar* __result_obj__86;
struct sVar* __result_obj__87;
default_value_283 = (void*)0;
    memset(&default_value_283,0,sizeof(struct sVar*));
    hash_284=string_get_hash_key(((char*)key))%self->size;
    it_285=hash_284;
    while(    (_Bool)1) {
        if(        self->item_existance[it_285]) {
            if(            string_equals(self->keys[it_285],key)) {
                __result_obj__84 = (struct sVar*)come_increment_ref_count(self->items[it_285]);
                /*c*/ come_call_finalizer3(default_value_283,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__84,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__84;
            }
            it_285++;
            if(            it_285>=self->size) {
                it_285=0;
            }
            else if(            it_285==hash_284) {
                __result_obj__85 = (struct sVar*)come_increment_ref_count(default_value_283);
                /*c*/ come_call_finalizer3(default_value_283,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__85;
            }
        }
        else {
            __result_obj__86 = (struct sVar*)come_increment_ref_count(default_value_283);
            /*c*/ come_call_finalizer3(default_value_283,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__86,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__86;
        }
    }
    __result_obj__87 = (struct sVar*)come_increment_ref_count(default_value_283);
    /*c*/ come_call_finalizer3(default_value_283,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__87,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__87;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_286;
char* it_289;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct sVar* p_292;
struct sType* type_293;
struct sClass* klass_294;
_Bool comma_295;
void* __right_value264 = (void*)0;
struct sType* type2_296;
void* __right_value265 = (void*)0;
struct sType* type2_297;
void* __right_value266 = (void*)0;
char* c_value_298;
void* __right_value267 = (void*)0;
struct sType* type2_299;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_286=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_289=map$2char$phsVar$ph_begin((o2_saved_286));    !map$2char$phsVar$ph_end((o2_saved_286));    it_289=map$2char$phsVar$ph_next((o2_saved_286))    ){
        p_292=((struct sVar*)(__right_value263=map$2char$phsVar$ph_operator_load_element(table->mVars,((char*)(__right_value262=__builtin_string(it_289))))));
        (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value263,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_293=p_292->mType;
        klass_294=type_293->mClass;
        comma_295=p_292->mComma;
        if(        type_293->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_292->mCValueName,p_292->mCValueName,comma_295);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_292->mCValueName,p_292->mCValueName,comma_295);
        }
        else if(        ret_value!=((void*)0)&&p_292->mCValueName!=((void*)0)&&string_operator_equals(p_292->mCValueName,ret_value->mCValueName)&&type_293->mHeap) {
            type2_296=(struct sType*)come_increment_ref_count(sType_clone(type_293));
            free_object(type2_296,p_292->mCValueName,(_Bool)0,(_Bool)1,info,comma_295,(_Bool)0,(_Bool)1);
            /*c*/ come_call_finalizer3(type2_296,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        type_293->mHeap&&p_292->mCValueName) {
            type2_297=(struct sType*)come_increment_ref_count(sType_clone(type_293));
            free_object(type2_297,p_292->mCValueName,(_Bool)0,(_Bool)0,info,comma_295,(_Bool)0,(_Bool)0);
            /*c*/ come_call_finalizer3(type2_297,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        klass_294->mStruct&&p_292->mCValueName&&type_293->mAllocaValue&&!type_293->mNoCallingDestructor) {
            c_value_298=(char*)come_increment_ref_count(xsprintf("(&%s)",p_292->mCValueName));
            type2_299=(struct sType*)come_increment_ref_count(sType_clone(type_293));
            type2_299->mPointerNum++;
            free_object(type2_299,c_value_298,(_Bool)0,(_Bool)0,info,comma_295,(_Bool)0,(_Bool)0);
            (c_value_298 = come_decrement_ref_count(c_value_298, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type2_299,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_286,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_287;
char* __result_obj__90;
char* __result_obj__91;
char* result_288;
char* __result_obj__92;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_287,0,sizeof(char*));
        __result_obj__90 = result_287;
        return __result_obj__90;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__91 = self->key_list->it->item;
        return __result_obj__91;
    }
    memset(&result_288,0,sizeof(char*));
    __result_obj__92 = result_288;
    return __result_obj__92;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_290;
char* __result_obj__93;
char* __result_obj__94;
char* result_291;
char* __result_obj__95;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_290,0,sizeof(char*));
        __result_obj__93 = result_290;
        return __result_obj__93;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__94 = self->key_list->it->item;
        return __result_obj__94;
    }
    memset(&result_291,0,sizeof(char*));
    __result_obj__95 = result_291;
    return __result_obj__95;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_300;
int i_301;
    for(    i_300=0;    i_300<self->size;    i_300++    ){
        if(        self->item_existance[i_300]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_300],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_301=0;    i_301<self->size;    i_301++    ){
        if(        self->item_existance[i_301]) {
            if(            1) {
                (self->keys[i_301] = come_decrement_ref_count(self->keys[i_301], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_302;
    if(    gComeGC||gComeC) {
        return;
    }
    it_302=info->lv_table;
    if(    it_302==info->come_fun->mBlock->mVarTable) {
        free_objects(it_302,ret_value,info);
    }
    else {
        while(        it_302!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_302,ret_value,info);
            it_302=it_302->mParent;
        }
        free_objects(it_302,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_303;
struct sVarTable* current_loop_vtable_304;
struct sVarTable* it_305;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_303=((void*)0);
    current_loop_vtable_304=info->current_loop_vtable;
    if(    current_loop_vtable_304!=((void*)0)) {
        it_305=info->lv_table;
        while(        it_305!=current_loop_vtable_304) {
            free_objects(it_305,ret_value_303,info);
            it_305=it_305->mParent;
        }
        free_objects(it_305,ret_value_303,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __right_value268 = (void*)0;
_Bool _if_conditional1;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
char* __result_obj__96;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
char* __result_obj__97;
void* __right_value279 = (void*)0;
char* var_name_307;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
_Bool _if_conditional2;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* __result_obj__98;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
char* __result_obj__99;
void* __right_value296 = (void*)0;
char* __result_obj__100;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            if(            (_if_conditional1=(((struct sFun*)(__right_value268=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),            /*c*/ come_call_finalizer3(__right_value268,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value273=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s,\%s),\%s,come_pop_stackframe_v2())",((char*)(__right_value269=string_to_string(info->sname))),((char*)(__right_value270=int_to_string(info->sline))),((char*)(__right_value271=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value272=charp_to_string(c_value)))))));
                (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__96;
            }
            else {
                __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value278=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value274=string_to_string(info->sname))),((char*)(__right_value275=int_to_string(info->sline))),((char*)(__right_value276=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value277=charp_to_string(c_value)))))));
                (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__97;
            }
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_306=0;
        ++n_306;
        var_name_307=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_306));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value280=make_define_var(type,var_name_307,(_Bool)0,info))));
        (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        (_if_conditional2=(((struct sFun*)(__right_value281=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),        /*c*/ come_call_finalizer3(__right_value281,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value288=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe_v2(), \%s)",((char*)(__right_value282=string_to_string(info->sname))),((char*)(__right_value283=int_to_string(info->sline))),((char*)(__right_value284=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value285=string_to_string(var_name_307))),((char*)(__right_value286=charp_to_string(c_value))),((char*)(__right_value287=string_to_string(var_name_307)))))));
            (var_name_307 = come_decrement_ref_count(var_name_307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__98;
        }
        else {
            __result_obj__99 = (char*)come_increment_ref_count(((char*)(__right_value295=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value289=string_to_string(info->sname))),((char*)(__right_value290=int_to_string(info->sline))),((char*)(__right_value291=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value292=string_to_string(var_name_307))),((char*)(__right_value293=charp_to_string(c_value))),((char*)(__right_value294=string_to_string(var_name_307)))))));
            (var_name_307 = come_decrement_ref_count(var_name_307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__99 = come_decrement_ref_count(__result_obj__99, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__99;
        }
        (var_name_307 = come_decrement_ref_count(var_name_307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value296=__builtin_string(c_value))));
    (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__100;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_308;
char* it_309;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sVar* p_310;
struct sType* type_311;
struct sClass* klass_312;
_Bool __result_obj__101;
_Bool __result_obj__102;
_Bool __result_obj__103;
_Bool __result_obj__104;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_308=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_309=map$2char$phsVar$ph_begin((o2_saved_308));    !map$2char$phsVar$ph_end((o2_saved_308));    it_309=map$2char$phsVar$ph_next((o2_saved_308))    ){
        p_310=((struct sVar*)(__right_value299=map$2char$phsVar$ph_operator_load_element(table->mVars,((char*)(__right_value298=__builtin_string(it_309))))));
        (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value299,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_311=p_310->mType;
        klass_312=type_311->mClass;
        if(        type_311->mChannel) {
            __result_obj__101 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_308,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__101;
        }
        else if(        ret_value!=((void*)0)&&p_310->mCValueName!=((void*)0)&&string_operator_equals(p_310->mCValueName,ret_value->mCValueName)&&type_311->mHeap) {
            __result_obj__102 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_308,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__102;
        }
        else if(        type_311->mHeap&&p_310->mCValueName) {
            __result_obj__103 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_308,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__103;
        }
        else if(        klass_312->mStruct&&p_310->mCValueName&&type_311->mAllocaValue&&!type_311->mNoCallingDestructor) {
            __result_obj__104 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_308,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__104;
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_308,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_313;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_313=info->lv_table;
    if(    it_313==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_313,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(        it_313!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_313,ret_value,info)) {
                return (_Bool)1;
            }
            it_313=it_313->mParent;
        }
        if(        existance_free_objects(it_313,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObject$ph* right_value_objects_314;
struct list$1sRightValueObject$ph* o2_saved_315;
struct sRightValueObject* it_316;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_314=info->right_value_objects;
    for(    o2_saved_315=(right_value_objects_314),it_316=list$1sRightValueObject$ph_begin((o2_saved_315));    !list$1sRightValueObject$ph_end((o2_saved_315));    it_316=list$1sRightValueObject$ph_next((o2_saved_315))    ){
        if(        it_316&&!it_316->mFreed) {
            if(            string_operator_equals(it_316->mFunName,info->come_fun->mName)&&it_316->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

