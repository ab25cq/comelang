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

typedef unsigned long  int nfds_t;

struct pollfd
{
    int fd;
    short int events;
    short int revents;
};

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sOutputNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNode$ph* exps;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWildCard
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    _Bool guard_break;
    struct list$1sType$ph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
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
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
int poll(struct pollfd* __fds, unsigned long  int __nfds, int __timeout);
int ppoll(struct pollfd* __fds, unsigned long  int __nfds, const struct timespec* __timeout, const struct anonymous_typeX8* __ss);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
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
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
static void sWildCard_finalize(struct sWildCard* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj1;
void* __right_value1 = (void*)0;
char* __dec_obj2;
struct sReturnNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value0,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__1,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sReturnNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__2;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_0;
void* __right_value40 = (void*)0;
struct sType* result_type_1;
void* __right_value41 = (void*)0;
struct sType* result_type2_31;
struct sType* result_type3_32;
_Bool Value_33;
_Bool __result_obj__19;
void* __right_value42 = (void*)0;
struct CVALUE* come_value_34;
void* __right_value43 = (void*)0;
struct sType* come_value_type_35;
void* __right_value44 = (void*)0;
struct sType* __dec_obj26;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
char* type_name_37;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
void* __if_result__0_38 = (void*)0;
struct list$1sVar$ph* _foreach_var_name1_39;
struct sVar* it_42;
void* __right_value55 = (void*)0;
struct list$1sVar$ph* __dec_obj27;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct sFun* come_fun_49;
void* __if_result__1_50 = (void*)0;
struct list$1sVar$ph* _foreach_var_name2_51;
struct sVar* it_52;
void* __right_value61 = (void*)0;
struct list$1sVar$ph* __dec_obj28;
void* __right_value62 = (void*)0;
    if(    self->value) {
        come_fun_0=info->come_fun;
        result_type_1=(struct sType*)come_increment_ref_count(sType_clone(come_fun_0->mResultType));
        result_type2_31=(struct sType*)come_increment_ref_count(solve_generics(result_type_1,info->generics_type,info));
        result_type3_32=result_type2_31->mNoSolvedGenericsType;
        if(        result_type2_31->mNoSolvedGenericsType) {
            result_type3_32=result_type2_31->mNoSolvedGenericsType;
        }
        else {
            result_type3_32=result_type2_31;
        }
        Value_33=node_compile(self->value,info);
        if(        !Value_33) {
            __result_obj__19 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_31,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__19;
        }
        else {
        }
        come_value_34=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_35=(struct sType*)come_increment_ref_count(solve_generics(come_value_34->type,info->generics_type,info));
        __dec_obj26=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_34->type));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else {
            static int result_num_36=0;
            result_num_36++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value47=make_define_var(result_type2_31,((char*)(__right_value46=xsprintf("__result_obj__\%s",((char*)(__right_value45=int_to_string(result_num_36)))))),(_Bool)0,info))));
            (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_31->mClass->mName)>strlen("tuple")&&memcmp(result_type2_31->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_31,come_value_type_35,come_value_34,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2_31->mHeap) {
                    type_name_37=(char*)come_increment_ref_count(make_type_name_string(come_value_34->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value50=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value49=int_to_string(result_num_36)))))),type_name_37,come_value_34->c_value);
                    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_37 = come_decrement_ref_count(type_name_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value52=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value51=int_to_string(result_num_36)))))),come_value_34->c_value);
                    (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value54=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value53=int_to_string(result_num_36)))))),come_value_34->c_value);
                (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    _foreach_var_name1_39=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),                    it_42=list$1sVar$ph_begin(_foreach_var_name1_39);                    !list$1sVar$ph_end(_foreach_var_name1_39);                    it_42=list$1sVar$ph_next(_foreach_var_name1_39)                    ){
                        free_object(((struct sType*)(__right_value55=sType_clone(it_42->mType))),it_42->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value55,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(_foreach_var_name1_39,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __dec_obj27=info->match_it_var,
                    __if_result__0_38=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    /*b*/ come_call_finalizer3(__dec_obj27,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                /*c*/ come_call_finalizer3(__if_result__0_38,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value56=xsprintf("come_heap_final();\n"))));
                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_31->mHeap) {
                free_object(result_type2_31,((char*)(__right_value58=xsprintf("__result_obj__\%s",((char*)(__right_value57=int_to_string(result_num_36)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value60=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value59=int_to_string(result_num_36)))))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(result_type_1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_31,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_34,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_type_35,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_fun_49=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_49->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                _foreach_var_name2_51=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),                it_52=list$1sVar$ph_begin(_foreach_var_name2_51);                !list$1sVar$ph_end(_foreach_var_name2_51);                it_52=list$1sVar$ph_next(_foreach_var_name2_51)                ){
                    free_object(((struct sType*)(__right_value61=sType_clone(it_52->mType))),it_52->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value61,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(_foreach_var_name2_51,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj28=info->match_it_var,
                __if_result__1_50=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                /*b*/ come_call_finalizer3(__dec_obj28,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            /*c*/ come_call_finalizer3(__if_result__1_50,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value62=xsprintf("come_heap_final();\n"))));
            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__3;
void* __right_value3 = (void*)0;
struct sType* result_8;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
void* __right_value5 = (void*)0;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list$1sType$ph* __dec_obj8;
void* __right_value14 = (void*)0;
struct sType* __dec_obj9;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value17 = (void*)0;
struct sNode* __dec_obj11;
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
struct sType* __result_obj__18;
    if(    self==(void*)0) {
        __result_obj__3 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__3,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__3;
    }
    result_8=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_8->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj3=result_8->mOriginalLoadVarType,
        result_8->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj4=result_8->mChannelType,
        result_8->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj8=result_8->mGenericsTypes,
        result_8->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj8,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj9=result_8->mNoSolvedGenericsType,
        result_8->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj9,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj10=result_8->mSizeNum,
        result_8->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj11=result_8->mAlignas,
        result_8->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj12=result_8->mTupleName,
        result_8->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj13=result_8->mAttribute,
        result_8->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_8->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_8->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_8->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_8->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_8->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_8->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_8->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_8->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_8->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_8->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_8->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_8->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_8->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_8->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_8->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_8->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_8->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_8->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_8->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_8->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_8->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_8->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj14=result_8->mAsmName,
        result_8->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_8->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_8->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj18=result_8->mArrayNum,
        result_8->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj18,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_8->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj19=result_8->mOriginalTypeName,
        result_8->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_8->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_8->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj20=result_8->mParamTypes,
        result_8->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj20,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj24=result_8->mParamNames,
        result_8->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj25=result_8->mResultType,
        result_8->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_8->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)) {
        result_8->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__18 = (struct sType*)come_increment_ref_count(result_8);
    /*c*/ come_call_finalizer3(result_8,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__18,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__18;
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
struct list_item$1sType$ph* it_2;
struct list_item$1sType$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)) {
        prev_it_3=it_2;
        it_2=it_2->next;
        /*c*/ come_call_finalizer3(prev_it_3,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_4;
struct list_item$1sNode$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)) {
        prev_it_5=it_4;
        it_4=it_4->next;
        /*c*/ come_call_finalizer3(prev_it_5,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_6;
struct list_item$1char$ph* prev_it_7;
    it_6=self->head;
    while(    it_6!=((void*)0)) {
        prev_it_7=it_6;
        it_6=it_6->next;
        /*c*/ come_call_finalizer3(prev_it_7,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__4;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1sType$ph* result_9;
struct list_item$1sType$ph* it_10;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __result_obj__7;
    if(    self==((void*)0)) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__4,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__4;
    }
    result_9=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_10=self->head;
    while(    it_10!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        else {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        it_10=it_10->next;
    }
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(result_9);
    /*c*/ come_call_finalizer3(result_9,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__7,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__5,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj5;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj6;
void* __right_value10 = (void*)0;
struct list_item$1sType$ph* litem_13;
struct sType* __dec_obj7;
struct list$1sType$ph* __result_obj__6;
    if(    self->len==0) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_11->prev=((void*)0);
        litem_11->next=((void*)0);
        __dec_obj5=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_11;
        self->head=litem_11;
    }
    else if(    self->len==1) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj6=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj7=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__6 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__6;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_14;
struct list_item$1sType$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)) {
        prev_it_15=it_14;
        it_14=it_14->next;
        /*c*/ come_call_finalizer3(prev_it_15,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__8;
void* __right_value15 = (void*)0;
struct sNode* result_16;
struct sNode* __result_obj__9;
    if(    self==(void*)0) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__8;
    }
    result_16=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_16->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_16->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_16->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_16->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_16->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_16->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_16->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_16->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_16->kind=self->kind;
    }
    __result_obj__9 = (struct sNode*)come_increment_ref_count(result_16);
    ((result_16) ? result_16 = come_decrement_ref_count(result_16, ((struct sNode*)result_16)->finalize, ((struct sNode*)result_16)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__10;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result_17;
struct list_item$1sNode$ph* it_18;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __result_obj__13;
    if(    self==((void*)0)) {
        __result_obj__10 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__10,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__10;
    }
    result_17=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        else {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(result_17);
    /*c*/ come_call_finalizer3(result_17,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__13,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__11,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj15;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj16;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_21;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__12;
    if(    self->len==0) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj15=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1) {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj16=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj17=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__12 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__12;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_22;
struct list_item$1sNode$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)) {
        prev_it_23=it_22;
        it_22=it_22->next;
        /*c*/ come_call_finalizer3(prev_it_23,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__14;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result_24;
struct list_item$1char$ph* it_25;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* __result_obj__17;
    if(    self==((void*)0)) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__14,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__14;
    }
    result_24=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_25=self->head;
    while(    it_25!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 1032, "char*")));
        }
        it_25=it_25->next;
    }
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(result_24);
    /*c*/ come_call_finalizer3(result_24,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__17,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__15,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj22;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_28;
char* __dec_obj23;
struct list$1char$ph* __result_obj__16;
    if(    self->len==0) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_26->prev=((void*)0);
        litem_26->next=((void*)0);
        __dec_obj21=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_26;
        self->head=litem_26;
    }
    else if(    self->len==1) {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj22=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj23=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__16 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__16;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_29;
struct list_item$1char$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)) {
        prev_it_30=it_29;
        it_29=it_29->next;
        /*c*/ come_call_finalizer3(prev_it_30,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_40;
struct sVar* __result_obj__20;
struct sVar* __result_obj__21;
struct sVar* result_41;
struct sVar* __result_obj__22;
result_40 = (void*)0;
result_41 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_40,0,sizeof(struct sVar*));
        __result_obj__20 = result_40;
        return __result_obj__20;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_41,0,sizeof(struct sVar*));
    __result_obj__22 = result_41;
    return __result_obj__22;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_43;
struct sVar* __result_obj__23;
struct sVar* __result_obj__24;
struct sVar* result_44;
struct sVar* __result_obj__25;
result_43 = (void*)0;
result_44 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_43,0,sizeof(struct sVar*));
        __result_obj__23 = result_43;
        return __result_obj__23;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__24 = self->it->item;
        return __result_obj__24;
    }
    memset(&result_44,0,sizeof(struct sVar*));
    __result_obj__25 = result_44;
    return __result_obj__25;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_45;
struct list_item$1sVar$ph* prev_it_46;
    it_45=self->head;
    while(    it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        /*c*/ come_call_finalizer3(prev_it_46,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_47;
struct list_item$1sVar$ph* prev_it_48;
    it_47=self->head;
    while(    it_47!=((void*)0)) {
        prev_it_48=it_47;
        it_47=it_47->next;
        /*c*/ come_call_finalizer3(prev_it_48,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value63 = (void*)0;
char* __dec_obj29;
struct sOutputNode* __result_obj__26;
    ((struct sNodeBase*)(__right_value63=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value63,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj29=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__26 = (struct sOutputNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__26,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__26;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value64 = (void*)0;
char* __result_obj__27;
    __result_obj__27 = (char*)come_increment_ref_count(((char*)(__right_value64=__builtin_string("sOutputNode"))));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__27;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value65 = (void*)0;
char* __dec_obj30;
struct list$1sNode$ph* __dec_obj31;
struct sInlineAssembler* __result_obj__28;
    ((struct sNodeBase*)(__right_value65=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value65,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj30=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj31=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    /*b*/ come_call_finalizer3(__dec_obj31,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__28 = (struct sInlineAssembler*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__28,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__28;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value66 = (void*)0;
char* __result_obj__29;
    __result_obj__29 = (char*)come_increment_ref_count(((char*)(__right_value66=__builtin_string("sInlineAssembler"))));
    (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__29 = come_decrement_ref_count(__result_obj__29, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__29;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_53;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct CVALUE* come_value_54;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_55;
char* p_56;
_Bool dquort_57;
int num_exp_58;
void* __right_value71 = (void*)0;
struct sNode* node_59;
_Bool Value_66;
_Bool __result_obj__34;
void* __right_value72 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
char* __dec_obj32;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sType* __dec_obj33;
_Bool __result_obj__36;
    source_53=(char*)come_increment_ref_count(self->source);
    come_value_54=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 177, "struct CVALUE*"))));
    buf_55=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 179, "struct buffer*"))));
    p_56=source_53;
    while(    *p_56!=40) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
    }
    if(    *p_56==40) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
        while(        *p_56==32||*p_56==9||*p_56==10) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    dquort_57=(_Bool)0;
    num_exp_58=0;
    while(    *p_56) {
        if(        *p_56==34) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            dquort_57=!dquort_57;
        }
        else if(        dquort_57) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
        else if(        *p_56==40) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            node_59=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_58++));
            Value_66=node_compile(node_59,info);
            if(            !Value_66) {
                __result_obj__34 = (_Bool)0;
                ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_54,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__34;
            }
            else {
            }
            come_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_55,come_value_67->c_value);
            if(            *p_56==41) {
                buffer_append_char(buf_55,*p_56);
                p_56++;
            }
            ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_67,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    __dec_obj32=come_value_54->c_value,
    come_value_54->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value74=buffer_to_string(buf_55)))));
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj33=come_value_54->type,
    come_value_54->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 236, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_54->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s",come_value_54->c_value);
    __result_obj__36 = (_Bool)1;
    (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_54,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_60;
int i_61;
struct sNode* __result_obj__30;
struct sNode* default_value_62;
struct sNode* __result_obj__31;
default_value_62 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_60=self->head;
    i_61=0;
    while(    it_60!=((void*)0)) {
        if(        position==i_61) {
            __result_obj__30 = (struct sNode*)come_increment_ref_count(it_60->item);
            ((__result_obj__30) ? __result_obj__30 = come_decrement_ref_count(__result_obj__30, ((struct sNode*)__result_obj__30)->finalize, ((struct sNode*)__result_obj__30)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__30;
        }
        it_60=it_60->next;
        i_61++;
    }
    memset(&default_value_62,0,sizeof(struct sNode*));
    __result_obj__31 = (struct sNode*)come_increment_ref_count(default_value_62);
    ((default_value_62) ? default_value_62 = come_decrement_ref_count(default_value_62, ((struct sNode*)default_value_62)->finalize, ((struct sNode*)default_value_62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__31) ? __result_obj__31 = come_decrement_ref_count(__result_obj__31, ((struct sNode*)__result_obj__31)->finalize, ((struct sNode*)__result_obj__31)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__31;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_63;
int i_64;
struct sNode* __result_obj__32;
struct sNode* default_value_65;
struct sNode* __result_obj__33;
default_value_65 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_63=self->head;
    i_64=0;
    while(    it_63!=((void*)0)) {
        if(        position==i_64) {
            __result_obj__32 = (struct sNode*)come_increment_ref_count(it_63->item);
            ((__result_obj__32) ? __result_obj__32 = come_decrement_ref_count(__result_obj__32, ((struct sNode*)__result_obj__32)->finalize, ((struct sNode*)__result_obj__32)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__32;
        }
        it_63=it_63->next;
        i_64++;
    }
    memset(&default_value_65,0,sizeof(struct sNode*));
    __result_obj__33 = (struct sNode*)come_increment_ref_count(default_value_65);
    ((default_value_65) ? default_value_65 = come_decrement_ref_count(default_value_65, ((struct sNode*)default_value_65)->finalize, ((struct sNode*)default_value_65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__33;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value79 = (void*)0;
struct list_item$1CVALUE$ph* litem_68;
struct CVALUE* __dec_obj34;
void* __right_value80 = (void*)0;
struct list_item$1CVALUE$ph* litem_69;
struct CVALUE* __dec_obj35;
void* __right_value81 = (void*)0;
struct list_item$1CVALUE$ph* litem_70;
struct CVALUE* __dec_obj36;
struct list$1CVALUE$ph* __result_obj__35;
    if(    self->len==0) {
        litem_68=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value79=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj34=litem_68->item,
        litem_68->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj34,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_68;
        self->head=litem_68;
    }
    else if(    self->len==1) {
        litem_69=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value80=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj35=litem_69->item,
        litem_69->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value81=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj36=litem_70->item,
        litem_70->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj36,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__35 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__35;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value82 = (void*)0;
struct sCurrentNode2* __result_obj__37;
    ((struct sNodeBase*)(__right_value82=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value82,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__37 = (struct sCurrentNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__37,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__37;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value83 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(self->sname))));
    (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__38;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value84 = (void*)0;
char* __result_obj__39;
    __result_obj__39 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string("sCurrentNode"))));
    (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__39 = come_decrement_ref_count(__result_obj__39, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__39;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value85 = (void*)0;
char* class_name_71;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct sClass* current_stack_72;
struct sVarTable* vtable_73;
struct map$2char$phsVar$ph* _foreach_var_name3_74;
char* it_77;
char* key_80;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct sVar* value_81;
void* __right_value91 = (void*)0;
struct sType* type2_88;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct tuple2$2char$phsType$ph* item_89;
void* __right_value95 = (void*)0;
struct sType* type3_90;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct tuple2$2char$phsType$ph* item2_93;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct map$2char$phsVar$ph* _foreach_var_name4_146;
char* it_147;
char* key_148;
void* __right_value115 = (void*)0;
struct sVar* value_149;
void* __right_value116 = (void*)0;
struct sType* type2_150;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct tuple2$2char$phsType$ph* item_151;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct CVALUE* come_value_152;
void* __right_value121 = (void*)0;
char* __dec_obj47;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__81;
    info->current_stack_num++;
    class_name_71=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_72=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 644, "struct sClass*")),(char*)come_increment_ref_count(class_name_71),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
    vtable_73=info->lv_table;
    while(    vtable_73) {
        for(        _foreach_var_name3_74=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable_73->mVars),        it_77=map$2char$phsVar$ph_begin(_foreach_var_name3_74);        !map$2char$phsVar$ph_end(_foreach_var_name3_74);        it_77=map$2char$phsVar$ph_next(_foreach_var_name3_74)        ){
            key_80=it_77;
            value_81=((struct sVar*)(__right_value90=map$2char$phsVar$ph_operator_load_element(vtable_73->mVars,((char*)(__right_value89=__builtin_string(key_80))))));
            (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value90,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_88=(struct sType*)come_increment_ref_count(sType_clone(value_81->mType));
            type2_88->mPointerNum++;
            item_89=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 657, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_81->mCValueName)),(struct sType*)come_increment_ref_count(type2_88)));
            if(            value_81->mCValueName!=((void*)0)) {
                if(                strcmp(value_81->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_81->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_81->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_81->mType->mClass->mName,"va_list")||string_operator_equals(value_81->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_88->mArrayNum)==1) {
                    type3_90=(struct sType*)come_increment_ref_count(sType_clone(type2_88));
                    list$1sNode$ph_reset(type3_90->mArrayNum);
                    type3_90->mPointerNum=1;
                    type3_90->mOriginIsArray=(_Bool)1;
                    item2_93=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 677, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_81->mCValueName)),(struct sType*)come_increment_ref_count(type3_90)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_72->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_93)));
                    value_81->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_90,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_93,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_72->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_89)));
                }
            }
            /*c*/ come_call_finalizer3(type2_88,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_89,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(_foreach_var_name3_74,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_73=vtable_73->mParent;
    }
    output_struct(current_stack_72,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_71),(struct sClass*)come_increment_ref_count(current_stack_72));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_71,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_71);
    vtable_73=info->lv_table;
    while(    vtable_73) {
        for(        _foreach_var_name4_146=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable_73->mVars),        it_147=map$2char$phsVar$ph_begin(_foreach_var_name4_146);        !map$2char$phsVar$ph_end(_foreach_var_name4_146);        it_147=map$2char$phsVar$ph_next(_foreach_var_name4_146)        ){
            key_148=it_147;
            value_149=((struct sVar*)(__right_value115=map$2char$phsVar$ph_operator_load_element(vtable_73->mVars,key_148)));
            /*c*/ come_call_finalizer3(__right_value115,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_150=(struct sType*)come_increment_ref_count(sType_clone(value_149->mType));
            item_151=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 706, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_149->mCValueName),(struct sType*)come_increment_ref_count(type2_150)));
            if(            value_149->mCValueName!=((void*)0)) {
                if(                strcmp(value_149->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_149->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_149->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_149->mType->mClass->mName,"va_list")||string_operator_equals(value_149->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_149->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_150->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_149->mCValueName,value_149->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_149->mCValueName,value_149->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_150->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_149->mCValueName,value_149->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_149->mCValueName,value_149->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_150,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_151,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(_foreach_var_name4_146,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_73=vtable_73->mParent;
    }
    come_value_152=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 745, "struct CVALUE*"))));
    __dec_obj47=come_value_152->c_value,
    come_value_152->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_152->type,
    come_value_152->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 748, "struct sType*")),(char*)come_increment_ref_count(class_name_71),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_152->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_152->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
    __result_obj__81 = (_Bool)1;
    (class_name_71 = come_decrement_ref_count(class_name_71, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_72,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_152,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_75;
char* __result_obj__40;
char* __result_obj__41;
char* result_76;
char* __result_obj__42;
result_75 = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_75,0,sizeof(char*));
        __result_obj__40 = result_75;
        return __result_obj__40;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__41 = self->key_list->it->item;
        return __result_obj__41;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__42 = result_76;
    return __result_obj__42;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_78;
char* __result_obj__43;
char* __result_obj__44;
char* result_79;
char* __result_obj__45;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_78,0,sizeof(char*));
        __result_obj__43 = result_78;
        return __result_obj__43;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__44 = self->key_list->it->item;
        return __result_obj__44;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__45 = result_79;
    return __result_obj__45;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_82;
unsigned int hash_83;
unsigned int it_84;
struct sVar* __result_obj__46;
struct sVar* __result_obj__47;
struct sVar* __result_obj__48;
struct sVar* __result_obj__49;
default_value_82 = (void*)0;
    memset(&default_value_82,0,sizeof(struct sVar*));
    hash_83=string_get_hash_key(((char*)key))%self->size;
    it_84=hash_83;
    while(    (_Bool)1) {
        if(        self->item_existance[it_84]) {
            if(            string_equals(self->keys[it_84],key)) {
                __result_obj__46 = (struct sVar*)come_increment_ref_count(self->items[it_84]);
                /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__46,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__46;
            }
            it_84++;
            if(            it_84>=self->size) {
                it_84=0;
            }
            else if(            it_84==hash_83) {
                __result_obj__47 = (struct sVar*)come_increment_ref_count(default_value_82);
                /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__47,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__47;
            }
        }
        else {
            __result_obj__48 = (struct sVar*)come_increment_ref_count(default_value_82);
            /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__48,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__48;
        }
    }
    __result_obj__49 = (struct sVar*)come_increment_ref_count(default_value_82);
    /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__49,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__49;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_85;
unsigned int hash_86;
unsigned int it_87;
struct sVar* __result_obj__50;
struct sVar* __result_obj__51;
struct sVar* __result_obj__52;
struct sVar* __result_obj__53;
default_value_85 = (void*)0;
    memset(&default_value_85,0,sizeof(struct sVar*));
    hash_86=string_get_hash_key(((char*)key))%self->size;
    it_87=hash_86;
    while(    (_Bool)1) {
        if(        self->item_existance[it_87]) {
            if(            string_equals(self->keys[it_87],key)) {
                __result_obj__50 = (struct sVar*)come_increment_ref_count(self->items[it_87]);
                /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__50,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__50;
            }
            it_87++;
            if(            it_87>=self->size) {
                it_87=0;
            }
            else if(            it_87==hash_86) {
                __result_obj__51 = (struct sVar*)come_increment_ref_count(default_value_85);
                /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__51,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__51;
            }
        }
        else {
            __result_obj__52 = (struct sVar*)come_increment_ref_count(default_value_85);
            /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__52,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__52;
        }
    }
    __result_obj__53 = (struct sVar*)come_increment_ref_count(default_value_85);
    /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__53,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__53;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj37;
struct sType* __dec_obj38;
struct tuple2$2char$phsType$ph* __result_obj__54;
    __dec_obj37=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj38=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__54 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__54,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__54;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_91;
struct list_item$1sNode$ph* prev_it_92;
struct list$1sNode$ph* __result_obj__55;
    it_91=self->head;
    while(    it_91!=((void*)0)) {
        prev_it_92=it_91;
        it_91=it_91->next;
        /*c*/ come_call_finalizer3(prev_it_92,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value99 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_94;
struct tuple2$2char$phsType$ph* __dec_obj39;
void* __right_value100 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_95;
struct tuple2$2char$phsType$ph* __dec_obj40;
void* __right_value101 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_96;
struct tuple2$2char$phsType$ph* __dec_obj41;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__56;
    if(    self->len==0) {
        litem_94=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value99=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_94->prev=((void*)0);
        litem_94->next=((void*)0);
        __dec_obj39=litem_94->item,
        litem_94->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj39,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_94;
        self->head=litem_94;
    }
    else if(    self->len==1) {
        litem_95=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value100=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_95->prev=self->head;
        litem_95->next=((void*)0);
        __dec_obj40=litem_95->item,
        litem_95->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj40,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_95;
        self->head->next=litem_95;
    }
    else {
        litem_96=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value101=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_96->prev=self->tail;
        litem_96->next=((void*)0);
        __dec_obj41=litem_96->item,
        litem_96->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj41,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_96;
        self->tail=litem_96;
    }
    self->len++;
    __result_obj__56 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__56;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__57;
void* __right_value102 = (void*)0;
struct tuple2$2char$phsType$ph* result_97;
void* __right_value103 = (void*)0;
char* __dec_obj42;
void* __right_value104 = (void*)0;
struct sType* __dec_obj43;
struct tuple2$2char$phsType$ph* __result_obj__58;
    if(    self==(void*)0) {
        __result_obj__57 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__57,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__57;
    }
    result_97=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj42=result_97->v1,
        result_97->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj43=result_97->v2,
        result_97->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__58 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_97);
    /*c*/ come_call_finalizer3(result_97,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__58,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__58;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_98;
int i_99;
    for(    i_98=0;    i_98<self->size;    i_98++    ){
        if(        self->item_existance[i_98]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_98],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_99=0;    i_99<self->size;    i_99++    ){
        if(        self->item_existance[i_99]) {
            if(            1) {
                (self->keys[i_99] = come_decrement_ref_count(self->keys[i_99], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_119;
unsigned int it_120;
_Bool same_key_exist_137;
char* it2_140;
struct map$2char$phsClass$ph* __result_obj__80;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_119=string_get_hash_key(((char*)key))%self->size;
    it_120=hash_119;
    while(    (_Bool)1) {
        if(        self->item_existance[it_120]) {
            if(            string_equals(self->keys[it_120],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_120]);
                    (self->keys[it_120] = come_decrement_ref_count(self->keys[it_120], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_120]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_120]);
                    self->keys[it_120]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_120],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_120]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_120]=item;
                }
                break;
            }
            it_120++;
            if(            it_120>=self->size) {
                it_120=0;
            }
            else if(            it_120==hash_119) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_120]=(_Bool)1;
            if(            1) {
                self->keys[it_120]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_120]=key;
            }
            if(            1) {
                self->items[it_120]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_120]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_137=(_Bool)0;
    for(    it2_140=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_140=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_140,key)) {
            same_key_exist_137=(_Bool)1;
        }
    }
    if(    !same_key_exist_137) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__80 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__80;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_100;
void* __right_value107 = (void*)0;
char** keys_101;
void* __right_value108 = (void*)0;
struct sClass** items_102;
void* __right_value109 = (void*)0;
_Bool* item_existance_103;
int len_104;
char* it_107;
struct sClass* default_value_110;
void* __right_value110 = (void*)0;
struct sClass* it2_111;
unsigned int hash_116;
int n_117;
struct sClass* default_value_118;
void* __right_value111 = (void*)0;
default_value_110 = (void*)0;
default_value_118 = (void*)0;
    size_100=self->size*10;
    keys_101=(char**)come_increment_ref_count(((char**)(__right_value107=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_100)), "./comelang.h", 2153, "char**"))));
    items_102=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value108=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_100)), "./comelang.h", 2154, "struct sClass**"))));
    item_existance_103=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value109=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_100)), "./comelang.h", 2155, "_Bool*"))));
    len_104=0;
    for(    it_107=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_107=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_110,0,sizeof(struct sClass*));
        it2_111=((struct sClass*)(__right_value110=map$2char$phsClass$ph_at(self,it_107,(struct sClass*)come_increment_ref_count(default_value_110))));
        /*c*/ come_call_finalizer3(__right_value110,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_116=string_get_hash_key(((char*)it_107))%size_100;
        n_117=hash_116;
        while(        (_Bool)1) {
            if(            item_existance_103[n_117]) {
                n_117++;
                if(                n_117>=size_100) {
                    n_117=0;
                }
                else if(                n_117==hash_116) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_103[n_117]=(_Bool)1;
                keys_101[n_117]=it_107;
                items_102[n_117]=((struct sClass*)(__right_value111=map$2char$phsClass$ph_at(self,it_107,(struct sClass*)come_increment_ref_count(default_value_118))));
                /*c*/ come_call_finalizer3(__right_value111,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_104++;
                /*c*/ come_call_finalizer3(default_value_118,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_118,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_110,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_101;
    self->items=items_102;
    self->item_existance=item_existance_103;
    self->size=size_100;
    self->len=len_104;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_105;
char* __result_obj__59;
char* __result_obj__60;
char* result_106;
char* __result_obj__61;
result_105 = (void*)0;
result_106 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_105,0,sizeof(char*));
        __result_obj__59 = result_105;
        return __result_obj__59;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__60 = self->key_list->it->item;
        return __result_obj__60;
    }
    memset(&result_106,0,sizeof(char*));
    __result_obj__61 = result_106;
    return __result_obj__61;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_108;
char* __result_obj__62;
char* __result_obj__63;
char* result_109;
char* __result_obj__64;
result_108 = (void*)0;
result_109 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_108,0,sizeof(char*));
        __result_obj__62 = result_108;
        return __result_obj__62;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__63 = self->key_list->it->item;
        return __result_obj__63;
    }
    memset(&result_109,0,sizeof(char*));
    __result_obj__64 = result_109;
    return __result_obj__64;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_112;
unsigned int it_113;
struct sClass* __result_obj__65;
struct sClass* __result_obj__66;
struct sClass* __result_obj__67;
struct sClass* __result_obj__68;
    hash_112=string_get_hash_key(((char*)key))%self->size;
    it_113=hash_112;
    while(    (_Bool)1) {
        if(        self->item_existance[it_113]) {
            if(            string_equals(self->keys[it_113],key)) {
                __result_obj__65 = (struct sClass*)come_increment_ref_count(self->items[it_113]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__65,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__65;
            }
            it_113++;
            if(            it_113>=self->size) {
                it_113=0;
            }
            else if(            it_113==hash_112) {
                __result_obj__66 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__66,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__66;
            }
        }
        else {
            __result_obj__67 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__67,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__67;
        }
    }
    __result_obj__68 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_114;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_115;
    it_114=self->head;
    while(    it_114!=((void*)0)) {
        prev_it_115=it_114;
        it_114=it_114->next;
        /*c*/ come_call_finalizer3(prev_it_115,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_121;
struct list_item$1char$ph* it_122;
struct list$1char$ph* __result_obj__72;
    it2_121=0;
    it_122=self->head;
    while(    it_122!=((void*)0)) {
        if(        string_equals(it_122->item,item)) {
            list$1char$ph_delete(self,it2_121,it2_121+1);
            break;
        }
        it2_121++;
        it_122=it_122->next;
    }
    __result_obj__72 = self;
    return __result_obj__72;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_123;
struct list$1char$ph* __result_obj__69;
struct list_item$1char$ph* it_126;
int i_127;
struct list_item$1char$ph* prev_it_128;
struct list_item$1char$ph* it_129;
int i_130;
struct list_item$1char$ph* prev_it_131;
struct list_item$1char$ph* it_132;
struct list_item$1char$ph* head_prev_it_133;
struct list_item$1char$ph* tail_it_134;
int i_135;
struct list_item$1char$ph* prev_it_136;
struct list$1char$ph* __result_obj__71;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_123=tail;
        tail=head;
        head=tmp_123;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__69 = self;
        return __result_obj__69;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_126=self->head;
        i_127=0;
        while(        it_126!=((void*)0)) {
            if(            i_127<tail) {
                prev_it_128=it_126;
                it_126=it_126->next;
                i_127++;
                /*c*/ come_call_finalizer3(prev_it_128,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_127==tail) {
                self->head=it_126;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_126=it_126->next;
                i_127++;
            }
        }
    }
    else if(    tail==self->len) {
        it_129=self->head;
        i_130=0;
        while(        it_129!=((void*)0)) {
            if(            i_130==head) {
                self->tail=it_129->prev;
                self->tail->next=((void*)0);
            }
            if(            i_130>=head) {
                prev_it_131=it_129;
                it_129=it_129->next;
                i_130++;
                /*c*/ come_call_finalizer3(prev_it_131,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_129=it_129->next;
                i_130++;
            }
        }
    }
    else {
        it_132=self->head;
        head_prev_it_133=((void*)0);
        tail_it_134=((void*)0);
        i_135=0;
        while(        it_132!=((void*)0)) {
            if(            i_135==head) {
                head_prev_it_133=it_132->prev;
            }
            if(            i_135==tail) {
                tail_it_134=it_132;
            }
            if(            i_135>=head&&i_135<tail) {
                prev_it_136=it_132;
                it_132=it_132->next;
                i_135++;
                /*c*/ come_call_finalizer3(prev_it_136,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_132=it_132->next;
                i_135++;
            }
        }
        if(        head_prev_it_133!=((void*)0)) {
            head_prev_it_133->next=tail_it_134;
        }
        if(        tail_it_134!=((void*)0)) {
            tail_it_134->prev=head_prev_it_133;
        }
    }
    __result_obj__71 = self;
    return __result_obj__71;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_124;
struct list_item$1char$ph* prev_it_125;
struct list$1char$ph* __result_obj__70;
    it_124=self->head;
    while(    it_124!=((void*)0)) {
        prev_it_125=it_124;
        it_124=it_124->next;
        /*c*/ come_call_finalizer3(prev_it_125,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = self;
    return __result_obj__70;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_138;
char* __result_obj__73;
char* __result_obj__74;
char* result_139;
char* __result_obj__75;
result_138 = (void*)0;
result_139 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_138,0,sizeof(char*));
        __result_obj__73 = result_138;
        return __result_obj__73;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_139,0,sizeof(char*));
    __result_obj__75 = result_139;
    return __result_obj__75;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_141;
char* __result_obj__76;
char* __result_obj__77;
char* result_142;
char* __result_obj__78;
result_141 = (void*)0;
result_142 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_141,0,sizeof(char*));
        __result_obj__76 = result_141;
        return __result_obj__76;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__77 = self->it->item;
        return __result_obj__77;
    }
    memset(&result_142,0,sizeof(char*));
    __result_obj__78 = result_142;
    return __result_obj__78;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value112 = (void*)0;
struct list_item$1char$ph* litem_143;
char* __dec_obj44;
void* __right_value113 = (void*)0;
struct list_item$1char$ph* litem_144;
char* __dec_obj45;
void* __right_value114 = (void*)0;
struct list_item$1char$ph* litem_145;
char* __dec_obj46;
struct list$1char$ph* __result_obj__79;
    if(    self->len==0) {
        litem_143=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value112=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_143->prev=((void*)0);
        litem_143->next=((void*)0);
        __dec_obj44=litem_143->item,
        litem_143->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_143;
        self->head=litem_143;
    }
    else if(    self->len==1) {
        litem_144=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value113=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_144->prev=self->head;
        litem_144->next=((void*)0);
        __dec_obj45=litem_144->item,
        litem_144->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_144;
        self->head->next=litem_144;
    }
    else {
        litem_145=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value114=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_145->prev=self->tail;
        litem_145->next=((void*)0);
        __dec_obj46=litem_145->item,
        litem_145->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_145;
        self->tail=litem_145;
    }
    self->len++;
    __result_obj__79 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__79;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value124 = (void*)0;
struct sLineNode* __result_obj__82;
    ((struct sNodeBase*)(__right_value124=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value124,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__82 = (struct sLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value125 = (void*)0;
char* __result_obj__83;
    __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string("sLineNode"))));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__83;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct CVALUE* come_value_153;
void* __right_value128 = (void*)0;
char* __dec_obj49;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__84;
    come_value_153=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 266, "struct CVALUE*"))));
    __dec_obj49=come_value_153->c_value,
    come_value_153->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj50=come_value_153->type,
    come_value_153->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 269, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_153->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
    add_come_last_code(info,"%s",come_value_153->c_value);
    __result_obj__84 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_153,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__84;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value132 = (void*)0;
struct sSNameNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value132=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value132,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__85 = (struct sSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value133 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value133=__builtin_string("sSNameNode"))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__86;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct CVALUE* come_value_154;
void* __right_value136 = (void*)0;
char* __dec_obj51;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct sType* __dec_obj52;
_Bool __result_obj__87;
    come_value_154=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 294, "struct CVALUE*"))));
    __dec_obj51=come_value_154->c_value,
    come_value_154->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj52=come_value_154->type,
    come_value_154->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 297, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_154->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
    add_come_last_code(info,"%s",come_value_154->c_value);
    __result_obj__87 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_154,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__87;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value140 = (void*)0;
struct sFuncNode* __result_obj__88;
    ((struct sNodeBase*)(__right_value140=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value140,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__88 = (struct sFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value141 = (void*)0;
char* __result_obj__89;
    __result_obj__89 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string("sFuncNode"))));
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__89;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct CVALUE* come_value_155;
void* __right_value144 = (void*)0;
char* __dec_obj53;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sType* __dec_obj54;
_Bool __result_obj__90;
    come_value_155=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 322, "struct CVALUE*"))));
    __dec_obj53=come_value_155->c_value,
    come_value_155->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj54=come_value_155->type,
    come_value_155->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 325, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_155->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
    add_come_last_code(info,"%s",come_value_155->c_value);
    __result_obj__90 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_155,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__90;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value148 = (void*)0;
struct sWildCard* __result_obj__91;
    ((struct sNodeBase*)(__right_value148=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value148,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__91 = (struct sWildCard*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__91,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__91;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value149 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string("sWildCard"))));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__92;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct sNode* value_node_156;
_Bool Value_157;
_Bool __result_obj__93;
_Bool __result_obj__94;
    value_node_156=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value150=xsprintf("Value"))),info));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_157=node_compile(value_node_156,info);
    if(    !Value_157) {
        __result_obj__93 = (_Bool)0;
        ((value_node_156) ? value_node_156 = come_decrement_ref_count(value_node_156, ((struct sNode*)value_node_156)->finalize, ((struct sNode*)value_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__93;
    }
    else {
    }
    __result_obj__94 = (_Bool)1;
    ((value_node_156) ? value_node_156 = come_decrement_ref_count(value_node_156, ((struct sNode*)value_node_156)->finalize, ((struct sNode*)value_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__94;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value152 = (void*)0;
struct sCallerFuncNode* __result_obj__95;
    ((struct sNodeBase*)(__right_value152=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value152,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__95 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__95,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__95;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value153 = (void*)0;
char* __result_obj__96;
    __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("sCallerFuncNode"))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__96;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct CVALUE* come_value_158;
void* __right_value156 = (void*)0;
char* __dec_obj55;
void* __right_value157 = (void*)0;
char* __dec_obj56;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__97;
    come_value_158=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 374, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj55=come_value_158->c_value,
        come_value_158->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj56=come_value_158->c_value,
        come_value_158->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj57=come_value_158->type,
    come_value_158->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 382, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_158->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
    add_come_last_code(info,"%s",come_value_158->c_value);
    __result_obj__97 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_158,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__97;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value161 = (void*)0;
struct sCallerLineNode* __result_obj__98;
    ((struct sNodeBase*)(__right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value161,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__98 = (struct sCallerLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__98,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__98;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct CVALUE* come_value_159;
void* __right_value164 = (void*)0;
char* __dec_obj58;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__99;
    come_value_159=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 403, "struct CVALUE*"))));
    __dec_obj58=come_value_159->c_value,
    come_value_159->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj59=come_value_159->type,
    come_value_159->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 406, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_159->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
    add_come_last_code(info,"%s",come_value_159->c_value);
    __result_obj__99 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_159,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__99;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value168 = (void*)0;
char* __result_obj__100;
    __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string("sCallerLineNode"))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__100;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value169 = (void*)0;
struct sCallerSNameNode* __result_obj__101;
    ((struct sNodeBase*)(__right_value169=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value169,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__101 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__101,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__101;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct CVALUE* come_value_160;
void* __right_value172 = (void*)0;
char* __dec_obj60;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__102;
    come_value_160=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 431, "struct CVALUE*"))));
    __dec_obj60=come_value_160->c_value,
    come_value_160->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj61=come_value_160->type,
    come_value_160->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 434, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_160->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
    add_come_last_code(info,"%s",come_value_160->c_value);
    __result_obj__102 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_160,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__102;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value176 = (void*)0;
char* __result_obj__103;
    __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string("sCallerSNameNode"))));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__103;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __dec_obj62;
void* __right_value189 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj68;
struct list$1sType$ph* __dec_obj69;
struct buffer* __dec_obj70;
struct sFunCallNode* __result_obj__110;
    ((struct sNodeBase*)(__right_value177=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value177,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj62=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj68=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj68,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj69=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj69,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj70=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /*b*/ come_call_finalizer3(__dec_obj70,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__110 = (struct sFunCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__110,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__110;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value190 = (void*)0;
char* __result_obj__111;
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string("sFunCallNode"))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__111;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_171;
struct list$1tuple2$2char$phsNode$ph$ph* params_172;
struct buffer* method_block_173;
int method_block_sline_174;
struct sVar* var__175;
struct sType* lambda_type_176;
void* __right_value191 = (void*)0;
_Bool __result_obj__112;
void* __right_value192 = (void*)0;
struct sType* result_type_177;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct list$1CVALUE$ph* come_params_178;
void* __right_value195 = (void*)0;
_Bool __result_obj__114;
int i_181;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name5_182;
struct tuple2$2char$phsNode$ph* it_185;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label_188=0;
struct sNode* node_189=0;
_Bool Value_190;
_Bool __result_obj__121;
void* __right_value196 = (void*)0;
struct CVALUE* come_value_191;
void* __right_value197 = (void*)0;
struct sType* __dec_obj71;
void* __right_value198 = (void*)0;
_Bool _if_conditional1;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
_Bool _if_conditional2;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct buffer* buf_198;
int j_199;
struct list$1CVALUE$ph* _foreach_var_name6_200;
struct CVALUE* it_203;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_206;
void* __right_value209 = (void*)0;
char* __dec_obj72;
void* __right_value210 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__132;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sGenericsFun* generics_fun_207;
_Bool method_generics_210;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sType$ph* method_generics_types_211;
void* __right_value215 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_212=0;
struct sGenericsFun* gfun_213=0;
char* generics_fun_name_214;
void* __right_value216 = (void*)0;
struct sFun* fun_215;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1CVALUE$ph* come_params_218;
void* __right_value219 = (void*)0;
struct sFun* fun_219;
_Bool no_output_come_code_220;
_Bool __result_obj__141;
void* __right_value220 = (void*)0;
struct CVALUE* method_block_node_221;
void* __right_value221 = (void*)0;
struct sType* method_block_lambda_type_228;
void* __right_value222 = (void*)0;
struct sType* method_block_result_type_229;
void* __right_value223 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_230;
struct sType* generics_fun_method_block_result_type_231;
int method_generics_num_232;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
int n_241;
struct list$1sType$ph* _foreach_var_name7_242;
struct sType* it_245;
int method_generics_num_248;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct list$1CVALUE$ph* come_params_249;
int i_250;
struct sType* result_type_251;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name8_252;
struct tuple2$2char$phsNode$ph* it_253;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_254=0;
struct sNode* node_255=0;
_Bool Value_256;
_Bool __result_obj__155;
void* __right_value235 = (void*)0;
struct CVALUE* come_value_257;
void* __right_value236 = (void*)0;
struct sType* __dec_obj78;
int method_generics_num_261;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
int n_262;
struct list$1sType$ph* _foreach_var_name9_263;
struct sType* it_264;
int method_generics_num_265;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_268=0;
struct sGenericsFun* gfun_269=0;
char* __dec_obj82;
void* __right_value247 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_270=0;
struct sGenericsFun* gfun_271=0;
char* __dec_obj83;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1CVALUE$ph* come_params_272;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name10_273;
struct tuple2$2char$phsNode$ph* it_274;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_275=0;
struct sNode* node_276=0;
_Bool Value_277;
_Bool __result_obj__158;
void* __right_value250 = (void*)0;
struct CVALUE* come_value_278;
void* __right_value251 = (void*)0;
struct sType* __dec_obj84;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_279;
int j_280;
struct list$1CVALUE$ph* _foreach_var_name11_281;
struct CVALUE* it_282;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_283;
void* __right_value256 = (void*)0;
char* __dec_obj85;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __dec_obj86;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj87;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj88;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj89;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* __dec_obj90;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sType* __dec_obj91;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sType* __dec_obj92;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* __dec_obj93;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sType* __dec_obj94;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sType* __dec_obj95;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* __dec_obj96;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj97;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj98;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj99;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj100;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj101;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj102;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj103;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj104;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj105;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj106;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj107;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sType* __dec_obj108;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __dec_obj109;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sType* __dec_obj110;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* __dec_obj111;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __dec_obj112;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __dec_obj113;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __dec_obj114;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sType* __dec_obj115;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sType* __dec_obj116;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj117;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj118;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* __dec_obj119;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sType* __dec_obj120;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __dec_obj121;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sType* __dec_obj122;
_Bool __result_obj__159;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1CVALUE$ph* come_params_284;
int i_285;
struct sType* result_type_286;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name12_287;
struct tuple2$2char$phsNode$ph* it_288;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_289=0;
struct sNode* node_290=0;
_Bool Value_291;
_Bool __result_obj__160;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_292;
void* __right_value362 = (void*)0;
struct sType* __dec_obj123;
struct sType* __dec_obj124;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct buffer* buf_293;
int j_294;
struct list$1CVALUE$ph* _foreach_var_name13_295;
struct CVALUE* it_296;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_297;
void* __right_value367 = (void*)0;
char* __dec_obj125;
struct sType* __dec_obj126;
_Bool __result_obj__161;
void* __right_value368 = (void*)0;
char* __dec_obj127;
void* __right_value369 = (void*)0;
char* __dec_obj128;
char* p_298;
int version_299;
char* p2_300;
int i_302;
void* __right_value370 = (void*)0;
char* new_fun_name_303;
void* __right_value371 = (void*)0;
_Bool _if_conditional3;
void* __right_value372 = (void*)0;
char* __dec_obj129;
void* __right_value373 = (void*)0;
char* new_fun_name_310;
void* __right_value374 = (void*)0;
_Bool _if_conditional4;
void* __right_value375 = (void*)0;
char* __dec_obj130;
void* __right_value376 = (void*)0;
_Bool __result_obj__170;
int i_311;
void* __right_value377 = (void*)0;
char* new_fun_name_312;
void* __right_value378 = (void*)0;
_Bool _if_conditional5;
void* __right_value379 = (void*)0;
char* __dec_obj131;
void* __right_value380 = (void*)0;
struct sFun* fun_313;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct list$1CVALUE$ph* come_params_314;
int i_315;
struct sType* result_type_316;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name14_317;
struct tuple2$2char$phsNode$ph* it_318;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_319=0;
struct sNode* node_320=0;
_Bool Value_321;
_Bool __result_obj__171;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_322;
void* __right_value384 = (void*)0;
struct sType* __dec_obj132;
struct sType* __dec_obj133;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct buffer* buf_323;
int j_324;
struct list$1CVALUE$ph* _foreach_var_name15_325;
struct CVALUE* it_326;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_327;
void* __right_value389 = (void*)0;
char* __dec_obj134;
struct sType* __dec_obj135;
_Bool __result_obj__172;
void* __right_value390 = (void*)0;
struct sType* result_type_328;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1sType$ph* param_types_329;
struct list$1sType$ph* _foreach_var_name16_330;
struct sType* it_331;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* it2_332;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj136;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1CVALUE$ph* come_params_333;
int i_334;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name17_335;
struct tuple2$2char$phsNode$ph* it_336;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_337=0;
struct sNode* node_338=0;
_Bool Value_339;
_Bool __result_obj__173;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_340;
void* __right_value400 = (void*)0;
struct sType* __dec_obj137;
int n_341;
struct list$1char$ph* _foreach_var_name18_342;
char* it_343;
void* __right_value401 = (void*)0;
_Bool _if_conditional6;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
_Bool _if_conditional7;
void* __right_value408 = (void*)0;
int i_349;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name19_350;
struct tuple2$2char$phsNode$ph* it_351;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_352=0;
struct sNode* node_353=0;
_Bool Value_354;
_Bool __result_obj__176;
void* __right_value409 = (void*)0;
struct CVALUE* come_value_355;
void* __right_value410 = (void*)0;
struct sType* __dec_obj139;
void* __right_value411 = (void*)0;
_Bool _if_conditional8;
_Bool Value_356;
_Bool __result_obj__177;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_357;
void* __right_value413 = (void*)0;
struct sType* __dec_obj140;
void* __right_value414 = (void*)0;
_Bool _if_conditional9;
void* __right_value415 = (void*)0;
_Bool _if_conditional10;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
_Bool _if_conditional11;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
_Bool _if_conditional12;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
char* default_param_358;
void* __right_value426 = (void*)0;
char* param_name_365;
void* __right_value427 = (void*)0;
_Bool _if_conditional13;
struct buffer* source_366;
char* p_367;
char* head_368;
int sline_369;
void* __right_value428 = (void*)0;
struct buffer* __dec_obj141;
void* __right_value429 = (void*)0;
struct sNode* node_370;
_Bool Value_371;
_Bool __result_obj__182;
struct buffer* __dec_obj142;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_372;
void* __right_value431 = (void*)0;
struct sType* __dec_obj143;
void* __right_value432 = (void*)0;
_Bool _if_conditional14;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
_Bool _if_conditional15;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
_Bool _if_conditional16;
void* __right_value441 = (void*)0;
_Bool __result_obj__183;
void* __right_value442 = (void*)0;
_Bool __result_obj__184;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value447 = (void*)0;
struct sNode* current_stack_frame_node_373;
_Bool Value_375;
_Bool __result_obj__187;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_376;
void* __right_value449 = (void*)0;
struct sType* __dec_obj145;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct buffer* method_block2_377;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* method_block_type_378;
void* __right_value454 = (void*)0;
char* class_name_379;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sClass* current_stack_frame_struct_386;
void* __right_value457 = (void*)0;
int num_method_block_387;
void* __right_value458 = (void*)0;
_Bool __result_obj__196;
void* __right_value459 = (void*)0;
struct sType* result_type_388;
void* __right_value460 = (void*)0;
struct list$1sType$ph* param_types_389;
struct list$1char$ph* param_names_390;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct buffer* all_alhabet_sname_391;
char* p_392;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1sType$ph* _foreach_var_name20_393;
struct sType* it_394;
struct sType* param_type_395;
void* __right_value465 = (void*)0;
char* param_name_396;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
char* param_name_397;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* param_name_398;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* source3_399;
char* p_400;
char* head_401;
int sline_402;
struct buffer* __dec_obj146;
void* __right_value472 = (void*)0;
struct sNode* node_403;
_Bool Value_404;
_Bool __result_obj__197;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* method_block_name_405;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value2_406;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sFun* fun2_407;
void* __right_value479 = (void*)0;
_Bool __result_obj__198;
struct sType* method_block_type2_408;
void* __right_value480 = (void*)0;
char* __dec_obj147;
void* __right_value481 = (void*)0;
struct sType* __dec_obj148;
struct buffer* __dec_obj149;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct buffer* buf_409;
void* __right_value484 = (void*)0;
char* __dec_obj150;
void* __right_value485 = (void*)0;
char* __dec_obj151;
void* __right_value486 = (void*)0;
char* __dec_obj152;
int j_410;
struct list$1CVALUE$ph* _foreach_var_name21_411;
struct CVALUE* it_412;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value489 = (void*)0;
char* __dec_obj153;
void* __right_value490 = (void*)0;
struct sType* __dec_obj154;
void* __right_value491 = (void*)0;
char* __dec_obj155;
_Bool __result_obj__199;
memset(&i_302, 0, sizeof(int));
    fun_name_171=(char*)come_increment_ref_count(self->fun_name);
    params_172=self->params;
    method_block_173=self->method_block;
    method_block_sline_174=self->method_block_sline;
    var__175=get_variable_from_table(info->lv_table,fun_name_171);
    if(    var__175==((void*)0)) {
        var__175=get_variable_from_table(info->gv_table,fun_name_171);
    }
    if(    var__175) {
        lambda_type_176=var__175->mType;
        if(        string_operator_not_equals(lambda_type_176->mClass->mName,"lambda")) {
            ((struct tuple2$2int$bool$*)(__right_value191=err_msg(info,"%s is not lambda, can't call",fun_name_171)));
            /*c*/ come_call_finalizer3(__right_value191,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__112 = (_Bool)1;
            (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__112;
        }
        result_type_177=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_176->mResultType));
        result_type_177->mStatic=(_Bool)0;
        come_params_178=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 505, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_176->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_172)&&!lambda_type_176->mVarArgs) {
            ((struct tuple2$2int$bool$*)(__right_value195=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_171,list$1sType$ph_length(lambda_type_176->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_172))));
            /*c*/ come_call_finalizer3(__right_value195,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__114 = (_Bool)1;
            /*c*/ come_call_finalizer3(result_type_177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_178,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__114;
        }
        i_181=0;
        for(        _foreach_var_name5_182=params_172,        it_185=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name5_182);        !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name5_182);        it_185=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name5_182)        ){
            multiple_assign_var1=it_185;
            label_188=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_189=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_190=node_compile(node_189,info);
            if(            !Value_190) {
                __result_obj__121 = (_Bool)0;
                (label_188 = come_decrement_ref_count(label_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_189) ? node_189 = come_decrement_ref_count(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_178,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__121;
            }
            else {
            }
            come_value_191=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj71=come_value_191->type,
            come_value_191->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_191->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            (_if_conditional1=(lambda_type_176->mVarArgs&&((struct sType*)(__right_value198=list$1sType$ph_operator_load_element(lambda_type_176->mParamTypes,i_181)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value198,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
            }
            else {
                check_assign_type(((char*)(__right_value201=xsprintf("\%s calling param #\%s",((char*)(__right_value199=string_to_string(fun_name_171))),((char*)(__right_value200=int_to_string(i_181)))))),((struct sType*)(__right_value202=list$1sType$ph_operator_load_element(lambda_type_176->mParamTypes,i_181))),come_value_191->type,come_value_191,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value202,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional2=(((struct sType*)(__right_value203=list$1sType$ph_operator_load_element(lambda_type_176->mParamTypes,i_181)))->mHeap&&come_value_191->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value203,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)(__right_value204=list$1sType$ph_operator_load_element(lambda_type_176->mParamTypes,i_181))),come_value_191->type,come_value_191,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value204,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params_178,(struct CVALUE*)come_increment_ref_count(come_value_191));
            i_181++;
            (label_188 = come_decrement_ref_count(label_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_189) ? node_189 = come_decrement_ref_count(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_191,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_198=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 540, "struct buffer*"))));
        buffer_append_str(buf_198,var__175->mCValueName);
        buffer_append_str(buf_198,"(");
        j_199=0;
        for(        _foreach_var_name6_200=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_178),        it_203=list$1CVALUE$ph_begin(_foreach_var_name6_200);        !list$1CVALUE$ph_end(_foreach_var_name6_200);        it_203=list$1CVALUE$ph_next(_foreach_var_name6_200)        ){
            buffer_append_str(buf_198,it_203->c_value);
            if(            j_199!=list$1CVALUE$ph_length(come_params_178)-1) {
                buffer_append_str(buf_198,",");
            }
            j_199++;
        }
        /*c*/ come_call_finalizer3(_foreach_var_name6_200,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_198,")");
        come_value_206=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 557, "struct CVALUE*"))));
        __dec_obj72=come_value_206->c_value,
        come_value_206->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_198));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj73=come_value_206->type,
        come_value_206->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_177));
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_206->type->mStatic=(_Bool)0;
        come_value_206->var=((void*)0);
        if(        lambda_type_176->mResultType->mHeap) {
            append_object_to_right_values2(come_value_206,(struct sType*)come_increment_ref_count(lambda_type_176->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_206->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        info->calling_fun=((void*)0);
        __result_obj__132 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_178,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_198,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_206,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__132;
        /*c*/ come_call_finalizer3(result_type_177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_178,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_198,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_206,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_207=((struct sGenericsFun*)(__right_value212=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value211=__builtin_string(fun_name_171))),((void*)0))));
    (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value212,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_210=(_Bool)0;
    if(    generics_fun_207) {
        method_generics_210=list$1char$ph_length(generics_fun_207->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_210) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_211=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 582, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value215=make_method_generics_function((char*)come_increment_ref_count(fun_name_171),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_211),info)));
            name_212=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_213=multiple_assign_var2->v2;
            /*c*/ come_call_finalizer3(__right_value215,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_214=(char*)come_increment_ref_count(name_212);
            fun_215=((struct sFun*)(__right_value216=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_214,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value216,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_173) {
                come_params_218=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 589, "struct list$1CVALUE$ph*"))));
                fun_219=((struct sFun*)(__right_value219=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_214,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value219,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_220=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_173,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_218),fun_219,fun_name_171,method_block_sline_174,info,(_Bool)1)) {
                    __result_obj__141 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_218,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_211,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_214 = come_decrement_ref_count(generics_fun_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__141;
                }
                info->no_output_come_code=no_output_come_code_220;
                method_block_node_221=((struct CVALUE*)(__right_value220=list$1CVALUE$ph_operator_load_element(come_params_218,-1)));
                /*c*/ come_call_finalizer3(__right_value220,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_228=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_221->type));
                method_block_result_type_229=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_230=((struct sType*)(__right_value223=list$1sType$ph_operator_load_element(generics_fun_207->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value223,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_231=generics_fun_method_block_lambda_type_230->mResultType;
                if(                generics_fun_method_block_result_type_231->mClass->mMethodGenerics) {
                    method_generics_num_232=generics_fun_method_block_result_type_231->mClass->mMethodGenericsNum;
                    list$1sType$ph_operator_store_element(method_generics_types_211,method_generics_num_232,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_229)));
                    /*c*/ come_call_finalizer3(__right_value227,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                n_241=0;
                for(                _foreach_var_name7_242=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type_230->mParamTypes),                it_245=list$1sType$ph_begin(_foreach_var_name7_242);                !list$1sType$ph_end(_foreach_var_name7_242);                it_245=list$1sType$ph_next(_foreach_var_name7_242)                ){
                    if(                    it_245->mClass->mMethodGenerics) {
                        method_generics_num_248=it_245->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(method_generics_types_211,method_generics_num_248,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value231=list$1sType$ph_operator_load_element(method_block_lambda_type_228->mParamTypes,n_241))))));
                        /*c*/ come_call_finalizer3(__right_value229,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value230,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value231,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_241++;
                }
                /*c*/ come_call_finalizer3(_foreach_var_name7_242,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_218,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_228,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_229,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_249=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 621, "struct list$1CVALUE$ph*"))));
            i_250=0;
            result_type_251=((void*)0);
            for(            _foreach_var_name8_252=params_172,            it_253=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name8_252);            !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name8_252);            it_253=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name8_252)            ){
                multiple_assign_var3=it_253;
                label_254=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_255=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_256=node_compile(node_255,info);
                if(                !Value_256) {
                    __result_obj__155 = (_Bool)0;
                    (label_254 = come_decrement_ref_count(label_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_255) ? node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_211,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_214 = come_decrement_ref_count(generics_fun_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_249,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__155;
                }
                else {
                }
                come_value_257=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj78=come_value_257->type,
                come_value_257->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_257->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                list$1CVALUE$ph_add(come_params_249,(struct CVALUE*)come_increment_ref_count(come_value_257));
                (label_254 = come_decrement_ref_count(label_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_255) ? node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_257,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            generics_fun_207->mResultType->mClass->mMethodGenerics) {
                method_generics_num_261=generics_fun_207->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph_operator_store_element(method_generics_types_211,method_generics_num_261,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    /*c*/ come_call_finalizer3(__right_value240,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            n_262=0;
            for(            _foreach_var_name9_263=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_207->mParamTypes),            it_264=list$1sType$ph_begin(_foreach_var_name9_263);            !list$1sType$ph_end(_foreach_var_name9_263);            it_264=list$1sType$ph_next(_foreach_var_name9_263)            ){
                if(                it_264->mClass->mMethodGenerics) {
                    method_generics_num_265=it_264->mClass->mMethodGenericsNum;
                    if(                    n_262<list$1CVALUE$ph_length(come_params_249)) {
                        list$1sType$ph_operator_store_element(method_generics_types_211,method_generics_num_265,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value244=list$1CVALUE$ph_operator_load_element(come_params_249,n_262)))->type)));
                        /*c*/ come_call_finalizer3(__right_value242,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value243,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value244,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_262++;
            }
            /*c*/ come_call_finalizer3(_foreach_var_name9_263,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_214);
            (name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value246=make_method_generics_function((char*)come_increment_ref_count(fun_name_171),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_211),info)));
            name_268=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_269=multiple_assign_var4->v2;
            /*c*/ come_call_finalizer3(__right_value246,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj82=fun_name_171,
            fun_name_171=(char*)come_increment_ref_count(name_268);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_211,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_214 = come_decrement_ref_count(generics_fun_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_249,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_268 = come_decrement_ref_count(name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value247=make_method_generics_function((char*)come_increment_ref_count(fun_name_171),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_270=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_271=multiple_assign_var5->v2;
            /*c*/ come_call_finalizer3(__right_value247,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj83=fun_name_171,
            fun_name_171=(char*)come_increment_ref_count(name_270);
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_270 = come_decrement_ref_count(name_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_171,"__builtin_memmove")||string_operator_equals(fun_name_171,"__builtin_memset")||string_operator_equals(fun_name_171,"__builtin_ffs")||string_operator_equals(fun_name_171,"__builtin_ffsl")||string_operator_equals(fun_name_171,"__builtin_ffsll")||string_operator_equals(fun_name_171,"__builtin_bswap16")||string_operator_equals(fun_name_171,"__builtin_bswap32")||string_operator_equals(fun_name_171,"__builtin_bswap64")||string_operator_equals(fun_name_171,"__builtin_constant_p")||string_operator_equals(fun_name_171,"__builtin_expect")||string_operator_equals(fun_name_171,"__builtin___memset_chk")||string_operator_equals(fun_name_171,"__builtin_object_size")||string_operator_equals(fun_name_171,"__builtin___memcpy_chk")||string_operator_equals(fun_name_171,"__builtin___strncpy_chk")||string_operator_equals(fun_name_171,"__builtin___strncat_chk")||string_operator_equals(fun_name_171,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_171,"__builtin_strrchr")||string_operator_equals(fun_name_171,"__builtin_clz")||string_operator_equals(fun_name_171,"__dsb")||string_operator_equals(fun_name_171,"__isb")||string_operator_equals(fun_name_171,"__dmb")||(strlen(fun_name_171)==strlen("__builtin_arm_")&&memcmp(fun_name_171,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_171,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_171,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_171,"__c11_atomic_store")||string_operator_equals(fun_name_171,"__c11_atomic_load")||string_operator_equals(fun_name_171,"__c11_atomic_exchange")||string_operator_equals(fun_name_171,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_171,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_171,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_171,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_171,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_171,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_171,"__c11_atomic_fetch_xor")) {
        come_params_272=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 696, "struct list$1CVALUE$ph*"))));
        for(        _foreach_var_name10_273=params_172,        it_274=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name10_273);        !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name10_273);        it_274=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name10_273)        ){
            multiple_assign_var6=it_274;
            label_275=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_276=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_277=node_compile(node_276,info);
            if(            !Value_277) {
                __result_obj__158 = (_Bool)0;
                (label_275 = come_decrement_ref_count(label_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_272,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__158;
            }
            else {
            }
            come_value_278=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj84=come_value_278->type,
            come_value_278->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_278->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_272,(struct CVALUE*)come_increment_ref_count(come_value_278));
            (label_275 = come_decrement_ref_count(label_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_278,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_279=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 711, "struct buffer*"))));
        buffer_append_str(buf_279,fun_name_171);
        buffer_append_str(buf_279,"(");
        j_280=0;
        for(        _foreach_var_name11_281=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_272),        it_282=list$1CVALUE$ph_begin(_foreach_var_name11_281);        !list$1CVALUE$ph_end(_foreach_var_name11_281);        it_282=list$1CVALUE$ph_next(_foreach_var_name11_281)        ){
            buffer_append_str(buf_279,it_282->c_value);
            if(            j_280!=list$1CVALUE$ph_length(come_params_272)-1) {
                buffer_append_str(buf_279,",");
            }
            j_280++;
        }
        /*c*/ come_call_finalizer3(_foreach_var_name11_281,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_279,")");
        come_value_283=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 728, "struct CVALUE*"))));
        __dec_obj85=come_value_283->c_value,
        come_value_283->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_279));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_171,"__builtin_memmove")||string_operator_equals(fun_name_171,"__builtin_memset")) {
            __dec_obj86=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_ffs")) {
            __dec_obj87=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 735, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_ffsl")) {
            __dec_obj88=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_ffsll")) {
            __dec_obj89=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_bswap16")) {
            __dec_obj90=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_bswap32")) {
            __dec_obj91=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_bswap64")) {
            __dec_obj92=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_constant_p")) {
            __dec_obj93=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_expect")) {
            __dec_obj94=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 756, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin___memset_chk")) {
            __dec_obj95=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 759, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_283->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_object_size")) {
            __dec_obj96=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 763, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin___memcpy_chk")) {
            __dec_obj97=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 766, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_283->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_171,"__builtin___strncpy_chk")) {
            __dec_obj98=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_283->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_171,"__builtin___strncat_chk")) {
            __dec_obj99=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_283->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_strrchr")) {
            __dec_obj100=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_283->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_171,"__builtin___vsnprintf_chk")) {
            __dec_obj101=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_clz")) {
            __dec_obj102=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_thread_fence")) {
            __dec_obj103=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_signal_fence")) {
            __dec_obj104=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_exchange")) {
            __dec_obj105=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value314=list$1CVALUE$ph_operator_load_element(come_params_272,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value314,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_exchange_strong")) {
            __dec_obj106=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value316=list$1CVALUE$ph_operator_load_element(come_params_272,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value316,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_exchange_weak")) {
            __dec_obj107=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value318=list$1CVALUE$ph_operator_load_element(come_params_272,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value318,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_store")) {
            __dec_obj108=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_load")) {
            __dec_obj109=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value323=list$1CVALUE$ph_operator_load_element(come_params_272,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value323,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_283->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_fetch_add")) {
            __dec_obj110=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value325=list$1CVALUE$ph_operator_load_element(come_params_272,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value325,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_fetch_sub")) {
            __dec_obj111=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value327=list$1CVALUE$ph_operator_load_element(come_params_272,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value327,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_fetch_and")) {
            __dec_obj112=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value329=list$1CVALUE$ph_operator_load_element(come_params_272,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value329,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_fetch_or")) {
            __dec_obj113=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value331=list$1CVALUE$ph_operator_load_element(come_params_272,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value331,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__c11_atomic_fetch_xor")) {
            __dec_obj114=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value333=list$1CVALUE$ph_operator_load_element(come_params_272,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value333,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__dsb")) {
            __dec_obj115=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__isb")) {
            __dec_obj116=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 828, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__dmb")) {
            __dec_obj117=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 831, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_arm_cdp")) {
            __dec_obj118=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_arm_ldc")) {
            __dec_obj119=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_arm_stc")) {
            __dec_obj120=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_arm_stcl")) {
            __dec_obj121=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 843, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_171,"__builtin_arm_ldcl")) {
            __dec_obj122=come_value_283->type,
            come_value_283->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 846, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_283->var=((void*)0);
        add_come_last_code(info,"%s",come_value_283->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_283));
        __result_obj__159 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_272,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_283,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__159;
        /*c*/ come_call_finalizer3(come_params_272,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_283,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_171,"__builtin_va_arg")) {
        come_params_284=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 858, "struct list$1CVALUE$ph*"))));
        i_285=0;
        result_type_286=((void*)0);
        for(        _foreach_var_name12_287=params_172,        it_288=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name12_287);        !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name12_287);        it_288=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name12_287)        ){
            multiple_assign_var7=it_288;
            label_289=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_290=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_291=node_compile(node_290,info);
            if(            !Value_291) {
                __result_obj__160 = (_Bool)0;
                (label_289 = come_decrement_ref_count(label_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_290) ? node_290 = come_decrement_ref_count(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_284,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_286,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__160;
            }
            else {
            }
            come_value_292=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj123=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_292->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_284,(struct CVALUE*)come_increment_ref_count(come_value_292));
            __dec_obj124=result_type_286,
            result_type_286=(struct sType*)come_increment_ref_count(come_value_292->type);
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_289 = come_decrement_ref_count(label_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_290) ? node_290 = come_decrement_ref_count(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_292,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_293=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 878, "struct buffer*"))));
        buffer_append_str(buf_293,fun_name_171);
        buffer_append_str(buf_293,"(");
        j_294=0;
        for(        _foreach_var_name13_295=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_284),        it_296=list$1CVALUE$ph_begin(_foreach_var_name13_295);        !list$1CVALUE$ph_end(_foreach_var_name13_295);        it_296=list$1CVALUE$ph_next(_foreach_var_name13_295)        ){
            buffer_append_str(buf_293,it_296->c_value);
            if(            j_294!=list$1CVALUE$ph_length(come_params_284)-1) {
                buffer_append_str(buf_293,",");
            }
            j_294++;
        }
        /*c*/ come_call_finalizer3(_foreach_var_name13_295,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_293,")");
        come_value_297=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 895, "struct CVALUE*"))));
        __dec_obj125=come_value_297->c_value,
        come_value_297->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_293));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj126=come_value_297->type,
        come_value_297->type=(struct sType*)come_increment_ref_count(result_type_286);
        /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_297->var=((void*)0);
        add_come_last_code(info,"%s",come_value_297->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_297));
        __result_obj__161 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_284,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_286,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_293,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__161;
        /*c*/ come_call_finalizer3(come_params_284,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_286,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_293,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_171,"string")) {
        __dec_obj127=fun_name_171,
        fun_name_171=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_171,"wstring")) {
        __dec_obj128=fun_name_171,
        fun_name_171=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_171,"inherit")) {
        p_298=info->come_fun->mName;
        version_299=0;
        while(        *p_298) {
            if(            *p_298==95&&*(p_298+1)==118&&xisdigit(*(p_298+2))) {
                p2_300=p_298+2;
                version_299=0;
                while(                xisdigit(*p2_300)) {
                    version_299=version_299*10+(*p2_300-48);
                    p2_300++;
                }
                break;
            }
            else {
                p_298++;
            }
        }
        char real_fun_name_301[2048];
        memset(&real_fun_name_301, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_301,info->come_fun->mName,p_298-info->come_fun->mName);
        real_fun_name_301[p_298-info->come_fun->mName]=0;
        for(        i_302=version_299-1;        i_302>=1;        i_302--        ){
            new_fun_name_303=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_301,i_302));
            if(            (_if_conditional3=(((struct sFun*)(__right_value371=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_303))))),            /*c*/ come_call_finalizer3(__right_value371,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __dec_obj129=fun_name_171,
                fun_name_171=(char*)come_increment_ref_count(__builtin_string(new_fun_name_303));
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_303 = come_decrement_ref_count(new_fun_name_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_303 = come_decrement_ref_count(new_fun_name_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_302==0) {
            new_fun_name_310=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_301));
            if(            (_if_conditional4=(((struct sFun*)(__right_value374=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_310))))),            /*c*/ come_call_finalizer3(__right_value374,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __dec_obj130=fun_name_171,
                fun_name_171=(char*)come_increment_ref_count(__builtin_string(new_fun_name_310));
                __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_171,info->come_fun->mName)) {
                ((struct tuple2$2int$bool$*)(__right_value376=err_msg(info,"invalid inherit")));
                /*c*/ come_call_finalizer3(__right_value376,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__170 = (_Bool)1;
                (new_fun_name_310 = come_decrement_ref_count(new_fun_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__170;
            }
            (new_fun_name_310 = come_decrement_ref_count(new_fun_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_311=128;        i_311>=1;        i_311--        ){
            new_fun_name_312=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_171,i_311));
            if(            (_if_conditional5=(((struct sFun*)(__right_value378=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_312))))),            /*c*/ come_call_finalizer3(__right_value378,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
                __dec_obj131=fun_name_171,
                fun_name_171=(char*)come_increment_ref_count(__builtin_string(new_fun_name_312));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_312 = come_decrement_ref_count(new_fun_name_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_312 = come_decrement_ref_count(new_fun_name_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_313=((struct sFun*)(__right_value380=map$2char$phsFun$ph_at(info->funcs,fun_name_171,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value380,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_313==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_171);
        come_params_314=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 976, "struct list$1CVALUE$ph*"))));
        i_315=0;
        result_type_316=((void*)0);
        for(        _foreach_var_name14_317=params_172,        it_318=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name14_317);        !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name14_317);        it_318=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name14_317)        ){
            multiple_assign_var8=it_318;
            label_319=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_320=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_321=node_compile(node_320,info);
            if(            !Value_321) {
                __result_obj__171 = (_Bool)0;
                (label_319 = come_decrement_ref_count(label_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_320) ? node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_314,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_316,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__171;
            }
            else {
            }
            come_value_322=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj132=come_value_322->type,
            come_value_322->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_322->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_314,(struct CVALUE*)come_increment_ref_count(come_value_322));
            __dec_obj133=result_type_316,
            result_type_316=(struct sType*)come_increment_ref_count(come_value_322->type);
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_319 = come_decrement_ref_count(label_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_320) ? node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_322,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_323=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 996, "struct buffer*"))));
        buffer_append_str(buf_323,fun_name_171);
        buffer_append_str(buf_323,"(");
        j_324=0;
        for(        _foreach_var_name15_325=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_314),        it_326=list$1CVALUE$ph_begin(_foreach_var_name15_325);        !list$1CVALUE$ph_end(_foreach_var_name15_325);        it_326=list$1CVALUE$ph_next(_foreach_var_name15_325)        ){
            buffer_append_str(buf_323,it_326->c_value);
            if(            j_324!=list$1CVALUE$ph_length(come_params_314)-1) {
                buffer_append_str(buf_323,",");
            }
            j_324++;
        }
        /*c*/ come_call_finalizer3(_foreach_var_name15_325,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_323,")");
        come_value_327=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1013, "struct CVALUE*"))));
        __dec_obj134=come_value_327->c_value,
        come_value_327->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_323));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj135=come_value_327->type,
        come_value_327->type=(struct sType*)come_increment_ref_count(result_type_316);
        /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_327->var=((void*)0);
        add_come_last_code(info,"%s",come_value_327->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_327));
        __result_obj__172 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_314,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_316,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_323,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_327,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__172;
        /*c*/ come_call_finalizer3(come_params_314,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_316,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_323,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_327,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_328=(struct sType*)come_increment_ref_count(sType_clone(fun_313->mResultType));
    result_type_328->mStatic=(_Bool)0;
    param_types_329=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1028, "struct list$1sType$ph*"))));
    for(    _foreach_var_name16_330=(struct list$1sType$ph*)come_increment_ref_count(fun_313->mParamTypes),    it_331=list$1sType$ph_begin(_foreach_var_name16_330);    !list$1sType$ph_end(_foreach_var_name16_330);    it_331=list$1sType$ph_next(_foreach_var_name16_330)    ){
        it2_332=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value393=sType_clone(it_331))),info->generics_type,info));
        /*c*/ come_call_finalizer3(__right_value393,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_329,(struct sType*)come_increment_ref_count(sType_clone(it2_332)));
        /*c*/ come_call_finalizer3(it2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(_foreach_var_name16_330,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj136=result_type_328,
    result_type_328=(struct sType*)come_increment_ref_count(solve_generics(result_type_328,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_333=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1036, "struct list$1CVALUE$ph*"))));
    for(    i_334=0;    i_334<list$1sType$ph_length(fun_313->mParamTypes)-(((method_block_173)?(2):(0)));    i_334++    ){
        list$1CVALUE$ph_add(come_params_333,((void*)0));
    }
    for(    _foreach_var_name17_335=params_172,    it_336=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name17_335);    !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name17_335);    it_336=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name17_335)    ){
        multiple_assign_var9=it_336;
        label_337=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        node_338=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        fun_313->mVarArgs||string_operator_equals(fun_name_171,"__builtin_va_start")) {
        }
        else if(        label_337) {
            Value_339=node_compile(node_338,info);
            if(            !Value_339) {
                __result_obj__173 = (_Bool)0;
                (label_337 = come_decrement_ref_count(label_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_338) ? node_338 = come_decrement_ref_count(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__173;
            }
            else {
            }
            come_value_340=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj137=come_value_340->type,
            come_value_340->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_340->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            n_341=0;
            for(            _foreach_var_name18_342=(struct list$1char$ph*)come_increment_ref_count(fun_313->mParamNames),            it_343=list$1char$ph_begin(_foreach_var_name18_342);            !list$1char$ph_end(_foreach_var_name18_342);            it_343=list$1char$ph_next(_foreach_var_name18_342)            ){
                if(                string_operator_equals(label_337,it_343)) {
                    break;
                }
                n_341++;
            }
            /*c*/ come_call_finalizer3(_foreach_var_name18_342,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional6=(((struct sType*)(__right_value401=list$1sType$ph_operator_load_element(param_types_329,n_341))))),            /*c*/ come_call_finalizer3(__right_value401,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                check_assign_type(((char*)(__right_value404=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value402=string_to_string(fun_name_171))),((char*)(__right_value403=int_to_string(n_341)))))),((struct sType*)(__right_value405=list$1sType$ph_operator_load_element(param_types_329,n_341))),come_value_340->type,come_value_340,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value405,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional7=(((struct sType*)(__right_value406=list$1sType$ph_operator_load_element(param_types_329,n_341)))&&((struct sType*)(__right_value407=list$1sType$ph_operator_load_element(param_types_329,n_341)))->mHeap&&come_value_340->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value406,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value407,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                std_move(((struct sType*)(__right_value408=list$1sType$ph_operator_load_element(param_types_329,n_341))),come_value_340->type,come_value_340,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value408,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_333,n_341,(struct CVALUE*)come_increment_ref_count(come_value_340));
            /*c*/ come_call_finalizer3(come_value_340,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_337 = come_decrement_ref_count(label_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_338) ? node_338 = come_decrement_ref_count(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_349=0;
    for(    _foreach_var_name19_350=params_172,    it_351=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name19_350);    !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name19_350);    it_351=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name19_350)    ){
        multiple_assign_var10=it_351;
        label_352=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_353=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_313->mVarArgs||string_operator_equals(fun_name_171,"__builtin_va_start")) {
            Value_354=node_compile(node_353,info);
            if(            !Value_354) {
                __result_obj__176 = (_Bool)0;
                (label_352 = come_decrement_ref_count(label_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_353) ? node_353 = come_decrement_ref_count(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__176;
            }
            else {
            }
            come_value_355=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj139=come_value_355->type,
            come_value_355->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_355->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional8=(((struct CVALUE*)(__right_value411=list$1CVALUE$ph_operator_load_element(come_params_333,i_349)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value411,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    break;
                }
                else {
                    i_349++;
                }
            }
            list$1CVALUE$ph_replace(come_params_333,i_349,(struct CVALUE*)come_increment_ref_count(come_value_355));
            i_349++;
            /*c*/ come_call_finalizer3(come_value_355,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_352) {
        }
        else {
            Value_356=node_compile(node_353,info);
            if(            !Value_356) {
                __result_obj__177 = (_Bool)0;
                (label_352 = come_decrement_ref_count(label_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_353) ? node_353 = come_decrement_ref_count(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__177;
            }
            else {
            }
            come_value_357=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj140=come_value_357->type,
            come_value_357->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_357->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional9=(((struct CVALUE*)(__right_value414=list$1CVALUE$ph_operator_load_element(come_params_333,i_349)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value414,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional9) {
                    break;
                }
                else {
                    i_349++;
                }
            }
            if(            (_if_conditional10=(((struct sType*)(__right_value415=list$1sType$ph_operator_load_element(param_types_329,i_349))))),            /*c*/ come_call_finalizer3(__right_value415,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional10) {
                check_assign_type(((char*)(__right_value418=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value416=string_to_string(fun_name_171))),((char*)(__right_value417=int_to_string(i_349)))))),((struct sType*)(__right_value419=list$1sType$ph_operator_load_element(param_types_329,i_349))),come_value_357->type,come_value_357,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value416 = come_decrement_ref_count(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value417 = come_decrement_ref_count(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value418 = come_decrement_ref_count(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value419,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional11=(((struct sType*)(__right_value420=list$1sType$ph_operator_load_element(param_types_329,i_349)))&&((struct sType*)(__right_value421=list$1sType$ph_operator_load_element(param_types_329,i_349)))->mHeap&&come_value_357->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value420,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value421,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                std_move(((struct sType*)(__right_value422=list$1sType$ph_operator_load_element(param_types_329,i_349))),come_value_357->type,come_value_357,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value422,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_333,i_349,(struct CVALUE*)come_increment_ref_count(come_value_357));
            i_349++;
            /*c*/ come_call_finalizer3(come_value_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_352 = come_decrement_ref_count(label_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_353) ? node_353 = come_decrement_ref_count(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    (_Bool)1) {
        if(        (_if_conditional12=(((struct CVALUE*)(__right_value423=list$1CVALUE$ph_operator_load_element(come_params_333,i_349)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value423,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional12) {
            break;
        }
        else {
            i_349++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_172)<list$1sType$ph_length(fun_313->mParamTypes)) {
        for(        ;        i_349<list$1sType$ph_length(fun_313->mParamTypes)-(((method_block_173)?(2):(0)));        i_349++        ){
            default_param_358=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value424=list$1char$ph_operator_load_element(fun_313->mParamDefaultParametors,i_349))), "05call.c", 1145, "char*"));
            (__right_value424 = come_decrement_ref_count(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_365=((char*)(__right_value426=list$1char$ph_operator_load_element(fun_313->mParamNames,i_349)));
            (__right_value426 = come_decrement_ref_count(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional13=(default_param_358&&string_operator_not_equals(default_param_358,"")&&((struct CVALUE*)(__right_value427=list$1CVALUE$ph_operator_load_element(come_params_333,i_349)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value427,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                source_366=(struct buffer*)come_increment_ref_count(info->source);
                p_367=info->p;
                head_368=info->head;
                sline_369=info->sline;
                __dec_obj141=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_358));
                /*b*/ come_call_finalizer3(__dec_obj141,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_370=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_371=node_compile(node_370,info);
                if(                !Value_371) {
                    __result_obj__182 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_366,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_370) ? node_370 = come_decrement_ref_count(node_370, ((struct sNode*)node_370)->finalize, ((struct sNode*)node_370)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_358 = come_decrement_ref_count(default_param_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__182;
                }
                else {
                }
                __dec_obj142=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_366);
                /*b*/ come_call_finalizer3(__dec_obj142,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_367;
                info->head=head_368;
                info->sline=sline_369;
                come_value_372=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj143=come_value_372->type,
                come_value_372->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_372->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional14=(((struct sType*)(__right_value432=list$1sType$ph_operator_load_element(param_types_329,i_349))))),                /*c*/ come_call_finalizer3(__right_value432,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional14) {
                    check_assign_type(((char*)(__right_value435=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value433=string_to_string(fun_name_171))),((char*)(__right_value434=int_to_string(i_349)))))),((struct sType*)(__right_value436=list$1sType$ph_operator_load_element(param_types_329,i_349))),come_value_372->type,come_value_372,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value436,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional15=(((struct sType*)(__right_value437=list$1sType$ph_operator_load_element(param_types_329,i_349)))&&((struct sType*)(__right_value438=list$1sType$ph_operator_load_element(param_types_329,i_349)))->mHeap&&come_value_372->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value437,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value438,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    std_move(((struct sType*)(__right_value439=list$1sType$ph_operator_load_element(param_types_329,i_349))),come_value_372->type,come_value_372,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value439,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_333,i_349,(struct CVALUE*)come_increment_ref_count(come_value_372));
                /*c*/ come_call_finalizer3(source_366,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_370) ? node_370 = come_decrement_ref_count(node_370, ((struct sNode*)node_370)->finalize, ((struct sNode*)node_370)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_372,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value440=list$1CVALUE$ph_operator_load_element(come_params_333,i_349)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value440,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    ((struct tuple2$2int$bool$*)(__right_value441=err_msg(info,"require parametor(%s)(1) %d",fun_313->mName,i_349)));
                    /*c*/ come_call_finalizer3(__right_value441,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__183 = (_Bool)1;
                    (default_param_358 = come_decrement_ref_count(default_param_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__183;
                }
            }
            (default_param_358 = come_decrement_ref_count(default_param_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_313->mParamTypes)-(((method_block_173)?(2):(0)))!=list$1CVALUE$ph_length(come_params_333)&&!fun_313->mVarArgs&&string_operator_not_equals(fun_name_171,"__builtin_va_start")&&string_operator_not_equals(fun_name_171,"__builtin_va_end")) {
        ((struct tuple2$2int$bool$*)(__right_value442=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_171,list$1sType$ph_length(fun_313->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_172))));
        /*c*/ come_call_finalizer3(__right_value442,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__184 = (_Bool)1;
        (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__184;
    }
    if(    method_block_173) {
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1197, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value444=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1197, "struct sCurrentNode2*")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_373=(struct sNode*)come_increment_ref_count(_inf_value1);
        /*c*/ come_call_finalizer3(__right_value444,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_375=node_compile(current_stack_frame_node_373,info);
        if(        !Value_375) {
            __result_obj__187 = (_Bool)0;
            ((current_stack_frame_node_373) ? current_stack_frame_node_373 = come_decrement_ref_count(current_stack_frame_node_373, ((struct sNode*)current_stack_frame_node_373)->finalize, ((struct sNode*)current_stack_frame_node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__187;
        }
        else {
        }
        come_value_376=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj145=come_value_376->type,
        come_value_376->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_376->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_333,(struct CVALUE*)come_increment_ref_count(come_value_376));
        method_block2_377=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1207, "struct buffer*"))));
        method_block_type_378=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value452=list$1sType$ph_operator_load_element(fun_313->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value452,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_379=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value455=list$1sType$ph_operator_load_element(method_block_type_378->mParamTypes,0)))->mClass=((struct sClass*)(__right_value456=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_379)));
        /*c*/ come_call_finalizer3(__right_value455,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value456,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_386=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value457=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_379)));
        /*c*/ come_call_finalizer3(__right_value457,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        num_method_block_387=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_378->mClass->mName,"lambda")) {
            ((struct tuple2$2int$bool$*)(__right_value458=err_msg(info,"This function does not have method block(%s)",fun_name_171)));
            /*c*/ come_call_finalizer3(__right_value458,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__196 = (_Bool)1;
            ((current_stack_frame_node_373) ? current_stack_frame_node_373 = come_decrement_ref_count(current_stack_frame_node_373, ((struct sNode*)current_stack_frame_node_373)->finalize, ((struct sNode*)current_stack_frame_node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_376,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_377,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_379 = come_decrement_ref_count(class_name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__196;
        }
        result_type_388=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_378->mResultType));
        result_type_388->mStatic=(_Bool)0;
        param_types_389=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_378->mParamTypes));
        param_names_390=method_block_type_378->mParamNames;
        all_alhabet_sname_391=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1230, "struct buffer*"))));
        {
            p_392=info->sname;
            while(            *p_392) {
                if(                xisalnum(*p_392)) {
                    buffer_append_char(all_alhabet_sname_391,*p_392++);
                }
                else {
                    p_392++;
                }
            }
        }
        buffer_append_format(method_block2_377,"%s fun_block%d_%s(",((char*)(__right_value463=make_type_name_string(result_type_388,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),num_method_block_387,((char*)(__right_value464=buffer_to_string(all_alhabet_sname_391))));
        (__right_value463 = come_decrement_ref_count(__right_value463, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_349=0;
        for(        _foreach_var_name20_393=(struct list$1sType$ph*)come_increment_ref_count(param_types_389),        it_394=list$1sType$ph_begin(_foreach_var_name20_393);        !list$1sType$ph_end(_foreach_var_name20_393);        it_394=list$1sType$ph_next(_foreach_var_name20_393)        ){
            param_type_395=it_394;
            if(            i_349==0) {
                param_name_396=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_377,"%s",((char*)(__right_value466=make_define_var(param_type_395,param_name_396,(_Bool)0,info))));
                (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_396 = come_decrement_ref_count(param_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_349==1) {
                param_name_397=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_377,"%s",((char*)(__right_value468=make_define_var_no_solved(param_type_395,param_name_397,(_Bool)0,(_Bool)1,info))));
                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_397 = come_decrement_ref_count(param_name_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_398=(char*)come_increment_ref_count(xsprintf("it%d",i_349));
                buffer_append_format(method_block2_377,"%s",((char*)(__right_value470=make_define_var_no_solved(param_type_395,param_name_398,(_Bool)0,(_Bool)1,info))));
                (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_398 = come_decrement_ref_count(param_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_349!=list$1sType$ph_length(param_types_389)-1) {
                buffer_append_str(method_block2_377,",");
            }
            i_349++;
        }
        /*c*/ come_call_finalizer3(_foreach_var_name20_393,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_377,")\n");
        buffer_append_str(method_block2_377,((char*)(__right_value471=buffer_to_string(method_block_173))));
        (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_399=(struct buffer*)come_increment_ref_count(info->source);
        p_400=info->p;
        head_401=info->head;
        sline_402=info->sline;
        __dec_obj146=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_377);
        /*b*/ come_call_finalizer3(__dec_obj146,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_174;
        node_403=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_404=node_compile(node_403,info);
        if(        !Value_404) {
            __result_obj__197 = (_Bool)0;
            ((current_stack_frame_node_373) ? current_stack_frame_node_373 = come_decrement_ref_count(current_stack_frame_node_373, ((struct sNode*)current_stack_frame_node_373)->finalize, ((struct sNode*)current_stack_frame_node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_376,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_377,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_379 = come_decrement_ref_count(class_name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_388,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_389,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_391,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_399,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_403) ? node_403 = come_decrement_ref_count(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__197;
        }
        else {
        }
        method_block_name_405=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_387,((char*)(__right_value473=buffer_to_string(all_alhabet_sname_391)))));
        (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1295, "struct CVALUE*"))));
        fun2_407=((struct sFun*)(__right_value478=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value477=__builtin_string(method_block_name_405))),((void*)0))));
        (__right_value477 = come_decrement_ref_count(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value478,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_407==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value479=err_msg(info,"method block function not found(%s)",method_block_name_405)));
            /*c*/ come_call_finalizer3(__right_value479,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__198 = (_Bool)1;
            ((current_stack_frame_node_373) ? current_stack_frame_node_373 = come_decrement_ref_count(current_stack_frame_node_373, ((struct sNode*)current_stack_frame_node_373)->finalize, ((struct sNode*)current_stack_frame_node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_376,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_377,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_379 = come_decrement_ref_count(class_name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_388,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_389,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_391,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_399,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_403) ? node_403 = come_decrement_ref_count(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (method_block_name_405 = come_decrement_ref_count(method_block_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value2_406,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__198;
        }
        method_block_type2_408=fun2_407->mLambdaType;
        __dec_obj147=come_value2_406->c_value,
        come_value2_406->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_405));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj148=come_value2_406->type,
        come_value2_406->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_408));
        /*b*/ come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_406->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_333,(struct CVALUE*)come_increment_ref_count(come_value2_406));
        __dec_obj149=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_399);
        /*b*/ come_call_finalizer3(__dec_obj149,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_400;
        info->head=head_401;
        info->sline=sline_402;
        info->current_stack_frame_struct=current_stack_frame_struct_386;
        ((current_stack_frame_node_373) ? current_stack_frame_node_373 = come_decrement_ref_count(current_stack_frame_node_373, ((struct sNode*)current_stack_frame_node_373)->finalize, ((struct sNode*)current_stack_frame_node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_376,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_377,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_379 = come_decrement_ref_count(class_name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_388,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_389,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_391,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_399,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_403) ? node_403 = come_decrement_ref_count(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_405 = come_decrement_ref_count(method_block_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_406,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_409=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1320, "struct buffer*"))));
    if(    string_operator_equals(fun_name_171,"__isoc23_strtoll")) {
        __dec_obj150=fun_name_171,
        fun_name_171=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_171,"__isoc23_strtoul")) {
        __dec_obj151=fun_name_171,
        fun_name_171=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_171,"__isoc23_strtoull")) {
        __dec_obj152=fun_name_171,
        fun_name_171=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    buffer_append_str(buf_409,fun_name_171);
    buffer_append_str(buf_409,"(");
    j_410=0;
    for(    _foreach_var_name21_411=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_333),    it_412=list$1CVALUE$ph_begin(_foreach_var_name21_411);    !list$1CVALUE$ph_end(_foreach_var_name21_411);    it_412=list$1CVALUE$ph_next(_foreach_var_name21_411)    ){
        buffer_append_str(buf_409,it_412->c_value);
        if(        j_410!=list$1CVALUE$ph_length(come_params_333)-1) {
            buffer_append_str(buf_409,",");
        }
        j_410++;
    }
    /*c*/ come_call_finalizer3(_foreach_var_name21_411,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_409,")");
    come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1347, "struct CVALUE*"))));
    __dec_obj153=come_value_413->c_value,
    come_value_413->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_409));
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj154=come_value_413->type,
    come_value_413->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_328));
    /*b*/ come_call_finalizer3(__dec_obj154,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_413->type->mStatic=(_Bool)0;
    come_value_413->type->mImmutable=(_Bool)0;
    come_value_413->var=((void*)0);
    if(    fun_313->mResultType->mHeap) {
        append_object_to_right_values2(come_value_413,(struct sType*)come_increment_ref_count(result_type_328),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")) {
        if(        string_operator_not_equals(fun_name_171,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_171,"null_check")&&string_operator_not_equals(fun_name_171,"come_push_stackframe")&&string_operator_not_equals(fun_name_171,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_171,"come_pop_stackframe")&&string_operator_not_equals(fun_name_171,"come_pop_stackframe_v2")) {
            __dec_obj155=come_value_413->c_value,
            come_value_413->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_413->c_value,come_value_413->type,info));
            __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_413->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_413));
    info->calling_fun=fun_313;
    __result_obj__199 = (_Bool)1;
    (fun_name_171 = come_decrement_ref_count(fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_329,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_333,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_409,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_413,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__104;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_163;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_164;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__109;
    if(    self==((void*)0)) {
        __result_obj__104 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__104,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__104;
    }
    result_163=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_164=self->head;
    while(    it_164!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_163,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_164->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_163,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_164->item)));
        }
        it_164=it_164->next;
    }
    __result_obj__109 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_163);
    /*c*/ come_call_finalizer3(result_163,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__109,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__109;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_161;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_162;
    it_161=self->head;
    while(    it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__105 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__105,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__105;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value181 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_165;
struct tuple2$2char$phsNode$ph* __dec_obj63;
void* __right_value182 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_166;
struct tuple2$2char$phsNode$ph* __dec_obj64;
void* __right_value183 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_167;
struct tuple2$2char$phsNode$ph* __dec_obj65;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__106;
    if(    self->len==0) {
        litem_165=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value181=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        __dec_obj63=litem_165->item,
        litem_165->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj63,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value182=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        __dec_obj64=litem_166->item,
        litem_166->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj64,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value183=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        __dec_obj65=litem_167->item,
        litem_167->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj65,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result_obj__106 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__106;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__107;
void* __right_value184 = (void*)0;
struct tuple2$2char$phsNode$ph* result_168;
void* __right_value185 = (void*)0;
char* __dec_obj66;
void* __right_value186 = (void*)0;
struct sNode* __dec_obj67;
struct tuple2$2char$phsNode$ph* __result_obj__108;
    if(    self==(void*)0) {
        __result_obj__107 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__107,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__107;
    }
    result_168=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj66=result_168->v1,
        result_168->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj67=result_168->v2,
        result_168->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__108 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_168);
    /*c*/ come_call_finalizer3(result_168,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__108,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__108;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_169;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_170;
    it_169=self->head;
    while(    it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*c*/ come_call_finalizer3(prev_it_170,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__113 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__113,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__113;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_179;
struct list_item$1CVALUE$ph* prev_it_180;
    it_179=self->head;
    while(    it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*c*/ come_call_finalizer3(prev_it_180,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_183;
struct tuple2$2char$phsNode$ph* __result_obj__115;
struct tuple2$2char$phsNode$ph* __result_obj__116;
struct tuple2$2char$phsNode$ph* result_184;
struct tuple2$2char$phsNode$ph* __result_obj__117;
result_183 = (void*)0;
result_184 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_183,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__115 = result_183;
        return __result_obj__115;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__116 = self->it->item;
        return __result_obj__116;
    }
    memset(&result_184,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__117 = result_184;
    return __result_obj__117;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_186;
struct tuple2$2char$phsNode$ph* __result_obj__118;
struct tuple2$2char$phsNode$ph* __result_obj__119;
struct tuple2$2char$phsNode$ph* result_187;
struct tuple2$2char$phsNode$ph* __result_obj__120;
result_186 = (void*)0;
result_187 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_186,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__118 = result_186;
        return __result_obj__118;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__119 = self->it->item;
        return __result_obj__119;
    }
    memset(&result_187,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__120 = result_187;
    return __result_obj__120;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_192;
int i_193;
struct sType* __result_obj__122;
struct sType* default_value_194;
struct sType* __result_obj__123;
default_value_194 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_192=self->head;
    i_193=0;
    while(    it_192!=((void*)0)) {
        if(        position==i_193) {
            __result_obj__122 = (struct sType*)come_increment_ref_count(it_192->item);
            /*c*/ come_call_finalizer3(__result_obj__122,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__122;
        }
        it_192=it_192->next;
        i_193++;
    }
    memset(&default_value_194,0,sizeof(struct sType*));
    __result_obj__123 = (struct sType*)come_increment_ref_count(default_value_194);
    /*c*/ come_call_finalizer3(default_value_194,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__123,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__123;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_195;
int i_196;
struct sType* __result_obj__124;
struct sType* default_value_197;
struct sType* __result_obj__125;
default_value_197 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_195=self->head;
    i_196=0;
    while(    it_195!=((void*)0)) {
        if(        position==i_196) {
            __result_obj__124 = (struct sType*)come_increment_ref_count(it_195->item);
            /*c*/ come_call_finalizer3(__result_obj__124,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__124;
        }
        it_195=it_195->next;
        i_196++;
    }
    memset(&default_value_197,0,sizeof(struct sType*));
    __result_obj__125 = (struct sType*)come_increment_ref_count(default_value_197);
    /*c*/ come_call_finalizer3(default_value_197,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__125,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__125;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_201;
struct CVALUE* __result_obj__126;
struct CVALUE* __result_obj__127;
struct CVALUE* result_202;
struct CVALUE* __result_obj__128;
result_201 = (void*)0;
result_202 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_201,0,sizeof(struct CVALUE*));
        __result_obj__126 = result_201;
        return __result_obj__126;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__127 = self->it->item;
        return __result_obj__127;
    }
    memset(&result_202,0,sizeof(struct CVALUE*));
    __result_obj__128 = result_202;
    return __result_obj__128;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_204;
struct CVALUE* __result_obj__129;
struct CVALUE* __result_obj__130;
struct CVALUE* result_205;
struct CVALUE* __result_obj__131;
result_204 = (void*)0;
result_205 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_204,0,sizeof(struct CVALUE*));
        __result_obj__129 = result_204;
        return __result_obj__129;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__130 = self->it->item;
        return __result_obj__130;
    }
    memset(&result_205,0,sizeof(struct CVALUE*));
    __result_obj__131 = result_205;
    return __result_obj__131;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_208;
unsigned int it_209;
struct sGenericsFun* __result_obj__133;
struct sGenericsFun* __result_obj__134;
struct sGenericsFun* __result_obj__135;
struct sGenericsFun* __result_obj__136;
    hash_208=string_get_hash_key(((char*)key))%self->size;
    it_209=hash_208;
    while(    (_Bool)1) {
        if(        self->item_existance[it_209]) {
            if(            string_equals(self->keys[it_209],key)) {
                __result_obj__133 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_209]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__133,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__133;
            }
            it_209++;
            if(            it_209>=self->size) {
                it_209=0;
            }
            else if(            it_209==hash_208) {
                __result_obj__134 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__134,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__134;
            }
        }
        else {
            __result_obj__135 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__135,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__135;
        }
    }
    __result_obj__136 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__136,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__136;
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

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_216;
unsigned int it_217;
struct sFun* __result_obj__137;
struct sFun* __result_obj__138;
struct sFun* __result_obj__139;
struct sFun* __result_obj__140;
    hash_216=string_get_hash_key(((char*)key))%self->size;
    it_217=hash_216;
    while(    (_Bool)1) {
        if(        self->item_existance[it_217]) {
            if(            string_equals(self->keys[it_217],key)) {
                __result_obj__137 = (struct sFun*)come_increment_ref_count(self->items[it_217]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__137,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__137;
            }
            it_217++;
            if(            it_217>=self->size) {
                it_217=0;
            }
            else if(            it_217==hash_216) {
                __result_obj__138 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__138,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__138;
            }
        }
        else {
            __result_obj__139 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__139,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__139;
        }
    }
    __result_obj__140 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__140,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__140;
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

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_222;
int i_223;
struct CVALUE* __result_obj__142;
struct CVALUE* default_value_224;
struct CVALUE* __result_obj__143;
default_value_224 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_222=self->head;
    i_223=0;
    while(    it_222!=((void*)0)) {
        if(        position==i_223) {
            __result_obj__142 = (struct CVALUE*)come_increment_ref_count(it_222->item);
            /*c*/ come_call_finalizer3(__result_obj__142,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__142;
        }
        it_222=it_222->next;
        i_223++;
    }
    memset(&default_value_224,0,sizeof(struct CVALUE*));
    __result_obj__143 = (struct CVALUE*)come_increment_ref_count(default_value_224);
    /*c*/ come_call_finalizer3(default_value_224,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__143,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__143;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_225;
int i_226;
struct CVALUE* __result_obj__144;
struct CVALUE* default_value_227;
struct CVALUE* __result_obj__145;
default_value_227 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_225=self->head;
    i_226=0;
    while(    it_225!=((void*)0)) {
        if(        position==i_226) {
            __result_obj__144 = (struct CVALUE*)come_increment_ref_count(it_225->item);
            /*c*/ come_call_finalizer3(__result_obj__144,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__144;
        }
        it_225=it_225->next;
        i_226++;
    }
    memset(&default_value_227,0,sizeof(struct CVALUE*));
    __result_obj__145 = (struct CVALUE*)come_increment_ref_count(default_value_227);
    /*c*/ come_call_finalizer3(default_value_227,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__145,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__145;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_233;
int i_234;
struct sType* default_value_235;
struct list$1sType$ph* __result_obj__147;
struct list_item$1sType$ph* it_239;
int i_240;
struct sType* __dec_obj77;
struct list$1sType$ph* __result_obj__148;
default_value_235 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_233=self->len;
        for(        i_234=0;        i_234<position-len_233;        i_234++        ){
            memset(&default_value_235,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_235));
            /*c*/ come_call_finalizer3(default_value_235,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__147 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__147;
    }
    it_239=self->head;
    i_240=0;
    while(    it_239!=((void*)0)) {
        if(        position==i_240) {
            __dec_obj77=it_239->item,
            it_239->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_239=it_239->next;
        i_240++;
    }
    __result_obj__148 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__148;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value224 = (void*)0;
struct list_item$1sType$ph* litem_236;
struct sType* __dec_obj74;
void* __right_value225 = (void*)0;
struct list_item$1sType$ph* litem_237;
struct sType* __dec_obj75;
void* __right_value226 = (void*)0;
struct list_item$1sType$ph* litem_238;
struct sType* __dec_obj76;
struct list$1sType$ph* __result_obj__146;
    if(    self->len==0) {
        litem_236=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value224=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_236->prev=((void*)0);
        litem_236->next=((void*)0);
        __dec_obj74=litem_236->item,
        litem_236->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_236;
        self->head=litem_236;
    }
    else if(    self->len==1) {
        litem_237=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value225=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_237->prev=self->head;
        litem_237->next=((void*)0);
        __dec_obj75=litem_237->item,
        litem_237->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_237;
        self->head->next=litem_237;
    }
    else {
        litem_238=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value226=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_238->prev=self->tail;
        litem_238->next=((void*)0);
        __dec_obj76=litem_238->item,
        litem_238->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_238;
        self->tail=litem_238;
    }
    self->len++;
    __result_obj__146 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__146;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_243;
struct sType* __result_obj__149;
struct sType* __result_obj__150;
struct sType* result_244;
struct sType* __result_obj__151;
result_243 = (void*)0;
result_244 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_243,0,sizeof(struct sType*));
        __result_obj__149 = result_243;
        return __result_obj__149;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__150 = self->it->item;
        return __result_obj__150;
    }
    memset(&result_244,0,sizeof(struct sType*));
    __result_obj__151 = result_244;
    return __result_obj__151;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_246;
struct sType* __result_obj__152;
struct sType* __result_obj__153;
struct sType* result_247;
struct sType* __result_obj__154;
result_246 = (void*)0;
result_247 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_246,0,sizeof(struct sType*));
        __result_obj__152 = result_246;
        return __result_obj__152;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__153 = self->it->item;
        return __result_obj__153;
    }
    memset(&result_247,0,sizeof(struct sType*));
    __result_obj__154 = result_247;
    return __result_obj__154;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value237 = (void*)0;
struct list_item$1CVALUE$ph* litem_258;
struct CVALUE* __dec_obj79;
void* __right_value238 = (void*)0;
struct list_item$1CVALUE$ph* litem_259;
struct CVALUE* __dec_obj80;
void* __right_value239 = (void*)0;
struct list_item$1CVALUE$ph* litem_260;
struct CVALUE* __dec_obj81;
struct list$1CVALUE$ph* __result_obj__156;
    if(    self->len==0) {
        litem_258=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value237=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1043, "struct list_item$1CVALUE$ph*"))));
        litem_258->prev=((void*)0);
        litem_258->next=((void*)0);
        __dec_obj79=litem_258->item,
        litem_258->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_258;
        self->head=litem_258;
    }
    else if(    self->len==1) {
        litem_259=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value238=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1053, "struct list_item$1CVALUE$ph*"))));
        litem_259->prev=self->head;
        litem_259->next=((void*)0);
        __dec_obj80=litem_259->item,
        litem_259->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj80,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_259;
        self->head->next=litem_259;
    }
    else {
        litem_260=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value239=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1063, "struct list_item$1CVALUE$ph*"))));
        litem_260->prev=self->tail;
        litem_260->next=((void*)0);
        __dec_obj81=litem_260->item,
        litem_260->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_260;
        self->tail=litem_260;
    }
    self->len++;
    __result_obj__156 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__156;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_266;
unsigned int it_267;
struct map$2char$phsFun$ph* __result_obj__157;
    hash_266=string_get_hash_key(((char*)key))%self->size;
    it_267=hash_266;
    while(    (_Bool)1) {
        if(        self->item_existance[it_267]) {
            if(            string_equals(self->keys[it_267],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_267]);
                self->item_existance[it_267]=(_Bool)0;
                if(                1) {
                    (self->keys[it_267] = come_decrement_ref_count(self->keys[it_267], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_267]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_267],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_267]=((void*)0);
                self->len--;
                break;
            }
            it_267++;
            if(            it_267>=self->size) {
                it_267=0;
            }
            else if(            it_267==hash_266) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__157 = self;
    return __result_obj__157;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_304;
unsigned int hash_305;
unsigned int it_306;
struct sFun* __result_obj__162;
struct sFun* __result_obj__163;
struct sFun* __result_obj__164;
struct sFun* __result_obj__165;
default_value_304 = (void*)0;
    memset(&default_value_304,0,sizeof(struct sFun*));
    hash_305=string_get_hash_key(((char*)key))%self->size;
    it_306=hash_305;
    while(    (_Bool)1) {
        if(        self->item_existance[it_306]) {
            if(            string_equals(self->keys[it_306],key)) {
                __result_obj__162 = (struct sFun*)come_increment_ref_count(self->items[it_306]);
                /*c*/ come_call_finalizer3(default_value_304,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__162,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__162;
            }
            it_306++;
            if(            it_306>=self->size) {
                it_306=0;
            }
            else if(            it_306==hash_305) {
                __result_obj__163 = (struct sFun*)come_increment_ref_count(default_value_304);
                /*c*/ come_call_finalizer3(default_value_304,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__163,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__163;
            }
        }
        else {
            __result_obj__164 = (struct sFun*)come_increment_ref_count(default_value_304);
            /*c*/ come_call_finalizer3(default_value_304,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__164,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__164;
        }
    }
    __result_obj__165 = (struct sFun*)come_increment_ref_count(default_value_304);
    /*c*/ come_call_finalizer3(default_value_304,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__165,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__165;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_307;
unsigned int hash_308;
unsigned int it_309;
struct sFun* __result_obj__166;
struct sFun* __result_obj__167;
struct sFun* __result_obj__168;
struct sFun* __result_obj__169;
default_value_307 = (void*)0;
    memset(&default_value_307,0,sizeof(struct sFun*));
    hash_308=string_get_hash_key(((char*)key))%self->size;
    it_309=hash_308;
    while(    (_Bool)1) {
        if(        self->item_existance[it_309]) {
            if(            string_equals(self->keys[it_309],key)) {
                __result_obj__166 = (struct sFun*)come_increment_ref_count(self->items[it_309]);
                /*c*/ come_call_finalizer3(default_value_307,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__166,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__166;
            }
            it_309++;
            if(            it_309>=self->size) {
                it_309=0;
            }
            else if(            it_309==hash_308) {
                __result_obj__167 = (struct sFun*)come_increment_ref_count(default_value_307);
                /*c*/ come_call_finalizer3(default_value_307,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__167,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__167;
            }
        }
        else {
            __result_obj__168 = (struct sFun*)come_increment_ref_count(default_value_307);
            /*c*/ come_call_finalizer3(default_value_307,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__168,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__168;
        }
    }
    __result_obj__169 = (struct sFun*)come_increment_ref_count(default_value_307);
    /*c*/ come_call_finalizer3(default_value_307,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_344;
int i_345;
struct CVALUE* default_value_346;
struct list$1CVALUE$ph* __result_obj__174;
struct list_item$1CVALUE$ph* it_347;
int i_348;
struct CVALUE* __dec_obj138;
struct list$1CVALUE$ph* __result_obj__175;
default_value_346 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_344=self->len;
        for(        i_345=0;        i_345<position-len_344;        i_345++        ){
            memset(&default_value_346,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_346));
            /*c*/ come_call_finalizer3(default_value_346,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__174 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    it_347=self->head;
    i_348=0;
    while(    it_347!=((void*)0)) {
        if(        position==i_348) {
            __dec_obj138=it_347->item,
            it_347->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj138,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_347=it_347->next;
        i_348++;
    }
    __result_obj__175 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_359;
int i_360;
char* __result_obj__178;
char* default_value_361;
char* __result_obj__179;
default_value_361 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_359=self->head;
    i_360=0;
    while(    it_359!=((void*)0)) {
        if(        position==i_360) {
            __result_obj__178 = (char*)come_increment_ref_count(it_359->item);
            (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__178;
        }
        it_359=it_359->next;
        i_360++;
    }
    memset(&default_value_361,0,sizeof(char*));
    __result_obj__179 = (char*)come_increment_ref_count(default_value_361);
    (default_value_361 = come_decrement_ref_count(default_value_361, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_362;
int i_363;
char* __result_obj__180;
char* default_value_364;
char* __result_obj__181;
default_value_364 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_362=self->head;
    i_363=0;
    while(    it_362!=((void*)0)) {
        if(        position==i_363) {
            __result_obj__180 = (char*)come_increment_ref_count(it_362->item);
            (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__180;
        }
        it_362=it_362->next;
        i_363++;
    }
    memset(&default_value_364,0,sizeof(char*));
    __result_obj__181 = (char*)come_increment_ref_count(default_value_364);
    (default_value_364 = come_decrement_ref_count(default_value_364, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__181;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__185;
void* __right_value445 = (void*)0;
struct sCurrentNode2* result_374;
void* __right_value446 = (void*)0;
char* __dec_obj144;
struct sCurrentNode2* __result_obj__186;
    if(    self==(void*)0) {
        __result_obj__185 = (void*)0;
        return __result_obj__185;
    }
    result_374=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_374->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj144=result_374->sname,
        result_374->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode2_clone", 5, "char*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_374->sline_real=self->sline_real;
    }
    __result_obj__186 = result_374;
    /*c*/ come_call_finalizer3(result_374,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__186;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_380;
unsigned int hash_381;
unsigned int it_382;
struct sClass* __result_obj__188;
struct sClass* __result_obj__189;
struct sClass* __result_obj__190;
struct sClass* __result_obj__191;
default_value_380 = (void*)0;
    memset(&default_value_380,0,sizeof(struct sClass*));
    hash_381=string_get_hash_key(((char*)key))%self->size;
    it_382=hash_381;
    while(    (_Bool)1) {
        if(        self->item_existance[it_382]) {
            if(            string_equals(self->keys[it_382],key)) {
                __result_obj__188 = (struct sClass*)come_increment_ref_count(self->items[it_382]);
                /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__188,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__188;
            }
            it_382++;
            if(            it_382>=self->size) {
                it_382=0;
            }
            else if(            it_382==hash_381) {
                __result_obj__189 = (struct sClass*)come_increment_ref_count(default_value_380);
                /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__189,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__189;
            }
        }
        else {
            __result_obj__190 = (struct sClass*)come_increment_ref_count(default_value_380);
            /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__190,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__190;
        }
    }
    __result_obj__191 = (struct sClass*)come_increment_ref_count(default_value_380);
    /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_383;
unsigned int hash_384;
unsigned int it_385;
struct sClass* __result_obj__192;
struct sClass* __result_obj__193;
struct sClass* __result_obj__194;
struct sClass* __result_obj__195;
default_value_383 = (void*)0;
    memset(&default_value_383,0,sizeof(struct sClass*));
    hash_384=string_get_hash_key(((char*)key))%self->size;
    it_385=hash_384;
    while(    (_Bool)1) {
        if(        self->item_existance[it_385]) {
            if(            string_equals(self->keys[it_385],key)) {
                __result_obj__192 = (struct sClass*)come_increment_ref_count(self->items[it_385]);
                /*c*/ come_call_finalizer3(default_value_383,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__192,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__192;
            }
            it_385++;
            if(            it_385>=self->size) {
                it_385=0;
            }
            else if(            it_385==hash_384) {
                __result_obj__193 = (struct sClass*)come_increment_ref_count(default_value_383);
                /*c*/ come_call_finalizer3(default_value_383,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__193,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__193;
            }
        }
        else {
            __result_obj__194 = (struct sClass*)come_increment_ref_count(default_value_383);
            /*c*/ come_call_finalizer3(default_value_383,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__194,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__194;
        }
    }
    __result_obj__195 = (struct sClass*)come_increment_ref_count(default_value_383);
    /*c*/ come_call_finalizer3(default_value_383,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__195,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value492 = (void*)0;
struct buffer* __dec_obj156;
struct sComeCallNode* __result_obj__200;
    ((struct sNodeBase*)(__right_value492=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value492,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj156=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj156,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__200 = (struct sComeCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__200,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value493 = (void*)0;
char* __result_obj__201;
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value493=__builtin_string("sComeCallNode"))));
    (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__201;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_414;
struct buffer* come_block_415;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct list$1CVALUE$ph* come_params_416;
void* __right_value496 = (void*)0;
char* var_name_418;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* type__419;
void* __right_value500 = (void*)0;
_Bool __result_obj__206;
void* __right_value501 = (void*)0;
struct sNode* var_node_422;
_Bool Value_423;
_Bool __result_obj__207;
void* __right_value502 = (void*)0;
struct CVALUE* thread_var_value_424;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value505 = (void*)0;
char* __dec_obj157;
struct sType* __dec_obj158;
void* __right_value506 = (void*)0;
struct sNode* null_node_426;
_Bool Value_427;
_Bool __result_obj__208;
void* __right_value507 = (void*)0;
struct CVALUE* __dec_obj159;
void* __right_value508 = (void*)0;
struct sType* __dec_obj160;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value511 = (void*)0;
struct sNode* current_stack_frame_node_428;
_Bool Value_429;
_Bool __result_obj__209;
void* __right_value512 = (void*)0;
struct CVALUE* current_stack_frame_value_430;
void* __right_value513 = (void*)0;
char* fun_name_431;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct buffer* come_block2_432;
void* __right_value516 = (void*)0;
char* class_name_433;
void* __right_value517 = (void*)0;
struct sClass* current_stack_frame_struct_434;
void* __right_value518 = (void*)0;
struct buffer* source3_435;
char* p_436;
char* head_437;
int sline_438;
struct buffer* __dec_obj161;
void* __right_value519 = (void*)0;
struct sNode* node_439;
_Bool in_method_block_440;
_Bool Value_441;
_Bool __result_obj__210;
struct buffer* __dec_obj162;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct CVALUE* fun_value_442;
void* __right_value522 = (void*)0;
char* __dec_obj163;
struct sType* __dec_obj164;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct buffer* buf_443;
void* __right_value525 = (void*)0;
char* fun_name_444;
int j_445;
struct list$1CVALUE$ph* _foreach_var_name22_446;
struct CVALUE* it_447;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value528 = (void*)0;
char* __dec_obj165;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* type_449;
void* __right_value532 = (void*)0;
struct sType* __dec_obj166;
_Bool __result_obj__211;
    come_block_sline_414=self->come_block_sline;
    come_block_415=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_416=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1399, "struct list$1CVALUE$ph*"))));
    static int thread_num_417=0;
    thread_num_417++;
    var_name_418=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_417));
    type__419=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value498=map$2char$phsType$ph_at(info->types,((char*)(__right_value497=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value498,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__419==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value500=err_msg(info,"pthread_t is not defined")));
        /*c*/ come_call_finalizer3(__right_value500,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__206 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_block_415,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_416,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_418 = come_decrement_ref_count(var_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__206;
    }
    var_node_422=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_418),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__419),(_Bool)1,((void*)0),info,(_Bool)0));
    Value_423=node_compile(var_node_422,info);
    if(    !Value_423) {
        __result_obj__207 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_415,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_416,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_418 = come_decrement_ref_count(var_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_422) ? var_node_422 = come_decrement_ref_count(var_node_422, ((struct sNode*)var_node_422)->finalize, ((struct sNode*)var_node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__207;
    }
    else {
    }
    thread_var_value_424=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1421, "struct CVALUE*"))));
    __dec_obj157=come_value_425->c_value,
    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_424->c_value));
    __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj158=come_value_425->type,
    come_value_425->type=(struct sType*)come_increment_ref_count(thread_var_value_424->type);
    /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_425->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_416,(struct CVALUE*)come_increment_ref_count(come_value_425));
    null_node_426=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_427=node_compile(null_node_426,info);
    if(    !Value_427) {
        __result_obj__208 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_415,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_416,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_418 = come_decrement_ref_count(var_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_422) ? var_node_422 = come_decrement_ref_count(var_node_422, ((struct sNode*)var_node_422)->finalize, ((struct sNode*)var_node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_426) ? null_node_426 = come_decrement_ref_count(null_node_426, ((struct sNode*)null_node_426)->finalize, ((struct sNode*)null_node_426)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__208;
    }
    else {
    }
    __dec_obj159=come_value_425,
    come_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj159,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj160=come_value_425->type,
    come_value_425->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_425->type,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_416,(struct CVALUE*)come_increment_ref_count(come_value_425));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1440, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value510=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1440, "struct sCurrentNode2*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_428=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value510,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_429=node_compile(current_stack_frame_node_428,info);
    if(    !Value_429) {
        __result_obj__209 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_415,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_416,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_418 = come_decrement_ref_count(var_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_422) ? var_node_422 = come_decrement_ref_count(var_node_422, ((struct sNode*)var_node_422)->finalize, ((struct sNode*)var_node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_426) ? null_node_426 = come_decrement_ref_count(null_node_426, ((struct sNode*)null_node_426)->finalize, ((struct sNode*)null_node_426)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_428) ? current_stack_frame_node_428 = come_decrement_ref_count(current_stack_frame_node_428, ((struct sNode*)current_stack_frame_node_428)->finalize, ((struct sNode*)current_stack_frame_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__209;
    }
    else {
    }
    current_stack_frame_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_431=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_417));
    come_block2_432=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1450, "struct buffer*"))));
    class_name_433=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_432,"void* %s(%s* parent)\n",fun_name_431,class_name_433);
    buffer_append_str(come_block2_432,((char*)(__right_value517=buffer_to_string(come_block_415))));
    (__right_value517 = come_decrement_ref_count(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_434=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value518=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_433)));
    /*c*/ come_call_finalizer3(__right_value518,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_435=(struct buffer*)come_increment_ref_count(info->source);
    p_436=info->p;
    head_437=info->head;
    sline_438=info->sline;
    __dec_obj161=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_432);
    /*b*/ come_call_finalizer3(__dec_obj161,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_414;
    node_439=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_440=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_441=node_compile(node_439,info);
    if(    !Value_441) {
        __result_obj__210 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_415,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_416,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_418 = come_decrement_ref_count(var_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_422) ? var_node_422 = come_decrement_ref_count(var_node_422, ((struct sNode*)var_node_422)->finalize, ((struct sNode*)var_node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_426) ? null_node_426 = come_decrement_ref_count(null_node_426, ((struct sNode*)null_node_426)->finalize, ((struct sNode*)null_node_426)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_428) ? current_stack_frame_node_428 = come_decrement_ref_count(current_stack_frame_node_428, ((struct sNode*)current_stack_frame_node_428)->finalize, ((struct sNode*)current_stack_frame_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_431 = come_decrement_ref_count(fun_name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_432,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_433 = come_decrement_ref_count(class_name_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_435,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_439) ? node_439 = come_decrement_ref_count(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__210;
    }
    else {
    }
    info->in_method_block=in_method_block_440;
    __dec_obj162=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_435);
    /*b*/ come_call_finalizer3(__dec_obj162,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_436;
    info->head=head_437;
    info->sline=sline_438;
    info->current_stack_frame_struct=current_stack_frame_struct_434;
    fun_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1495, "struct CVALUE*"))));
    __dec_obj163=fun_value_442->c_value,
    fun_value_442->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_431));
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj164=come_value_425->type,
    come_value_425->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_425->var=((void*)0);
    list$1CVALUE$ph_add(come_params_416,(struct CVALUE*)come_increment_ref_count(fun_value_442));
    list$1CVALUE$ph_add(come_params_416,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_430));
    buf_443=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1505, "struct buffer*"))));
    (fun_name_431 = come_decrement_ref_count(fun_name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_444=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_443,"(");
    buffer_append_str(buf_443,fun_name_444);
    buffer_append_str(buf_443,"(");
    j_445=0;
    for(    _foreach_var_name22_446=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_416),    it_447=list$1CVALUE$ph_begin(_foreach_var_name22_446);    !list$1CVALUE$ph_end(_foreach_var_name22_446);    it_447=list$1CVALUE$ph_next(_foreach_var_name22_446)    ){
        buffer_append_str(buf_443,it_447->c_value);
        if(        j_445!=list$1CVALUE$ph_length(come_params_416)-1) {
            buffer_append_str(buf_443,",");
        }
        j_445++;
    }
    /*c*/ come_call_finalizer3(_foreach_var_name22_446,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_443,")");
    buffer_append_str(buf_443,", ");
    buffer_append_str(buf_443,thread_var_value_424->c_value);
    buffer_append_str(buf_443,")");
    /*c*/ come_call_finalizer3(come_value_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1528, "struct CVALUE*"))));
    __dec_obj165=come_value_448->c_value,
    come_value_448->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_443));
    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_449=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value530=map$2char$phsType$ph_at(info->types,((char*)(__right_value529=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value530,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_449==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value532=err_msg(info,"pthread_t is not defined")));
        /*c*/ come_call_finalizer3(__right_value532,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __dec_obj166=come_value_448->type,
    come_value_448->type=(struct sType*)come_increment_ref_count(type_449);
    /*b*/ come_call_finalizer3(__dec_obj166,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_448->var=((void*)0);
    add_come_last_code(info,"%s",come_value_448->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_448));
    __result_obj__211 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_415,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_416,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_418 = come_decrement_ref_count(var_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_422) ? var_node_422 = come_decrement_ref_count(var_node_422, ((struct sNode*)var_node_422)->finalize, ((struct sNode*)var_node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_426) ? null_node_426 = come_decrement_ref_count(null_node_426, ((struct sNode*)null_node_426)->finalize, ((struct sNode*)null_node_426)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_428) ? current_stack_frame_node_428 = come_decrement_ref_count(current_stack_frame_node_428, ((struct sNode*)current_stack_frame_node_428)->finalize, ((struct sNode*)current_stack_frame_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_432,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_433 = come_decrement_ref_count(class_name_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_435,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_439) ? node_439 = come_decrement_ref_count(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_442,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_443,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_448,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_449,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_420;
unsigned int it_421;
struct sType* __result_obj__202;
struct sType* __result_obj__203;
struct sType* __result_obj__204;
struct sType* __result_obj__205;
    hash_420=string_get_hash_key(((char*)key))%self->size;
    it_421=hash_420;
    while(    (_Bool)1) {
        if(        self->item_existance[it_421]) {
            if(            string_equals(self->keys[it_421],key)) {
                __result_obj__202 = (struct sType*)come_increment_ref_count(self->items[it_421]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__202,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__202;
            }
            it_421++;
            if(            it_421>=self->size) {
                it_421=0;
            }
            else if(            it_421==hash_420) {
                __result_obj__203 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__203,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__203;
            }
        }
        else {
            __result_obj__204 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__204,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__204;
        }
    }
    __result_obj__205 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value533 = (void*)0;
struct sNode* __dec_obj167;
struct sComeJoinNode* __result_obj__212;
    ((struct sNodeBase*)(__right_value533=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value533,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj167=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__212 = (struct sComeJoinNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value534 = (void*)0;
char* __result_obj__213;
    __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value534=__builtin_string("sComeJoinNode"))));
    (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__213;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_450;
_Bool Value_451;
_Bool __result_obj__214;
void* __right_value535 = (void*)0;
struct CVALUE* come_value_452;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct buffer* buf_453;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_454;
void* __right_value540 = (void*)0;
char* __dec_obj168;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj169;
_Bool __result_obj__215;
    node_450=(struct sNode*)come_increment_ref_count(self->node);
    Value_451=node_compile(node_450,info);
    if(    !Value_451) {
        __result_obj__214 = (_Bool)0;
        ((node_450) ? node_450 = come_decrement_ref_count(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__214;
    }
    else {
    }
    come_value_452=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_453=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1575, "struct buffer*"))));
    buffer_append_str(buf_453,"pthread_join(");
    buffer_append_str(buf_453,come_value_452->c_value);
    buffer_append_str(buf_453,", 0)");
    /*c*/ come_call_finalizer3(come_value_452,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_454=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1580, "struct CVALUE*"))));
    __dec_obj168=come_value_454->c_value,
    come_value_454->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_453));
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj169=come_value_454->type,
    come_value_454->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1582, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_454->var=((void*)0);
    add_come_last_code(info,"%s",come_value_454->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_454));
    __result_obj__215 = (_Bool)1;
    ((node_450) ? node_450 = come_decrement_ref_count(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value544 = (void*)0;
struct list$1sNode$ph* __dec_obj170;
struct list$1sBlock$ph* __dec_obj171;
struct sBlock* __dec_obj172;
struct sComePollNode* __result_obj__216;
    ((struct sNodeBase*)(__right_value544=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value544,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj170=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    /*b*/ come_call_finalizer3(__dec_obj170,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj171=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    /*b*/ come_call_finalizer3(__dec_obj171,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj172=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    /*b*/ come_call_finalizer3(__dec_obj172,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__216 = (struct sComePollNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__216,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value545 = (void*)0;
char* __result_obj__217;
    __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value545=__builtin_string("sComePollNode"))));
    (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__217;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_459;
struct list$1sBlock$ph* blocks_460;
int time_out_461;
int n_463;
struct list$1sNode$ph* _foreach_var_name23_464;
struct sNode* it_467;
_Bool Value_470;
_Bool __result_obj__224;
void* __right_value546 = (void*)0;
struct CVALUE* come_value_471;
int n_472;
struct list$1sNode$ph* _foreach_var_name24_473;
struct sNode* it_474;
void* __right_value547 = (void*)0;
_Bool __result_obj__229;
    vars_459=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_460=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_461=self->time_out;
    static int var_num_462=0;
    var_num_462++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_462,list$1sNode$ph_length(vars_459));
    n_463=0;
    for(    _foreach_var_name23_464=(struct list$1sNode$ph*)come_increment_ref_count(self->vars),    it_467=list$1sNode$ph_begin(_foreach_var_name23_464);    !list$1sNode$ph_end(_foreach_var_name23_464);    it_467=list$1sNode$ph_next(_foreach_var_name23_464)    ){
        Value_470=node_compile(it_467,info);
        if(        !Value_470) {
            __result_obj__224 = (_Bool)0;
            /*c*/ come_call_finalizer3(_foreach_var_name23_464,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_459,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_460,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__224;
        }
        else {
        }
        come_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_462,n_463,come_value_471->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_462,n_463,1);
        n_463++;
        /*c*/ come_call_finalizer3(come_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(_foreach_var_name23_464,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_462,var_num_462,list$1sNode$ph_length(vars_459),time_out_461);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_462);
    n_472=0;
    for(    _foreach_var_name24_473=(struct list$1sNode$ph*)come_increment_ref_count(self->vars),    it_474=list$1sNode$ph_begin(_foreach_var_name24_473);    !list$1sNode$ph_end(_foreach_var_name24_473);    it_474=list$1sNode$ph_next(_foreach_var_name24_473)    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_462,n_472,1);
        transpile_block(((struct sBlock*)(__right_value547=list$1sBlock$ph_operator_load_element(blocks_460,n_472))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value547,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_472++;
    }
    /*c*/ come_call_finalizer3(_foreach_var_name24_473,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_462);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__229 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_459,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_460,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_455;
struct list_item$1sBlock$ph* prev_it_456;
    it_455=self->head;
    while(    it_455!=((void*)0)) {
        prev_it_456=it_455;
        it_455=it_455->next;
        /*c*/ come_call_finalizer3(prev_it_456,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_457;
struct list_item$1sBlock$ph* prev_it_458;
    it_457=self->head;
    while(    it_457!=((void*)0)) {
        prev_it_458=it_457;
        it_457=it_457->next;
        /*c*/ come_call_finalizer3(prev_it_458,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_465;
struct sNode* __result_obj__218;
struct sNode* __result_obj__219;
struct sNode* result_466;
struct sNode* __result_obj__220;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_465,0,sizeof(struct sNode*));
        __result_obj__218 = result_465;
        return __result_obj__218;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__219 = self->it->item;
        return __result_obj__219;
    }
    memset(&result_466,0,sizeof(struct sNode*));
    __result_obj__220 = result_466;
    return __result_obj__220;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_468;
struct sNode* __result_obj__221;
struct sNode* __result_obj__222;
struct sNode* result_469;
struct sNode* __result_obj__223;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_468,0,sizeof(struct sNode*));
        __result_obj__221 = result_468;
        return __result_obj__221;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__222 = self->it->item;
        return __result_obj__222;
    }
    memset(&result_469,0,sizeof(struct sNode*));
    __result_obj__223 = result_469;
    return __result_obj__223;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_475;
int i_476;
struct sBlock* __result_obj__225;
struct sBlock* default_value_477;
struct sBlock* __result_obj__226;
default_value_477 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_475=self->head;
    i_476=0;
    while(    it_475!=((void*)0)) {
        if(        position==i_476) {
            __result_obj__225 = (struct sBlock*)come_increment_ref_count(it_475->item);
            /*c*/ come_call_finalizer3(__result_obj__225,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__225;
        }
        it_475=it_475->next;
        i_476++;
    }
    memset(&default_value_477,0,sizeof(struct sBlock*));
    __result_obj__226 = (struct sBlock*)come_increment_ref_count(default_value_477);
    /*c*/ come_call_finalizer3(default_value_477,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_478;
int i_479;
struct sBlock* __result_obj__227;
struct sBlock* default_value_480;
struct sBlock* __result_obj__228;
default_value_480 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_478=self->head;
    i_479=0;
    while(    it_478!=((void*)0)) {
        if(        position==i_479) {
            __result_obj__227 = (struct sBlock*)come_increment_ref_count(it_478->item);
            /*c*/ come_call_finalizer3(__result_obj__227,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__227;
        }
        it_478=it_478->next;
        i_479++;
    }
    memset(&default_value_480,0,sizeof(struct sBlock*));
    __result_obj__228 = (struct sBlock*)come_increment_ref_count(default_value_480);
    /*c*/ come_call_finalizer3(default_value_480,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__228,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value556 = (void*)0;
struct sNode* node_481;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj178;
struct sNode* __result_obj__232;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1665, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value549=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1665, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_481=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value549,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj178=node_481,
    node_481=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_481),info));
    (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__232 = (struct sNode*)come_increment_ref_count(node_481);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_481) ? node_481 = come_decrement_ref_count(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__232) ? __result_obj__232 = come_decrement_ref_count(__result_obj__232, ((struct sNode*)__result_obj__232)->finalize, ((struct sNode*)__result_obj__232)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__232;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__230;
void* __right_value550 = (void*)0;
struct sFunCallNode* result_482;
void* __right_value551 = (void*)0;
char* __dec_obj173;
void* __right_value552 = (void*)0;
char* __dec_obj174;
void* __right_value553 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj175;
void* __right_value554 = (void*)0;
struct list$1sType$ph* __dec_obj176;
void* __right_value555 = (void*)0;
struct buffer* __dec_obj177;
struct sFunCallNode* __result_obj__231;
    if(    self==(void*)0) {
        __result_obj__230 = (void*)0;
        return __result_obj__230;
    }
    result_482=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_482->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_482->sname,
        result_482->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_482->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj174=result_482->fun_name,
        result_482->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj175=result_482->params,
        result_482->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj175,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_482->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj176=result_482->method_generics_types,
        result_482->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj176,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj177=result_482->method_block,
        result_482->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj177,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_482->method_block_sline=self->method_block_sline;
    }
    __result_obj__231 = result_482;
    /*c*/ come_call_finalizer3(result_482,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__231;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value558 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value559 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj180;
struct sLambdaCall* __result_obj__233;
    ((struct sNodeBase*)(__right_value558=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value558,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj179=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj180=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj180,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__233 = (struct sLambdaCall*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__233,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value560 = (void*)0;
char* __result_obj__234;
    __result_obj__234 = (char*)come_increment_ref_count(((char*)(__right_value560=__builtin_string("sLambdaCall"))));
    (__right_value560 = come_decrement_ref_count(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__234;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_483;
struct list$1tuple2$2char$phsNode$ph$ph* params_484;
_Bool Value_485;
_Bool __result_obj__235;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_486;
struct sType* lambda_type_487;
void* __right_value562 = (void*)0;
_Bool __result_obj__236;
void* __right_value563 = (void*)0;
struct sType* result_type_488;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct list$1CVALUE$ph* come_params_489;
void* __right_value566 = (void*)0;
_Bool __result_obj__237;
int i_490;
struct list$1tuple2$2char$phsNode$ph$ph* _foreach_var_name25_491;
struct tuple2$2char$phsNode$ph* it_492;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_493=0;
struct sNode* node_494=0;
_Bool Value_495;
_Bool __result_obj__238;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_496;
void* __right_value568 = (void*)0;
struct sType* __dec_obj181;
void* __right_value569 = (void*)0;
_Bool _if_conditional17;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
_Bool _if_conditional18;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct buffer* buf_497;
int j_498;
struct list$1CVALUE$ph* _foreach_var_name26_499;
struct CVALUE* it_500;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct CVALUE* come_value2_501;
void* __right_value579 = (void*)0;
char* __dec_obj182;
void* __right_value580 = (void*)0;
struct sType* __dec_obj183;
_Bool __result_obj__239;
    node_483=(struct sNode*)come_increment_ref_count(self->node);
    params_484=self->params;
    Value_485=node_compile(node_483,info);
    if(    !Value_485) {
        __result_obj__235 = (_Bool)0;
        ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__235;
    }
    else {
    }
    come_value_486=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_487=come_value_486->type;
    if(    lambda_type_487->mResultType==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value562=err_msg(info,"invalid lambda type")));
        /*c*/ come_call_finalizer3(__right_value562,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__236 = (_Bool)1;
        ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_486,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__236;
    }
    result_type_488=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_487->mResultType));
    result_type_488->mStatic=(_Bool)0;
    come_params_489=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1708, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_487->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_484)&&!lambda_type_487->mVarArgs) {
        ((struct tuple2$2int$bool$*)(__right_value566=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_487->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_484))));
        /*c*/ come_call_finalizer3(__right_value566,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__237 = (_Bool)1;
        ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_486,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_489,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__237;
    }
    i_490=0;
    for(    _foreach_var_name25_491=params_484,    it_492=list$1tuple2$2char$phsNode$ph$ph_begin(_foreach_var_name25_491);    !list$1tuple2$2char$phsNode$ph$ph_end(_foreach_var_name25_491);    it_492=list$1tuple2$2char$phsNode$ph$ph_next(_foreach_var_name25_491)    ){
        multiple_assign_var11=it_492;
        label_493=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_494=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        Value_495=node_compile(node_494,info);
        if(        !Value_495) {
            __result_obj__238 = (_Bool)0;
            (label_493 = come_decrement_ref_count(label_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_494) ? node_494 = come_decrement_ref_count(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_486,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_489,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__238;
        }
        else {
        }
        come_value_496=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj181=come_value_496->type,
        come_value_496->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_496->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        (_if_conditional17=(lambda_type_487->mVarArgs&&((struct sType*)(__right_value569=list$1sType$ph_operator_load_element(lambda_type_487->mParamTypes,i_490)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value569,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional17) {
        }
        else {
            check_assign_type(((char*)(__right_value571=xsprintf("calling param #\%s",((char*)(__right_value570=int_to_string(i_490)))))),((struct sType*)(__right_value572=list$1sType$ph_operator_load_element(lambda_type_487->mParamTypes,i_490))),come_value_496->type,come_value_496,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value571 = come_decrement_ref_count(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value572,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional18=(((struct sType*)(__right_value573=list$1sType$ph_operator_load_element(lambda_type_487->mParamTypes,i_490)))->mHeap&&come_value_496->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value573,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                std_move(((struct sType*)(__right_value574=list$1sType$ph_operator_load_element(lambda_type_487->mParamTypes,i_490))),come_value_496->type,come_value_496,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value574,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params_489,(struct CVALUE*)come_increment_ref_count(come_value_496));
        i_490++;
        (label_493 = come_decrement_ref_count(label_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_494) ? node_494 = come_decrement_ref_count(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_496,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_497=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1740, "struct buffer*"))));
    buffer_append_str(buf_497,"(");
    buffer_append_str(buf_497,come_value_486->c_value);
    buffer_append_str(buf_497,")");
    buffer_append_str(buf_497,"(");
    j_498=0;
    for(    _foreach_var_name26_499=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_489),    it_500=list$1CVALUE$ph_begin(_foreach_var_name26_499);    !list$1CVALUE$ph_end(_foreach_var_name26_499);    it_500=list$1CVALUE$ph_next(_foreach_var_name26_499)    ){
        buffer_append_str(buf_497,it_500->c_value);
        if(        j_498!=list$1CVALUE$ph_length(come_params_489)-1) {
            buffer_append_str(buf_497,",");
        }
        j_498++;
    }
    /*c*/ come_call_finalizer3(_foreach_var_name26_499,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_497,")");
    come_value2_501=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1759, "struct CVALUE*"))));
    __dec_obj182=come_value2_501->c_value,
    come_value2_501->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_497));
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_487->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_501,(struct sType*)come_increment_ref_count(lambda_type_487->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __dec_obj183=come_value2_501->type,
    come_value2_501->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_488));
    /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_501->type->mStatic=(_Bool)0;
    come_value2_501->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_501->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_501));
    __result_obj__239 = (_Bool)1;
    ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_486,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_489,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_501,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value581 = (void*)0;
struct sType* __dec_obj184;
struct sVarArgTypeName* __result_obj__240;
    ((struct sNodeBase*)(__right_value581=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value581,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj184=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__240 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__240,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value582 = (void*)0;
char* __result_obj__241;
    __result_obj__241 = (char*)come_increment_ref_count(((char*)(__right_value582=__builtin_string("sVarArgTypeName"))));
    (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__241;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_502;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct CVALUE* come_value_503;
void* __right_value585 = (void*)0;
char* __dec_obj185;
struct sType* __dec_obj186;
_Bool __result_obj__242;
    type_502=(struct sType*)come_increment_ref_count(self->type);
    come_value_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1796, "struct CVALUE*"))));
    __dec_obj185=come_value_503->c_value,
    come_value_503->c_value=(char*)come_increment_ref_count(make_type_name_string(type_502,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj186=come_value_503->type,
    come_value_503->type=(struct sType*)come_increment_ref_count(type_502);
    /*b*/ come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_503->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_503));
    __result_obj__242 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_503,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1sType$ph* method_generics_types_504;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_505=0;
char* name_506=0;
_Bool err_507=0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_508;
_Bool _va_arg_509;
char* p_510;
int sline_511;
_Bool err_flag_512;
void* __right_value594 = (void*)0;
char* label_513;
void* __right_value595 = (void*)0;
char* __dec_obj187;
char* __dec_obj188;
_Bool no_comma_514;
_Bool in_fun_param_515;
void* __right_value596 = (void*)0;
struct sNode* node_516;
void* __right_value597 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct buffer* method_block_520;
int method_block_sline_521;
char* head_522;
void* __right_value603 = (void*)0;
char* tail_523;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct buffer* __dec_obj195;
int len_524;
void* __right_value606 = (void*)0;
char* mem_525;
_Bool guard_break_526;
struct sNode* node_527;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value610 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value613 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj199;
struct sNode* __result_obj__245;
node_527 = (void*)0;
    method_generics_types_504=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1810, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1) {
            if(            *info->p==0) {
                ((struct tuple2$2int$bool$*)(__right_value588=err_msg(info,"unexpected source end")));
                /*c*/ come_call_finalizer3(__right_value588,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value589=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_505=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_506=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                err_507=multiple_assign_var12->v3;
                /*c*/ come_call_finalizer3(__right_value589,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_507) {
                    ((struct tuple2$2int$bool$*)(__right_value590=err_msg(info,"invalid method generics paramtor type")));
                    /*c*/ come_call_finalizer3(__right_value590,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_504,(struct sType*)come_increment_ref_count(sType_clone(type_505)));
                /*c*/ come_call_finalizer3(type_505,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_506 = come_decrement_ref_count(name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_508=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1848, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_509=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_510=info->p;
        sline_511=info->sline;
        err_flag_512=(_Bool)0;
        label_513=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj187=label_513,
            label_513=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_512=(_Bool)1;
        }
        if(        err_flag_512==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj188=label_513,
            label_513=((void*)0);
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_510;
            info->sline=sline_511;
        }
        no_comma_514=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_515=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_516=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj189=node_516,
        node_516=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_516),info));
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_514;
        info->in_fun_param=in_fun_param_515;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_508,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1896, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_513),(struct sNode*)come_increment_ref_count(node_516))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_513 = come_decrement_ref_count(label_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_516) ? node_516 = come_decrement_ref_count(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_513 = come_decrement_ref_count(label_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_516) ? node_516 = come_decrement_ref_count(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_509;
    parse_sharp_v5(info);
    method_block_520=((void*)0);
    method_block_sline_521=0;
    if(    *info->p==123) {
        head_522=info->p;
        method_block_sline_521=info->sline;
        ((char*)(__right_value603=skip_block(info,(_Bool)0)));
        (__right_value603 = come_decrement_ref_count(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_523=info->p;
        __dec_obj195=method_block_520,
        method_block_520=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1926, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj195,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_524=tail_523-head_522;
        mem_525=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_524+1)), "05call.c", 1929, "char*"));
        memcpy(mem_525,head_522,len_524);
        mem_525[len_524]=0;
        buffer_append_str(method_block_520,mem_525);
        buffer_append_str(method_block_520,"\n");
        (mem_525 = come_decrement_ref_count(mem_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    guard_break_526=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_526=(_Bool)1;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1947, "struct sNode");
        _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value608=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1947, "struct sFunCallNode*")),fun_name,params_508,guard_break_526,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_504),(struct buffer*)come_increment_ref_count(method_block_520),method_block_sline_521,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sFunCallNode_finalize;
        _inf_value4->clone=(void*)sFunCallNode_clone;
        _inf_value4->compile=(void*)sFunCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sFunCallNode_terminated;
        _inf_value4->kind=(void*)sFunCallNode_kind;
        __dec_obj196=node_527,
        node_527=(struct sNode*)come_increment_ref_count(_inf_value4);
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value608,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj197=node_527,
        node_527=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_527),info));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    else {
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1952, "struct sNode");
        _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value612=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1952, "struct sFunCallNode*")),fun_name,params_508,guard_break_526,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_504),(struct buffer*)come_increment_ref_count(method_block_520),method_block_sline_521,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sFunCallNode_finalize;
        _inf_value5->clone=(void*)sFunCallNode_clone;
        _inf_value5->compile=(void*)sFunCallNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sFunCallNode_terminated;
        _inf_value5->kind=(void*)sFunCallNode_kind;
        __dec_obj198=node_527,
        node_527=(struct sNode*)come_increment_ref_count(_inf_value5);
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value612,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj199=node_527,
        node_527=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_527),info));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    parse_sharp_v5(info);
    __result_obj__245 = (struct sNode*)come_increment_ref_count(node_527);
    /*c*/ come_call_finalizer3(method_generics_types_504,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_508,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_520,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_527) ? node_527 = come_decrement_ref_count(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__245;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value598 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_517;
struct tuple2$2char$phsNode$ph* __dec_obj190;
void* __right_value599 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_518;
struct tuple2$2char$phsNode$ph* __dec_obj191;
void* __right_value600 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_519;
struct tuple2$2char$phsNode$ph* __dec_obj192;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__243;
    if(    self->len==0) {
        litem_517=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value598=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_517->prev=((void*)0);
        litem_517->next=((void*)0);
        __dec_obj190=litem_517->item,
        litem_517->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj190,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_517;
        self->head=litem_517;
    }
    else if(    self->len==1) {
        litem_518=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value599=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_518->prev=self->head;
        litem_518->next=((void*)0);
        __dec_obj191=litem_518->item,
        litem_518->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj191,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_518;
        self->head->next=litem_518;
    }
    else {
        litem_519=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value600=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_519->prev=self->tail;
        litem_519->next=((void*)0);
        __dec_obj192=litem_519->item,
        litem_519->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj192,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_519;
        self->tail=litem_519;
    }
    self->len++;
    __result_obj__243 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj193;
struct sNode* __dec_obj194;
struct tuple2$2char$phsNode$ph* __result_obj__244;
    __dec_obj193=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj194=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__244 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value615 = (void*)0;
struct sNode* __result_obj__246;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    ((struct tuple2$2int$bool$*)(__right_value615=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    /*c*/ come_call_finalizer3(__right_value615,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    stackframe_v2();
    exit(3);
    __result_obj__246 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__246;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value622 = (void*)0;
struct sNode* __result_obj__249;
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1976, "struct sNode");
    _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value617=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1976, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sReturnNode_finalize;
    _inf_value6->clone=(void*)sReturnNode_clone;
    _inf_value6->compile=(void*)sReturnNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sReturnNode_kind;
    __result_obj__249 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value622=_inf_value6)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value617,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value622) ? __right_value622 = come_decrement_ref_count(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__249) ? __result_obj__249 = come_decrement_ref_count(__result_obj__249, ((struct sNode*)__result_obj__249)->finalize, ((struct sNode*)__result_obj__249)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__249;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__247;
void* __right_value618 = (void*)0;
struct sReturnNode* result_528;
void* __right_value619 = (void*)0;
char* __dec_obj200;
void* __right_value620 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value621 = (void*)0;
char* __dec_obj202;
struct sReturnNode* __result_obj__248;
    if(    self==(void*)0) {
        __result_obj__247 = (void*)0;
        return __result_obj__247;
    }
    result_528=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_528->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_528->sname,
        result_528->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_528->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj201=result_528->value,
        result_528->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj202=result_528->value_source,
        result_528->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__248 = result_528;
    /*c*/ come_call_finalizer3(result_528,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__248;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value626 = (void*)0;
struct sNode* __result_obj__250;
char* head_529;
void* __right_value627 = (void*)0;
struct sNode* value_530;
char* tail_531;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value632 = (void*)0;
struct sNode* __result_obj__251;
int nest_533;
char* head_534;
int head_sline_535;
int sline_real_536;
void* __right_value633 = (void*)0;
char* buf_537;
_Bool is_type_name__538;
_Bool is_special_word_540;
_Bool define_function_pointer_flag_541;
void* __right_value634 = (void*)0;
_Bool lambda_flag_542;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
char* word2_543;
_Bool fun_name_with_type_name_544;
void* __right_value637 = (void*)0;
char* word2_545;
_Bool call_method_generics_fun_call_546;
void* __right_value638 = (void*)0;
char* __dec_obj204;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
_Bool _if_conditional19;
int nest_547;
_Bool inline_asm_548;
void* __right_value645 = (void*)0;
char* __dec_obj205;
void* __right_value646 = (void*)0;
char* __dec_obj206;
void* __right_value647 = (void*)0;
char* __dec_obj207;
void* __right_value648 = (void*)0;
struct sNode* node_549;
struct sNode* __result_obj__252;
_Bool no_comma_550;
void* __right_value649 = (void*)0;
struct sNode* exp_551;
void* __right_value650 = (void*)0;
struct sNode* exp2_552;
void* __right_value651 = (void*)0;
struct sNode* __result_obj__253;
void* __right_value652 = (void*)0;
char* block_text_553;
char* contents_554;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value9;
struct sOutputNode* _inf_obj_value9;
void* __right_value658 = (void*)0;
struct sNode* __result_obj__256;
void* __right_value659 = (void*)0;
struct sNode* node_556;
struct sNode* __result_obj__257;
void* __right_value660 = (void*)0;
struct sNode* node_557;
struct sNode* __result_obj__258;
struct buffer* come_block_558;
int come_block_sline_559;
char* head_560;
void* __right_value661 = (void*)0;
char* tail_561;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct buffer* __dec_obj210;
int len_562;
void* __right_value664 = (void*)0;
char* mem_563;
char* head_564;
_Bool no_output_come_code_565;
void* __right_value665 = (void*)0;
char* tail_566;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct buffer* __dec_obj211;
int len_567;
void* __right_value668 = (void*)0;
char* mem_568;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* _inf_value10;
struct sComeCallNode* _inf_obj_value10;
void* __right_value674 = (void*)0;
struct sNode* node_569;
struct sNode* __result_obj__261;
struct buffer* come_block_571;
int come_block_sline_572;
void* __right_value675 = (void*)0;
struct sNode* node_573;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sNode* _inf_value11;
struct sComeJoinNode* _inf_obj_value11;
void* __right_value681 = (void*)0;
struct sNode* __result_obj__264;
int time_out_575;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1sNode$ph* vars_576;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1sBlock$ph* blocks_577;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sBlock* else_block_578;
void* __right_value688 = (void*)0;
struct sBlock* __dec_obj216;
void* __right_value689 = (void*)0;
struct sNode* var_name_579;
void* __right_value690 = (void*)0;
struct sBlock* block_580;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value12;
struct sComePollNode* _inf_obj_value12;
void* __right_value740 = (void*)0;
struct sNode* __result_obj__288;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value13;
struct sFuncNode* _inf_obj_value13;
void* __right_value745 = (void*)0;
struct sNode* __result_obj__291;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* _inf_value14;
struct sWildCard* _inf_obj_value14;
void* __right_value750 = (void*)0;
struct sNode* __result_obj__294;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct sNode* _inf_value15;
struct sLineNode* _inf_obj_value15;
void* __right_value755 = (void*)0;
struct sNode* __result_obj__297;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* _inf_value16;
struct sSNameNode* _inf_obj_value16;
void* __right_value760 = (void*)0;
struct sNode* __result_obj__300;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value17;
struct sCallerFuncNode* _inf_obj_value17;
void* __right_value765 = (void*)0;
struct sNode* __result_obj__303;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value18;
struct sCallerLineNode* _inf_obj_value18;
void* __right_value770 = (void*)0;
struct sNode* __result_obj__306;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sNode* _inf_value19;
struct sCallerSNameNode* _inf_obj_value19;
void* __right_value775 = (void*)0;
struct sNode* __result_obj__309;
void* __right_value776 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_625=0;
char* name_626=0;
_Bool err_627=0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value20;
struct sVarArgTypeName* _inf_obj_value20;
void* __right_value782 = (void*)0;
struct sNode* __result_obj__312;
void* __right_value783 = (void*)0;
struct sNode* node_629;
struct sNode* __result_obj__313;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct buffer* buf2_630;
void* __right_value786 = (void*)0;
char* word_631;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct list$1sNode$ph* exps_632;
void* __right_value789 = (void*)0;
struct sNode* exp_633;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value21;
struct sInlineAssembler* _inf_obj_value21;
void* __right_value798 = (void*)0;
struct sNode* __result_obj__316;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct buffer* fun_name_635;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sType* type_636;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sClass* klass_643;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sType* __dec_obj245;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
char* buf2_644;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct sNode* node_645;
struct sNode* __result_obj__325;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct buffer* fun_name_646;
void* __right_value817 = (void*)0;
char* buf2_647;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* node_648;
struct sNode* __result_obj__326;
void* __right_value820 = (void*)0;
struct sNode* node_649;
struct sNode* __result_obj__327;
void* __right_value821 = (void*)0;
struct sNode* node_650;
struct sNode* __result_obj__328;
void* __right_value822 = (void*)0;
struct sNode* node_651;
struct sNode* __result_obj__329;
void* __right_value823 = (void*)0;
struct sNode* node_652;
struct sNode* __result_obj__330;
void* __right_value824 = (void*)0;
struct sNode* __result_obj__331;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1989, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value625=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1989, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result_obj__250 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value626=_inf_value7)));
            /*c*/ come_call_finalizer3(__right_value625,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value626) ? __right_value626 = come_decrement_ref_count(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__250) ? __result_obj__250 = come_decrement_ref_count(__result_obj__250, ((struct sNode*)__result_obj__250)->finalize, ((struct sNode*)__result_obj__250)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__250;
        }
        else {
            head_529=info->p;
            value_530=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_531=info->p;
            __dec_obj203=value_530,
            value_530=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_530),info));
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_532[tail_531-head_529+1];
            memset(&buf_532, 0, sizeof(char)            *(tail_531-head_529+1)            );
            memcpy(buf_532,head_529,tail_531-head_529);
            buf_532[tail_531-head_529]=0;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2001, "struct sNode");
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value631=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2001, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_530),(char*)come_increment_ref_count(__builtin_string(buf_532)),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__251 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value632=_inf_value8)));
            ((value_530) ? value_530 = come_decrement_ref_count(value_530, ((struct sNode*)value_530)->finalize, ((struct sNode*)value_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value631,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value632) ? __right_value632 = come_decrement_ref_count(__right_value632, ((struct sNode*)__right_value632)->finalize, ((struct sNode*)__right_value632)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__251) ? __result_obj__251 = come_decrement_ref_count(__result_obj__251, ((struct sNode*)__result_obj__251)->finalize, ((struct sNode*)__result_obj__251)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__251;
            ((value_530) ? value_530 = come_decrement_ref_count(value_530, ((struct sNode*)value_530)->finalize, ((struct sNode*)value_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_533=0;
        while(        1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_533++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_533--;
                if(                nest_533==0) {
                    break;
                }
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(        1) {
            if(            *info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_534=info->p;
        head_sline_535=info->sline;
        sline_real_536=info->sline_real;
        info->sline_real=info->sline;
        buf_537=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__538=is_type_name(buf_537,info);
        static char* is_special_word_array_539[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_540=charppa_contained(is_special_word_array_539,19,buf_537);
        define_function_pointer_flag_541=(_Bool)0;
        if(        !is_special_word_540&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value634=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value634,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_541=(_Bool)1;
                }
            }
            info->p=head_534;
            info->sline=head_sline_535;
        }
        lambda_flag_542=(_Bool)0;
        if(        !is_special_word_540&&is_type_name__538) {
            info->p=head_534;
            info->sline=head_sline_535;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value635=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value635,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_543=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_543,"lambda")) {
                lambda_flag_542=(_Bool)1;
            }
            info->p=head_534;
            info->sline=head_sline_535;
            (word2_543 = come_decrement_ref_count(word2_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_544=(_Bool)0;
        if(        !is_special_word_540) {
            info->p=head_534;
            info->sline=head_sline_535;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_545=(char*)come_increment_ref_count(parse_word(info));
                (word2_545 = come_decrement_ref_count(word2_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_544=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_534;
            info->sline=head_sline_535;
        }
        call_method_generics_fun_call_546=(_Bool)0;
        {
            info->p=head_534;
            info->sline=head_sline_535;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj204=buf_537,
                buf_537=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional19=(!is_type_name(buf_537,info)&&((struct sVar*)(__right_value641=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value640=__builtin_string(buf_537))))))==((void*)0)&&((struct sVar*)(__right_value644=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value643=__builtin_string(buf_537))))))==((void*)0)&&*info->p==60)),            (__right_value639 = come_decrement_ref_count(__right_value639, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value640 = come_decrement_ref_count(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value641,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value642 = come_decrement_ref_count(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value643 = come_decrement_ref_count(__right_value643, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value644,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                nest_547=0;
                while(                *info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_547++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_547==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_546=(_Bool)1;
                }
            }
            info->p=head_534;
            info->sline=head_sline_535;
        }
        inline_asm_548=(_Bool)0;
        {
            info->p=head_534;
            info->sline=head_sline_535;
            __dec_obj205=buf_537,
            buf_537=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_537,"asm")||string_operator_equals(buf_537,"__asm")||string_operator_equals(buf_537,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_548=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj206=buf_537,
                        buf_537=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_548=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_534;
            info->sline=head_sline_535;
        }
        parse_sharp_v5(info);
        __dec_obj207=buf_537,
        buf_537=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_542) {
            info->p=head_534;
            info->sline=head_sline_535;
            node_549=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_536;
            __result_obj__252 = (struct sNode*)come_increment_ref_count(node_549);
            ((node_549) ? node_549 = come_decrement_ref_count(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__252) ? __result_obj__252 = come_decrement_ref_count(__result_obj__252, ((struct sNode*)__result_obj__252)->finalize, ((struct sNode*)__result_obj__252)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__252;
            ((node_549) ? node_549 = come_decrement_ref_count(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_537,"_Static_assert")||string_operator_equals(buf_537,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_550=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_551=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_550;
            expected_next_character(44,info);
            exp2_552=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__253 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value651=static_assert_node((struct sNode*)come_increment_ref_count(exp_551),(struct sNode*)come_increment_ref_count(exp2_552),info))));
            ((exp_551) ? exp_551 = come_decrement_ref_count(exp_551, ((struct sNode*)exp_551)->finalize, ((struct sNode*)exp_551)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_552) ? exp2_552 = come_decrement_ref_count(exp2_552, ((struct sNode*)exp2_552)->finalize, ((struct sNode*)exp2_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value651) ? __right_value651 = come_decrement_ref_count(__right_value651, ((struct sNode*)__right_value651)->finalize, ((struct sNode*)__right_value651)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__253) ? __result_obj__253 = come_decrement_ref_count(__result_obj__253, ((struct sNode*)__result_obj__253)->finalize, ((struct sNode*)__result_obj__253)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__253;
            ((exp_551) ? exp_551 = come_decrement_ref_count(exp_551, ((struct sNode*)exp_551)->finalize, ((struct sNode*)exp_551)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_552) ? exp2_552 = come_decrement_ref_count(exp2_552, ((struct sNode*)exp2_552)->finalize, ((struct sNode*)exp2_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_537,"output")&&*info->p==123) {
            block_text_553=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
            contents_554=(char*)come_increment_ref_count(block_text_553);
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2239, "struct sNode");
            _inf_obj_value9=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value654=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2239, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_554),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sOutputNode_finalize;
            _inf_value9->clone=(void*)sOutputNode_clone;
            _inf_value9->compile=(void*)sOutputNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sOutputNode_kind;
            __result_obj__256 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value658=_inf_value9)));
            (block_text_553 = come_decrement_ref_count(block_text_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_554 = come_decrement_ref_count(contents_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value654,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value658) ? __right_value658 = come_decrement_ref_count(__right_value658, ((struct sNode*)__right_value658)->finalize, ((struct sNode*)__right_value658)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__256) ? __result_obj__256 = come_decrement_ref_count(__result_obj__256, ((struct sNode*)__result_obj__256)->finalize, ((struct sNode*)__result_obj__256)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__256;
            (block_text_553 = come_decrement_ref_count(block_text_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_554 = come_decrement_ref_count(contents_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_537,"extern")) {
            node_556=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__257 = (struct sNode*)come_increment_ref_count(node_556);
            ((node_556) ? node_556 = come_decrement_ref_count(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__257) ? __result_obj__257 = come_decrement_ref_count(__result_obj__257, ((struct sNode*)__result_obj__257)->finalize, ((struct sNode*)__result_obj__257)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__257;
            ((node_556) ? node_556 = come_decrement_ref_count(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_537,"string")||string_operator_equals(buf_537,"wstring"))&&*info->p==40) {
            node_557=(struct sNode*)come_increment_ref_count(parse_function_call(buf_537,info,(_Bool)0));
            info->sline_real=sline_real_536;
            __result_obj__258 = (struct sNode*)come_increment_ref_count(node_557);
            ((node_557) ? node_557 = come_decrement_ref_count(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__258) ? __result_obj__258 = come_decrement_ref_count(__result_obj__258, ((struct sNode*)__result_obj__258)->finalize, ((struct sNode*)__result_obj__258)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__258;
            ((node_557) ? node_557 = come_decrement_ref_count(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_537,"come")) {
            come_block_558=((void*)0);
            come_block_sline_559=0;
            if(            *info->p==123) {
                head_560=info->p;
                come_block_sline_559=info->sline;
                ((char*)(__right_value661=skip_block(info,(_Bool)0)));
                (__right_value661 = come_decrement_ref_count(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_561=info->p;
                __dec_obj210=come_block_558,
                come_block_558=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2264, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_562=tail_561-head_560;
                mem_563=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_562+1)), "05call.c", 2267, "char*"));
                memcpy(mem_563,head_560,len_562);
                mem_563[len_562]=0;
                buffer_append_str(come_block_558,mem_563);
                buffer_append_str(come_block_558,"\n");
                (mem_563 = come_decrement_ref_count(mem_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_564=info->p;
                come_block_sline_559=info->sline;
                no_output_come_code_565=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value665=expression_v13(info)));
                ((__right_value665) ? __right_value665 = come_decrement_ref_count(__right_value665, ((struct sNode*)__right_value665)->finalize, ((struct sNode*)__right_value665)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_565;
                tail_566=info->p;
                __dec_obj211=come_block_558,
                come_block_558=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2285, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj211,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_567=tail_566-head_564;
                mem_568=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_567+1)), "05call.c", 2288, "char*"));
                memcpy(mem_568,head_564,len_567);
                mem_568[len_567]=0;
                buffer_append_str(come_block_558,"{");
                buffer_append_str(come_block_558,mem_568);
                buffer_append_str(come_block_558,"; }");
                buffer_append_str(come_block_558,"return (void*)0;\n}");
                buffer_append_str(come_block_558,"\n");
                (mem_568 = come_decrement_ref_count(mem_568, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2299, "struct sNode");
            _inf_obj_value10=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value670=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2299, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_558),come_block_sline_559,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeCallNode_finalize;
            _inf_value10->clone=(void*)sComeCallNode_clone;
            _inf_value10->compile=(void*)sComeCallNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeCallNode_terminated;
            _inf_value10->kind=(void*)sComeCallNode_kind;
            node_569=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value670,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_536;
            __result_obj__261 = (struct sNode*)come_increment_ref_count(node_569);
            /*c*/ come_call_finalizer3(come_block_558,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_569) ? node_569 = come_decrement_ref_count(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__261) ? __result_obj__261 = come_decrement_ref_count(__result_obj__261, ((struct sNode*)__result_obj__261)->finalize, ((struct sNode*)__result_obj__261)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__261;
            /*c*/ come_call_finalizer3(come_block_558,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_569) ? node_569 = come_decrement_ref_count(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_537,"come_join")&&*info->p==40) {
            come_block_571=((void*)0);
            come_block_sline_572=0;
            expected_next_character(40,info);
            node_573=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_536;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2313, "struct sNode");
            _inf_obj_value11=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value677=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2313, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_573),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeJoinNode_finalize;
            _inf_value11->clone=(void*)sComeJoinNode_clone;
            _inf_value11->compile=(void*)sComeJoinNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeJoinNode_terminated;
            _inf_value11->kind=(void*)sComeJoinNode_kind;
            __result_obj__264 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value681=_inf_value11)));
            /*c*/ come_call_finalizer3(come_block_571,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_573) ? node_573 = come_decrement_ref_count(node_573, ((struct sNode*)node_573)->finalize, ((struct sNode*)node_573)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value677,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value681) ? __right_value681 = come_decrement_ref_count(__right_value681, ((struct sNode*)__right_value681)->finalize, ((struct sNode*)__right_value681)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__264) ? __result_obj__264 = come_decrement_ref_count(__result_obj__264, ((struct sNode*)__result_obj__264)->finalize, ((struct sNode*)__result_obj__264)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__264;
            /*c*/ come_call_finalizer3(come_block_571,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_573) ? node_573 = come_decrement_ref_count(node_573, ((struct sNode*)node_573)->finalize, ((struct sNode*)node_573)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_537,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_575=1;
            if(            *info->p==40) {
                info->p++;
                while(                xisdigit(*info->p)) {
                    time_out_575=time_out_575*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_576=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2331, "struct list$1sNode$ph*"))));
            blocks_577=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2332, "struct list$1sBlock$ph*"))));
            else_block_578=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2333, "struct sBlock*"))));
            while(            1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj216=else_block_578,
                    else_block_578=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj216,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_579=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_580=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_576,(struct sNode*)come_increment_ref_count(var_name_579));
                    list$1sBlock$ph_add(blocks_577,(struct sBlock*)come_increment_ref_count(block_580));
                    if(                    *info->p==125) {
                        ((var_name_579) ? var_name_579 = come_decrement_ref_count(var_name_579, ((struct sNode*)var_name_579)->finalize, ((struct sNode*)var_name_579)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_580,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_579) ? var_name_579 = come_decrement_ref_count(var_name_579, ((struct sNode*)var_name_579)->finalize, ((struct sNode*)var_name_579)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_580,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_536;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2363, "struct sNode");
            _inf_obj_value12=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value695=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2363, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_576),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_577),(struct sBlock*)come_increment_ref_count(else_block_578),time_out_575,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComePollNode_finalize;
            _inf_value12->clone=(void*)sComePollNode_clone;
            _inf_value12->compile=(void*)sComePollNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComePollNode_terminated;
            _inf_value12->kind=(void*)sComePollNode_kind;
            __result_obj__288 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value740=_inf_value12)));
            /*c*/ come_call_finalizer3(vars_576,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_577,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_578,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value695,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value740) ? __right_value740 = come_decrement_ref_count(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__288) ? __result_obj__288 = come_decrement_ref_count(__result_obj__288, ((struct sNode*)__result_obj__288)->finalize, ((struct sNode*)__result_obj__288)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__288;
            /*c*/ come_call_finalizer3(vars_576,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_577,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_578,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(buf_537,"__func__")||string_operator_equals(buf_537,"__FUNCTION__")) {
            info->sline_real=sline_real_536;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2368, "struct sNode");
            _inf_obj_value13=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value742=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2368, "struct sFuncNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFuncNode_finalize;
            _inf_value13->clone=(void*)sFuncNode_clone;
            _inf_value13->compile=(void*)sFuncNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFuncNode_kind;
            __result_obj__291 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value745=_inf_value13)));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value742,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value745) ? __right_value745 = come_decrement_ref_count(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__291) ? __result_obj__291 = come_decrement_ref_count(__result_obj__291, ((struct sNode*)__result_obj__291)->finalize, ((struct sNode*)__result_obj__291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__291;
        }
        else if(        !gComeC&&string_operator_equals(buf_537,"wildcard")) {
            info->sline_real=sline_real_536;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2372, "struct sNode");
            _inf_obj_value14=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value747=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2372, "struct sWildCard*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sWildCard_finalize;
            _inf_value14->clone=(void*)sWildCard_clone;
            _inf_value14->compile=(void*)sWildCard_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sWildCard_kind;
            __result_obj__294 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value750=_inf_value14)));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value747,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value750) ? __right_value750 = come_decrement_ref_count(__right_value750, ((struct sNode*)__right_value750)->finalize, ((struct sNode*)__right_value750)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__294;
        }
        else if(        string_operator_equals(buf_537,"__line__")||string_operator_equals(buf_537,"__LINE__")) {
            info->sline_real=sline_real_536;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode");
            _inf_obj_value15=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value752=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2376, "struct sLineNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLineNode_finalize;
            _inf_value15->clone=(void*)sLineNode_clone;
            _inf_value15->compile=(void*)sLineNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLineNode_kind;
            __result_obj__297 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value755=_inf_value15)));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value752,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value755) ? __right_value755 = come_decrement_ref_count(__right_value755, ((struct sNode*)__right_value755)->finalize, ((struct sNode*)__right_value755)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__297;
        }
        else if(        string_operator_equals(buf_537,"__sname__")) {
            info->sline_real=sline_real_536;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode");
            _inf_obj_value16=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value757=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2380, "struct sSNameNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sSNameNode_finalize;
            _inf_value16->clone=(void*)sSNameNode_clone;
            _inf_value16->compile=(void*)sSNameNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sSNameNode_kind;
            __result_obj__300 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value760=_inf_value16)));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value757,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value760) ? __right_value760 = come_decrement_ref_count(__right_value760, ((struct sNode*)__right_value760)->finalize, ((struct sNode*)__right_value760)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__300) ? __result_obj__300 = come_decrement_ref_count(__result_obj__300, ((struct sNode*)__result_obj__300)->finalize, ((struct sNode*)__result_obj__300)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__300;
        }
        else if(        string_operator_equals(buf_537,"__caller_func__")) {
            info->sline_real=sline_real_536;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value17=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value762=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2384, "struct sCallerFuncNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value17->clone=(void*)sCallerFuncNode_clone;
            _inf_value17->compile=(void*)sCallerFuncNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerFuncNode_kind;
            __result_obj__303 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value765=_inf_value17)));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value762,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value765) ? __right_value765 = come_decrement_ref_count(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__303) ? __result_obj__303 = come_decrement_ref_count(__result_obj__303, ((struct sNode*)__result_obj__303)->finalize, ((struct sNode*)__result_obj__303)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__303;
        }
        else if(        string_operator_equals(buf_537,"__caller_line__")) {
            info->sline_real=sline_real_536;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value18=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value767=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2388, "struct sCallerLineNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerLineNode_finalize;
            _inf_value18->clone=(void*)sCallerLineNode_clone;
            _inf_value18->compile=(void*)sCallerLineNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerLineNode_kind;
            __result_obj__306 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value770=_inf_value18)));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value767,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value770) ? __right_value770 = come_decrement_ref_count(__right_value770, ((struct sNode*)__right_value770)->finalize, ((struct sNode*)__right_value770)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__306;
        }
        else if(        string_operator_equals(buf_537,"__caller_sname__")) {
            info->sline_real=sline_real_536;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value19=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value772=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2392, "struct sCallerSNameNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value19->clone=(void*)sCallerSNameNode_clone;
            _inf_value19->compile=(void*)sCallerSNameNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerSNameNode_kind;
            __result_obj__309 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value775=_inf_value19)));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value772,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value775) ? __right_value775 = come_decrement_ref_count(__right_value775, ((struct sNode*)__right_value775)->finalize, ((struct sNode*)__right_value775)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__309;
        }
        else if(        info->va_arg&&is_type_name(buf_537,info)) {
            info->p=head_534;
            info->sline=head_sline_535;
            multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value776=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_625=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_626=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_627=multiple_assign_var13->v3;
            /*c*/ come_call_finalizer3(__right_value776,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_536;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2401, "struct sNode");
            _inf_obj_value20=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value778=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2401, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_625),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value20->clone=(void*)sVarArgTypeName_clone;
            _inf_value20->compile=(void*)sVarArgTypeName_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sVarArgTypeName_kind;
            __result_obj__312 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value782=_inf_value20)));
            /*c*/ come_call_finalizer3(type_625,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_626 = come_decrement_ref_count(name_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value778,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value782) ? __right_value782 = come_decrement_ref_count(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__312;
            /*c*/ come_call_finalizer3(type_625,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_626 = come_decrement_ref_count(name_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_537,"sizeof")||string_operator_equals(buf_537,"_Alignof")||string_operator_equals(buf_537,"_Alignas")||string_operator_equals(buf_537,"__alignof__")) {
            node_629=(struct sNode*)come_increment_ref_count(string_node_v21(buf_537,head_534,head_sline_535,info));
            info->sline_real=sline_real_536;
            __result_obj__313 = (struct sNode*)come_increment_ref_count(node_629);
            ((node_629) ? node_629 = come_decrement_ref_count(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__313;
            ((node_629) ? node_629 = come_decrement_ref_count(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_548) {
            buf2_630=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2410, "struct buffer*"))));
            if(            *info->p!=40) {
                word_631=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_630,word_631);
                (word_631 = come_decrement_ref_count(word_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_630,40);
            exps_632=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2421, "struct list$1sNode$ph*"))));
            while(            (_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_630,40);
                    info->p++;
                    exp_633=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_632,(struct sNode*)come_increment_ref_count(exp_633));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_630,41);
                    ((exp_633) ? exp_633 = come_decrement_ref_count(exp_633, ((struct sNode*)exp_633)->finalize, ((struct sNode*)exp_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_630,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_630,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    ((struct tuple2$2int$bool$*)(__right_value790=err_msg(info,"invalid source end at inline assembler")));
                    /*c*/ come_call_finalizer3(__right_value790,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_630,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_536;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2458, "struct sNode");
            _inf_obj_value21=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value793=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2458, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_630)),(struct list$1sNode$ph*)come_increment_ref_count(exps_632),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sInlineAssembler_finalize;
            _inf_value21->clone=(void*)sInlineAssembler_clone;
            _inf_value21->compile=(void*)sInlineAssembler_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sInlineAssembler_kind;
            __result_obj__316 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value798=_inf_value21)));
            /*c*/ come_call_finalizer3(buf2_630,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_632,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value793,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value798) ? __right_value798 = come_decrement_ref_count(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__316;
            /*c*/ come_call_finalizer3(buf2_630,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_632,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_544) {
            fun_name_635=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2461, "struct buffer*"))));
            buffer_append_str(fun_name_635,buf_537);
            type_636=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value803=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value802=buffer_to_string(fun_name_635))))))));
            (__right_value801 = come_decrement_ref_count(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value802 = come_decrement_ref_count(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value803,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_636==((void*)0)) {
                klass_643=((struct sClass*)(__right_value807=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value806=buffer_to_string(fun_name_635))))));
                (__right_value805 = come_decrement_ref_count(__right_value805, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value806 = come_decrement_ref_count(__right_value806, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value807,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_643) {
                    __dec_obj245=type_636,
                    type_636=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2471, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_537)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj245,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value811=err_msg(info,"null type(%s)",buf_537)));
                    /*c*/ come_call_finalizer3(__right_value811,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_636->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_635,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_635,"_");
            buf2_644=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_635,buf2_644);
            node_645=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value813=buffer_to_string(fun_name_635))),info,(_Bool)0));
            (__right_value813 = come_decrement_ref_count(__right_value813, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_536;
            __result_obj__325 = (struct sNode*)come_increment_ref_count(node_645);
            /*c*/ come_call_finalizer3(fun_name_635,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_636,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_644 = come_decrement_ref_count(buf2_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_645) ? node_645 = come_decrement_ref_count(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__325;
            /*c*/ come_call_finalizer3(fun_name_635,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_636,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_644 = come_decrement_ref_count(buf2_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_645) ? node_645 = come_decrement_ref_count(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_646=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2506, "struct buffer*"))));
            buffer_append_str(fun_name_646,buf_537);
            buffer_append_str(fun_name_646,"_");
            buf2_647=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_646,buf2_647);
            node_648=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value818=buffer_to_string(fun_name_646))),info,(_Bool)0));
            (__right_value818 = come_decrement_ref_count(__right_value818, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_536;
            __result_obj__326 = (struct sNode*)come_increment_ref_count(node_648);
            /*c*/ come_call_finalizer3(fun_name_646,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_647 = come_decrement_ref_count(buf2_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_648) ? node_648 = come_decrement_ref_count(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__326;
            /*c*/ come_call_finalizer3(fun_name_646,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_647 = come_decrement_ref_count(buf2_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_648) ? node_648 = come_decrement_ref_count(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_546) {
            node_649=(struct sNode*)come_increment_ref_count(parse_function_call(buf_537,info,(_Bool)0));
            info->sline_real=sline_real_536;
            __result_obj__327 = (struct sNode*)come_increment_ref_count(node_649);
            ((node_649) ? node_649 = come_decrement_ref_count(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__327;
            ((node_649) ? node_649 = come_decrement_ref_count(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_540&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__538)) {
            node_650=(struct sNode*)come_increment_ref_count(parse_function_call(buf_537,info,(_Bool)0));
            info->sline_real=sline_real_536;
            __result_obj__328 = (struct sNode*)come_increment_ref_count(node_650);
            ((node_650) ? node_650 = come_decrement_ref_count(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__328;
            ((node_650) ? node_650 = come_decrement_ref_count(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_651=(struct sNode*)come_increment_ref_count(string_node_v21(buf_537,head_534,head_sline_535,info));
            info->sline_real=sline_real_536;
            __result_obj__329 = (struct sNode*)come_increment_ref_count(node_651);
            ((node_651) ? node_651 = come_decrement_ref_count(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__329) ? __result_obj__329 = come_decrement_ref_count(__result_obj__329, ((struct sNode*)__result_obj__329)->finalize, ((struct sNode*)__result_obj__329)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__329;
            ((node_651) ? node_651 = come_decrement_ref_count(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_537 = come_decrement_ref_count(buf_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_652=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__330 = (struct sNode*)come_increment_ref_count(node_652);
        ((node_652) ? node_652 = come_decrement_ref_count(node_652, ((struct sNode*)node_652)->finalize, ((struct sNode*)node_652)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__330) ? __result_obj__330 = come_decrement_ref_count(__result_obj__330, ((struct sNode*)__result_obj__330)->finalize, ((struct sNode*)__result_obj__330)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__330;
        ((node_652) ? node_652 = come_decrement_ref_count(node_652, ((struct sNode*)node_652)->finalize, ((struct sNode*)node_652)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    ((struct tuple2$2int$bool$*)(__right_value824=err_msg(info,"unexpected operator(%c)",*info->p)));
    /*c*/ come_call_finalizer3(__right_value824,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__331 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__331;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__254;
void* __right_value655 = (void*)0;
struct sOutputNode* result_555;
void* __right_value656 = (void*)0;
char* __dec_obj208;
void* __right_value657 = (void*)0;
char* __dec_obj209;
struct sOutputNode* __result_obj__255;
    if(    self==(void*)0) {
        __result_obj__254 = (void*)0;
        return __result_obj__254;
    }
    result_555=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_555->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj208=result_555->sname,
        result_555->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_555->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj209=result_555->contents,
        result_555->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__255 = result_555;
    /*c*/ come_call_finalizer3(result_555,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__255;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__259;
void* __right_value671 = (void*)0;
struct sComeCallNode* result_570;
void* __right_value672 = (void*)0;
char* __dec_obj212;
void* __right_value673 = (void*)0;
struct buffer* __dec_obj213;
struct sComeCallNode* __result_obj__260;
    if(    self==(void*)0) {
        __result_obj__259 = (void*)0;
        return __result_obj__259;
    }
    result_570=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_570->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_570->sname,
        result_570->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj213=result_570->come_block,
        result_570->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj213,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->come_block_sline=self->come_block_sline;
    }
    __result_obj__260 = result_570;
    /*c*/ come_call_finalizer3(result_570,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__262;
void* __right_value678 = (void*)0;
struct sComeJoinNode* result_574;
void* __right_value679 = (void*)0;
char* __dec_obj214;
void* __right_value680 = (void*)0;
struct sNode* __dec_obj215;
struct sComeJoinNode* __result_obj__263;
    if(    self==(void*)0) {
        __result_obj__262 = (void*)0;
        return __result_obj__262;
    }
    result_574=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_574->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj214=result_574->sname,
        result_574->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_574->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj215=result_574->node,
        result_574->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__263 = result_574;
    /*c*/ come_call_finalizer3(result_574,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__265;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__265 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value691 = (void*)0;
struct list_item$1sBlock$ph* litem_581;
struct sBlock* __dec_obj217;
void* __right_value692 = (void*)0;
struct list_item$1sBlock$ph* litem_582;
struct sBlock* __dec_obj218;
void* __right_value693 = (void*)0;
struct list_item$1sBlock$ph* litem_583;
struct sBlock* __dec_obj219;
struct list$1sBlock$ph* __result_obj__266;
    if(    self->len==0) {
        litem_581=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value691=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1043, "struct list_item$1sBlock$ph*"))));
        litem_581->prev=((void*)0);
        litem_581->next=((void*)0);
        __dec_obj217=litem_581->item,
        litem_581->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj217,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_581;
        self->head=litem_581;
    }
    else if(    self->len==1) {
        litem_582=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value692=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1053, "struct list_item$1sBlock$ph*"))));
        litem_582->prev=self->head;
        litem_582->next=((void*)0);
        __dec_obj218=litem_582->item,
        litem_582->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj218,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_582;
        self->head->next=litem_582;
    }
    else {
        litem_583=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value693=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1063, "struct list_item$1sBlock$ph*"))));
        litem_583->prev=self->tail;
        litem_583->next=((void*)0);
        __dec_obj219=litem_583->item,
        litem_583->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj219,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_583;
        self->tail=litem_583;
    }
    self->len++;
    __result_obj__266 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__267;
void* __right_value696 = (void*)0;
struct sComePollNode* result_584;
void* __right_value697 = (void*)0;
char* __dec_obj220;
void* __right_value698 = (void*)0;
struct list$1sNode$ph* __dec_obj221;
void* __right_value738 = (void*)0;
struct list$1sBlock$ph* __dec_obj231;
void* __right_value739 = (void*)0;
struct sBlock* __dec_obj232;
struct sComePollNode* __result_obj__287;
    if(    self==(void*)0) {
        __result_obj__267 = (void*)0;
        return __result_obj__267;
    }
    result_584=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj220=result_584->sname,
        result_584->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj221=result_584->vars,
        result_584->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        /*b*/ come_call_finalizer3(__dec_obj221,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj231=result_584->blocks,
        result_584->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj231,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj232=result_584->else_block,
        result_584->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj232,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->time_out=self->time_out;
    }
    __result_obj__287 = result_584;
    /*c*/ come_call_finalizer3(result_584,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__287;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__268;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1sBlock$ph* result_585;
struct list_item$1sBlock$ph* it_586;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1sBlock$ph* __result_obj__286;
    if(    self==((void*)0)) {
        __result_obj__268 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__268,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__268;
    }
    result_585=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1024, "struct list$1sBlock$ph*"))));
    it_586=self->head;
    while(    it_586!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_585,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_586->item)));
        }
        else {
            list$1sBlock$ph_add(result_585,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_586->item)));
        }
        it_586=it_586->next;
    }
    __result_obj__286 = (struct list$1sBlock$ph*)come_increment_ref_count(result_585);
    /*c*/ come_call_finalizer3(result_585,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__286,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__269;
void* __right_value701 = (void*)0;
struct sBlock* result_587;
void* __right_value706 = (void*)0;
struct list$1sNode$ph* __dec_obj222;
void* __right_value735 = (void*)0;
struct sVarTable* __dec_obj230;
struct sBlock* __result_obj__285;
    if(    self==(void*)0) {
        __result_obj__269 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__269,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__269;
    }
    result_587=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj222=result_587->mNodes,
        result_587->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj222,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj230=result_587->mVarTable,
        result_587->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj230,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__285 = (struct sBlock*)come_increment_ref_count(result_587);
    /*c*/ come_call_finalizer3(result_587,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__270;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct list$1sNode$ph* result_588;
struct list_item$1sNode$ph* it_589;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1sNode$ph* __result_obj__271;
    if(    self==((void*)0)) {
        __result_obj__270 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__270,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__270;
    }
    result_588=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_589=self->head;
    while(    it_589!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_588,(struct sNode*)come_increment_ref_count(sNode_clone(it_589->item)));
        }
        else {
            list$1sNode$ph_add(result_588,(struct sNode*)come_increment_ref_count(sNode_clone(it_589->item)));
        }
        it_589=it_589->next;
    }
    __result_obj__271 = (struct list$1sNode$ph*)come_increment_ref_count(result_588);
    /*c*/ come_call_finalizer3(result_588,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__272;
void* __right_value707 = (void*)0;
struct sVarTable* result_590;
void* __right_value734 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj229;
struct sVarTable* __result_obj__284;
    if(    self==(void*)0) {
        __result_obj__272 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__272,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__272;
    }
    result_590=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj229=result_590->mVars,
        result_590->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj229,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_590->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_590->mParent=self->mParent;
    }
    __result_obj__284 = (struct sVarTable*)come_increment_ref_count(result_590);
    /*c*/ come_call_finalizer3(result_590,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__273;
void* __right_value708 = (void*)0;
void* __right_value714 = (void*)0;
struct map$2char$phsVar$ph* result_594;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct list$1char$ph* __dec_obj224;
char* it_595;
struct sVar* default_value_596;
void* __right_value717 = (void*)0;
struct sVar* it2_599;
void* __right_value723 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__283;
default_value_596 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__273 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__273,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__273;
    }
    result_594=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1985, "struct map$2char$phsVar$ph*"))));
    __dec_obj224=result_594->key_list,
    result_594->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1987, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj224,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_595=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_595=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_596,0,sizeof(struct sVar*));
        it2_599=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_595,(struct sVar*)come_increment_ref_count(default_value_596)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_594,(char*)come_increment_ref_count((char*)come_memdup(it_595, "./comelang.h", 1996, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_599)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_594,(char*)come_increment_ref_count((char*)come_memdup(it_595, "./comelang.h", 1999, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_599)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_594,(char*)come_increment_ref_count(it_595),(struct sVar*)come_increment_ref_count(sVar_clone(it2_599)));
        }
        else {
            map$2char$phsVar$ph_put(result_594,(char*)come_increment_ref_count(it_595),(struct sVar*)come_increment_ref_count(sVar_clone(it2_599)));
        }
        /*c*/ come_call_finalizer3(default_value_596,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_599,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__283 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_594);
    /*c*/ come_call_finalizer3(result_594,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__283,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
int i_591;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1char$ph* __dec_obj223;
struct map$2char$phsVar$ph* __result_obj__275;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value709=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value710=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1915, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value711=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_591=0;    i_591<128;    i_591++    ){
        self->item_existance[i_591]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj223=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj223,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__275 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__274;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__274 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_592;
struct list_item$1char$p* prev_it_593;
    it_592=self->head;
    while(    it_592!=((void*)0)) {
        prev_it_593=it_592;
        it_592=it_592->next;
        /*c*/ come_call_finalizer3(prev_it_593,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_597;
unsigned int it_598;
struct sVar* __result_obj__276;
struct sVar* __result_obj__277;
struct sVar* __result_obj__278;
struct sVar* __result_obj__279;
    hash_597=string_get_hash_key(((char*)key))%self->size;
    it_598=hash_597;
    while(    (_Bool)1) {
        if(        self->item_existance[it_598]) {
            if(            string_equals(self->keys[it_598],key)) {
                __result_obj__276 = (struct sVar*)come_increment_ref_count(self->items[it_598]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__276,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__276;
            }
            it_598++;
            if(            it_598>=self->size) {
                it_598=0;
            }
            else if(            it_598==hash_597) {
                __result_obj__277 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__277,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__277;
            }
        }
        else {
            __result_obj__278 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__278,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__278;
        }
    }
    __result_obj__279 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_611;
int it_612;
_Bool same_key_exist_613;
char* it2_614;
struct map$2char$phsVar$ph* __result_obj__280;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_611=string_get_hash_key(((char*)key))%self->size;
    it_612=hash_611;
    while(    (_Bool)1) {
        if(        self->item_existance[it_612]) {
            if(            string_equals(self->keys[it_612],key)) {
                if(                1) {
                    (self->keys[it_612] = come_decrement_ref_count(self->keys[it_612], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_612]);
                    self->keys[it_612]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_612]);
                    self->keys[it_612]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_612],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_612]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_612]=item;
                }
                break;
            }
            it_612++;
            if(            it_612>=self->size) {
                it_612=0;
            }
            else if(            it_612==hash_611) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_612]=(_Bool)1;
            if(            1) {
                self->keys[it_612]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_612]=key;
            }
            if(            1) {
                self->items[it_612]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_612]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_613=(_Bool)0;
    for(    it2_614=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_614=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_614,key)) {
            same_key_exist_613=(_Bool)1;
        }
    }
    if(    !same_key_exist_613) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__280 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_600;
void* __right_value718 = (void*)0;
char** keys_601;
void* __right_value719 = (void*)0;
struct sVar** items_602;
void* __right_value720 = (void*)0;
_Bool* item_existance_603;
int len_604;
char* it_605;
struct sVar* default_value_606;
void* __right_value721 = (void*)0;
struct sVar* it2_607;
unsigned int hash_608;
int n_609;
struct sVar* default_value_610;
void* __right_value722 = (void*)0;
default_value_606 = (void*)0;
default_value_610 = (void*)0;
    size_600=self->size*10;
    keys_601=(char**)come_increment_ref_count(((char**)(__right_value718=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_600)), "./comelang.h", 2153, "char**"))));
    items_602=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value719=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_600)), "./comelang.h", 2154, "struct sVar**"))));
    item_existance_603=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value720=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_600)), "./comelang.h", 2155, "_Bool*"))));
    len_604=0;
    for(    it_605=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_605=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_606,0,sizeof(struct sVar*));
        it2_607=((struct sVar*)(__right_value721=map$2char$phsVar$ph_at(self,it_605,(struct sVar*)come_increment_ref_count(default_value_606))));
        /*c*/ come_call_finalizer3(__right_value721,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_608=string_get_hash_key(((char*)it_605))%size_600;
        n_609=hash_608;
        while(        (_Bool)1) {
            if(            item_existance_603[n_609]) {
                n_609++;
                if(                n_609>=size_600) {
                    n_609=0;
                }
                else if(                n_609==hash_608) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_603[n_609]=(_Bool)1;
                keys_601[n_609]=it_605;
                items_602[n_609]=((struct sVar*)(__right_value722=map$2char$phsVar$ph_at(self,it_605,(struct sVar*)come_increment_ref_count(default_value_610))));
                /*c*/ come_call_finalizer3(__right_value722,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_604++;
                /*c*/ come_call_finalizer3(default_value_610,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_610,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_606,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_601;
    self->items=items_602;
    self->item_existance=item_existance_603;
    self->size=size_600;
    self->len=len_604;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__281;
void* __right_value724 = (void*)0;
struct sVar* result_615;
void* __right_value725 = (void*)0;
char* __dec_obj225;
void* __right_value726 = (void*)0;
char* __dec_obj226;
void* __right_value727 = (void*)0;
struct sType* __dec_obj227;
void* __right_value728 = (void*)0;
char* __dec_obj228;
struct sVar* __result_obj__282;
    if(    self==(void*)0) {
        __result_obj__281 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__281,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__281;
    }
    result_615=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj225=result_615->mName,
        result_615->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj226=result_615->mCValueName,
        result_615->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj227=result_615->mType,
        result_615->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj227,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_615->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_615->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_615->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_615->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj228=result_615->mFunName,
        result_615->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__282 = (struct sVar*)come_increment_ref_count(result_615);
    /*c*/ come_call_finalizer3(result_615,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__282,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_616;
int i_617;
    for(    i_616=0;    i_616<self->size;    i_616++    ){
        if(        self->item_existance[i_616]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_616],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_617=0;    i_617<self->size;    i_617++    ){
        if(        self->item_existance[i_617]) {
            if(            1) {
                (self->keys[i_617] = come_decrement_ref_count(self->keys[i_617], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__289;
void* __right_value743 = (void*)0;
struct sFuncNode* result_618;
void* __right_value744 = (void*)0;
char* __dec_obj233;
struct sFuncNode* __result_obj__290;
    if(    self==(void*)0) {
        __result_obj__289 = (void*)0;
        return __result_obj__289;
    }
    result_618=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_618->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_618->sname,
        result_618->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->sline_real=self->sline_real;
    }
    __result_obj__290 = result_618;
    /*c*/ come_call_finalizer3(result_618,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__290;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__292;
void* __right_value748 = (void*)0;
struct sWildCard* result_619;
void* __right_value749 = (void*)0;
char* __dec_obj234;
struct sWildCard* __result_obj__293;
    if(    self==(void*)0) {
        __result_obj__292 = (void*)0;
        return __result_obj__292;
    }
    result_619=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_619->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_619->sname,
        result_619->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_619->sline_real=self->sline_real;
    }
    __result_obj__293 = result_619;
    /*c*/ come_call_finalizer3(result_619,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__295;
void* __right_value753 = (void*)0;
struct sLineNode* result_620;
void* __right_value754 = (void*)0;
char* __dec_obj235;
struct sLineNode* __result_obj__296;
    if(    self==(void*)0) {
        __result_obj__295 = (void*)0;
        return __result_obj__295;
    }
    result_620=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_620->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj235=result_620->sname,
        result_620->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->sline_real=self->sline_real;
    }
    __result_obj__296 = result_620;
    /*c*/ come_call_finalizer3(result_620,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__298;
void* __right_value758 = (void*)0;
struct sSNameNode* result_621;
void* __right_value759 = (void*)0;
char* __dec_obj236;
struct sSNameNode* __result_obj__299;
    if(    self==(void*)0) {
        __result_obj__298 = (void*)0;
        return __result_obj__298;
    }
    result_621=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_621->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_621->sname,
        result_621->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_621->sline_real=self->sline_real;
    }
    __result_obj__299 = result_621;
    /*c*/ come_call_finalizer3(result_621,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__301;
void* __right_value763 = (void*)0;
struct sCallerFuncNode* result_622;
void* __right_value764 = (void*)0;
char* __dec_obj237;
struct sCallerFuncNode* __result_obj__302;
    if(    self==(void*)0) {
        __result_obj__301 = (void*)0;
        return __result_obj__301;
    }
    result_622=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_622->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_622->sname,
        result_622->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_622->sline_real=self->sline_real;
    }
    __result_obj__302 = result_622;
    /*c*/ come_call_finalizer3(result_622,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__304;
void* __right_value768 = (void*)0;
struct sCallerLineNode* result_623;
void* __right_value769 = (void*)0;
char* __dec_obj238;
struct sCallerLineNode* __result_obj__305;
    if(    self==(void*)0) {
        __result_obj__304 = (void*)0;
        return __result_obj__304;
    }
    result_623=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_623->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj238=result_623->sname,
        result_623->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_623->sline_real=self->sline_real;
    }
    __result_obj__305 = result_623;
    /*c*/ come_call_finalizer3(result_623,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__307;
void* __right_value773 = (void*)0;
struct sCallerSNameNode* result_624;
void* __right_value774 = (void*)0;
char* __dec_obj239;
struct sCallerSNameNode* __result_obj__308;
    if(    self==(void*)0) {
        __result_obj__307 = (void*)0;
        return __result_obj__307;
    }
    result_624=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_624->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_624->sname,
        result_624->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_624->sline_real=self->sline_real;
    }
    __result_obj__308 = result_624;
    /*c*/ come_call_finalizer3(result_624,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__310;
void* __right_value779 = (void*)0;
struct sVarArgTypeName* result_628;
void* __right_value780 = (void*)0;
char* __dec_obj240;
void* __right_value781 = (void*)0;
struct sType* __dec_obj241;
struct sVarArgTypeName* __result_obj__311;
    if(    self==(void*)0) {
        __result_obj__310 = (void*)0;
        return __result_obj__310;
    }
    result_628=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_628->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_628->sname,
        result_628->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_628->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj241=result_628->type,
        result_628->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj241,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__311 = result_628;
    /*c*/ come_call_finalizer3(result_628,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__311;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__314;
void* __right_value794 = (void*)0;
struct sInlineAssembler* result_634;
void* __right_value795 = (void*)0;
char* __dec_obj242;
void* __right_value796 = (void*)0;
char* __dec_obj243;
void* __right_value797 = (void*)0;
struct list$1sNode$ph* __dec_obj244;
struct sInlineAssembler* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_634=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_634->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj242=result_634->sname,
        result_634->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_634->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj243=result_634->source,
        result_634->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj244=result_634->exps,
        result_634->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj244,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__315 = result_634;
    /*c*/ come_call_finalizer3(result_634,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_637;
unsigned int hash_638;
unsigned int it_639;
struct sType* __result_obj__317;
struct sType* __result_obj__318;
struct sType* __result_obj__319;
struct sType* __result_obj__320;
default_value_637 = (void*)0;
    memset(&default_value_637,0,sizeof(struct sType*));
    hash_638=string_get_hash_key(((char*)key))%self->size;
    it_639=hash_638;
    while(    (_Bool)1) {
        if(        self->item_existance[it_639]) {
            if(            string_equals(self->keys[it_639],key)) {
                __result_obj__317 = (struct sType*)come_increment_ref_count(self->items[it_639]);
                /*c*/ come_call_finalizer3(default_value_637,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__317;
            }
            it_639++;
            if(            it_639>=self->size) {
                it_639=0;
            }
            else if(            it_639==hash_638) {
                __result_obj__318 = (struct sType*)come_increment_ref_count(default_value_637);
                /*c*/ come_call_finalizer3(default_value_637,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__318,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__318;
            }
        }
        else {
            __result_obj__319 = (struct sType*)come_increment_ref_count(default_value_637);
            /*c*/ come_call_finalizer3(default_value_637,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__319,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__319;
        }
    }
    __result_obj__320 = (struct sType*)come_increment_ref_count(default_value_637);
    /*c*/ come_call_finalizer3(default_value_637,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__320;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_640;
unsigned int hash_641;
unsigned int it_642;
struct sType* __result_obj__321;
struct sType* __result_obj__322;
struct sType* __result_obj__323;
struct sType* __result_obj__324;
default_value_640 = (void*)0;
    memset(&default_value_640,0,sizeof(struct sType*));
    hash_641=string_get_hash_key(((char*)key))%self->size;
    it_642=hash_641;
    while(    (_Bool)1) {
        if(        self->item_existance[it_642]) {
            if(            string_equals(self->keys[it_642],key)) {
                __result_obj__321 = (struct sType*)come_increment_ref_count(self->items[it_642]);
                /*c*/ come_call_finalizer3(default_value_640,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__321,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__321;
            }
            it_642++;
            if(            it_642>=self->size) {
                it_642=0;
            }
            else if(            it_642==hash_641) {
                __result_obj__322 = (struct sType*)come_increment_ref_count(default_value_640);
                /*c*/ come_call_finalizer3(default_value_640,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__322;
            }
        }
        else {
            __result_obj__323 = (struct sType*)come_increment_ref_count(default_value_640);
            /*c*/ come_call_finalizer3(default_value_640,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__323,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__323;
        }
    }
    __result_obj__324 = (struct sType*)come_increment_ref_count(default_value_640);
    /*c*/ come_call_finalizer3(default_value_640,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__324,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value825 = (void*)0;
struct sNode* __result_obj__332;
    __result_obj__332 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value825=expression_node_v99(info))));
    ((__right_value825) ? __right_value825 = come_decrement_ref_count(__right_value825, ((struct sNode*)__right_value825)->finalize, ((struct sNode*)__right_value825)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__332) ? __result_obj__332 = come_decrement_ref_count(__result_obj__332, ((struct sNode*)__result_obj__332)->finalize, ((struct sNode*)__result_obj__332)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__332;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sNode* __dec_obj246;
struct sNode* __result_obj__333;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sNode* __dec_obj247;
struct sNode* __result_obj__334;
struct sNode* __result_obj__335;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj246=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__333 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__333) ? __result_obj__333 = come_decrement_ref_count(__result_obj__333, ((struct sNode*)__result_obj__333)->finalize, ((struct sNode*)__result_obj__333)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__333;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj247=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj247 ? __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__334 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__334) ? __result_obj__334 = come_decrement_ref_count(__result_obj__334, ((struct sNode*)__result_obj__334)->finalize, ((struct sNode*)__result_obj__334)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__334;
    }
    __result_obj__335 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__335) ? __result_obj__335 = come_decrement_ref_count(__result_obj__335, ((struct sNode*)__result_obj__335)->finalize, ((struct sNode*)__result_obj__335)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__335;
}

struct sNode* statment(struct sInfo* info){
void* __right_value830 = (void*)0;
struct sNode* node_653;
void* __right_value831 = (void*)0;
struct sNode* __dec_obj248;
struct sNode* __result_obj__336;
    node_653=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj248=node_653,
    node_653=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_653),info));
    (__dec_obj248 ? __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__336 = (struct sNode*)come_increment_ref_count(node_653);
    ((node_653) ? node_653 = come_decrement_ref_count(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__336) ? __result_obj__336 = come_decrement_ref_count(__result_obj__336, ((struct sNode*)__result_obj__336)->finalize, ((struct sNode*)__result_obj__336)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__336;
}

char* get_none_generics_name(char* class_name){
char* p_654;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
char* __result_obj__337;
void* __right_value834 = (void*)0;
char* __result_obj__338;
    p_654=class_name;
    while(    *p_654) {
        if(        *p_654==36) {
            __result_obj__337 = (char*)come_increment_ref_count(((char*)(__right_value833=charp_substring(((char*)(__right_value832=__builtin_string(class_name))),0,p_654-class_name))));
            (__right_value832 = come_decrement_ref_count(__right_value832, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value833 = come_decrement_ref_count(__right_value833, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__337 = come_decrement_ref_count(__result_obj__337, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__337;
        }
        else {
            p_654++;
        }
    }
    __result_obj__338 = (char*)come_increment_ref_count(((char*)(__right_value834=__builtin_string(class_name))));
    (__right_value834 = come_decrement_ref_count(__right_value834, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__338 = come_decrement_ref_count(__result_obj__338, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__338;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct buffer* buf_655;
struct sClass* klass_656;
char* class_name_657;
int i_658;
void* __right_value837 = (void*)0;
struct sType* type_659;
void* __right_value838 = (void*)0;
char* type_name_660;
int i_661;
void* __right_value839 = (void*)0;
char* __result_obj__339;
    buf_655=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2606, "struct buffer*"))));
    klass_656=generics_type->mClass;
    class_name_657=klass_656->mName;
    buffer_append_str(buf_655,class_name_657);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_655,36);
        buffer_append_char(buf_655,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_658=0;        i_658<list$1sType$ph_length(generics_type->mGenericsTypes);        i_658++        ){
            type_659=((struct sType*)(__right_value837=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_658)));
            /*c*/ come_call_finalizer3(__right_value837,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_660=(char*)come_increment_ref_count(create_generics_name(type_659,info));
            buffer_append_str(buf_655,type_name_660);
            buffer_append_char(buf_655,36);
            for(            i_661=0;            i_661<type_659->mPointerNum;            i_661++            ){
                buffer_append_char(buf_655,112);
            }
            if(            type_659->mHeap) {
                buffer_append_str(buf_655,"h");
            }
            (type_name_660 = come_decrement_ref_count(type_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__339 = (char*)come_increment_ref_count(((char*)(__right_value839=buffer_to_string(buf_655))));
    /*c*/ come_call_finalizer3(buf_655,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value839 = come_decrement_ref_count(__right_value839, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__339 = come_decrement_ref_count(__result_obj__339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__339;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_662;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct buffer* buf_663;
void* __right_value842 = (void*)0;
char* __dec_obj249;
void* __right_value843 = (void*)0;
char* __dec_obj250;
int i_664;
void* __right_value844 = (void*)0;
char* __dec_obj251;
void* __right_value845 = (void*)0;
char* __dec_obj252;
void* __right_value846 = (void*)0;
char* __dec_obj253;
int i_665;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
char* __result_obj__340;
struct_name_662 = (void*)0;
    buf_663=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2641, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj249=struct_name_662,
        struct_name_662=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_662,"_Bool")) {
            __dec_obj250=struct_name_662,
            struct_name_662=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_663,"$");
            }
            for(            i_664=0;            i_664<obj_type->mOriginalTypeNamePointerNum;            i_664++            ){
                buffer_append_str(buf_663,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj251=struct_name_662,
        struct_name_662=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_662,"_Bool")) {
            __dec_obj252=struct_name_662,
            struct_name_662=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj253=struct_name_662,
        struct_name_662=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_663,"$");
        }
        for(        i_665=0;        i_665<obj_type->mPointerNum;        i_665++        ){
            buffer_append_str(buf_663,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_663,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_663,"pa");
    }
    __result_obj__340 = (char*)come_increment_ref_count(((char*)(__right_value848=xsprintf("%s%s_%s",struct_name_662,((char*)(__right_value847=buffer_to_string(buf_663))),fun_name))));
    (struct_name_662 = come_decrement_ref_count(struct_name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value847 = come_decrement_ref_count(__right_value847, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value848 = come_decrement_ref_count(__right_value848, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__340 = come_decrement_ref_count(__result_obj__340, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__340;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_666;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct buffer* buf_667;
void* __right_value851 = (void*)0;
char* __dec_obj254;
void* __right_value852 = (void*)0;
char* __dec_obj255;
void* __right_value853 = (void*)0;
char* __dec_obj256;
int i_668;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
char* __result_obj__341;
struct_name_666 = (void*)0;
    buf_667=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2688, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj254=struct_name_666,
        struct_name_666=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_666,"_Bool")) {
            __dec_obj255=struct_name_666,
            struct_name_666=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj256=struct_name_666,
        struct_name_666=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_667,"$");
        }
        for(        i_668=0;        i_668<obj_type->mPointerNum;        i_668++        ){
            buffer_append_str(buf_667,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_667,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_667,"pa");
    }
    __result_obj__341 = (char*)come_increment_ref_count(((char*)(__right_value855=xsprintf("%s%s_%s",struct_name_666,((char*)(__right_value854=buffer_to_string(buf_667))),fun_name))));
    (struct_name_666 = come_decrement_ref_count(struct_name_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_667,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value854 = come_decrement_ref_count(__right_value854, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value855 = come_decrement_ref_count(__right_value855, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__341 = come_decrement_ref_count(__result_obj__341, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__341;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_669;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct buffer* buf_670;
void* __right_value858 = (void*)0;
char* __dec_obj257;
void* __right_value859 = (void*)0;
char* __dec_obj258;
int i_671;
void* __right_value860 = (void*)0;
char* __dec_obj259;
void* __right_value861 = (void*)0;
char* __dec_obj260;
void* __right_value862 = (void*)0;
char* __dec_obj261;
int i_672;
void* __right_value863 = (void*)0;
int len_674;
void* __right_value864 = (void*)0;
char* __result_obj__342;
struct_name_669 = (void*)0;
    buf_670=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2720, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj257=struct_name_669,
        struct_name_669=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_669,"_Bool")) {
            __dec_obj258=struct_name_669,
            struct_name_669=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_670,"$");
            }
            for(            i_671=0;            i_671<obj_type->mOriginalTypeNamePointerNum;            i_671++            ){
                buffer_append_str(buf_670,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj259=struct_name_669,
        struct_name_669=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_669,"_Bool")) {
            __dec_obj260=struct_name_669,
            struct_name_669=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj261=struct_name_669,
        struct_name_669=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_670,"$");
        }
        for(        i_672=0;        i_672<obj_type->mPointerNum;        i_672++        ){
            buffer_append_str(buf_670,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_670,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_670,"pa");
    }
    char none_method_name_673[charp_length(fun_name)+1];
    memset(&none_method_name_673, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_674=string_length(struct_name_669)+string_length(((char*)(__right_value863=buffer_to_string(buf_670))));
    (__right_value863 = come_decrement_ref_count(__right_value863, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_673,fun_name+len_674+1,charp_length(fun_name)-len_674-1);
    none_method_name_673[charp_length(fun_name)-len_674-1]=0;
    __result_obj__342 = (char*)come_increment_ref_count(((char*)(__right_value864=__builtin_string(none_method_name_673))));
    (struct_name_669 = come_decrement_ref_count(struct_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_670,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value864 = come_decrement_ref_count(__right_value864, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__342 = come_decrement_ref_count(__result_obj__342, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__342;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value865 = (void*)0;
char* struct_name_675;
void* __right_value866 = (void*)0;
char* __dec_obj262;
void* __right_value867 = (void*)0;
char* __result_obj__343;
    struct_name_675=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name_675,"_Bool")) {
        __dec_obj262=struct_name_675,
        struct_name_675=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__343 = (char*)come_increment_ref_count(((char*)(__right_value867=xsprintf("%s_%s",struct_name_675,fun_name))));
    (struct_name_675 = come_decrement_ref_count(struct_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value867 = come_decrement_ref_count(__right_value867, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__343 = come_decrement_ref_count(__result_obj__343, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__343;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value868 = (void*)0;
struct sNode* __result_obj__344;
    ((struct tuple2$2int$bool$*)(__right_value868=err_msg(info,"unexpected word(%s)(2)",buf)));
    /*c*/ come_call_finalizer3(__right_value868,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__344 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__344) ? __result_obj__344 = come_decrement_ref_count(__result_obj__344, ((struct sNode*)__result_obj__344)->finalize, ((struct sNode*)__result_obj__344)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__344;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_676;
char* p_677;
int sline_678;
_Bool err_flag_679;
void* __right_value871 = (void*)0;
char* label_680;
void* __right_value872 = (void*)0;
char* __dec_obj263;
char* __dec_obj264;
_Bool no_comma_681;
_Bool in_fun_param_682;
void* __right_value873 = (void*)0;
struct sNode* node_683;
void* __right_value874 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sNode* _inf_value22;
struct sLambdaCall* _inf_obj_value22;
void* __right_value883 = (void*)0;
struct sNode* __result_obj__347;
struct sNode* __result_obj__348;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_676=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2798, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_677=info->p;
            sline_678=info->sline;
            err_flag_679=(_Bool)0;
            label_680=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj263=label_680,
                label_680=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_679=(_Bool)1;
            }
            if(            err_flag_679==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj264=label_680,
                label_680=((void*)0);
                __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_677;
                info->sline=sline_678;
            }
            no_comma_681=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_682=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_683=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj265=node_683,
            node_683=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_683),info));
            (__dec_obj265 ? __dec_obj265 = come_decrement_ref_count(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_681;
            info->in_fun_param=in_fun_param_682;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_676,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2841, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_680),(struct sNode*)come_increment_ref_count(node_683))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_680 = come_decrement_ref_count(label_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_683) ? node_683 = come_decrement_ref_count(node_683, ((struct sNode*)node_683)->finalize, ((struct sNode*)node_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_680 = come_decrement_ref_count(label_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_683) ? node_683 = come_decrement_ref_count(node_683, ((struct sNode*)node_683)->finalize, ((struct sNode*)node_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2859, "struct sNode");
        _inf_obj_value22=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value878=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2859, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_676,info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sLambdaCall_finalize;
        _inf_value22->clone=(void*)sLambdaCall_clone;
        _inf_value22->compile=(void*)sLambdaCall_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sLambdaCall_kind;
        __result_obj__347 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value883=_inf_value22)));
        /*c*/ come_call_finalizer3(params_676,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value878,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value883) ? __right_value883 = come_decrement_ref_count(__right_value883, ((struct sNode*)__right_value883)->finalize, ((struct sNode*)__right_value883)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__347;
        /*c*/ come_call_finalizer3(params_676,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__348 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__348) ? __result_obj__348 = come_decrement_ref_count(__result_obj__348, ((struct sNode*)__result_obj__348)->finalize, ((struct sNode*)__result_obj__348)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__348;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__345;
void* __right_value879 = (void*)0;
struct sLambdaCall* result_684;
void* __right_value880 = (void*)0;
char* __dec_obj266;
void* __right_value881 = (void*)0;
struct sNode* __dec_obj267;
void* __right_value882 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj268;
struct sLambdaCall* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = (void*)0;
        return __result_obj__345;
    }
    result_684=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_684->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_684->sname,
        result_684->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_684->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj267=result_684->node,
        result_684->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj267 ? __dec_obj267 = come_decrement_ref_count(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj268=result_684->params,
        result_684->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj268,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__346 = result_684;
    /*c*/ come_call_finalizer3(result_684,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__346;
}

